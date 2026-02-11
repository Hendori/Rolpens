
void aes_gen_tables(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  byte local_248 [256];
  byte local_148 [264];
  long local_40;
  
  lVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = 1;
  do {
    local_248[lVar6] = bVar1;
    local_148[bVar1] = (byte)lVar6;
    bVar2 = bVar1 * '\x02';
    if ((char)bVar1 < '\0') {
      bVar2 = bVar1 * '\x02' ^ 0x1b;
    }
    lVar6 = lVar6 + 1;
    bVar1 = bVar1 ^ bVar2;
  } while (lVar6 != 0x100);
  puVar7 = &round_constants;
  bVar1 = 1;
  do {
    *puVar7 = (uint)bVar1;
    bVar2 = bVar1 * '\x02';
    bVar9 = (char)bVar1 < '\0';
    bVar1 = bVar2;
    if (bVar9) {
      bVar1 = bVar2 ^ 0x1b;
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != (uint *)&DAT_00102c48);
  FSb = 99;
  lVar6 = 1;
  DAT_00103cc3 = 0;
  do {
    bVar1 = local_248[(int)(0xff - (uint)local_148[lVar6])];
    bVar2 = bVar1 << 1 | (char)bVar1 < '\0';
    bVar1 = (bVar1 << 4 | bVar1 >> 4) ^ bVar1 ^ bVar2 ^ (bVar2 << 1 | (char)bVar2 < '\0') ^
            (bVar2 << 2 | (byte)(bVar1 << 1) >> 6) ^ 99;
    (&FSb)[lVar6] = bVar1;
    (&RSb)[bVar1] = (char)lVar6;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x100);
  lVar6 = 0;
  do {
    bVar1 = (&FSb)[lVar6];
    uVar4 = (uint)bVar1 + (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar4 = (uint)bVar1 + (uint)bVar1 ^ 0x1b;
    }
    uVar3 = (uint)bVar1 * 0x10100 ^ uVar4 & 0xff;
    uVar5 = (bVar1 ^ uVar4) << 0x18 ^ uVar3;
    (&FT0)[lVar6] = uVar5;
    (&FT1)[lVar6] = uVar3 << 8 | uVar5 >> 0x18;
    (&FT3)[lVar6] = uVar5 >> 8 | (uVar4 & 0xff) << 0x18;
    bVar1 = (&RSb)[lVar6];
    (&FT2)[lVar6] = uVar3 << 0x10 | uVar5 >> 0x10;
    if (bVar1 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      uVar8 = 0;
      uVar3 = 0;
    }
    else {
      bVar1 = local_148[bVar1];
      uVar4 = (uint)local_248[(int)(((uint)local_148[0xe] + (uint)bVar1) % 0xff)] ^
              (uint)local_248[(int)(((uint)local_148[9] + (uint)bVar1) % 0xff)] << 8 ^
              (uint)local_248[(int)(((uint)local_148[0xd] + (uint)bVar1) % 0xff)] << 0x10;
      uVar3 = (uint)local_248[(int)(((uint)local_148[0xb] + (uint)bVar1) % 0xff)] << 0x18 ^ uVar4;
      uVar8 = uVar4 << 8 | (uint)local_248[(int)(((uint)local_148[0xb] + (uint)bVar1) % 0xff)];
      uVar5 = uVar4 << 0x10 | uVar3 >> 0x10;
      uVar4 = uVar3 >> 8 |
              (uint)local_248[(int)(((uint)local_148[0xe] + (uint)bVar1) % 0xff)] << 0x18;
    }
    (&RT0)[lVar6] = uVar3;
    (&RT2)[lVar6] = uVar5;
    (&RT1)[lVar6] = uVar8;
    (&RT3)[lVar6] = uVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x100);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_aes_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x23] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x120U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_aes_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0x120);
    return;
  }
  return;
}



void mbedtls_aes_xts_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x23] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x120U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x24] = 0;
  param_1[0x47] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 0x25) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 0x25) & 0xfffffffffffffff8)) + 0x240U
                      >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_aes_xts_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0x120);
    mbedtls_platform_zeroize(param_1 + 0x120,0x120);
    return;
  }
  return;
}



ulong mbedtls_aes_setkey_enc(int *param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  if (param_3 == 0xc0) {
    iVar3 = 0xc;
  }
  else {
    if (param_3 == 0x100) {
      *param_1 = 0xe;
      goto joined_r0x0010057f;
    }
    iVar3 = 10;
    if (param_3 != 0x80) {
      return 0xffffffe0;
    }
  }
  *param_1 = iVar3;
joined_r0x0010057f:
  if (aes_init_done == 0) {
    aes_gen_tables();
    aes_init_done = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = mbedtls_aesni_has_support(0x2000000);
  if (uVar4 == 0) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)param_1 + lVar5 + 0x10) = *(undefined4 *)(param_2 + lVar5);
      lVar5 = lVar5 + 4;
    } while (lVar5 != (ulong)(param_3 >> 5) << 2);
    iVar3 = *param_1;
    if (iVar3 == 0xc) {
      uVar15 = param_1[8];
      uVar13 = param_1[7];
      uVar7 = param_1[6];
      uVar12 = param_1[5];
      uVar17 = param_1[9];
      uVar16 = param_1[4];
      piVar9 = param_1 + 10;
      puVar10 = &round_constants;
      do {
        puVar11 = puVar10 + 1;
        uVar16 = uVar16 ^ (uint)(byte)(&FSb)[uVar17 >> 8 & 0xff] ^
                          (uint)(byte)(&FSb)[uVar17 >> 0x18] << 0x10 ^
                          (uint)(byte)(&FSb)[uVar17 & 0xff] << 0x18 ^
                          (uint)(byte)(&FSb)[uVar17 >> 0x10 & 0xff] << 8 ^ *puVar10;
        uVar12 = uVar12 ^ uVar16;
        uVar7 = uVar7 ^ uVar12;
        uVar13 = uVar13 ^ uVar7;
        uVar15 = uVar15 ^ uVar13;
        uVar17 = uVar17 ^ uVar15;
        piVar9[4] = uVar15;
        piVar9[5] = uVar17;
        *(ulong *)piVar9 = CONCAT44(uVar12,uVar16);
        *(ulong *)(piVar9 + 2) = CONCAT44(uVar13,uVar7);
        piVar9 = piVar9 + 6;
        puVar10 = puVar11;
      } while (puVar11 != (uint *)&DAT_00102c40);
    }
    else if (iVar3 == 0xe) {
      uVar15 = param_1[10];
      uVar13 = param_1[9];
      uVar7 = param_1[8];
      uVar12 = param_1[7];
      uVar17 = param_1[6];
      uVar16 = param_1[5];
      uVar8 = param_1[0xb];
      uVar14 = param_1[4];
      puVar10 = &round_constants;
      piVar9 = param_1 + 4;
      do {
        puVar11 = puVar10 + 1;
        uVar14 = uVar14 ^ (uint)(byte)(&FSb)[uVar8 >> 8 & 0xff] ^
                          (uint)(byte)(&FSb)[uVar8 >> 0x18] << 0x10 ^
                          (uint)(byte)(&FSb)[uVar8 & 0xff] << 0x18 ^
                          (uint)(byte)(&FSb)[uVar8 >> 0x10 & 0xff] << 8 ^ *puVar10;
        uVar16 = uVar16 ^ uVar14;
        uVar17 = uVar17 ^ uVar16;
        uVar12 = uVar12 ^ uVar17;
        bVar1 = (&FSb)[uVar12 & 0xff];
        bVar2 = (&FSb)[uVar12 >> 0x18];
        *(ulong *)(piVar9 + 8) = CONCAT44(uVar16,uVar14);
        *(ulong *)(piVar9 + 10) = CONCAT44(uVar12,uVar17);
        uVar7 = uVar7 ^ (uint)bVar2 << 0x18 ^ (uint)bVar1 ^
                        (uint)(byte)(&FSb)[uVar12 >> 8 & 0xff] << 8 ^
                        (uint)(byte)(&FSb)[uVar12 >> 0x10 & 0xff] << 0x10;
        uVar13 = uVar13 ^ uVar7;
        uVar15 = uVar15 ^ uVar13;
        uVar8 = uVar8 ^ uVar15;
        *(ulong *)(piVar9 + 0xc) = CONCAT44(uVar13,uVar7);
        *(ulong *)(piVar9 + 0xe) = CONCAT44(uVar8,uVar15);
        puVar10 = puVar11;
        piVar9 = piVar9 + 8;
      } while (puVar11 != (uint *)&DAT_00102c3c);
    }
    else if (iVar3 == 10) {
      uVar15 = param_1[6];
      uVar13 = param_1[5];
      uVar7 = param_1[7];
      uVar12 = param_1[4];
      piVar9 = param_1 + 8;
      puVar10 = &round_constants;
      do {
        puVar11 = puVar10 + 1;
        uVar12 = uVar12 ^ (uint)(byte)(&FSb)[uVar7 >> 8 & 0xff] ^
                          (uint)(byte)(&FSb)[uVar7 >> 0x18] << 0x10 ^
                          (uint)(byte)(&FSb)[uVar7 & 0xff] << 0x18 ^
                          (uint)(byte)(&FSb)[uVar7 >> 0x10 & 0xff] << 8 ^ *puVar10;
        uVar13 = uVar13 ^ uVar12;
        uVar15 = uVar15 ^ uVar13;
        uVar7 = uVar7 ^ uVar15;
        *(ulong *)piVar9 = CONCAT44(uVar13,uVar12);
        *(ulong *)(piVar9 + 2) = CONCAT44(uVar7,uVar15);
        piVar9 = piVar9 + 4;
        puVar10 = puVar11;
      } while (puVar11 != (uint *)&DAT_00102c48);
    }
    return (ulong)uVar4;
  }
  uVar6 = mbedtls_aesni_setkey_enc(param_1 + 4,param_2,param_3);
  return uVar6;
}



int mbedtls_aes_setkey_dec(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long in_FS_OFFSET;
  int local_168 [2];
  long local_160;
  undefined8 auStack_158 [35];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[2] = 0;
  param_1[3] = 0;
  piVar7 = local_168;
  for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
    piVar7[0] = 0;
    piVar7[1] = 0;
    piVar7 = piVar7 + 2;
  }
  iVar3 = mbedtls_aes_setkey_enc(local_168);
  if (iVar3 == 0) {
    *param_1 = local_168[0];
    iVar4 = mbedtls_aesni_has_support(0x2000000);
    if (iVar4 == 0) {
      piVar7 = param_1 + 8;
      local_160 = (local_168[0] << 2) + local_160;
      lVar6 = local_160 * 4;
      uVar2 = *(undefined8 *)((long)auStack_158 + lVar6 + 8);
      piVar10 = local_168 + local_160;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)((long)auStack_158 + lVar6);
      *(undefined8 *)(param_1 + 6) = uVar2;
      if (1 < *param_1) {
        uVar5 = (ulong)(*param_1 - 2);
        piVar8 = piVar7;
        piVar9 = piVar10;
        do {
          lVar6 = 0;
          do {
            uVar1 = *(uint *)((long)piVar9 + lVar6);
            *(undefined4 *)((long)piVar8 + lVar6) =
                 (&RT0)[(byte)(&FSb)[uVar1 & 0xff]] ^ (&RT3)[(byte)(&FSb)[uVar1 >> 0x18]] ^
                 (&RT1)[(byte)(&FSb)[uVar1 >> 8 & 0xff]] ^
                 (&RT2)[(byte)(&FSb)[uVar1 >> 0x10 & 0xff]];
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0x10);
          piVar8 = piVar8 + 4;
          piVar9 = piVar9 + -4;
        } while (param_1 + (uVar5 + 3) * 4 != piVar8);
        uVar5 = ~uVar5;
        piVar10 = piVar10 + uVar5 * 4;
        piVar7 = piVar7 + uVar5 * -4;
      }
      uVar2 = *(undefined8 *)(piVar10 + 2);
      *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
      *(undefined8 *)(piVar7 + 2) = uVar2;
    }
    else {
      mbedtls_aesni_inverse_key(param_1 + 4,(long)auStack_158 + local_160 * 4,*param_1);
    }
  }
  mbedtls_platform_zeroize(local_168,0x120);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_aes_xts_setkey_enc(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffe0;
  if ((param_3 - 0x100 & 0xfffffeff) == 0) {
    uVar1 = mbedtls_aes_setkey_enc(param_1 + 0x120,(ulong)(param_3 >> 4) + param_2,param_3 >> 1);
    if ((int)uVar1 == 0) {
      uVar1 = mbedtls_aes_setkey_enc(param_1,param_2,param_3 >> 1);
      return uVar1;
    }
  }
  return uVar1;
}



undefined8 mbedtls_aes_xts_setkey_dec(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffe0;
  if ((param_3 - 0x100 & 0xfffffeff) == 0) {
    uVar1 = mbedtls_aes_setkey_enc(param_1 + 0x120,(ulong)(param_3 >> 4) + param_2,param_3 >> 1);
    if ((int)uVar1 == 0) {
      uVar1 = mbedtls_aes_setkey_dec(param_1,param_2,param_3 >> 1);
      return uVar1;
    }
  }
  return uVar1;
}



undefined8 mbedtls_internal_aes_encrypt(int *param_1,uint *param_2,undefined1 (*param_3) [16])

{
  uint *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (uint *)(param_1 + *(long *)(param_1 + 2) + 4);
  puVar11 = puVar1 + 4;
  uVar8 = *param_2 ^ *puVar1;
  uVar3 = param_2[1] ^ puVar1[1];
  uVar5 = param_2[2] ^ puVar1[2];
  uVar6 = param_2[3] ^ puVar1[3];
  if (3 < *param_1) {
    puVar9 = puVar11;
    do {
      uVar12 = (&FT0)[uVar8 & 0xff] ^ (&FT3)[uVar6 >> 0x18] ^ *puVar9 ^ (&FT1)[uVar3 >> 8 & 0xff] ^
               (&FT2)[uVar5 >> 0x10 & 0xff];
      uVar4 = (&FT0)[uVar3 & 0xff] ^ (&FT3)[uVar8 >> 0x18] ^ puVar9[1] ^ (&FT1)[uVar5 >> 8 & 0xff] ^
              (&FT2)[uVar6 >> 0x10 & 0xff];
      uVar7 = (&FT0)[uVar6 & 0xff] ^ (&FT3)[uVar5 >> 0x18] ^ puVar9[3] ^ (&FT1)[(byte)(uVar8 >> 8)]
              ^ (&FT2)[uVar3 >> 0x10 & 0xff];
      uVar6 = (&FT0)[uVar5 & 0xff] ^ (&FT3)[uVar3 >> 0x18] ^ puVar9[2] ^ (&FT1)[(byte)(uVar6 >> 8)]
              ^ (&FT2)[uVar8 >> 0x10 & 0xff];
      uVar8 = (&FT0)[uVar12 & 0xff] ^ (&FT3)[uVar7 >> 0x18] ^ puVar9[4] ^ (&FT1)[uVar4 >> 8 & 0xff]
              ^ (&FT2)[uVar6 >> 0x10 & 0xff];
      puVar10 = puVar9 + 8;
      uVar3 = (&FT0)[uVar4 & 0xff] ^ (&FT3)[uVar12 >> 0x18] ^ puVar9[5] ^ (&FT1)[uVar6 >> 8 & 0xff]
              ^ (&FT2)[uVar7 >> 0x10 & 0xff];
      uVar5 = (&FT0)[uVar6 & 0xff] ^ (&FT3)[(int)(uVar4 >> 0x18)] ^ puVar9[6] ^
              (&FT1)[uVar7 >> 8 & 0xff] ^ (&FT2)[uVar12 >> 0x10 & 0xff];
      uVar6 = (&FT0)[uVar7 & 0xff] ^ (&FT3)[uVar6 >> 0x18] ^ puVar9[7] ^ (&FT1)[uVar12 >> 8 & 0xff]
              ^ (&FT2)[uVar4 >> 0x10 & 0xff];
      puVar9 = puVar10;
      puVar11 = puVar1 + (ulong)((*param_1 >> 1) - 2) * 8 + 0xc;
    } while (puVar10 != puVar1 + (ulong)((*param_1 >> 1) - 2) * 8 + 0xc);
  }
  local_58 = (&FT0)[uVar8 & 0xff] ^ (&FT3)[uVar6 >> 0x18] ^ (&FT1)[uVar3 >> 8 & 0xff] ^
             (&FT2)[uVar5 >> 0x10 & 0xff] ^ *puVar11;
  uStack_54 = (&FT0)[uVar3 & 0xff] ^ (&FT3)[uVar8 >> 0x18] ^ (&FT1)[uVar5 >> 8 & 0xff] ^
              (&FT2)[uVar6 >> 0x10 & 0xff] ^ puVar11[1];
  uStack_50 = (&FT0)[uVar5 & 0xff] ^ (&FT3)[uVar3 >> 0x18] ^ (&FT1)[(byte)(uVar6 >> 8)] ^
              (&FT2)[uVar8 >> 0x10 & 0xff] ^ puVar11[2];
  uStack_4c = (&FT0)[uVar6 & 0xff] ^ (&FT3)[uVar5 >> 0x18] ^ (&FT1)[(byte)(uVar8 >> 8)] ^
              (&FT2)[uVar3 >> 0x10 & 0xff] ^ puVar11[3];
  auVar13._0_4_ = (uint)(byte)(&FSb)[uStack_54 >> 8 & 0xff] << 8;
  auVar13._4_4_ = (uint)(byte)(&FSb)[uStack_50 >> 8 & 0xff] << 8;
  auVar13._12_4_ = (uint)(byte)(&FSb)[local_58 >> 8 & 0xff] << 8;
  auVar13._8_4_ = (uint)(byte)(&FSb)[uStack_4c >> 8 & 0xff] << 8;
  auVar15._9_3_ = 0;
  auVar15[8] = (&FSb)[uStack_50 & 0xff];
  auVar14._0_4_ = (uint)(byte)(&FSb)[uStack_50 >> 0x10 & 0xff] << 0x10;
  auVar14._4_4_ = (uint)(byte)(&FSb)[uStack_4c >> 0x10 & 0xff] << 0x10;
  auVar14._8_4_ = (uint)(byte)(&FSb)[local_58 >> 0x10 & 0xff] << 0x10;
  auVar14._12_4_ = (uint)(byte)(&FSb)[uStack_54 >> 0x10 & 0xff] << 0x10;
  auVar15[0xc] = (&FSb)[uStack_4c & 0xff];
  auVar15._1_3_ = 0;
  auVar15[0] = (&FSb)[local_58 & 0xff];
  auVar15[4] = (&FSb)[uStack_54 & 0xff];
  auVar15._5_3_ = 0;
  auVar15._13_3_ = 0;
  auVar2._1_4_ = (uint)(byte)(&FSb)[(int)(local_58 >> 0x18)] << 0x18;
  auVar2[0] = (&FSb)[uStack_4c >> 0x18];
  auVar2._5_4_ = (uint)(byte)(&FSb)[uStack_54 >> 0x18] << 0x18;
  auVar2._9_4_ = (uint)(byte)(&FSb)[uStack_50 >> 0x18] << 0x18;
  auVar2._13_3_ = 0;
  local_68 = auVar13 ^ auVar14 ^ auVar15 ^ *(undefined1 (*) [16])(puVar11 + 4) ^ auVar2 << 0x18;
  *param_3 = local_68;
  mbedtls_platform_zeroize(local_68,0x20);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



undefined8 mbedtls_internal_aes_decrypt(int *param_1,uint *param_2,undefined1 (*param_3) [16])

{
  uint *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (uint *)(param_1 + *(long *)(param_1 + 2) + 4);
  puVar11 = puVar1 + 4;
  uVar3 = *param_2 ^ *puVar1;
  uVar5 = param_2[1] ^ puVar1[1];
  uVar8 = param_2[2] ^ puVar1[2];
  uVar12 = param_2[3] ^ puVar1[3];
  if (3 < *param_1) {
    puVar9 = puVar11;
    do {
      uVar6 = (&RT0)[uVar3 & 0xff] ^ (&RT3)[uVar5 >> 0x18] ^ *puVar9 ^ (&RT1)[(byte)(uVar12 >> 8)] ^
              (&RT2)[uVar8 >> 0x10 & 0xff];
      uVar4 = (&RT0)[uVar5 & 0xff] ^ (&RT3)[uVar8 >> 0x18] ^ puVar9[1] ^ (&RT1)[uVar3 >> 8 & 0xff] ^
              (&RT2)[uVar12 >> 0x10 & 0xff];
      uVar7 = (&RT0)[uVar12 & 0xff] ^ (&RT3)[uVar3 >> 0x18] ^ puVar9[3] ^ (&RT1)[(byte)(uVar8 >> 8)]
              ^ (&RT2)[uVar5 >> 0x10 & 0xff];
      uVar12 = (&RT0)[uVar8 & 0xff] ^ (&RT3)[uVar12 >> 0x18] ^ puVar9[2] ^ (&RT1)[uVar5 >> 8 & 0xff]
               ^ (&RT2)[uVar3 >> 0x10 & 0xff];
      uVar3 = (&RT0)[uVar6 & 0xff] ^ (&RT3)[uVar4 >> 0x18] ^ puVar9[4] ^ (&RT1)[uVar7 >> 8 & 0xff] ^
              (&RT2)[uVar12 >> 0x10 & 0xff];
      puVar10 = puVar9 + 8;
      uVar5 = (&RT0)[uVar4 & 0xff] ^ (&RT3)[uVar12 >> 0x18] ^ puVar9[5] ^ (&RT1)[uVar6 >> 8 & 0xff]
              ^ (&RT2)[uVar7 >> 0x10 & 0xff];
      uVar8 = (&RT0)[uVar12 & 0xff] ^ (&RT3)[uVar7 >> 0x18] ^ puVar9[6] ^ (&RT1)[uVar4 >> 8 & 0xff]
              ^ (&RT2)[uVar6 >> 0x10 & 0xff];
      uVar12 = (&RT0)[uVar7 & 0xff] ^ (&RT3)[uVar6 >> 0x18] ^ puVar9[7] ^ (&RT1)[uVar12 >> 8 & 0xff]
               ^ (&RT2)[uVar4 >> 0x10 & 0xff];
      puVar9 = puVar10;
      puVar11 = puVar1 + (ulong)((*param_1 >> 1) - 2) * 8 + 0xc;
    } while (puVar10 != puVar1 + (ulong)((*param_1 >> 1) - 2) * 8 + 0xc);
  }
  local_58 = (&RT0)[uVar3 & 0xff] ^ (&RT3)[uVar5 >> 0x18] ^ (&RT1)[(byte)(uVar12 >> 8)] ^
             (&RT2)[uVar8 >> 0x10 & 0xff] ^ *puVar11;
  uStack_54 = (&RT0)[uVar5 & 0xff] ^ (&RT3)[uVar8 >> 0x18] ^ (&RT1)[uVar3 >> 8 & 0xff] ^
              (&RT2)[uVar12 >> 0x10 & 0xff] ^ puVar11[1];
  uStack_50 = (&RT0)[uVar8 & 0xff] ^ (&RT3)[uVar12 >> 0x18] ^ (&RT1)[uVar5 >> 8 & 0xff] ^
              (&RT2)[uVar3 >> 0x10 & 0xff] ^ puVar11[2];
  uStack_4c = (&RT0)[uVar12 & 0xff] ^ (&RT3)[uVar3 >> 0x18] ^ (&RT1)[(byte)(uVar8 >> 8)] ^
              (&RT2)[uVar5 >> 0x10 & 0xff] ^ puVar11[3];
  auVar13._0_4_ = (uint)(byte)(&RSb)[uStack_4c >> 8 & 0xff] << 8;
  auVar13._4_4_ = (uint)(byte)(&RSb)[local_58 >> 8 & 0xff] << 8;
  auVar13._12_4_ = (uint)(byte)(&RSb)[uStack_50 >> 8 & 0xff] << 8;
  auVar13._8_4_ = (uint)(byte)(&RSb)[uStack_54 >> 8 & 0xff] << 8;
  auVar15._9_3_ = 0;
  auVar15[8] = (&RSb)[uStack_50 & 0xff];
  auVar14._0_4_ = (uint)(byte)(&RSb)[uStack_50 >> 0x10 & 0xff] << 0x10;
  auVar14._4_4_ = (uint)(byte)(&RSb)[uStack_4c >> 0x10 & 0xff] << 0x10;
  auVar14._8_4_ = (uint)(byte)(&RSb)[local_58 >> 0x10 & 0xff] << 0x10;
  auVar14._12_4_ = (uint)(byte)(&RSb)[uStack_54 >> 0x10 & 0xff] << 0x10;
  auVar15[0xc] = (&RSb)[uStack_4c & 0xff];
  auVar15._1_3_ = 0;
  auVar15[0] = (&RSb)[local_58 & 0xff];
  auVar15[4] = (&RSb)[uStack_54 & 0xff];
  auVar15._5_3_ = 0;
  auVar15._13_3_ = 0;
  auVar2._1_4_ = (uint)(byte)(&RSb)[uStack_50 >> 0x18] << 0x18;
  auVar2[0] = (&RSb)[uStack_54 >> 0x18];
  auVar2._5_4_ = (uint)(byte)(&RSb)[uStack_4c >> 0x18] << 0x18;
  auVar2._9_4_ = (uint)(byte)(&RSb)[(int)(local_58 >> 0x18)] << 0x18;
  auVar2._13_3_ = 0;
  local_68 = auVar13 ^ auVar14 ^ auVar15 ^ *(undefined1 (*) [16])(puVar11 + 4) ^ auVar2 << 0x18;
  *param_3 = local_68;
  mbedtls_platform_zeroize(local_68,0x20);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



undefined8
mbedtls_aes_crypt_ecb(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (1 < param_2) {
    return 0xffffffdf;
  }
  iVar1 = mbedtls_aesni_has_support(0x2000000);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar2 = mbedtls_internal_aes_decrypt();
      return uVar2;
    }
    uVar2 = mbedtls_internal_aes_encrypt(param_1,param_3,param_4);
    return uVar2;
  }
  uVar2 = mbedtls_aesni_crypt_ecb(param_1,param_2,param_3,param_4);
  return uVar2;
}



undefined8
mbedtls_aes_crypt_cbc
          (undefined8 param_1,uint param_2,ulong param_3,ulong *param_4,ulong *param_5,
          ulong *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (1 < param_2) {
    return 0xffffffdf;
  }
  if (param_3 != 0) {
    if ((param_3 & 0xf) != 0) {
      return 0xffffffde;
    }
    if (param_2 != 0) {
      puVar6 = param_4;
      puVar3 = param_6;
      while( true ) {
        puVar7 = puVar3;
        *puVar7 = *param_5 ^ *puVar6;
        puVar7[1] = param_5[1] ^ puVar6[1];
        iVar4 = mbedtls_aesni_has_support(0x2000000);
        if (iVar4 == 0) {
          uVar5 = mbedtls_internal_aes_encrypt(param_1,puVar7,puVar7);
        }
        else {
          uVar5 = mbedtls_aesni_crypt_ecb(param_1,1,puVar7,puVar7);
        }
        if ((int)uVar5 != 0) break;
        param_5 = param_5 + 2;
        puVar6 = puVar7;
        puVar3 = puVar7 + 2;
        if (puVar7 + 2 == (ulong *)(param_3 + (long)param_6)) {
          uVar1 = puVar7[1];
          *param_4 = *puVar7;
          param_4[1] = uVar1;
          return 0;
        }
      }
      return uVar5;
    }
    do {
      uVar1 = *param_5;
      uVar2 = param_5[1];
      iVar4 = mbedtls_aesni_has_support(0x2000000);
      if (iVar4 == 0) {
        uVar5 = mbedtls_internal_aes_decrypt(param_1,param_5,param_6);
      }
      else {
        uVar5 = mbedtls_aesni_crypt_ecb(param_1,0,param_5,param_6);
      }
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      param_5 = param_5 + 2;
      *param_6 = *param_6 ^ *param_4;
      param_6[1] = param_6[1] ^ param_4[1];
      param_6 = param_6 + 2;
      *param_4 = uVar1;
      param_4[1] = uVar2;
      param_3 = param_3 - 0x10;
    } while (param_3 != 0);
  }
  return 0;
}



int mbedtls_aes_crypt_xts
              (long param_1,uint param_2,ulong param_3,undefined8 param_4,ulong *param_5,
              ulong *param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  ulong uVar6;
  ulong *local_88;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < param_2) {
    iVar1 = -0x21;
    goto LAB_001016fe;
  }
  if (0xfffff0 < param_3 - 0x10) {
    iVar1 = -0x22;
    goto LAB_001016fe;
  }
  iVar1 = mbedtls_aesni_has_support(0x2000000);
  if (iVar1 == 0) {
    iVar1 = mbedtls_internal_aes_encrypt(param_1 + 0x120,param_4);
  }
  else {
    iVar1 = mbedtls_aesni_crypt_ecb(param_1 + 0x120,1,param_4);
  }
  local_88 = &local_78;
  if (iVar1 != 0) goto LAB_001016fe;
  uVar4 = param_3 >> 4;
  uVar3 = (ulong)((uint)param_3 & 0xf);
  do {
    puVar5 = param_6;
    uVar4 = uVar4 - 1;
    if ((uVar4 == 0) && (((param_3 & 0xf) != 0 & ((byte)param_2 ^ 1)) != 0)) {
      local_68 = local_78;
      uStack_60 = uStack_70;
      uVar2 = local_78 >> 0x3f;
      local_78 = (long)(0x87 >> ((char)((long)uStack_70 >> 0x3f) * '\b' + 8U & 0x1f)) ^ local_78 * 2
      ;
      uStack_70 = uStack_70 << 1 | uVar2;
    }
    local_58[0] = local_78 ^ *param_5;
    local_58[1] = uStack_70 ^ param_5[1];
    iVar1 = mbedtls_aes_crypt_ecb(param_1,param_2,local_58,local_58);
    uVar2 = uStack_70;
    if (iVar1 != 0) goto LAB_001016fe;
    uVar6 = uStack_70 ^ local_58[1];
    param_5 = param_5 + 2;
    uStack_70 = uStack_70 << 1 | local_78 >> 0x3f;
    *puVar5 = local_78 ^ local_58[0];
    puVar5[1] = uVar6;
    local_78 = (long)(0x87 >> ((char)((long)uVar2 >> 0x3f) * '\b' + 8U & 0x1f)) ^ local_78 * 2;
    param_6 = puVar5 + 2;
  } while (uVar4 != 0);
  if (uVar3 == 0) goto LAB_001016fe;
  if (param_2 == 0) {
    local_88 = &local_68;
  }
  uVar4 = 0;
  do {
    *(undefined1 *)((long)(puVar5 + 2) + uVar4) = *(undefined1 *)((long)puVar5 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar3 != uVar4);
  uVar4 = (ulong)((uint)param_3 & 8);
  if ((param_3 & 8) == 0) {
LAB_00101786:
    do {
      *(byte *)((long)local_58 + uVar4) =
           *(byte *)((long)param_5 + uVar4) ^ *(byte *)((long)local_88 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    uVar2 = 0x10 - uVar3;
    uVar4 = 0;
    if (7 < uVar2) goto LAB_001017b6;
LAB_001017cb:
    do {
      *(byte *)((long)local_58 + uVar4 + uVar3) =
           *(byte *)((long)puVar5 + uVar4 + uVar3) ^ *(byte *)((long)local_88 + uVar4 + uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  else {
    uVar4 = 8;
    local_58[0] = *param_5 ^ *local_88;
    if (8 < uVar3) goto LAB_00101786;
    uVar2 = 0x10 - uVar3;
LAB_001017b6:
    uVar4 = 8;
    *(ulong *)(uVar3 + (long)local_58) =
         *(ulong *)((long)puVar5 + uVar3) ^ *(ulong *)((long)local_88 + uVar3);
    if (uVar2 != 8) goto LAB_001017cb;
  }
  iVar1 = mbedtls_aes_crypt_ecb(param_1,param_2,local_58,local_58);
  if (iVar1 == 0) {
    *puVar5 = local_58[0] ^ *local_88;
    puVar5[1] = local_88[1] ^ local_58[1];
  }
LAB_001016fe:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8
mbedtls_aes_crypt_cfb128
          (undefined8 param_1,uint param_2,long param_3,ulong *param_4,long param_5,byte *param_6,
          byte *param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((1 < param_2) || (uVar5 = *param_4, 0xf < uVar5)) {
    return 0xffffffdf;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      pbVar7 = param_6 + param_3;
      do {
        if (uVar5 == 0) {
          iVar3 = mbedtls_aesni_has_support(0x2000000);
          if (iVar3 == 0) {
            uVar4 = mbedtls_internal_aes_encrypt(param_1,param_5,param_5);
          }
          else {
            uVar4 = mbedtls_aesni_crypt_ecb(param_1,1,param_5,param_5);
          }
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
        pbVar1 = (byte *)(param_5 + uVar5);
        bVar2 = *param_6;
        param_6 = param_6 + 1;
        uVar5 = (ulong)((int)uVar5 + 1U & 0xf);
        *param_7 = *pbVar1 ^ bVar2;
        *pbVar1 = bVar2;
        param_7 = param_7 + 1;
      } while (pbVar7 != param_6);
    }
  }
  else {
    pbVar7 = param_6;
    if (param_3 != 0) {
      do {
        if (uVar5 == 0) {
          iVar3 = mbedtls_aesni_has_support(0x2000000);
          if (iVar3 == 0) {
            uVar4 = mbedtls_internal_aes_encrypt(param_1,param_5,param_5);
          }
          else {
            uVar4 = mbedtls_aesni_crypt_ecb(param_1,1,param_5,param_5);
          }
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
        pbVar1 = (byte *)(param_5 + uVar5);
        pbVar6 = pbVar7 + 1;
        bVar2 = *pbVar1 ^ *pbVar7;
        uVar5 = (ulong)((int)uVar5 + 1U & 0xf);
        *param_7 = bVar2;
        *pbVar1 = bVar2;
        pbVar7 = pbVar6;
        param_7 = param_7 + 1;
      } while (pbVar6 != param_6 + param_3);
    }
  }
  *param_4 = uVar5;
  return 0;
}



undefined8
mbedtls_aes_crypt_cfb8
          (undefined8 param_1,uint param_2,long param_3,byte *param_4,byte *param_5,byte *param_6)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  undefined7 uStack_57;
  undefined1 local_50;
  undefined7 uStack_4f;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    if (param_3 != 0) {
      uVar4 = *(undefined8 *)param_4;
      uVar6 = *(undefined8 *)(param_4 + 8);
      pbVar7 = param_5 + param_3;
      do {
        uStack_57 = (undefined7)((ulong)uVar4 >> 8);
        local_50 = (undefined1)uVar6;
        uStack_4f = (undefined7)((ulong)uVar6 >> 8);
        iVar3 = mbedtls_aesni_has_support(0x2000000);
        if (iVar3 == 0) {
          uVar4 = mbedtls_internal_aes_encrypt(param_1,param_4,param_4);
          iVar3 = (int)uVar4;
        }
        else {
          uVar4 = mbedtls_aesni_crypt_ecb(param_1,1,param_4,param_4);
          iVar3 = (int)uVar4;
        }
        if (iVar3 != 0) goto LAB_00101b10;
        bVar2 = *param_5;
        param_5 = param_5 + 1;
        bVar5 = *param_4 ^ bVar2;
        if (param_2 != 0) {
          bVar2 = bVar5;
        }
        *param_6 = bVar5;
        uVar4 = CONCAT17(local_50,uStack_57);
        uVar6 = CONCAT17(bVar2,uStack_4f);
        *(undefined8 *)param_4 = uVar4;
        *(undefined8 *)(param_4 + 8) = uVar6;
        param_6 = param_6 + 1;
      } while (param_5 != pbVar7);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffdf;
  }
LAB_00101b10:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8
mbedtls_aes_crypt_ofb
          (undefined8 param_1,long param_2,ulong *param_3,long param_4,byte *param_5,byte *param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar4 = *param_3;
  if (0xf < uVar4) {
    return 0xffffffdf;
  }
  if (param_2 != 0) {
    pbVar6 = param_6;
    do {
      if (uVar4 == 0) {
        iVar2 = mbedtls_aesni_has_support(0x2000000);
        if (iVar2 == 0) {
          uVar3 = mbedtls_internal_aes_encrypt(param_1,param_4,param_4);
        }
        else {
          uVar3 = mbedtls_aesni_crypt_ecb(param_1,1,param_4,param_4);
        }
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      pbVar1 = (byte *)(param_4 + uVar4);
      pbVar5 = pbVar6 + 1;
      uVar4 = (ulong)((int)uVar4 + 1U & 0xf);
      *pbVar6 = *pbVar1 ^ *param_5;
      pbVar6 = pbVar5;
      param_5 = param_5 + 1;
    } while (param_6 + param_2 != pbVar5);
  }
  *param_3 = uVar4;
  return 0;
}



undefined8
mbedtls_aes_crypt_ctr
          (undefined8 param_1,ulong param_2,ulong *param_3,long param_4,ulong *param_5,
          ulong *param_6,ulong *param_7)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar8 = *param_3;
  if (uVar8 < 0x10) {
    if (param_2 != 0) {
      if (uVar8 == 0) goto LAB_00101cd0;
      puVar11 = (ulong *)((long)param_5 + uVar8);
      uVar10 = 0x10 - uVar8;
      if (param_2 < 0x10 - uVar8) {
        uVar10 = param_2;
      }
      puVar5 = param_6;
      puVar9 = param_7;
      if (uVar10 < 8) {
        uVar8 = 0;
        uVar3 = 0;
        goto LAB_00101cb0;
      }
      *param_7 = *param_6 ^ *puVar11;
      uVar6 = 8;
      uVar8 = 0;
      do {
        uVar3 = 8;
        if (uVar10 <= uVar6) goto LAB_00101cc4;
LAB_00101cb0:
        do {
          *(byte *)((long)puVar9 + uVar3) =
               *(byte *)((long)puVar5 + uVar3) ^ *(byte *)((long)puVar11 + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar10);
LAB_00101cc4:
        uVar8 = uVar8 + uVar10;
        if (param_2 <= uVar8) {
          uVar8 = *param_3;
          break;
        }
LAB_00101cd0:
        iVar1 = mbedtls_aesni_has_support(0x2000000);
        if (iVar1 == 0) {
          uVar4 = mbedtls_internal_aes_encrypt(param_1,param_4,param_5);
        }
        else {
          uVar4 = mbedtls_aesni_crypt_ecb(param_1,1,param_4,param_5);
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar2 = *(uint *)(param_4 + 0xc);
        iVar1 = 3;
        uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
                1;
        *(uint *)(param_4 + 0xc) =
             uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
        if (uVar2 == 0) {
          do {
            iVar1 = iVar1 + -1;
            puVar7 = (uint *)(iVar1 * 4 + param_4);
            uVar2 = *puVar7;
            uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    ) + 1;
            *puVar7 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 * 0x1000000;
            if (uVar2 != 0) break;
          } while (iVar1 != 0);
        }
        puVar5 = (ulong *)((long)param_6 + uVar8);
        uVar3 = param_2 - uVar8;
        puVar9 = (ulong *)((long)param_7 + uVar8);
        uVar10 = 0x10;
        if (uVar3 < 0x11) {
          uVar10 = uVar3;
        }
        puVar11 = param_5;
        if (uVar3 < 8) {
          uVar3 = 0;
          goto LAB_00101cb0;
        }
        *puVar9 = *puVar5 ^ *param_5;
        if (uVar3 < 0x10) {
          uVar6 = 8;
        }
        else {
          uVar6 = 0x10;
          puVar9[1] = param_5[1] ^ puVar5[1];
          uVar10 = 0x10;
        }
      } while( true );
    }
    *param_3 = (ulong)((int)uVar8 + (int)param_2 & 0xf);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffdf;
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int mbedtls_aes_self_test(int param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  int iVar12;
  size_t __n;
  uint uVar13;
  long *plVar14;
  long lVar15;
  char *__s2;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  byte bVar19;
  undefined1 *local_488;
  ulong local_450;
  undefined8 local_448 [36];
  undefined8 local_328 [36];
  undefined8 local_208 [36];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  byte local_48 [8];
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  puVar11 = local_448;
  for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  if (param_1 != 0) {
    puts("  AES note: AESNI code present (assembly implementation).");
    iVar12 = mbedtls_aesni_has_support(0x2000000);
    if (iVar12 == 0) {
      puts("  AES note: built-in implementation.");
    }
    else {
      puts("  AES note: using AESNI.");
    }
  }
  uVar17 = 0;
  do {
    iVar16 = (int)uVar17 >> 1;
    uVar13 = uVar17 & 1;
    iVar12 = (iVar16 + 2) * 0x40;
    if (param_1 != 0) {
      puVar7 = &_LC1;
      if (uVar13 == 0) {
        puVar7 = &_LC0;
      }
      __printf_chk(2,"  AES-ECB-%3u (%s): ",iVar12,puVar7);
    }
    local_88 = (undefined1  [16])0x0;
    if (uVar13 == 0) {
      iVar4 = mbedtls_aes_setkey_dec();
      plVar14 = &aes_test_ecb_dec + (long)iVar16 * 2;
    }
    else {
      iVar4 = mbedtls_aes_setkey_enc(local_448,local_a8,iVar12);
      plVar14 = (long *)(aes_test_ecb_enc + (long)iVar16 * 0x10);
    }
    if ((iVar4 == -0x72) && (iVar12 == 0xc0)) {
      puts("skipped");
    }
    else {
      if (iVar4 != 0) goto LAB_001023ba;
      iVar12 = 10000;
      do {
        iVar4 = mbedtls_aes_crypt_ecb(local_448,uVar13,local_88,local_88);
        if (iVar4 != 0) goto LAB_001023ba;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (local_88._0_8_ != *plVar14 || local_88._8_8_ != plVar14[1]) goto LAB_00102560;
      if (param_1 != 0) {
        puts("passed");
      }
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 6);
  if (param_1 != 0) {
    putchar(10);
  }
  uVar17 = 0;
  do {
    iVar12 = (((int)uVar17 >> 1) + 2) * 0x40;
    if (param_1 != 0) {
      puVar7 = &_LC1;
      if ((uVar17 & 1) == 0) {
        puVar7 = &_LC0;
      }
      __printf_chk(2,"  AES-CBC-%3u (%s): ",iVar12,puVar7);
    }
    local_e8 = (undefined1  [16])0x0;
    lVar6 = (long)((int)uVar17 >> 1) * 0x10;
    uStack_d0 = 0;
    local_d8 = 0;
    local_88 = (undefined1  [16])0x0;
    if ((uVar17 & 1) == 0) {
      iVar4 = mbedtls_aes_setkey_dec(local_448,local_a8,iVar12);
      plVar14 = (long *)(aes_test_cbc_dec + lVar6);
      if (iVar4 == -0x72) goto LAB_00101fda;
LAB_001024ba:
      if (iVar4 != 0) goto LAB_001023ba;
      iVar12 = 10000;
      do {
        if ((uVar17 & 1) != 0) {
          uVar2 = local_88._0_8_;
          uVar3 = local_88._8_8_;
          local_88._8_8_ = uStack_d0;
          local_88._0_8_ = local_d8;
          local_d8 = uVar2;
          uStack_d0 = uVar3;
        }
        iVar4 = mbedtls_aes_crypt_cbc(local_448,uVar17 & 1,0x10,local_e8,local_88,local_88);
        if (iVar4 != 0) goto LAB_001023ba;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (local_88._0_8_ != *plVar14 || local_88._8_8_ != plVar14[1]) goto LAB_00102560;
      if (param_1 != 0) {
        puts("passed");
      }
    }
    else {
      iVar4 = mbedtls_aes_setkey_enc();
      plVar14 = (long *)(aes_test_cbc_enc + lVar6);
      if (iVar4 != -0x72) goto LAB_001024ba;
LAB_00101fda:
      if (iVar12 != 0xc0) goto LAB_001024ba;
      puts("skipped");
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 6);
  if (param_1 != 0) {
    putchar(10);
  }
  uVar17 = 0;
  do {
    uVar18 = uVar17 & 1;
    uVar13 = (((int)uVar17 >> 1) + 2) * 0x40;
    if (param_1 != 0) {
      puVar7 = &_LC1;
      if (uVar18 == 0) {
        puVar7 = &_LC0;
      }
      __printf_chk(2,"  AES-CFB128-%3u (%s): ",uVar13,puVar7);
    }
    lVar6 = (long)((int)uVar17 >> 1);
    local_e8._8_8_ = _UNK_00105678;
    local_e8._0_8_ = __LC14;
    uVar5 = 0;
    do {
      uVar8 = (ulong)uVar5;
      uVar5 = uVar5 + 8;
      *(undefined8 *)(local_a8 + uVar8) =
           *(undefined8 *)((long)&aes_test_cfb128_key + uVar8 + lVar6 * 0x20);
    } while (uVar5 < uVar13 >> 3);
    local_450 = 0;
    iVar4 = mbedtls_aes_setkey_enc(local_448,local_a8,uVar13);
    if ((iVar4 == -0x72) && (uVar13 == 0xc0)) {
      puts("skipped");
    }
    else {
      if (iVar4 != 0) goto LAB_001023ba;
      if (uVar18 == 0) {
        lVar6 = lVar6 * 0x40;
        plVar14 = &aes_test_cfb128_pt;
        local_88 = *(undefined1 (*) [16])(aes_test_cfb128_ct + lVar6);
        local_78 = *(long *)(aes_test_cfb128_ct + lVar6 + 0x10);
        lStack_70 = *(long *)(aes_test_cfb128_ct + lVar6 + 0x18);
        local_58 = *(long *)(aes_test_cfb128_ct + lVar6 + 0x30);
        lStack_50 = *(long *)(aes_test_cfb128_ct + lVar6 + 0x38);
        local_68 = *(long *)(aes_test_cfb128_ct + lVar6 + 0x20);
        lStack_60 = *(long *)(aes_test_cfb128_ct + lVar6 + 0x28);
      }
      else {
        plVar14 = (long *)(aes_test_cfb128_ct + lVar6 * 0x40);
        local_68 = __LC17;
        lStack_60 = _UNK_001056a8;
        local_88._8_8_ = _UNK_00105688;
        local_88._0_8_ = __LC15;
        local_78 = __LC16;
        lStack_70 = _UNK_00105698;
        local_58 = __LC18;
        lStack_50 = _UNK_001056b8;
      }
      iVar4 = mbedtls_aes_crypt_cfb128(local_448,uVar18,0x40,&local_450,local_e8,local_88,local_88);
      if (iVar4 != 0) goto LAB_001023ba;
      if ((((local_88._0_8_ != *plVar14 || local_88._8_8_ != plVar14[1]) ||
           (local_78 != plVar14[2] || lStack_70 != plVar14[3])) ||
          (local_68 != plVar14[4] || lStack_60 != plVar14[5])) ||
         (local_58 != plVar14[6] || lStack_50 != plVar14[7])) goto LAB_00102560;
      if (param_1 != 0) {
        puts("passed");
      }
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 6);
  if (param_1 != 0) {
    putchar(10);
  }
  uVar17 = 0;
  do {
    uVar13 = (((int)uVar17 >> 1) + 2) * 0x40;
    if (param_1 != 0) {
      puVar7 = &_LC1;
      if ((uVar17 & 1) == 0) {
        puVar7 = &_LC0;
      }
      __printf_chk(2,"  AES-OFB-%3u (%s): ",uVar13,puVar7);
    }
    lVar6 = (long)((int)uVar17 >> 1);
    local_e8._8_8_ = _UNK_00105678;
    local_e8._0_8_ = __LC14;
    uVar18 = 0;
    do {
      uVar5 = uVar18 + 8;
      *(undefined8 *)(local_a8 + uVar18) =
           *(undefined8 *)(aes_test_ofb_key + (ulong)uVar18 + lVar6 * 0x20);
      uVar18 = uVar5;
    } while (uVar5 < uVar13 >> 3);
    local_450 = 0;
    iVar4 = mbedtls_aes_setkey_enc(local_448,local_a8,uVar13);
    if ((iVar4 == -0x72) && (uVar13 == 0xc0)) {
      puts("skipped");
    }
    else {
      if (iVar4 != 0) goto LAB_001023ba;
      if ((uVar17 & 1) == 0) {
        lVar6 = lVar6 * 0x40;
        local_88 = *(undefined1 (*) [16])(aes_test_ofb_ct + lVar6);
        plVar14 = &aes_test_ofb_pt;
        local_78 = *(long *)(aes_test_ofb_ct + lVar6 + 0x10);
        lStack_70 = *(long *)(aes_test_ofb_ct + lVar6 + 0x18);
        local_68 = *(long *)(aes_test_ofb_ct + lVar6 + 0x20);
        lStack_60 = *(long *)(aes_test_ofb_ct + lVar6 + 0x28);
        local_58 = *(long *)(aes_test_ofb_ct + lVar6 + 0x30);
        lStack_50 = *(long *)(aes_test_ofb_ct + lVar6 + 0x38);
      }
      else {
        local_88._8_8_ = _UNK_00105688;
        local_88._0_8_ = __LC15;
        plVar14 = (long *)(aes_test_ofb_ct + lVar6 * 0x40);
        local_78 = __LC16;
        lStack_70 = _UNK_00105698;
        local_68 = __LC17;
        lStack_60 = _UNK_001056a8;
        local_58 = __LC18;
        lStack_50 = _UNK_001056b8;
      }
      uVar8 = 0;
      pbVar10 = local_88;
      do {
        if (uVar8 == 0) {
          iVar12 = mbedtls_aesni_has_support(0x2000000);
          if (iVar12 == 0) {
            iVar4 = mbedtls_internal_aes_encrypt(local_448,local_e8,local_e8);
          }
          else {
            iVar4 = mbedtls_aesni_crypt_ecb(local_448,1,local_e8,local_e8);
          }
          if (iVar4 != 0) goto LAB_001023ba;
        }
        pbVar9 = pbVar10 + 1;
        *pbVar10 = *pbVar10 ^ local_e8[uVar8];
        uVar8 = (ulong)((int)uVar8 + 1U & 0xf);
        pbVar10 = pbVar9;
      } while (pbVar9 != local_48);
      local_450 = uVar8;
      if (((local_88._0_8_ != *plVar14 || local_88._8_8_ != plVar14[1]) ||
          (local_78 != plVar14[2] || lStack_70 != plVar14[3])) ||
         ((local_68 != plVar14[4] || lStack_60 != plVar14[5] ||
          (local_58 != plVar14[6] || lStack_50 != plVar14[7])))) break;
      if (param_1 != 0) {
        puts("passed");
      }
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == 6) {
      if (param_1 != 0) {
        uVar13 = 0;
        iVar12 = 0;
        putchar(10);
        uVar17 = 0;
        goto LAB_00102886;
      }
      uVar13 = 0;
      iVar12 = 0;
      uVar17 = 0;
      while( true ) {
        while( true ) {
          lVar15 = (long)iVar12;
          local_450 = 0;
          lVar6 = lVar15 * 0x10;
          local_c8 = *(undefined8 *)(aes_test_ctr_nonce_counter + lVar6);
          uStack_c0 = *(undefined8 *)(aes_test_ctr_nonce_counter + lVar6 + 8);
          local_a8 = *(undefined1 (*) [16])(aes_test_ctr_key + lVar6);
          iVar4 = mbedtls_aes_setkey_enc(local_448,local_a8,0x80);
          if (iVar4 != 0) goto LAB_001023ba;
          __n = (size_t)(int)(&aes_test_ctr_len)[lVar15];
          __s2 = aes_test_ctr_ct + lVar15 * 0x30;
          if (uVar17 == 0) {
            __memcpy_chk(local_88,__s2,__n,0x40);
            __s2 = "Single block msg" + lVar15 * 0x30;
          }
          else {
            __memcpy_chk(local_88,"Single block msg" + lVar15 * 0x30,__n,0x40);
          }
          iVar4 = mbedtls_aes_crypt_ctr
                            (local_448,__n,&local_450,&local_c8,local_b8,local_88,local_88);
          if (iVar4 != 0) goto LAB_001023ba;
          iVar12 = memcmp(local_88,__s2,__n);
          if (iVar12 != 0) goto LAB_00102560;
          if (param_1 != 0) break;
          uVar13 = uVar13 + 1;
          if (uVar13 == 6) goto LAB_001028f7;
          iVar12 = (int)uVar13 >> 1;
          uVar17 = uVar13 & 1;
        }
        uVar13 = uVar13 + 1;
        puts("passed");
        if (uVar13 == 6) break;
        puVar7 = &_LC1;
        iVar12 = (int)uVar13 >> 1;
        uVar17 = uVar13 & 1;
        if ((uVar13 & 1) == 0) {
LAB_00102886:
          puVar7 = &_LC0;
        }
        __printf_chk(2,"  AES-CTR-128 (%s): ",puVar7);
      }
      putchar(10);
LAB_001028f7:
      uVar17 = 0;
      uVar13 = 0;
      puVar11 = local_328;
      for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar19 * -2 + 1;
      }
      puVar11 = local_208;
      for (lVar6 = 0x24; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar19 * -2 + 1;
      }
      if (param_1 == 0) {
        iVar12 = 0;
        goto LAB_0010297a;
      }
      iVar12 = 0;
      do {
        puVar7 = &_LC0;
        do {
          __printf_chk(2,"  AES-XTS-128 (%s): ",puVar7);
LAB_0010297a:
          while( true ) {
            local_488 = local_98;
            lVar6 = (long)iVar12 * 0x20;
            local_a8 = *(undefined1 (*) [16])
                        ("DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" +
                        lVar6 + 0x40);
            local_98 = *(undefined1 (*) [16])(&DAT_00105090 + lVar6);
            if (uVar13 == 0) {
              iVar4 = mbedtls_aes_setkey_enc(local_208,local_488,0x80);
              if ((iVar4 != 0) ||
                 (iVar4 = mbedtls_aes_setkey_dec(local_328,local_a8,0x80), iVar4 != 0))
              goto LAB_001023ba;
              local_78 = *(long *)(aes_test_xts_ct32 + lVar6 + 0x10);
              lStack_70 = *(long *)(aes_test_xts_ct32 + lVar6 + 0x18);
              puVar1 = &aes_test_xts_pt32;
                    /* WARNING: Ignoring partial resolution of indirect */
              local_88._0_8_ = *(undefined8 *)(aes_test_xts_ct32 + lVar6);
            }
            else {
              iVar4 = mbedtls_aes_setkey_enc(local_208,local_488,0x80);
              if ((iVar4 != 0) ||
                 (iVar4 = mbedtls_aes_setkey_enc(local_328,local_a8,0x80), iVar4 != 0))
              goto LAB_001023ba;
              local_78 = *(long *)(&DAT_00105030 + lVar6);
              lStack_70 = *(long *)(&DAT_00105038 + lVar6);
              puVar1 = aes_test_xts_ct32;
                    /* WARNING: Ignoring partial resolution of indirect */
              local_88._0_8_ = *(undefined8 *)(&aes_test_xts_pt32 + lVar6);
            }
            plVar14 = (long *)(puVar1 + lVar6);
            iVar4 = mbedtls_aes_crypt_xts
                              (local_328,uVar13,0x20,aes_test_xts_data_unit + (long)iVar12 * 0x10,
                               local_88,local_88);
            if (iVar4 != 0) goto LAB_001023ba;
            if ((local_88._0_8_ != *plVar14 || local_88._8_8_ != plVar14[1]) ||
               (local_78 != plVar14[2] || lStack_70 != plVar14[3])) goto LAB_00102560;
            if (param_1 != 0) break;
            uVar17 = uVar17 + 1;
            if (uVar17 == 6) goto LAB_00102b5f;
            iVar12 = (int)uVar17 >> 1;
            uVar13 = uVar17 & 1;
          }
          uVar17 = uVar17 + 1;
          puts("passed");
          if (uVar17 == 6) {
            putchar(10);
LAB_00102b5f:
            mbedtls_platform_zeroize(local_328,0x120);
            mbedtls_platform_zeroize(local_208,0x120);
            goto LAB_001023d6;
          }
          puVar7 = &_LC1;
          iVar12 = (int)uVar17 >> 1;
          uVar13 = uVar17 & 1;
        } while (uVar13 != 0);
      } while( true );
    }
  } while( true );
LAB_00102560:
  iVar4 = 1;
LAB_001023ba:
  if (param_1 != 0) {
    puts("failed");
  }
LAB_001023d6:
  mbedtls_platform_zeroize(local_448,0x120);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


