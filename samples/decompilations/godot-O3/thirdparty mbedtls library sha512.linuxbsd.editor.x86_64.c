
void mbedtls_sha512_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x1a] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xd8U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_sha512_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_platform_zeroize(param_1,0xd8);
    return;
  }
  return;
}



void mbedtls_sha512_clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = param_2[0x1a];
  return;
}



undefined8 mbedtls_sha512_starts(undefined1 (*param_1) [16],uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_2 < 2) {
    bVar4 = param_2 != 0;
    uVar1 = 0x6a09e667f3bcc908;
    if (bVar4) {
      uVar1 = 0xcbbb9d5dc1059ed8;
    }
    *(uint *)param_1[0xd] = param_2;
    uVar3 = 0xbb67ae8584caa73b;
    if (bVar4) {
      uVar3 = 0x629a292a367cd507;
    }
    *param_1 = (undefined1  [16])0x0;
    uVar2 = 0x3c6ef372fe94f82b;
    if (bVar4) {
      uVar2 = 0x9159015a3070dd17;
    }
    *(undefined8 *)param_1[1] = uVar1;
    uVar1 = 0xa54ff53a5f1d36f1;
    if (bVar4) {
      uVar1 = 0x152fecd8f70e5939;
    }
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    uVar3 = 0x510e527fade682d1;
    if (bVar4) {
      uVar3 = 0x67332667ffc00b31;
    }
    *(undefined8 *)param_1[2] = uVar2;
    uVar2 = 0x9b05688c2b3e6c1f;
    if (bVar4) {
      uVar2 = 0x8eb44a8768581511;
    }
    *(undefined8 *)(param_1[2] + 8) = uVar1;
    uVar1 = 0x1f83d9abfb41bd6b;
    if (bVar4) {
      uVar1 = 0xdb0c2e0d64f98fa7;
    }
    *(undefined8 *)param_1[3] = uVar3;
    uVar3 = 0x5be0cd19137e2179;
    if (bVar4) {
      uVar3 = 0x47b5481dbefa4fa4;
    }
    *(undefined8 *)(param_1[3] + 8) = uVar2;
    *(undefined8 *)param_1[4] = uVar1;
    *(undefined8 *)(param_1[4] + 8) = uVar3;
    return 0;
  }
  return 0xffffff8b;
}



undefined8 mbedtls_internal_sha512_process(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  NoteGnuProperty_4 *pNVar10;
  NoteGnuProperty_4 *pNVar11;
  long in_FS_OFFSET;
  long local_318;
  long local_310;
  ulong local_308 [89];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  local_308[0x50] = *(ulong *)(param_1 + 0x10);
  local_308[0x51] = *(ulong *)(param_1 + 0x18);
  local_308[0x52] = *(ulong *)(param_1 + 0x20);
  local_308[0x53] = *(ulong *)(param_1 + 0x28);
  local_308[0x54] = *(ulong *)(param_1 + 0x30);
  local_308[0x55] = *(ulong *)(param_1 + 0x38);
  local_308[0x56] = *(ulong *)(param_1 + 0x40);
  local_308[0x57] = *(ulong *)(param_1 + 0x48);
  do {
    uVar3 = *(ulong *)(param_2 + lVar7);
    *(ulong *)((long)local_308 + lVar7) =
         uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
         (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
         (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x80);
  puVar8 = local_308 + 0x10;
  do {
    uVar3 = puVar8[-0xf];
    uVar4 = puVar8[-0xe];
    puVar9 = puVar8 + 2;
    local_308[0xe] =
         puVar8[-7] + puVar8[-0x10] +
         ((uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 << 0x3f | uVar3 >> 1) ^ uVar3 >> 7) +
         (local_308[0xe] >> 6 ^
         (local_308[0xe] << 3 | local_308[0xe] >> 0x3d) ^
         (local_308[0xe] << 0x2d | local_308[0xe] >> 0x13));
    local_308[0xf] =
         puVar8[-6] + puVar8[-0xf] +
         ((uVar4 << 0x38 | uVar4 >> 8) ^ (uVar4 << 0x3f | uVar4 >> 1) ^ uVar4 >> 7) +
         (local_308[0xf] >> 6 ^
         (local_308[0xf] << 3 | local_308[0xf] >> 0x3d) ^
         (local_308[0xf] << 0x2d | local_308[0xf] >> 0x13));
    *puVar8 = local_308[0xe];
    puVar8[1] = local_308[0xf];
    puVar8 = puVar9;
  } while (local_308 + 0x50 != puVar9);
  pNVar10 = (NoteGnuProperty_4 *)&K;
  puVar8 = local_308;
  do {
    lVar7 = ((local_308[0x54] >> 0xe | local_308[0x54] << 0x32) ^
             (local_308[0x54] >> 0x12 | local_308[0x54] << 0x2e) ^
            (local_308[0x54] << 0x17 | local_308[0x54] >> 0x29)) + *puVar8 + *(long *)pNVar10 +
            ((local_308[0x56] ^ local_308[0x55]) & local_308[0x54] ^ local_308[0x56]) +
            local_308[0x57];
    local_308[0x53] = local_308[0x53] + lVar7;
    local_308[0x57] =
         ((local_308[0x50] >> 0x1c | local_308[0x50] << 0x24) ^
          (local_308[0x50] << 0x1e | local_308[0x50] >> 0x22) ^
         (local_308[0x50] << 0x19 | local_308[0x50] >> 0x27)) + lVar7 +
         ((local_308[0x50] | local_308[0x51]) & local_308[0x52] | local_308[0x50] & local_308[0x51])
    ;
    lVar7 = puVar8[1] + *(long *)&pNVar10->type + local_308[0x56] +
            ((local_308[0x54] ^ local_308[0x55]) & local_308[0x53] ^ local_308[0x55]) +
            ((local_308[0x53] >> 0xe | local_308[0x53] << 0x32) ^
             (local_308[0x53] >> 0x12 | local_308[0x53] << 0x2e) ^
            (local_308[0x53] * 0x800000 | local_308[0x53] >> 0x29));
    local_308[0x52] = lVar7 + local_308[0x52];
    local_308[0x56] =
         ((local_308[0x57] >> 0x1c | local_308[0x57] << 0x24) ^
          (local_308[0x57] * 0x40000000 | local_308[0x57] >> 0x22) ^
         (local_308[0x57] * 0x2000000 | local_308[0x57] >> 0x27)) + lVar7 +
         ((local_308[0x57] | local_308[0x50]) & local_308[0x51] | local_308[0x57] & local_308[0x50])
    ;
    lVar7 = puVar8[2] + *(long *)(pNVar10 + 1) + local_308[0x55] +
            ((local_308[0x54] ^ local_308[0x53]) & local_308[0x52] ^ local_308[0x54]) +
            ((local_308[0x52] >> 0xe | local_308[0x52] << 0x32) ^
             (local_308[0x52] >> 0x12 | local_308[0x52] << 0x2e) ^
            (local_308[0x52] * 0x800000 | local_308[0x52] >> 0x29));
    local_308[0x51] = local_308[0x51] + lVar7;
    local_308[0x55] =
         ((local_308[0x56] >> 0x1c | local_308[0x56] << 0x24) ^
          (local_308[0x56] * 0x40000000 | local_308[0x56] >> 0x22) ^
         (local_308[0x56] * 0x2000000 | local_308[0x56] >> 0x27)) + lVar7 +
         ((local_308[0x57] | local_308[0x56]) & local_308[0x50] | local_308[0x57] & local_308[0x56])
    ;
    lVar7 = local_308[0x54] + puVar8[3] + *(long *)&pNVar10[1].type +
            ((local_308[0x53] ^ local_308[0x52]) & local_308[0x51] ^ local_308[0x53]) +
            ((local_308[0x51] >> 0xe | local_308[0x51] << 0x32) ^
             (local_308[0x51] >> 0x12 | local_308[0x51] << 0x2e) ^
            (local_308[0x51] * 0x800000 | local_308[0x51] >> 0x29));
    local_308[0x50] = local_308[0x50] + lVar7;
    local_308[0x54] =
         ((local_308[0x55] >> 0x1c | local_308[0x55] << 0x24) ^
          (local_308[0x55] * 0x40000000 | local_308[0x55] >> 0x22) ^
         (local_308[0x55] * 0x2000000 | local_308[0x55] >> 0x27)) + lVar7 +
         ((local_308[0x56] | local_308[0x55]) & local_308[0x57] | local_308[0x56] & local_308[0x55])
    ;
    lVar7 = puVar8[4] + *(long *)(pNVar10 + 2) + local_308[0x53] +
            ((local_308[0x52] ^ local_308[0x51]) & local_308[0x50] ^ local_308[0x52]) +
            ((local_308[0x50] >> 0xe | local_308[0x50] << 0x32) ^
             (local_308[0x50] >> 0x12 | local_308[0x50] << 0x2e) ^
            (local_308[0x50] * 0x800000 | local_308[0x50] >> 0x29));
    local_308[0x57] = local_308[0x57] + lVar7;
    local_308[0x53] =
         ((local_308[0x54] >> 0x1c | local_308[0x54] << 0x24) ^
          (local_308[0x54] * 0x40000000 | local_308[0x54] >> 0x22) ^
         (local_308[0x54] * 0x2000000 | local_308[0x54] >> 0x27)) + lVar7 +
         ((local_308[0x55] | local_308[0x54]) & local_308[0x56] | local_308[0x55] & local_308[0x54])
    ;
    lVar7 = puVar8[5] + *(long *)&pNVar10[2].type + local_308[0x52] +
            ((local_308[0x51] ^ local_308[0x50]) & local_308[0x57] ^ local_308[0x51]) +
            ((local_308[0x57] >> 0xe | local_308[0x57] << 0x32) ^
             (local_308[0x57] >> 0x12 | local_308[0x57] << 0x2e) ^
            (local_308[0x57] * 0x800000 | local_308[0x57] >> 0x29));
    local_308[0x56] = local_308[0x56] + lVar7;
    local_308[0x52] =
         ((local_308[0x53] >> 0x1c | local_308[0x53] << 0x24) ^
          (local_308[0x53] * 0x40000000 | local_308[0x53] >> 0x22) ^
         (local_308[0x53] * 0x2000000 | local_308[0x53] >> 0x27)) + lVar7 +
         ((local_308[0x54] | local_308[0x53]) & local_308[0x55] | local_308[0x54] & local_308[0x53])
    ;
    lVar7 = puVar8[6] + *(long *)(pNVar10 + 3) + local_308[0x51] +
            ((local_308[0x50] ^ local_308[0x57]) & local_308[0x56] ^ local_308[0x50]) +
            ((local_308[0x56] >> 0xe | local_308[0x56] << 0x32) ^
             (local_308[0x56] >> 0x12 | local_308[0x56] << 0x2e) ^
            (local_308[0x56] * 0x800000 | local_308[0x56] >> 0x29));
    local_308[0x55] = local_308[0x55] + lVar7;
    pNVar11 = pNVar10 + 4;
    local_308[0x51] =
         ((local_308[0x52] >> 0x1c | local_308[0x52] << 0x24) ^
          (local_308[0x52] * 0x40000000 | local_308[0x52] >> 0x22) ^
         (local_308[0x52] * 0x2000000 | local_308[0x52] >> 0x27)) + lVar7 +
         ((local_308[0x53] | local_308[0x52]) & local_308[0x54] | local_308[0x53] & local_308[0x52])
    ;
    local_318 = puVar8[7] + *(long *)&pNVar10[3].type + local_308[0x50] +
                ((local_308[0x57] ^ local_308[0x56]) & local_308[0x55] ^ local_308[0x57]) +
                ((local_308[0x55] >> 0xe | local_308[0x55] << 0x32) ^
                 (local_308[0x55] >> 0x12 | local_308[0x55] << 0x2e) ^
                (local_308[0x55] * 0x800000 | local_308[0x55] >> 0x29));
    local_310 = ((local_308[0x51] >> 0x1c | local_308[0x51] << 0x24) ^
                 (local_308[0x51] * 0x40000000 | local_308[0x51] >> 0x22) ^
                (local_308[0x51] * 0x2000000 | local_308[0x51] >> 0x27)) +
                ((local_308[0x52] | local_308[0x51]) & local_308[0x53] |
                local_308[0x52] & local_308[0x51]);
    local_308[0x54] = local_308[0x54] + local_318;
    local_308[0x50] = local_318 + local_310;
    pNVar10 = pNVar11;
    puVar8 = puVar8 + 8;
  } while (pNVar11 != &NoteGnuProperty_4_00101740);
  lVar7 = 0;
  do {
    plVar1 = (long *)(param_1 + 0x10 + lVar7);
    lVar5 = plVar1[1];
    lVar6 = *(long *)((long)local_308 + lVar7 + 0x288);
    plVar2 = (long *)(param_1 + 0x10 + lVar7);
    *plVar2 = *plVar1 + *(long *)((long)(local_308 + 0x50) + lVar7);
    plVar2[1] = lVar5 + lVar6;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  mbedtls_platform_zeroize(&local_318,0x2d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_sha512_update(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  bool bVar11;
  byte bVar12;
  ulong uVar10;
  
  bVar12 = 0;
  if (param_3 == 0) {
    return 0;
  }
  uVar5 = *param_1;
  uVar9 = (uint)uVar5 & 0x7f;
  uVar10 = (ulong)uVar9;
  uVar6 = 0x80 - uVar9;
  *param_1 = uVar5 + param_3;
  uVar7 = (ulong)uVar6;
  if (CARRY8(uVar5,param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if (((uVar5 & 0x7f) == 0) || (param_3 < uVar7)) {
    if (0x7f < param_3) goto LAB_001008d0;
  }
  else {
    puVar2 = (undefined8 *)((ulong)uVar9 + (long)(param_1 + 10));
    if (uVar6 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 != 0) && (*(undefined1 *)puVar2 = *(undefined1 *)param_2, (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)puVar2 + (uVar7 - 2)) = *(undefined2 *)((long)param_2 + (uVar7 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)puVar2 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar2 + (uVar7 - 4)) = *(undefined4 *)((long)param_2 + (uVar7 - 4));
      }
    }
    else {
      *puVar2 = *param_2;
      *(undefined8 *)((long)puVar2 + (uVar7 - 8)) = *(undefined8 *)((long)param_2 + (uVar7 - 8));
      lVar3 = (long)puVar2 - (long)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
      puVar8 = (undefined8 *)((long)param_2 - lVar3);
      puVar2 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
      for (uVar5 = (ulong)(uVar6 + (int)lVar3 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    uVar4 = mbedtls_internal_sha512_process(param_1,param_1 + 10);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    param_2 = (undefined8 *)((long)param_2 + uVar7);
    uVar10 = 0;
    for (param_3 = param_3 - uVar7; 0x7f < param_3; param_3 = param_3 - uVar7) {
LAB_001008d0:
      uVar5 = 0;
      do {
        iVar1 = mbedtls_internal_sha512_process(param_1,(undefined1 *)((long)param_2 + uVar5));
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar7 = uVar5 + 0x80;
        bVar11 = (param_3 - 0x80 & 0xffffffffffffff80) != uVar5;
        uVar5 = uVar7;
      } while (bVar11);
      param_2 = (undefined8 *)((long)param_2 + uVar7);
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  puVar2 = (undefined8 *)((long)param_1 + uVar10 + 0x50);
  uVar6 = (uint)param_3;
  uVar5 = param_3 & 0xffffffff;
  if (7 < uVar6) {
    *puVar2 = *param_2;
    *(undefined8 *)((long)puVar2 + ((param_3 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)param_2 + ((param_3 & 0xffffffff) - 8));
    lVar3 = (long)puVar2 - (long)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 - lVar3);
    puVar2 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    for (uVar5 = (ulong)(uVar6 + (int)lVar3 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = *puVar8;
      puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
      puVar2 = puVar2 + (ulong)bVar12 * -2 + 1;
    }
    return 0;
  }
  if ((param_3 & 4) == 0) {
    if ((uVar6 != 0) && (*(undefined1 *)puVar2 = *(undefined1 *)param_2, (param_3 & 2) != 0)) {
      *(undefined2 *)((long)puVar2 + (uVar5 - 2)) = *(undefined2 *)((long)param_2 + (uVar5 - 2));
      return 0;
    }
    return 0;
  }
  *(undefined4 *)puVar2 = *(undefined4 *)param_2;
  *(undefined4 *)((long)puVar2 + (uVar5 - 4)) = *(undefined4 *)((long)param_2 + (uVar5 - 4));
  return 0;
}



int mbedtls_sha512_finish(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  
  bVar9 = 0;
  uVar3 = (uint)*param_1 & 0x7f;
  uVar6 = uVar3 + 1;
  *(undefined1 *)((long)param_1 + (ulong)uVar3 + 0x50) = 0x80;
  if (uVar6 < 0x71) {
    uVar3 = 0x70 - uVar6;
    puVar5 = (undefined8 *)((long)param_1 + (ulong)uVar6 + 0x50);
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar5 = 0, (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar5 + ((ulong)uVar3 - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar5 = 0;
        *(undefined4 *)((long)puVar5 + ((ulong)uVar3 - 4)) = 0;
      }
    }
    else {
      *puVar5 = 0;
      *(undefined8 *)((long)puVar5 + ((ulong)uVar3 - 8)) = 0;
      uVar7 = (ulong)(uVar3 + ((int)puVar5 -
                              (int)(undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)) >> 3);
      puVar5 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else {
    puVar1 = param_1 + 10;
    uVar3 = 0x80 - uVar6;
    puVar5 = (undefined8 *)((ulong)uVar6 + (long)puVar1);
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar5 = 0, (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar5 + ((ulong)uVar3 - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar5 = 0;
        *(undefined4 *)((long)puVar5 + ((ulong)uVar3 - 4)) = 0;
      }
    }
    else {
      *puVar5 = 0;
      *(undefined8 *)((long)puVar5 + ((ulong)uVar3 - 8)) = 0;
      uVar3 = uVar3 + ((int)puVar5 - (int)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
      if (7 < uVar3) {
        uVar6 = 0;
        do {
          uVar7 = (ulong)uVar6;
          uVar6 = uVar6 + 8;
          *(undefined8 *)(((ulong)(puVar5 + 1) & 0xfffffffffffffff8) + uVar7) = 0;
        } while (uVar6 < uVar3);
      }
    }
    iVar4 = mbedtls_internal_sha512_process(param_1,puVar1);
    if (iVar4 != 0) goto LAB_00100b04;
    param_1[10] = 0;
    param_1[0x17] = 0;
    puVar5 = (undefined8 *)((ulong)(param_1 + 0xb) & 0xfffffffffffffff8);
    for (uVar7 = (ulong)(((int)puVar1 -
                         (int)(undefined8 *)((ulong)(param_1 + 0xb) & 0xfffffffffffffff8)) + 0x70U
                        >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar9 * -2 + 1;
    }
  }
  uVar7 = *param_1;
  uVar8 = uVar7 << 3;
  uVar2 = param_1[1] << 3;
  param_1[0x19] =
       uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
       (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
       (uVar8 & 0xff00) << 0x28 | uVar7 << 0x3b;
  param_1[0x18] =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | (uVar7 >> 0x3d | uVar2) << 0x38;
  iVar4 = mbedtls_internal_sha512_process(param_1,param_1 + 10);
  if (iVar4 == 0) {
    uVar7 = param_1[2];
    *param_2 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
               | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
               (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    uVar7 = param_1[3];
    param_2[1] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
    uVar7 = param_1[4];
    param_2[2] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
    uVar7 = param_1[5];
    param_2[3] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
    uVar7 = param_1[6];
    param_2[4] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
    uVar7 = param_1[7];
    param_2[5] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
    if ((uint)param_1[0x1a] == 0) {
      uVar7 = param_1[8];
      param_2[6] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                   (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                   (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                   | uVar7 << 0x38;
      uVar7 = param_1[9];
      param_2[7] = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                   (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                   (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                   | uVar7 << 0x38;
    }
  }
LAB_00100b04:
  mbedtls_platform_zeroize(param_1,0xd8);
  return iVar4;
}



int mbedtls_sha512_common_self_test(int param_1,int param_2)

{
  int iVar1;
  undefined8 *__ptr;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long in_FS_OFFSET;
  bool bVar6;
  byte bVar7;
  undefined *local_188;
  undefined1 *local_180;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  int local_98;
  undefined1 local_88 [72];
  long local_40;
  
  bVar7 = 0;
  local_180 = sha512_test_sum;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    local_180 = sha384_test_sum;
  }
  __ptr = (undefined8 *)calloc(0x400,1);
  if (__ptr == (undefined8 *)0x0) {
    if (param_1 != 0) {
      puts("Buffer allocation failed");
    }
    iVar1 = 1;
  }
  else {
    lVar3 = 0;
    puVar4 = (undefined8 *)local_168;
    for (lVar2 = 0x1b; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
    }
    local_188 = &sha_test_buf;
    do {
      if (param_1 != 0) {
        __printf_chk(2,"  SHA-%d test #%d: ",(4 - param_2) * 0x80,(int)lVar3 + 1);
      }
      bVar6 = param_2 == 0;
      local_158 = 0xcbbb9d5dc1059ed8;
      if (bVar6) {
        local_158 = 0x6a09e667f3bcc908;
      }
      local_168 = (undefined1  [16])0x0;
      local_150 = 0x629a292a367cd507;
      if (bVar6) {
        local_150 = 0xbb67ae8584caa73b;
      }
      local_148 = 0x3c6ef372fe94f82b;
      if (!bVar6) {
        local_148 = 0x9159015a3070dd17;
      }
      local_140 = 0xa54ff53a5f1d36f1;
      if (!bVar6) {
        local_140 = 0x152fecd8f70e5939;
      }
      local_138 = 0x510e527fade682d1;
      if (!bVar6) {
        local_138 = 0x67332667ffc00b31;
      }
      local_130 = 0x9b05688c2b3e6c1f;
      if (!bVar6) {
        local_130 = 0x8eb44a8768581511;
      }
      local_128 = 0x1f83d9abfb41bd6b;
      if (!bVar6) {
        local_128 = 0xdb0c2e0d64f98fa7;
      }
      local_120 = 0x5be0cd19137e2179;
      if (!bVar6) {
        local_120 = 0x47b5481dbefa4fa4;
      }
      local_98 = param_2;
      if (lVar3 != 2) {
        iVar1 = mbedtls_sha512_update(local_168,local_188,(&sha_test_buflen)[lVar3]);
        if (iVar1 == 0) goto LAB_00100e0d;
LAB_00100f68:
        if (param_1 != 0) {
          puts("failed");
        }
        goto LAB_00100e71;
      }
      iVar5 = 1000;
      puVar4 = __ptr;
      for (lVar2 = 0x7d; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0x6161616161616161;
        puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
      }
      do {
        iVar1 = mbedtls_sha512_update(local_168,__ptr,1000);
        if (iVar1 != 0) goto LAB_00100f68;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
LAB_00100e0d:
      iVar1 = mbedtls_sha512_finish(local_168,local_88);
      if (iVar1 != 0) goto LAB_00100f68;
      iVar1 = memcmp(local_88,local_180,(ulong)(uint)((4 - param_2) * 0x10));
      if (iVar1 != 0) {
        iVar1 = 1;
        goto LAB_00100f68;
      }
      if (param_1 != 0) {
        puts("passed");
      }
      lVar3 = lVar3 + 1;
      local_180 = local_180 + 0x40;
      local_188 = local_188 + 0x71;
    } while (lVar3 != 3);
    iVar1 = 0;
    if (param_1 != 0) {
      putchar(10);
    }
LAB_00100e71:
    mbedtls_platform_zeroize(local_168,0xd8);
    free(__ptr);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int mbedtls_sha512(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 auStack_108 [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 2) {
    bVar5 = param_4 != 0;
    uVar4 = 0x6a09e667f3bcc908;
    puVar3 = auStack_108;
    for (lVar2 = 0x1b; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    auStack_108[3] = 0xbb67ae8584caa73b;
    local_e8 = 0x3c6ef372fe94f82b;
    if (bVar5) {
      uVar4 = 0xcbbb9d5dc1059ed8;
    }
    local_e0 = 0xa54ff53a5f1d36f1;
    local_d8 = 0x510e527fade682d1;
    if (bVar5) {
      auStack_108[3] = 0x629a292a367cd507;
    }
    local_d0 = 0x9b05688c2b3e6c1f;
    if (bVar5) {
      local_e8 = 0x9159015a3070dd17;
    }
    local_c8 = 0x1f83d9abfb41bd6b;
    if (bVar5) {
      local_e0 = 0x152fecd8f70e5939;
      local_d8 = 0x67332667ffc00b31;
      local_d0 = 0x8eb44a8768581511;
      local_c8 = 0xdb0c2e0d64f98fa7;
    }
    local_c0 = 0x5be0cd19137e2179;
    if (bVar5) {
      local_c0 = 0x47b5481dbefa4fa4;
    }
    auStack_108[2] = uVar4;
    local_38 = param_4;
    iVar1 = mbedtls_sha512_update(auStack_108,param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = mbedtls_sha512_finish(auStack_108,param_3);
    }
    mbedtls_platform_zeroize(auStack_108,0xd8);
  }
  else {
    iVar1 = -0x75;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_sha512_self_test(undefined8 param_1)

{
  mbedtls_sha512_common_self_test(param_1,0);
  return;
}



void mbedtls_sha384_self_test(undefined8 param_1)

{
  mbedtls_sha512_common_self_test(param_1,1);
  return;
}


