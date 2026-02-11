
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
  
  if ((_DAT_00102004 & 2) == 0) {
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
  if ((~_DAT_00102004 & 0x10400000) == 0) {
    gcm_init_avx(param_1,param_2,gcm_init_avx);
    return;
  }
  gcm_init_clmul(param_1,param_2,gcm_init_clmul);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_gcm_gmult_4bit(void)

{
  if ((_DAT_00102004 & 2) == 0) {
    gcm_gmult_4bit();
    return;
  }
  if ((~_DAT_00102004 & 0x10400000) != 0) {
    gcm_gmult_clmul();
    return;
  }
  gcm_gmult_avx();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_gcm_ghash_4bit(void)

{
  if ((_DAT_00102004 & 2) == 0) {
    gcm_ghash_4bit();
    return;
  }
  if ((~_DAT_00102004 & 0x10400000) != 0) {
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
  uVar2 = _DAT_00102004;
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



void CRYPTO_gcm128_setiv(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[0x2f] = 0;
  if (param_3 == 0xc) {
    uVar7 = 2;
    *param_1 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = 0x1000000;
    *(undefined4 *)(param_1 + 1) = uVar4;
  }
  else {
    puVar1 = param_1 + 8;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    uVar8 = param_3;
    if (0xf < param_3) {
      puVar2 = (undefined8 *)((long)param_2 + (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10);
      do {
        lVar5 = 0;
        do {
          pbVar3 = (byte *)((long)param_1 + lVar5 + 0x40);
          *pbVar3 = *pbVar3 ^ *(byte *)((long)param_2 + lVar5);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x10);
        param_2 = param_2 + 2;
        (*(code *)param_1[0x2e])(puVar1,param_1 + 0xc);
      } while (param_2 != puVar2);
      uVar8 = (ulong)((uint)param_3 & 0xf);
      param_2 = puVar2;
    }
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        pbVar3 = (byte *)((long)param_1 + uVar6 + 0x40);
        *pbVar3 = *pbVar3 ^ *(byte *)((long)param_2 + uVar6);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
      (*(code *)param_1[0x2e])(puVar1,param_1 + 0xc);
    }
    uVar8 = param_3 << 3;
    param_1[9] = param_1[9] ^
                 (uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                  (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                  (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28
                 | param_3 << 0x3b);
    (*(code *)param_1[0x2e])(puVar1,param_1 + 0xc);
    uVar7 = *(uint *)((long)param_1 + 0x4c);
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) + 1;
  }
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  (*(code *)param_1[0x30])(param_1,param_1 + 4,param_1[0x31]);
  *(uint *)((long)param_1 + 0xc) =
       uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  return;
}



undefined8 CRYPTO_gcm128_aad(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 0x30) + param_3;
  if ((0x2000000000000000 < uVar2) || (CARRY8(*(ulong *)(param_1 + 0x30),param_3))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x30) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x17c);
  if (uVar1 != 0) {
    pbVar3 = param_2;
    if (param_3 == 0) goto LAB_00100580;
    do {
      param_2 = pbVar3 + 1;
      param_3 = param_3 - 1;
      *(byte *)(param_1 + 0x40 + (ulong)uVar1) = *(byte *)(param_1 + 0x40 + (ulong)uVar1) ^ *pbVar3;
      uVar1 = uVar1 + 1 & 0xf;
      if (uVar1 == 0) goto LAB_00100598;
      pbVar3 = param_2;
    } while (param_3 != 0);
    if (uVar1 != 0) goto LAB_00100580;
LAB_00100598:
    (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
  }
  uVar2 = param_3 & 0xfffffffffffffff0;
  if (uVar2 != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,uVar2);
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = (uint)param_3;
    uVar2 = 0;
    do {
      pbVar3 = (byte *)(param_1 + 0x40 + uVar2);
      *pbVar3 = *pbVar3 ^ param_2[uVar2];
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
LAB_00100580:
  *(uint *)(param_1 + 0x17c) = uVar1;
  return 0;
}



undefined8 CRYPTO_gcm128_encrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  bool bVar14;
  uint local_78;
  ulong local_70;
  ulong *local_68;
  ulong *local_60;
  
  pcVar1 = *(code **)(param_1 + 0x180);
  uVar6 = param_4 + *(ulong *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  if ((0xfffffffe0 < uVar6) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x38) = uVar6;
  uVar5 = *(uint *)(param_1 + 0x178);
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar10 = *(uint *)(param_1 + 0xc);
    local_78 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar10 = uVar5 & 0xf;
    if (uVar10 != 0) {
      uVar6 = (ulong)uVar5;
      puVar9 = param_3;
      if (param_4 == 0) {
LAB_00100a50:
        *(uint *)(param_1 + 0x178) = uVar5;
        return 0;
      }
      do {
        param_3 = (ulong *)((long)puVar9 + 1);
        uVar11 = uVar10 + 1;
        bVar4 = (byte)*param_2 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar10);
        param_2 = (ulong *)((long)param_2 + 1);
        uVar5 = (int)uVar6 + 1;
        *(byte *)puVar9 = bVar4;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 400 + uVar6) = bVar4;
        uVar10 = uVar11 & 0xf;
        if (uVar10 == 0) goto LAB_001006db;
        uVar6 = (ulong)uVar5;
        puVar9 = param_3;
      } while (param_4 != 0);
      if (uVar10 != 0) goto LAB_00100a50;
LAB_001006db:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,(ulong)uVar5);
      uVar5 = uVar11 & 0xf;
      goto LAB_0010070f;
    }
    bVar14 = uVar5 != 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    local_78 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    bVar14 = true;
    uVar5 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  }
  if ((0xf < param_4) && (bVar14)) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar5);
    uVar5 = 0;
  }
LAB_0010070f:
  if (0xbff < param_4) {
    puVar9 = param_3 + 0x180;
    puVar12 = param_3;
    uVar10 = local_78;
    local_60 = param_2;
    local_68 = param_3;
    local_70 = param_4;
    do {
      do {
        puVar13 = puVar12;
        uVar10 = uVar10 + 1;
        (*pcVar1)(param_1,param_1 + 0x10,uVar2);
        param_3 = puVar13 + 2;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *puVar13 = *param_2 ^ *(ulong *)(param_1 + 0x10);
        puVar13[1] = param_2[1] ^ *(ulong *)(param_1 + 0x18);
        param_2 = param_2 + 2;
        puVar12 = param_3;
      } while (param_3 != puVar9);
      uVar10 = local_78 + 0xc0;
      param_2 = local_60 + 0x180;
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,local_68,0xc00);
      puVar9 = puVar13 + 0x182;
      param_4 = local_70 - 0xc00;
      puVar12 = local_68 + 0x180;
      local_78 = uVar10;
      local_60 = param_2;
      local_68 = local_68 + 0x180;
      local_70 = param_4;
    } while (0xbff < param_4);
  }
  uVar6 = param_4 & 0xfffffffffffffff0;
  if (uVar6 != 0) {
    uVar7 = param_4 - 0x10 >> 4;
    local_78 = local_78 + 1;
    uVar10 = local_78 + (int)uVar7;
    puVar9 = param_2;
    puVar12 = param_3;
    while( true ) {
      (*pcVar1)(param_1,param_1 + 0x10,uVar2);
      *(uint *)(param_1 + 0xc) =
           local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
           local_78 << 0x18;
      *puVar12 = *puVar9 ^ *(ulong *)(param_1 + 0x10);
      puVar12[1] = puVar9[1] ^ *(ulong *)(param_1 + 0x18);
      if (uVar10 == local_78) break;
      local_78 = local_78 + 1;
      puVar9 = puVar9 + 2;
      puVar12 = puVar12 + 2;
    }
    param_4 = (ulong)((uint)param_4 & 0xf);
    lVar8 = uVar7 + 1;
    param_3 = param_3 + lVar8 * 2;
    param_2 = param_2 + lVar8 * 2;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,(long)param_3 - uVar6,uVar6);
  }
  if (param_4 != 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar2);
    local_78 = local_78 + 1;
    *(uint *)(param_1 + 0xc) =
         local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
         local_78 * 0x1000000;
    uVar6 = 0;
    do {
      iVar3 = (int)uVar6;
      bVar4 = *(byte *)((long)param_2 + uVar6) ^ *(byte *)(param_1 + 0x10 + uVar6);
      *(byte *)((long)param_3 + uVar6) = bVar4;
      *(byte *)(param_1 + 400 + (ulong)(uVar5 + iVar3)) = bVar4;
      uVar6 = uVar6 + 1;
    } while (param_4 != uVar6);
    uVar5 = uVar5 + 1 + iVar3;
  }
  *(uint *)(param_1 + 0x178) = uVar5;
  return 0;
}



undefined8 CRYPTO_gcm128_decrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  bool bVar14;
  uint local_70;
  ulong local_68;
  ulong *local_60;
  
  pcVar2 = *(code **)(param_1 + 0x180);
  uVar7 = param_4 + *(ulong *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  if ((0xfffffffe0 < uVar7) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x38) = uVar7;
  uVar6 = *(uint *)(param_1 + 0x178);
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar11 = *(uint *)(param_1 + 0xc);
    local_70 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar11 = uVar6 & 0xf;
    if (uVar11 != 0) {
      uVar7 = (ulong)uVar6;
      puVar9 = param_3;
      if (param_4 == 0) {
LAB_00100e9e:
        *(uint *)(param_1 + 0x178) = uVar6;
        return 0;
      }
      do {
        uVar5 = *param_2;
        param_3 = (ulong *)((long)puVar9 + 1);
        param_2 = (ulong *)((long)param_2 + 1);
        uVar6 = (int)uVar7 + 1;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 400 + uVar7) = (byte)uVar5;
        uVar12 = uVar11 + 1;
        *(byte *)puVar9 = (byte)uVar5 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar11);
        uVar11 = uVar12 & 0xf;
        if (uVar11 == 0) goto LAB_00100b4b;
        uVar7 = (ulong)uVar6;
        puVar9 = param_3;
      } while (param_4 != 0);
      if (uVar11 != 0) goto LAB_00100e9e;
LAB_00100b4b:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,(ulong)uVar6);
      uVar6 = uVar12 & 0xf;
      goto LAB_00100b81;
    }
    bVar14 = uVar6 != 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    uVar6 = *(uint *)(param_1 + 0xc);
    bVar14 = true;
    local_70 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar6 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  }
  if ((0xf < param_4) && (bVar14)) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar6);
    uVar6 = 0;
  }
LAB_00100b81:
  if (0xbff < param_4) {
    puVar9 = param_3 + 0x180;
    local_68 = param_4;
    local_60 = param_2;
    do {
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,local_60,0xc00);
      param_3 = puVar9 + -0x180;
      puVar13 = local_60;
      uVar11 = local_70;
      do {
        puVar10 = param_3;
        uVar11 = uVar11 + 1;
        param_3 = puVar10 + 2;
        (*pcVar2)(param_1,param_1 + 0x10,uVar3);
        *(uint *)(param_1 + 0xc) =
             uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000
        ;
        *puVar10 = *puVar13 ^ *(ulong *)(param_1 + 0x10);
        puVar10[1] = puVar13[1] ^ *(ulong *)(param_1 + 0x18);
        puVar13 = puVar13 + 2;
      } while (param_3 != puVar9);
      param_4 = local_68 - 0xc00;
      puVar9 = puVar10 + 0x182;
      local_70 = local_70 + 0xc0;
      param_2 = local_60 + 0x180;
      local_68 = param_4;
      local_60 = param_2;
    } while (0xbff < param_4);
  }
  if ((param_4 & 0xfffffffffffffff0) != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2);
    local_70 = local_70 + 1;
    uVar7 = param_4 - 0x10 >> 4;
    uVar11 = local_70 + (int)uVar7;
    puVar9 = param_2;
    puVar13 = param_3;
    while( true ) {
      (*pcVar2)(param_1,param_1 + 0x10,uVar3);
      *(uint *)(param_1 + 0xc) =
           local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
           local_70 << 0x18;
      *puVar13 = *puVar9 ^ *(ulong *)(param_1 + 0x10);
      puVar13[1] = puVar9[1] ^ *(ulong *)(param_1 + 0x18);
      if (uVar11 == local_70) break;
      local_70 = local_70 + 1;
      puVar9 = puVar9 + 2;
      puVar13 = puVar13 + 2;
    }
    lVar8 = uVar7 + 1;
    param_4 = (ulong)((uint)param_4 & 0xf);
    param_3 = param_3 + lVar8 * 2;
    param_2 = param_2 + lVar8 * 2;
  }
  if (param_4 != 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar3);
    local_70 = local_70 + 1;
    *(uint *)(param_1 + 0xc) =
         local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
         local_70 * 0x1000000;
    uVar7 = 0;
    do {
      bVar1 = *(byte *)((long)param_2 + uVar7);
      iVar4 = (int)uVar7;
      *(byte *)(param_1 + 400 + (ulong)(uVar6 + iVar4)) = bVar1;
      *(byte *)((long)param_3 + uVar7) = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar7);
      uVar7 = uVar7 + 1;
    } while (param_4 != uVar7);
    uVar6 = uVar6 + 1 + iVar4;
  }
  *(uint *)(param_1 + 0x178) = uVar6;
  return 0;
}



undefined8
CRYPTO_gcm128_encrypt_ctr32(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uVar4 = param_4 + *(ulong *)(param_1 + 0x38);
  if ((0xfffffffe0 < uVar4) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1 + 0x178);
  *(ulong *)(param_1 + 0x38) = uVar4;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar7 = uVar6 & 0xf;
    if (uVar7 != 0) {
      if (param_4 == 0) {
LAB_00100f87:
        *(uint *)(param_1 + 0x178) = uVar6;
        return 0;
      }
      do {
        bVar3 = *param_2;
        param_2 = param_2 + 1;
        bVar3 = bVar3 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar7);
        pbVar8 = param_3 + 1;
        uVar4 = (ulong)uVar6;
        param_4 = param_4 - 1;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + 1 & 0xf;
        *param_3 = bVar3;
        *(byte *)(param_1 + 400 + uVar4) = bVar3;
        param_3 = pbVar8;
        if (uVar7 == 0) goto LAB_00100fd0;
      } while (param_4 != 0);
      if (uVar7 != 0) goto LAB_00100f87;
LAB_00100fd0:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar6);
      goto LAB_00100fea;
    }
    bVar9 = uVar6 != 0;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x170))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    bVar9 = true;
    uVar5 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar6 = 0x10;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  }
  uVar7 = uVar6;
  if ((0xf < param_4) && (bVar9)) {
    uVar7 = 0;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar6);
  }
LAB_00100fea:
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    uVar5 = uVar5 + 0xc0;
    (*param_5)(param_2,param_3,0xc0,uVar1,param_1);
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
    param_3 = param_3 + 0xc00;
  }
  uVar4 = param_4 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar1,param_1);
    uVar5 = uVar5 + (int)(param_4 >> 4);
    param_2 = param_2 + uVar4;
    param_4 = param_4 - uVar4;
    *(uint *)(param_1 + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_3,uVar4);
    param_3 = param_3 + uVar4;
  }
  if (param_4 != 0) {
    uVar5 = uVar5 + 1;
    (**(code **)(param_1 + 0x180))(param_1,param_1 + 0x10,uVar1);
    uVar4 = 0;
    *(uint *)(param_1 + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
    do {
      bVar3 = param_2[uVar4] ^ *(byte *)(param_1 + 0x10 + uVar4);
      iVar2 = (int)uVar4;
      param_3[uVar4] = bVar3;
      uVar4 = uVar4 + 1;
      *(byte *)(param_1 + 400 + (ulong)(uVar7 + iVar2)) = bVar3;
    } while (uVar4 != param_4);
    uVar7 = uVar7 + (int)param_4;
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
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar9;
  int local_48;
  ulong uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar3 = param_4 + *(ulong *)(param_1 + 0x38);
  if ((0xfffffffe0 < uVar3) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x178);
  *(ulong *)(param_1 + 0x38) = uVar3;
  if (*(int *)(param_1 + 0x17c) == 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar7 = uVar4 & 0xf;
    if (uVar7 != 0) {
      if (param_4 == 0) {
LAB_0010126f:
        *(uint *)(param_1 + 0x178) = uVar4;
        return 0;
      }
      do {
        uVar8 = (ulong)uVar7;
        bVar1 = *param_2;
        uVar3 = (ulong)uVar4;
        param_2 = param_2 + 1;
        pbVar6 = param_3 + 1;
        uVar4 = uVar4 + 1;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 400 + uVar3) = bVar1;
        uVar7 = uVar7 + 1 & 0xf;
        *param_3 = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar8);
        param_3 = pbVar6;
        if (uVar7 == 0) goto LAB_001012b8;
      } while (param_4 != 0);
      if (uVar7 != 0) goto LAB_0010126f;
LAB_001012b8:
      (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar4);
      goto LAB_001012d2;
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
    uVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x48);
    bVar9 = true;
    uVar4 = 0x10;
    *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  }
  uVar7 = uVar4;
  if ((0xf < param_4) && (bVar9)) {
    uVar7 = 0;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,uVar4);
  }
LAB_001012d2:
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    uVar5 = uVar5 + 0xc0;
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
    (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
    param_3 = param_3 + 0xc00;
  }
  uVar3 = param_4 & 0xfffffffffffffff0;
  if (uVar3 != 0) {
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_2,uVar3);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    local_48 = (int)(param_4 >> 4);
    uVar5 = uVar5 + local_48;
    *(uint *)(param_1 + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
    param_3 = param_3 + uVar3;
    param_2 = param_2 + uVar3;
    param_4 = param_4 - uVar3;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x180))(param_1,param_1 + 0x10,uVar2);
    uVar5 = uVar5 + 1;
    uVar3 = 0;
    *(uint *)(param_1 + 0xc) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 * 0x1000000;
    do {
      bVar1 = param_2[uVar3];
      *(byte *)(param_1 + 400 + (ulong)(uVar7 + (int)uVar3)) = bVar1;
      param_3[uVar3] = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_4);
    uVar7 = uVar7 + (int)param_4;
  }
  *(uint *)(param_1 + 0x178) = uVar7;
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
      goto LAB_00101505;
    }
    (**(code **)(param_1 + 0x168))(param_1 + 0x40,param_1 + 0x60,param_1 + 400,0x30);
  }
  iVar6 = 0x10;
  uVar7 = 0;
LAB_00101505:
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


