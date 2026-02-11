
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double GetMBSSIM(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 local_40;
  
  iVar3 = 3;
  local_40 = 0.0;
  do {
    iVar1 = 3;
    do {
      dVar4 = (double)(*_VP8SSIMGetClipped)(param_1,0x20,param_2,0x20,iVar1,iVar3,0x10,0x10);
      local_40 = dVar4 + local_40;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xd);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xd);
  iVar3 = 1;
  do {
    iVar1 = 1;
    do {
      dVar4 = (double)(*_VP8SSIMGetClipped)(param_1 + 0x10,0x20,param_2 + 0x10,0x20,iVar3,iVar1,8,8)
      ;
      iVar2 = iVar1 + 1;
      dVar5 = (double)(*_VP8SSIMGetClipped)(param_1 + 0x18,0x20,param_2 + 0x18,0x20,iVar3,iVar1,8,8)
      ;
      local_40 = dVar4 + local_40 + dVar5;
      iVar1 = iVar2;
    } while (iVar2 != 7);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 7);
  return local_40;
}



undefined1 VP8FilterStrengthFromDelta(int param_1,int param_2)

{
  if (0x3f < param_2) {
    param_2 = 0x3f;
  }
  return kLevelsFromDelta[(long)param_2 + (long)param_1 * 0x40];
}



void VP8InitFilter(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x140);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[0xff] = 0;
    uVar1 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8)) +
                    0x800U >> 3);
    puVar2 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    VP8SSIMDspInit();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8StoreFilterStats(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double *pdVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  double dVar18;
  
  bVar17 = 0;
  uVar10 = **(byte **)(param_1 + 0x30) >> 5 & 3;
  lVar7 = (ulong)uVar10 * 0x2e8 + *(long *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar7 + 0x508);
  iVar16 = (uint)(3 < iVar1 * 2) * 3 + 1;
  if ((*(long *)(param_1 + 0x140) != 0) && ((**(byte **)(param_1 + 0x30) & 0x13) != 0x11)) {
    iVar9 = *(int *)(lVar7 + 0x50c);
    iVar15 = -iVar1;
    dVar18 = (double)GetMBSSIM(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    pdVar12 = (double *)((ulong)uVar10 * 0x200 + *(long *)(param_1 + 0x140));
    *pdVar12 = dVar18 + *pdVar12;
    if (SBORROW4(iVar1,iVar15) == iVar1 * 2 < 0) {
      iVar9 = iVar9 - iVar1;
      do {
        if (iVar9 - 1U < 0x3f) {
          plVar3 = *(long **)(param_1 + 0x28);
          iVar2 = *(int *)(*plVar3 + 0x24);
          iVar11 = iVar9;
          if (0 < iVar2) {
            iVar6 = iVar9 >> 1;
            if (4 < iVar2) {
              iVar6 = iVar9 >> 2;
            }
            iVar11 = 9 - iVar2;
            if (iVar6 < 9 - iVar2) {
              iVar11 = iVar6;
            }
          }
          puVar13 = *(undefined8 **)(param_1 + 0x10);
          puVar4 = *(undefined8 **)(param_1 + 0x18);
          if (iVar11 < 1) {
            iVar11 = 1;
          }
          iVar2 = iVar11 + iVar9 * 2;
          *puVar4 = *puVar13;
          puVar4[0x3f] = puVar13[0x3f];
          lVar7 = (long)puVar4 - (long)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
          puVar13 = (undefined8 *)((long)puVar13 - lVar7);
          puVar14 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
          for (uVar8 = (ulong)((int)lVar7 + 0x200U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
            puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
          }
          if ((int)plVar3[2] == 1) {
            (*_VP8SimpleHFilter16i)(puVar4,0x20,iVar2);
            (*_VP8SimpleVFilter16i)(puVar4,0x20,iVar2);
          }
          else {
            uVar5 = 2;
            if (iVar9 < 0x28) {
              uVar5 = 0xe < iVar9;
            }
            (*_VP8HFilter16i)(puVar4,0x20,iVar2,iVar11,uVar5);
            (*_VP8HFilter8i)(puVar4 + 2,puVar4 + 3,0x20,iVar2,iVar11,uVar5);
            (*_VP8VFilter16i)(puVar4,0x20,iVar2,iVar11,uVar5);
            (*_VP8VFilter8i)(puVar4 + 2,puVar4 + 3,0x20,iVar2,iVar11,uVar5);
          }
          dVar18 = (double)GetMBSSIM(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
          lVar7 = (long)iVar9 + (ulong)uVar10 * 0x40;
          *(double *)(*(long *)(param_1 + 0x140) + lVar7 * 8) =
               dVar18 + *(double *)(*(long *)(param_1 + 0x140) + lVar7 * 8);
        }
        iVar15 = iVar15 + iVar16;
        iVar9 = iVar9 + iVar16;
      } while (iVar15 <= iVar1);
    }
  }
  return;
}



void VP8AdjustFilterStrength(long param_1)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  double *pdVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  double dVar13;
  
  dVar4 = _LC1;
  pdVar8 = *(double **)(param_1 + 0x140);
  plVar2 = *(long **)(param_1 + 0x28);
  if (pdVar8 != (double *)0x0) {
    puVar11 = (undefined4 *)((long)plVar2 + 0x50c);
    pdVar1 = pdVar8 + 0x100;
    do {
      uVar6 = 1;
      uVar9 = 0;
      dVar13 = *pdVar8 * dVar4;
      do {
        if (dVar13 < pdVar8[uVar6]) {
          uVar9 = uVar6 & 0xffffffff;
          dVar13 = pdVar8[uVar6];
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x40);
      pdVar8 = pdVar8 + 0x40;
      *puVar11 = (int)uVar9;
      puVar11 = puVar11 + 0xba;
    } while (pdVar1 != pdVar8);
    return;
  }
  if (0 < *(int *)(*plVar2 + 0x20)) {
    lVar3 = plVar2[3];
    puVar10 = (ushort *)((long)plVar2 + 0x342);
    uVar7 = 0;
    do {
      iVar5 = (int)((uint)*puVar10 * *(int *)(puVar10 + 0xe7)) >> 3;
      if (0x3f < iVar5) {
        iVar5 = 0x3f;
      }
      uVar12 = *(uint *)(puVar10 + 0xe5);
      if ((int)uVar12 < (int)(uint)(byte)kLevelsFromDelta[(long)iVar5 + (long)(int)lVar3 * 0x40]) {
        uVar12 = (uint)(byte)kLevelsFromDelta[(long)iVar5 + (long)(int)lVar3 * 0x40];
        *(uint *)(puVar10 + 0xe5) = uVar12;
      }
      if ((int)uVar7 < (int)uVar12) {
        uVar7 = uVar12;
      }
      puVar10 = puVar10 + 0x174;
    } while ((ushort *)((long)plVar2 + 0xee2) != puVar10);
    *(uint *)((long)plVar2 + 0x14) = uVar7;
  }
  return;
}


