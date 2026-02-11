
void DES_xcbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,const_DES_cblock *inw,const_DES_cblock *outw,int enc)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uchar *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  long lVar11;
  uchar *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  long in_FS_OFFSET;
  ulong *local_90;
  ulong *local_80;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar5 = length - 8;
  uVar20 = *(uint *)*inw;
  uVar19 = *(uint *)(*inw + 4);
  uVar4 = *(uint *)*outw;
  uVar8 = *(uint *)(*outw + 4);
  uVar13 = *(uint *)(*ivec + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = *(uint *)*ivec;
  if (enc == 0) {
    local_80 = (ulong *)output;
    if (8 < length) {
      uVar6 = length - 9U >> 3;
      lVar3 = uVar6 * 8 + 8;
      local_80 = (ulong *)(output + lVar3);
      puVar18 = (uint *)input;
      uVar15 = uVar13;
      uVar14 = uVar10;
      do {
        uVar10 = *puVar18;
        uVar13 = puVar18[1];
        puVar21 = (ulong *)((long)output + 8);
        local_48 = uVar4 ^ uVar10;
        puVar18 = puVar18 + 2;
        local_44 = uVar8 ^ uVar13;
        DES_encrypt1(&local_48,schedule,0);
        uVar15 = uVar19 ^ local_44 ^ uVar15;
        uVar14 = uVar20 ^ local_48 ^ uVar14;
        *(ulong *)output =
             (((((((ulong)(uVar15 >> 0x18) << 8 | (ulong)(uVar15 >> 0x10 & 0xff)) << 8 |
                 (ulong)(uVar15 >> 8 & 0xff)) << 8 | (ulong)(uVar15 & 0xff)) << 8 |
               (ulong)(uVar14 >> 0x18)) << 8 | (ulong)(uVar14 >> 0x10 & 0xff)) << 8 |
             (ulong)(uVar14 >> 8 & 0xff)) << 8 | (ulong)(uVar14 & 0xff);
        output = (uchar *)puVar21;
        uVar15 = uVar13;
        uVar14 = uVar10;
      } while (puVar21 != local_80);
      lVar11 = uVar6 * -8;
      input = input + lVar3;
      lVar3 = length + -0x10;
      length = lVar11 + uVar5;
      uVar5 = lVar3 + lVar11;
    }
    uVar14 = uVar13;
    uVar15 = uVar10;
    if (uVar5 == 0xfffffffffffffff8) {
LAB_00100430:
      uVar4 = uVar15 >> 0x10;
      uVar13 = uVar15 >> 0x18;
      uVar20 = uVar15 >> 8 & 0xff;
      uVar19 = uVar14 >> 8 & 0xff;
      uVar10 = uVar14 >> 0x10;
      uVar8 = uVar14 >> 0x18;
      goto LAB_00100457;
    }
    uVar15 = *(uint *)input;
    local_48 = uVar4 ^ uVar15;
    uVar14 = *(uint *)((long)input + 4);
    local_44 = uVar8 ^ uVar14;
    DES_encrypt1(&local_48,schedule,0);
    uVar13 = uVar19 ^ local_44 ^ uVar13;
    uVar10 = uVar10 ^ uVar20 ^ local_48;
    puVar9 = (undefined1 *)((long)local_80 + uVar5 + 8);
    switch(length) {
    default:
switchD_001003cb_caseD_0:
      goto LAB_00100430;
    case 1:
      goto switchD_001003cb_caseD_1;
    case 2:
      puVar16 = puVar9;
      goto LAB_00100415;
    case 3:
      goto LAB_00100408;
    case 4:
      goto switchD_001003cb_caseD_4;
    case 5:
      break;
    case 8:
      puVar9 = puVar9 + -1;
      *puVar9 = (char)(uVar13 >> 0x18);
    case 7:
      puVar9 = puVar9 + -1;
      *puVar9 = (char)(uVar13 >> 0x10);
    case 6:
      puVar9[-1] = (char)(uVar13 >> 8);
      puVar9 = puVar9 + -1;
    }
    puVar9[-1] = (char)uVar13;
    puVar9 = puVar9 + -1;
switchD_001003cb_caseD_4:
    puVar9[-1] = (char)(uVar10 >> 0x18);
    puVar9 = puVar9 + -1;
LAB_00100408:
    puVar9[-1] = (char)(uVar10 >> 0x10);
    puVar16 = puVar9 + -1;
LAB_00100415:
    puVar9 = puVar16 + -1;
    puVar16[-1] = (char)(uVar10 >> 8);
switchD_001003cb_caseD_1:
    puVar9[-1] = (char)uVar10;
    goto switchD_001003cb_caseD_0;
  }
  local_90 = (ulong *)output;
  if (-1 < (long)uVar5) {
    lVar3 = (uVar5 >> 3) * 8 + 8;
    local_90 = (ulong *)(output + lVar3);
    puVar18 = (uint *)input;
    do {
      uVar15 = *puVar18;
      puVar1 = puVar18 + 1;
      puVar21 = (ulong *)((long)output + 8);
      puVar18 = puVar18 + 2;
      local_48 = uVar10 ^ uVar15 ^ uVar20;
      local_44 = *puVar1 ^ uVar19 ^ uVar13;
      DES_encrypt1(&local_48,schedule,1);
      uVar13 = uVar8 ^ local_44;
      uVar10 = local_48 ^ uVar4;
      *(ulong *)output =
           (((((((ulong)(uVar13 >> 0x18) << 8 | (ulong)(uVar13 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar13 >> 8 & 0xff)) << 8 | (ulong)(uVar13 & 0xff)) << 8 |
             (ulong)(uVar10 >> 0x18)) << 8 | (ulong)(uVar10 >> 0x10 & 0xff)) << 8 |
           (ulong)(uVar10 >> 8 & 0xff)) << 8 | (ulong)(uVar10 & 0xff);
      output = (uchar *)puVar21;
    } while (local_90 != puVar21);
    lVar17 = (uVar5 >> 3) * -8;
    lVar11 = length + -0x10;
    input = input + lVar3;
    length = lVar17 + uVar5;
    uVar5 = lVar11 + lVar17;
  }
  uVar14 = uVar13;
  uVar15 = uVar10;
  if (uVar5 == 0xfffffffffffffff8) goto LAB_00100430;
  puVar7 = input + uVar5 + 8;
  switch(length) {
  default:
    local_44 = 0;
    local_48 = 0;
    goto LAB_0010054f;
  case 1:
    local_44 = 0;
    local_48 = 0;
    goto LAB_00100549;
  case 2:
    local_44 = 0;
    local_48 = 0;
    puVar12 = puVar7;
    goto LAB_0010053c;
  case 3:
    local_44 = 0;
    local_48 = 0;
    goto LAB_0010052e;
  case 4:
    local_44 = 0;
    goto LAB_00100521;
  case 5:
    local_44 = 0;
    goto LAB_00100517;
  case 6:
    local_44 = 0;
    break;
  case 7:
    pbVar2 = puVar7 + -1;
    puVar7 = puVar7 + -1;
    local_44 = (uint)*pbVar2 << 0x10;
  }
  pbVar2 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  local_44 = (uint)*pbVar2 << 8 | local_44;
LAB_00100517:
  pbVar2 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  local_44 = *pbVar2 | local_44;
LAB_00100521:
  pbVar2 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  local_48 = (uint)*pbVar2 << 0x18;
LAB_0010052e:
  local_48 = (uint)puVar7[-1] << 0x10 | local_48;
  puVar12 = puVar7 + -1;
LAB_0010053c:
  puVar7 = puVar12 + -1;
  local_48 = (uint)puVar12[-1] << 8 | local_48;
LAB_00100549:
  local_48 = puVar7[-1] | local_48;
LAB_0010054f:
  local_44 = uVar13 ^ uVar19 ^ local_44;
  local_48 = uVar20 ^ uVar10 ^ local_48;
  DES_encrypt1(&local_48,schedule,1);
  uVar15 = uVar4 ^ local_48;
  uVar14 = uVar8 ^ local_44;
  uVar4 = uVar15 >> 0x10;
  uVar8 = uVar14 >> 0x18;
  uVar10 = uVar14 >> 0x10;
  uVar19 = uVar14 >> 8;
  uVar13 = uVar15 >> 0x18;
  uVar20 = uVar15 >> 8;
  *local_90 = (((((((ulong)uVar8 << 8 | (ulong)(uVar10 & 0xff)) << 8 | (ulong)(uVar19 & 0xff)) << 8
                 | (ulong)(uVar14 & 0xff)) << 8 | (ulong)uVar13) << 8 | (ulong)uVar4 & 0xff) << 8 |
              (ulong)(uVar20 & 0xff)) << 8 | (ulong)(uVar15 & 0xff);
LAB_00100457:
  *ivec = (DES_cblock)
          ((((((((ulong)uVar8 << 8 | (ulong)(uVar10 & 0xff)) << 8 | (ulong)(uVar19 & 0xff)) << 8 |
              (ulong)uVar14 & 0xff) << 8 | (ulong)uVar13) << 8 | (ulong)(uVar4 & 0xff)) << 8 |
           (ulong)(uVar20 & 0xff)) << 8 | (ulong)uVar15 & 0xff);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


