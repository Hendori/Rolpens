
void DES_xcbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,const_DES_cblock *inw,const_DES_cblock *outw,int enc)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uchar *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint *puVar16;
  uint uVar17;
  long in_FS_OFFSET;
  byte local_90;
  ulong *local_78;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar17 = *(uint *)*inw;
  uVar3 = *(uint *)(*inw + 4);
  uVar4 = *(uint *)*outw;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(*outw + 4);
  uVar9 = *(uint *)*ivec;
  uVar11 = *(uint *)(*ivec + 4);
  uVar5 = length - 8;
  if (enc == 0) {
    local_78 = (ulong *)output;
    if (8 < length) {
      uVar5 = length - 9U >> 3;
      lVar2 = uVar5 * 8 + 8;
      local_78 = (ulong *)(output + lVar2);
      puVar16 = (uint *)input;
      uVar13 = uVar11;
      uVar12 = uVar9;
      do {
        uVar9 = *puVar16;
        uVar11 = puVar16[1];
        puVar14 = (ulong *)((long)output + 8);
        local_48 = uVar4 ^ uVar9;
        puVar16 = puVar16 + 2;
        local_44 = uVar6 ^ uVar11;
        DES_encrypt1(&local_48,schedule,0);
        uVar13 = uVar3 ^ local_44 ^ uVar13;
        uVar12 = uVar17 ^ local_48 ^ uVar12;
        *(ulong *)output =
             (((((((ulong)(uVar13 >> 0x18) << 8 | (ulong)(uVar13 >> 0x10 & 0xff)) << 8 |
                 (ulong)(uVar13 >> 8 & 0xff)) << 8 | (ulong)(uVar13 & 0xff)) << 8 |
               (ulong)(uVar12 >> 0x18)) << 8 | (ulong)(uVar12 >> 0x10 & 0xff)) << 8 |
             (ulong)(uVar12 >> 8 & 0xff)) << 8 | (ulong)(uVar12 & 0xff);
        output = (uchar *)puVar14;
        uVar13 = uVar11;
        uVar12 = uVar9;
      } while (local_78 != puVar14);
      input = input + lVar2;
      uVar5 = length + -0x10 + uVar5 * -8;
    }
    uVar13 = uVar9;
    uVar12 = uVar11;
    if (uVar5 != 0xfffffffffffffff8) {
      uVar13 = *(uint *)input;
      local_48 = uVar4 ^ uVar13;
      uVar12 = *(uint *)((long)input + 4);
      local_44 = uVar6 ^ uVar12;
      DES_encrypt1(&local_48,schedule,0);
      uVar11 = uVar3 ^ local_44 ^ uVar11;
      uVar9 = uVar9 ^ uVar17 ^ local_48;
      puVar7 = (undefined1 *)((long)local_78 + uVar5 + 8);
      puVar8 = puVar7;
      switch(uVar5) {
      case 0:
        puVar7 = puVar7 + -1;
        *puVar7 = (char)(uVar11 >> 0x18);
      case 0xffffffffffffffff:
        puVar8 = puVar7 + -1;
        *puVar8 = (char)(uVar11 >> 0x10);
      case 0xfffffffffffffffe:
        puVar7 = puVar8 + -1;
        puVar8[-1] = (char)(uVar11 >> 8);
        break;
      default:
        goto LAB_00100400;
      case 0xfffffffffffffff9:
        goto switchD_001003a1_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_001003e8;
      case 0xfffffffffffffffb:
        puVar8 = puVar7;
        goto LAB_001003db;
      case 0xfffffffffffffffc:
        goto switchD_001003a1_caseD_fffffffc;
      case 0xfffffffffffffffd:
      }
      puVar7[-1] = (char)uVar11;
      puVar7 = puVar7 + -1;
switchD_001003a1_caseD_fffffffc:
      puVar7[-1] = (char)(uVar9 >> 0x18);
      puVar8 = puVar7 + -1;
LAB_001003db:
      puVar7 = puVar8 + -1;
      puVar8[-1] = (char)(uVar9 >> 0x10);
LAB_001003e8:
      puVar8 = puVar7 + -1;
      puVar7[-1] = (char)(uVar9 >> 8);
switchD_001003a1_caseD_fffffff9:
      puVar8[-1] = (char)uVar9;
    }
LAB_00100400:
    uVar6 = uVar13 >> 0x10;
    uVar11 = uVar13 >> 0x18;
    uVar3 = uVar13 >> 8 & 0xff;
    uVar17 = uVar12 >> 8 & 0xff;
    uVar9 = uVar12 >> 0x10;
    uVar4 = uVar12 >> 0x18;
    goto LAB_00100427;
  }
  if (-1 < (long)uVar5) {
    lVar2 = (uVar5 >> 3) * 8 + 8;
    puVar14 = (ulong *)output;
    puVar16 = (uint *)input;
    do {
      puVar15 = puVar14 + 1;
      local_48 = uVar9 ^ *puVar16 ^ uVar17;
      local_44 = puVar16[1] ^ uVar3 ^ uVar11;
      DES_encrypt1(&local_48,schedule,1);
      uVar11 = uVar6 ^ local_44;
      uVar9 = local_48 ^ uVar4;
      *puVar14 = (((((((ulong)(uVar11 >> 0x18) << 8 | (ulong)(uVar11 >> 0x10 & 0xff)) << 8 |
                     (ulong)(uVar11 >> 8 & 0xff)) << 8 | (ulong)(uVar11 & 0xff)) << 8 |
                   (ulong)(uVar9 >> 0x18)) << 8 | (ulong)(uVar9 >> 0x10 & 0xff)) << 8 |
                 (ulong)(uVar9 >> 8 & 0xff)) << 8 | (ulong)(uVar9 & 0xff);
      puVar14 = puVar15;
      puVar16 = puVar16 + 2;
    } while ((ulong *)(output + lVar2) != puVar15);
    input = input + lVar2;
    uVar5 = length + -0x10 + (uVar5 >> 3) * -8;
    output = output + lVar2;
  }
  uVar13 = uVar9;
  uVar12 = uVar11;
  if (uVar5 == 0xfffffffffffffff8) goto LAB_00100400;
  puVar10 = input + uVar5 + 8;
  switch(uVar5) {
  default:
    local_44 = 0;
    local_48 = 0;
    goto LAB_00100517;
  case 0xfffffffffffffff9:
    local_44 = 0;
    local_48 = 0;
    goto LAB_00100511;
  case 0xfffffffffffffffa:
    local_44 = 0;
    local_48 = 0;
    goto LAB_00100504;
  case 0xfffffffffffffffb:
    local_44 = 0;
    local_48 = 0;
    goto LAB_001004f6;
  case 0xfffffffffffffffc:
    local_44 = 0;
    goto LAB_001004e9;
  case 0xfffffffffffffffd:
    local_44 = 0;
    goto LAB_001004df;
  case 0xfffffffffffffffe:
    local_44 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = puVar10 + -1;
    puVar10 = puVar10 + -1;
    local_44 = (uint)*pbVar1 << 0x10;
  }
  pbVar1 = puVar10 + -1;
  puVar10 = puVar10 + -1;
  local_44 = (uint)*pbVar1 << 8 | local_44;
LAB_001004df:
  pbVar1 = puVar10 + -1;
  puVar10 = puVar10 + -1;
  local_44 = *pbVar1 | local_44;
LAB_001004e9:
  pbVar1 = puVar10 + -1;
  puVar10 = puVar10 + -1;
  local_48 = (uint)*pbVar1 << 0x18;
LAB_001004f6:
  pbVar1 = puVar10 + -1;
  puVar10 = puVar10 + -1;
  local_48 = (uint)*pbVar1 << 0x10 | local_48;
LAB_00100504:
  local_48 = (uint)puVar10[-1] << 8 | local_48;
  puVar10 = puVar10 + -1;
LAB_00100511:
  local_48 = local_48 | puVar10[-1];
LAB_00100517:
  local_44 = uVar11 ^ uVar3 ^ local_44;
  local_48 = uVar17 ^ uVar9 ^ local_48;
  DES_encrypt1(&local_48,schedule,1);
  uVar13 = uVar4 ^ local_48;
  uVar12 = uVar6 ^ local_44;
  uVar3 = uVar13 >> 8;
  uVar6 = uVar13 >> 0x10;
  uVar9 = uVar12 >> 0x10;
  uVar4 = uVar12 >> 0x18;
  uVar17 = uVar12 >> 8;
  uVar11 = uVar13 >> 0x18;
  local_90 = (byte)(uVar13 >> 8);
  *(ulong *)output =
       (((((((ulong)uVar4 << 8 | (ulong)(uVar9 & 0xff)) << 8 | (ulong)(uVar17 & 0xff)) << 8 |
          (ulong)(uVar12 & 0xff)) << 8 | (ulong)uVar11) << 8 | (ulong)uVar6 & 0xff) << 8 |
       (ulong)local_90) << 8 | (ulong)(uVar13 & 0xff);
LAB_00100427:
  *ivec = (DES_cblock)
          ((((((((ulong)uVar4 << 8 | (ulong)(uVar9 & 0xff)) << 8 | (ulong)(uVar17 & 0xff)) << 8 |
              (ulong)uVar12 & 0xff) << 8 | (ulong)uVar11) << 8 | (ulong)(uVar6 & 0xff)) << 8 |
           (ulong)(uVar3 & 0xff)) << 8 | (ulong)uVar13 & 0xff);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


