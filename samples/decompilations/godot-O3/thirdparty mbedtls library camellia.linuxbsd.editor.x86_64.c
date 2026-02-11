
void camellia_feistel(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 ^ *param_2;
  uVar1 = param_1[1] ^ param_2[1];
  uVar3 = (uint)(byte)FSb4[uVar1 >> 8 & 0xff] << 8 |
          (uint)(byte)FSb3[uVar1 >> 0x10 & 0xff] << 0x10 |
          (uint)(byte)FSb2[uVar1 >> 0x18] << 0x18 | (uint)(byte)FSb[uVar1 & 0xff];
  uVar1 = (uVar3 << 8 | (uint)(byte)FSb2[uVar1 >> 0x18]) ^
          ((uint)(byte)FSb3[uVar2 >> 8 & 0xff] << 8 |
          (uint)(byte)FSb2[uVar2 >> 0x10 & 0xff] << 0x10 |
          (uint)(byte)FSb[uVar2 >> 0x18] << 0x18 | (uint)(byte)FSb4[uVar2 & 0xff]);
  uVar3 = (uVar1 << 0x10 | uVar1 >> 0x10) ^ uVar3;
  uVar1 = (uVar3 >> 8 | uVar3 << 0x18) ^ uVar1;
  param_3[1] = param_3[1] ^ uVar1;
  *param_3 = uVar3 ^ *param_3 ^ (uVar1 >> 8 | uVar1 << 0x18);
  return;
}



void mbedtls_camellia_init(undefined8 *param_1)

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



void mbedtls_camellia_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0x114);
    return;
  }
  return;
}



undefined8 mbedtls_camellia_setkey_enc(undefined4 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 *puVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  int iVar17;
  char *pcVar18;
  long lVar19;
  long in_FS_OFFSET;
  ulong extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  ulong uVar20;
  undefined1 auVar21 [16];
  long local_150;
  undefined8 local_148;
  uint local_140 [2];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulong local_f8;
  ulong uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  ulong uVar10;
  
  puVar1 = param_1 + 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  puVar8 = (undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8);
  for (uVar14 = (ulong)(((int)puVar1 -
                        (int)(undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8)) + 0x110U >>
                       3); uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if ((param_3 - 0xc0 & 0xffffffbf) == 0) {
    *param_1 = 4;
    uVar13 = param_3 >> 3;
    uVar14 = 0;
    do {
      uVar4 = (int)uVar14 + 8;
      uVar10 = (ulong)uVar4;
      *(undefined8 *)(local_88 + uVar14) = *(undefined8 *)(*param_2 + uVar14);
      uVar14 = uVar10;
    } while (uVar4 < (uVar13 & 0xfffffff8));
    puVar2 = (undefined4 *)(local_88 + uVar10);
    lVar19 = 0;
    puVar11 = (undefined4 *)(*param_2 + uVar10);
    if ((uVar13 & 4) == 0) {
      if ((uVar13 & 2) == 0) goto LAB_00100837;
LAB_00100889:
      *(undefined2 *)((long)puVar2 + lVar19) = *(undefined2 *)((long)puVar11 + lVar19);
      lVar19 = lVar19 + 2;
      if ((uVar13 & 1) != 0) goto LAB_00100877;
LAB_0010083c:
    }
    else {
      *puVar2 = *puVar11;
      lVar19 = 4;
      if ((uVar13 & 2) != 0) goto LAB_00100889;
LAB_00100837:
      if ((uVar13 & 1) == 0) goto LAB_0010083c;
LAB_00100877:
      *(undefined1 *)((long)puVar2 + lVar19) = *(undefined1 *)((long)puVar11 + lVar19);
    }
    if (param_3 == 0xc0) {
      local_78._8_8_ = local_78._0_8_ ^ _LC1;
    }
    local_150 = 0x2c;
    lVar19 = 1;
  }
  else {
    uVar5 = 0xffffffdc;
    if (param_3 != 0x80) goto LAB_001007cd;
    *param_1 = 3;
    lVar19 = 0;
    local_150 = 0x20;
    local_88 = *param_2;
  }
  local_148 = _LC0;
  puVar6 = SIGMA_CHARS;
  puVar16 = (uint *)&local_148;
  do {
    uVar13 = *(uint *)(puVar6 + 8);
    uVar4 = *(uint *)(puVar6 + 0xc);
    puVar6 = puVar6 + 8;
    puVar16[2] = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18
    ;
    puVar16[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    puVar16 = puVar16 + 2;
  } while (puVar6 != (undefined1 *)0x102088);
  lVar7 = 0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  do {
    uVar13 = *(uint *)(local_88 + lVar7 * 4);
    *(uint *)(local_118 + lVar7 * 4) =
         uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  local_f8 = local_108._0_8_ ^ local_118._0_8_;
  uStack_f0 = local_108._8_8_ ^ local_118._8_8_;
  camellia_feistel(&local_f8,&local_148,&uStack_f0);
  uVar14 = camellia_feistel(&uStack_f0,local_140,&local_f8);
  uStack_f0 = uStack_f0 ^ extraout_XMM0_Qb;
  local_f8 = local_f8 ^ uVar14;
  camellia_feistel(&local_f8,local_138,&uStack_f0);
  auVar21 = camellia_feistel(&uStack_f0,local_130,&local_f8);
  uVar14 = extraout_XMM1_Qb;
  uVar10 = local_f8;
  uVar20 = uStack_f0;
  uVar5 = extraout_XMM0_Qb_00;
  if (param_3 != 0x80) {
    local_e8._8_8_ = extraout_XMM1_Qb ^ uStack_f0;
    local_e8._0_8_ = auVar21._8_8_ ^ local_f8;
    camellia_feistel(local_e8,local_128,local_e8 + 8);
    auVar21 = camellia_feistel(local_e8 + 8,local_120,local_e8);
    uVar14 = extraout_XMM1_Qb_00;
    uVar5 = extraout_XMM0_Qb_01;
  }
  lVar7 = lVar19 * 0x10;
  local_d8 = auVar21._0_8_;
  uStack_d0 = uVar5;
  iVar17 = 0xf;
  pcVar18 = &shifts + lVar7;
  puVar8 = &local_d8;
  do {
    if (*pcVar18 != '\0') {
      local_d8._0_4_ = auVar21._0_4_;
      local_d8._4_4_ = auVar21._4_4_;
      bVar12 = (byte)iVar17 & 0x1f;
      bVar3 = -bVar12;
      *(uint *)(puVar8 + 2) = (uint)local_d8 << bVar12 ^ local_d8._4_4_ >> (bVar3 & 0x1f);
      uStack_d0._0_4_ = (uint)uVar5;
      *(uint *)((long)puVar8 + 0x14) = local_d8._4_4_ << bVar12 ^ (uint)uStack_d0 >> (bVar3 & 0x1f);
      uStack_d0._4_4_ = (uint)((ulong)uVar5 >> 0x20);
      *(uint *)(puVar8 + 3) = (uint)uStack_d0 << bVar12 ^ uStack_d0._4_4_ >> (bVar3 & 0x1f);
      *(uint *)((long)puVar8 + 0x1c) = uStack_d0._4_4_ << bVar12 ^ (uint)local_d8 >> (bVar3 & 0x1f);
    }
    iVar17 = iVar17 + 0xf;
    pcVar18 = pcVar18 + 1;
    puVar8 = puVar8 + 2;
  } while (iVar17 != 0x4b);
  uVar9 = (ulong)(-(int)lVar19 & 0x50);
  lVar15 = 0;
  do {
    if ((&indexes)[lVar15 + uVar9] != -1) {
      puVar1[(char)(&indexes)[lVar15 + uVar9]] = *(undefined4 *)((long)&local_d8 + lVar15 * 4);
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x14);
  if (param_3 != 0x80) {
    pcVar18 = &DAT_00101c44 + lVar7;
    iVar17 = 0xf;
    local_d8 = auVar21._8_8_;
    uStack_d0 = uVar14;
    puVar8 = &local_d8;
    do {
      if (*pcVar18 != '\0') {
        local_d8._0_4_ = auVar21._8_4_;
        local_d8._4_4_ = auVar21._12_4_;
        bVar3 = (byte)iVar17 & 0x1f;
        bVar12 = 0x20 - bVar3;
        *(uint *)(puVar8 + 2) = (uint)local_d8 << bVar3 ^ local_d8._4_4_ >> (bVar12 & 0x1f);
        uStack_d0._0_4_ = (uint)uVar14;
        *(uint *)((long)puVar8 + 0x14) =
             local_d8._4_4_ << bVar3 ^ (uint)uStack_d0 >> (bVar12 & 0x1f);
        uStack_d0._4_4_ = (uint)(uVar14 >> 0x20);
        *(uint *)(puVar8 + 3) = (uint)uStack_d0 << bVar3 ^ uStack_d0._4_4_ >> (bVar12 & 0x1f);
        *(uint *)((long)puVar8 + 0x1c) =
             uStack_d0._4_4_ << bVar3 ^ (uint)local_d8 >> (bVar12 & 0x1f);
      }
      iVar17 = iVar17 + 0xf;
      pcVar18 = pcVar18 + 1;
      puVar8 = puVar8 + 2;
    } while (iVar17 != 0x4b);
    lVar15 = 0;
    do {
      if ((&DAT_00101bb4)[lVar15 + uVar9] != -1) {
        puVar1[(char)(&DAT_00101bb4)[lVar15 + uVar9]] =
             *(undefined4 *)((long)&local_d8 + lVar15 * 4);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x14);
  }
  pcVar18 = &DAT_00101c48 + lVar7;
  iVar17 = 0xf;
  local_d8 = uVar10;
  uVar14 = local_d8;
  uStack_d0 = uVar20;
  uVar20 = uStack_d0;
  puVar8 = &local_d8;
  do {
    if (*pcVar18 != '\0') {
      local_d8._0_4_ = (uint)uVar10;
      local_d8._4_4_ = (uint)(uVar10 >> 0x20);
      bVar3 = (byte)iVar17 & 0x1f;
      bVar12 = 0x20 - bVar3;
      *(uint *)(puVar8 + 2) = (uint)local_d8 << bVar3 ^ local_d8._4_4_ >> (bVar12 & 0x1f);
      uStack_d0._0_4_ = (uint)uVar20;
      *(uint *)((long)puVar8 + 0x14) = local_d8._4_4_ << bVar3 ^ (uint)uStack_d0 >> (bVar12 & 0x1f);
      uStack_d0._4_4_ = (uint)(uVar20 >> 0x20);
      *(uint *)(puVar8 + 3) = (uint)uStack_d0 << bVar3 ^ uStack_d0._4_4_ >> (bVar12 & 0x1f);
      *(uint *)((long)puVar8 + 0x1c) = uStack_d0._4_4_ << bVar3 ^ (uint)local_d8 >> (bVar12 & 0x1f);
    }
    iVar17 = iVar17 + 0xf;
    pcVar18 = pcVar18 + 1;
    puVar8 = puVar8 + 2;
  } while (iVar17 != 0x4b);
  lVar15 = 0;
  do {
    if ((&DAT_00101bc8)[lVar15 + uVar9] != -1) {
      puVar1[(char)(&DAT_00101bc8)[lVar15 + uVar9]] = *(undefined4 *)((long)&local_d8 + lVar15 * 4);
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x14);
  local_d8 = uVar14;
  uStack_d0 = uVar20;
  if (param_3 != 0x80) {
    iVar17 = 0xf;
    pcVar18 = &DAT_00101c4c + lVar7;
    local_d8 = local_e8._0_8_;
    uVar14 = local_d8;
    uStack_d0 = local_e8._8_8_;
    uVar10 = uStack_d0;
    puVar8 = &local_d8;
    do {
      if (*pcVar18 != '\0') {
        local_d8._0_4_ = local_e8._0_4_;
        local_d8._4_4_ = local_e8._4_4_;
        bVar3 = (byte)iVar17 & 0x1f;
        bVar12 = 0x20 - bVar3;
        *(uint *)(puVar8 + 2) = (uint)local_d8 << bVar3 ^ local_d8._4_4_ >> (bVar12 & 0x1f);
        uStack_d0._0_4_ = local_e8._8_4_;
        *(uint *)((long)puVar8 + 0x14) =
             local_d8._4_4_ << bVar3 ^ (uint)uStack_d0 >> (bVar12 & 0x1f);
        uStack_d0._4_4_ = local_e8._12_4_;
        *(uint *)(puVar8 + 3) = (uint)uStack_d0 << bVar3 ^ uStack_d0._4_4_ >> (bVar12 & 0x1f);
        *(uint *)((long)puVar8 + 0x1c) =
             uStack_d0._4_4_ << bVar3 ^ (uint)local_d8 >> (bVar12 & 0x1f);
      }
      iVar17 = iVar17 + 0xf;
      pcVar18 = pcVar18 + 1;
      puVar8 = puVar8 + 2;
    } while (iVar17 != 0x4b);
    lVar7 = 0;
    do {
      if ((&DAT_00101bdc)[lVar7 + uVar9] != -1) {
        puVar1[(char)(&DAT_00101bdc)[lVar7 + uVar9]] = *(undefined4 *)((long)&local_d8 + lVar7 * 4);
      }
      lVar7 = lVar7 + 1;
      local_d8 = uVar14;
      uStack_d0 = uVar10;
    } while (lVar7 != 0x14);
  }
  lVar7 = 0;
  do {
    if ((&transposes)[lVar7 + (ulong)(-(int)lVar19 & 0x14)] != -1) {
      param_1[local_150 + lVar7 + 1] =
           puVar1[(char)(&transposes)[lVar7 + (ulong)(-(int)lVar19 & 0x14)]];
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x14);
  uVar5 = 0;
LAB_001007cd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_camellia_setkey_dec(int *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 auStack_174 [7];
  int local_138;
  undefined8 auStack_134 [22];
  undefined8 auStack_84 [12];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar9 = &local_138;
  for (lVar7 = 0x22; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)piVar9 = 0;
    piVar9 = (int *)((long)piVar9 + 8);
  }
  *piVar9 = 0;
  iVar3 = mbedtls_camellia_setkey_enc(&local_138);
  if (iVar3 == 0) {
    *param_1 = local_138;
    uVar6 = (uint)(local_138 == 4);
    lVar7 = (long)(int)(uVar6 * 0x10 + 0x30) * 4;
    puVar1 = (undefined8 *)((long)auStack_134 + lVar7);
    lVar10 = (long)(int)(uVar6 * 8 + 0x16);
    uVar2 = *(undefined8 *)((long)auStack_134 + lVar7 + 8);
    *(undefined8 *)(param_1 + 1) = *puVar1;
    *(undefined8 *)(param_1 + 3) = uVar2;
    uVar4 = 0;
    puVar8 = auStack_84 + (ulong)(local_138 == 4) * 8;
    do {
      uVar5 = uVar4 + 1;
      uVar2 = *puVar8;
      *(undefined8 *)(param_1 + uVar4 * 4 + 5) = puVar8[1];
      *(undefined8 *)(param_1 + uVar4 * 4 + 5 + 2) = uVar2;
      uVar4 = uVar5;
      puVar8 = puVar8 + -2;
    } while (uVar5 < (lVar10 - 2U >> 1) + 1);
    uVar2 = puVar1[-1 - lVar10];
    *(undefined8 *)(param_1 + lVar10 * 2 + 5) = puVar1[-2 - lVar10];
    *(undefined8 *)(param_1 + lVar10 * 2 + 5 + 2) = uVar2;
  }
  mbedtls_platform_zeroize(&local_138,0x114);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_camellia_crypt_ecb(int *param_1,uint param_2,uint *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    uVar2 = *param_3;
    iVar1 = *param_1;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    puVar6 = (uint *)(param_1 + 5);
    uVar7 = param_3[3];
    local_48 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ^
               param_1[1];
    local_44 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
               param_1[2];
    local_40 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ^
               param_1[3];
    local_3c = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) ^
               param_1[4];
    if (iVar1 != 0) {
      while( true ) {
        camellia_feistel(&local_48,puVar6,&local_40);
        camellia_feistel(&local_40,puVar6 + 2,&local_48);
        camellia_feistel(&local_48,puVar6 + 4,&local_40);
        camellia_feistel(&local_40,puVar6 + 6,&local_48);
        camellia_feistel(&local_48,puVar6 + 8,&local_40);
        camellia_feistel(&local_40,puVar6 + 10,&local_48);
        if ((uint *)(param_1 + (ulong)(iVar1 - 1) * 0x10 + 5) == puVar6) break;
        local_44 = ((puVar6[0xc] & local_48) << 1 | (uint)((int)(puVar6[0xc] & local_48) < 0)) ^
                   local_44;
        local_48 = (local_44 | puVar6[0xd]) ^ local_48;
        local_40 = (puVar6[0xf] | local_3c) ^ local_40;
        local_3c = ((local_40 & puVar6[0xe]) << 1 | (uint)((int)(local_40 & puVar6[0xe]) < 0)) ^
                   local_3c;
        puVar6 = puVar6 + 0x10;
      }
      puVar6 = puVar6 + 0xc;
    }
    uVar2 = local_40 ^ *puVar6;
    uVar4 = local_3c ^ puVar6[1];
    uVar5 = local_48 ^ puVar6[2];
    uVar7 = local_44 ^ puVar6[3];
    uVar3 = 0;
    *param_4 = CONCAT44(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18,
                        uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18);
    param_4[1] = CONCAT44(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                          uVar7 << 0x18,
                          uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
  }
  else {
    uVar3 = 0xffffffdc;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_camellia_crypt_cbc
          (undefined8 param_1,uint param_2,ulong param_3,ulong *param_4,ulong *param_5,
          ulong *param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  if (1 < param_2) {
    return 0xffffffdc;
  }
  if ((param_3 & 0xf) == 0) {
    if (param_2 == 0) {
      puVar4 = (ulong *)((long)param_6 + param_3);
      if (param_3 != 0) {
        do {
          uVar2 = *param_5;
          uVar3 = param_5[1];
          mbedtls_camellia_crypt_ecb(param_1,0,param_5,param_6);
          *param_6 = *param_6 ^ *param_4;
          param_6[1] = param_6[1] ^ param_4[1];
          param_6 = param_6 + 2;
          *param_4 = uVar2;
          param_4[1] = uVar3;
          param_5 = param_5 + 2;
        } while (param_6 != puVar4);
        return 0;
      }
    }
    else if (param_3 != 0) {
      puVar4 = param_6;
      do {
        *puVar4 = *param_5 ^ *param_4;
        puVar1 = param_5 + 1;
        puVar5 = puVar4 + 2;
        param_5 = param_5 + 2;
        puVar4[1] = *puVar1 ^ param_4[1];
        mbedtls_camellia_crypt_ecb(param_1,1,puVar4,puVar4);
        uVar2 = puVar4[1];
        *param_4 = *puVar4;
        param_4[1] = uVar2;
        puVar4 = puVar5;
      } while (puVar5 != (ulong *)((long)param_6 + param_3));
    }
    return 0;
  }
  return 0xffffffda;
}



undefined8
mbedtls_camellia_crypt_cfb128
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
            mbedtls_camellia_crypt_ecb(param_1,1,param_5,param_5);
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
            mbedtls_camellia_crypt_ecb(param_1,1,param_5,param_5);
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
    uVar3 = 0xffffffdc;
  }
  return uVar3;
}



undefined8
mbedtls_camellia_crypt_ctr
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
          mbedtls_camellia_crypt_ecb(param_1,1,param_4,param_5);
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
    uVar2 = 0xffffffdc;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 mbedtls_camellia_self_test(int param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  size_t __n;
  undefined8 *puVar10;
  uint uVar11;
  long *plVar12;
  long in_FS_OFFSET;
  char *local_278;
  long *local_270;
  undefined8 *local_268;
  undefined1 *local_258;
  undefined4 local_238;
  undefined8 local_220;
  undefined8 local_218 [36];
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  long local_88;
  long local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  puVar10 = local_218;
  for (lVar3 = 0x22; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_98 = (undefined1  [16])0x0;
  *(undefined4 *)puVar10 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    uVar11 = 0;
    iVar6 = 0;
    iVar7 = 2;
    goto LAB_001010fb;
  }
  uVar11 = 0;
  uVar1 = 0;
  iVar6 = 0;
  iVar7 = 2;
  while( true ) {
    while( true ) {
      puVar10 = &camellia_test_ecb_key + (long)iVar6 * 8;
      plVar12 = &camellia_test_ecb_plain;
      plVar8 = &camellia_test_ecb_cipher + (long)iVar6 * 4;
      do {
        uVar2 = 0;
        do {
          uVar5 = (ulong)uVar2;
          uVar2 = uVar2 + 8;
          *(undefined8 *)(local_a8 + uVar5) = *(undefined8 *)((long)puVar10 + uVar5);
        } while (uVar2 < (uint)(iVar7 * 8));
        if (uVar1 == 0) {
          mbedtls_camellia_setkey_dec();
          local_f8 = *plVar8;
          lStack_f0 = plVar8[1];
          local_e8 = *plVar12;
          lStack_e0 = plVar12[1];
        }
        else {
          mbedtls_camellia_setkey_enc(local_218,local_a8,iVar7 << 6);
          local_f8 = *plVar12;
          lStack_f0 = plVar12[1];
          local_e8 = *plVar8;
          lStack_e0 = plVar8[1];
        }
        local_270 = &local_f8;
        mbedtls_camellia_crypt_ecb(local_218,uVar1,local_270,&local_88);
        if (local_88 != local_e8 || local_80 != lStack_e0) goto LAB_00101004;
        plVar12 = plVar12 + 2;
        puVar10 = puVar10 + 4;
        plVar8 = plVar8 + 2;
      } while (plVar12 != &camellia_test_ecb_key);
      uVar1 = 0;
      if (param_1 != 0) break;
      uVar11 = uVar11 + 1;
      if (uVar11 == 6) goto LAB_001011ea;
      iVar6 = (int)uVar11 >> 1;
      uVar1 = uVar11 & 1;
      iVar7 = iVar6 + 2;
    }
    puts("passed");
    uVar11 = uVar11 + 1;
    if (uVar11 == 6) break;
    puVar4 = &_LC4;
    iVar6 = (int)uVar11 >> 1;
    uVar1 = uVar11 & 1;
    iVar7 = iVar6 + 2;
    if ((uVar11 & 1) == 0) {
LAB_001010fb:
      puVar4 = &_LC3;
    }
    __printf_chk(2,"  CAMELLIA-ECB-%3d (%s): ",iVar7 << 6,puVar4);
  }
  putchar(10);
LAB_001011ea:
  do {
    iVar7 = (int)uVar1 >> 1;
    iVar6 = (iVar7 + 2) * 0x40;
    if (param_1 != 0) {
      puVar4 = &_LC3;
      if ((uVar1 & 1) != 0) {
        puVar4 = &_LC4;
      }
      __printf_chk(2,"  CAMELLIA-CBC-%3d (%s): ",iVar6,puVar4);
    }
    local_f8 = __LC10;
    lStack_f0 = _UNK_001020a8;
    local_e8 = __LC10;
    lStack_e0 = _UNK_001020a8;
    uVar11 = 0;
    do {
      uVar2 = uVar11 + 8;
      *(undefined8 *)(local_a8 + uVar11) =
           *(undefined8 *)(camellia_test_cbc_key + (ulong)uVar11 + (long)iVar7 * 0x20);
      uVar11 = uVar2;
    } while (uVar2 < (uint)((iVar7 + 2) * 8));
    if ((uVar1 & 1) == 0) {
      mbedtls_camellia_setkey_dec();
    }
    else {
      mbedtls_camellia_setkey_enc(local_218,local_a8,iVar6);
    }
    plVar12 = &camellia_test_cbc_plain;
    plVar8 = (long *)(camellia_test_cbc_cipher + (long)iVar7 * 0x30);
    do {
      if ((uVar1 & 1) == 0) {
        local_e8 = *plVar12;
        lStack_e0 = plVar12[1];
        local_d8 = local_f8;
        lStack_d0 = lStack_f0;
        local_f8 = *plVar8;
        lStack_f0 = plVar8[1];
      }
      else {
        local_d8 = local_e8;
        lStack_d0 = lStack_e0;
        local_f8 = *plVar12;
        lStack_f0 = plVar12[1];
        local_e8 = *plVar8;
        lStack_e0 = plVar8[1];
      }
      mbedtls_camellia_crypt_cbc(local_218,uVar1 & 1,0x10,&local_d8,local_270,&local_88);
      if (local_88 != local_e8 || local_80 != lStack_e0) goto LAB_00101004;
      plVar12 = plVar12 + 2;
      plVar8 = plVar8 + 2;
    } while (plVar12 != (long *)&DAT_001019b0);
    local_238 = 0;
    if (param_1 != 0) {
      puts("passed");
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 6);
  if (param_1 != 0) {
    uVar11 = 0;
    putchar(10);
    uVar1 = 0;
    iVar7 = 0;
    goto LAB_001015aa;
  }
  uVar11 = 0;
  iVar7 = 0;
  uVar1 = 0;
  while( true ) {
    while( true ) {
      local_258 = local_b8;
      local_268 = &local_c8;
      local_270 = &local_220;
      lVar9 = (long)iVar7;
      local_220 = 0;
      lVar3 = lVar9 * 0x10;
      local_c8 = *(undefined8 *)(camellia_test_ctr_nonce_counter + lVar3);
      uStack_c0 = *(undefined8 *)(camellia_test_ctr_nonce_counter + lVar3 + 8);
      local_a8 = *(undefined1 (*) [16])(camellia_test_ctr_key + lVar3);
      mbedtls_camellia_setkey_enc(local_218,local_a8,0x80);
      local_278 = camellia_test_ctr_ct + lVar9 * 0x30;
      if (uVar1 == 0) {
        __n = (size_t)(int)(&camellia_test_ctr_len)[lVar9];
        __memcpy_chk(&local_88,local_278,__n,0x40);
        mbedtls_camellia_crypt_ctr(local_218,__n,local_270,local_268,local_258,&local_88,&local_88);
        local_278 = "Single block msg" + lVar9 * 0x30;
      }
      else {
        __n = (size_t)(int)(&camellia_test_ctr_len)[lVar9];
        __memcpy_chk(&local_88,"Single block msg" + lVar9 * 0x30,__n,0x40);
        mbedtls_camellia_crypt_ctr(local_218,__n,local_270,local_268,local_258,&local_88,&local_88);
      }
      iVar7 = memcmp(&local_88,local_278,__n);
      if (iVar7 != 0) goto LAB_00101004;
      if (param_1 != 0) break;
      uVar11 = uVar11 + 1;
      if (uVar11 == 6) goto LAB_0010101a;
      iVar7 = (int)uVar11 >> 1;
      uVar1 = uVar11 & 1;
    }
    uVar11 = uVar11 + 1;
    puts("passed");
    if (uVar11 == 6) break;
    puVar4 = &_LC4;
    iVar7 = (int)uVar11 >> 1;
    uVar1 = uVar11 & 1;
    if ((uVar11 & 1) == 0) {
LAB_001015aa:
      puVar4 = &_LC3;
    }
    __printf_chk(2,"  CAMELLIA-CTR-128 (%s): ",puVar4);
  }
  putchar(10);
LAB_0010101a:
  mbedtls_platform_zeroize(local_218,0x114);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_238;
LAB_00101004:
  if (param_1 != 0) {
    puts("failed");
  }
  local_238 = 1;
  goto LAB_0010101a;
}


