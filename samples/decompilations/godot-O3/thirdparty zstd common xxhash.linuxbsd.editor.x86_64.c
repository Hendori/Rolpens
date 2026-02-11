
uint XXH32_finalize(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar5 = (ulong)(param_3 & 0xf);
  pbVar6 = param_2;
  if ((param_3 & 0xc) != 0) {
    pbVar6 = param_2 + (uVar5 - 4 & 0xfffffffffffffffc) + 4;
    do {
      iVar3 = *(int *)param_2;
      param_2 = param_2 + 4;
      param_1 = iVar3 * -0x3d4d51c3 + param_1;
      param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
    } while (param_2 != pbVar6);
    uVar5 = (ulong)(param_3 & 3);
  }
  if (uVar5 != 0) {
    pbVar1 = pbVar6 + uVar5;
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      param_1 = (uint)bVar2 * 0x165667b1 + param_1;
      param_1 = (param_1 * 0x800 | param_1 >> 0x15) * -0x61c8864f;
    } while (pbVar6 != pbVar1);
  }
  uVar4 = (param_1 >> 0xf ^ param_1) * -0x7a143589;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51c3;
  return uVar4 ^ uVar4 >> 0x10;
}



ulong XXH64_finalize(ulong param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar4 = (ulong)(param_3 & 0x1f);
  puVar5 = param_2;
  if ((param_3 & 0x18) != 0) {
    puVar5 = (uint *)((long)param_2 + (uVar4 - 8 & 0xfffffffffffffff8) + 8);
    do {
      lVar3 = *(long *)param_2;
      param_2 = param_2 + 2;
      param_1 = (lVar3 * -0x6c158a5880000000 | (ulong)(lVar3 * -0x3d4d51c2d82b14b1) >> 0x21) *
                -0x61c8864e7a143579 ^ param_1;
      param_1 = (param_1 << 0x1b | param_1 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    } while (param_2 != puVar5);
    uVar4 = (ulong)(param_3 & 7);
  }
  if (3 < uVar4) {
    uVar2 = *puVar5;
    uVar4 = uVar4 - 4;
    puVar5 = puVar5 + 1;
    param_1 = (ulong)uVar2 * -0x61c8864e7a143579 ^ param_1;
    param_1 = (param_1 << 0x17 | param_1 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
  }
  if (uVar4 != 0) {
    puVar1 = (uint *)((long)puVar5 + uVar4);
    do {
      uVar2 = *puVar5;
      puVar5 = (uint *)((long)puVar5 + 1);
      param_1 = (ulong)(byte)uVar2 * 0x27d4eb2f165667c5 ^ param_1;
      param_1 = (param_1 << 0xb | param_1 >> 0x35) * -0x61c8864e7a143579;
    } while (puVar5 != puVar1);
  }
  uVar4 = (param_1 >> 0x21 ^ param_1) * -0x3d4d51c2d82b14b1;
  uVar4 = (uVar4 ^ uVar4 >> 0x1d) * 0x165667b19e3779f9;
  return uVar4 ^ uVar4 >> 0x20;
}



undefined8 ZSTD_XXH_versionNumber(void)

{
  return 0x322;
}



void ZSTD_XXH32(int *param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((param_1 == (int *)0x0) || (param_2 < 0x10)) {
    iVar5 = param_3 + 0x165667b1;
  }
  else {
    piVar1 = (int *)((long)param_1 + (param_2 - 0xf));
    iVar5 = param_3 + 0x24234428;
    uVar7 = param_3 + 0x85ebca77;
    uVar10 = param_3 + 0x61c8864f;
    piVar2 = param_1;
    do {
      piVar3 = piVar2 + 4;
      uVar6 = *piVar2 * -0x7a143589 + iVar5;
      uVar6 = uVar6 * 0x2000 | uVar6 >> 0x13;
      iVar5 = uVar6 * -0x61c8864f;
      uVar7 = piVar2[1] * -0x7a143589 + uVar7;
      uVar8 = uVar7 * 0x2000 | uVar7 >> 0x13;
      uVar7 = uVar8 * -0x61c8864f;
      param_3 = piVar2[2] * -0x7a143589 + param_3;
      uVar9 = param_3 * 0x2000 | param_3 >> 0x13;
      param_3 = uVar9 * -0x61c8864f;
      uVar10 = piVar2[3] * -0x7a143589 + uVar10;
      uVar11 = uVar10 * 0x2000 | uVar10 >> 0x13;
      uVar10 = uVar11 * -0x61c8864f;
      piVar2 = piVar3;
    } while (piVar3 < piVar1);
    lVar4 = (param_2 - 0x10 & 0xfffffffffffffff0) + 0x10;
    if (piVar1 < (int *)((long)param_1 + 1U)) {
      lVar4 = 0x10;
    }
    param_1 = (int *)((long)param_1 + lVar4);
    iVar5 = (uVar9 * 0x779b1000 | param_3 >> 0x14) +
            (uVar6 * 0x3c6ef362 | (uint)(iVar5 < 0)) + (uVar8 * 0x1bbcd880 | uVar7 >> 0x19) +
            (uVar10 >> 0xe | uVar11 * -0x193c0000);
  }
  XXH32_finalize(iVar5 + (uint)param_2,param_1,(uint)param_2 & 0xf,1);
  return;
}



void ZSTD_XXH32_createState(void)

{
  malloc(0x30);
  return;
}



undefined8 ZSTD_XXH32_freeState(void *param_1)

{
  free(param_1);
  return 0;
}



void ZSTD_XXH32_copyState(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ZSTD_XXH32_reset(undefined1 (*param_1) [16],int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  iVar1 = param_2 + _UNK_00100b84;
  iVar2 = param_2 + _UNK_00100b88;
  iVar3 = param_2 + _UNK_00100b8c;
  *(int *)(*param_1 + 8) = param_2 + __LC0;
  *(int *)(*param_1 + 0xc) = iVar1;
  *(int *)param_1[1] = iVar2;
  *(int *)(param_1[1] + 4) = iVar3;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ZSTD_XXH32_update(uint *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)((long)param_2 + param_3);
  uVar4 = *param_1 + (int)param_3;
  *param_1 = uVar4;
  uVar5 = param_1[10];
  uVar8 = (ulong)uVar5;
  param_1[1] = param_1[1] | (uint)(0xf < param_3 || 0xf < uVar4);
  if (uVar8 + param_3 < 0x10) {
    memcpy((void *)((long)param_1 + uVar8 + 0x18),param_2,param_3);
    param_1[10] = param_1[10] + (int)param_3;
    return 0;
  }
  if (uVar5 == 0) {
    if (piVar1 + -4 < param_2) goto LAB_0010042e;
  }
  else {
    memcpy((void *)((long)param_1 + uVar8 + 0x18),param_2,(ulong)(0x10 - uVar5));
    uVar6 = _UNK_00100b98;
    uVar4 = __LC2;
    uVar5 = param_1[10];
    param_1[10] = 0;
    param_2 = (int *)((long)param_2 + (ulong)(0x10 - uVar5));
    uVar5 = (int)((*(ulong *)(param_1 + 6) & 0xffffffff) * (ulong)uVar4) + param_1[2];
    uVar4 = (int)((*(ulong *)(param_1 + 6) >> 0x20) * (ulong)uVar4) + param_1[3];
    uVar7 = (int)((*(ulong *)(param_1 + 8) & 0xffffffff) * (ulong)uVar6) + param_1[4];
    uVar6 = (int)((*(ulong *)(param_1 + 8) >> 0x20) * (ulong)uVar6) + param_1[5];
    param_1[2] = (uVar5 >> 0x13 | uVar5 * 0x2000) * -0x61c8864f;
    param_1[3] = (uVar4 >> 0x13 | uVar4 * 0x2000) * -0x61c8864f;
    param_1[4] = (uVar7 >> 0x13 | uVar7 * 0x2000) * -0x61c8864f;
    param_1[5] = (uVar6 >> 0x13 | uVar6 * 0x2000) * -0x61c8864f;
    if (piVar1 + -4 < param_2) goto LAB_0010042e;
  }
  uVar5 = param_1[2];
  uVar4 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  piVar2 = param_2;
  do {
    piVar3 = piVar2 + 4;
    uVar5 = *piVar2 * -0x7a143589 + uVar5;
    uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x13) * -0x61c8864f;
    param_1[2] = uVar5;
    uVar4 = piVar2[1] * -0x7a143589 + uVar4;
    uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x13) * -0x61c8864f;
    param_1[3] = uVar4;
    uVar6 = piVar2[2] * -0x7a143589 + uVar6;
    uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x13) * -0x61c8864f;
    param_1[4] = uVar6;
    uVar7 = piVar2[3] * -0x7a143589 + uVar7;
    uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x13) * -0x61c8864f;
    param_1[5] = uVar7;
    piVar2 = piVar3;
  } while (piVar3 <= piVar1 + -4);
  param_2 = (int *)((long)param_2 +
                   ((long)(piVar1 + -4) - (long)param_2 & 0xfffffffffffffff0U) + 0x10);
LAB_0010042e:
  if (param_2 < piVar1) {
    memcpy(param_1 + 6,param_2,(long)piVar1 - (long)param_2);
    param_1[10] = (uint)((long)piVar1 - (long)param_2);
    return 0;
  }
  return 0;
}



void ZSTD_XXH32_digest(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[4];
  iVar2 = uVar1 + 0x165667b1;
  if (param_1[1] != 0) {
    iVar2 = (param_1[2] << 1 | (uint)(param_1[2] < 0)) +
            (param_1[3] << 7 | (uint)param_1[3] >> 0x19) + (uVar1 << 0xc | uVar1 >> 0x14) +
            ((uint)param_1[5] >> 0xe | param_1[5] << 0x12);
  }
  XXH32_finalize(iVar2 + *param_1,param_1 + 6,param_1[10],0);
  return;
}



void ZSTD_XXH32_canonicalFromHash(uint *param_1,uint param_2)

{
  *param_1 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  return;
}



uint ZSTD_XXH32_hashFromCanonical(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



void ZSTD_XXH64(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((param_1 == (long *)0x0) || (param_2 < 0x20)) {
    lVar5 = param_3 + 0x27d4eb2f165667c5;
  }
  else {
    plVar1 = (long *)((long)param_1 + (param_2 - 0x1f));
    lVar5 = param_3 + 0x60ea27eeadc0b5d6;
    uVar3 = param_3 + 0xc2b2ae3d27d4eb4f;
    uVar11 = param_3 + 0x61c8864e7a143579;
    plVar6 = param_1;
    do {
      plVar7 = plVar6 + 4;
      uVar9 = *plVar6 * -0x3d4d51c2d82b14b1 + lVar5;
      uVar3 = plVar6[1] * -0x3d4d51c2d82b14b1 + uVar3;
      uVar10 = uVar9 * 0x80000000 | uVar9 >> 0x21;
      param_3 = plVar6[2] * -0x3d4d51c2d82b14b1 + param_3;
      uVar4 = uVar3 * 0x80000000 | uVar3 >> 0x21;
      uVar11 = plVar6[3] * -0x3d4d51c2d82b14b1 + uVar11;
      uVar9 = param_3 * 0x80000000 | param_3 >> 0x21;
      lVar5 = uVar10 * -0x61c8864e7a143579;
      uVar2 = uVar11 * 0x80000000 | uVar11 >> 0x21;
      uVar3 = uVar4 * -0x61c8864e7a143579;
      param_3 = uVar9 * -0x61c8864e7a143579;
      uVar11 = uVar2 * -0x61c8864e7a143579;
      plVar6 = plVar7;
    } while (plVar7 < plVar1);
    lVar8 = (param_2 - 0x20 & 0xffffffffffffffe0) + 0x20;
    if (plVar1 < (long *)((long)param_1 + 1U)) {
      lVar8 = 0x20;
    }
    param_1 = (long *)((long)param_1 + lVar8);
    lVar5 = (((uVar9 * -0x784349ab80000000 | uVar9 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579 ^
             ((uVar4 * -0x784349ab80000000 | uVar4 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579 ^
             ((uVar10 * 0x3c6ef3630bd7950e | (ulong)(lVar5 < 0)) +
              (uVar4 * 0x1bbcd8c2f5e54380 | uVar3 >> 0x39) +
              (uVar9 * 0x779b185ebca87000 | param_3 >> 0x34) +
              (uVar2 * -0x1939e850d5e40000 | uVar11 >> 0x2e) ^
             (uVar10 * -0x784349ab80000000 | uVar10 * -0x210ca4fef0869357 >> 0x21) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579
             + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar2 * -0x784349ab80000000 | uVar2 * -0x210ca4fef0869357 >> 0x21) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  XXH64_finalize(lVar5 + param_2,param_1,param_2,1);
  return;
}



void ZSTD_XXH64_createState(void)

{
  malloc(0x58);
  return;
}



undefined8 ZSTD_XXH64_freeState(void *param_1)

{
  free(param_1);
  return 0;
}



void ZSTD_XXH64_copyState(undefined8 *param_1,undefined8 *param_2)

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
  param_1[10] = param_2[10];
  return;
}



undefined8 ZSTD_XXH64_reset(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[10] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x58U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[3] = param_2;
  param_1[1] = param_2 + 0x60ea27eeadc0b5d6;
  param_1[2] = param_2 + -0x3d4d51c2d82b14b1;
  param_1[4] = param_2 + 0x61c8864e7a143579;
  return 0;
}



undefined8 ZSTD_XXH64_update(long *param_1,long *param_2,size_t param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)((long)param_2 + param_3);
  *param_1 = *param_1 + param_3;
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = (ulong)uVar2;
  if (0x1f < uVar5 + param_3) {
    if (uVar2 == 0) {
      plVar3 = param_2 + 4;
    }
    else {
      memcpy((void *)((long)param_1 + uVar5 + 0x28),param_2,(ulong)(0x20 - uVar2));
      param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)param_1[9]));
      *(undefined4 *)(param_1 + 9) = 0;
      uVar5 = param_1[5] * -0x3d4d51c2d82b14b1 + param_1[1];
      param_1[1] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
      uVar5 = param_1[6] * -0x3d4d51c2d82b14b1 + param_1[2];
      param_1[2] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
      uVar9 = param_1[7] * -0x3d4d51c2d82b14b1 + param_1[3];
      uVar5 = param_1[8] * -0x3d4d51c2d82b14b1 + param_1[4];
      param_1[3] = (uVar9 * 0x80000000 | uVar9 >> 0x21) * -0x61c8864e7a143579;
      param_1[4] = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
      plVar3 = param_2 + 4;
    }
    if (plVar3 <= plVar1) {
      lVar6 = param_1[1];
      lVar10 = param_1[2];
      lVar7 = param_1[3];
      lVar8 = param_1[4];
      plVar3 = param_2;
      do {
        plVar4 = plVar3 + 4;
        uVar5 = *plVar3 * -0x3d4d51c2d82b14b1 + lVar6;
        lVar6 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
        param_1[1] = lVar6;
        uVar5 = plVar3[1] * -0x3d4d51c2d82b14b1 + lVar10;
        lVar10 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
        param_1[2] = lVar10;
        uVar5 = plVar3[2] * -0x3d4d51c2d82b14b1 + lVar7;
        lVar7 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
        param_1[3] = lVar7;
        uVar5 = plVar3[3] * -0x3d4d51c2d82b14b1 + lVar8;
        lVar8 = (uVar5 * 0x80000000 | uVar5 >> 0x21) * -0x61c8864e7a143579;
        param_1[4] = lVar8;
        plVar3 = plVar4;
      } while (plVar4 <= plVar1 + -4);
      param_2 = (long *)((long)param_2 +
                        ((long)(plVar1 + -4) - (long)param_2 & 0xffffffffffffffe0U) + 0x20);
    }
    if (plVar1 <= param_2) {
      return 0;
    }
    memcpy(param_1 + 5,param_2,(long)plVar1 - (long)param_2);
    *(int *)(param_1 + 9) = (int)((long)plVar1 - (long)param_2);
    return 0;
  }
  memcpy((void *)((long)param_1 + uVar5 + 0x28),param_2,param_3);
  *(int *)(param_1 + 9) = (int)param_1[9] + (int)param_3;
  return 0;
}



void ZSTD_XXH64_digest(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  lVar6 = uVar1 + 0x27d4eb2f165667c5;
  if (0x1f < uVar2) {
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[4];
    lVar6 = ((uVar5 * -0x6c158a5880000000 | uVar5 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            ((uVar1 * -0x6c158a5880000000 | uVar1 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            (((uVar4 << 7 | uVar4 >> 0x39) + (uVar3 << 1 | (ulong)((long)uVar3 < 0)) +
              (uVar1 << 0xc | uVar1 >> 0x34) + (uVar5 << 0x12 | uVar5 >> 0x2e) ^
             (uVar3 * -0x6c158a5880000000 | uVar3 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar4 * -0x6c158a5880000000 | uVar4 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 +
            0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  XXH64_finalize(lVar6 + uVar2,param_1 + 5,uVar2,0);
  return;
}



void ZSTD_XXH64_canonicalFromHash(ulong *param_1,ulong param_2)

{
  *param_1 = param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 |
             (param_2 & 0xff0000000000) >> 0x18 | (param_2 & 0xff00000000) >> 8 |
             (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 | (param_2 & 0xff00) << 0x28
             | param_2 << 0x38;
  return;
}



ulong ZSTD_XXH64_hashFromCanonical(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  return uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
}


