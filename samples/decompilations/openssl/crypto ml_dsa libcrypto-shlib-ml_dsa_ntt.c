
void ossl_ml_dsa_poly_ntt_mult(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar3 = (ulong)*(uint *)(param_1 + lVar4) * (ulong)*(uint *)(param_2 + lVar4);
    uVar1 = (uint)((ulong)(uint)((int)lVar3 * -0x3802001) * 0x7fe001 + lVar3 >> 0x20);
    uVar2 = (int)((uVar1 ^ 0x7fe001 | uVar1 - 0x7fe001 ^ 0x7fe001) ^ uVar1) >> 0x1f;
    *(uint *)(param_3 + lVar4) = uVar2 & uVar1 | uVar1 - 0x7fe001 & ~uVar2;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x400);
  return;
}



void ossl_ml_dsa_poly_ntt(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  
  iVar6 = 8;
  iVar11 = 1;
  uVar8 = 0x100;
  do {
    uVar8 = (int)uVar8 >> 1;
    if (0 < iVar11) {
      iVar3 = uVar8 * 2;
      iVar9 = 0;
      puVar12 = (uint *)(zetas_montgomery + (long)iVar11 * 4);
      puVar13 = (uint *)(param_1 + (ulong)uVar8 * 4);
      uVar14 = uVar8;
      do {
        uVar1 = *puVar12;
        puVar10 = puVar13 + -(ulong)uVar8;
        if (iVar9 < (int)uVar14) {
          do {
            uVar2 = (uint)((ulong)(uint)((int)((ulong)puVar10[(int)uVar8] * (ulong)uVar1) *
                                        -0x3802001) * 0x7fe001 +
                           (ulong)puVar10[(int)uVar8] * (ulong)uVar1 >> 0x20);
            uVar4 = (int)((uVar2 ^ 0x7fe001 | uVar2 - 0x7fe001 ^ 0x7fe001) ^ uVar2) >> 0x1f;
            uVar7 = uVar4 & uVar2 | uVar2 - 0x7fe001 & ~uVar4;
            uVar4 = *puVar10 + uVar7;
            uVar7 = *puVar10 - uVar7;
            uVar2 = uVar7 + 0x7fe001;
            uVar5 = (int)((uVar4 ^ 0x7fe001 | uVar4 - 0x7fe001 ^ 0x7fe001) ^ uVar4) >> 0x1f;
            *puVar10 = uVar4 & uVar5 | uVar4 - 0x7fe001 & ~uVar5;
            uVar4 = (int)((uVar2 ^ 0x7fe001 | uVar7 ^ 0x7fe001) ^ uVar2) >> 0x1f;
            puVar10[(int)uVar8] = uVar2 & uVar4 | uVar7 & ~uVar4;
            puVar10 = puVar10 + 1;
          } while (puVar13 != puVar10);
        }
        iVar9 = iVar9 + iVar3;
        puVar12 = puVar12 + 1;
        uVar14 = uVar14 + iVar3;
        puVar13 = puVar13 + iVar3;
      } while ((uint *)(zetas_montgomery + (long)iVar11 * 8) != puVar12);
    }
    iVar11 = iVar11 * 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void ossl_ml_dsa_poly_ntt_inverse(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  iVar11 = 8;
  uVar7 = 1;
  iVar6 = 0x100;
  do {
    iVar6 = iVar6 >> 1;
    if (iVar6 != 0) {
      iVar13 = 0;
      iVar3 = uVar7 * 2;
      puVar10 = param_1 + uVar7;
      piVar12 = (int *)(zetas_montgomery + (long)(iVar6 + iVar6 + -1) * 4);
      uVar8 = uVar7;
      do {
        iVar2 = *piVar12;
        puVar9 = puVar10 + -(ulong)uVar7;
        if (iVar13 < (int)uVar8) {
          do {
            uVar1 = *puVar9 + puVar9[(int)uVar7];
            lVar5 = (ulong)((*puVar9 + 0x7fe001) - puVar9[(int)uVar7]) * (ulong)(0x7fe001 - iVar2);
            uVar4 = (int)((uVar1 ^ 0x7fe001 | uVar1 - 0x7fe001 ^ 0x7fe001) ^ uVar1) >> 0x1f;
            *puVar9 = uVar1 & uVar4 | uVar1 - 0x7fe001 & ~uVar4;
            uVar1 = (uint)(lVar5 + (ulong)(uint)((int)lVar5 * -0x3802001) * 0x7fe001 >> 0x20);
            uVar4 = (int)((uVar1 ^ 0x7fe001 | uVar1 - 0x7fe001 ^ 0x7fe001) ^ uVar1) >> 0x1f;
            puVar9[(int)uVar7] = uVar4 & uVar1 | uVar1 - 0x7fe001 & ~uVar4;
            puVar9 = puVar9 + 1;
          } while (puVar10 != puVar9);
        }
        iVar13 = iVar13 + iVar3;
        piVar12 = piVar12 + -1;
        uVar8 = uVar8 + iVar3;
        puVar10 = puVar10 + iVar3;
      } while ((int *)(zetas_montgomery + (long)(iVar6 + -1) * 4) != piVar12);
    }
    uVar7 = uVar7 * 2;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puVar10 = param_1;
  do {
    puVar9 = puVar10 + 1;
    uVar7 = (uint)((ulong)(uint)((int)((ulong)*puVar10 * 0xa3fa) * -0x3802001) * 0x7fe001 +
                   (ulong)*puVar10 * 0xa3fa >> 0x20);
    uVar8 = (int)((uVar7 ^ 0x7fe001 | uVar7 - 0x7fe001 ^ 0x7fe001) ^ uVar7) >> 0x1f;
    *puVar10 = uVar8 & uVar7 | uVar7 - 0x7fe001 & ~uVar8;
    puVar10 = puVar9;
  } while (puVar9 != param_1 + 0x100);
  return;
}


