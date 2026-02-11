
void DES_cbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                    DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uchar *puVar7;
  uint uVar8;
  ulong *puVar9;
  DES_cblock *pauVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  DES_cblock *pauVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  DES_cblock auVar15;
  ulong *local_78;
  undefined8 local_48;
  long local_40;
  
  uVar14 = length - 8;
  auVar15 = *ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    uVar8 = auVar15._4_4_;
    uVar5 = auVar15._0_4_;
    local_78 = (ulong *)output;
    if (7 < length) {
      lVar2 = (uVar14 >> 3) * 8 + 8;
      local_78 = (ulong *)(output + lVar2);
      uVar6 = (ulong)auVar15 & 0xffffffff;
      pauVar10 = (DES_cblock *)input;
      uVar3 = uVar8;
      do {
        uVar5 = *(uint *)*pauVar10;
        uVar8 = *(uint *)(*pauVar10 + 4);
        local_48 = *pauVar10;
        puVar9 = (ulong *)((long)output + 8);
        pauVar10 = pauVar10 + 1;
        DES_encrypt1((uint *)&local_48,schedule,0);
        uVar3 = local_48._4_4_ ^ uVar3;
        uVar4 = (uint)local_48 ^ (uint)uVar6;
        *(ulong *)output =
             (((((((ulong)(uVar3 >> 0x18) << 8 | (ulong)(uVar3 >> 0x10 & 0xff)) << 8 |
                 (ulong)(uVar3 >> 8 & 0xff)) << 8 | (ulong)(uVar3 & 0xff)) << 8 |
               (ulong)(uVar4 >> 0x18)) << 8 | (ulong)(uVar4 >> 0x10 & 0xff)) << 8 |
             (ulong)(uVar4 >> 8 & 0xff)) << 8 | (ulong)(uVar4 & 0xff);
        uVar6 = (ulong)uVar5;
        output = (uchar *)puVar9;
        uVar3 = uVar8;
      } while (local_78 != puVar9);
      input = input + lVar2;
      uVar14 = length + -0x10 + (uVar14 >> 3) * -8;
    }
    if (uVar14 == 0xfffffffffffffff8) goto switchD_0010030b_default;
    local_48 = *(DES_cblock *)input;
    DES_encrypt1((uint *)&local_48,schedule,0);
    uVar5 = uVar5 ^ (uint)local_48;
    uVar8 = local_48._4_4_ ^ uVar8;
    puVar11 = (undefined1 *)((long)local_78 + uVar14 + 8);
    puVar12 = puVar11;
    switch(uVar14) {
    default:
      goto switchD_0010030b_default;
    case 0xfffffffffffffff9:
      goto switchD_0010030b_caseD_fffffff9;
    case 0xfffffffffffffffa:
      goto LAB_0010034b;
    case 0xfffffffffffffffb:
      goto switchD_0010030b_caseD_fffffffb;
    case 0xfffffffffffffffc:
      break;
    case 0xffffffffffffffff:
      puVar11 = puVar11 + -1;
      *puVar11 = (char)(uVar8 >> 0x10);
    case 0xfffffffffffffffe:
      puVar11 = puVar11 + -1;
      *puVar11 = (char)(uVar8 >> 8);
    case 0xfffffffffffffffd:
      puVar11[-1] = (char)uVar8;
      puVar11 = puVar11 + -1;
    }
    puVar12 = puVar11 + -1;
    puVar11[-1] = (char)(uVar5 >> 0x18);
switchD_0010030b_caseD_fffffffb:
    puVar11 = puVar12 + -1;
    puVar12[-1] = (char)(uVar5 >> 0x10);
LAB_0010034b:
    puVar11[-1] = (char)(uVar5 >> 8);
    puVar11 = puVar11 + -1;
switchD_0010030b_caseD_fffffff9:
    puVar11[-1] = (char)uVar5;
    goto switchD_0010030b_default;
  }
  if (-1 < (long)uVar14) {
    lVar2 = (uVar14 >> 3) * 8 + 8;
    puVar9 = (ulong *)input;
    pauVar10 = (DES_cblock *)output;
    local_48 = auVar15;
    do {
      uVar6 = *puVar9;
      pauVar13 = pauVar10 + 1;
      puVar9 = puVar9 + 1;
      local_48 = (DES_cblock)((ulong)local_48 ^ uVar6);
      DES_encrypt1((uint *)&local_48,schedule,1);
      *pauVar10 = (DES_cblock)
                  (((((((((ulong)local_48 >> 0x38) << 8 | (ulong)(local_48._4_4_ >> 0x10 & 0xff)) <<
                        8 | (ulong)local_48 >> 0x28 & 0xff) << 8 | (ulong)local_48 >> 0x20 & 0xff)
                      << 8 | (ulong)((uint)local_48 >> 0x18)) << 8 |
                    (ulong)((uint)local_48 >> 0x10 & 0xff)) << 8 |
                   (ulong)((uint)local_48 >> 8 & 0xff)) << 8 | (ulong)((uint)local_48 & 0xff));
      pauVar10 = pauVar13;
    } while ((DES_cblock *)(output + lVar2) != pauVar13);
    input = input + lVar2;
    uVar14 = length + -0x10 + (uVar14 >> 3) * -8;
    output = output + lVar2;
    auVar15 = local_48;
  }
  if (uVar14 == 0xfffffffffffffff8) goto switchD_0010030b_default;
  uVar5 = auVar15._4_4_;
  puVar7 = input + uVar14 + 8;
  switch(uVar14) {
  default:
    goto switchD_00100175_default;
  case 0xfffffffffffffff9:
    uVar8 = 0;
    goto LAB_001003c8;
  case 0xfffffffffffffffa:
    uVar8 = 0;
    goto LAB_001003bb;
  case 0xfffffffffffffffb:
    uVar8 = 0;
    goto LAB_001003ae;
  case 0xfffffffffffffffc:
    goto LAB_001003a3;
  case 0xfffffffffffffffd:
    uVar8 = 0;
    goto LAB_0010038f;
  case 0xfffffffffffffffe:
    uVar8 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = puVar7 + -1;
    puVar7 = puVar7 + -1;
    uVar8 = (uint)*pbVar1 << 0x10;
  }
  pbVar1 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  uVar8 = (uint)*pbVar1 << 8 | uVar8;
LAB_0010038f:
  pbVar1 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  uVar5 = uVar5 ^ (uVar8 | *pbVar1);
LAB_001003a3:
  pbVar1 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  uVar8 = (uint)*pbVar1 << 0x18;
LAB_001003ae:
  pbVar1 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  uVar8 = (uint)*pbVar1 << 0x10 | uVar8;
LAB_001003bb:
  uVar8 = (uint)puVar7[-1] << 8 | uVar8;
  puVar7 = puVar7 + -1;
LAB_001003c8:
  uVar8 = (puVar7[-1] | uVar8) ^ auVar15._0_4_;
  auVar15[4] = (char)uVar5;
  auVar15[5] = (char)(uVar5 >> 8);
  auVar15[6] = (char)(uVar5 >> 0x10);
  auVar15[7] = (char)(uVar5 >> 0x18);
  auVar15[0] = (char)uVar8;
  auVar15[1] = (char)(uVar8 >> 8);
  auVar15[2] = (char)(uVar8 >> 0x10);
  auVar15[3] = (char)(uVar8 >> 0x18);
switchD_00100175_default:
  local_48 = auVar15;
  DES_encrypt1((uint *)&local_48,schedule,1);
  *(DES_cblock *)output = local_48;
switchD_0010030b_default:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


