
void aria_rot128(long param_1,long param_2,long param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)(param_4 >> 5);
  uVar2 = *(uint *)(param_3 + uVar5 * 4);
  lVar4 = 0;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  do {
    uVar1 = (int)uVar5 + 1;
    uVar3 = uVar2 << (param_4 & 0x1f);
    uVar2 = *(uint *)(param_3 + (ulong)(uVar1 & 3) * 4);
    uVar5 = (ulong)(uVar1 & 3);
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar3 = uVar2 >> (0x20 - (param_4 & 0x1f) & 0x1f) | uVar3;
    *(uint *)(param_1 + lVar4) =
         (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
         *(uint *)(param_2 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  return;
}



void aria_fo_xor(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = *param_2 ^ *param_3;
  uVar9 = param_2[1] ^ param_3[1];
  uVar8 = param_2[2] ^ param_3[2];
  uVar2 = param_2[3] ^ param_3[3];
  uVar3 = (uint)(byte)aria_is2[uVar6 >> 0x18] << 0x18 ^ (uint)(byte)aria_sb1[uVar6 & 0xff] ^
          (uint)(byte)aria_sb2[uVar6 >> 8 & 0xff] << 8;
  uVar4 = uVar3 ^ (uint)(byte)aria_is1[uVar6 >> 0x10 & 0xff] << 0x10;
  uVar6 = (uint)(byte)aria_is2[uVar9 >> 0x18] << 0x18 ^ (uint)(byte)aria_sb1[uVar9 & 0xff] ^
          (uint)(byte)aria_sb2[uVar9 >> 8 & 0xff] << 8;
  uVar7 = uVar6 ^ (uint)(byte)aria_is1[uVar9 >> 0x10 & 0xff] << 0x10;
  uVar6 = uVar6 << 0x10;
  uVar1 = uVar7 >> 0x10;
  uVar10 = (uint)(byte)aria_is2[uVar2 >> 0x18] << 0x18 ^ (uint)(byte)aria_sb1[uVar2 & 0xff] ^
           (uint)(byte)aria_sb2[uVar2 >> 8 & 0xff] << 8;
  uVar9 = uVar10 << 0x10;
  uVar10 = (uVar10 ^ (uint)(byte)aria_is1[uVar2 >> 0x10 & 0xff] << 0x10) >> 0x10;
  uVar5 = uVar3 << 0x10 | uVar4 >> 0x10;
  uVar3 = (uint)(byte)aria_sb2[uVar8 >> 8 & 0xff] << 8 ^
          (uint)(byte)aria_is1[uVar8 >> 0x10 & 0xff] << 0x10;
  uVar11 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8) << 0x10 |
           ((uVar10 & 0xff00) << 8 | uVar10 << 0x18) >> 0x10;
  uVar2 = (uint)(byte)aria_is2[uVar8 >> 0x18] | (uVar3 & 0xff0000) >> 8;
  uVar3 = uVar2 | (uVar3 & 0xff00) << 8 | (uint)(byte)aria_sb1[uVar8 & 0xff] << 0x18;
  uVar10 = uVar3 ^ (uVar9 | uVar10);
  uVar3 = uVar2 << 0x10 | uVar3 >> 0x10;
  uVar7 = uVar7 ^ uVar3;
  uVar8 = ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8) << 0x10 |
          ((uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 0x10) ^ uVar5;
  uVar5 = ((uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8) << 0x10 |
          ((uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 0x10) ^ uVar11 ^ uVar5;
  uVar7 = (uVar10 << 0x10 | uVar10 >> 0x10) ^ uVar5;
  uVar2 = uVar5 << 0x10;
  uVar9 = uVar5 >> 0x10;
  *param_1 = (uVar6 | uVar1) ^ *param_4 ^
             ((uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8) << 0x10 |
             ((uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 0x10);
  param_1[1] = param_4[1] ^ uVar4 ^ uVar10 ^ uVar5;
  param_1[2] = (((uVar8 << 0x10) >> 0x18 | (uVar8 << 0x10 & 0xff0000) >> 8) << 0x10 |
               ((uVar8 >> 0x10 & 0xff00) << 8 | (uVar8 >> 0x10) << 0x18) >> 0x10) ^ uVar11 ^
               param_4[2] ^ (uVar2 | uVar9);
  param_1[3] = ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8) << 0x10 |
               ((uVar9 & 0xff00) << 8 | uVar9 << 0x18) >> 0x10) ^ uVar3 ^ param_4[3] ^ uVar8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mbedtls_aria_setkey_enc(char *param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  char *pcVar23;
  long in_FS_OFFSET;
  int local_c8;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8[0] = __LC0;
  local_b8[1] = _UNK_001022c8;
  local_a8 = __LC1;
  uStack_a0 = _UNK_001022d8;
  local_98 = __LC2;
  uStack_90 = _UNK_001022e8;
  if (((param_3 & 0xffffffbf) == 0x80) || (param_3 == 0x100)) {
    local_88[0] = *(undefined8 *)param_2;
    local_88[1] = *(undefined8 *)(param_2 + 2);
    uVar19 = *param_2;
    uVar22 = param_3 - 0x80 >> 6;
    uVar2 = param_2[3];
    uVar3 = param_2[2];
    uVar4 = param_2[1];
    uVar21 = (ulong)uVar22;
    puVar13 = local_b8;
    cVar9 = (char)uVar22 * '\x02' + '\f';
    local_78 = (undefined1  [16])0x0;
    if ((param_3 < 0xc0) ||
       (local_78._0_8_ = *(undefined8 *)(param_2 + 4), local_78._8_8_ = 0, param_3 != 0x100)) {
      *param_1 = cVar9;
      aria_fo_xor(local_78,local_88,puVar13 + uVar21 * 2);
      local_c8 = uVar22 + 1;
      uVar22 = *(uint *)(&uStack_a0 + uVar21 * 2);
      uVar10 = *(uint *)((long)&uStack_a0 + uVar21 * 0x10 + 4);
      uVar14 = *(uint *)((long)&local_a8 + uVar21 * 0x10 + 4);
      uVar6 = *(uint *)(&local_a8 + uVar21 * 2);
    }
    else {
      local_78._8_8_ = *(undefined8 *)(param_2 + 6);
      *param_1 = cVar9;
      aria_fo_xor(local_78,local_88,puVar13 + uVar21 * 2);
      uVar6 = 0xb7c17c51;
      uVar14 = 0x940a2227;
      local_c8 = 0;
      uVar10 = 0xe06e9afa;
      uVar22 = 0xe8ab13fe;
    }
    uVar6 = uVar6 ^ local_78._0_4_;
    uVar14 = uVar14 ^ local_78._4_4_;
    uVar10 = uVar10 ^ local_78._12_4_;
    uVar22 = uVar22 ^ local_78._8_4_;
    uVar11 = (uint)(byte)aria_sb2[uVar6 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar6 & 0xff] ^
             (uint)(byte)aria_is2[uVar6 >> 8 & 0xff] << 8;
    uVar12 = uVar11 ^ (uint)(byte)aria_sb1[uVar6 >> 0x10 & 0xff] << 0x10;
    uVar6 = (uint)(byte)aria_is2[uVar14 >> 8 & 0xff] << 8 ^
            (uint)(byte)aria_sb2[uVar14 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar14 & 0xff];
    uVar7 = uVar6 ^ (uint)(byte)aria_sb1[uVar14 >> 0x10 & 0xff] << 0x10;
    uVar6 = uVar6 << 0x10;
    uVar5 = uVar7 >> 0x10;
    uVar15 = (uint)(byte)aria_is2[uVar10 >> 8 & 0xff] << 8 ^
             (uint)(byte)aria_sb2[uVar10 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar10 & 0xff];
    uVar14 = uVar15 << 0x10;
    uVar15 = (uVar15 ^ (uint)(byte)aria_sb1[uVar10 >> 0x10 & 0xff] << 0x10) >> 0x10;
    uVar17 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8) << 0x10 |
             ((uVar15 & 0xff00) << 8 | uVar15 << 0x18) >> 0x10;
    uVar16 = (uint)(byte)aria_is2[uVar22 >> 8 & 0xff] << 8 ^
             (uint)(byte)aria_sb1[uVar22 >> 0x10 & 0xff] << 0x10;
    uVar11 = uVar11 << 0x10 | uVar12 >> 0x10;
    uVar10 = (uint)(byte)aria_sb2[uVar22 >> 0x18] | (uVar16 & 0xff0000) >> 8;
    uVar22 = uVar10 | (uVar16 & 0xff00) << 8 | (uint)(byte)aria_is1[uVar22 & 0xff] << 0x18;
    uVar15 = (uVar14 | uVar15) ^ uVar22;
    uVar18 = uVar10 << 0x10 | uVar22 >> 0x10;
    uVar7 = uVar7 ^ uVar18;
    uVar16 = ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8) << 0x10 |
             ((uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 0x10) ^ uVar11;
    uVar11 = ((uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8) << 0x10 |
             ((uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 0x10) ^ uVar17 ^ uVar11;
    uVar14 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar11;
    uVar22 = uVar11 << 0x10;
    uVar10 = uVar11 >> 0x10;
    local_68 = CONCAT44(uVar12 ^ uVar4 ^ uVar11 ^ uVar15,
                        ((uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8) << 0x10 |
                        ((uVar14 & 0xff00) << 8 | uVar14 << 0x18) >> 0x10) ^ uVar19 ^
                        (uVar6 | uVar5));
    uStack_60 = CONCAT44(((uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8) << 0x10 |
                         ((uVar10 & 0xff00) << 8 | uVar10 << 0x18) >> 0x10) ^ uVar18 ^ uVar2 ^
                         uVar16,(((uVar16 << 0x10) >> 0x18 | (uVar16 << 0x10 & 0xff0000) >> 8) <<
                                 0x10 | ((uVar16 >> 0x10 & 0xff00) << 8 | (uVar16 >> 0x10) << 0x18)
                                        >> 0x10) ^ uVar17 ^ uVar3 ^ (uVar22 | uVar10));
    if (local_c8 != 2) {
      puVar13 = puVar13 + (long)(local_c8 + 1) * 2;
    }
    uVar19 = 0;
    pcVar23 = param_1 + 4;
    aria_fo_xor(local_58,&local_68,puVar13,local_78);
    puVar13 = local_88;
    do {
      uVar19 = uVar19 + 1;
      puVar20 = local_88 + (ulong)(uVar19 & 3) * 2;
      aria_rot128(pcVar23,puVar13,puVar20,0x6d);
      aria_rot128(pcVar23 + 0x40,puVar13,puVar20,0x61);
      aria_rot128(pcVar23 + 0x80,puVar13,puVar20,0x3d);
      pcVar1 = pcVar23 + 0xc0;
      pcVar23 = pcVar23 + 0x10;
      aria_rot128(pcVar1,puVar13,puVar20,0x1f);
      puVar13 = puVar13 + 2;
    } while (uVar19 != 4);
    aria_rot128(param_1 + 0x104,local_88,local_78,0x13);
    mbedtls_platform_zeroize(local_88,0x40);
    uVar8 = 0;
  }
  else {
    uVar8 = 0xffffffa4;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_aria_setkey_dec(byte *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  iVar7 = mbedtls_aria_setkey_enc();
  if (iVar7 == 0) {
    bVar2 = *param_1;
    if (bVar2 != 0) {
      pbVar18 = param_1 + 0x10;
      iVar19 = 0;
      uVar20 = (uint)bVar2;
      do {
        puVar15 = (undefined4 *)(((long)(param_1 + (ulong)bVar2 * 8) * 2 + 0x10) - (long)pbVar18);
        pbVar11 = pbVar18 + -0x10;
        do {
          pbVar10 = pbVar11;
          puVar1 = puVar15 + 1;
          uVar3 = *(undefined4 *)(pbVar10 + 4);
          pbVar11 = pbVar10 + 4;
          puVar15 = puVar15 + 1;
          *(undefined4 *)pbVar11 = *puVar1;
          *puVar15 = uVar3;
        } while (pbVar11 != pbVar18);
        iVar19 = iVar19 + 1;
        uVar20 = uVar20 - 1;
        pbVar18 = pbVar10 + 0x14;
      } while (iVar19 < (int)uVar20);
      if (bVar2 != 1) {
        puVar16 = (uint *)(param_1 + 0x14);
        do {
          uVar20 = puVar16[2];
          puVar17 = puVar16 + 4;
          uVar8 = puVar16[1];
          uVar4 = *puVar16;
          uVar5 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8;
          uVar13 = uVar5 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
          uVar20 = puVar16[3] << 0x10;
          uVar9 = puVar16[3] >> 0x10;
          uVar22 = uVar5 << 0x10 | uVar13 >> 0x10;
          uVar5 = uVar8 << 0x10;
          uVar6 = uVar8 >> 0x10;
          uVar8 = uVar8 ^ uVar22;
          uVar21 = (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8) << 0x10 |
                   ((uVar9 & 0xff00) << 8 | uVar9 << 0x18) >> 0x10;
          uVar12 = uVar4 << 0x10 | uVar4 >> 0x10;
          uVar13 = (uVar20 | uVar9) ^ uVar13;
          uVar9 = ((uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8) << 0x10 |
                  ((uVar8 & 0xff00) << 8 | uVar8 << 0x18) >> 0x10) ^ uVar21 ^ uVar12;
          uVar12 = ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8) << 0x10 |
                   ((uVar6 & 0xff00) << 8 | uVar6 << 0x18) >> 0x10) ^ uVar12;
          uVar20 = uVar9 << 0x10;
          uVar8 = uVar9 >> 0x10;
          uVar14 = (uVar13 << 0x10 | uVar13 >> 0x10) ^ uVar9;
          *(ulong *)puVar16 =
               CONCAT44(uVar9 ^ uVar13 ^ uVar4,
                        ((uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8) << 0x10 |
                        ((uVar14 & 0xff00) << 8 | uVar14 << 0x18) >> 0x10) ^ (uVar5 | uVar6));
          *(ulong *)(puVar16 + 2) =
               CONCAT44(((uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8) << 0x10 |
                        ((uVar8 & 0xff00) << 8 | uVar8 << 0x18) >> 0x10) ^ uVar22 ^ uVar12,
                        (((uVar12 << 0x10) >> 0x18 | (uVar12 << 0x10 & 0xff0000) >> 8) << 0x10 |
                        ((uVar12 >> 0x10 & 0xff00) << 8 | (uVar12 >> 0x10) << 0x18) >> 0x10) ^
                        uVar21 ^ (uVar20 | uVar8));
          puVar16 = puVar17;
        } while ((uint *)(param_1 + (ulong)(bVar2 - 2) * 0x10 + 0x24) != puVar17);
      }
    }
  }
  return iVar7;
}



undefined8 mbedtls_aria_crypt_ecb(byte *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int local_54;
  
  puVar14 = (uint *)(param_1 + 4);
  bVar1 = *param_1;
  uVar6 = param_2[3];
  uVar2 = *param_2;
  uVar9 = param_2[1];
  uVar4 = param_2[2];
  local_54 = 0;
  while( true ) {
    uVar2 = uVar2 ^ *puVar14;
    uVar9 = uVar9 ^ puVar14[1];
    uVar6 = uVar6 ^ puVar14[3];
    uVar4 = uVar4 ^ puVar14[2];
    uVar11 = (uint)(byte)aria_sb2[uVar2 >> 8 & 0xff] << 8 ^
             (uint)(byte)aria_is2[uVar2 >> 0x18] << 0x18 ^ (uint)(byte)aria_sb1[uVar2 & 0xff];
    uVar12 = uVar11 ^ (uint)(byte)aria_is1[uVar2 >> 0x10 & 0xff] << 0x10;
    uVar2 = (uint)(byte)aria_sb2[uVar9 >> 8 & 0xff] << 8 ^
            (uint)(byte)aria_is2[uVar9 >> 0x18] << 0x18 ^ (uint)(byte)aria_sb1[uVar9 & 0xff];
    uVar3 = uVar2 ^ (uint)(byte)aria_is1[uVar9 >> 0x10 & 0xff] << 0x10;
    uVar2 = uVar2 << 0x10;
    uVar10 = uVar3 >> 0x10;
    uVar13 = (uint)(byte)aria_sb2[uVar6 >> 8 & 0xff] << 8 ^
             (uint)(byte)aria_is2[uVar6 >> 0x18] << 0x18 ^ (uint)(byte)aria_sb1[uVar6 & 0xff];
    uVar9 = uVar13 << 0x10;
    uVar13 = (uVar13 ^ (uint)(byte)aria_is1[uVar6 >> 0x10 & 0xff] << 0x10) >> 0x10;
    uVar8 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8) << 0x10 |
            ((uVar13 & 0xff00) << 8 | uVar13 << 0x18) >> 0x10;
    uVar7 = (uint)(byte)aria_sb2[uVar4 >> 8 & 0xff] << 8 ^
            (uint)(byte)aria_is1[uVar4 >> 0x10 & 0xff] << 0x10;
    uVar6 = (uint)(byte)aria_is2[uVar4 >> 0x18] | (uVar7 & 0xff0000) >> 8;
    uVar7 = uVar6 | (uVar7 & 0xff00) << 8 | (uint)(byte)aria_sb1[uVar4 & 0xff] << 0x18;
    uVar4 = uVar11 << 0x10 | uVar12 >> 0x10;
    uVar11 = (uVar9 | uVar13) ^ uVar7;
    uVar15 = uVar6 << 0x10 | uVar7 >> 0x10;
    uVar13 = ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8) << 0x10 |
             ((uVar10 & 0xff00) << 8 | uVar10 << 0x18) >> 0x10) ^ uVar4;
    uVar3 = uVar3 ^ uVar15;
    uVar4 = ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8) << 0x10 |
            ((uVar3 & 0xff00) << 8 | uVar3 << 0x18) >> 0x10) ^ uVar8 ^ uVar4;
    uVar6 = uVar4 << 0x10;
    uVar9 = uVar4 >> 0x10;
    uVar3 = (uVar11 << 0x10 | uVar11 >> 0x10) ^ uVar4;
    uVar11 = uVar12 ^ puVar14[5] ^ uVar4 ^ uVar11;
    uVar7 = (((uVar13 << 0x10) >> 0x18 | (uVar13 << 0x10 & 0xff0000) >> 8) << 0x10 |
            ((uVar13 >> 0x10 & 0xff00) << 8 | (uVar13 >> 0x10) << 0x18) >> 0x10) ^ uVar8 ^
            puVar14[6] ^ (uVar6 | uVar9);
    uVar2 = ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8) << 0x10 |
            ((uVar3 & 0xff00) << 8 | uVar3 << 0x18) >> 0x10) ^ puVar14[4] ^ (uVar2 | uVar10);
    local_54 = local_54 + 2;
    uVar13 = puVar14[7] ^
             ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8) << 0x10 |
             ((uVar9 & 0xff00) << 8 | uVar9 << 0x18) >> 0x10) ^ uVar15 ^ uVar13;
    uVar10 = (uint)(byte)aria_is2[uVar2 >> 8 & 0xff] << 8 ^
             (uint)(byte)aria_sb2[uVar2 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar2 & 0xff];
    uVar3 = uVar10 ^ (uint)(byte)aria_sb1[uVar2 >> 0x10 & 0xff] << 0x10;
    uVar2 = (uint)(byte)aria_is2[uVar11 >> 8 & 0xff] << 8 ^
            (uint)(byte)aria_sb2[uVar11 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar11 & 0xff];
    uVar4 = uVar2 ^ (uint)(byte)aria_sb1[uVar11 >> 0x10 & 0xff] << 0x10;
    uVar8 = (uint)(byte)aria_is2[uVar7 >> 8 & 0xff] << 8 ^
            (uint)(byte)aria_sb2[uVar7 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar7 & 0xff] ^
            (uint)(byte)aria_sb1[uVar7 >> 0x10 & 0xff] << 0x10;
    uVar6 = (uint)(byte)aria_is2[uVar13 >> 8 & 0xff] << 8 ^
            (uint)(byte)aria_sb2[uVar13 >> 0x18] << 0x18 ^ (uint)(byte)aria_is1[uVar13 & 0xff];
    puVar14 = puVar14 + 8;
    uVar9 = uVar6 ^ (uint)(byte)aria_sb1[uVar13 >> 0x10 & 0xff] << 0x10;
    if ((int)(uint)bVar1 <= local_54) break;
    uVar13 = (uint)(byte)aria_sb2[uVar7 >> 0x18] | (uVar8 & 0xff0000) >> 8;
    uVar7 = uVar13 | (uVar8 & 0xff00) << 8 | (uint)(byte)aria_is1[uVar7 & 0xff] << 0x18;
    uVar6 = uVar6 << 0x10;
    uVar9 = uVar9 >> 0x10;
    uVar12 = uVar13 << 0x10 | uVar7 >> 0x10;
    uVar7 = (uVar6 | uVar9) ^ uVar7;
    uVar13 = uVar4 ^ uVar12;
    uVar8 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8) << 0x10 |
            ((uVar9 & 0xff00) << 8 | uVar9 << 0x18) >> 0x10;
    uVar11 = uVar10 << 0x10 | uVar3 >> 0x10;
    uVar13 = ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8) << 0x10 |
             ((uVar13 & 0xff00) << 8 | uVar13 << 0x18) >> 0x10) ^ uVar8 ^ uVar11;
    uVar2 = uVar2 << 0x10;
    uVar4 = uVar4 >> 0x10;
    uVar6 = (uVar7 << 0x10 | uVar7 >> 0x10) ^ uVar13;
    uVar9 = uVar3 ^ uVar7 ^ uVar13;
    uVar10 = uVar13 << 0x10;
    uVar13 = uVar13 >> 0x10;
    uVar11 = ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8) << 0x10 |
             ((uVar4 & 0xff00) << 8 | uVar4 << 0x18) >> 0x10) ^ uVar11;
    uVar2 = ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8) << 0x10 |
            ((uVar6 & 0xff00) << 8 | uVar6 << 0x18) >> 0x10) ^ (uVar2 | uVar4);
    uVar6 = ((uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8) << 0x10 |
            ((uVar13 & 0xff00) << 8 | uVar13 << 0x18) >> 0x10) ^ uVar12 ^ uVar11;
    uVar4 = (uVar10 | uVar13) ^
            (((uVar11 << 0x10) >> 0x18 | (uVar11 << 0x10 & 0xff0000) >> 8) << 0x10 |
            ((uVar11 >> 0x10 & 0xff00) << 8 | (uVar11 >> 0x10) << 0x18) >> 0x10) ^ uVar8;
  }
  iVar5 = (bVar1 - 1 & 0xfffffffe) + 2;
  if (bVar1 == 0) {
    iVar5 = 2;
  }
  uVar6 = *(uint *)(param_1 + (long)iVar5 * 0x10 + 8);
  uVar2 = *(uint *)(param_1 + (long)iVar5 * 0x10 + 0xc);
  uVar10 = *(uint *)(param_1 + (long)iVar5 * 0x10 + 4);
  param_3[3] = uVar9 ^ *(uint *)(param_1 + (long)iVar5 * 0x10 + 0x10);
  *param_3 = uVar3 ^ uVar10;
  param_3[1] = uVar4 ^ uVar6;
  param_3[2] = uVar8 ^ uVar2;
  return 0;
}



void mbedtls_aria_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x114U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_aria_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0x114);
    return;
  }
  return;
}



undefined8
mbedtls_aria_crypt_cbc
          (undefined8 param_1,uint param_2,ulong param_3,ulong *param_4,ulong *param_5,
          ulong *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_XMM0_Qb;
  
  if (1 < param_2) {
    return 0xffffffa4;
  }
  if ((param_3 & 0xf) == 0) {
    if (param_2 == 0) {
      puVar2 = (ulong *)((long)param_6 + param_3);
      if (param_3 != 0) {
        do {
          uVar4 = mbedtls_aria_crypt_ecb(*param_5,param_1,param_5,param_6);
          *param_6 = *param_6 ^ *param_4;
          param_5 = param_5 + 2;
          param_6[1] = param_6[1] ^ param_4[1];
          param_6 = param_6 + 2;
          *param_4 = uVar4;
          param_4[1] = extraout_XMM0_Qb;
        } while (param_6 != puVar2);
        return 0;
      }
    }
    else if (param_3 != 0) {
      puVar2 = param_6;
      do {
        *puVar2 = *param_5 ^ *param_4;
        puVar1 = param_5 + 1;
        puVar3 = puVar2 + 2;
        param_5 = param_5 + 2;
        puVar2[1] = *puVar1 ^ param_4[1];
        mbedtls_aria_crypt_ecb(param_1,puVar2,puVar2);
        uVar4 = puVar2[1];
        *param_4 = *puVar2;
        param_4[1] = uVar4;
        puVar2 = puVar3;
      } while (puVar3 != (ulong *)((long)param_6 + param_3));
    }
    return 0;
  }
  return 0xffffffa2;
}



undefined8
mbedtls_aria_crypt_cfb128
          (undefined8 param_1,uint param_2,long param_3,ulong *param_4,long param_5,byte *param_6,
          byte *param_7)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((param_2 < 2) && (uVar4 = *param_4, uVar4 < 0x10)) {
    if (param_2 == 0) {
      if (param_3 != 0) {
        pbVar6 = param_6 + param_3;
        do {
          if (uVar4 == 0) {
            mbedtls_aria_crypt_ecb(param_1,param_5,param_5);
          }
          pbVar1 = (byte *)(param_5 + uVar4);
          bVar2 = *param_6;
          param_6 = param_6 + 1;
          uVar4 = (ulong)((int)uVar4 + 1U & 0xf);
          *param_7 = *pbVar1 ^ bVar2;
          *pbVar1 = bVar2;
          param_7 = param_7 + 1;
        } while (pbVar6 != param_6);
      }
    }
    else {
      pbVar6 = param_6;
      if (param_3 != 0) {
        do {
          if (uVar4 == 0) {
            mbedtls_aria_crypt_ecb(param_1,param_5,param_5);
          }
          pbVar1 = (byte *)(param_5 + uVar4);
          pbVar5 = pbVar6 + 1;
          bVar2 = *pbVar1 ^ *pbVar6;
          uVar4 = (ulong)((int)uVar4 + 1U & 0xf);
          *param_7 = bVar2;
          *pbVar1 = bVar2;
          pbVar6 = pbVar5;
          param_7 = param_7 + 1;
        } while (param_6 + param_3 != pbVar5);
      }
    }
    *param_4 = uVar4;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffa4;
  }
  return uVar3;
}



undefined8
mbedtls_aria_crypt_ctr
          (undefined8 param_1,long param_2,ulong *param_3,char *param_4,long param_5,byte *param_6,
          byte *param_7)

{
  byte *pbVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar4 = *param_3;
  if (uVar4 < 0x10) {
    if (param_2 != 0) {
      pbVar6 = param_6;
      do {
        if (uVar4 == 0) {
          mbedtls_aria_crypt_ecb(param_1,param_4,param_5);
          pcVar3 = param_4 + 0xf;
          do {
            *pcVar3 = *pcVar3 + '\x01';
            if (*pcVar3 != '\0') break;
            bVar7 = param_4 != pcVar3;
            pcVar3 = pcVar3 + -1;
          } while (bVar7);
        }
        pbVar5 = pbVar6 + 1;
        pbVar1 = (byte *)(param_5 + uVar4);
        uVar4 = (ulong)((int)uVar4 + 1U & 0xf);
        *param_7 = *pbVar1 ^ *pbVar6;
        pbVar6 = pbVar5;
        param_7 = param_7 + 1;
      } while (param_6 + param_2 != pbVar5);
    }
    *param_3 = uVar4;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffa4;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 mbedtls_aria_self_test(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long *local_1e8;
  long local_1d8;
  long lStack_1d0;
  int local_1bc;
  undefined8 local_1b8 [36];
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  plVar7 = &aria_test1_ecb_ct;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = local_1b8;
  for (lVar5 = 0x22; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)puVar10 = 0;
  if (param_1 != 0) {
    iVar12 = 0x80;
    while( true ) {
      __printf_chk(2,"  ARIA-ECB-%d (enc): ",iVar12);
      mbedtls_aria_setkey_enc(local_1b8,aria_test1_ecb_key,iVar12);
      mbedtls_aria_crypt_ecb(local_1b8,aria_test1_ecb_pt,&local_98);
      if (local_98 != *plVar7 || local_90 != plVar7[1]) break;
      puts("passed");
      __printf_chk(2,"  ARIA-ECB-%d (dec): ",iVar12);
      mbedtls_aria_setkey_dec(local_1b8,aria_test1_ecb_key,iVar12);
      mbedtls_aria_crypt_ecb(local_1b8,plVar7,&local_98);
      if (local_98 != 0x7766554433221100 || local_90 != -0x11223344556678) break;
      iVar12 = iVar12 + 0x40;
      puts("passed");
      if (iVar12 == 0x140) {
        if (param_1 != 0) {
          putchar(10);
        }
        goto LAB_00100ff8;
      }
      plVar7 = plVar7 + 2;
    }
    goto LAB_00101226;
  }
  iVar12 = 0x80;
  do {
    mbedtls_aria_setkey_enc(local_1b8,aria_test1_ecb_key,iVar12);
    mbedtls_aria_crypt_ecb(local_1b8,aria_test1_ecb_pt,&local_98);
    if (local_98 != *plVar7 || local_90 != plVar7[1]) goto LAB_00100f63;
    mbedtls_aria_setkey_dec(local_1b8,aria_test1_ecb_key,iVar12);
    mbedtls_aria_crypt_ecb(local_1b8,plVar7,&local_98);
    if (local_98 != 0x7766554433221100 || local_90 != -0x11223344556678) goto LAB_00100f63;
    iVar12 = iVar12 + 0x40;
    plVar7 = plVar7 + 2;
  } while (iVar12 != 0x140);
LAB_00100ff8:
  lVar3 = _UNK_001022f8;
  lVar5 = __LC9;
  plVar7 = &aria_test2_cbc_ct;
  if (param_1 != 0) {
    iVar12 = 0x80;
    do {
      __printf_chk(2,"  ARIA-CBC-%d (enc): ",iVar12);
      mbedtls_aria_setkey_enc(local_1b8,aria_test2_key,iVar12);
      local_88._8_8_ = _UNK_00102318;
      local_88._0_8_ = __LC16;
      local_78 = lVar5;
      lStack_70 = lVar3;
      local_68 = lVar5;
      lStack_60 = lVar3;
      local_58 = lVar5;
      lStack_50 = lVar3;
      mbedtls_aria_crypt_cbc(local_1b8,1,0x30,local_88,&aria_test2_pt,&local_78);
      if (((local_78 != *plVar7 || lStack_70 != plVar7[1]) ||
          (local_68 != plVar7[2] || lStack_60 != plVar7[3])) ||
         (local_58 != plVar7[4] || lStack_50 != plVar7[5])) goto LAB_00101226;
      puts("passed");
      __printf_chk(2,"  ARIA-CBC-%d (dec): ",iVar12);
      mbedtls_aria_setkey_dec(local_1b8,aria_test2_key,iVar12);
      local_1d8 = __LC11;
      lStack_1d0 = _UNK_00102308;
      local_88._8_8_ = _UNK_00102318;
      local_88._0_8_ = __LC16;
      local_78 = __LC11;
      lStack_70 = _UNK_00102308;
      local_68 = __LC11;
      lStack_60 = _UNK_00102308;
      local_58 = __LC11;
      lStack_50 = _UNK_00102308;
      mbedtls_aria_crypt_cbc(local_1b8,0,0x30,local_88,plVar7,&local_78);
      if (((local_78 != -0x55555555eeeeeeef || lStack_70 != -0x44444444eeeeeeef) ||
          (local_68 != -0x33333333eeeeeeef || lStack_60 != -0x22222222eeeeeeef)) ||
         (local_58 != -0x55555555ddddddde || lStack_50 != -0x44444444ddddddde)) goto LAB_00101226;
      iVar12 = iVar12 + 0x40;
      plVar7 = plVar7 + 6;
      puts("passed");
    } while (iVar12 != 0x140);
    if (param_1 != 0) {
      putchar(10);
    }
LAB_001012ff:
    iVar12 = 0x80;
    plVar7 = (long *)&aria_test2_cfb_ct;
    if (param_1 != 0) goto LAB_0010148d;
    do {
      while( true ) {
        uVar9 = 0;
        mbedtls_aria_setkey_enc(local_1b8,aria_test2_key,iVar12);
        local_78 = lVar5;
        lStack_70 = lVar3;
        local_68 = lVar5;
        lStack_60 = lVar3;
        local_58 = lVar5;
        lStack_50 = lVar3;
        local_88._8_8_ = _UNK_00102318;
        local_88._0_8_ = __LC16;
        pbVar11 = (byte *)&local_78;
        pbVar15 = &aria_test2_pt;
        do {
          if (uVar9 == 0) {
            mbedtls_aria_crypt_ecb(local_1b8,local_88,local_88);
          }
          pbVar1 = local_88 + uVar9;
          pbVar13 = pbVar15 + 1;
          bVar4 = *pbVar1 ^ *pbVar15;
          uVar9 = (ulong)((int)uVar9 + 1U & 0xf);
          *pbVar11 = bVar4;
          *pbVar1 = bVar4;
          pbVar11 = pbVar11 + 1;
          pbVar15 = pbVar13;
        } while (pbVar13 != &DAT_00101e30);
        if (((local_78 != *plVar7 || lStack_70 != plVar7[1]) ||
            (local_68 != plVar7[2] || lStack_60 != plVar7[3])) ||
           (local_58 != plVar7[4] || lStack_50 != plVar7[5])) goto LAB_001014da;
        if (param_1 != 0) {
          puts("passed");
          __printf_chk(2,"  ARIA-CFB-%d (dec): ",iVar12);
        }
        lVar14 = 0;
        uVar9 = 0;
        mbedtls_aria_setkey_enc(local_1b8,aria_test2_key,iVar12);
        local_78 = local_1d8;
        lStack_70 = lStack_1d0;
        local_88._8_8_ = _UNK_00102318;
        local_88._0_8_ = __LC16;
        local_68 = local_1d8;
        lStack_60 = lStack_1d0;
        local_58 = local_1d8;
        lStack_50 = lStack_1d0;
        do {
          if (uVar9 == 0) {
            mbedtls_aria_crypt_ecb(local_1b8,local_88,local_88);
          }
          pbVar11 = local_88 + uVar9;
          bVar4 = *(byte *)((long)plVar7 + lVar14);
          bVar2 = *pbVar11;
          uVar9 = (ulong)((int)uVar9 + 1U & 0xf);
          *pbVar11 = bVar4;
          *(byte *)((long)&local_78 + lVar14) = bVar2 ^ bVar4;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x30);
        if (((local_78 != -0x55555555eeeeeeef || lStack_70 != -0x44444444eeeeeeef) ||
            (local_68 != -0x33333333eeeeeeef || lStack_60 != -0x22222222eeeeeeef)) ||
           (local_58 != -0x55555555ddddddde || lStack_50 != -0x44444444ddddddde)) goto LAB_001014da;
        if (param_1 == 0) break;
        puts("passed");
        iVar12 = iVar12 + 0x40;
        plVar7 = plVar7 + 6;
        if (iVar12 == 0x140) {
          putchar(10);
          goto LAB_0010160b;
        }
LAB_0010148d:
        __printf_chk(2,"  ARIA-CFB-%d (enc): ",iVar12);
      }
      iVar12 = iVar12 + 0x40;
      plVar7 = plVar7 + 6;
    } while (iVar12 != 0x140);
LAB_0010160b:
    local_1bc = 0x80;
    plVar7 = (long *)&aria_test2_ctr_ct;
    if (param_1 != 0) goto LAB_001017b0;
LAB_0010162e:
    do {
      uVar9 = 0;
      mbedtls_aria_setkey_enc(local_1b8,aria_test2_key,local_1bc);
      local_88 = (undefined1  [16])0x0;
      pbVar11 = &aria_test2_pt;
      pbVar15 = (byte *)&local_78;
      do {
        local_1e8 = &local_98;
        if (uVar9 == 0) {
          mbedtls_aria_crypt_ecb(local_1b8,local_88,local_1e8);
          pcVar6 = local_88 + 0xf;
          do {
            *pcVar6 = *pcVar6 + '\x01';
            if (*pcVar6 != '\0') break;
            bVar16 = pcVar6 != local_88;
            pcVar6 = pcVar6 + -1;
          } while (bVar16);
        }
        pbVar13 = pbVar11 + 1;
        pbVar1 = (byte *)((long)&local_98 + uVar9);
        uVar9 = (ulong)((int)uVar9 + 1U & 0xf);
        *pbVar15 = *pbVar1 ^ *pbVar11;
        pbVar11 = pbVar13;
        pbVar15 = pbVar15 + 1;
      } while (pbVar13 != &DAT_00101e30);
      if (((local_78 != *plVar7 || lStack_70 != plVar7[1]) ||
          (local_68 != plVar7[2] || lStack_60 != plVar7[3])) ||
         (local_58 != plVar7[4] || lStack_50 != plVar7[5])) goto LAB_001014da;
      if (param_1 != 0) {
        puts("passed");
        __printf_chk(2,"  ARIA-CTR-%d (dec): ",local_1bc);
      }
      uVar9 = 0;
      mbedtls_aria_setkey_enc(local_1b8,aria_test2_key,local_1bc);
      lVar5 = 0;
      local_88 = (undefined1  [16])0x0;
      local_78 = local_1d8;
      lStack_70 = lStack_1d0;
      local_68 = local_1d8;
      lStack_60 = lStack_1d0;
      local_58 = local_1d8;
      lStack_50 = lStack_1d0;
      do {
        local_1e8 = &local_98;
        if (uVar9 == 0) {
          mbedtls_aria_crypt_ecb(local_1b8,local_88,local_1e8);
          pcVar6 = local_88 + 0xf;
          do {
            *pcVar6 = *pcVar6 + '\x01';
            if (*pcVar6 != '\0') break;
            bVar16 = pcVar6 != local_88;
            pcVar6 = pcVar6 + -1;
          } while (bVar16);
        }
        *(byte *)((long)&local_78 + lVar5) =
             *(byte *)((long)&local_98 + uVar9) ^ *(byte *)((long)plVar7 + lVar5);
        lVar5 = lVar5 + 1;
        uVar9 = (ulong)((int)uVar9 + 1U & 0xf);
      } while (lVar5 != 0x30);
      if (((local_78 != -0x55555555eeeeeeef || lStack_70 != -0x44444444eeeeeeef) ||
          (local_68 != -0x33333333eeeeeeef || lStack_60 != -0x22222222eeeeeeef)) ||
         (local_58 != -0x55555555ddddddde || lStack_50 != -0x44444444ddddddde)) goto LAB_001014da;
      uVar8 = 0;
      if (param_1 != 0) goto code_r0x00101778;
      local_1bc = local_1bc + 0x40;
      plVar7 = plVar7 + 6;
      if (local_1bc == 0x140) goto LAB_00100f68;
    } while( true );
  }
  iVar12 = 0x80;
  while( true ) {
    mbedtls_aria_setkey_enc(local_1b8,aria_test2_key,iVar12);
    local_88._8_8_ = _UNK_00102318;
    local_88._0_8_ = __LC16;
    local_78 = lVar5;
    lStack_70 = lVar3;
    local_68 = lVar5;
    lStack_60 = lVar3;
    local_58 = lVar5;
    lStack_50 = lVar3;
    mbedtls_aria_crypt_cbc(local_1b8,1,0x30,local_88,&aria_test2_pt,&local_78);
    if (((local_78 != *plVar7 || lStack_70 != plVar7[1]) ||
        (local_68 != plVar7[2] || lStack_60 != plVar7[3])) ||
       (local_58 != plVar7[4] || lStack_50 != plVar7[5])) break;
    mbedtls_aria_setkey_dec(local_1b8,aria_test2_key,iVar12);
    local_88._8_8_ = _UNK_00102318;
    local_88._0_8_ = __LC16;
    local_1d8 = __LC11;
    lStack_1d0 = _UNK_00102308;
    local_78 = __LC11;
    lStack_70 = _UNK_00102308;
    local_68 = __LC11;
    lStack_60 = _UNK_00102308;
    local_58 = __LC11;
    lStack_50 = _UNK_00102308;
    mbedtls_aria_crypt_cbc(local_1b8,0,0x30,local_88,plVar7,&local_78);
    if (((local_78 != -0x55555555eeeeeeef || lStack_70 != -0x44444444eeeeeeef) ||
        (local_68 != -0x33333333eeeeeeef || lStack_60 != -0x22222222eeeeeeef)) ||
       (local_58 != -0x55555555ddddddde || lStack_50 != -0x44444444ddddddde)) break;
    iVar12 = iVar12 + 0x40;
    if (iVar12 == 0x140) goto LAB_001012ff;
    plVar7 = plVar7 + 6;
  }
LAB_00100f63:
  uVar8 = 1;
LAB_00100f68:
  mbedtls_platform_zeroize(local_1b8,0x114);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
LAB_001014da:
  if (param_1 != 0) {
LAB_00101226:
    puts("failed");
  }
  goto LAB_00100f63;
code_r0x00101778:
  puts("passed");
  local_1bc = local_1bc + 0x40;
  plVar7 = plVar7 + 6;
  if (local_1bc == 0x140) goto LAB_0010194b;
LAB_001017b0:
  __printf_chk(2,"  ARIA-CTR-%d (enc): ",local_1bc);
  goto LAB_0010162e;
LAB_0010194b:
  putchar(10);
  goto LAB_00100f68;
}


