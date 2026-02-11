
uint bitreverse(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  uVar1 = uVar1 >> 4 & 0xf0f0f0f | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2;
  return uVar1 >> 1 & 0x55555555 | uVar1 * 2 & 0xaaaaaaaa;
}



int sort32a(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}



int ov_ilog(uint param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return iVar1 + 1;
  }
  return 0;
}



void vorbis_staticbook_destroy(void *param_1)

{
  if (*(int *)((long)param_1 + 0x40) != 0) {
    if (*(void **)((long)param_1 + 0x38) != (void *)0x0) {
      free(*(void **)((long)param_1 + 0x38));
    }
    if (*(void **)((long)param_1 + 0x10) != (void *)0x0) {
      free(*(void **)((long)param_1 + 0x10));
    }
    free(param_1);
    return;
  }
  return;
}



void vorbis_book_clear(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    free((void *)param_1[7]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 vorbis_book_init_encode(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar8 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3)
      ; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  param_1[3] = param_2;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar5 = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar5 = _make_words(uVar1,uVar5,0);
  param_1[5] = uVar5;
  uVar4 = _book_maptype1_quantvals(param_2);
  *(undefined4 *)(param_1 + 10) = uVar4;
  uVar7 = (uint)param_2[4];
  dVar11 = (double)(uVar7 & 0x1fffff);
  if ((int)uVar7 < 0) {
    dVar11 = (double)((ulong)dVar11 ^ __LC7);
  }
  lVar9 = (ulong)((uint)((long)param_2[4] >> 0x15) & 0x3ff) - 0x314;
  if (lVar9 < -0x3f) {
    lVar9 = -0x3f;
  }
  if (0x3f < lVar9) {
    lVar9 = 0x3f;
  }
  dVar11 = ldexp(dVar11,(int)lVar9);
  fVar10 = (float)dVar11;
  if ((float)((uint)fVar10 & _LC9) < _LC10) {
    fVar10 = (float)((uint)(((float)((uint)fVar10 & _LC9) + _LC10) - _LC10) | ~_LC9 & (uint)fVar10);
  }
  *(int *)((long)param_1 + 0x54) = (int)fVar10;
  uVar7 = (uint)param_2[5];
  dVar11 = (double)(uVar7 & 0x1fffff);
  if ((int)uVar7 < 0) {
    dVar11 = (double)((ulong)dVar11 ^ __LC7);
  }
  lVar9 = (ulong)((uint)((long)param_2[5] >> 0x15) & 0x3ff) - 0x314;
  if (lVar9 < -0x3f) {
    lVar9 = -0x3f;
  }
  if (0x3f < lVar9) {
    lVar9 = 0x3f;
  }
  dVar11 = ldexp(dVar11,(int)lVar9);
  fVar10 = (float)dVar11;
  if ((float)((uint)fVar10 & _LC9) < _LC10) {
    fVar10 = (float)((uint)(((float)((uint)fVar10 & _LC9) + _LC10) - _LC10) | ~_LC9 & (uint)fVar10);
  }
  *(int *)(param_1 + 0xb) = (int)fVar10;
  return 0;
}



undefined8 vorbis_book_init_decode(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *__ptr;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  byte bVar15;
  ulong uVar16;
  undefined4 *puVar17;
  size_t sVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar25;
  ulong uVar27;
  int iVar28;
  size_t sVar29;
  long lVar30;
  long lVar31;
  void *pvVar32;
  void *__base;
  undefined4 *puVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  size_t sVar37;
  long in_FS_OFFSET;
  undefined1 auStack_68 [8];
  void *local_60;
  size_t local_58;
  void *local_50;
  long local_40;
  undefined1 *puVar24;
  undefined1 *puVar26;
  
  puVar22 = auStack_68;
  puVar24 = auStack_68;
  puVar23 = auStack_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[0xb] = 0;
  puVar14 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar16 = (ulong)(((int)param_1 -
                        (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x60U >> 3
                       ); uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  lVar4 = param_2[1];
  if (lVar4 < 1) {
    *param_1 = *param_2;
    param_1[1] = lVar4;
  }
  else {
    pcVar5 = (char *)param_2[2];
    iVar35 = 0;
    pcVar10 = pcVar5;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      iVar35 = iVar35 + (uint)('\0' < cVar3);
    } while (pcVar5 + lVar4 != pcVar10);
    uVar11 = *param_2;
    sVar37 = (size_t)iVar35;
    param_1[2] = sVar37;
    *param_1 = uVar11;
    param_1[1] = lVar4;
    puVar22 = auStack_68;
    if (0 < iVar35) {
      __ptr = (undefined4 *)_make_words(pcVar5,lVar4,sVar37);
      uVar16 = sVar37 * 8 + 0x17;
      puVar22 = auStack_68;
      while (puVar24 != auStack_68 + -(uVar16 & 0xfffffffffffff000)) {
        puVar23 = puVar22 + -0x1000;
        *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
        puVar24 = puVar22 + -0x1000;
        puVar22 = puVar22 + -0x1000;
      }
      uVar16 = (ulong)((uint)uVar16 & 0xff0);
      lVar4 = -uVar16;
      puVar22 = puVar23 + lVar4;
      puVar25 = puVar23 + lVar4;
      puVar26 = puVar23 + lVar4;
      if (uVar16 != 0) {
        *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
      }
      pvVar32 = (void *)((ulong)(puVar23 + lVar4 + 0xf) & 0xfffffffffffffff0);
      if (__ptr == (undefined4 *)0x0) {
        *(undefined8 *)(puVar23 + lVar4 + -8) = 0x101074;
        vorbis_book_clear(param_1);
        uVar11 = 0xffffffff;
        goto LAB_00100ba4;
      }
      sVar29 = sVar37 * 4;
      puVar33 = __ptr + sVar37;
      puVar17 = __ptr;
      __base = pvVar32;
      do {
        uVar6 = *puVar17;
        pvVar32 = (void *)((long)pvVar32 + 8);
        *(undefined8 *)(puVar23 + lVar4 + -8) = 0x100c5b;
        uVar6 = bitreverse(uVar6);
        *puVar17 = uVar6;
        *(undefined4 **)((long)pvVar32 - 8) = puVar17;
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar33);
      *(undefined8 *)(puVar23 + lVar4 + -8) = 0x100c89;
      local_58 = sVar29;
      local_50 = __base;
      qsort(__base,sVar37,8,sort32a);
      sVar29 = local_58;
      puVar22 = puVar23 + lVar4;
      while (puVar25 != puVar23 + (lVar4 - (local_58 + 0x17 & 0xfffffffffffff000))) {
        puVar26 = puVar22 + -0x1000;
        *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
        puVar25 = puVar22 + -0x1000;
        puVar22 = puVar22 + -0x1000;
      }
      uVar16 = (ulong)((uint)(local_58 + 0x17) & 0xff0);
      lVar4 = -uVar16;
      puVar22 = puVar26 + lVar4;
      if (uVar16 != 0) {
        *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
      }
      local_60 = local_50;
      local_50 = (void *)local_58;
      *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100cf3;
      local_58 = (ulong)(puVar26 + lVar4 + 0xf) & 0xfffffffffffffff0;
      pvVar32 = malloc(sVar29);
      sVar29 = local_58;
      sVar18 = 0;
      param_1[5] = pvVar32;
      do {
        *(int *)(local_58 +
                (long)(int)(*(long *)((long)local_60 + sVar18 * 8) - (long)__ptr >> 2) * 4) =
             (int)sVar18;
        sVar18 = sVar18 + 1;
      } while (sVar18 != sVar37);
      sVar37 = 0;
      do {
        puVar33 = (undefined4 *)((long)__ptr + sVar37);
        piVar1 = (int *)(local_58 + sVar37);
        sVar37 = sVar37 + 4;
        *(undefined4 *)((long)pvVar32 + (long)*piVar1 * 4) = *puVar33;
      } while (local_50 != (void *)sVar37);
      local_58 = (size_t)local_50;
      local_50 = (void *)sVar29;
      *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100d54;
      free(__ptr);
      *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100d63;
      uVar11 = _book_unquantize(param_2,iVar35,local_50);
      param_1[4] = uVar11;
      *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100d70;
      pvVar32 = malloc(local_58);
      lVar12 = param_2[1];
      param_1[6] = pvVar32;
      if (lVar12 < 1) {
        iVar35 = 0;
        *(undefined8 *)(puVar26 + lVar4 + -8) = 0x101039;
        pvVar32 = malloc(0);
        *(undefined4 *)((long)param_1 + 0x4c) = 0;
        param_1[7] = pvVar32;
      }
      else {
        lVar31 = param_2[2];
        lVar19 = 0;
        iVar28 = 0;
        do {
          if ('\0' < *(char *)(lVar31 + lVar19)) {
            lVar30 = (long)iVar28;
            iVar28 = iVar28 + 1;
            *(int *)((long)pvVar32 + (long)*(int *)((long)local_50 + lVar30 * 4) * 4) = (int)lVar19;
          }
          lVar19 = lVar19 + 1;
        } while (lVar12 != lVar19);
        iVar35 = 0;
        *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100dbd;
        pvVar32 = malloc((long)iVar28);
        *(undefined4 *)((long)param_1 + 0x4c) = 0;
        param_1[7] = pvVar32;
        lVar12 = 0;
        while( true ) {
          if ('\0' < *(char *)(lVar31 + lVar12)) {
            *(char *)(param_1[7] + (long)*(int *)((long)local_50 + (long)iVar35 * 4)) =
                 *(char *)(lVar31 + lVar12);
            if (*(int *)((long)param_1 + 0x4c) < (int)*(char *)(param_2[2] + lVar12)) {
              *(int *)((long)param_1 + 0x4c) = (int)*(char *)(param_2[2] + lVar12);
            }
            iVar35 = iVar35 + 1;
          }
          lVar12 = lVar12 + 1;
          if ((long)param_2[1] <= lVar12) break;
          lVar31 = param_2[2];
        }
        if ((iVar35 == 1) && (*(int *)((long)param_1 + 0x4c) == 1)) {
          *(undefined4 *)(param_1 + 9) = 1;
          *(undefined8 *)(puVar26 + lVar4 + -8) = 0x101000;
          puVar14 = (undefined8 *)calloc(2,4);
          uVar11 = _LC12;
          param_1[8] = puVar14;
          *puVar14 = uVar11;
          goto LAB_00100ba2;
        }
      }
      uVar21 = (uint)param_1[2];
      if (uVar21 == 0) {
        local_50._0_4_ = 0x1b;
        uVar21 = 0xf8000000;
        sVar37 = 0x20;
        iVar36 = 0x20;
        iVar28 = 5;
      }
      else {
        iVar36 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar36 == 0; iVar36 = iVar36 + -1) {
          }
        }
        iVar28 = iVar36 + -3;
        if (iVar36 + -3 < 5) {
          iVar28 = 5;
        }
        if (8 < iVar28) {
          iVar28 = 8;
        }
        local_50._0_4_ = 0x20 - iVar28;
        iVar36 = 1 << ((byte)iVar28 & 0x1f);
        sVar37 = (size_t)iVar36;
        uVar21 = (uint)(0xfffffffeL << (0x1f - (byte)iVar28 & 0x3f));
      }
      *(int *)(param_1 + 9) = iVar28;
      *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100e77;
      pvVar32 = calloc(sVar37,4);
      param_1[8] = pvVar32;
      if (0 < iVar35) {
        local_58 = CONCAT44(local_58._4_4_,iVar35);
        lVar12 = param_1[7];
        lVar31 = 0;
        do {
          while( true ) {
            cVar3 = *(char *)(lVar12 + lVar31);
            uVar16 = (ulong)(uint)(int)cVar3;
            if (cVar3 <= iVar28) break;
LAB_00100ea0:
            lVar31 = lVar31 + 1;
            if (iVar35 == lVar31) goto LAB_00100f15;
          }
          bVar15 = (char)iVar28 - cVar3;
          uVar6 = *(undefined4 *)(param_1[5] + lVar31 * 4);
          *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100ec5;
          uVar7 = bitreverse(uVar6);
          if (1 << (bVar15 & 0x1f) < 1) goto LAB_00100ea0;
          iVar8 = 0;
          do {
            iVar9 = iVar8 + 1;
            *(int *)((long)pvVar32 + (ulong)(iVar8 << ((byte)uVar16 & 0x1f) | uVar7) * 4) =
                 (int)lVar31 + 1;
            uVar16 = (ulong)(uint)(int)*(char *)(lVar12 + lVar31);
            iVar8 = iVar9;
          } while (iVar9 < 1 << ((char)iVar28 - *(char *)(lVar12 + lVar31) & 0x1fU));
          lVar31 = lVar31 + 1;
        } while (iVar35 != lVar31);
LAB_00100f15:
        iVar35 = (int)local_58;
      }
      uVar20 = (ulong)local_50 & 0xffffffff;
      lVar12 = 0;
      uVar16 = 0;
      iVar28 = 0;
      lVar31 = (long)iVar35;
      do {
        uVar34 = iVar28 << ((byte)uVar20 & 0x1f);
        *(undefined8 *)(puVar26 + lVar4 + -8) = 0x100f4b;
        uVar7 = bitreverse(uVar34);
        puVar2 = (uint *)((long)pvVar32 + (ulong)uVar7 * 4);
        uVar13 = uVar16;
        if (*puVar2 == 0) {
          do {
            uVar16 = uVar13;
            uVar13 = uVar16 + 1;
            if (lVar31 <= (long)uVar13) break;
          } while (*(uint *)(param_1[5] + uVar13 * 4) <= uVar34);
          if (lVar12 < lVar31) {
            do {
              if (uVar34 < (*(uint *)(param_1[5] + lVar12 * 4) & uVar21)) break;
              lVar12 = lVar12 + 1;
            } while (lVar12 != lVar31);
          }
          uVar13 = 0x7fff;
          if (uVar16 < 0x8000) {
            uVar13 = uVar16;
          }
          uVar27 = lVar31 - lVar12;
          if (0x7fff < uVar27) {
            uVar27 = 0x7fff;
          }
          *puVar2 = (int)uVar13 << 0xf | (uint)uVar27 | 0x80000000;
        }
        iVar28 = iVar28 + 1;
        puVar22 = puVar26 + lVar4;
      } while (iVar28 != iVar36);
    }
  }
LAB_00100ba2:
  uVar11 = 0;
LAB_00100ba4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_00101081;
  __stack_chk_fail();
}



ulong vorbis_book_codeword(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0x28) + (long)param_2 * 4);
  }
  return 0xffffffffffffffff;
}



long vorbis_book_codelen(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return (long)*(char *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (long)param_2);
  }
  return -1;
}


