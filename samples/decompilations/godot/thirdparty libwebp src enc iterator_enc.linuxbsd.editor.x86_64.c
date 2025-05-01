
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitLeft(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar3 = _UNK_001012a8;
  uVar2 = __LC0;
  uVar4 = 0x7f;
  if (0 < *(int *)(param_1 + 4)) {
    uVar4 = 0x81;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x178) + -1) = uVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x170) + -1) = uVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x168) + -1) = uVar4;
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  **(undefined8 **)(param_1 + 0x170) = 0x8181818181818181;
  **(undefined8 **)(param_1 + 0x178) = 0x8181818181818181;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(long *)(param_1 + 0x160) != 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}



void ImportBlock(undefined8 *param_1,int param_2,undefined8 *param_3,uint param_4,ulong param_5,
                uint param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  
  iVar7 = (int)param_5;
  if (0 < iVar7) {
    uVar8 = (ulong)(int)param_4;
    puVar6 = param_3;
    do {
      if (uVar8 < 8) {
        if ((param_4 & 4) == 0) {
          if ((uVar8 != 0) && (*(undefined1 *)puVar6 = *(undefined1 *)param_1, (param_4 & 2) != 0))
          {
            *(undefined2 *)((long)puVar6 + (uVar8 - 2)) =
                 *(undefined2 *)((long)param_1 + (uVar8 - 2));
          }
        }
        else {
          *(undefined4 *)puVar6 = *(undefined4 *)param_1;
          *(undefined4 *)((long)puVar6 + (uVar8 - 4)) = *(undefined4 *)((long)param_1 + (uVar8 - 4))
          ;
        }
      }
      else {
        lVar4 = (long)puVar6 - ((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
        *puVar6 = *param_1;
        uVar5 = lVar4 + uVar8 & 0xfffffffffffffff8;
        *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = *(undefined8 *)((long)param_1 + (uVar8 - 8));
        if (7 < uVar5) {
          uVar2 = 0;
          do {
            *(undefined8 *)(((ulong)(puVar6 + 1) & 0xfffffffffffffff8) + uVar2) =
                 *(undefined8 *)((long)param_1 + (uVar2 - lVar4));
            uVar2 = uVar2 + 8;
          } while (uVar2 < uVar5);
        }
      }
      if ((int)param_4 < (int)param_6) {
        memset((undefined1 *)((long)puVar6 + uVar8),(uint)*(byte *)((long)puVar6 + (uVar8 - 1)),
               (long)(int)(param_6 - param_4));
      }
      puVar6 = puVar6 + 4;
      param_1 = (undefined8 *)((long)param_1 + (long)param_2);
    } while (puVar6 != param_3 + (long)iVar7 * 4);
    param_5 = param_5 & 0xffffffff;
    param_3 = param_3 + param_5 * 4;
    if ((int)param_6 <= iVar7) {
      return;
    }
  }
  do {
    uVar8 = (ulong)(param_3 + 1) & 0xfffffffffffffff8;
    *param_3 = param_3[-4];
    *(undefined8 *)((long)param_3 + ((ulong)param_6 - 8)) =
         *(undefined8 *)((long)param_3 + ((ulong)param_6 - 0x28));
    uVar1 = ((int)param_3 - (int)uVar8) + param_6 & 0xfffffff8;
    if (7 < uVar1) {
      uVar5 = 0;
      do {
        uVar3 = (int)uVar5 + 8;
        *(undefined8 *)(uVar8 + uVar5) = *(undefined8 *)((uVar8 - 0x20) + uVar5);
        uVar5 = (ulong)uVar3;
      } while (uVar3 < uVar1);
    }
    uVar1 = (int)param_5 + 1;
    param_5 = (ulong)uVar1;
    param_3 = param_3 + 4;
  } while ((int)uVar1 < (int)param_6);
  return;
}



void VP8IteratorSetRow(undefined4 *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 10);
  param_1[1] = param_2;
  *param_1 = 0;
  *(long *)(param_1 + 0xe) =
       lVar2 + 0x70 + (long)(int)(*(int *)(lVar2 + 0x3c) - 1U & param_2) * 0x30;
  iVar1 = *(int *)(lVar2 + 0x30);
  *(long *)(param_1 + 0x10) =
       (long)(int)(*(int *)(lVar2 + 0x38) * param_2 * 4) + *(long *)(lVar2 + 0x5c68);
  uVar3 = *(undefined8 *)(lVar2 + 0x5c78);
  uVar4 = *(undefined8 *)(lVar2 + 0x5c80);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(lVar2 + 0x5c70);
  lVar2 = *(long *)(lVar2 + 0x5c60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x62) = uVar4;
  *(long *)(param_1 + 0xc) = lVar2 + (long)(int)(param_2 * iVar1) * 4;
  InitLeft();
  return;
}



void VP8IteratorReset(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  
  bVar7 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  lVar4 = param_1;
  VP8IteratorSetRow(param_1,0);
  lVar1 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(lVar6 + 0x30) * *(int *)(lVar6 + 0x34);
  *(ulong *)(lVar4 + 0x14c) = CONCAT44(iVar2,iVar2);
  memset(*(void **)(lVar1 + 0x5c78),0x7f,(long)(*(int *)(lVar1 + 0x30) << 4) * 2);
  memset(*(void **)(lVar1 + 0x5c70),0,(long)*(int *)(lVar1 + 0x30) << 2);
  if (*(void **)(lVar1 + 0x5c90) != (void *)0x0) {
    memset(*(void **)(lVar1 + 0x5c90),0,(long)*(int *)(lVar1 + 0x30) << 2);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  puVar5 = (undefined8 *)(param_1 + 0xd8U & 0xfffffffffffffff8);
  uVar3 = (ulong)(((int)param_1 - (int)puVar5) + 0x130U >> 3);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}



void VP8IteratorSetCountDown(long param_1,undefined4 param_2)

{
  *(ulong *)(param_1 + 0x14c) = CONCAT44(param_2,param_2);
  return;
}



bool VP8IteratorIsDone(long param_1)

{
  return *(int *)(param_1 + 0x14c) < 1;
}



void VP8IteratorInit(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_2 + 0x207U & 0xffffffffffffffe0;
  *(long *)(param_2 + 0x28) = param_1;
  *(ulong *)(param_2 + 8) = uVar2;
  *(ulong *)(param_2 + 0x10) = uVar2 + 0x200;
  *(ulong *)(param_2 + 0x20) = uVar2 + 0x600;
  uVar1 = *(undefined8 *)(param_1 + 0x5c88);
  *(ulong *)(param_2 + 0x18) = uVar2 + 0x400;
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_1 + 0x218);
  uVar2 = param_2 + 0x1b0U & 0xffffffffffffffe0;
  *(ulong *)(param_2 + 0x168) = uVar2;
  *(ulong *)(param_2 + 0x178) = uVar2 + 0x30;
  uVar1 = *(undefined8 *)(param_1 + 0x5c90);
  *(ulong *)(param_2 + 0x170) = uVar2 + 0x20;
  *(undefined8 *)(param_2 + 0x160) = uVar1;
  VP8IteratorReset(param_2);
  return;
}



undefined8 VP8IteratorProgress(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if (*(long *)(lVar2 + 0x90) != 0) {
      iVar1 = *(int *)(param_1 + 0x150);
      iVar4 = *(int *)(param_1 + 0x154);
      if (0 < iVar1) {
        iVar4 = iVar4 + ((iVar1 - *(int *)(param_1 + 0x14c)) * param_2) / iVar1;
      }
      uVar3 = WebPReportProgress(lVar2,iVar4,*(long *)(param_1 + 0x28) + 0x218);
      return uVar3;
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8IteratorImport(int *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar19 = param_1[1];
  iVar17 = *param_1;
  lVar10 = *(long *)(*(long *)(param_1 + 10) + 8);
  lVar5 = (long)((*(int *)(lVar10 + 0x28) * iVar19 + iVar17) * 0x10) + *(long *)(lVar10 + 0x10);
  lVar6 = (long)((*(int *)(lVar10 + 0x2c) * iVar19 + iVar17) * 8);
  lVar18 = *(long *)(lVar10 + 0x18) + lVar6;
  lVar6 = lVar6 + *(long *)(lVar10 + 0x20);
  iVar15 = *(int *)(lVar10 + 8) + iVar17 * -0x10;
  iVar21 = 0x10;
  if (iVar15 < 0x11) {
    iVar21 = iVar15;
  }
  iVar4 = *(int *)(lVar10 + 0xc) + iVar19 * -0x10;
  iVar20 = 0x10;
  if (iVar4 < 0x11) {
    iVar20 = iVar4;
  }
  iVar12 = iVar21 + 1 >> 1;
  ImportBlock(lVar5,*(int *)(lVar10 + 0x28),*(undefined8 *)(param_1 + 2),iVar21,iVar20,0x10);
  iVar16 = iVar20 + 1 >> 1;
  ImportBlock(lVar18,*(undefined4 *)(lVar10 + 0x2c),*(long *)(param_1 + 2) + 0x10,iVar12,iVar16,8);
  ImportBlock(lVar6,*(undefined4 *)(lVar10 + 0x2c),*(long *)(param_1 + 2) + 0x18,iVar12,iVar16,8);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (iVar17 == 0) {
    InitLeft(param_1);
  }
  else {
    if (iVar19 == 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x5e) + -1) = 0x7f;
      *(undefined1 *)(*(long *)(param_1 + 0x5c) + -1) = 0x7f;
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + -1) = 0x7f;
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + -1) =
           *(undefined1 *)(lVar5 + (int)~*(uint *)(lVar10 + 0x28));
      *(undefined1 *)(*(long *)(param_1 + 0x5c) + -1) =
           *(undefined1 *)(lVar18 + (int)~*(uint *)(lVar10 + 0x2c));
      *(undefined1 *)(*(long *)(param_1 + 0x5e) + -1) =
           *(undefined1 *)(lVar6 + (int)~*(uint *)(lVar10 + 0x2c));
    }
    lVar9 = *(long *)(param_1 + 0x5a);
    iVar17 = *(int *)(lVar10 + 0x28);
    puVar11 = (undefined1 *)(lVar5 + -1);
    if (iVar4 < 1) {
      iVar17 = 0;
LAB_001006bf:
      puVar11 = (undefined1 *)(lVar9 + iVar17);
      do {
        puVar7 = puVar11 + 1;
        *puVar11 = *(undefined1 *)(lVar9 + -1 + (long)iVar20);
        puVar11 = puVar7;
      } while ((undefined1 *)(lVar9 + 1 + (long)iVar17 + (ulong)(0xf - iVar17)) != puVar7);
      puVar11 = *(undefined1 **)(param_1 + 0x5c);
      iVar17 = *(int *)(lVar10 + 0x2c);
      lVar9 = 0;
      if (0 < iVar16) goto LAB_0010070d;
LAB_00100740:
      do {
        puVar11[lVar9] = puVar11[(long)iVar16 + -1];
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 != 8);
      puVar11 = *(undefined1 **)(param_1 + 0x5e);
      iVar17 = *(int *)(lVar10 + 0x2c);
      if (0 < iVar16) goto LAB_00100774;
      iVar17 = 0;
    }
    else {
      lVar13 = 0;
      do {
        uVar1 = *puVar11;
        puVar11 = puVar11 + iVar17;
        *(undefined1 *)(lVar9 + lVar13) = uVar1;
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < iVar20);
      iVar17 = iVar20;
      if (iVar4 < 0x10) goto LAB_001006bf;
      puVar11 = *(undefined1 **)(param_1 + 0x5c);
      iVar17 = *(int *)(lVar10 + 0x2c);
LAB_0010070d:
      puVar14 = (undefined1 *)(lVar18 + -1);
      puVar7 = puVar11;
      do {
        uVar1 = *puVar14;
        puVar8 = puVar7 + 1;
        puVar14 = puVar14 + iVar17;
        *puVar7 = uVar1;
        puVar7 = puVar8;
      } while (puVar11 + iVar16 != puVar8);
      lVar9 = (long)iVar16;
      if (iVar16 != 8) goto LAB_00100740;
      puVar11 = *(undefined1 **)(param_1 + 0x5e);
      iVar17 = *(int *)(lVar10 + 0x2c);
LAB_00100774:
      puVar14 = (undefined1 *)(lVar6 + -1);
      puVar7 = puVar11;
      do {
        uVar1 = *puVar14;
        puVar8 = puVar7 + 1;
        puVar14 = puVar14 + iVar17;
        *puVar7 = uVar1;
        puVar7 = puVar8;
      } while (puVar11 + iVar16 != puVar8);
      iVar17 = iVar16;
      if (iVar16 == 8) goto LAB_001007b7;
    }
    lVar9 = (long)iVar17;
    do {
      puVar11[lVar9] = puVar11[(long)iVar16 + -1];
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 != 8);
  }
LAB_001007b7:
  *(undefined8 **)(param_1 + 0x60) = param_2;
  *(undefined8 **)(param_1 + 0x62) = param_2 + 2;
  uVar3 = _UNK_001012b8;
  uVar2 = __LC1;
  if (iVar19 == 0) {
    *param_2 = __LC1;
    param_2[1] = uVar3;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    return;
  }
  iVar19 = *(int *)(lVar10 + 0x28);
  if (iVar15 < 1) {
    iVar19 = 0;
LAB_0010085f:
    puVar11 = (undefined1 *)((long)param_2 + (long)iVar19);
    do {
      puVar7 = puVar11 + 1;
      *puVar11 = *(undefined1 *)((long)param_2 + (long)iVar21 + -1);
      puVar11 = puVar7;
    } while (puVar7 != (undefined1 *)((long)param_2 + (ulong)(0xf - iVar19) + (long)iVar19 + 1));
    iVar19 = *(int *)(lVar10 + 0x2c);
    if (0 < iVar12) goto LAB_001008a7;
    lVar5 = 0;
LAB_001008d2:
    do {
      *(undefined1 *)((long)param_2 + lVar5 + 0x10) =
           *(undefined1 *)((long)param_2 + (long)iVar12 + 0xf);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 != 8);
    iVar19 = *(int *)(lVar10 + 0x2c);
    if (iVar12 < 1) {
      lVar10 = 0;
      goto LAB_0010092f;
    }
  }
  else {
    lVar9 = 0;
    do {
      *(undefined1 *)((long)param_2 + lVar9) = *(undefined1 *)((lVar5 - iVar19) + lVar9);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar21);
    iVar19 = iVar21;
    if (iVar15 < 0x10) goto LAB_0010085f;
    iVar19 = *(int *)(lVar10 + 0x2c);
LAB_001008a7:
    lVar5 = 0;
    do {
      *(undefined1 *)((long)param_2 + lVar5 + 0x10) = *(undefined1 *)((lVar18 - iVar19) + lVar5);
      lVar5 = lVar5 + 1;
    } while (iVar12 != lVar5);
    lVar5 = (long)iVar12;
    if (iVar12 != 8) goto LAB_001008d2;
    iVar19 = *(int *)(lVar10 + 0x2c);
  }
  lVar10 = 0;
  do {
    *(undefined1 *)((long)param_2 + lVar10 + 0x18) = *(undefined1 *)((lVar6 - iVar19) + lVar10);
    lVar10 = lVar10 + 1;
  } while (lVar10 != iVar12);
  lVar10 = (long)iVar12;
  if (iVar12 == 8) {
    return;
  }
LAB_0010092f:
  do {
    *(undefined1 *)((long)param_2 + lVar10 + 0x18) =
         *(undefined1 *)((long)param_2 + (long)iVar12 + 0x17);
    lVar10 = lVar10 + 1;
  } while ((int)lVar10 != 8);
  return;
}



void VP8IteratorExport(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  
  if (*(int *)(**(long **)(param_1 + 10) + 0x40) != 0) {
    lVar8 = (*(long **)(param_1 + 10))[1];
    iVar1 = param_1[1];
    iVar2 = *param_1;
    iVar3 = *(int *)(lVar8 + 0x28);
    puVar4 = *(undefined8 **)(param_1 + 4);
    uVar17 = *(int *)(lVar8 + 0xc) + iVar1 * -0x10;
    puVar15 = puVar4 + 2;
    puVar14 = puVar4 + 3;
    lVar6 = (long)((*(int *)(lVar8 + 0x2c) * iVar1 + iVar2) * 8);
    uVar12 = *(int *)(lVar8 + 8) + iVar2 * -0x10;
    puVar16 = (undefined8 *)(*(long *)(lVar8 + 0x18) + lVar6);
    puVar7 = (undefined8 *)(lVar6 + *(long *)(lVar8 + 0x20));
    puVar13 = (undefined8 *)((long)((iVar3 * iVar1 + iVar2) * 0x10) + *(long *)(lVar8 + 0x10));
    if (0x10 < (int)uVar12) {
      uVar12 = 0x10;
    }
    uVar5 = 0x10;
    if ((int)uVar17 < 0x11) {
      uVar5 = uVar17;
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulong)(int)uVar12;
      puVar18 = puVar4;
      uVar17 = uVar5;
      do {
        if (uVar19 < 8) {
          if ((uVar12 & 4) == 0) {
            if ((uVar19 != 0) &&
               (*(undefined1 *)puVar13 = *(undefined1 *)puVar18, (uVar12 & 2) != 0)) {
              *(undefined2 *)((long)puVar13 + (uVar19 - 2)) =
                   *(undefined2 *)((long)puVar18 + (uVar19 - 2));
            }
          }
          else {
            *(undefined4 *)puVar13 = *(undefined4 *)puVar18;
            *(undefined4 *)((long)puVar13 + (uVar19 - 4)) =
                 *(undefined4 *)((long)puVar18 + (uVar19 - 4));
          }
        }
        else {
          lVar6 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
          *puVar13 = *puVar18;
          uVar11 = lVar6 + uVar19 & 0xfffffffffffffff8;
          *(undefined8 *)((long)puVar13 + (uVar19 - 8)) =
               *(undefined8 *)((long)puVar18 + (uVar19 - 8));
          if (7 < uVar11) {
            uVar9 = 0;
            do {
              *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar9) =
                   *(undefined8 *)((long)puVar18 + (uVar9 - lVar6));
              uVar9 = uVar9 + 8;
            } while (uVar9 < uVar11);
          }
        }
        puVar13 = (undefined8 *)((long)puVar13 + (long)iVar3);
        puVar18 = puVar18 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      iVar1 = *(int *)(lVar8 + 0x2c);
      uVar12 = (int)(uVar12 + 1) >> 1;
      uVar11 = (ulong)(((int)(uVar5 + 1) >> 1) - 1);
      uVar19 = (ulong)(int)uVar12;
      do {
        if (uVar19 < 8) {
          if ((uVar12 & 4) == 0) {
            if ((uVar19 != 0) &&
               (*(undefined1 *)puVar16 = *(undefined1 *)puVar15, (uVar12 & 2) != 0)) {
              *(undefined2 *)((long)puVar16 + (uVar19 - 2)) =
                   *(undefined2 *)((long)puVar15 + (uVar19 - 2));
            }
          }
          else {
            *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
            *(undefined4 *)((long)puVar16 + (uVar19 - 4)) =
                 *(undefined4 *)((long)puVar15 + (uVar19 - 4));
          }
        }
        else {
          lVar6 = (long)puVar16 - ((ulong)(puVar16 + 1) & 0xfffffffffffffff8);
          *puVar16 = *puVar15;
          uVar9 = lVar6 + uVar19 & 0xfffffffffffffff8;
          *(undefined8 *)((long)puVar16 + (uVar19 - 8)) =
               *(undefined8 *)((long)puVar15 + (uVar19 - 8));
          if (7 < uVar9) {
            uVar10 = 0;
            do {
              *(undefined8 *)(((ulong)(puVar16 + 1) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)puVar15 + (uVar10 - lVar6));
              uVar10 = uVar10 + 8;
            } while (uVar10 < uVar9);
          }
        }
        puVar15 = puVar15 + 4;
        puVar16 = (undefined8 *)((long)puVar16 + (long)iVar1);
      } while (puVar15 != puVar4 + uVar11 * 4 + 6);
      iVar1 = *(int *)(lVar8 + 0x2c);
      do {
        if (uVar19 < 8) {
          if ((uVar19 & 4) == 0) {
            if ((uVar19 != 0) && (*(undefined1 *)puVar7 = *(undefined1 *)puVar14, (uVar19 & 2) != 0)
               ) {
              *(undefined2 *)((long)puVar7 + (uVar19 - 2)) =
                   *(undefined2 *)((long)puVar14 + (uVar19 - 2));
            }
          }
          else {
            *(undefined4 *)puVar7 = *(undefined4 *)puVar14;
            *(undefined4 *)((long)puVar7 + (uVar19 - 4)) =
                 *(undefined4 *)((long)puVar14 + (uVar19 - 4));
          }
        }
        else {
          *puVar7 = *puVar14;
          *(undefined8 *)((long)puVar7 + (uVar19 - 8)) =
               *(undefined8 *)((long)puVar14 + (uVar19 - 8));
          lVar8 = (long)puVar7 - ((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
          uVar9 = lVar8 + uVar19 & 0xfffffffffffffff8;
          if (7 < uVar9) {
            uVar10 = 0;
            do {
              *(undefined8 *)(((ulong)(puVar7 + 1) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)puVar14 + (uVar10 - lVar8));
              uVar10 = uVar10 + 8;
            } while (uVar10 < uVar9);
          }
        }
        puVar14 = puVar14 + 4;
        puVar7 = (undefined8 *)((long)puVar7 + (long)iVar1);
      } while (puVar14 != puVar4 + uVar11 * 4 + 7);
    }
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8IteratorNzToBytes(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar5 = _UNK_001012dc;
  uVar4 = _UNK_001012d8;
  uVar3 = _UNK_001012d4;
  uVar2 = __LC3;
  uVar1 = (*(uint **)(param_1 + 0x48))[-1];
  uVar21 = **(uint **)(param_1 + 0x48);
  uVar10 = uVar21 & __LC4;
  uVar11 = uVar21 & _UNK_001012e4;
  uVar12 = uVar21 & _UNK_001012e8;
  uVar13 = uVar21 & _UNK_001012ec;
  uVar6 = uVar21 & __LC5;
  uVar7 = uVar1 & _UNK_001012f4;
  uVar8 = uVar1 & _UNK_001012f8;
  uVar9 = uVar1 & _UNK_001012fc;
  uVar14 = uVar1 & __LC6;
  uVar15 = uVar1 & _UNK_00101304;
  uVar16 = uVar1 & _UNK_00101308;
  uVar17 = uVar1 & _UNK_0010130c;
  uVar18 = ~-(uint)((__LC2 & uVar21) == 0) & __LC3;
  uVar19 = ~-(uint)((_UNK_001012c4 & uVar21) == 0) & _UNK_001012d4;
  uVar20 = ~-(uint)((_UNK_001012c8 & uVar21) == 0) & _UNK_001012d8;
  uVar21 = ~-(uint)((_UNK_001012cc & uVar21) == 0) & _UNK_001012dc;
  *(uint *)(param_1 + 0xc4) = uVar1 >> 0x17 & 1;
  *(uint *)(param_1 + 0x84) = uVar18;
  *(uint *)(param_1 + 0x88) = uVar19;
  *(uint *)(param_1 + 0x8c) = uVar20;
  *(uint *)(param_1 + 0x90) = uVar21;
  *(uint *)(param_1 + 0x94) = ~-(uint)(uVar10 == 0) & uVar2;
  *(uint *)(param_1 + 0x98) = ~-(uint)(uVar11 == 0) & uVar3;
  *(uint *)(param_1 + 0x9c) = ~-(uint)(uVar12 == 0) & uVar4;
  *(uint *)(param_1 + 0xa0) = ~-(uint)(uVar13 == 0) & uVar5;
  *(uint *)(param_1 + 0xa4) = ~-(uint)(uVar6 == 0) & uVar2;
  *(uint *)(param_1 + 0xa8) = ~-(uint)(uVar7 == 0) & uVar3;
  *(uint *)(param_1 + 0xac) = ~-(uint)(uVar8 == 0) & uVar4;
  *(uint *)(param_1 + 0xb0) = ~-(uint)(uVar9 == 0) & uVar5;
  *(uint *)(param_1 + 0xb4) = ~-(uint)(uVar14 == 0) & uVar2;
  *(uint *)(param_1 + 0xb8) = ~-(uint)(uVar15 == 0) & uVar3;
  *(uint *)(param_1 + 0xbc) = ~-(uint)(uVar16 == 0) & uVar4;
  *(uint *)(param_1 + 0xc0) = ~-(uint)(uVar17 == 0) & uVar5;
  return;
}



void VP8IteratorBytesToNz(long param_1)

{
  **(uint **)(param_1 + 0x48) =
       *(int *)(param_1 + 0x84) << 0xc | *(int *)(param_1 + 0x88) << 0xd |
       *(int *)(param_1 + 0x8c) << 0xe | *(int *)(param_1 + 0x90) << 0xf |
       *(int *)(param_1 + 0x94) << 0x12 | *(int *)(param_1 + 0x98) << 0x13 |
       *(int *)(param_1 + 0x9c) << 0x16 | *(int *)(param_1 + 0xa0) << 0x17 |
       *(int *)(param_1 + 0xc0) << 0x15 | *(int *)(param_1 + 0xb8) << 0x11 |
       *(int *)(param_1 + 0xa8) * 8 | *(int *)(param_1 + 0xac) << 7 |
       *(int *)(param_1 + 0xa4) << 0x18 | *(int *)(param_1 + 0xb0) << 0xb;
  return;
}



void VP8IteratorSaveBoundary(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  lVar2 = *(long *)(param_1 + 10);
  iVar1 = param_1[1];
  lVar3 = *(long *)(param_1 + 4);
  if (*param_1 < *(int *)(lVar2 + 0x30) + -1) {
    lVar6 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + lVar6) =
           *(undefined1 *)(lVar3 + 0xf + lVar6 * 0x20);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    puVar7 = (undefined1 *)(lVar3 + 0x17);
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x5c) + lVar6) = *puVar7;
      *(undefined1 *)(*(long *)(param_1 + 0x5e) + lVar6) = puVar7[8];
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x20;
    } while (lVar6 != 8);
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + -1) =
         *(undefined1 *)(*(long *)(param_1 + 0x60) + 0xf);
    *(undefined1 *)(*(long *)(param_1 + 0x5c) + -1) = *(undefined1 *)(*(long *)(param_1 + 0x62) + 7)
    ;
    *(undefined1 *)(*(long *)(param_1 + 0x5e) + -1) =
         *(undefined1 *)(*(long *)(param_1 + 0x62) + 0xf);
  }
  if (*(int *)(lVar2 + 0x34) + -1 <= iVar1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(lVar3 + 0x1e8);
  *puVar4 = *(undefined8 *)(lVar3 + 0x1e0);
  puVar4[1] = uVar5;
  puVar4 = *(undefined8 **)(param_1 + 0x62);
  uVar5 = *(undefined8 *)(lVar3 + 0xf8);
  *puVar4 = *(undefined8 *)(lVar3 + 0xf0);
  puVar4[1] = uVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool VP8IteratorNext(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  if (iVar1 + 1 == *(int *)(*(long *)(param_1 + 10) + 0x30)) {
    param_1[1] = param_1[1] + 1;
    VP8IteratorSetRow();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10) + __LC7;
    lVar3 = *(long *)(param_1 + 0x12) + _UNK_00101318;
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 4;
    *(long *)(param_1 + 0x10) = lVar2;
    *(long *)(param_1 + 0x12) = lVar3;
    lVar2 = *(long *)(param_1 + 0x62) + _UNK_00101328;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + __LC8;
    *(long *)(param_1 + 0x62) = lVar2;
  }
  iVar1 = param_1[0x53];
  param_1[0x53] = iVar1 + -1;
  return 0 < iVar1 + -1;
}



void VP8SetIntra16Mode(long param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x40);
  iVar1 = 4;
  do {
    *piVar2 = (uint)param_2 * 0x1010101;
    piVar2 = (int *)((long)piVar2 + (long)*(int *)(*(long *)(param_1 + 0x28) + 0x38));
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  **(byte **)(param_1 + 0x30) = **(byte **)(param_1 + 0x30) & 0xfc | 1;
  return;
}



void VP8SetIntra4Mode(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x40);
  puVar1 = param_2 + 4;
  do {
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    *puVar3 = uVar2;
    puVar3 = (undefined4 *)((long)puVar3 + (long)*(int *)(*(long *)(param_1 + 0x28) + 0x38));
  } while (param_2 != puVar1);
  **(byte **)(param_1 + 0x30) = **(byte **)(param_1 + 0x30) & 0xfc;
  return;
}



void VP8SetIntraUVMode(long param_1,byte param_2)

{
  **(byte **)(param_1 + 0x30) = **(byte **)(param_1 + 0x30) & 0xf3 | (param_2 & 3) * '\x04';
  return;
}



void VP8SetSkip(long param_1,uint param_2)

{
  **(byte **)(param_1 + 0x30) = **(byte **)(param_1 + 0x30) & 0xef | (byte)((param_2 & 1) << 4);
  return;
}



void VP8SetSegment(long param_1,uint param_2)

{
  **(byte **)(param_1 + 0x30) = **(byte **)(param_1 + 0x30) & 0x9f | (byte)((param_2 & 3) << 5);
  return;
}



void VP8IteratorStartI4(int *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  int *piVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  
  lVar2 = *(long *)(param_1 + 0x5a);
  lVar3 = *(long *)(param_1 + 10);
  param_1[0x20] = 0;
  *(long *)(param_1 + 0x1e) = (long)param_1 + 0x61;
  puVar4 = (undefined1 *)(lVar2 + 0xf);
  piVar6 = param_1 + 0x14;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + -1;
    *(undefined1 *)piVar6 = uVar1;
    piVar6 = (int *)((long)piVar6 + 1);
  } while (puVar4 != (undefined1 *)(lVar2 + -2));
  lVar2 = *(long *)(param_1 + 0x60);
  lVar5 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar5 + 0x61) = *(undefined1 *)(lVar2 + lVar5);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x10);
  if (*(int *)(lVar3 + 0x30) + -1 <= *param_1) {
    auVar7 = pshuflw(in_XMM0,ZEXT216(CONCAT11((char)param_1[0x1c],(char)param_1[0x1c])),0);
    *(int *)((long)param_1 + 0x71) = auVar7._0_4_;
    VP8IteratorNzToBytes();
    return;
  }
  *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)(lVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x72) = *(undefined1 *)(lVar2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x73) = *(undefined1 *)(lVar2 + 0x12);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(lVar2 + 0x13);
  VP8IteratorNzToBytes();
  return;
}



bool VP8IteratorRotateI4(long param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_2 = param_2 + (ulong)*(ushort *)(&VP8Scan + (long)*(int *)(param_1 + 0x80) * 2);
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)((long)puVar2 + -3) = *(undefined1 *)(param_2 + 0x61);
  *(undefined1 *)((long)puVar2 + -2) = *(undefined1 *)(param_2 + 0x62);
  *(undefined1 *)((long)puVar2 + -1) = *(undefined1 *)(param_2 + 99);
  if ((~*(uint *)(param_1 + 0x80) & 3) == 0) {
    *puVar2 = puVar2[1];
  }
  else {
    *(undefined1 *)puVar2 = *(undefined1 *)(param_2 + 0x43);
    *(undefined1 *)((long)puVar2 + 1) = *(undefined1 *)(param_2 + 0x23);
    *(undefined1 *)((long)puVar2 + 2) = *(undefined1 *)(param_2 + 3);
  }
  iVar1 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 != 0x10) {
    *(ulong *)(param_1 + 0x78) = param_1 + 0x50 + (ulong)(byte)VP8TopLeftI4[iVar1];
  }
  return iVar1 != 0x10;
}


