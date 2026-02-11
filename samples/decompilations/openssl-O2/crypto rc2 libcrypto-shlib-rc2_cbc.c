
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
  uint uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  uint *puVar11;
  ulong uVar12;
  uchar *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  ulong *local_90;
  ulong *local_70;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar9 = length - 8;
  uVar12 = (ulong)*(uint *)iv;
  uVar8 = (ulong)*(uint *)(iv + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    local_90 = (ulong *)out;
    if (7 < length) {
      lVar3 = (uVar9 >> 3) * 8 + 8;
      local_90 = (ulong *)(out + lVar3);
      uVar6 = uVar8;
      puVar11 = (uint *)in;
      uVar7 = uVar12;
      do {
        uVar12 = (ulong)*puVar11;
        uVar8 = (ulong)puVar11[1];
        puVar17 = (ulong *)((long)out + 8);
        puVar11 = puVar11 + 2;
        local_58 = uVar12;
        local_50 = uVar8;
        RC2_decrypt(&local_58,ks);
        uVar6 = local_50 ^ uVar6;
        uVar7 = local_58 ^ uVar7;
        *(ulong *)out =
             (((((((ulong)((uint)(uVar6 >> 0x10) & 0xff00) | uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 8 & 0xff) << 8 | uVar6 & 0xff) << 8 | uVar7 >> 0x18 & 0xff) << 8 |
              uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 | uVar7 & 0xff;
        uVar6 = uVar8;
        out = (uchar *)puVar17;
        uVar7 = uVar12;
      } while (puVar17 != local_90);
      in = in + lVar3;
      uVar9 = length + -0x10 + (uVar9 >> 3) * -8;
    }
    uVar7 = uVar8;
    uVar6 = uVar12;
    if (uVar9 != 0xfffffffffffffff8) {
      uVar7 = (ulong)*(uint *)((long)in + 4);
      uVar6 = (ulong)*(uint *)in;
      local_58 = uVar6;
      local_50 = uVar7;
      RC2_decrypt(&local_58,ks);
      uVar12 = uVar12 ^ local_58;
      uVar8 = uVar8 ^ local_50;
      puVar15 = (undefined1 *)((long)local_90 + uVar9 + 8);
      puVar16 = puVar15;
      switch(uVar9) {
      default:
        goto switchD_001005c9_default;
      case 0xfffffffffffffff9:
        goto switchD_001005c9_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_00100609;
      case 0xfffffffffffffffb:
        goto switchD_001005c9_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar8 >> 0x10);
      case 0xfffffffffffffffe:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar8 >> 8);
      case 0xfffffffffffffffd:
        puVar15[-1] = (char)uVar8;
        puVar15 = puVar15 + -1;
      }
      puVar16 = puVar15 + -1;
      puVar15[-1] = (char)(uVar12 >> 0x18);
switchD_001005c9_caseD_fffffffb:
      puVar15 = puVar16 + -1;
      puVar16[-1] = (char)(uVar12 >> 0x10);
LAB_00100609:
      puVar16 = puVar15 + -1;
      puVar15[-1] = (char)(uVar12 >> 8);
switchD_001005c9_caseD_fffffff9:
      puVar16[-1] = (char)uVar12;
    }
switchD_001005c9_default:
    uVar8 = uVar6 >> 0x10;
    uVar14 = uVar6 >> 8 & 0xff;
    uVar9 = uVar7 >> 8 & 0xff;
    uVar12 = uVar6 >> 0x18;
    uVar5 = (undefined1)(uVar7 >> 0x10);
    uVar10 = (undefined1)(uVar7 >> 0x18);
    goto LAB_00100647;
  }
  local_70 = (ulong *)out;
  if (-1 < (long)uVar9) {
    lVar3 = (uVar9 >> 3) * 8 + 8;
    local_70 = (ulong *)(out + lVar3);
    local_50 = uVar8;
    puVar11 = (uint *)in;
    local_58 = uVar12;
    do {
      uVar4 = *puVar11;
      puVar1 = puVar11 + 1;
      puVar17 = (ulong *)((long)out + 8);
      puVar11 = puVar11 + 2;
      local_58 = local_58 ^ uVar4;
      local_50 = *puVar1 ^ local_50;
      RC2_encrypt(&local_58,ks);
      *(ulong *)out =
           (((((((ulong)((uint)(local_50 >> 0x10) & 0xff00) | local_50 >> 0x10 & 0xff) << 8 |
               local_50 >> 8 & 0xff) << 8 | local_50 & 0xff) << 8 | local_58 >> 0x18 & 0xff) << 8 |
            local_58 >> 0x10 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 & 0xff;
      out = (uchar *)puVar17;
    } while (puVar17 != local_70);
    in = in + lVar3;
    uVar9 = length + -0x10 + (uVar9 >> 3) * -8;
    uVar8 = local_50;
    uVar12 = local_58;
  }
  uVar7 = uVar8;
  uVar6 = uVar12;
  if (uVar9 == 0xfffffffffffffff8) goto switchD_001005c9_default;
  puVar13 = in + uVar9 + 8;
  switch(uVar9) {
  default:
    goto switchD_00100417_default;
  case 0xfffffffffffffff9:
    uVar9 = 0;
    goto LAB_00100719;
  case 0xfffffffffffffffa:
    uVar9 = 0;
    goto LAB_0010070a;
  case 0xfffffffffffffffb:
    uVar9 = 0;
    goto LAB_001006fb;
  case 0xfffffffffffffffc:
    goto LAB_001006ef;
  case 0xfffffffffffffffd:
    uVar9 = 0;
    goto LAB_001006e1;
  case 0xfffffffffffffffe:
    uVar9 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = puVar13 + -1;
    puVar13 = puVar13 + -1;
    uVar9 = (ulong)*pbVar2 << 0x10;
  }
  pbVar2 = puVar13 + -1;
  puVar13 = puVar13 + -1;
  uVar9 = (ulong)*pbVar2 << 8 | uVar9;
LAB_001006e1:
  pbVar2 = puVar13 + -1;
  puVar13 = puVar13 + -1;
  uVar8 = uVar8 ^ (uVar9 | *pbVar2);
LAB_001006ef:
  pbVar2 = puVar13 + -1;
  puVar13 = puVar13 + -1;
  uVar9 = (ulong)*pbVar2 << 0x18;
LAB_001006fb:
  pbVar2 = puVar13 + -1;
  puVar13 = puVar13 + -1;
  uVar9 = (ulong)*pbVar2 << 0x10 | uVar9;
LAB_0010070a:
  uVar9 = (ulong)puVar13[-1] << 8 | uVar9;
  puVar13 = puVar13 + -1;
LAB_00100719:
  uVar12 = uVar12 ^ (uVar9 | puVar13[-1]);
switchD_00100417_default:
  local_58 = uVar12;
  local_50 = uVar8;
  RC2_encrypt(&local_58,ks);
  uVar12 = local_58 >> 0x18 & 0xffffffff;
  uVar10 = (undefined1)(local_50 >> 0x18);
  uVar5 = (undefined1)(local_50 >> 0x10);
  uVar9 = local_50 >> 8 & 0xffffffff;
  uVar8 = local_58 >> 0x10 & 0xffffffff;
  uVar14 = local_58 >> 8 & 0xffffffff;
  *local_70 = (((((((local_50 >> 0x18 & 0xff) << 8 | local_50 >> 0x10 & 0xff) << 8 |
                  local_50 >> 8 & 0xff) << 8 | local_50 & 0xff) << 8 | local_58 >> 0x18 & 0xff) << 8
               | local_58 >> 0x10 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 & 0xff;
  uVar6 = local_58;
  uVar7 = local_50;
LAB_00100647:
  *(ulong *)iv = ((((((ulong)CONCAT11(uVar10,uVar5) << 8 | uVar9 & 0xff) << 8 | uVar7 & 0xff) << 8 |
                   uVar12 & 0xff) << 8 | uVar8 & 0xff) << 8 | uVar14 & 0xff) << 8 | uVar6 & 0xff;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


