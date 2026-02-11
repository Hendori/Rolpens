
void DES_pcbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,int enc)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar6;
  uchar *puVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  uint uVar13;
  undefined8 local_48;
  long local_40;
  
  uVar9 = *(uint *)*ivec;
  uVar7 = *(uint *)(*ivec + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    if (0 < length) {
      uVar3 = length & 0xfffffffffffffff8;
      puVar10 = (ulong *)output;
      do {
        local_48 = *(undefined8 *)input;
        input = input + 8;
        uVar13 = (uint)local_48;
        uVar1 = (ulong)local_48 >> 0x20;
        DES_encrypt1((uint *)&local_48,schedule,0);
        uVar8 = uVar7 ^ local_48._4_4_;
        uVar4 = (uint)local_48 ^ uVar9;
        bVar6 = (byte)(uVar4 >> 8);
        bVar2 = (byte)(uVar8 >> 8);
        if (puVar10 == (ulong *)(output + uVar3)) {
          pbVar11 = (byte *)((long)puVar10 + length);
          pbVar12 = pbVar11;
          switch(length) {
          default:
            goto switchD_00100216_caseD_0;
          case 2:
            goto LAB_00100259;
          case 3:
            goto switchD_00100216_caseD_3;
          case 4:
            break;
          case 7:
            pbVar11 = pbVar11 + -1;
            *pbVar11 = (byte)(uVar8 >> 0x10);
          case 6:
            pbVar11 = pbVar11 + -1;
            *pbVar11 = bVar2;
          case 5:
            pbVar11[-1] = (byte)uVar8;
            pbVar11 = pbVar11 + -1;
          }
          pbVar12 = pbVar11 + -1;
          pbVar11[-1] = (byte)(uVar4 >> 0x18);
switchD_00100216_caseD_3:
          pbVar11 = pbVar12 + -1;
          pbVar12[-1] = (byte)(uVar4 >> 0x10);
LAB_00100259:
          pbVar11[-1] = bVar6;
          pbVar11 = pbVar11 + -1;
switchD_00100216_caseD_0:
          pbVar11[-1] = (byte)uVar4;
          break;
        }
        length = length + -8;
        uVar9 = uVar13 ^ uVar4;
        uVar7 = (uint)uVar1 ^ uVar8;
        *puVar10 = (((((((ulong)(uVar8 >> 0x18) << 8 | (ulong)(uVar8 >> 0x10 & 0xff)) << 8 |
                       (ulong)bVar2) << 8 | (ulong)uVar8 & 0xff) << 8 | (ulong)(uVar4 >> 0x18)) << 8
                    | (ulong)(uVar4 >> 0x10 & 0xff)) << 8 | (ulong)bVar6) << 8 | (ulong)uVar4 & 0xff
        ;
        puVar10 = puVar10 + 1;
      } while (0 < length);
    }
  }
  else if (0 < length) {
    do {
      if ((ulong)length < 8) {
        puVar5 = (uchar *)((long)input + length);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(length) {
        default:
                    /* WARNING: This code block may not be properly labeled as switch case */
          uVar4 = 0;
          uVar8 = 0;
          goto LAB_001002c1;
        case 2:
          uVar4 = 0;
          uVar8 = 0;
          goto LAB_001002b3;
        case 3:
          uVar4 = 0;
          uVar8 = 0;
          goto LAB_001002a6;
        case 4:
          uVar4 = 0;
          goto LAB_0010029b;
        case 5:
          uVar4 = 0;
          goto LAB_0010028f;
        case 6:
          uVar4 = 0;
          break;
        case 7:
          pbVar12 = puVar5 + -1;
          puVar5 = puVar5 + -1;
          uVar4 = (uint)*pbVar12 << 0x10;
        }
        pbVar12 = puVar5 + -1;
        puVar5 = puVar5 + -1;
        uVar4 = (uint)*pbVar12 << 8 | uVar4;
LAB_0010028f:
        pbVar12 = puVar5 + -1;
        puVar5 = puVar5 + -1;
        uVar4 = *pbVar12 | uVar4;
        uVar7 = uVar7 ^ uVar4;
LAB_0010029b:
        pbVar12 = puVar5 + -1;
        puVar5 = puVar5 + -1;
        uVar8 = (uint)*pbVar12 << 0x18;
LAB_001002a6:
        pbVar12 = puVar5 + -1;
        puVar5 = puVar5 + -1;
        uVar8 = (uint)*pbVar12 << 0x10 | uVar8;
LAB_001002b3:
        pbVar12 = puVar5 + -1;
        puVar5 = puVar5 + -1;
        uVar8 = (uint)*pbVar12 << 8 | uVar8;
LAB_001002c1:
        input = puVar5 + -1;
        uVar8 = puVar5[-1] | uVar8;
      }
      else {
        uVar4 = *(uint *)((long)input + 4);
        uVar8 = *(uint *)input;
        input = (uchar *)((long)input + 8);
        uVar7 = uVar7 ^ uVar4;
      }
      length = length - 8;
      local_48 = CONCAT44(uVar7,uVar9 ^ uVar8);
      DES_encrypt1((uint *)&local_48,schedule,1);
      uVar9 = uVar8 ^ (uint)local_48;
      uVar7 = uVar4 ^ local_48._4_4_;
      *(undefined8 *)output = local_48;
      output = output + 8;
    } while (0 < length);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


