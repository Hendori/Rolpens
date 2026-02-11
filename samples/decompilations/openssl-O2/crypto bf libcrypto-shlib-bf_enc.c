
void BF_encrypt(uint *data,BF_KEY *key)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *data ^ key->P[0];
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          data[1] ^ key->P[1];
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[2] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[3] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[4] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[5] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[6] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[7] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[8] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[9] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[10] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[0xb] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[0xc] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[0xd] ^ uVar4;
  uVar7 = uVar6 ^ key->P[0xe] ^
          (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300];
  uVar5 = (key->S[uVar7 >> 0x18] + key->S[(ulong)(uVar7 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar7 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar7 & 0xff) + 0x300] ^
          key->P[0xf] ^ uVar4;
  uVar4 = key->P[0x10];
  uVar6 = key->S[uVar5 >> 0x18];
  uVar1 = key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100];
  uVar2 = key->S[(ulong)(uVar5 >> 8 & 0xff) + 0x200];
  uVar3 = key->S[(ulong)(uVar5 & 0xff) + 0x300];
  *data = key->P[0x11] ^ uVar5;
  data[1] = (uVar6 + uVar1 ^ uVar2) + uVar3 ^ uVar4 ^ uVar7;
  return;
}



void BF_decrypt(uint *data,BF_KEY *key)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *data ^ key->P[0x11];
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          data[1] ^ key->P[0x10];
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[0xf] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[0xe] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[0xd] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[0xc] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[0xb] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[10] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[9] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[8] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[7] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[6] ^ uVar4;
  uVar6 = (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300] ^
          key->P[5] ^ uVar6;
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          key->P[4] ^ uVar4;
  uVar7 = uVar6 ^ key->P[3] ^
          (key->S[uVar4 >> 0x18] + key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar4 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar4 & 0xff) + 0x300];
  uVar5 = (key->S[uVar7 >> 0x18] + key->S[(ulong)(uVar7 >> 0x10 & 0xff) + 0x100] ^
          key->S[(ulong)(uVar7 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar7 & 0xff) + 0x300] ^
          key->P[2] ^ uVar4;
  uVar4 = key->P[1];
  uVar6 = key->S[uVar5 >> 0x18];
  uVar1 = key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100];
  uVar2 = key->S[(ulong)(uVar5 >> 8 & 0xff) + 0x200];
  uVar3 = key->S[(ulong)(uVar5 & 0xff) + 0x300];
  *data = key->P[0] ^ uVar5;
  data[1] = (uVar6 + uVar1 ^ uVar2) + uVar3 ^ uVar4 ^ uVar7;
  return;
}



void BF_cbc_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int enc)

{
  byte *pbVar1;
  long lVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uchar *puVar13;
  uint uVar14;
  long in_FS_OFFSET;
  ulong *local_80;
  ulong *local_68;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar10 = length - 8;
  uVar8 = *(uint *)ivec;
  uVar6 = *(uint *)(ivec + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (enc == 0) {
    local_80 = (ulong *)out;
    if (7 < length) {
      lVar2 = (uVar10 >> 3) * 8 + 8;
      local_80 = (ulong *)(out + lVar2);
      puVar9 = (uint *)in;
      uVar5 = uVar8;
      uVar4 = uVar6;
      do {
        uVar8 = *puVar9;
        uVar6 = puVar9[1];
        puVar7 = (ulong *)((long)out + 8);
        puVar9 = puVar9 + 2;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        local_48 = uVar8;
        local_44 = uVar6;
        BF_decrypt(&local_48,schedule);
        uVar4 = local_44 ^ uVar4;
        uVar5 = local_48 ^ uVar5;
        *(ulong *)out =
             (((((((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar4 >> 8 & 0xff)) << 8 |
                 (ulong)(uVar4 >> 0x10 & 0xff)) << 8 | (ulong)(uVar4 >> 0x18)) << 8 |
               (ulong)(uVar5 & 0xff)) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 8 |
             (ulong)(uVar5 >> 0x10 & 0xff)) << 8 | (ulong)(uVar5 >> 0x18);
        out = (uchar *)puVar7;
        uVar5 = uVar8;
        uVar4 = uVar6;
      } while (puVar7 != local_80);
      in = in + lVar2;
      uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    }
    uVar5 = uVar8;
    uVar4 = uVar6;
    if (uVar10 != 0xfffffffffffffff8) {
      uVar5 = *(uint *)in;
      uVar4 = *(uint *)((long)in + 4);
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      local_48 = uVar5;
      local_44 = uVar4;
      BF_decrypt(&local_48,schedule);
      uVar8 = uVar8 ^ local_48;
      uVar6 = uVar6 ^ local_44;
      puVar13 = (uchar *)((long)local_80 + uVar10 + 8);
      puVar3 = puVar13;
      switch(uVar10) {
      default:
        goto switchD_00100a88_default;
      case 0xfffffffffffffff9:
        goto switchD_00100a88_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_00100ac1;
      case 0xfffffffffffffffb:
        goto switchD_00100a88_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar13 = puVar13 + -1;
        *puVar13 = (uchar)(uVar6 >> 8);
      case 0xfffffffffffffffe:
        puVar3 = puVar13 + -1;
        *puVar3 = (uchar)(uVar6 >> 0x10);
      case 0xfffffffffffffffd:
        puVar13 = puVar3 + -1;
        puVar3[-1] = (uchar)(uVar6 >> 0x18);
      }
      puVar13[-1] = (uchar)uVar8;
      puVar3 = puVar13 + -1;
switchD_00100a88_caseD_fffffffb:
      puVar13 = puVar3 + -1;
      puVar3[-1] = (uchar)(uVar8 >> 8);
LAB_00100ac1:
      puVar3 = puVar13 + -1;
      puVar13[-1] = (uchar)(uVar8 >> 0x10);
switchD_00100a88_caseD_fffffff9:
      puVar3[-1] = (uchar)(uVar8 >> 0x18);
    }
switchD_00100a88_default:
    uVar8 = uVar5 >> 0x18;
    uVar12 = uVar5 >> 0x10;
    uVar11 = uVar4 >> 0x10;
    uVar10 = (ulong)(byte)(uVar5 >> 8);
    uVar6 = uVar4 >> 0x18;
    uVar14 = uVar4 >> 8 & 0xff;
    goto LAB_00100b04;
  }
  local_68 = (ulong *)out;
  if (-1 < (long)uVar10) {
    lVar2 = (uVar10 >> 3) * 8 + 8;
    local_68 = (ulong *)(out + lVar2);
    puVar9 = (uint *)in;
    local_44 = uVar6;
    local_48 = uVar8;
    do {
      uVar8 = *puVar9;
      uVar6 = puVar9[1];
      puVar7 = (ulong *)((long)out + 8);
      puVar9 = puVar9 + 2;
      local_48 = local_48 ^
                 (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
      local_44 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ^
                 local_44;
      BF_encrypt(&local_48,schedule);
      *(ulong *)out =
           (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(local_44 >> 8 & 0xff)) << 8 |
               (ulong)(local_44 >> 0x10 & 0xff)) << 8 | (ulong)(local_44 >> 0x18)) << 8 |
             (ulong)(local_48 & 0xff)) << 8 | (ulong)(local_48 >> 8 & 0xff)) << 8 |
           (ulong)(local_48 >> 0x10 & 0xff)) << 8 | (ulong)(local_48 >> 0x18);
      out = (uchar *)puVar7;
    } while (local_68 != puVar7);
    in = in + lVar2;
    uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    uVar8 = local_48;
    uVar6 = local_44;
  }
  uVar5 = uVar8;
  uVar4 = uVar6;
  if (uVar10 == 0xfffffffffffffff8) goto switchD_00100a88_default;
  puVar3 = in + uVar10 + 8;
  switch(uVar10) {
  default:
    goto switchD_001008ec_default;
  case 0xfffffffffffffff9:
    uVar5 = 0;
    goto LAB_00100bd0;
  case 0xfffffffffffffffa:
    uVar5 = 0;
    puVar13 = puVar3;
    goto LAB_00100bc3;
  case 0xfffffffffffffffb:
    uVar5 = 0;
    goto LAB_00100bb6;
  case 0xfffffffffffffffc:
    goto LAB_00100bae;
  case 0xfffffffffffffffd:
    uVar5 = 0;
    goto LAB_00100b9f;
  case 0xfffffffffffffffe:
    uVar5 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = puVar3 + -1;
    puVar3 = puVar3 + -1;
    uVar5 = (uint)*pbVar1 << 8;
  }
  pbVar1 = puVar3 + -1;
  puVar3 = puVar3 + -1;
  uVar5 = (uint)*pbVar1 << 0x10 | uVar5;
LAB_00100b9f:
  uVar6 = uVar6 ^ ((uint)puVar3[-1] << 0x18 | uVar5);
  puVar3 = puVar3 + -1;
LAB_00100bae:
  uVar5 = (uint)puVar3[-1];
  puVar3 = puVar3 + -1;
LAB_00100bb6:
  uVar5 = (uint)puVar3[-1] << 8 | uVar5;
  puVar13 = puVar3 + -1;
LAB_00100bc3:
  puVar3 = puVar13 + -1;
  uVar5 = (uint)puVar13[-1] << 0x10 | uVar5;
LAB_00100bd0:
  uVar8 = uVar8 ^ ((uint)puVar3[-1] << 0x18 | uVar5);
switchD_001008ec_default:
  local_48 = uVar8;
  local_44 = uVar6;
  BF_encrypt(&local_48,schedule);
  uVar14 = local_44 >> 8;
  uVar10 = (ulong)(local_48 >> 8);
  uVar11 = local_44 >> 0x10;
  uVar6 = local_44 >> 0x18;
  uVar12 = local_48 >> 0x10;
  uVar8 = local_48 >> 0x18;
  *local_68 = (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(uVar14 & 0xff)) << 8 |
                  (ulong)(uVar11 & 0xff)) << 8 | (ulong)uVar6) << 8 | (ulong)(local_48 & 0xff)) << 8
               | (ulong)(local_48 >> 8) & 0xff) << 8 | (ulong)(uVar12 & 0xff)) << 8 | (ulong)uVar8;
  uVar5 = local_48;
  uVar4 = local_44;
LAB_00100b04:
  *(ulong *)ivec =
       (((((((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar14 & 0xff)) << 8 | (ulong)(uVar11 & 0xff)) <<
           8 | (ulong)uVar6) << 8 | (ulong)(uVar5 & 0xff)) << 8 | uVar10 & 0xff) << 8 |
       (ulong)(uVar12 & 0xff)) << 8 | (ulong)uVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


