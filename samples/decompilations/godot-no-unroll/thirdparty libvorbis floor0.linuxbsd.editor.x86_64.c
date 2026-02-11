
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 floor0_inverse2(long param_1,int *param_2,long param_3,void *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  lVar3 = *(long *)(param_2 + 2);
  lVar4 = *(long *)(param_1 + 0x38);
  plVar1 = (long *)(lVar3 + lVar4 * 8);
  if (*plVar1 == 0) {
    lVar9 = (long)(int)lVar4;
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x30) + lVar9 * 8);
    fVar12 = (float)*(long *)(*(long *)(param_2 + 6) + 8) * __LC0;
    iVar2 = *param_2;
    dVar14 = atan((double)(_LC1 * fVar12));
    dVar15 = atan((double)(fVar12 * fVar12 * __LC2));
    iVar6 = (int)(lVar5 / 2);
    dVar15 = dVar15 * __LC4;
    dVar14 = dVar14 * __LC3;
    fVar13 = _LC5 * fVar12;
    puVar7 = (undefined4 *)malloc((long)(iVar6 + 1) << 2);
    *(undefined4 **)(lVar3 + lVar9 * 8) = puVar7;
    if (0 < iVar6) {
      uVar10 = 0;
      do {
        fVar18 = (float)(int)uVar10 * (fVar12 / (float)iVar6);
        dVar16 = atan((double)(_LC1 * fVar18));
        dVar17 = atan((double)(fVar18 * fVar18 * __LC2));
        dVar16 = (dVar17 * __LC4 + dVar16 * __LC3 + (double)(fVar18 * _LC5)) *
                 (double)(float)((double)iVar2 / (dVar14 + dVar15 + (double)fVar13));
        if ((double)(_LC9 & (ulong)dVar16) < _LC6) {
          dVar16 = (double)((ulong)((double)(long)dVar16 -
                                   (double)(-(ulong)(dVar16 < (double)(long)dVar16) & _LC8)) |
                           ~_LC9 & (ulong)dVar16);
        }
        iVar8 = (int)dVar16;
        if (iVar2 <= (int)dVar16) {
          iVar8 = iVar2 + -1;
        }
        puVar7[uVar10] = iVar8;
        bVar11 = iVar6 - 1 != uVar10;
        uVar10 = uVar10 + 1;
      } while (bVar11);
      puVar7 = puVar7 + iVar6;
    }
    *puVar7 = 0xffffffff;
    param_2[lVar9 + 4] = iVar6;
  }
  if (param_3 == 0) {
    memset(param_4,0,(long)param_2[lVar4 + 4] << 2);
    return 0;
  }
  vorbis_lsp_to_curve(param_4,*plVar1,(long)param_2[lVar4 + 4],*param_2,param_3,(long)param_2[1]);
  return 1;
}



long floor0_inverse1(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  float fVar12;
  byte local_3c;
  
  lVar7 = param_1 + 8;
  lVar6 = *(long *)(param_2 + 0x18);
  iVar3 = oggpack_read(lVar7,*(undefined4 *)(lVar6 + 0x18));
  if (0 < iVar3) {
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    iVar2 = *(int *)(lVar6 + 0x1c);
    uVar4 = ov_ilog(*(undefined4 *)(lVar6 + 0x20));
    iVar5 = oggpack_read(lVar7,uVar4);
    if ((iVar5 != -1) && (iVar5 < *(int *)(lVar6 + 0x20))) {
      plVar11 = (long *)((long)*(int *)(lVar6 + 0x24 + (long)iVar5 * 4) * 0x60 +
                        *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x30) +
                                 0x1328));
      lVar6 = _vorbis_block_alloc(param_1,((long)*(int *)(param_2 + 4) + *plVar11) * 4 + 4);
      lVar7 = vorbis_book_decodev_set(plVar11,lVar6,lVar7,*(undefined4 *)(param_2 + 4));
      if (lVar7 != -1) {
        iVar5 = *(int *)(param_2 + 4);
        if (0 < iVar5) {
          lVar7 = *plVar11;
          fVar12 = 0.0;
          iVar10 = 0;
          lVar9 = 0;
          do {
            lVar9 = lVar6 + lVar9 * 4;
            lVar8 = 0;
            while (lVar8 < lVar7) {
              iVar10 = iVar10 + 1;
              *(float *)(lVar9 + lVar8 * 4) = *(float *)(lVar9 + lVar8 * 4) + fVar12;
              lVar8 = lVar8 + 1;
              if (iVar10 == iVar5) goto LAB_00100448;
            }
            lVar9 = (long)iVar10;
            fVar12 = *(float *)(lVar6 + -4 + lVar9 * 4);
          } while (iVar10 < iVar5);
        }
LAB_00100448:
        local_3c = (byte)uVar1;
        *(float *)(lVar6 + (long)iVar5 * 4) =
             ((float)iVar3 / (float)((1 << (local_3c & 0x1f)) + -1)) * (float)iVar2;
        return lVar6;
      }
    }
  }
  return 0;
}



void floor0_free_look(void *param_1)

{
  undefined8 *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(undefined8 **)((long)param_1 + 8);
    if (__ptr != (undefined8 *)0x0) {
      if ((void *)*__ptr != (void *)0x0) {
        free((void *)*__ptr);
        __ptr = *(undefined8 **)((long)param_1 + 8);
      }
      if ((void *)__ptr[1] != (void *)0x0) {
        free((void *)__ptr[1]);
        __ptr = *(undefined8 **)((long)param_1 + 8);
      }
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}



void floor0_free_info(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}



int * floor0_unpack(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int *__ptr;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  __ptr = (int *)malloc(0x70);
  iVar3 = oggpack_read(param_2,8);
  *__ptr = iVar3;
  uVar4 = oggpack_read(param_2,0x10);
  *(undefined8 *)(__ptr + 2) = uVar4;
  uVar4 = oggpack_read(param_2,0x10);
  *(undefined8 *)(__ptr + 4) = uVar4;
  iVar3 = oggpack_read(param_2,6);
  __ptr[6] = iVar3;
  iVar3 = oggpack_read(param_2,8);
  __ptr[7] = iVar3;
  iVar3 = oggpack_read(param_2,4);
  __ptr[8] = iVar3 + 1;
  if ((((*__ptr < 1) || (*(long *)(__ptr + 2) < 1)) || (*(long *)(__ptr + 4) < 1)) ||
     (iVar3 + 1 < 1)) {
LAB_00100610:
    free(__ptr);
    __ptr = (int *)0x0;
  }
  else {
    lVar5 = 0;
    do {
      iVar3 = oggpack_read(param_2,8);
      __ptr[lVar5 + 9] = iVar3;
      if (((iVar3 < 0) || (*(int *)(lVar1 + 0x20) <= iVar3)) ||
         ((plVar2 = *(long **)(lVar1 + 0xb28 + (long)iVar3 * 8), (int)plVar2[3] == 0 ||
          (*plVar2 < 1)))) goto LAB_00100610;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < __ptr[8]);
  }
  return __ptr;
}



undefined8 * floor0_look(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar3 = (undefined8 *)calloc(1,0x30);
  uVar1 = param_2[4];
  uVar2 = *param_2;
  puVar3[3] = param_2;
  *puVar3 = CONCAT44(uVar2,uVar1);
  pvVar4 = calloc(2,8);
  puVar3[1] = pvVar4;
  return puVar3;
}


