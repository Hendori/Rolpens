
void VP8ParseQuant(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  
  lVar16 = param_1 + 0x10;
  iVar8 = 0;
  iVar4 = VP8GetValue(lVar16,7);
  iVar5 = VP8GetValue(lVar16,1);
  if (iVar5 != 0) {
    iVar8 = VP8GetSignedValue(lVar16,4);
  }
  iVar12 = 0;
  iVar5 = VP8GetValue(lVar16,1);
  if (iVar5 != 0) {
    iVar12 = VP8GetSignedValue(lVar16,4);
  }
  iVar11 = 0;
  iVar5 = VP8GetValue(lVar16,1);
  if (iVar5 != 0) {
    iVar11 = VP8GetSignedValue(lVar16,4);
  }
  iVar10 = 0;
  iVar5 = VP8GetValue(lVar16,1);
  if (iVar5 != 0) {
    iVar10 = VP8GetSignedValue(lVar16,4);
  }
  iVar5 = VP8GetValue(lVar16);
  iVar9 = 0;
  if (iVar5 != 0) {
    iVar9 = VP8GetSignedValue(lVar16);
  }
  iVar5 = *(int *)(param_1 + 0x84);
  puVar13 = (uint *)(param_1 + 0x424);
  lVar16 = 0;
  do {
    puVar14 = puVar13;
    if (iVar5 == 0) {
      while (iVar6 = iVar4, (int)lVar16 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x42c);
        lVar16 = lVar16 + 1;
        *(undefined8 *)puVar14 = *(undefined8 *)(param_1 + 0x424);
        *(undefined8 *)(puVar14 + 2) = uVar3;
        uVar3 = *(undefined8 *)(param_1 + 0x43c);
        *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(param_1 + 0x434);
        *(undefined8 *)(puVar14 + 6) = uVar3;
        puVar14 = puVar14 + 8;
        if (lVar16 == 4) {
          return;
        }
      }
    }
    else {
      iVar6 = (int)*(char *)(param_1 + 0x90 + lVar16);
      if (*(int *)(param_1 + 0x8c) == 0) {
        iVar6 = iVar6 + iVar4;
      }
    }
    iVar15 = iVar6 + iVar8;
    if (0x7f < iVar15) {
      iVar15 = 0x7f;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    *puVar14 = (uint)(byte)kDcTable[iVar15];
    iVar15 = 0x7f;
    if (iVar6 < 0x80) {
      iVar15 = iVar6;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    puVar14[1] = (uint)*(ushort *)(kAcTable + (long)iVar15 * 2);
    iVar15 = iVar6 + iVar12;
    if (0x7f < iVar15) {
      iVar15 = 0x7f;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    iVar1 = iVar6 + iVar9;
    puVar14[2] = (uint)(byte)kDcTable[iVar15] * 2;
    iVar15 = iVar6 + iVar11;
    if (0x7f < iVar15) {
      iVar15 = 0x7f;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    iVar15 = (int)((uint)*(ushort *)(kAcTable + (long)iVar15 * 2) * 0x18ccd) >> 0x10;
    if (iVar15 < 8) {
      iVar15 = 8;
    }
    iVar6 = iVar6 + iVar10;
    if (0x75 < iVar6) {
      iVar6 = 0x75;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar7 = 0x7f;
    if (iVar1 < 0x80) {
      iVar7 = iVar1;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    lVar16 = lVar16 + 1;
    puVar13 = puVar14 + 8;
    uVar2 = *(ushort *)(kAcTable + (long)iVar7 * 2);
    *(ulong *)(puVar14 + 3) = (ulong)CONCAT14(kDcTable[iVar6],iVar15);
    *(ulong *)(puVar14 + 5) = CONCAT44(iVar1,(uint)uVar2);
  } while (lVar16 != 4);
  return;
}


