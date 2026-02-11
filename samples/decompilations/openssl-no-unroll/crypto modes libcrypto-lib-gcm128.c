
void gcm_init_4bit(undefined1 (*param_1) [16],ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = (undefined1  [16])0x0;
  uVar1 = param_2[1];
  uVar2 = *param_2;
  *(ulong *)param_1[8] = uVar2;
  uVar7 = uVar1 >> 1 | uVar2 << 0x3f;
  *(ulong *)(param_1[8] + 8) = uVar1;
  *(ulong *)(param_1[4] + 8) = uVar7;
  uVar4 = -(ulong)((uint)uVar1 & 1) & 0xe100000000000000 ^ uVar2 >> 1;
  uVar8 = uVar7 >> 1 | (uVar2 >> 1) << 0x3f;
  uVar3 = -(ulong)((uint)(uVar1 >> 1) & 1) & 0xe100000000000000 ^ uVar4 >> 1;
  *(ulong *)(param_1[6] + 8) = uVar7 ^ uVar8;
  uVar10 = uVar8 >> 1 | (uVar4 >> 1) << 0x3f;
  *(ulong *)param_1[4] = uVar4;
  *(ulong *)param_1[2] = uVar3;
  *(ulong *)(param_1[2] + 8) = uVar8;
  uVar9 = -(ulong)((uint)(uVar7 >> 1) & 1) & 0xe100000000000000 ^ uVar3 >> 1;
  *(ulong *)(param_1[1] + 8) = uVar10;
  uVar6 = uVar3 ^ uVar9;
  uVar5 = uVar8 ^ uVar10;
  *(ulong *)param_1[1] = uVar9;
  *(ulong *)param_1[7] = uVar4 ^ uVar6;
  *(ulong *)param_1[3] = uVar6;
  *(ulong *)(param_1[3] + 8) = uVar5;
  *(ulong *)param_1[5] = uVar4 ^ uVar9;
  *(ulong *)(param_1[5] + 8) = uVar7 ^ uVar10;
  *(ulong *)param_1[6] = uVar4 ^ uVar3;
  *(ulong *)(param_1[7] + 8) = uVar7 ^ uVar5;
  *(ulong *)(param_1[0xb] + 8) = uVar5 ^ uVar1;
  *(ulong *)param_1[0xc] = uVar4 ^ uVar2;
  *(ulong *)param_1[0xb] = uVar6 ^ uVar2;
  *(ulong *)param_1[0xd] = uVar4 ^ uVar9 ^ uVar2;
  *(ulong *)(param_1[0xd] + 8) = uVar7 ^ uVar10 ^ uVar1;
  *(ulong *)param_1[0xe] = uVar4 ^ uVar3 ^ uVar2;
  *(ulong *)param_1[9] = uVar9 ^ uVar2;
  *(ulong *)(param_1[9] + 8) = uVar10 ^ uVar1;
  *(ulong *)param_1[10] = uVar3 ^ uVar2;
  *(ulong *)(param_1[10] + 8) = uVar8 ^ uVar1;
  *(ulong *)(param_1[0xc] + 8) = uVar7 ^ uVar1;
  *(ulong *)(param_1[0xe] + 8) = uVar7 ^ uVar8 ^ uVar1;
  *(ulong *)param_1[0xf] = uVar2 ^ uVar4 ^ uVar6;
  *(ulong *)(param_1[0xf] + 8) = uVar1 ^ uVar7 ^ uVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_gcm_init_4bit(undefined1 (*param_1) [16],ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((_DAT_00103004 & 2) == 0) {
    *param_1 = (undefined1  [16])0x0;
    uVar1 = param_2[1];
    uVar2 = *param_2;
    *(ulong *)param_1[8] = uVar2;
    uVar7 = uVar1 >> 1 | uVar2 << 0x3f;
    *(ulong *)(param_1[8] + 8) = uVar1;
    *(ulong *)(param_1[4] + 8) = uVar7;
    uVar4 = -(ulong)((uint)uVar1 & 1) & 0xe100000000000000 ^ uVar2 >> 1;
    uVar8 = uVar7 >> 1 | (uVar2 >> 1) << 0x3f;
    uVar3 = -(ulong)((uint)(uVar1 >> 1) & 1) & 0xe100000000000000 ^ uVar4 >> 1;
    *(ulong *)(param_1[6] + 8) = uVar7 ^ uVar8;
    uVar10 = uVar8 >> 1 | (uVar4 >> 1) << 0x3f;
    *(ulong *)param_1[4] = uVar4;
    *(ulong *)param_1[2] = uVar3;
    *(ulong *)(param_1[2] + 8) = uVar8;
    uVar9 = -(ulong)((uint)(uVar7 >> 1) & 1) & 0xe100000000000000 ^ uVar3 >> 1;
    *(ulong *)(param_1[1] + 8) = uVar10;
    uVar6 = uVar3 ^ uVar9;
    uVar5 = uVar8 ^ uVar10;
    *(ulong *)param_1[1] = uVar9;
    *(ulong *)param_1[7] = uVar4 ^ uVar6;
    *(ulong *)param_1[3] = uVar6;
    *(ulong *)(param_1[3] + 8) = uVar5;
    *(ulong *)param_1[5] = uVar4 ^ uVar9;
    *(ulong *)(param_1[5] + 8) = uVar7 ^ uVar10;
    *(ulong *)param_1[6] = uVar4 ^ uVar3;
    *(ulong *)(param_1[7] + 8) = uVar7 ^ uVar5;
    *(ulong *)(param_1[0xb] + 8) = uVar5 ^ uVar1;
    *(ulong *)param_1[0xc] = uVar4 ^ uVar2;
    *(ulong *)param_1[0xb] = uVar6 ^ uVar2;
    *(ulong *)param_1[0xd] = uVar4 ^ uVar9 ^ uVar2;
    *(ulong *)(param_1[0xd] + 8) = uVar7 ^ uVar10 ^ uVar1;
    *(ulong *)param_1[0xe] = uVar4 ^ uVar3 ^ uVar2;
    *(ulong *)param_1[9] = uVar9 ^ uVar2;
    *(ulong *)(param_1[9] + 8) = uVar10 ^ uVar1;
    *(ulong *)param_1[10] = uVar3 ^ uVar2;
    *(ulong *)(param_1[10] + 8) = uVar8 ^ uVar1;
    *(ulong *)(param_1[0xc] + 8) = uVar7 ^ uVar1;
    *(ulong *)(param_1[0xe] + 8) = uVar7 ^ uVar8 ^ uVar1;
    *(ulong *)param_1[0xf] = uVar2 ^ uVar4 ^ uVar6;
    *(ulong *)(param_1[0xf] + 8) = uVar1 ^ uVar7 ^ uVar5;
    return;
  }
  if ((~_DAT_00103004 & 0x10400000) == 0) {
    gcm_init_avx(param_1,param_2,gcm_init_avx);
    return;
  }
  gcm_init_clmul(param_1,param_2,gcm_init_clmul);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_gcm_gmult_4bit(void)

{
  if ((_DAT_00103004 & 2) == 0) {
    gcm_gmult_4bit();
    return;
  }
  if ((~_DAT_00103004 & 0x10400000) != 0) {
    gcm_gmult_clmul();
    return;
  }
  gcm_gmult_avx();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_gcm_ghash_4bit(void)

{
  if ((_DAT_00103004 & 2) == 0) {
    gcm_ghash_4bit();
    return;
  }
  if ((~_DAT_00103004 & 0x10400000) != 0) {
    gcm_ghash_clmul();
    return;
  }
  gcm_ghash_avx();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRYPTO_gcm128_init(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  
  puVar1 = param_1 + 10;
  *param_1 = 0;
  param_1[0x37] = 0;
  puVar7 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x1c0U >> 3
                      ); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  param_1[0x30] = param_3;
  param_1[0x31] = param_2;
  (*param_3)(puVar1,puVar1,param_2);
  uVar4 = param_1[10];
  param_1[10] = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                uVar4 << 0x38;
  uVar4 = param_1[0xb];
  param_1[0xb] = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                 (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                 (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                 uVar4 << 0x38;
  uVar2 = _DAT_00103004;
  pcVar3 = gcm_init_4bit;
  param_1[0x2c] = 0x100000;
  if ((uVar2 & 2) == 0) {
    pcVar5 = gcm_gmult_4bit;
    pcVar6 = gcm_ghash_4bit;
  }
  else if ((~uVar2 & 0x10400000) == 0) {
    pcVar3 = gcm_init_avx;
    pcVar5 = gcm_gmult_avx;
    pcVar6 = gcm_ghash_avx;
    param_1[0x2c] = gcm_init_avx;
  }
  else {
    pcVar3 = gcm_init_clmul;
    pcVar5 = gcm_gmult_clmul;
    pcVar6 = gcm_ghash_clmul;
    param_1[0x2c] = gcm_init_clmul;
  }
  param_1[0x2e] = pcVar5;
  param_1[0x2d] = pcVar6;
  (*pcVar3)(param_1 + 0xc,puVar1);
  return;
}



void CRYPTO_gcm128_setiv(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulong *local_50;
  ulong *local_48;
  
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[0x2f] = 0;
  if (param_3 == 0xc) {
    uVar9 = 2;
    *param_1 = *param_2;
    uVar4 = param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = 0x1000000;
    *(int *)(param_1 + 1) = (int)uVar4;
    goto LAB_0010068c;
  }
  puVar1 = param_1 + 8;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  uVar4 = param_3;
  local_50 = param_2;
  if (0xf < param_3) {
    local_59 = 0;
    bVar19 = 0;
    bVar18 = 0;
    local_5a = 0;
    bVar17 = 0;
    bVar16 = 0;
    local_50 = (ulong *)((long)param_2 + (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10);
    local_5b = 0;
    bVar15 = 0;
    bVar14 = 0;
    bVar13 = 0;
    bVar12 = 0;
    bVar11 = 0;
    bVar10 = 0;
    bVar5 = 0;
    bVar7 = 0;
    bVar3 = 0;
    while( true ) {
      *(byte *)(param_1 + 8) = bVar3 ^ (byte)*param_2;
      *(byte *)((long)param_1 + 0x41) = bVar7 ^ *(byte *)((long)param_2 + 1);
      *(byte *)((long)param_1 + 0x42) = bVar5 ^ *(byte *)((long)param_2 + 2);
      *(byte *)((long)param_1 + 0x43) = bVar10 ^ *(byte *)((long)param_2 + 3);
      *(byte *)((long)param_1 + 0x44) = bVar11 ^ *(byte *)((long)param_2 + 4);
      *(byte *)((long)param_1 + 0x45) = bVar12 ^ *(byte *)((long)param_2 + 5);
      *(byte *)((long)param_1 + 0x46) = local_5b ^ *(byte *)((long)param_2 + 6);
      *(byte *)((long)param_1 + 0x47) = local_5a ^ *(byte *)((long)param_2 + 7);
      *(byte *)(param_1 + 9) = local_59 ^ (byte)param_2[1];
      *(byte *)((long)param_1 + 0x49) = bVar13 ^ *(byte *)((long)param_2 + 9);
      *(byte *)((long)param_1 + 0x4a) = bVar14 ^ *(byte *)((long)param_2 + 10);
      *(byte *)((long)param_1 + 0x4b) = bVar15 ^ *(byte *)((long)param_2 + 0xb);
      *(byte *)((long)param_1 + 0x4c) = bVar16 ^ *(byte *)((long)param_2 + 0xc);
      *(byte *)((long)param_1 + 0x4d) = bVar17 ^ *(byte *)((long)param_2 + 0xd);
      *(byte *)((long)param_1 + 0x4e) = bVar18 ^ *(byte *)((long)param_2 + 0xe);
      *(byte *)((long)param_1 + 0x4f) = bVar19 ^ *(byte *)((long)param_2 + 0xf);
      (*(code *)param_1[0x2e])(puVar1,param_1 + 0xc);
      if (param_2 + 2 == local_50) break;
      local_5b = *(byte *)((long)param_1 + 0x46);
      local_5a = *(byte *)((long)param_1 + 0x47);
      local_59 = (byte)param_1[9];
      bVar3 = (byte)param_1[8];
      bVar7 = *(byte *)((long)param_1 + 0x41);
      bVar5 = *(byte *)((long)param_1 + 0x42);
      bVar10 = *(byte *)((long)param_1 + 0x43);
      bVar11 = *(byte *)((long)param_1 + 0x44);
      bVar12 = *(byte *)((long)param_1 + 0x45);
      bVar13 = *(byte *)((long)param_1 + 0x49);
      bVar14 = *(byte *)((long)param_1 + 0x4a);
      bVar15 = *(byte *)((long)param_1 + 0x4b);
      bVar16 = *(byte *)((long)param_1 + 0x4c);
      bVar17 = *(byte *)((long)param_1 + 0x4d);
      bVar18 = *(byte *)((long)param_1 + 0x4e);
      bVar19 = *(byte *)((long)param_1 + 0x4f);
      param_2 = param_2 + 2;
    }
    uVar4 = (ulong)((uint)param_3 & 0xf);
  }
  local_48 = param_1 + 0xc;
  if (uVar4 != 0) {
    if (uVar4 - 1 < 3) {
      *(byte *)(param_1 + 8) = (byte)param_1[8] ^ (byte)*local_50;
      if ((uVar4 != 1) &&
         (*(byte *)((long)param_1 + 0x41) =
               *(byte *)((long)param_1 + 0x41) ^ *(byte *)((long)local_50 + 1), uVar4 == 3))
      goto LAB_001005a1;
    }
    else if ((ulong)((long)puVar1 - ((long)local_50 + 1)) < 7) {
      *(byte *)(param_1 + 8) = (byte)param_1[8] ^ (byte)*local_50;
      *(byte *)((long)param_1 + 0x41) =
           *(byte *)((long)param_1 + 0x41) ^ *(byte *)((long)local_50 + 1);
LAB_001005a1:
      *(byte *)((long)param_1 + 0x42) =
           *(byte *)((long)param_1 + 0x42) ^ *(byte *)((long)local_50 + 2);
      if (((((uVar4 != 3) &&
            (*(byte *)((long)param_1 + 0x43) =
                  *(byte *)((long)param_1 + 0x43) ^ *(byte *)((long)local_50 + 3), uVar4 != 4)) &&
           (*(byte *)((long)param_1 + 0x44) =
                 *(byte *)((long)param_1 + 0x44) ^ *(byte *)((long)local_50 + 4), uVar4 != 5)) &&
          ((((*(byte *)((long)param_1 + 0x45) =
                   *(byte *)((long)param_1 + 0x45) ^ *(byte *)((long)local_50 + 5), uVar4 != 6 &&
             (*(byte *)((long)param_1 + 0x46) =
                   *(byte *)((long)param_1 + 0x46) ^ *(byte *)((long)local_50 + 6), uVar4 != 7)) &&
            ((*(byte *)((long)param_1 + 0x47) =
                   *(byte *)((long)param_1 + 0x47) ^ *(byte *)((long)local_50 + 7), uVar4 != 8 &&
             ((*(byte *)(param_1 + 9) = (byte)param_1[9] ^ (byte)local_50[1], uVar4 != 9 &&
              (*(byte *)((long)param_1 + 0x49) =
                    *(byte *)((long)param_1 + 0x49) ^ *(byte *)((long)local_50 + 9), uVar4 != 10))))
            )) && (*(byte *)((long)param_1 + 0x4a) =
                        *(byte *)((long)param_1 + 0x4a) ^ *(byte *)((long)local_50 + 10),
                  uVar4 != 0xb)))) &&
         (((*(byte *)((long)param_1 + 0x4b) =
                 *(byte *)((long)param_1 + 0x4b) ^ *(byte *)((long)local_50 + 0xb), uVar4 != 0xc &&
           (*(byte *)((long)param_1 + 0x4c) =
                 *(byte *)((long)param_1 + 0x4c) ^ *(byte *)((long)local_50 + 0xc), uVar4 != 0xd))
          && (*(byte *)((long)param_1 + 0x4d) =
                   *(byte *)((long)param_1 + 0x4d) ^ *(byte *)((long)local_50 + 0xd), uVar4 == 0xf))
         )) {
        *(byte *)((long)param_1 + 0x4e) =
             *(byte *)((long)param_1 + 0x4e) ^ *(byte *)((long)local_50 + 0xe);
      }
    }
    else {
      if (uVar4 - 1 < 7) {
        lVar8 = 0;
        uVar6 = uVar4;
LAB_00100711:
        *(uint *)((long)param_1 + lVar8 + 0x40) =
             *(uint *)((long)param_1 + lVar8 + 0x40) ^ *(uint *)((long)local_50 + lVar8);
        lVar8 = lVar8 + 4;
        if (uVar6 == 4) goto LAB_0010064c;
      }
      else {
        param_1[8] = param_1[8] ^ *local_50;
        if (uVar4 == 8) goto LAB_0010064c;
        lVar8 = 8;
        uVar6 = uVar4 - 8;
        if (2 < uVar4 - 9) goto LAB_00100711;
      }
      pbVar2 = (byte *)((long)param_1 + lVar8 + 0x40);
      *pbVar2 = *pbVar2 ^ *(byte *)((long)local_50 + lVar8);
      if (lVar8 + 1U < uVar4) {
        pbVar2 = (byte *)((long)param_1 + lVar8 + 0x41);
        *pbVar2 = *pbVar2 ^ *(byte *)((long)local_50 + lVar8 + 1);
        if (lVar8 + 2U < uVar4) {
          pbVar2 = (byte *)((long)param_1 + lVar8 + 0x42);
          *pbVar2 = *pbVar2 ^ *(byte *)((long)local_50 + lVar8 + 2);
        }
      }
    }
LAB_0010064c:
    (*(code *)param_1[0x2e])(puVar1,local_48);
  }
  uVar4 = param_3 << 3;
  param_1[9] = param_1[9] ^
               (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
               param_3 << 0x3b);
  (*(code *)param_1[0x2e])(puVar1,local_48);
  uVar9 = *(uint *)((long)param_1 + 0x4c);
  *param_1 = param_1[8];
  param_1[1] = param_1[9];
  uVar9 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) + 1;
LAB_0010068c:
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  (*(code *)param_1[0x30])(param_1,param_1 + 4,param_1[0x31]);
  *(uint *)((long)param_1 + 0xc) =
       uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  return;
}



undefined8 CRYPTO_gcm128_aad(long param_1,ulong *param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar3 = *(ulong *)(param_1 + 0x30) + param_3;
  if ((0x2000000000000000 < uVar3) || (CARRY8(*(ulong *)(param_1 + 0x30),param_3))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x30) = uVar3;
  uVar2 = *(uint *)(param_1 + 0x17c);
  if (uVar2 != 0) {
    puVar5 = param_2;
    if (param_3 == 0) goto LAB_00100860;
    do {
      param_2 = (ulong *)((long)puVar5 + 1);
      param_3 = param_3 - 1;
      *(byte *)(param_1 + 0x40 + (ulong)uVar2) =
           *(byte *)(param_1 + 0x40 + (ulong)uVar2) ^ (byte)*puVar5;
      uVar2 = uVar2 + 1 & 0xf;
      if (uVar2 == 0) goto LAB_00100878;
      puVar5 = param_2;
    } while (param_3 != 0);
    if (uVar2 != 0) goto LAB_00100860;
LAB_00100878:
    (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
  }
  uVar3 = param_3 & 0xfffffffffffffff0;
  if (uVar3 != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,uVar3);
    param_2 = (ulong *)((long)param_2 + uVar3);
    param_3 = param_3 - uVar3;
  }
  uVar2 = 0;
  if (param_3 == 0) goto LAB_00100860;
  uVar2 = (uint)param_3;
  if (param_3 - 1 < 7) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)*param_2;
    if ((param_3 == 1) ||
       (*(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ *(byte *)((long)param_2 + 1),
       param_3 == 2)) goto LAB_00100860;
  }
  else {
    if (0xe < (param_1 - (long)param_2) + 0x3fU) {
      if (param_3 - 1 < 0xf) {
        uVar3 = 0;
        uVar4 = param_3;
LAB_00100a2e:
        puVar5 = (ulong *)(param_1 + 0x40 + uVar3);
        *puVar5 = *puVar5 ^ *(ulong *)((long)param_2 + uVar3);
        uVar3 = uVar3 + (uVar4 & 0xfffffffffffffff8);
        if ((uVar4 & 7) == 0) goto LAB_00100860;
      }
      else {
        uVar4 = param_2[1];
        uVar3 = param_3 & 0xfffffffffffffff0;
        *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) ^ *param_2;
        *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) ^ uVar4;
        if ((param_3 & 0xf) == 0) goto LAB_00100860;
        uVar4 = param_3 - uVar3;
        if (6 < (param_3 - uVar3) - 1) goto LAB_00100a2e;
      }
      pbVar1 = (byte *)(param_1 + 0x40 + uVar3);
      *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3);
      if (uVar3 + 1 < param_3) {
        pbVar1 = (byte *)(param_1 + 0x40 + uVar3 + 1);
        *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3 + 1);
        if (uVar3 + 2 < param_3) {
          pbVar1 = (byte *)(param_1 + 0x40 + uVar3 + 2);
          *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3 + 2);
          if (uVar3 + 3 < param_3) {
            pbVar1 = (byte *)(param_1 + 0x40 + uVar3 + 3);
            *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3 + 3);
            if (uVar3 + 4 < param_3) {
              pbVar1 = (byte *)(param_1 + 0x40 + uVar3 + 4);
              *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3 + 4);
              if (uVar3 + 5 < param_3) {
                pbVar1 = (byte *)(param_1 + 0x40 + uVar3 + 5);
                *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3 + 5);
                if (uVar3 + 6 < param_3) {
                  pbVar1 = (byte *)(param_1 + 0x40 + uVar3 + 6);
                  *pbVar1 = *pbVar1 ^ *(byte *)((long)param_2 + uVar3 + 6);
                }
              }
            }
          }
        }
      }
      goto LAB_00100860;
    }
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)*param_2;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ *(byte *)((long)param_2 + 1);
  }
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) ^ *(byte *)((long)param_2 + 2);
  if (((((param_3 != 3) &&
        (*(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) ^ *(byte *)((long)param_2 + 3),
        param_3 != 4)) &&
       (*(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) ^ *(byte *)((long)param_2 + 4),
       param_3 != 5)) &&
      (((*(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) ^ *(byte *)((long)param_2 + 5),
        param_3 != 6 &&
        (*(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) ^ *(byte *)((long)param_2 + 6),
        param_3 != 7)) &&
       ((*(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) ^ *(byte *)((long)param_2 + 7),
        param_3 != 8 &&
        ((*(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ (byte)param_2[1], param_3 != 9 &&
         (*(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) ^ *(byte *)((long)param_2 + 9),
         param_3 != 10)))))))) &&
     ((*(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) ^ *(byte *)((long)param_2 + 10),
      param_3 != 0xb &&
      ((((*(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) ^ *(byte *)((long)param_2 + 0xb),
         param_3 != 0xc &&
         (*(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) ^ *(byte *)((long)param_2 + 0xc),
         param_3 != 0xd)) &&
        (*(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) ^ *(byte *)((long)param_2 + 0xd),
        param_3 != 0xe)) &&
       (*(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) ^ *(byte *)((long)param_2 + 0xe),
       param_3 != 0xf)))))) {
    *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) ^ *(byte *)((long)param_2 + 0xf);
  }
LAB_00100860:
  *(uint *)(param_1 + 0x17c) = uVar2;
  return 0;
}



undefined8 CRYPTO_gcm128_encrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  bool bVar16;
  uint local_78;
  ulong local_70;
  ulong *local_68;
  
  pcVar1 = *(code **)(param_1 + 0x180);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar4 = param_4 + *(ulong *)(param_1 + 0x38);
  if ((0xfffffffe0 < uVar4) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x38) = uVar4;
  uVar3 = *(uint *)(param_1 + 0x178);
  uVar4 = (ulong)uVar3;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar11 = *(uint *)(param_1 + 0xc);
    local_78 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar11 = uVar3 & 0xf;
    if (uVar11 != 0) {
      puVar8 = param_3;
      if (param_4 == 0) {
LAB_0010113b:
        *(uint *)(param_1 + 0x178) = uVar3;
        return 0;
      }
      do {
        param_3 = (ulong *)((long)puVar8 + 1);
        uVar12 = uVar11 + 1;
        bVar5 = (byte)*param_2 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar11);
        param_2 = (ulong *)((long)param_2 + 1);
        uVar3 = (int)uVar4 + 1;
        *(byte *)puVar8 = bVar5;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 400 + uVar4) = bVar5;
        uVar11 = uVar12 & 0xf;
        if (uVar11 == 0) goto LAB_00100c29;
        uVar4 = (ulong)uVar3;
        puVar8 = param_3;
      } while (param_4 != 0);
      if (uVar11 != 0) goto LAB_0010113b;
LAB_00100c29:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar3);
      uVar4 = (ulong)uVar12 & 0xf;
      goto LAB_00100c5c;
    }
    bVar16 = uVar3 != 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    local_78 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    bVar16 = true;
    uVar4 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  }
  if ((0xf < param_4) && (bVar16)) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar4);
    uVar4 = 0;
  }
LAB_00100c5c:
  if (0xbff < param_4) {
    puVar8 = param_3 + 0x180;
    local_70 = param_4;
    local_68 = param_2;
    do {
      puVar15 = puVar8 + -0x180;
      param_3 = puVar15;
      puVar14 = local_68;
      uVar3 = local_78;
      do {
        puVar9 = param_3;
        uVar3 = uVar3 + 1;
        (*pcVar1)(param_1,param_1 + 0x10,uVar2);
        param_3 = puVar9 + 2;
        *(uint *)(param_1 + 0xc) =
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
        *puVar9 = *puVar14 ^ *(ulong *)(param_1 + 0x10);
        puVar9[1] = puVar14[1] ^ *(ulong *)(param_1 + 0x18);
        puVar14 = puVar14 + 2;
      } while (param_3 != puVar8);
      local_78 = local_78 + 0xc0;
      puVar8 = puVar9 + 0x182;
      param_2 = local_68 + 0x180;
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,puVar15,0xc00);
      param_4 = local_70 - 0xc00;
      local_70 = param_4;
      local_68 = param_2;
    } while (0xbff < param_4);
  }
  uVar10 = param_4 & 0xfffffffffffffff0;
  if (uVar10 != 0) {
    uVar6 = param_4 - 0x10 >> 4;
    local_78 = local_78 + 1;
    uVar3 = local_78 + (int)uVar6;
    puVar8 = param_3;
    puVar15 = param_2;
    while( true ) {
      (*pcVar1)(param_1,param_1 + 0x10,uVar2);
      *(uint *)(param_1 + 0xc) =
           local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
           local_78 << 0x18;
      *puVar8 = *puVar15 ^ *(ulong *)(param_1 + 0x10);
      puVar8[1] = puVar15[1] ^ *(ulong *)(param_1 + 0x18);
      if (uVar3 == local_78) break;
      local_78 = local_78 + 1;
      puVar8 = puVar8 + 2;
      puVar15 = puVar15 + 2;
    }
    param_4 = (ulong)((uint)param_4 & 0xf);
    lVar7 = uVar6 + 1;
    param_3 = param_3 + lVar7 * 2;
    param_2 = param_2 + lVar7 * 2;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,(long)param_3 - uVar10,uVar10);
  }
  iVar13 = (int)uVar4;
  if (param_4 != 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar2);
    local_78 = local_78 + 1;
    *(uint *)(param_1 + 0xc) =
         local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
         local_78 * 0x1000000;
    bVar5 = *(byte *)(param_1 + 0x10) ^ (byte)*param_2;
    *(byte *)param_3 = bVar5;
    *(byte *)(param_1 + 400 + uVar4) = bVar5;
    lVar7 = param_4 - 1;
    if (lVar7 != 0) {
      bVar5 = *(byte *)((long)param_2 + 1) ^ *(byte *)(param_1 + 0x11);
      *(byte *)((long)param_3 + 1) = bVar5;
      *(byte *)(param_1 + 400 + (ulong)(iVar13 + 1U)) = bVar5;
      if (lVar7 != 1) {
        bVar5 = *(byte *)((long)param_2 + 2) ^ *(byte *)(param_1 + 0x12);
        *(byte *)((long)param_3 + 2) = bVar5;
        *(byte *)(param_1 + 400 + (ulong)(iVar13 + 2)) = bVar5;
        if (param_4 != 3) {
          bVar5 = *(byte *)((long)param_2 + 3) ^ *(byte *)(param_1 + 0x13);
          *(byte *)((long)param_3 + 3) = bVar5;
          *(byte *)(param_1 + 400 + (ulong)(iVar13 + 3)) = bVar5;
          if (param_4 != 4) {
            bVar5 = *(byte *)((long)param_2 + 4) ^ *(byte *)(param_1 + 0x14);
            *(byte *)((long)param_3 + 4) = bVar5;
            *(byte *)(param_1 + 400 + (ulong)(iVar13 + 4)) = bVar5;
            if (param_4 != 5) {
              bVar5 = *(byte *)((long)param_2 + 5) ^ *(byte *)(param_1 + 0x15);
              *(byte *)((long)param_3 + 5) = bVar5;
              *(byte *)(param_1 + 400 + (ulong)(iVar13 + 5)) = bVar5;
              if (param_4 != 6) {
                bVar5 = *(byte *)((long)param_2 + 6) ^ *(byte *)(param_1 + 0x16);
                *(byte *)((long)param_3 + 6) = bVar5;
                *(byte *)(param_1 + 400 + (ulong)(iVar13 + 6)) = bVar5;
                if (param_4 != 7) {
                  bVar5 = *(byte *)((long)param_2 + 7) ^ *(byte *)(param_1 + 0x17);
                  *(byte *)((long)param_3 + 7) = bVar5;
                  *(byte *)(param_1 + 400 + (ulong)(iVar13 + 7)) = bVar5;
                  if (param_4 != 8) {
                    bVar5 = (byte)param_2[1] ^ *(byte *)(param_1 + 0x18);
                    *(byte *)(param_3 + 1) = bVar5;
                    *(byte *)(param_1 + 400 + (ulong)(iVar13 + 8)) = bVar5;
                    if (param_4 != 9) {
                      bVar5 = *(byte *)((long)param_2 + 9) ^ *(byte *)(param_1 + 0x19);
                      *(byte *)((long)param_3 + 9) = bVar5;
                      *(byte *)(param_1 + 400 + (ulong)(iVar13 + 9)) = bVar5;
                      if (param_4 != 10) {
                        bVar5 = *(byte *)((long)param_2 + 10) ^ *(byte *)(param_1 + 0x1a);
                        *(byte *)((long)param_3 + 10) = bVar5;
                        *(byte *)(param_1 + 400 + (ulong)(iVar13 + 10)) = bVar5;
                        if (param_4 != 0xb) {
                          bVar5 = *(byte *)((long)param_2 + 0xb) ^ *(byte *)(param_1 + 0x1b);
                          *(byte *)((long)param_3 + 0xb) = bVar5;
                          *(byte *)(param_1 + 400 + (ulong)(iVar13 + 0xb)) = bVar5;
                          if (param_4 != 0xc) {
                            bVar5 = *(byte *)((long)param_2 + 0xc) ^ *(byte *)(param_1 + 0x1c);
                            *(byte *)((long)param_3 + 0xc) = bVar5;
                            *(byte *)(param_1 + 400 + (ulong)(iVar13 + 0xc)) = bVar5;
                            if (param_4 != 0xd) {
                              bVar5 = *(byte *)((long)param_2 + 0xd) ^ *(byte *)(param_1 + 0x1d);
                              *(byte *)((long)param_3 + 0xd) = bVar5;
                              *(byte *)(param_1 + 400 + (ulong)(iVar13 + 0xd)) = bVar5;
                              if (param_4 != 0xe) {
                                bVar5 = *(byte *)((long)param_2 + 0xe) ^ *(byte *)(param_1 + 0x1e);
                                *(byte *)((long)param_3 + 0xe) = bVar5;
                                *(byte *)(param_1 + 400 + (ulong)(iVar13 + 0xe)) = bVar5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar13 = iVar13 + 1U + (int)lVar7;
  }
  *(int *)(param_1 + 0x178) = iVar13;
  return 0;
}



undefined8 CRYPTO_gcm128_decrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong *puVar13;
  bool bVar14;
  uint local_70;
  ulong local_68;
  ulong *local_60;
  
  pcVar2 = *(code **)(param_1 + 0x180);
  uVar5 = param_4 + *(ulong *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  if ((0xfffffffe0 < uVar5) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x38) = uVar5;
  uVar4 = *(uint *)(param_1 + 0x178);
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar10 = *(uint *)(param_1 + 0xc);
    local_70 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar10 = uVar4 & 0xf;
    if (uVar10 != 0) {
      uVar5 = (ulong)uVar4;
      puVar8 = param_3;
      if (param_4 == 0) {
LAB_00101752:
        *(uint *)(param_1 + 0x178) = uVar4;
        return 0;
      }
      do {
        uVar6 = *param_2;
        param_3 = (ulong *)((long)puVar8 + 1);
        param_2 = (ulong *)((long)param_2 + 1);
        uVar4 = (int)uVar5 + 1;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 400 + uVar5) = (byte)uVar6;
        uVar11 = uVar10 + 1;
        *(byte *)puVar8 = (byte)uVar6 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar10);
        uVar10 = uVar11 & 0xf;
        if (uVar10 == 0) goto LAB_0010123b;
        uVar5 = (ulong)uVar4;
        puVar8 = param_3;
      } while (param_4 != 0);
      if (uVar10 != 0) goto LAB_00101752;
LAB_0010123b:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,(ulong)uVar4);
      uVar5 = (ulong)uVar11 & 0xf;
      goto LAB_00101271;
    }
    bVar14 = uVar4 != 0;
    uVar5 = (ulong)uVar4;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    bVar14 = true;
    local_70 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar5 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  }
  if ((0xf < param_4) && (bVar14)) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar5);
    uVar5 = 0;
  }
LAB_00101271:
  if (0xbff < param_4) {
    puVar8 = param_3 + 0x180;
    local_68 = param_4;
    local_60 = param_2;
    do {
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,local_60,0xc00);
      param_3 = puVar8 + -0x180;
      puVar13 = local_60;
      uVar4 = local_70;
      do {
        puVar9 = param_3;
        uVar4 = uVar4 + 1;
        param_3 = puVar9 + 2;
        (*pcVar2)(param_1,param_1 + 0x10,uVar3);
        *(uint *)(param_1 + 0xc) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
        *puVar9 = *puVar13 ^ *(ulong *)(param_1 + 0x10);
        puVar9[1] = puVar13[1] ^ *(ulong *)(param_1 + 0x18);
        puVar13 = puVar13 + 2;
      } while (param_3 != puVar8);
      param_4 = local_68 - 0xc00;
      puVar8 = puVar9 + 0x182;
      local_70 = local_70 + 0xc0;
      param_2 = local_60 + 0x180;
      local_68 = param_4;
      local_60 = param_2;
    } while (0xbff < param_4);
  }
  iVar12 = (int)uVar5;
  if ((param_4 & 0xfffffffffffffff0) != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2);
    local_70 = local_70 + 1;
    uVar6 = param_4 - 0x10 >> 4;
    uVar4 = local_70 + (int)uVar6;
    puVar8 = param_2;
    puVar13 = param_3;
    while( true ) {
      (*pcVar2)(param_1,param_1 + 0x10,uVar3);
      *(uint *)(param_1 + 0xc) =
           local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
           local_70 << 0x18;
      *puVar13 = *puVar8 ^ *(ulong *)(param_1 + 0x10);
      puVar13[1] = puVar8[1] ^ *(ulong *)(param_1 + 0x18);
      if (uVar4 == local_70) break;
      local_70 = local_70 + 1;
      puVar8 = puVar8 + 2;
      puVar13 = puVar13 + 2;
    }
    lVar7 = uVar6 + 1;
    param_4 = (ulong)((uint)param_4 & 0xf);
    param_3 = param_3 + lVar7 * 2;
    param_2 = param_2 + lVar7 * 2;
  }
  if (param_4 != 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar3);
    local_70 = local_70 + 1;
    *(uint *)(param_1 + 0xc) =
         local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
         local_70 * 0x1000000;
    uVar6 = *param_2;
    *(byte *)(param_1 + 400 + uVar5) = (byte)uVar6;
    *(byte *)param_3 = (byte)uVar6 ^ *(byte *)(param_1 + 0x10);
    lVar7 = param_4 - 1;
    if (lVar7 != 0) {
      bVar1 = *(byte *)((long)param_2 + 1);
      *(byte *)(param_1 + 400 + (ulong)(iVar12 + 1U)) = bVar1;
      *(byte *)((long)param_3 + 1) = bVar1 ^ *(byte *)(param_1 + 0x11);
      if (lVar7 != 1) {
        bVar1 = *(byte *)((long)param_2 + 2);
        *(byte *)(param_1 + 400 + (ulong)(iVar12 + 2)) = bVar1;
        *(byte *)((long)param_3 + 2) = bVar1 ^ *(byte *)(param_1 + 0x12);
        if (param_4 != 3) {
          bVar1 = *(byte *)((long)param_2 + 3);
          *(byte *)(param_1 + 400 + (ulong)(iVar12 + 3)) = bVar1;
          *(byte *)((long)param_3 + 3) = bVar1 ^ *(byte *)(param_1 + 0x13);
          if (param_4 != 4) {
            bVar1 = *(byte *)((long)param_2 + 4);
            *(byte *)(param_1 + 400 + (ulong)(iVar12 + 4)) = bVar1;
            *(byte *)((long)param_3 + 4) = bVar1 ^ *(byte *)(param_1 + 0x14);
            if (param_4 != 5) {
              bVar1 = *(byte *)((long)param_2 + 5);
              *(byte *)(param_1 + 400 + (ulong)(iVar12 + 5)) = bVar1;
              *(byte *)((long)param_3 + 5) = bVar1 ^ *(byte *)(param_1 + 0x15);
              if (param_4 != 6) {
                bVar1 = *(byte *)((long)param_2 + 6);
                *(byte *)(param_1 + 400 + (ulong)(iVar12 + 6)) = bVar1;
                *(byte *)((long)param_3 + 6) = bVar1 ^ *(byte *)(param_1 + 0x16);
                if (param_4 != 7) {
                  bVar1 = *(byte *)((long)param_2 + 7);
                  *(byte *)(param_1 + 400 + (ulong)(iVar12 + 7)) = bVar1;
                  *(byte *)((long)param_3 + 7) = bVar1 ^ *(byte *)(param_1 + 0x17);
                  if (param_4 != 8) {
                    uVar5 = param_2[1];
                    *(byte *)(param_1 + 400 + (ulong)(iVar12 + 8)) = (byte)uVar5;
                    *(byte *)(param_3 + 1) = (byte)uVar5 ^ *(byte *)(param_1 + 0x18);
                    if (param_4 != 9) {
                      bVar1 = *(byte *)((long)param_2 + 9);
                      *(byte *)(param_1 + 400 + (ulong)(iVar12 + 9)) = bVar1;
                      *(byte *)((long)param_3 + 9) = bVar1 ^ *(byte *)(param_1 + 0x19);
                      if (param_4 != 10) {
                        bVar1 = *(byte *)((long)param_2 + 10);
                        *(byte *)(param_1 + 400 + (ulong)(iVar12 + 10)) = bVar1;
                        *(byte *)((long)param_3 + 10) = bVar1 ^ *(byte *)(param_1 + 0x1a);
                        if (param_4 != 0xb) {
                          bVar1 = *(byte *)((long)param_2 + 0xb);
                          *(byte *)(param_1 + 400 + (ulong)(iVar12 + 0xb)) = bVar1;
                          *(byte *)((long)param_3 + 0xb) = bVar1 ^ *(byte *)(param_1 + 0x1b);
                          if (param_4 != 0xc) {
                            bVar1 = *(byte *)((long)param_2 + 0xc);
                            *(byte *)(param_1 + 400 + (ulong)(iVar12 + 0xc)) = bVar1;
                            *(byte *)((long)param_3 + 0xc) = bVar1 ^ *(byte *)(param_1 + 0x1c);
                            if (param_4 != 0xd) {
                              bVar1 = *(byte *)((long)param_2 + 0xd);
                              *(byte *)(param_1 + 400 + (ulong)(iVar12 + 0xd)) = bVar1;
                              *(byte *)((long)param_3 + 0xd) = bVar1 ^ *(byte *)(param_1 + 0x1d);
                              if (param_4 != 0xe) {
                                bVar1 = *(byte *)((long)param_2 + 0xe);
                                *(byte *)(param_1 + 400 + (ulong)(iVar12 + 0xe)) = bVar1;
                                *(byte *)((long)param_3 + 0xe) = bVar1 ^ *(byte *)(param_1 + 0x1e);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar12 = iVar12 + 1U + (int)lVar7;
  }
  *(int *)(param_1 + 0x178) = iVar12;
  return 0;
}



undefined8
CRYPTO_gcm128_encrypt_ctr32(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uVar3 = param_4 + *(ulong *)(param_1 + 0x38);
  if ((0xfffffffe0 < uVar3) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  uVar5 = *(uint *)(param_1 + 0x178);
  *(ulong *)(param_1 + 0x38) = uVar3;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar7 = uVar5 & 0xf;
    if (uVar7 != 0) {
      if (param_4 == 0) {
LAB_00101847:
        *(uint *)(param_1 + 0x178) = uVar5;
        return 0;
      }
      do {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        bVar2 = bVar2 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar7);
        pbVar8 = param_3 + 1;
        uVar3 = (ulong)uVar5;
        param_4 = param_4 - 1;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + 1 & 0xf;
        *param_3 = bVar2;
        *(byte *)(param_1 + 400 + uVar3) = bVar2;
        param_3 = pbVar8;
        if (uVar7 == 0) goto LAB_00101890;
      } while (param_4 != 0);
      if (uVar7 != 0) goto LAB_00101847;
LAB_00101890:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar5);
      goto LAB_001018aa;
    }
    bVar9 = uVar5 != 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    bVar9 = true;
    uVar4 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar5 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  uVar7 = uVar5;
  if ((0xf < param_4) && (bVar9)) {
    uVar7 = 0;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar5);
  }
LAB_001018aa:
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    uVar4 = uVar4 + 0xc0;
    (*param_5)(param_2,param_3,0xc0,uVar1,param_1);
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
    param_3 = param_3 + 0xc00;
  }
  uVar3 = param_4 & 0xfffffffffffffff0;
  if (uVar3 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar1,param_1);
    uVar4 = uVar4 + (int)(param_4 >> 4);
    param_2 = param_2 + uVar3;
    param_4 = param_4 - uVar3;
    *(uint *)(param_1 + 0xc) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,uVar3);
    param_3 = param_3 + uVar3;
  }
  if (param_4 != 0) {
    uVar4 = uVar4 + 1;
    (**(code **)(param_1 + 0x180))(param_1,param_1 + 0x10,uVar1);
    *(uint *)(param_1 + 0xc) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
    bVar2 = *(byte *)(param_1 + 0x10) ^ *param_2;
    *param_3 = bVar2;
    *(byte *)(param_1 + 400 + (ulong)uVar7) = bVar2;
    lVar6 = param_4 - 1;
    if (lVar6 != 0) {
      bVar2 = *(byte *)(param_1 + 0x11) ^ param_2[1];
      param_3[1] = bVar2;
      *(byte *)(param_1 + 400 + (ulong)(uVar7 + 1)) = bVar2;
      if (lVar6 != 1) {
        bVar2 = param_2[2] ^ *(byte *)(param_1 + 0x12);
        param_3[2] = bVar2;
        *(byte *)(param_1 + 400 + (ulong)(uVar7 + 2)) = bVar2;
        if (param_4 != 3) {
          bVar2 = param_2[3] ^ *(byte *)(param_1 + 0x13);
          param_3[3] = bVar2;
          *(byte *)(param_1 + 400 + (ulong)(uVar7 + 3)) = bVar2;
          if (param_4 != 4) {
            bVar2 = param_2[4] ^ *(byte *)(param_1 + 0x14);
            param_3[4] = bVar2;
            *(byte *)(param_1 + 400 + (ulong)(uVar7 + 4)) = bVar2;
            if (param_4 != 5) {
              bVar2 = param_2[5] ^ *(byte *)(param_1 + 0x15);
              param_3[5] = bVar2;
              *(byte *)(param_1 + 400 + (ulong)(uVar7 + 5)) = bVar2;
              if (param_4 != 6) {
                bVar2 = param_2[6] ^ *(byte *)(param_1 + 0x16);
                param_3[6] = bVar2;
                *(byte *)(param_1 + 400 + (ulong)(uVar7 + 6)) = bVar2;
                if (param_4 != 7) {
                  bVar2 = param_2[7] ^ *(byte *)(param_1 + 0x17);
                  param_3[7] = bVar2;
                  *(byte *)(param_1 + 400 + (ulong)(uVar7 + 7)) = bVar2;
                  if (param_4 != 8) {
                    bVar2 = param_2[8] ^ *(byte *)(param_1 + 0x18);
                    param_3[8] = bVar2;
                    *(byte *)(param_1 + 400 + (ulong)(uVar7 + 8)) = bVar2;
                    if (param_4 != 9) {
                      bVar2 = param_2[9] ^ *(byte *)(param_1 + 0x19);
                      param_3[9] = bVar2;
                      *(byte *)(param_1 + 400 + (ulong)(uVar7 + 9)) = bVar2;
                      if (param_4 != 10) {
                        bVar2 = param_2[10] ^ *(byte *)(param_1 + 0x1a);
                        param_3[10] = bVar2;
                        *(byte *)(param_1 + 400 + (ulong)(uVar7 + 10)) = bVar2;
                        if (param_4 != 0xb) {
                          bVar2 = param_2[0xb] ^ *(byte *)(param_1 + 0x1b);
                          param_3[0xb] = bVar2;
                          *(byte *)(param_1 + 400 + (ulong)(uVar7 + 0xb)) = bVar2;
                          if (param_4 != 0xc) {
                            bVar2 = param_2[0xc] ^ *(byte *)(param_1 + 0x1c);
                            param_3[0xc] = bVar2;
                            *(byte *)(param_1 + 400 + (ulong)(uVar7 + 0xc)) = bVar2;
                            if (param_4 != 0xd) {
                              bVar2 = param_2[0xd] ^ *(byte *)(param_1 + 0x1d);
                              param_3[0xd] = bVar2;
                              *(byte *)(param_1 + 400 + (ulong)(uVar7 + 0xd)) = bVar2;
                              if (param_4 != 0xe) {
                                bVar2 = param_2[0xe] ^ *(byte *)(param_1 + 0x1e);
                                param_3[0xe] = bVar2;
                                *(byte *)(param_1 + 400 + (ulong)(uVar7 + 0xe)) = bVar2;
                                if (param_4 != 0xf) {
                                  bVar2 = param_2[0xf] ^ *(byte *)(param_1 + 0x1f);
                                  param_3[0xf] = bVar2;
                                  *(byte *)(param_1 + 400 + (ulong)(uVar7 + 0xf)) = bVar2;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar7 = uVar7 + 1 + (int)lVar6;
  }
  *(uint *)(param_1 + 0x178) = uVar7;
  return 0;
}



undefined8
CRYPTO_gcm128_decrypt_ctr32(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  int local_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar3 = param_4 + *(ulong *)(param_1 + 0x38);
  if ((0xfffffffe0 < uVar3) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x178);
  *(ulong *)(param_1 + 0x38) = uVar3;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar6 = *(uint *)(param_1 + 0xc);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar8 = uVar4 & 0xf;
    if (uVar8 != 0) {
      if (param_4 == 0) {
LAB_00101d1f:
        *(uint *)(param_1 + 0x178) = uVar4;
        return 0;
      }
      do {
        bVar1 = *param_2;
        uVar3 = (ulong)uVar4;
        param_2 = param_2 + 1;
        pbVar7 = param_3 + 1;
        uVar4 = uVar4 + 1;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 400 + uVar3) = bVar1;
        uVar3 = (ulong)uVar8;
        uVar8 = uVar8 + 1 & 0xf;
        *param_3 = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar3);
        param_3 = pbVar7;
        if (uVar8 == 0) goto LAB_00101d68;
      } while (param_4 != 0);
      if (uVar8 != 0) goto LAB_00101d1f;
LAB_00101d68:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar4);
      goto LAB_00101d82;
    }
    bVar9 = uVar4 != 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    bVar9 = true;
    uVar4 = 0x10;
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  }
  uVar8 = uVar4;
  if ((0xf < param_4) && (bVar9)) {
    uVar8 = 0;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar4);
  }
LAB_00101d82:
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    uVar6 = uVar6 + 0xc0;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
    (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    param_3 = param_3 + 0xc00;
  }
  uVar3 = param_4 & 0xfffffffffffffff0;
  if (uVar3 != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,uVar3);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    local_48 = (int)(param_4 >> 4);
    uVar6 = uVar6 + local_48;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    param_3 = param_3 + uVar3;
    param_2 = param_2 + uVar3;
    param_4 = param_4 - uVar3;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x180))(param_1,param_1 + 0x10,uVar2);
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    bVar1 = *param_2;
    *(byte *)(param_1 + 400 + (ulong)uVar8) = bVar1;
    *param_3 = bVar1 ^ *(byte *)(param_1 + 0x10);
    lVar5 = param_4 - 1;
    if (lVar5 != 0) {
      bVar1 = param_2[1];
      *(byte *)(param_1 + 400 + (ulong)(uVar8 + 1)) = bVar1;
      param_3[1] = bVar1 ^ *(byte *)(param_1 + 0x11);
      if (lVar5 != 1) {
        bVar1 = param_2[2];
        *(byte *)(param_1 + 400 + (ulong)(uVar8 + 2)) = bVar1;
        param_3[2] = bVar1 ^ *(byte *)(param_1 + 0x12);
        if (param_4 != 3) {
          bVar1 = param_2[3];
          *(byte *)(param_1 + 400 + (ulong)(uVar8 + 3)) = bVar1;
          param_3[3] = bVar1 ^ *(byte *)(param_1 + 0x13);
          if (param_4 != 4) {
            bVar1 = param_2[4];
            *(byte *)(param_1 + 400 + (ulong)(uVar8 + 4)) = bVar1;
            param_3[4] = bVar1 ^ *(byte *)(param_1 + 0x14);
            if (param_4 != 5) {
              bVar1 = param_2[5];
              *(byte *)(param_1 + 400 + (ulong)(uVar8 + 5)) = bVar1;
              param_3[5] = bVar1 ^ *(byte *)(param_1 + 0x15);
              if (param_4 != 6) {
                bVar1 = param_2[6];
                *(byte *)(param_1 + 400 + (ulong)(uVar8 + 6)) = bVar1;
                param_3[6] = bVar1 ^ *(byte *)(param_1 + 0x16);
                if (param_4 != 7) {
                  bVar1 = param_2[7];
                  *(byte *)(param_1 + 400 + (ulong)(uVar8 + 7)) = bVar1;
                  param_3[7] = bVar1 ^ *(byte *)(param_1 + 0x17);
                  if (param_4 != 8) {
                    bVar1 = param_2[8];
                    *(byte *)(param_1 + 400 + (ulong)(uVar8 + 8)) = bVar1;
                    param_3[8] = bVar1 ^ *(byte *)(param_1 + 0x18);
                    if (param_4 != 9) {
                      bVar1 = param_2[9];
                      *(byte *)(param_1 + 400 + (ulong)(uVar8 + 9)) = bVar1;
                      param_3[9] = bVar1 ^ *(byte *)(param_1 + 0x19);
                      if (param_4 != 10) {
                        bVar1 = param_2[10];
                        *(byte *)(param_1 + 400 + (ulong)(uVar8 + 10)) = bVar1;
                        param_3[10] = bVar1 ^ *(byte *)(param_1 + 0x1a);
                        if (param_4 != 0xb) {
                          bVar1 = param_2[0xb];
                          *(byte *)(param_1 + 400 + (ulong)(uVar8 + 0xb)) = bVar1;
                          param_3[0xb] = bVar1 ^ *(byte *)(param_1 + 0x1b);
                          if (param_4 != 0xc) {
                            bVar1 = param_2[0xc];
                            *(byte *)(param_1 + 400 + (ulong)(uVar8 + 0xc)) = bVar1;
                            param_3[0xc] = bVar1 ^ *(byte *)(param_1 + 0x1c);
                            if (param_4 != 0xd) {
                              bVar1 = param_2[0xd];
                              *(byte *)(param_1 + 400 + (ulong)(uVar8 + 0xd)) = bVar1;
                              param_3[0xd] = bVar1 ^ *(byte *)(param_1 + 0x1d);
                              if (param_4 != 0xe) {
                                bVar1 = param_2[0xe];
                                *(byte *)(param_1 + 400 + (ulong)(uVar8 + 0xe)) = bVar1;
                                param_3[0xe] = bVar1 ^ *(byte *)(param_1 + 0x1e);
                                if (param_4 != 0xf) {
                                  bVar1 = param_2[0xf];
                                  *(byte *)(param_1 + 400 + (ulong)(uVar8 + 0xf)) = bVar1;
                                  param_3[0xf] = bVar1 ^ *(byte *)(param_1 + 0x1f);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar8 = uVar8 + 1 + (int)lVar5;
  }
  *(uint *)(param_1 + 0x178) = uVar8;
  return 0;
}



int CRYPTO_gcm128_finish(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = lVar4 * 8;
  lVar5 = *(long *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x178);
  uVar2 = lVar5 * 8;
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      (**(code **)(param_1 + 0x170))();
    }
  }
  else {
    uVar8 = uVar3 + 0xf & 0xfffffff0;
    memset((void *)((ulong)uVar3 + param_1 + 400),0,(ulong)(uVar8 - uVar3));
    if (uVar8 != 0x30) {
      uVar7 = (ulong)uVar8;
      iVar6 = uVar8 + 0x10;
      goto LAB_00102195;
    }
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,0x30);
  }
  iVar6 = 0x10;
  uVar7 = 0;
LAB_00102195:
  *(ulong *)(param_1 + 400 + uVar7) =
       uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
       (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
       (uVar1 & 0xff00) << 0x28 | lVar4 << 0x3b;
  *(ulong *)(param_1 + 0x198 + uVar7) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | lVar5 << 0x3b;
  (**(code **)(param_1 + 0x168))((void *)(param_1 + 0x40),param_1 + 0x60,param_1 + 400,iVar6);
  *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) ^ *(ulong *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) ^ *(ulong *)(param_1 + 0x28);
  if ((param_2 != (void *)0x0) && (param_3 < 0x11)) {
    iVar6 = CRYPTO_memcmp((void *)(param_1 + 0x40),param_2,param_3);
    return iVar6;
  }
  return -1;
}



void CRYPTO_gcm128_tag(long param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  CRYPTO_gcm128_finish(param_1,0,0);
  uVar2 = 0x10;
  if (param_3 < 0x11) {
    uVar2 = param_3;
  }
  uVar3 = (uint)uVar2;
  if (uVar3 < 8) {
    if ((uVar2 & 4) == 0) {
      if ((uVar3 != 0) &&
         (*(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x40), (uVar2 & 2) != 0)) {
        *(undefined2 *)((long)param_2 + ((uVar2 & 0xffffffff) - 2)) =
             *(undefined2 *)(param_1 + 0x3e + (uVar2 & 0xffffffff));
      }
    }
    else {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)((long)param_2 + ((uVar2 & 0xffffffff) - 4)) =
           *(undefined4 *)(param_1 + 0x3c + (uVar2 & 0xffffffff));
    }
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((long)param_2 + ((uVar2 & 0xffffffff) - 8)) =
         *(undefined8 *)(param_1 + 0x38 + (uVar2 & 0xffffffff));
    lVar4 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    uVar3 = uVar3 + (int)lVar4 & 0xfffffff8;
    if (7 < uVar3) {
      uVar1 = 0;
      do {
        uVar2 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar2) =
             *(undefined8 *)(((param_1 + 0x40) - lVar4) + uVar2);
      } while (uVar1 < uVar3);
      return;
    }
  }
  return;
}



void * CRYPTO_gcm128_new(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_malloc(0x1c0,"crypto/modes/gcm128.c",0x654);
  if (pvVar1 != (void *)0x0) {
    CRYPTO_gcm128_init(pvVar1,param_1,param_2);
  }
  return pvVar1;
}



void CRYPTO_gcm128_release(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x1c0,"crypto/modes/gcm128.c",0x65c);
  return;
}


