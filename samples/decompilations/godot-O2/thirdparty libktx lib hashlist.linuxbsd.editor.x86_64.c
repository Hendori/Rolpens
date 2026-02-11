
undefined8 ktxHashList_AddKVPair_part_0(long *param_1,char *param_2,uint param_3,undefined8 param_4)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  uint *puVar10;
  long *plVar11;
  void *pvVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  size_t __size;
  
  sVar9 = strlen(param_2);
  if ((int)sVar9 == 0) {
    return 0xb;
  }
  uVar24 = (int)sVar9 + 1;
  uVar22 = (ulong)uVar24;
  __size = uVar22 + 0x58 + (ulong)param_3;
  puVar10 = (uint *)malloc(__size);
  uVar1 = __size - 0x58;
  puVar18 = puVar10 + 0x16;
  *puVar10 = uVar24;
  *(uint **)(puVar10 + 2) = puVar18;
  __memcpy_chk(puVar18,param_2,uVar22);
  puVar10[4] = param_3;
  uVar13 = sVar9 & 0xffffffff;
  if (param_3 == 0) {
    puVar10[6] = 0;
    puVar10[7] = 0;
  }
  else {
    *(char **)(puVar10 + 6) = (char *)((long)puVar18 + uVar22);
    if (__size < uVar1) {
      __size = uVar1;
    }
    uVar13 = (uVar22 + __size) - uVar1;
    if (uVar13 < __size) {
      uVar13 = __size;
    }
    __memcpy_chk((char *)((long)puVar18 + uVar22),param_4,(ulong)param_3,
                 (uVar1 - (uVar22 + __size)) + uVar13);
    uVar24 = *puVar10;
    puVar18 = *(uint **)(puVar10 + 2);
    uVar13 = (ulong)(uVar24 - 1);
  }
  lVar3 = *param_1;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  *(uint **)(puVar10 + 0x12) = puVar18;
  uVar21 = (uint)uVar13;
  puVar10[0x14] = uVar21;
  if (lVar3 == 0) {
    *param_1 = (long)puVar10;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar14 = (undefined8 *)malloc(0x40);
    *(undefined8 **)(puVar10 + 8) = puVar14;
    if (puVar14 == (undefined8 *)0x0) goto LAB_0010056b;
    *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar14 + 4) = (undefined1  [16])0x0;
    puVar14[3] = puVar10 + 8;
    *(undefined1 (*) [16])(puVar14 + 6) = (undefined1  [16])0x0;
    uVar6 = _LC0;
    puVar14[4] = 0x20;
    puVar14[1] = uVar6;
    pvVar12 = calloc(0x200,1);
    *puVar14 = pvVar12;
    if (pvVar12 == (void *)0x0) goto LAB_0010056b;
    *(undefined4 *)(puVar14 + 7) = 0xa0111fe1;
    iVar7 = 1;
    puVar19 = puVar10;
  }
  else {
    *(uint **)(*(long *)(*(long *)(lVar3 + 0x20) + 0x18) + 0x10) = puVar10;
    puVar19 = (uint *)*param_1;
    puVar14 = *(undefined8 **)(puVar19 + 8);
    *(undefined8 *)(puVar10 + 10) = puVar14[3] - puVar14[4];
    puVar14[3] = puVar10 + 8;
    iVar7 = *(int *)(puVar14 + 2) + 1;
  }
  *(int *)(puVar14 + 2) = iVar7;
  uVar15 = 0x9e3779b9;
  uVar8 = 0xfeedbeef;
  uVar16 = 0x9e3779b9;
  puVar2 = puVar10 + 8;
  *(undefined8 **)puVar2 = puVar14;
  puVar10[0x15] = 0xfeedbeef;
  while (0xb < uVar21) {
    iVar7 = *(char *)((long)puVar18 + 5) * 0x100 + *(char *)((long)puVar18 + 6) * 0x10000 +
            (int)(char)puVar18[1] + *(char *)((long)puVar18 + 7) * 0x1000000 + uVar15;
    uVar8 = uVar8 + *(char *)((long)puVar18 + 9) * 0x100 + *(char *)((long)puVar18 + 10) * 0x10000 +
                    (int)(char)puVar18[2] + *(char *)((long)puVar18 + 0xb) * 0x1000000;
    uVar15 = (((*(char *)((long)puVar18 + 1) * 0x100 + *(char *)((long)puVar18 + 2) * 0x10000 +
                (int)(char)*puVar18 + *(char *)((long)puVar18 + 3) * 0x1000000) - iVar7) - uVar8) +
             uVar16 ^ uVar8 >> 0xd;
    uVar16 = uVar15 << 8 ^ (iVar7 - uVar8) - uVar15;
    uVar8 = (uVar8 - uVar15) - uVar16 ^ uVar16 >> 0xd;
    uVar21 = (int)uVar13 - 0xc;
    uVar13 = (ulong)uVar21;
    puVar18 = puVar18 + 3;
    uVar15 = uVar8 >> 0xc ^ (uVar15 - uVar16) - uVar8;
    uVar17 = uVar15 << 0x10 ^ (uVar16 - uVar8) - uVar15;
    uVar8 = (uVar8 - uVar15) - uVar17 ^ uVar17 >> 5;
    uVar16 = uVar8 >> 3 ^ (uVar15 - uVar17) - uVar8;
    uVar15 = uVar16 << 10 ^ (uVar17 - uVar8) - uVar16;
    uVar8 = (uVar8 - uVar16) - uVar15 ^ uVar15 >> 0xf;
    puVar10[0x15] = uVar8;
  }
  uVar8 = (uVar24 - 1) + uVar8;
  puVar10[0x15] = uVar8;
  switch(uVar13) {
  case 0xb:
    uVar8 = uVar8 + *(char *)((long)puVar18 + 10) * 0x1000000;
    puVar10[0x15] = uVar8;
  case 10:
    uVar8 = uVar8 + *(char *)((long)puVar18 + 9) * 0x10000;
    puVar10[0x15] = uVar8;
  case 9:
    uVar8 = uVar8 + (char)puVar18[2] * 0x100;
    puVar10[0x15] = uVar8;
  case 8:
    uVar15 = uVar15 + *(char *)((long)puVar18 + 7) * 0x1000000;
  case 7:
    uVar15 = uVar15 + *(char *)((long)puVar18 + 6) * 0x10000;
  case 6:
    uVar15 = uVar15 + *(char *)((long)puVar18 + 5) * 0x100;
  case 5:
    uVar15 = uVar15 + (int)(char)puVar18[1];
  case 4:
    uVar16 = uVar16 + *(char *)((long)puVar18 + 3) * 0x1000000;
  case 3:
    uVar16 = uVar16 + *(char *)((long)puVar18 + 2) * 0x10000;
  case 2:
    uVar16 = uVar16 + *(char *)((long)puVar18 + 1) * 0x100;
  case 1:
    uVar16 = uVar16 + (int)(char)*puVar18;
  }
  uVar21 = uVar16 - (uVar15 + uVar8) ^ uVar8 >> 0xd;
  uVar15 = uVar21 << 8 ^ (uVar15 - uVar8) - uVar21;
  uVar24 = (uVar8 - uVar21) - uVar15 ^ uVar15 >> 0xd;
  uVar21 = uVar24 >> 0xc ^ (uVar21 - uVar15) - uVar24;
  uVar8 = uVar21 << 0x10 ^ (uVar15 - uVar24) - uVar21;
  uVar24 = (uVar24 - uVar21) - uVar8 ^ uVar8 >> 5;
  uVar15 = uVar24 >> 3 ^ (uVar21 - uVar8) - uVar24;
  uVar21 = (uVar8 - uVar24) - uVar15 ^ uVar15 << 10;
  plVar11 = *(long **)(puVar19 + 8);
  lVar3 = plVar11[1];
  uVar24 = (uVar24 - uVar15) - uVar21 ^ uVar21 >> 0xf;
  puVar10[0x15] = uVar24;
  plVar11 = (long *)((ulong)(uVar24 & (int)lVar3 - 1U) * 0x10 + *plVar11);
  lVar3 = *plVar11;
  uVar24 = (int)plVar11[1] + 1;
  *(uint *)(plVar11 + 1) = uVar24;
  *(long *)(puVar10 + 0x10) = lVar3;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  if (lVar3 != 0) {
    *(uint **)(lVar3 + 0x18) = puVar2;
  }
  *plVar11 = (long)puVar2;
  if (((uint)((*(int *)((long)plVar11 + 0xc) * 5 + 5) * 2) <= uVar24) &&
     (*(int *)((long)puVar14 + 0x34) != 1)) {
    sVar9 = (ulong)(uint)(*(int *)(puVar14 + 1) * 2) << 4;
    pvVar12 = malloc(sVar9);
    if (pvVar12 == (void *)0x0) {
LAB_0010056b:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    __memset_chk(pvVar12,0,sVar9,sVar9);
    *(undefined4 *)((long)puVar14 + 0x2c) = 0;
    plVar11 = (long *)*puVar14;
    iVar7 = *(int *)((long)puVar14 + 0xc) + 1;
    uVar21 = *(uint *)(puVar14 + 1);
    uVar24 = uVar21 * 2 - 1;
    uVar8 = (uint)((*(uint *)(puVar14 + 2) & uVar24) != 0) +
            (*(uint *)(puVar14 + 2) >> ((byte)iVar7 & 0x1f));
    *(uint *)(puVar14 + 5) = uVar8;
    if (uVar21 != 0) {
      plVar23 = plVar11;
      do {
        lVar3 = *plVar23;
        while (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x20);
          plVar20 = (long *)((ulong)(uVar24 & *(uint *)(lVar3 + 0x34)) * 0x10 + (long)pvVar12);
          uVar15 = (int)plVar20[1] + 1;
          *(uint *)(plVar20 + 1) = uVar15;
          if (uVar8 < uVar15) {
            *(int *)((long)puVar14 + 0x2c) = *(int *)((long)puVar14 + 0x2c) + 1;
            *(uint *)((long)plVar20 + 0xc) = uVar15 / uVar8;
          }
          lVar5 = *plVar20;
          *(undefined8 *)(lVar3 + 0x18) = 0;
          *(long *)(lVar3 + 0x20) = lVar5;
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x18) = lVar3;
          }
          *plVar20 = lVar3;
          lVar3 = lVar4;
        }
        plVar23 = plVar23 + 2;
      } while (plVar11 + (ulong)uVar21 * 2 != plVar23);
    }
    *(uint *)(puVar14 + 1) = uVar21 * 2;
    *(int *)((long)puVar14 + 0xc) = iVar7;
    free(plVar11);
    puVar14 = *(undefined8 **)(puVar10 + 8);
    *puVar14 = pvVar12;
    if (*(uint *)(puVar14 + 2) >> 1 < *(uint *)((long)puVar14 + 0x2c)) {
      iVar7 = *(int *)(puVar14 + 6);
      *(uint *)(puVar14 + 6) = iVar7 + 1U;
      if (1 < iVar7 + 1U) {
        *(undefined4 *)((long)puVar14 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar14 + 6) = 0;
    }
  }
  return 0;
}



void ktxHashList_Construct(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



void ktxHashList_ConstructCopy(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  if (param_2 == 0) {
    return;
  }
  do {
    if ((*(long *)(param_2 + 8) != 0) &&
       ((*(int *)(param_2 + 0x10) == 0 || (*(long *)(param_2 + 0x18) != 0)))) {
      ktxHashList_AddKVPair_part_0(param_1);
    }
    param_2 = *(long *)(param_2 + 0x30);
  } while (param_2 != 0);
  return;
}



void ktxHashList_Destruct(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *__ptr;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  
  pvVar8 = (void *)*param_1;
  __ptr = pvVar8;
  do {
    if (__ptr == (void *)0x0) {
      return;
    }
    puVar3 = *(undefined8 **)((long)pvVar8 + 0x20);
    pvVar4 = *(void **)((long)__ptr + 0x30);
    lVar6 = *(long *)((long)__ptr + 0x28);
    if (lVar6 == 0) {
      if (pvVar4 == (void *)0x0) {
        free((void *)*puVar3);
        free(*(void **)((long)pvVar8 + 0x20));
        free(__ptr);
        return;
      }
      pvVar7 = pvVar4;
      pvVar8 = pvVar4;
      if (__ptr == (void *)(puVar3[3] - puVar3[4])) {
        puVar3[3] = puVar3[4];
      }
LAB_00100639:
      *(long *)((long)pvVar7 + *(long *)(*(long *)((long)pvVar8 + 0x20) + 0x20) + 8) = lVar6;
    }
    else {
      lVar2 = lVar6 + puVar3[4];
      if (__ptr == (void *)(puVar3[3] - puVar3[4])) {
        puVar3[3] = lVar2;
      }
      *(void **)(lVar2 + 0x10) = pvVar4;
      pvVar7 = *(void **)((long)__ptr + 0x30);
      if (*(void **)((long)__ptr + 0x30) != (void *)0x0) goto LAB_00100639;
    }
    plVar1 = *(long **)((long)pvVar8 + 0x20);
    lVar6 = *(long *)((long)__ptr + 0x40);
    plVar5 = (long *)((ulong)((int)plVar1[1] - 1U & *(uint *)((long)__ptr + 0x54)) * 0x10 + *plVar1)
    ;
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
    if ((long)__ptr + 0x20 == *plVar5) {
      *plVar5 = lVar6;
    }
    lVar2 = *(long *)((long)__ptr + 0x38);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x20) = lVar6;
      lVar6 = *(long *)((long)__ptr + 0x40);
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x18) = lVar2;
    }
    *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
    free(__ptr);
    __ptr = pvVar4;
  } while( true );
}



undefined8 ktxHashList_Create(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *param_1 = puVar1;
    return 0;
  }
  return 0xd;
}



undefined8 ktxHashList_CreateCopy(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xd;
  }
  else {
    ktxHashList_ConstructCopy(pvVar1,param_2);
    *param_1 = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}



void ktxHashList_Destroy(void *param_1)

{
  ktxHashList_Destruct();
  free(param_1);
  return;
}



undefined8 ktxHashList_AddKVPair(long param_1,long param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((param_3 == 0 || (param_4 != 0)))) {
    uVar1 = ktxHashList_AddKVPair_part_0();
    return uVar1;
  }
  return 0xb;
}



undefined8 ktxHashList_DeleteKVPair(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  void *__ptr;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  
  if ((param_1 == (long *)0x0) || (param_2 == (char *)0x0)) {
    uVar8 = 0xb;
  }
  else {
    lVar10 = *param_1;
    if (lVar10 != 0) {
      sVar5 = strlen(param_2);
      uVar3 = (uint)sVar5;
      pcVar14 = param_2;
      if (uVar3 < 0xc) {
        uVar16 = sVar5 & 0xffffffff;
        uVar12 = 0x9e3779b9;
        uVar9 = 0x9e3779b9;
        uVar4 = 0xfeedbeef;
      }
      else {
        uVar16 = sVar5 & 0xffffffff;
        uVar12 = 0x9e3779b9;
        uVar9 = 0x9e3779b9;
        uVar4 = 0xfeedbeef;
        do {
          iVar11 = pcVar14[5] * 0x100 + pcVar14[6] * 0x10000 + (int)pcVar14[4] +
                   pcVar14[7] * 0x1000000 + uVar12;
          uVar4 = pcVar14[9] * 0x100 + pcVar14[10] * 0x10000 + (int)pcVar14[8] +
                  pcVar14[0xb] * 0x1000000 + uVar4;
          uVar9 = (((pcVar14[1] * 0x100 + pcVar14[2] * 0x10000 + (int)*pcVar14 +
                    pcVar14[3] * 0x1000000) - iVar11) - uVar4) + uVar9 ^ uVar4 >> 0xd;
          uVar12 = uVar9 << 8 ^ (iVar11 - uVar4) - uVar9;
          uVar4 = uVar12 >> 0xd ^ (uVar4 - uVar9) - uVar12;
          uVar15 = (int)uVar16 - 0xc;
          uVar16 = (ulong)uVar15;
          pcVar14 = pcVar14 + 0xc;
          uVar9 = uVar4 >> 0xc ^ (uVar9 - uVar12) - uVar4;
          uVar12 = uVar9 << 0x10 ^ (uVar12 - uVar4) - uVar9;
          uVar4 = uVar12 >> 5 ^ (uVar4 - uVar9) - uVar12;
          uVar9 = uVar4 >> 3 ^ (uVar9 - uVar12) - uVar4;
          uVar12 = uVar9 << 10 ^ (uVar12 - uVar4) - uVar9;
          uVar4 = uVar12 >> 0xf ^ (uVar4 - uVar9) - uVar12;
        } while (0xb < uVar15);
      }
      uVar4 = uVar4 + uVar3;
      switch(uVar16) {
      case 0xb:
        uVar4 = uVar4 + pcVar14[10] * 0x1000000;
      case 10:
        uVar4 = uVar4 + pcVar14[9] * 0x10000;
      case 9:
        uVar4 = uVar4 + pcVar14[8] * 0x100;
      case 8:
        uVar12 = uVar12 + pcVar14[7] * 0x1000000;
      case 7:
        uVar12 = uVar12 + pcVar14[6] * 0x10000;
      case 6:
        uVar12 = uVar12 + pcVar14[5] * 0x100;
      case 5:
        uVar12 = uVar12 + (int)pcVar14[4];
      case 4:
        uVar9 = uVar9 + pcVar14[3] * 0x1000000;
      case 3:
        uVar9 = uVar9 + pcVar14[2] * 0x10000;
      case 2:
        uVar9 = uVar9 + pcVar14[1] * 0x100;
      case 1:
        uVar9 = uVar9 + (int)*pcVar14;
      }
      puVar1 = *(undefined8 **)(lVar10 + 0x20);
      uVar15 = uVar4 >> 0xd ^ uVar9 - (uVar4 + uVar12);
      __ptr = (void *)*puVar1;
      uVar9 = uVar15 << 8 ^ (uVar12 - uVar4) - uVar15;
      uVar4 = uVar9 >> 0xd ^ (uVar4 - uVar15) - uVar9;
      uVar12 = uVar4 >> 0xc ^ (uVar15 - uVar9) - uVar4;
      uVar9 = uVar12 << 0x10 ^ (uVar9 - uVar4) - uVar12;
      uVar4 = uVar9 >> 5 ^ (uVar4 - uVar12) - uVar9;
      uVar12 = (uVar12 - uVar9) - uVar4 ^ uVar4 >> 3;
      uVar9 = uVar12 << 10 ^ (uVar9 - uVar4) - uVar12;
      lVar10 = *(long *)((long)__ptr +
                        (ulong)(*(int *)(puVar1 + 1) - 1U &
                               (uVar9 >> 0xf ^ (uVar4 - uVar12) - uVar9)) * 0x10);
      if (lVar10 != 0) {
        lVar13 = puVar1[4];
        lVar10 = lVar10 - lVar13;
        lVar17 = -lVar13;
        while ((*(uint *)(lVar10 + 0x50) != uVar3 ||
               (iVar11 = memcmp(*(void **)(lVar10 + 0x48),param_2,sVar5 & 0xffffffff), iVar11 != 0))
              ) {
          if (*(long *)(lVar10 + 0x40) == 0) goto LAB_00100b52;
          lVar10 = *(long *)(lVar10 + 0x40) + lVar17;
        }
        lVar6 = *(long *)(lVar10 + 0x30);
        if (*(long *)(lVar10 + 0x28) == 0) {
          if (lVar6 == 0) {
            free(__ptr);
            free(*(void **)(*param_1 + 0x20));
            *param_1 = 0;
            return 0;
          }
          if (lVar10 == lVar17 + puVar1[3]) {
            puVar1[3] = lVar13;
          }
          *param_1 = lVar6;
        }
        else {
          lVar13 = *(long *)(lVar10 + 0x28) + lVar13;
          if (lVar10 == lVar17 + puVar1[3]) {
            puVar1[3] = lVar13;
          }
          *(long *)(lVar13 + 0x10) = lVar6;
          lVar6 = *param_1;
        }
        if (*(long *)(lVar10 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(lVar10 + 0x30) + 8 + *(long *)(*(long *)(lVar6 + 0x20) + 0x20))
               = *(undefined8 *)(lVar10 + 0x28);
          lVar6 = *param_1;
        }
        plVar2 = *(long **)(lVar6 + 0x20);
        lVar13 = *(long *)(lVar10 + 0x40);
        plVar7 = (long *)((ulong)((int)plVar2[1] - 1U & *(uint *)(lVar10 + 0x54)) * 0x10 + *plVar2);
        *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
        if (*plVar7 == lVar10 + 0x20) {
          *plVar7 = lVar13;
        }
        lVar17 = *(long *)(lVar10 + 0x38);
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x20) = lVar13;
          lVar13 = *(long *)(lVar10 + 0x40);
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x18) = lVar17;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
      }
    }
LAB_00100b52:
    uVar8 = 0;
  }
  return uVar8;
}



undefined8 ktxHashList_DeleteEntry(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    lVar4 = *(long *)(param_2 + 0x30);
    puVar1 = *(undefined8 **)(*param_1 + 0x20);
    if (*(long *)(param_2 + 0x28) == 0) {
      if (lVar4 == 0) {
        free((void *)*puVar1);
        free(*(void **)(*param_1 + 0x20));
        *param_1 = 0;
        return 0;
      }
      if (param_2 == puVar1[3] - puVar1[4]) {
        puVar1[3] = puVar1[4];
      }
      *param_1 = lVar4;
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28) + puVar1[4];
      if (param_2 == puVar1[3] - puVar1[4]) {
        puVar1[3] = lVar3;
      }
      *(long *)(lVar3 + 0x10) = lVar4;
      lVar4 = *param_1;
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x30) + 8 + *(long *)(*(long *)(lVar4 + 0x20) + 0x20)) =
           *(undefined8 *)(param_2 + 0x28);
      lVar4 = *param_1;
    }
    plVar2 = *(long **)(lVar4 + 0x20);
    lVar4 = *(long *)(param_2 + 0x40);
    plVar5 = (long *)((ulong)((int)plVar2[1] - 1U & *(uint *)(param_2 + 0x54)) * 0x10 + *plVar2);
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
    if (*plVar5 == param_2 + 0x20) {
      *plVar5 = lVar4;
    }
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x20) = lVar4;
      lVar4 = *(long *)(param_2 + 0x40);
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x18) = lVar3;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
    return 0;
  }
  return 0xb;
}



undefined8 ktxHashList_FindEntry(long *param_1,char *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_1 == (long *)0x0) {
    return 0xb;
  }
  if (param_2 == (char *)0x0) {
    return 0xb;
  }
  lVar12 = *param_1;
  if (lVar12 != 0) {
    sVar5 = strlen(param_2);
    uVar3 = (uint)sVar5;
    pcVar9 = param_2;
    if (uVar3 < 0xc) {
      uVar11 = sVar5 & 0xffffffff;
      uVar8 = 0x9e3779b9;
      uVar6 = 0x9e3779b9;
      uVar4 = 0xfeedbeef;
    }
    else {
      uVar11 = sVar5 & 0xffffffff;
      uVar8 = 0x9e3779b9;
      uVar6 = 0x9e3779b9;
      uVar4 = 0xfeedbeef;
      do {
        iVar7 = pcVar9[5] * 0x100 + pcVar9[6] * 0x10000 + (int)pcVar9[4] + pcVar9[7] * 0x1000000 +
                uVar8;
        uVar4 = pcVar9[9] * 0x100 + pcVar9[10] * 0x10000 + (int)pcVar9[8] + pcVar9[0xb] * 0x1000000
                + uVar4;
        uVar6 = (((pcVar9[1] * 0x100 + pcVar9[2] * 0x10000 + (int)*pcVar9 + pcVar9[3] * 0x1000000) -
                 iVar7) - uVar4) + uVar6 ^ uVar4 >> 0xd;
        uVar8 = uVar6 << 8 ^ (iVar7 - uVar4) - uVar6;
        uVar4 = uVar8 >> 0xd ^ (uVar4 - uVar6) - uVar8;
        uVar10 = (int)uVar11 - 0xc;
        uVar11 = (ulong)uVar10;
        pcVar9 = pcVar9 + 0xc;
        uVar6 = uVar4 >> 0xc ^ (uVar6 - uVar8) - uVar4;
        uVar8 = uVar6 << 0x10 ^ (uVar8 - uVar4) - uVar6;
        uVar4 = uVar8 >> 5 ^ (uVar4 - uVar6) - uVar8;
        uVar6 = uVar4 >> 3 ^ (uVar6 - uVar8) - uVar4;
        uVar8 = uVar6 << 10 ^ (uVar8 - uVar4) - uVar6;
        uVar4 = uVar8 >> 0xf ^ (uVar4 - uVar6) - uVar8;
      } while (0xb < uVar10);
    }
    uVar4 = uVar4 + uVar3;
    switch(uVar11) {
    case 0xb:
      uVar4 = uVar4 + pcVar9[10] * 0x1000000;
    case 10:
      uVar4 = uVar4 + pcVar9[9] * 0x10000;
    case 9:
      uVar4 = uVar4 + pcVar9[8] * 0x100;
    case 8:
      uVar8 = uVar8 + pcVar9[7] * 0x1000000;
    case 7:
      uVar8 = uVar8 + pcVar9[6] * 0x10000;
    case 6:
      uVar8 = uVar8 + pcVar9[5] * 0x100;
    case 5:
      uVar8 = uVar8 + (int)pcVar9[4];
    case 4:
      uVar6 = uVar6 + pcVar9[3] * 0x1000000;
    case 3:
      uVar6 = uVar6 + pcVar9[2] * 0x10000;
    case 2:
      uVar6 = uVar6 + pcVar9[1] * 0x100;
    case 1:
      uVar6 = uVar6 + (int)*pcVar9;
    }
    uVar10 = uVar4 >> 0xd ^ uVar6 - (uVar4 + uVar8);
    uVar6 = uVar10 << 8 ^ (uVar8 - uVar4) - uVar10;
    uVar4 = uVar6 >> 0xd ^ (uVar4 - uVar10) - uVar6;
    uVar8 = uVar4 >> 0xc ^ (uVar10 - uVar6) - uVar4;
    uVar6 = uVar8 << 0x10 ^ (uVar6 - uVar4) - uVar8;
    uVar4 = uVar6 >> 5 ^ (uVar4 - uVar8) - uVar6;
    uVar8 = (uVar8 - uVar6) - uVar4 ^ uVar4 >> 3;
    plVar1 = *(long **)(lVar12 + 0x20);
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar4) - uVar8;
    lVar12 = *(long *)((ulong)((int)plVar1[1] - 1U & (uVar6 >> 0xf ^ (uVar4 - uVar8) - uVar6)) *
                       0x10 + *plVar1);
    if (lVar12 == 0) {
      return 0xc;
    }
    lVar2 = plVar1[4];
    lVar12 = lVar12 - lVar2;
    while( true ) {
      if ((*(uint *)(lVar12 + 0x50) == uVar3) &&
         (iVar7 = memcmp(*(void **)(lVar12 + 0x48),param_2,sVar5 & 0xffffffff), iVar7 == 0)) {
        *param_3 = lVar12;
        return 0;
      }
      if (*(long *)(lVar12 + 0x40) == 0) break;
      lVar12 = *(long *)(lVar12 + 0x40) - lVar2;
    }
  }
  return 0xc;
}



undefined8
ktxHashList_FindValue(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == (int *)0x0) || (param_4 == (undefined8 *)0x0)) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = ktxHashList_FindEntry(param_1,param_2,&local_28);
    if ((int)uVar2 == 0) {
      uVar3 = 0;
      iVar1 = *(int *)(local_28 + 0x10);
      *param_3 = iVar1;
      if (iVar1 != 0) {
        uVar3 = *(undefined8 *)(local_28 + 0x18);
      }
      *param_4 = uVar3;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxHashList_Next(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x30);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ktxHashList_Serialize(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong __size;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (uint *)0x0 || param_3 == (undefined8 *)0x0) || (param_1 == (undefined8 *)0x0)) {
    uVar6 = 0xb;
    goto LAB_001013b2;
  }
  puVar12 = (uint *)*param_1;
  local_44 = 0;
  if (puVar12 == (uint *)0x0) {
LAB_001013a0:
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    uVar9 = 0;
    puVar2 = puVar12;
    do {
      fVar13 = (float)(puVar2[4] + *puVar2 + 4) * _LC2;
      if ((float)((uint)fVar13 & _LC4) < _LC3) {
        fVar13 = (float)((uint)((float)(int)fVar13 +
                               (float)(-(uint)((float)(int)fVar13 < fVar13) & _LC5)) |
                        ~_LC4 & (uint)fVar13);
      }
      puVar2 = *(uint **)(puVar2 + 0xc);
      uVar9 = uVar9 + (int)(long)(fVar13 * __LC6);
    } while (puVar2 != (uint *)0x0);
    if (uVar9 == 0) goto LAB_001013a0;
    __size = (ulong)uVar9;
    puVar2 = (uint *)malloc(__size);
    if (puVar2 == (uint *)0x0) {
      uVar6 = 0xd;
      goto LAB_001013b2;
    }
    *param_2 = uVar9;
    *param_3 = puVar2;
    uVar4 = __size;
    do {
      uVar9 = puVar12[4];
      uVar1 = *puVar12;
      uVar11 = uVar4;
      if (uVar4 <= __size) {
        uVar11 = __size;
      }
      *puVar2 = uVar9 + uVar1;
      uVar5 = (uVar11 - uVar4) + 4;
      if (uVar5 < uVar11) {
        uVar5 = uVar11;
      }
      uVar5 = (uVar4 - uVar11) + -4 + uVar5;
      __memcpy_chk(puVar2 + 1,*(undefined8 *)(puVar12 + 2),*puVar12,uVar5);
      uVar4 = uVar5;
      if (uVar5 <= __size) {
        uVar4 = __size;
      }
      uVar10 = (ulong)puVar12[4];
      lVar3 = *puVar12 + uVar4;
      uVar11 = lVar3 - uVar5;
      if (uVar11 < uVar4) {
        uVar11 = uVar4;
      }
      lVar8 = (long)(puVar2 + 1) + (ulong)*puVar12;
      uVar11 = uVar11 + (uVar5 - lVar3);
      if (puVar12[4] != 0) {
        __memcpy_chk(lVar8,*(undefined8 *)(puVar12 + 6),uVar10,uVar11);
        uVar10 = (ulong)puVar12[4];
      }
      fVar13 = (float)(uVar9 + uVar1);
      uVar4 = uVar11;
      if (uVar11 <= __size) {
        uVar4 = __size;
      }
      fVar14 = _LC2 * fVar13;
      uVar5 = (uVar10 + uVar4) - uVar11;
      if (uVar5 < uVar4) {
        uVar5 = uVar4;
      }
      uVar5 = uVar5 + (uVar11 - (uVar10 + uVar4));
      if ((float)((uint)fVar14 & _LC4) < _LC3) {
        fVar14 = (float)((uint)((float)(int)fVar14 +
                               (float)(-(uint)((float)(int)fVar14 < fVar14) & _LC5)) |
                        ~_LC4 & (uint)fVar14);
      }
      lVar7 = (long)(int)(long)(fVar14 * __LC6 - fVar13);
      lVar3 = __memcpy_chk(uVar10 + lVar8,&local_44,lVar7,uVar5);
      puVar12 = *(uint **)(puVar12 + 0xc);
      uVar11 = uVar5;
      if (uVar5 <= __size) {
        uVar11 = __size;
      }
      uVar4 = (lVar7 + uVar11) - uVar5;
      if (uVar4 < uVar11) {
        uVar4 = uVar11;
      }
      puVar2 = (uint *)(lVar7 + lVar3);
      uVar4 = (uVar5 - (lVar7 + uVar11)) + uVar4;
    } while (puVar12 != (uint *)0x0);
  }
  uVar6 = 0;
LAB_001013b2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void sort_by_key_codepoint(long param_1,long param_2)

{
  strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ktxHashList_Sort(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long local_48;
  int local_40;
  uint local_3c;
  
  if (param_1 == (long *)0x0) {
    return 0xb;
  }
  if (*param_1 == 0) {
    return 0;
  }
  local_48 = *param_1 + 0x20;
  local_40 = 1;
LAB_0010144b:
  lVar9 = local_48;
  local_3c = 0;
  lVar5 = 0;
  local_48 = 0;
LAB_00101468:
  local_3c = local_3c + 1;
  iVar6 = 0;
  lVar3 = lVar9;
  iVar10 = local_40;
  if (local_40 != 0) {
    do {
      lVar3 = *(long *)(lVar3 + 0x10);
      iVar6 = iVar6 + 1;
      if (lVar3 == 0) break;
      lVar3 = lVar3 + *(long *)(*(long *)(*param_1 + 0x20) + 0x20);
    } while (local_40 != iVar6);
  }
  do {
    if (iVar6 == 0) {
      if (iVar10 == 0) break;
      if (lVar3 == 0) goto LAB_001015b0;
      lVar7 = *(long *)(lVar3 + 0x10);
      if (lVar7 != 0) {
        lVar7 = lVar7 + *(long *)(*(long *)(*param_1 + 0x20) + 0x20);
      }
LAB_001014d6:
      iVar10 = iVar10 + -1;
      lVar4 = lVar3;
      lVar8 = lVar9;
      lVar3 = lVar7;
    }
    else {
      if ((iVar10 == 0) || (lVar3 == 0)) {
        lVar8 = *(long *)(lVar9 + 0x10);
        if (lVar8 != 0) {
          lVar8 = lVar8 + *(long *)(*(long *)(*param_1 + 0x20) + 0x20);
        }
      }
      else {
        lVar4 = *(long *)(*(long *)(*param_1 + 0x20) + 0x20);
        iVar2 = strcmp(*(char **)(lVar9 + 8 + -lVar4),*(char **)(lVar3 + 8 + -lVar4));
        if (0 < iVar2) {
          lVar7 = *(long *)(lVar3 + 0x10);
          if (lVar7 != 0) {
            lVar7 = lVar4 + lVar7;
          }
          goto LAB_001014d6;
        }
        lVar8 = *(long *)(lVar9 + 0x10);
        if (lVar8 != 0) {
          lVar8 = lVar4 + lVar8;
        }
      }
      iVar6 = iVar6 + -1;
      lVar4 = lVar9;
    }
    if (lVar5 == 0) {
      lVar5 = 0;
      local_48 = lVar4;
    }
    else {
      *(long *)(lVar5 + 0x10) = lVar4 - *(long *)(*(long *)(*param_1 + 0x20) + 0x20);
      lVar5 = lVar5 - *(long *)(*(long *)(*param_1 + 0x20) + 0x20);
    }
    *(long *)(lVar4 + 8) = lVar5;
    lVar5 = lVar4;
    lVar9 = lVar8;
  } while( true );
  lVar9 = lVar3;
  if (lVar3 == 0) goto LAB_001015b0;
  goto LAB_00101468;
LAB_001015b0:
  *(undefined8 *)(lVar5 + 0x10) = 0;
  if (local_3c < 2) {
    lVar9 = *(long *)(*param_1 + 0x20);
    *(long *)(lVar9 + 0x18) = lVar5;
    *param_1 = local_48 - *(long *)(lVar9 + 0x20);
    return 0;
  }
  local_40 = local_40 << 1;
  if (local_48 == 0) {
    _DAT_00000010 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  goto LAB_0010144b;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ktxHashList_Deserialize(long *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  
  if ((param_2 == 0 || param_1 == (long *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xb;
  }
  uVar7 = 10;
  if (*param_1 == 0) {
    puVar2 = (uint *)((long)param_3 + (ulong)param_2);
    if (param_3 < puVar2) {
      do {
        if (puVar2 < (uint *)((long)param_3 + 6U)) {
          return 1;
        }
        uVar4 = *param_3;
        uVar11 = (ulong)uVar4;
        if (puVar2 < (uint *)((long)param_3 + uVar11 + 4)) {
          return 1;
        }
        puVar1 = param_3 + 1;
        cVar3 = (char)param_3[1];
        puVar8 = puVar1;
        uVar6 = 0;
        if (uVar4 == 0) {
          if (cVar3 != '\0') {
            return 1;
          }
          pcVar9 = (char *)((long)param_3 + 5);
          iVar10 = -1;
        }
        else {
          do {
            uVar5 = uVar6;
            if ((char)*puVar8 == '\0') {
              uVar6 = uVar5;
              if ((uVar5 < 3) || (cVar3 != -0x11)) goto LAB_001016c3;
              goto LAB_00101788;
            }
            uVar6 = uVar5 + 1;
            puVar8 = (uint *)((long)puVar8 + 1);
          } while (uVar6 != uVar4);
          if (*(char *)((long)puVar1 + uVar11) != '\0') {
            return 1;
          }
          if ((uVar6 < 3) || (cVar3 != -0x11)) {
            uVar6 = uVar5 + 2;
            iVar10 = -1;
          }
          else {
LAB_00101788:
            if ((*(char *)((long)param_3 + 5) == -0x45) && (*(char *)((long)param_3 + 6) == -0x41))
            {
              return 1;
            }
LAB_001016c3:
            uVar6 = uVar6 + 1;
            pcVar9 = (char *)0x0;
            iVar10 = uVar4 - uVar6;
            if (iVar10 == 0) goto LAB_001016d0;
          }
          pcVar9 = (char *)((long)puVar1 + (ulong)uVar6);
        }
LAB_001016d0:
        uVar7 = ktxHashList_AddKVPair_part_0(param_1,puVar1,iVar10,pcVar9);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        fVar12 = (float)uVar11 * _LC2;
        if ((float)((uint)fVar12 & _LC4) < _LC3) {
          fVar12 = (float)((uint)((float)(int)fVar12 +
                                 (float)(-(uint)((float)(int)fVar12 < fVar12) & _LC5)) |
                          ~_LC4 & (uint)fVar12);
        }
        param_3 = (uint *)(((long)(fVar12 * __LC6) & 0xffffffffU) + (long)puVar1);
      } while (param_3 < puVar2);
    }
    uVar7 = 0;
  }
  return uVar7;
}



undefined8 ktxHashListEntry_GetKey(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    *param_2 = *param_1;
    *param_3 = *(undefined8 *)(param_1 + 2);
    return 0;
  }
  return 0xb;
}



undefined8 ktxHashListEntry_GetValue(long param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != (int *)0x0) && (param_3 != (undefined8 *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = 0;
    *param_2 = iVar1;
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    *param_3 = uVar2;
    return 0;
  }
  return 0xb;
}


