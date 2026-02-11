
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 vorbis_lpc_from_data(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  double dVar2;
  long lVar3;
  undefined1 *puVar4;
  double dVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  double *pdVar9;
  ulong uVar10;
  long lVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  undefined1 *puVar15;
  undefined1 *puVar17;
  double *pdVar19;
  int iVar20;
  ulong uVar21;
  double *pdVar22;
  double *pdVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_48 [8];
  double local_40;
  long local_30;
  undefined1 *puVar16;
  undefined1 *puVar18;
  
  iVar1 = param_4 + 1;
  puVar15 = auStack_48;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = (long)iVar1 * 8;
  puVar16 = auStack_48;
  puVar17 = auStack_48;
  while (puVar16 != auStack_48 + -(lVar6 + 0x17U & 0xfffffffffffff000)) {
    puVar15 = puVar17 + -0x1000;
    *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
    puVar16 = puVar17 + -0x1000;
    puVar17 = puVar17 + -0x1000;
  }
  uVar24 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
  lVar3 = -uVar24;
  puVar17 = puVar15 + lVar3;
  puVar18 = puVar15 + lVar3;
  if (uVar24 != 0) {
    *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
  }
  uVar24 = (ulong)(int)param_4;
  pdVar19 = (double *)((ulong)(puVar15 + lVar3 + 0xf) & 0xfffffffffffffff0);
  puVar4 = puVar15 + lVar3;
  while (puVar18 != puVar15 + (lVar3 - (lVar6 + 0xfU & 0xfffffffffffff000))) {
    puVar17 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar18 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  uVar21 = (ulong)((uint)(lVar6 + 0xfU) & 0xff0);
  lVar3 = -uVar21;
  if (uVar21 != 0) {
    *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
  }
  pdVar14 = (double *)((ulong)(puVar17 + lVar3 + 0xf) & 0xfffffffffffffff0);
  if (iVar1 == 0) {
    dVar26 = _LC2 * *pdVar19;
  }
  else {
    lVar11 = uVar24 * -4;
    uVar21 = uVar24;
    do {
      dVar26 = 0.0;
      if ((int)uVar21 < param_3) {
        dVar26 = 0.0;
        pfVar7 = (float *)(param_1 - lVar11);
        do {
          pfVar8 = pfVar7 + 1;
          dVar26 = dVar26 + (double)*pfVar7 * (double)*(float *)((long)pfVar7 + lVar11);
          pfVar7 = pfVar8;
        } while ((float *)(param_1 + ((uint)(param_3 - (int)uVar21) + uVar21) * 4) != pfVar8);
      }
      pdVar19[uVar21] = dVar26;
      uVar10 = _LC5;
      dVar5 = _LC6;
      uVar21 = uVar21 - 1;
      lVar11 = lVar11 + 4;
    } while (uVar21 != (uVar24 - 1) - (ulong)param_4);
    dVar26 = _LC2 * *pdVar19;
    dVar28 = *pdVar19 * __LC3 + __LC4;
    if (0 < (int)param_4) {
      uVar21 = 0;
      pdVar23 = pdVar14 + -1;
      pdVar22 = pdVar19;
      do {
        iVar20 = (int)uVar21;
        dVar27 = (double)((ulong)pdVar22[1] ^ uVar10);
        if (dVar26 < dVar28) {
          uVar10 = uVar21 * 8;
          if (uVar21 * 8 <= lVar6 - 8U) {
            uVar10 = lVar6 - 8U;
          }
          *(undefined8 *)(puVar17 + lVar3 + -8) = 0x100344;
          local_40 = dVar26;
          __memset_chk(pdVar14 + uVar21,0,(long)(int)(param_4 - iVar20) << 3,uVar10 + uVar21 * -8);
          dVar26 = local_40;
          break;
        }
        pdVar9 = pdVar14;
        pdVar13 = pdVar22;
        if (iVar20 == 0) {
          dVar27 = dVar27 / dVar26;
          *pdVar14 = dVar27;
        }
        else {
          do {
            pdVar12 = pdVar13 + -1;
            dVar27 = dVar27 - *pdVar9 * *pdVar13;
            pdVar9 = pdVar9 + 1;
            pdVar13 = pdVar12;
          } while (pdVar19 != pdVar12);
          dVar27 = dVar27 / dVar26;
          pdVar23[1] = dVar27;
          pdVar9 = pdVar14;
          if (iVar20 >> 1 != 0) {
            pdVar13 = pdVar23;
            do {
              dVar2 = *pdVar9;
              pdVar12 = pdVar9 + 1;
              *pdVar9 = *pdVar13 * dVar27 + dVar2;
              *pdVar13 = dVar2 * dVar27 + *pdVar13;
              pdVar9 = pdVar12;
              pdVar13 = pdVar13 + -1;
            } while (pdVar14 + (iVar20 >> 1) != pdVar12);
            pdVar9 = pdVar14 + (iVar20 >> 1);
            if ((uVar21 & 1) == 0) goto LAB_0010025a;
          }
          *pdVar9 = *pdVar9 * dVar27 + *pdVar9;
        }
LAB_0010025a:
        uVar21 = uVar21 + 1;
        pdVar22 = pdVar22 + 1;
        pdVar23 = pdVar23 + 1;
        dVar26 = dVar26 * (dVar5 - dVar27 * dVar27);
      } while (uVar24 != uVar21);
      dVar5 = _LC1;
      pdVar19 = pdVar14;
      dVar28 = _LC1;
      do {
        pdVar23 = pdVar19 + 1;
        dVar27 = *pdVar19 * dVar28;
        dVar28 = dVar28 * dVar5;
        *pdVar19 = dVar27;
        pdVar19 = pdVar23;
      } while (pdVar23 != pdVar14 + (long)iVar1 + -1);
      uVar21 = 0;
      do {
        *(float *)(param_2 + uVar21 * 4) = (float)pdVar14[uVar21];
        uVar21 = uVar21 + 1;
      } while (uVar24 != uVar21);
    }
  }
  auVar25._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar25._0_4_ = (float)dVar26;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar25._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + lVar3 + -8) = &UNK_00100377;
  __stack_chk_fail();
}



void vorbis_lpc_predict(long param_1,void *param_2,int param_3,long param_4,long param_5)

{
  float fVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  undefined1 *puVar9;
  float *pfVar11;
  float *__s;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  undefined1 auStack_38 [8];
  long local_30;
  undefined1 *puVar10;
  
  lVar12 = (long)param_3;
  puVar9 = auStack_38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (lVar12 + param_5) * 4 + 0x17;
  puVar10 = auStack_38;
  puVar3 = auStack_38;
  while (puVar10 != auStack_38 + -(uVar7 & 0xfffffffffffff000)) {
    puVar9 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar10 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar2 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
  }
  __s = (float *)((ulong)(puVar9 + lVar2 + 0xf) & 0xfffffffffffffff0);
  if (param_2 == (void *)0x0) {
    if (0 < lVar12) {
      *(undefined8 *)(puVar9 + lVar2 + -8) = 0x1004b5;
      __s = (float *)memset(__s,0,lVar12 * 4);
    }
  }
  else if (0 < lVar12) {
    *(undefined8 *)(puVar9 + lVar2 + -8) = 0x10041d;
    __s = (float *)memcpy(__s,param_2,lVar12 * 4);
  }
  if (0 < param_5) {
    lVar6 = 0;
    pfVar11 = __s;
    do {
      fVar13 = 0.0;
      lVar5 = lVar6;
      lVar4 = lVar12;
      pfVar8 = pfVar11;
      if (0 < lVar12) {
        do {
          lVar4 = lVar4 + -1;
          fVar1 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          fVar13 = fVar13 - fVar1 * *(float *)(param_1 + lVar4 * 4);
        } while (lVar4 != 0);
        lVar5 = lVar6 + lVar12;
      }
      *(float *)(param_4 + lVar6 * 4) = fVar13;
      lVar6 = lVar6 + 1;
      pfVar11 = pfVar11 + 1;
      __s[lVar5] = fVar13;
    } while (param_5 != lVar6);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar9 + lVar2 + -8) = 0x1004cd;
  __stack_chk_fail();
}


