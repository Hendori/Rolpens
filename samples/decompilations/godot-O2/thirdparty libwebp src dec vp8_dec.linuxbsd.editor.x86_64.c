
void VP8Clear_part_0(long param_1)

{
  long lVar1;
  
  lVar1 = WebPGetWorkerInterface();
  (**(code **)(lVar1 + 0x28))(param_1 + 0x98);
  WebPDeallocateAlphaMemory(param_1);
  WebPSafeFree(*(undefined8 *)(param_1 + 0xb48));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xb48) = 0;
  *(undefined8 *)(param_1 + 0xb50) = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  return;
}



int GetLargeValue(ulong *param_1,long param_2)

{
  byte bVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  bVar1 = *(byte *)(param_2 + 3);
  uVar7 = param_1[1];
  if (iVar3 < 0) {
    puVar2 = (ulong *)param_1[2];
    if (puVar2 < (ulong *)param_1[4]) {
      uVar4 = *puVar2;
      iVar3 = iVar3 + 0x38;
      param_1[2] = (long)puVar2 + 7;
      uVar4 = ((uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
               (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
               | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) >> 8 | *param_1 << 0x38;
      *param_1 = uVar4;
      goto LAB_0010008b;
    }
    VP8LoadFinalBytes();
    iVar3 = *(int *)((long)param_1 + 0xc);
  }
  uVar4 = *param_1;
LAB_0010008b:
  uVar5 = (uint)bVar1 * (int)uVar7 >> 8;
  uVar6 = uVar5 + 1;
  if ((uint)(uVar4 >> ((byte)iVar3 & 0x3f)) <= uVar5) {
    uVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    iVar3 = iVar3 - (uVar5 ^ 7);
    iVar8 = (uVar6 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    bVar1 = *(byte *)(param_2 + 4);
    if (iVar3 < 0) {
      puVar2 = (ulong *)param_1[2];
      if (puVar2 < (ulong *)param_1[4]) {
        uVar7 = *puVar2;
        iVar3 = iVar3 + 0x38;
        param_1[2] = (long)puVar2 + 7;
        uVar4 = uVar4 << 0x38 |
                ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                 (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                 (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
        *param_1 = uVar4;
      }
      else {
        VP8LoadFinalBytes(param_1);
        iVar3 = *(int *)((long)param_1 + 0xc);
        uVar4 = *param_1;
      }
    }
    uVar5 = (uint)bVar1 * iVar8 >> 8;
    uVar6 = uVar5 + 1;
    if ((uint)(uVar4 >> ((byte)iVar3 & 0x3f)) <= uVar5) {
      uVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      *(uint *)((long)param_1 + 0xc) = iVar3 - (uVar5 ^ 7);
      *(uint *)(param_1 + 1) = (uVar6 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
      return 2;
    }
    uVar5 = iVar8 - uVar5;
    uVar4 = uVar4 - ((ulong)uVar6 << ((byte)iVar3 & 0x3f));
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    *param_1 = uVar4;
    iVar3 = iVar3 - (uVar6 ^ 7);
    iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    bVar1 = *(byte *)(param_2 + 5);
    if (iVar3 < 0) {
      puVar2 = (ulong *)param_1[2];
      if (puVar2 < (ulong *)param_1[4]) {
        uVar7 = *puVar2;
        iVar3 = iVar3 + 0x38;
        param_1[2] = (long)puVar2 + 7;
        uVar4 = uVar4 << 0x38 |
                ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                 (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                 (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
        *param_1 = uVar4;
      }
      else {
        VP8LoadFinalBytes(param_1);
        uVar4 = *param_1;
        iVar3 = *(int *)((long)param_1 + 0xc);
      }
    }
    uVar6 = (uint)bVar1 * iVar8 >> 8;
    bVar12 = uVar6 < (uint)(uVar4 >> ((byte)iVar3 & 0x3f));
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    if (bVar12) {
      uVar5 = iVar8 - uVar6;
      *param_1 = uVar4 - (uVar7 << ((byte)iVar3 & 0x3f));
    }
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    *(uint *)((long)param_1 + 0xc) = iVar3 - (uVar6 ^ 7);
    *(uint *)(param_1 + 1) = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    return bVar12 + 3;
  }
  uVar5 = (int)uVar7 - uVar5;
  uVar4 = uVar4 - ((ulong)uVar6 << ((byte)iVar3 & 0x3f));
  uVar6 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  *param_1 = uVar4;
  iVar3 = iVar3 - (uVar6 ^ 7);
  iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
  *(int *)((long)param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 1) = iVar8;
  bVar1 = *(byte *)(param_2 + 6);
  if (iVar3 < 0) {
    puVar2 = (ulong *)param_1[2];
    if (puVar2 < (ulong *)param_1[4]) {
      uVar7 = *puVar2;
      iVar3 = iVar3 + 0x38;
      param_1[2] = (long)puVar2 + 7;
      uVar4 = uVar4 << 0x38 |
              ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
               (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18
               | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
      *param_1 = uVar4;
    }
    else {
      VP8LoadFinalBytes(param_1);
      iVar3 = *(int *)((long)param_1 + 0xc);
      uVar4 = *param_1;
    }
  }
  uVar5 = (uint)bVar1 * iVar8 >> 8;
  uVar6 = uVar5 + 1;
  if (uVar5 < (uint)(uVar4 >> ((byte)iVar3 & 0x3f))) {
    uVar5 = iVar8 - uVar5;
    uVar4 = uVar4 - ((ulong)uVar6 << ((byte)iVar3 & 0x3f));
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    *param_1 = uVar4;
    iVar3 = iVar3 - (uVar6 ^ 7);
    iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    bVar1 = *(byte *)(param_2 + 8);
    if (iVar3 < 0) {
      puVar2 = (ulong *)param_1[2];
      if (puVar2 < (ulong *)param_1[4]) {
        uVar7 = *puVar2;
        iVar3 = iVar3 + 0x38;
        param_1[2] = (long)puVar2 + 7;
        uVar4 = uVar4 << 0x38 |
                ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                 (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                 (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
        *param_1 = uVar4;
      }
      else {
        VP8LoadFinalBytes(param_1);
        uVar4 = *param_1;
        iVar3 = *(int *)((long)param_1 + 0xc);
      }
    }
    uVar6 = (uint)bVar1 * iVar8 >> 8;
    bVar12 = uVar6 < (uint)(uVar4 >> ((byte)iVar3 & 0x3f));
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    if (bVar12) {
      uVar5 = iVar8 - uVar6;
      *param_1 = uVar4 - (uVar7 << ((byte)iVar3 & 0x3f));
    }
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    iVar3 = iVar3 - (uVar6 ^ 7);
    iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    bVar1 = *(byte *)(param_2 + (int)(bVar12 + 9));
    if (iVar3 < 0) {
      puVar2 = (ulong *)param_1[2];
      if (puVar2 < (ulong *)param_1[4]) {
        uVar7 = *puVar2;
        iVar3 = iVar3 + 0x38;
        param_1[2] = (long)puVar2 + 7;
        uVar7 = ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                 (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                 (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8 |
                *param_1 << 0x38;
        *param_1 = uVar7;
      }
      else {
        VP8LoadFinalBytes(param_1);
        uVar7 = *param_1;
        iVar3 = *(int *)((long)param_1 + 0xc);
      }
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = (uint)bVar1 * iVar8 >> 8;
    bVar13 = uVar6 < (uint)(uVar7 >> ((byte)iVar3 & 0x3f));
    uVar5 = uVar6 + 1;
    uVar4 = (ulong)uVar5;
    if (bVar13) {
      uVar5 = iVar8 - uVar6;
      *param_1 = uVar7 - (uVar4 << ((byte)iVar3 & 0x3f));
    }
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    iVar11 = (uint)bVar13 + (uint)bVar12 * 2;
    iVar10 = 0;
    iVar3 = iVar3 - (uVar6 ^ 7);
    pbVar9 = *(byte **)(kCat3456 + (long)iVar11 * 8);
    iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    bVar1 = *pbVar9;
    while (bVar1 != 0) {
      if (iVar3 < 0) {
        puVar2 = (ulong *)param_1[2];
        if (puVar2 < (ulong *)param_1[4]) {
          uVar7 = *puVar2;
          iVar3 = iVar3 + 0x38;
          param_1[2] = (long)puVar2 + 7;
          uVar7 = ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                   (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                   (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8 |
                  *param_1 << 0x38;
          *param_1 = uVar7;
        }
        else {
          VP8LoadFinalBytes(param_1);
          uVar7 = *param_1;
          iVar3 = *(int *)((long)param_1 + 0xc);
        }
      }
      else {
        uVar7 = *param_1;
      }
      uVar6 = (uint)bVar1 * iVar8 >> 8;
      bVar12 = uVar6 < (uint)(uVar7 >> ((byte)iVar3 & 0x3f));
      uVar5 = uVar6 + 1;
      if (bVar12) {
        *param_1 = uVar7 - ((ulong)uVar5 << ((byte)iVar3 & 0x3f));
        uVar5 = iVar8 - uVar6;
      }
      uVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      pbVar9 = pbVar9 + 1;
      iVar10 = (uint)bVar12 + iVar10 * 2;
      iVar3 = iVar3 - (uVar6 ^ 7);
      iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
      *(int *)((long)param_1 + 0xc) = iVar3;
      *(int *)(param_1 + 1) = iVar8;
      bVar1 = *pbVar9;
    }
    return iVar10 + 3 + (8 << (sbyte)iVar11);
  }
  uVar5 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  iVar3 = iVar3 - (uVar5 ^ 7);
  iVar8 = (uVar6 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
  *(int *)((long)param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 1) = iVar8;
  bVar1 = *(byte *)(param_2 + 7);
  if (iVar3 < 0) {
    puVar2 = (ulong *)param_1[2];
    if (puVar2 < (ulong *)param_1[4]) {
      uVar7 = *puVar2;
      iVar3 = iVar3 + 0x38;
      param_1[2] = (long)puVar2 + 7;
      uVar4 = uVar4 << 0x38 |
              ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
               (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18
               | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
      *param_1 = uVar4;
    }
    else {
      VP8LoadFinalBytes(param_1);
      iVar3 = *(int *)((long)param_1 + 0xc);
      uVar4 = *param_1;
    }
  }
  uVar5 = (uint)bVar1 * iVar8 >> 8;
  uVar6 = uVar5 + 1;
  if (uVar5 < (uint)(uVar4 >> ((byte)iVar3 & 0x3f))) {
    uVar5 = iVar8 - uVar5;
    uVar4 = uVar4 - ((ulong)uVar6 << ((byte)iVar3 & 0x3f));
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    *param_1 = uVar4;
    iVar3 = iVar3 - (uVar6 ^ 7);
    iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    if (iVar3 < 0) {
      puVar2 = (ulong *)param_1[2];
      if (puVar2 < (ulong *)param_1[4]) {
        uVar7 = *puVar2;
        iVar3 = iVar3 + 0x38;
        param_1[2] = (long)puVar2 + 7;
        uVar4 = uVar4 << 0x38 |
                ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                 (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                 (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
        *param_1 = uVar4;
      }
      else {
        VP8LoadFinalBytes(param_1);
        uVar4 = *param_1;
        iVar3 = *(int *)((long)param_1 + 0xc);
      }
    }
    uVar6 = (uint)(iVar8 * 0xa5) >> 8;
    bVar12 = uVar6 < (uint)(uVar4 >> ((byte)iVar3 & 0x3f));
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    if (bVar12) {
      uVar5 = iVar8 - uVar6;
      *param_1 = uVar4 - (uVar7 << ((byte)iVar3 & 0x3f));
    }
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    iVar3 = iVar3 - (uVar6 ^ 7);
    iVar8 = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 1) = iVar8;
    if (iVar3 < 0) {
      puVar2 = (ulong *)param_1[2];
      if (puVar2 < (ulong *)param_1[4]) {
        uVar7 = *puVar2;
        iVar3 = iVar3 + 0x38;
        param_1[2] = (long)puVar2 + 7;
        uVar7 = ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
                 (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
                 (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8 |
                *param_1 << 0x38;
        *param_1 = uVar7;
      }
      else {
        VP8LoadFinalBytes(param_1);
        uVar7 = *param_1;
        iVar3 = *(int *)((long)param_1 + 0xc);
      }
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = (uint)(iVar8 * 0x91) >> 8;
    bVar13 = uVar6 < (uint)(uVar7 >> ((byte)iVar3 & 0x3f));
    uVar5 = uVar6 + 1;
    if (bVar13) {
      *param_1 = uVar7 - ((ulong)uVar5 << ((byte)iVar3 & 0x3f));
      uVar5 = iVar8 - uVar6;
    }
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    *(uint *)((long)param_1 + 0xc) = iVar3 - (uVar6 ^ 7);
    *(uint *)(param_1 + 1) = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    return bVar12 + 7 + (uint)bVar12 + (uint)bVar13;
  }
  uVar5 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  iVar3 = iVar3 - (uVar5 ^ 7);
  iVar8 = (uVar6 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
  *(int *)((long)param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 1) = iVar8;
  if (iVar3 < 0) {
    puVar2 = (ulong *)param_1[2];
    if (puVar2 < (ulong *)param_1[4]) {
      uVar7 = *puVar2;
      iVar3 = iVar3 + 0x38;
      param_1[2] = (long)puVar2 + 7;
      uVar4 = uVar4 << 0x38 |
              ((uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
               (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18
               | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 8;
      *param_1 = uVar4;
    }
    else {
      VP8LoadFinalBytes(param_1);
      uVar4 = *param_1;
      iVar3 = *(int *)((long)param_1 + 0xc);
    }
  }
  uVar6 = (uint)(iVar8 * 0x9f) >> 8;
  bVar12 = uVar6 < (uint)(uVar4 >> ((byte)iVar3 & 0x3f));
  uVar5 = uVar6 + 1;
  uVar7 = (ulong)uVar5;
  if (bVar12) {
    uVar5 = iVar8 - uVar6;
    *param_1 = uVar4 - (uVar7 << ((byte)iVar3 & 0x3f));
  }
  uVar6 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  *(uint *)((long)param_1 + 0xc) = iVar3 - (uVar6 ^ 7);
  *(uint *)(param_1 + 1) = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
  return bVar12 + 5;
}



int GetCoeffsAlt(ulong *param_1,long param_2,int param_3,long param_4,int param_5,long param_6)

{
  byte *pbVar1;
  ulong *puVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  
  pbVar14 = (byte *)((long)param_3 * 0xb + *(long *)(param_2 + (long)param_5 * 8));
  if (0xf < param_5) {
    return 0x10;
  }
  uVar15 = (uint)param_1[1];
  iVar6 = *(int *)((long)param_1 + 0xc);
LAB_00100866:
  bVar7 = *pbVar14;
  if (iVar6 < 0) {
    puVar2 = (ulong *)param_1[2];
    if (puVar2 < (ulong *)param_1[4]) {
      uVar13 = *puVar2;
      iVar6 = iVar6 + 0x38;
      param_1[2] = (long)puVar2 + 7;
      *(int *)((long)param_1 + 0xc) = iVar6;
      uVar13 = ((uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
                (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 |
                (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38) >> 8 |
               *param_1 << 0x38;
      *param_1 = uVar13;
    }
    else {
      VP8LoadFinalBytes(param_1);
      iVar6 = *(int *)((long)param_1 + 0xc);
      uVar13 = *param_1;
    }
  }
  else {
    uVar13 = *param_1;
  }
  uVar8 = bVar7 * uVar15 >> 8;
  if ((uint)(uVar13 >> ((byte)iVar6 & 0x3f)) <= uVar8) {
    if (uVar8 < 0x7f) {
      bVar7 = (&kVP8Log2Range)[uVar8];
      *(uint *)(param_1 + 1) = (uint)(byte)(&kVP8NewRange)[uVar8];
      *(uint *)((long)param_1 + 0xc) = iVar6 - (uint)bVar7;
    }
    else {
      *(uint *)(param_1 + 1) = uVar8;
    }
    return param_5;
  }
  uVar15 = (uVar15 - 1) - uVar8;
  uVar16 = (ulong)uVar15;
  *param_1 = uVar13 - ((ulong)(uVar8 + 1) << ((byte)iVar6 & 0x3f));
  if (uVar15 < 0x7f) {
    pbVar1 = &kVP8Log2Range + uVar16;
    uVar16 = (ulong)(byte)(&kVP8NewRange)[uVar16];
    iVar6 = iVar6 - (uint)*pbVar1;
    *(int *)((long)param_1 + 0xc) = iVar6;
  }
  *(int *)(param_1 + 1) = (int)uVar16;
  lVar11 = (long)param_5;
  bVar7 = pbVar14[1];
  if (iVar6 < 0) goto LAB_00100a5d;
  do {
    uVar13 = *param_1;
LAB_00100904:
    uVar15 = (uint)bVar7 * (int)uVar16 >> 8;
    if (uVar15 < (uint)(uVar13 >> ((byte)iVar6 & 0x3f))) {
      uVar8 = ((int)uVar16 + -1) - uVar15;
      uVar13 = uVar13 - ((ulong)(uVar15 + 1) << ((byte)iVar6 & 0x3f));
      *param_1 = uVar13;
      if (uVar8 < 0x7f) {
        uVar16 = (ulong)uVar8;
        uVar8 = (uint)(byte)(&kVP8NewRange)[uVar8];
        iVar6 = iVar6 - (uint)(byte)(&kVP8Log2Range)[uVar16];
        *(int *)((long)param_1 + 0xc) = iVar6;
      }
      iVar9 = (int)lVar11;
      *(uint *)(param_1 + 1) = uVar8;
      bVar7 = pbVar14[2];
      lVar11 = *(long *)(param_2 + 8 + (long)iVar9 * 8);
      if (iVar6 < 0) {
        puVar2 = (ulong *)param_1[2];
        if (puVar2 < (ulong *)param_1[4]) {
          uVar16 = *puVar2;
          iVar6 = iVar6 + 0x38;
          param_1[2] = (long)puVar2 + 7;
          uVar13 = uVar13 << 0x38 |
                   ((uVar16 & 0xff000000000000) >> 0x28 | (uVar16 & 0xff0000000000) >> 0x18 |
                    (uVar16 & 0xff00000000) >> 8 | (uVar16 & 0xff000000) << 8 |
                    (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38) >> 8;
          *(int *)((long)param_1 + 0xc) = iVar6;
          *param_1 = uVar13;
        }
        else {
          VP8LoadFinalBytes(param_1);
          iVar6 = *(int *)((long)param_1 + 0xc);
          uVar13 = *param_1;
        }
      }
      uVar15 = bVar7 * uVar8 >> 8;
      if (uVar15 < (uint)(uVar13 >> ((byte)iVar6 & 0x3f))) {
        uVar8 = (uVar8 - 1) - uVar15;
        *param_1 = uVar13 - ((ulong)(uVar15 + 1) << ((byte)iVar6 & 0x3f));
        if (uVar8 < 0x7f) {
          bVar7 = (&kVP8NewRange)[uVar8];
          *(uint *)((long)param_1 + 0xc) = iVar6 - (uint)(byte)(&kVP8Log2Range)[uVar8];
          *(uint *)(param_1 + 1) = (uint)bVar7;
        }
        else {
          *(uint *)(param_1 + 1) = uVar8;
        }
        uVar4 = GetLargeValue(param_1,pbVar14);
        iVar6 = *(int *)((long)param_1 + 0xc);
        pbVar14 = (byte *)(lVar11 + 0x16);
        uVar3 = uVar4;
        if (-1 < iVar6) goto LAB_0010099b;
LAB_00100b56:
        puVar2 = (ulong *)param_1[2];
        if (puVar2 < (ulong *)param_1[4]) {
          uVar13 = *puVar2;
          iVar6 = iVar6 + 0x38;
          param_1[2] = (long)puVar2 + 7;
          uVar13 = ((uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
                    (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 |
                    (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38) >> 8 |
                   *param_1 << 0x38;
        }
        else {
          VP8LoadFinalBytes(param_1);
          uVar13 = *param_1;
          iVar6 = *(int *)((long)param_1 + 0xc);
        }
      }
      else {
        if (uVar15 < 0x7f) {
          bVar7 = (&kVP8Log2Range)[uVar15];
          *(uint *)(param_1 + 1) = (uint)(byte)(&kVP8NewRange)[uVar15];
          iVar6 = iVar6 - (uint)bVar7;
          *(int *)((long)param_1 + 0xc) = iVar6;
        }
        else {
          *(uint *)(param_1 + 1) = uVar15;
        }
        pbVar14 = (byte *)(lVar11 + 0xb);
        uVar4 = 1;
        uVar3 = 1;
        if (iVar6 < 0) goto LAB_00100b56;
LAB_0010099b:
        uVar4 = uVar3;
        uVar13 = *param_1;
      }
      bVar5 = (byte)iVar6;
      uVar12 = (uint)param_1[1] >> 1;
      iVar10 = uVar12 - (int)(uVar13 >> (bVar5 & 0x3f));
      iVar6 = iVar6 + -1;
      uVar8 = iVar10 >> 0x1f;
      *(int *)((long)param_1 + 0xc) = iVar6;
      uVar15 = (uint)param_1[1] + uVar8 | 1;
      *(uint *)(param_1 + 1) = uVar15;
      bVar7 = kZigzag[iVar9];
      *param_1 = uVar13 - ((ulong)(uVar12 + 1 & uVar8) << (bVar5 & 0x3f));
      uVar3 = (ushort)(iVar10 >> 0x1f);
      param_5 = iVar9 + 1;
      *(ushort *)(param_6 + (ulong)bVar7 * 2) =
           ((uVar4 ^ uVar3) - uVar3) * *(short *)(param_4 + (ulong)(0 < iVar9) * 4);
      if (0xf < param_5) {
        return 0x10;
      }
      goto LAB_00100866;
    }
    if (uVar15 < 0x7f) {
      bVar7 = (&kVP8Log2Range)[uVar15];
      *(uint *)(param_1 + 1) = (uint)(byte)(&kVP8NewRange)[uVar15];
      *(uint *)((long)param_1 + 0xc) = iVar6 - (uint)bVar7;
    }
    else {
      *(uint *)(param_1 + 1) = uVar15;
    }
    pbVar14 = *(byte **)(param_2 + 8 + lVar11 * 8);
    lVar11 = lVar11 + 1;
    if ((int)lVar11 == 0x10) {
      return 0x10;
    }
    iVar6 = *(int *)((long)param_1 + 0xc);
    uVar16 = (ulong)(uint)param_1[1];
    bVar7 = pbVar14[1];
  } while (-1 < iVar6);
LAB_00100a5d:
  puVar2 = (ulong *)param_1[2];
  if (puVar2 < (ulong *)param_1[4]) {
    uVar13 = *puVar2;
    iVar6 = iVar6 + 0x38;
    param_1[2] = (long)puVar2 + 7;
    *(int *)((long)param_1 + 0xc) = iVar6;
    uVar13 = ((uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
              (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 |
              (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38) >> 8 |
             *param_1 << 0x38;
    *param_1 = uVar13;
  }
  else {
    VP8LoadFinalBytes(param_1);
    iVar6 = *(int *)((long)param_1 + 0xc);
    uVar13 = *param_1;
  }
  goto LAB_00100904;
}



int GetCoeffsFast(ulong *param_1,long param_2,int param_3,long param_4,int param_5,long param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  pbVar10 = (byte *)((long)param_3 * 0xb + *(long *)(param_2 + (long)param_5 * 8));
  if (0xf < param_5) {
    return 0x10;
  }
  uVar13 = (uint)param_1[1];
  iVar8 = *(int *)((long)param_1 + 0xc);
  do {
    bVar7 = *pbVar10;
    if (iVar8 < 0) {
      puVar1 = (ulong *)param_1[2];
      if (puVar1 < (ulong *)param_1[4]) {
        uVar9 = *puVar1;
        iVar8 = iVar8 + 0x38;
        param_1[2] = (long)puVar1 + 7;
        uVar9 = ((uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
                 (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 |
                 (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) >> 8 |
                *param_1 << 0x38;
        *param_1 = uVar9;
      }
      else {
        VP8LoadFinalBytes(param_1);
        iVar8 = *(int *)((long)param_1 + 0xc);
        uVar9 = *param_1;
      }
    }
    else {
      uVar9 = *param_1;
    }
    uVar6 = bVar7 * uVar13 >> 8;
    uVar5 = uVar6 + 1;
    if ((uint)(uVar9 >> ((byte)iVar8 & 0x3f)) <= uVar6) {
      uVar13 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar13 == 0; uVar13 = uVar13 - 1) {
        }
      }
      *(uint *)((long)param_1 + 0xc) = iVar8 - (uVar13 ^ 7);
      *(uint *)(param_1 + 1) = (uVar5 << ((byte)(uVar13 ^ 7) & 0x1f)) + -1;
      return param_5;
    }
    uVar13 = uVar13 - uVar6;
    lVar12 = (long)param_5;
    uVar6 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    *param_1 = uVar9 - ((ulong)uVar5 << ((byte)iVar8 & 0x3f));
    iVar8 = iVar8 - (uVar6 ^ 7);
    iVar14 = (uVar13 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar8;
    *(int *)(param_1 + 1) = iVar14;
    bVar7 = pbVar10[1];
    if (iVar8 < 0) goto LAB_00100f09;
LAB_00100da8:
    uVar9 = *param_1;
    while( true ) {
      uVar5 = (uint)bVar7 * iVar14 >> 8;
      uVar13 = uVar5 + 1;
      if (uVar5 < (uint)(uVar9 >> ((byte)iVar8 & 0x3f))) break;
      uVar5 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      pbVar10 = *(byte **)(param_2 + 8 + lVar12 * 8);
      lVar12 = lVar12 + 1;
      iVar8 = iVar8 - (uVar5 ^ 7);
      iVar14 = (uVar13 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
      *(int *)((long)param_1 + 0xc) = iVar8;
      *(int *)(param_1 + 1) = iVar14;
      if ((int)lVar12 == 0x10) {
        return 0x10;
      }
      bVar7 = pbVar10[1];
      if (-1 < iVar8) goto LAB_00100da8;
LAB_00100f09:
      puVar1 = (ulong *)param_1[2];
      if ((ulong *)param_1[4] <= puVar1) goto LAB_00100f38;
      uVar9 = *puVar1;
      iVar8 = iVar8 + 0x38;
      param_1[2] = (long)puVar1 + 7;
      uVar9 = ((uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
               (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18
               | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) >> 8 | *param_1 << 0x38;
      *param_1 = uVar9;
    }
    uVar5 = iVar14 - uVar5;
    iVar14 = (int)lVar12;
    lVar12 = *(long *)(param_2 + 8 + (long)iVar14 * 8);
    uVar9 = uVar9 - ((ulong)uVar13 << ((byte)iVar8 & 0x3f));
    uVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    *param_1 = uVar9;
    iVar8 = iVar8 - (uVar13 ^ 7);
    iVar15 = (uVar5 << ((byte)(uVar13 ^ 7) & 0x1f)) + -1;
    *(int *)((long)param_1 + 0xc) = iVar8;
    *(int *)(param_1 + 1) = iVar15;
    bVar7 = pbVar10[2];
    if (iVar8 < 0) {
      puVar1 = (ulong *)param_1[2];
      if (puVar1 < (ulong *)param_1[4]) {
        uVar2 = *puVar1;
        iVar8 = iVar8 + 0x38;
        param_1[2] = (long)puVar1 + 7;
        uVar9 = uVar9 << 0x38 |
                ((uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
                 (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
                 (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) >> 8;
        *param_1 = uVar9;
      }
      else {
        VP8LoadFinalBytes(param_1);
        iVar8 = *(int *)((long)param_1 + 0xc);
        uVar9 = *param_1;
      }
    }
    uVar5 = (uint)bVar7 * iVar15 >> 8;
    uVar13 = uVar5 + 1;
    if (uVar5 < (uint)(uVar9 >> ((byte)iVar8 & 0x3f))) {
      uVar5 = iVar15 - uVar5;
      uVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      *param_1 = uVar9 - ((ulong)uVar13 << ((byte)iVar8 & 0x3f));
      *(uint *)((long)param_1 + 0xc) = iVar8 - (uVar6 ^ 7);
      *(uint *)(param_1 + 1) = (uVar5 << ((byte)(uVar6 ^ 7) & 0x1f)) + -1;
      uVar4 = GetLargeValue(param_1,pbVar10);
      iVar15 = *(int *)((long)param_1 + 0xc);
      pbVar10 = (byte *)(lVar12 + 0x16);
      uVar3 = uVar4;
      if (-1 < iVar15) goto LAB_00100e46;
LAB_00100f9b:
      puVar1 = (ulong *)param_1[2];
      if (puVar1 < (ulong *)param_1[4]) {
        uVar9 = *puVar1;
        iVar15 = iVar15 + 0x38;
        param_1[2] = (long)puVar1 + 7;
        uVar9 = ((uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
                 (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 |
                 (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) >> 8 |
                *param_1 << 0x38;
      }
      else {
        VP8LoadFinalBytes(param_1);
        uVar9 = *param_1;
        iVar15 = *(int *)((long)param_1 + 0xc);
      }
    }
    else {
      uVar5 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      pbVar10 = (byte *)(lVar12 + 0xb);
      uVar4 = 1;
      iVar15 = iVar8 - (uVar5 ^ 7);
      *(int *)((long)param_1 + 0xc) = iVar15;
      *(uint *)(param_1 + 1) = (uVar13 << ((byte)(uVar5 ^ 7) & 0x1f)) + -1;
      uVar3 = 1;
      if (iVar15 < 0) goto LAB_00100f9b;
LAB_00100e46:
      uVar4 = uVar3;
      uVar9 = *param_1;
    }
    param_5 = iVar14 + 1;
    uVar5 = (uint)param_1[1] >> 1;
    iVar11 = uVar5 - (int)(uVar9 >> ((byte)iVar15 & 0x3f));
    iVar8 = iVar15 + -1;
    uVar6 = iVar11 >> 0x1f;
    *(int *)((long)param_1 + 0xc) = iVar8;
    uVar13 = (uint)param_1[1] + uVar6 | 1;
    bVar7 = kZigzag[iVar14];
    uVar3 = (ushort)(iVar11 >> 0x1f);
    *(uint *)(param_1 + 1) = uVar13;
    *param_1 = uVar9 - ((ulong)(uVar5 + 1 & uVar6) << ((byte)iVar15 & 0x3f));
    *(ushort *)(param_6 + (ulong)bVar7 * 2) =
         ((uVar4 ^ uVar3) - uVar3) * *(short *)(param_4 + (ulong)(0 < iVar14) * 4);
    if (0xf < param_5) {
      return 0x10;
    }
  } while( true );
LAB_00100f38:
  VP8LoadFinalBytes(param_1);
  iVar8 = *(int *)((long)param_1 + 0xc);
  goto LAB_00100da8;
}



undefined8 WebPGetDecoderVersion(void)

{
  return 0x10400;
}



undefined8 VP8InitIoInternal(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_2 >> 8 == 2) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[0x13] = 0;
      puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
      for (uVar1 = (ulong)(((int)param_1 -
                           (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xa0U
                          >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * VP8New(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  
  puVar3 = (undefined4 *)WebPSafeCalloc(1,0xbd0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    *(undefined **)(puVar3 + 2) = &_LC0;
    puVar4 = (undefined8 *)WebPGetWorkerInterface();
    (*(code *)*puVar4)(puVar3 + 0x26);
    pcVar5 = _VP8GetCPUInfo;
    puVar1 = InitGetCoeffs_body_last_cpuinfo_used_0;
    puVar3[1] = 0;
    puVar3[0x6c] = 0;
    if ((code *)puVar1 != pcVar5) {
      if ((pcVar5 == (code *)0x0) || (iVar2 = (*pcVar5)(2), pcVar5 = _VP8GetCPUInfo, iVar2 == 0)) {
        GetCoeffs = GetCoeffsFast;
        InitGetCoeffs_body_last_cpuinfo_used_0 = pcVar5;
      }
      else {
        GetCoeffs = GetCoeffsAlt;
        InitGetCoeffs_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
      }
    }
  }
  return puVar3;
}



undefined4 VP8Status(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 2;
}



char * VP8StatusMessage(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "no object";
  if ((param_1 != 0) && (pcVar1 = *(char **)(param_1 + 8), pcVar1 == (char *)0x0)) {
    pcVar1 = "OK";
  }
  return pcVar1;
}



void VP8Delete(long param_1)

{
  if (param_1 != 0) {
    VP8Clear_part_0();
    WebPSafeFree(param_1);
    return;
  }
  return;
}



undefined8 VP8SetError(int *param_1,int param_2,undefined8 param_3)

{
  if (*param_1 == 0) {
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 2) = param_3;
    param_1[1] = 0;
  }
  return 0;
}



bool VP8CheckSignature(char *param_1,ulong param_2)

{
  if (((2 < param_2) && (*param_1 == -99)) && (param_1[1] == '\x01')) {
    return param_1[2] == '*';
  }
  return false;
}



uint VP8GetInfo(byte *param_1,ulong param_2,ulong param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 == (byte *)0x0) || (param_2 < 10)) {
    return 0;
  }
  if (((param_1[3] == 0x9d) && (param_1[4] == 1)) && (param_1[5] == 0x2a)) {
    bVar1 = *param_1;
    uVar3 = bVar1 & 9;
    if ((bVar1 & 9) != 0) {
      return 0;
    }
    if (((bVar1 & 0x10) != 0) &&
       (((uint)param_1[1] << 8 | (uint)param_1[2] << 0x10 | (uint)bVar1) >> 5 < param_3)) {
      uVar2 = *(ushort *)(param_1 + 8);
      if (((*(ushort *)(param_1 + 6) & 0x3fff) != 0) && ((uVar2 & 0x3fff) != 0)) {
        if (param_4 != (uint *)0x0) {
          *param_4 = *(ushort *)(param_1 + 6) & 0x3fff;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar2 & 0x3fff;
        }
        return 1;
      }
    }
  }
  return uVar3;
}



undefined8 VP8GetHeaders(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  ulong uVar17;
  int *piVar18;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  *(undefined **)(param_1 + 2) = &_LC0;
  if (param_2 == (uint *)0x0) {
    param_1[0] = 2;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "null VP8Io passed to VP8GetHeaders()";
    return 0;
  }
  uVar13 = *(ulong *)(param_2 + 0x18);
  pbVar15 = *(byte **)(param_2 + 0x1a);
  if (uVar13 < 4) {
    param_1[0] = 7;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "Truncated header.";
    return 0;
  }
  bVar4 = *pbVar15;
  uVar10 = (uint)pbVar15[1] << 8 | (uint)pbVar15[2] << 0x10 | (uint)bVar4;
  *(char *)(param_1 + 0x11) = (char)(~uVar10 & 1);
  *(byte *)((long)param_1 + 0x45) = (byte)(uVar10 >> 1) & 7;
  param_1[0x12] = uVar10 >> 5;
  *(byte *)((long)param_1 + 0x46) = (byte)(uVar10 >> 4) & 1;
  if ((bVar4 & 8) != 0) {
    param_1[0] = 3;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "Incorrect keyframe parameters.";
    return 0;
  }
  if ((bVar4 & 0x10) == 0) {
    param_1[0] = 4;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "Frame not displayable.";
    return 0;
  }
  uVar11 = uVar13 - 3;
  if ((~uVar10 & 1) == 0) {
    pbVar15 = pbVar15 + 3;
    if (uVar11 < uVar10 >> 5) goto LAB_00101630;
  }
  else {
    if (uVar11 < 7) {
      param_1[0] = 7;
      param_1[1] = 0;
      *(char **)(param_1 + 2) = "cannot parse picture header";
      return 0;
    }
    if (((pbVar15[3] != 0x9d) || (pbVar15[4] != 1)) || (pbVar15[5] != 0x2a)) {
      param_1[0] = 3;
      param_1[1] = 0;
      *(char **)(param_1 + 2) = "Bad code word";
      return 0;
    }
    uVar11 = uVar13 - 10;
    uVar8 = *(ushort *)(pbVar15 + 6) & 0x3fff;
    *(ushort *)(param_1 + 0x13) = uVar8;
    *(byte *)(param_1 + 0x14) = pbVar15[7] >> 6;
    uVar9 = *(ushort *)(pbVar15 + 8) & 0x3fff;
    *(ushort *)((long)param_1 + 0x4e) = uVar9;
    *(byte *)((long)param_1 + 0x51) = pbVar15[9] >> 6;
    param_1[0x66] = (int)(uVar8 + 0xf) >> 4;
    param_1[0x67] = (int)(uVar9 + 0xf) >> 4;
    param_2[1] = (uint)uVar9;
    param_2[0x21] = (uint)uVar9;
    param_2[0x24] = (uint)uVar9;
    param_2[4] = (uint)uVar9;
    *param_2 = (uint)uVar8;
    param_2[0x20] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = (uint)uVar8;
    param_2[0x22] = 0;
    param_2[0x23] = (uint)uVar8;
    param_2[3] = (uint)uVar8;
    VP8ResetProba(param_1 + 0x12a);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 1;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if (uVar11 < (uint)param_1[0x12]) {
      if (*param_1 != 0) {
        return 0;
      }
LAB_00101630:
      param_1[0] = 7;
      param_1[1] = 0;
      *(char **)(param_1 + 2) = "bad partition length";
      return 0;
    }
    pbVar15 = pbVar15 + 10;
  }
  piVar2 = param_1 + 4;
  VP8InitBitReader(piVar2,pbVar15);
  uVar10 = param_1[0x12];
  if ((char)param_1[0x11] != '\0') {
    uVar5 = VP8GetValue(piVar2,1);
    *(undefined1 *)((long)param_1 + 0x52) = uVar5;
    uVar5 = VP8GetValue(piVar2,1);
    *(undefined1 *)((long)param_1 + 0x53) = uVar5;
  }
  iVar6 = VP8GetValue(piVar2,1);
  param_1[0x21] = iVar6;
  if (iVar6 == 0) {
    param_1[0x22] = 0;
  }
  else {
    iVar6 = VP8GetValue(piVar2,1);
    param_1[0x22] = iVar6;
    iVar6 = VP8GetValue(piVar2,1);
    if (iVar6 != 0) {
      piVar16 = param_1 + 0x24;
      iVar6 = VP8GetValue(piVar2,1);
      param_1[0x23] = iVar6;
      do {
        iVar6 = VP8GetValue(piVar2,1);
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = VP8GetSignedValue(piVar2,7);
        }
        *(undefined1 *)piVar16 = uVar5;
        piVar16 = (int *)((long)piVar16 + 1);
      } while (piVar16 != param_1 + 0x25);
      do {
        iVar6 = VP8GetValue(piVar2,1);
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = VP8GetSignedValue(piVar2,6);
        }
        *(undefined1 *)piVar16 = uVar5;
        piVar16 = (int *)((long)piVar16 + 1);
      } while (piVar16 != param_1 + 0x26);
    }
    if (param_1[0x22] != 0) {
      piVar16 = param_1 + 0x12a;
      do {
        iVar6 = VP8GetValue(piVar2,1);
        uVar5 = 0xff;
        if (iVar6 != 0) {
          uVar5 = VP8GetValue(piVar2,8);
        }
        *(undefined1 *)piVar16 = uVar5;
        piVar16 = (int *)((long)piVar16 + 1);
      } while (piVar16 != (int *)((long)param_1 + 0x4ab));
    }
  }
  if (param_1[0xe] != 0) {
    if (*param_1 != 0) {
      return 0;
    }
    param_1[0] = 3;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "cannot parse segment header";
    return 0;
  }
  iVar6 = VP8GetValue(piVar2,1);
  param_1[0x15] = iVar6;
  iVar6 = VP8GetValue(piVar2,6);
  param_1[0x16] = iVar6;
  iVar6 = VP8GetValue(piVar2,3);
  param_1[0x17] = iVar6;
  iVar6 = VP8GetValue(piVar2,1);
  param_1[0x18] = iVar6;
  if ((iVar6 != 0) && (iVar6 = VP8GetValue(piVar2,1), iVar6 != 0)) {
    piVar16 = param_1 + 0x19;
    piVar18 = param_1 + 0x1d;
    do {
      iVar6 = VP8GetValue(piVar2,1);
      if (iVar6 != 0) {
        iVar6 = VP8GetSignedValue(piVar2,6);
        *piVar16 = iVar6;
      }
      piVar16 = piVar16 + 1;
    } while (piVar18 != piVar16);
    do {
      iVar6 = VP8GetValue(piVar2,1);
      if (iVar6 != 0) {
        iVar6 = VP8GetSignedValue(piVar2,6);
        *piVar18 = iVar6;
      }
      piVar18 = piVar18 + 1;
    } while (piVar18 != param_1 + 0x21);
  }
  iVar6 = param_1[0x16];
  if (iVar6 != 0) {
    iVar6 = 2 - (uint)(param_1[0x15] != 0);
  }
  param_1[0x2da] = iVar6;
  if (param_1[0xe] != 0) {
    if (*param_1 != 0) {
      return 0;
    }
    param_1[0] = 3;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "cannot parse filter header";
    return 0;
  }
  bVar4 = VP8GetValue(piVar2,2);
  uVar17 = uVar11 - uVar10;
  uVar1 = (1 << (bVar4 & 0x1f)) - 1;
  uVar13 = (ulong)uVar1;
  param_1[0x6c] = uVar1;
  if (uVar13 * 3 <= uVar17) {
    pbVar14 = pbVar15 + uVar10;
    uVar17 = uVar17 + uVar13 * -3;
    pbVar3 = pbVar14 + uVar13 * 3;
    pbVar12 = pbVar3;
    if (uVar13 != 0) {
      piVar16 = param_1 + 0x6e;
      do {
        uVar7 = (ulong)(int)((uint)pbVar14[1] << 8 | (uint)pbVar14[2] << 0x10 | (uint)*pbVar14);
        if (uVar17 < uVar7) {
          uVar7 = uVar17;
        }
        pbVar14 = pbVar14 + 3;
        VP8InitBitReader(piVar16,pbVar12,uVar7);
        pbVar12 = pbVar12 + uVar7;
        uVar17 = uVar17 - uVar7;
        piVar16 = piVar16 + 0xc;
      } while (pbVar3 != pbVar14);
    }
    VP8InitBitReader(param_1 + uVar13 * 0xc + 0x6e,pbVar12,uVar17);
    if (pbVar12 < pbVar15 + uVar11) {
      VP8ParseQuant(param_1);
      if ((char)param_1[0x11] != '\0') {
        VP8GetValue(piVar2,1);
        VP8ParseProba(piVar2,param_1);
        param_1[1] = 1;
        return 1;
      }
      if (*param_1 != 0) {
        return 0;
      }
      param_1[0] = 4;
      param_1[1] = 0;
      *(char **)(param_1 + 2) = "Not a key frame.";
      return 0;
    }
    iVar6 = 5;
    if (param_1[0x10] != 0) goto LAB_001018e2;
  }
  iVar6 = 7;
LAB_001018e2:
  if (*param_1 != 0) {
    return 0;
  }
  *param_1 = iVar6;
  *(char **)(param_1 + 2) = "cannot parse partitions";
  param_1[1] = 0;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool VP8DecodeMB(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  short *psVar21;
  short *psVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  short *psVar26;
  sbyte sVar27;
  short *psVar28;
  long in_FS_OFFSET;
  char cVar29;
  long local_c8;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  ulong uVar20;
  
  lVar4 = *(long *)(param_1 + 0xb10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar1 = (byte *)(lVar4 + (long)*(int *)(param_1 + 0xb58) * 2);
  puVar8 = (undefined8 *)((long)*(int *)(param_1 + 0xb58) * 800 + *(long *)(param_1 + 0xb60));
  if ((*(int *)(param_1 + 0xaf0) == 0) || (cVar29 = *(char *)((long)puVar8 + 0x31d), cVar29 == '\0')
     ) {
    bVar3 = *(byte *)((long)puVar8 + 0x31e);
    *puVar8 = 0;
    puVar8[0x5f] = 0;
    puVar10 = (undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    for (uVar14 = (ulong)(((int)puVar8 -
                          (int)(undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8)) + 0x300U >>
                         3); uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    lVar9 = (ulong)bVar3 * 0x20;
    if (*(char *)(puVar8 + 0x60) == '\0') {
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      iVar7 = (*GetCoeffs)(param_2,param_1 + 0x958,(uint)pbVar1[1] + (uint)*(byte *)(lVar4 + -1),
                           param_1 + 0x42c + lVar9,0,local_68);
      *(bool *)(lVar4 + -1) = 0 < iVar7;
      pbVar1[1] = 0 < iVar7;
      if (iVar7 < 2) {
        puVar10 = puVar8;
        do {
          uVar16 = (undefined2)((short)local_68._0_2_ + 3 >> 3);
          *(undefined2 *)puVar10 = uVar16;
          puVar11 = puVar10 + 8;
          *(undefined2 *)(puVar10 + 4) = uVar16;
          puVar10 = puVar11;
        } while (puVar11 != puVar8 + 0x40);
      }
      else {
        (*_VP8TransformWHT)(local_68,puVar8);
      }
      local_c8 = param_1 + 0x8d0;
      iVar7 = 1;
    }
    else {
      local_c8 = param_1 + 0xa68;
      iVar7 = 0;
    }
    uVar25 = 0;
    psVar21 = (short *)(puVar8 + 0x10);
    uVar23 = *(byte *)(lVar4 + -2) & 0xf;
    uVar14 = (ulong)(*pbVar1 & 0xf);
    do {
      uVar24 = 0;
      uVar5 = uVar23 & 1;
      psVar28 = psVar21 + -0x40;
      do {
        psVar26 = psVar28;
        iVar6 = (*GetCoeffs)(param_2,local_c8,((uint)uVar14 & 1) + uVar5,param_1 + 0x424 + lVar9,
                             iVar7,psVar26);
        uVar19 = 3;
        uVar12 = (uint)(iVar7 < iVar6) << 7;
        uVar5 = (uint)(iVar7 < iVar6);
        uVar18 = (uint)(uVar14 >> 1) | uVar12;
        uVar14 = (ulong)uVar18;
        if ((iVar6 < 4) && (uVar19 = 2, iVar6 < 2)) {
          uVar19 = (uint)(*psVar26 != 0);
        }
        uVar24 = uVar24 * 4 | uVar19;
        psVar28 = psVar26 + 0x10;
      } while (psVar26 + 0x10 != psVar21);
      uVar14 = (ulong)(byte)((byte)uVar18 >> 4);
      psVar21 = psVar26 + 0x50;
      uVar23 = uVar23 >> 1 | uVar12;
      uVar25 = uVar25 << 8 | uVar24;
    } while (psVar21 != (short *)(puVar8 + 0x50));
    sVar27 = 0;
    uVar23 = uVar23 >> 4;
    uVar5 = 0;
    psVar21 = (short *)(puVar8 + 0x58);
    while( true ) {
      psVar28 = psVar21 + -0x40;
      uVar12 = 0;
      uVar20 = (ulong)(uint)((int)(uint)*pbVar1 >> sVar27 + 4);
      uVar24 = (int)(uint)*(byte *)(lVar4 + -2) >> sVar27 + 4;
      do {
        uVar18 = uVar24 & 1;
        psVar26 = psVar28 + -0x20;
        do {
          psVar22 = psVar26;
          iVar7 = (*GetCoeffs)(param_2,param_1 + 0x9e0,uVar18 + ((uint)uVar20 & 1),
                               param_1 + 0x434 + lVar9,0,psVar22);
          uVar18 = (uint)(0 < iVar7);
          uVar19 = (uint)(uVar20 >> 1) & 0x7f | (uint)(0 < iVar7) * 8;
          uVar20 = (ulong)uVar19;
          uVar13 = 3;
          if ((iVar7 < 4) && (uVar13 = 2, iVar7 < 2)) {
            uVar13 = (uint)(*psVar22 != 0);
          }
          uVar12 = uVar12 << 2 | uVar13;
          psVar26 = psVar22 + 0x10;
        } while (psVar22 + 0x10 != psVar28);
        uVar13 = (uint)(0 < iVar7) << 5;
        psVar28 = psVar22 + 0x30;
        bVar17 = (byte)uVar19 >> 2;
        uVar20 = (ulong)bVar17;
        uVar18 = uVar24 >> 1;
        uVar24 = uVar13 | uVar18 & 0x7f;
      } while (psVar28 != psVar21);
      psVar21 = psVar22 + 0x70;
      uVar5 = uVar5 | uVar12 << sVar27 * '\x04';
      uVar24 = (uint)uVar14 | ((uint)bVar17 << 4) << sVar27;
      uVar14 = (ulong)uVar24;
      uVar23 = uVar23 | (uVar13 | uVar18 & 0x70) << sVar27;
      if (sVar27 == 2) break;
      sVar27 = 2;
    }
    *pbVar1 = (byte)uVar24;
    uVar15 = 0;
    *(char *)(lVar4 + -2) = (char)uVar23;
    *(uint *)((long)puVar8 + 0x314) = uVar25;
    *(uint *)(puVar8 + 99) = uVar5;
    if ((uVar5 & 0xaaaa) == 0) {
      uVar15 = *(undefined1 *)(param_1 + 0x440 + (ulong)bVar3 * 0x20);
    }
    cVar29 = uVar25 == 0 && uVar5 == 0;
  }
  else {
    *pbVar1 = 0;
    *(undefined1 *)(lVar4 + -2) = 0;
    if (*(char *)(puVar8 + 0x60) == '\0') {
      pbVar1[1] = 0;
      *(undefined1 *)(lVar4 + -1) = 0;
    }
    *(undefined8 *)((long)puVar8 + 0x314) = 0;
    uVar15 = 0;
  }
  *(undefined1 *)((long)puVar8 + 0x31c) = uVar15;
  if (0 < *(int *)(param_1 + 0xb68)) {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0xb18) + (long)*(int *)(param_1 + 0xb58) * 4);
    *puVar2 = *(undefined4 *)
               (param_1 + 0xc +
               ((ulong)*(byte *)(puVar8 + 0x60) + 0x2d8 + (ulong)*(byte *)((long)puVar8 + 0x31e) * 2
               ) * 4);
    pbVar1 = (byte *)((long)puVar2 + 2);
    *pbVar1 = *pbVar1 | cVar29 == '\0';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(int *)(param_2 + 0x28) == 0;
}



void VP8InitScanline(long param_1)

{
  *(undefined2 *)(*(long *)(param_1 + 0xb10) + -2) = 0;
  *(undefined4 *)(param_1 + 0xb00) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  return;
}



uint VP8Decode(int *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*param_1 != 0) {
      return 0;
    }
    param_1[0] = 2;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "NULL VP8Io parameter in VP8Decode().";
    return 0;
  }
  if ((param_1[1] == 0) && (iVar2 = VP8GetHeaders(), iVar2 == 0)) {
    return 0;
  }
  iVar2 = VP8EnterCritical(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = VP8InitFrame(param_1,param_2);
    if (iVar2 == 0) {
LAB_001020cf:
      VP8ExitCritical(param_1,param_2);
      VP8Clear_part_0(param_1);
      return 0;
    }
    param_1[0x2d7] = 0;
    if (0 < param_1[0x6b]) {
      uVar3 = 0;
      do {
        uVar1 = param_1[0x6c];
        iVar2 = VP8ParseIntraModeRow(param_1 + 4,param_1);
        if (iVar2 == 0) {
          pcVar4 = "Premature end-of-partition0 encountered.";
          if (*param_1 != 0) goto LAB_001020cf;
LAB_0010219f:
          *(char **)(param_1 + 2) = pcVar4;
          param_1[0] = 7;
          param_1[1] = 0;
          VP8ExitCritical(param_1,param_2);
          goto LAB_001020a3;
        }
        if (param_1[0x2d6] < param_1[0x66]) {
          do {
            iVar2 = VP8DecodeMB(param_1,param_1 + (ulong)(uVar3 & uVar1) * 0xc + 0x6e);
            if (iVar2 == 0) {
              if (*param_1 != 0) goto LAB_001020cf;
              pcVar4 = "Premature end-of-file encountered.";
              goto LAB_0010219f;
            }
            iVar2 = param_1[0x2d6];
            param_1[0x2d6] = iVar2 + 1;
          } while (iVar2 + 1 < param_1[0x66]);
        }
        *(undefined2 *)(*(long *)(param_1 + 0x2c4) + -2) = 0;
        param_1[0x2c0] = 0;
        param_1[0x2d6] = 0;
        iVar2 = VP8ProcessRow(param_1,param_2);
        if (iVar2 == 0) {
          if (*param_1 == 0) {
            param_1[0] = 6;
            param_1[1] = 0;
            *(char **)(param_1 + 2) = "Output aborted.";
          }
          goto LAB_001020cf;
        }
        uVar3 = param_1[0x2d7] + 1;
        param_1[0x2d7] = uVar3;
      } while ((int)uVar3 < param_1[0x6b]);
    }
    if (0 < param_1[0x32]) {
      lVar5 = WebPGetWorkerInterface();
      iVar2 = (**(code **)(lVar5 + 0x10))(param_1 + 0x26);
      if (iVar2 == 0) goto LAB_001020cf;
    }
    uVar3 = VP8ExitCritical(param_1,param_2);
    if ((uVar3 & 1) != 0) {
      param_1[1] = 0;
      return uVar3 & 1;
    }
  }
LAB_001020a3:
  VP8Clear_part_0(param_1);
  return 0;
}



void VP8Clear(long param_1)

{
  if (param_1 != 0) {
    VP8Clear_part_0();
    return;
  }
  return;
}


