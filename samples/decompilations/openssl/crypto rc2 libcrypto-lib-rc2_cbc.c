
void RC2_encrypt(ulong *data,RC2_KEY *key)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  bool bVar15;
  
  iVar12 = 3;
  iVar11 = 5;
  uVar14 = *data & 0xffff;
  uVar8 = *data >> 0x10;
  uVar6 = data[1] & 0xffff;
  uVar3 = data[1] >> 0x10;
  puVar9 = key->data;
  while( true ) {
    do {
      uVar1 = (uint)uVar3;
      uVar2 = (uint)uVar6;
      puVar10 = puVar9 + 4;
      uVar4 = (uVar2 & uVar1) + *puVar9 + (~uVar1 & (uint)uVar8) + (int)uVar14 & 0xffff;
      uVar13 = uVar4 * 2 | uVar4 >> 0xf;
      uVar14 = (ulong)uVar13;
      uVar4 = (~uVar13 & uVar2) + (uVar1 & uVar13) + (uint)uVar8 + puVar9[1] & 0xffff;
      uVar7 = uVar4 * 4 | uVar4 >> 0xe;
      uVar8 = (ulong)uVar7;
      uVar4 = uVar2 + puVar9[2] + (uVar13 & uVar7) + (~uVar7 & uVar1) & 0xffff;
      uVar5 = uVar4 >> 0xd | uVar4 * 8;
      uVar6 = (ulong)uVar5;
      uVar1 = uVar1 + puVar9[3] + (uVar7 & uVar5) + (~uVar5 & uVar13) & 0xffff;
      uVar4 = uVar1 >> 0xb;
      uVar1 = uVar1 << 5;
      uVar2 = uVar4 | uVar1;
      uVar3 = (ulong)uVar2;
      iVar11 = iVar11 + -1;
      puVar9 = puVar10;
    } while (iVar11 != 0);
    if (iVar12 == 1) break;
    bVar15 = iVar12 == 3;
    iVar12 = iVar12 + -1;
    uVar13 = uVar13 + key->data[uVar4 | uVar1 & 0x3f];
    uVar14 = (ulong)uVar13;
    iVar11 = bVar15 + 5;
    uVar7 = uVar7 + key->data[uVar13 & 0x3f];
    uVar8 = (ulong)uVar7;
    uVar5 = uVar5 + key->data[uVar7 & 0x3f];
    uVar6 = (ulong)uVar5;
    uVar3 = (ulong)(uVar2 + key->data[uVar5 & 0x3f]);
  }
  *data = (ulong)(ushort)uVar13 | (uVar8 & 0xffff) << 0x10;
  data[1] = (ulong)(ushort)uVar5 | (ulong)(uVar2 << 0x10);
  return;
}



void RC2_decrypt(ulong *data,RC2_KEY *key)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  
  iVar13 = 5;
  iVar5 = 3;
  uVar15 = *data & 0xffff;
  uVar3 = *data >> 0x10;
  uVar8 = data[1] & 0xffff;
  uVar10 = data[1] >> 0x10;
  puVar11 = key->data + 0x3f;
  while( true ) {
    do {
      uVar2 = (uint)uVar8;
      uVar1 = (uint)uVar3;
      puVar12 = puVar11 + -4;
      uVar14 = (uint)uVar15;
      uVar9 = ((((uint)uVar10 >> 5 | (uint)uVar10 << 0xb) & 0xffff) - ((uVar1 & uVar2) + *puVar11))
              - (~uVar2 & uVar14) & 0xffff;
      uVar10 = (ulong)uVar9;
      uVar6 = (((uVar2 & 7) << 0xd | uVar2 >> 3) - ((uVar14 & uVar1) + puVar11[-1])) -
              (~uVar1 & uVar9);
      uVar7 = uVar6 & 0xffff;
      uVar8 = (ulong)uVar7;
      uVar4 = ((((uVar1 << 0xe | uVar1 >> 2) & 0xffff) - puVar11[-2]) - (uVar14 & uVar9)) -
              (~uVar14 & uVar7);
      uVar2 = uVar4 & 0xffff;
      uVar3 = (ulong)uVar2;
      uVar1 = ((((uVar14 & 1) << 0xf | uVar14 >> 1) - puVar11[-3]) - (uVar9 & uVar7)) -
              (~uVar9 & uVar2);
      uVar14 = uVar1 & 0xffff;
      uVar15 = (ulong)uVar14;
      iVar13 = iVar13 + -1;
      puVar11 = puVar12;
    } while (iVar13 != 0);
    if (iVar5 == 1) break;
    uVar9 = uVar9 - key->data[uVar6 & 0x3f];
    iVar13 = (iVar5 == 3) + 5;
    iVar5 = iVar5 + -1;
    uVar10 = (ulong)(uVar9 & 0xffff);
    uVar8 = (ulong)(uVar7 - key->data[uVar4 & 0x3f] & 0xffff);
    uVar3 = (ulong)(uVar2 - key->data[uVar1 & 0x3f] & 0xffff);
    uVar15 = (ulong)(uVar14 - key->data[uVar9 & 0x3f] & 0xffff);
  }
  *data = uVar3 << 0x10 | uVar15;
  data[1] = uVar10 << 0x10 | uVar8;
  return;
}



void RC2_cbc_encrypt(uchar *in,uchar *out,long length,RC2_KEY *ks,uchar *iv,int enc)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  uchar *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  uchar *puVar14;
  undefined1 uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  long in_FS_OFFSET;
  ulong *local_98;
  ulong *local_70;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar10 = length - 8;
  uVar17 = (ulong)*(uint *)iv;
  uVar13 = (ulong)*(uint *)(iv + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    local_98 = (ulong *)out;
    if (7 < length) {
      lVar3 = (uVar10 >> 3) * 8 + 8;
      local_98 = (ulong *)(out + lVar3);
      uVar9 = uVar13;
      puVar16 = (uint *)in;
      uVar11 = uVar17;
      do {
        uVar17 = (ulong)*puVar16;
        uVar13 = (ulong)puVar16[1];
        puVar20 = (ulong *)((long)out + 8);
        puVar16 = puVar16 + 2;
        local_58 = uVar17;
        local_50 = uVar13;
        RC2_decrypt(&local_58,ks);
        uVar9 = local_50 ^ uVar9;
        uVar11 = local_58 ^ uVar11;
        *(ulong *)out =
             (((((((ulong)((uint)(uVar9 >> 0x10) & 0xff00) | uVar9 >> 0x10 & 0xff) << 8 |
                 uVar9 >> 8 & 0xff) << 8 | uVar9 & 0xff) << 8 | uVar11 >> 0x18 & 0xff) << 8 |
              uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 8 | uVar11 & 0xff;
        uVar9 = uVar13;
        out = (uchar *)puVar20;
        uVar11 = uVar17;
      } while (puVar20 != local_98);
      lVar19 = (uVar10 >> 3) * -8;
      lVar4 = length + -0x10;
      in = in + lVar3;
      length = lVar19 + uVar10;
      uVar10 = lVar4 + lVar19;
    }
    uVar11 = uVar13;
    uVar9 = uVar17;
    if (uVar10 == 0xfffffffffffffff8) {
LAB_00100630:
      uVar13 = uVar9 >> 0x10;
      uVar18 = uVar9 >> 8 & 0xff;
      uVar10 = uVar11 >> 8 & 0xff;
      uVar17 = uVar9 >> 0x18;
      uVar8 = (undefined1)(uVar11 >> 0x10);
      uVar15 = (undefined1)(uVar11 >> 0x18);
      goto LAB_00100657;
    }
    uVar11 = (ulong)*(uint *)((long)in + 4);
    uVar9 = (ulong)*(uint *)in;
    local_58 = uVar9;
    local_50 = uVar11;
    RC2_decrypt(&local_58,ks);
    uVar17 = uVar17 ^ local_58;
    uVar13 = uVar13 ^ local_50;
    puVar6 = (undefined1 *)((long)local_98 + uVar10 + 8);
    switch(length) {
    default:
switchD_001005db_caseD_0:
      goto LAB_00100630;
    case 1:
      goto switchD_001005db_caseD_1;
    case 2:
      puVar12 = puVar6;
      goto LAB_00100617;
    case 3:
      goto switchD_001005db_caseD_3;
    case 4:
      puVar12 = puVar6;
      break;
    case 7:
      puVar6 = puVar6 + -1;
      *puVar6 = (char)(uVar13 >> 0x10);
    case 6:
      puVar6[-1] = (char)(uVar13 >> 8);
      puVar6 = puVar6 + -1;
    case 5:
      puVar6[-1] = (char)uVar13;
      puVar12 = puVar6 + -1;
    }
    puVar6 = puVar12 + -1;
    puVar12[-1] = (char)(uVar17 >> 0x18);
switchD_001005db_caseD_3:
    puVar6[-1] = (char)(uVar17 >> 0x10);
    puVar12 = puVar6 + -1;
LAB_00100617:
    puVar6 = puVar12 + -1;
    puVar12[-1] = (char)(uVar17 >> 8);
switchD_001005db_caseD_1:
    puVar6[-1] = (char)uVar17;
    goto switchD_001005db_caseD_0;
  }
  local_70 = (ulong *)out;
  if (-1 < (long)uVar10) {
    lVar3 = (uVar10 >> 3) * 8 + 8;
    local_70 = (ulong *)(out + lVar3);
    local_50 = uVar13;
    puVar16 = (uint *)in;
    local_58 = uVar17;
    do {
      uVar5 = *puVar16;
      puVar1 = puVar16 + 1;
      puVar20 = (ulong *)((long)out + 8);
      puVar16 = puVar16 + 2;
      local_58 = local_58 ^ uVar5;
      local_50 = *puVar1 ^ local_50;
      RC2_encrypt(&local_58,ks);
      *(ulong *)out =
           (((((((ulong)((uint)(local_50 >> 0x10) & 0xff00) | local_50 >> 0x10 & 0xff) << 8 |
               local_50 >> 8 & 0xff) << 8 | local_50 & 0xff) << 8 | local_58 >> 0x18 & 0xff) << 8 |
            local_58 >> 0x10 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 & 0xff;
      out = (uchar *)puVar20;
    } while (puVar20 != local_70);
    lVar19 = (uVar10 >> 3) * -8;
    lVar4 = length + -0x10;
    in = in + lVar3;
    length = lVar19 + uVar10;
    uVar10 = lVar4 + lVar19;
    uVar13 = local_50;
    uVar17 = local_58;
  }
  uVar11 = uVar13;
  uVar9 = uVar17;
  if (uVar10 == 0xfffffffffffffff8) goto LAB_00100630;
  puVar7 = in + uVar10 + 8;
  switch(length) {
  default:
    goto switchD_0010041e_caseD_0;
  case 1:
    uVar10 = 0;
    goto LAB_00100731;
  case 2:
    uVar10 = 0;
    puVar14 = puVar7;
    goto LAB_00100722;
  case 3:
    uVar10 = 0;
    goto LAB_00100713;
  case 4:
    goto LAB_00100707;
  case 5:
    uVar10 = 0;
    goto LAB_001006f9;
  case 6:
    uVar10 = 0;
    break;
  case 7:
    pbVar2 = puVar7 + -1;
    puVar7 = puVar7 + -1;
    uVar10 = (ulong)*pbVar2 << 0x10;
  }
  pbVar2 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  uVar10 = (ulong)*pbVar2 << 8 | uVar10;
LAB_001006f9:
  uVar13 = uVar13 ^ (puVar7[-1] | uVar10);
  puVar7 = puVar7 + -1;
LAB_00100707:
  pbVar2 = puVar7 + -1;
  puVar7 = puVar7 + -1;
  uVar10 = (ulong)*pbVar2 << 0x18;
LAB_00100713:
  uVar10 = (ulong)puVar7[-1] << 0x10 | uVar10;
  puVar14 = puVar7 + -1;
LAB_00100722:
  puVar7 = puVar14 + -1;
  uVar10 = (ulong)puVar14[-1] << 8 | uVar10;
LAB_00100731:
  uVar17 = uVar17 ^ (puVar7[-1] | uVar10);
switchD_0010041e_caseD_0:
  local_58 = uVar17;
  local_50 = uVar13;
  RC2_encrypt(&local_58,ks);
  uVar13 = local_58 >> 0x10 & 0xffffffff;
  uVar15 = (undefined1)(local_50 >> 0x18);
  uVar8 = (undefined1)(local_50 >> 0x10);
  uVar10 = local_50 >> 8 & 0xffffffff;
  uVar17 = local_58 >> 0x18 & 0xffffffff;
  uVar18 = local_58 >> 8 & 0xffffffff;
  *local_70 = (((((((local_50 >> 0x18 & 0xff) << 8 | local_50 >> 0x10 & 0xff) << 8 |
                  local_50 >> 8 & 0xff) << 8 | local_50 & 0xff) << 8 | local_58 >> 0x18 & 0xff) << 8
               | local_58 >> 0x10 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 & 0xff;
  uVar9 = local_58;
  uVar11 = local_50;
LAB_00100657:
  *(ulong *)iv = ((((((ulong)CONCAT11(uVar15,uVar8) << 8 | uVar10 & 0xff) << 8 | uVar11 & 0xff) << 8
                   | uVar17 & 0xff) << 8 | uVar13 & 0xff) << 8 | uVar18 & 0xff) << 8 | uVar9 & 0xff;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


