
undefined4 offsetTOCEntryCount(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 0x10);
  }
  return uVar1;
}



undefined4 pointerTOCEntryCount(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 0x10);
  }
  return uVar1;
}



long offsetTOCLookupFn(long param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    return *(long *)(param_1 + 8);
  }
  iVar2 = *piVar3;
  piVar17 = piVar3 + 1;
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  uVar9 = (uint)bVar1;
  iVar15 = uVar9 - *(byte *)((ulong)(uint)piVar3[1] + (long)piVar3);
  if ((iVar15 != 0) || (uVar9 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar12 = 1;
    do {
      uVar8 = uVar12;
      iVar15 = (uint)param_2[uVar8] - (uint)((byte *)((ulong)(uint)piVar3[1] + (long)piVar3))[uVar8]
      ;
      if (iVar15 != 0) break;
      uVar12 = uVar8 + 1;
    } while (param_2[uVar8] != 0);
  }
  if (iVar15 == 0) {
    iVar7 = -1;
    if (iVar2 < 2) goto LAB_001000d4;
  }
  else {
    iVar15 = iVar2 + -1;
    iVar7 = (uint)bVar1 - (uint)*(byte *)((ulong)(uint)piVar17[(long)iVar15 * 2] + (long)piVar3);
    if ((iVar7 != 0) || (uVar9 == 0)) {
      uVar12 = 0;
    }
    else {
      uVar16 = 1;
      do {
        uVar12 = uVar16;
        iVar7 = (uint)param_2[uVar12] -
                (uint)((byte *)((ulong)(uint)piVar17[(long)iVar15 * 2] + (long)piVar3))[uVar12];
        if (iVar7 != 0) break;
        uVar16 = uVar12 + 1;
      } while (param_2[uVar12] != 0);
    }
    if (iVar7 != 0) {
      iVar7 = 1;
LAB_00100158:
      iVar5 = iVar15;
      uVar16 = uVar12;
      if (iVar5 <= iVar7) {
        return 0;
      }
      do {
        iVar15 = (iVar5 + iVar7) / 2;
        uVar4 = uVar16;
        if ((int)uVar8 <= (int)uVar16) {
          uVar4 = uVar8;
        }
        uVar12 = uVar4 & 0xffffffff;
        iVar11 = (int)uVar4;
        pbVar13 = (byte *)((ulong)(uint)piVar17[(long)iVar15 * 2] + (long)iVar11 + (long)piVar3);
        uVar9 = (uint)param_2[iVar11];
        iVar14 = uVar9 - *pbVar13;
        if ((iVar14 == 0) && (uVar9 != 0)) {
          lVar6 = 1;
          do {
            lVar10 = lVar6;
            uVar9 = (uint)(param_2 + iVar11)[lVar10];
            iVar14 = uVar9 - pbVar13[lVar10];
            if (iVar14 != 0) break;
            lVar6 = lVar10 + 1;
          } while (uVar9 != 0);
          uVar12 = (ulong)(uint)(iVar11 + (int)lVar10);
        }
        if (iVar14 < 0) goto LAB_00100158;
        if (iVar14 == 0) break;
        iVar7 = iVar15 + 1;
        uVar8 = uVar12;
        if (iVar5 <= iVar7) {
          return 0;
        }
      } while( true );
    }
    if (iVar15 < 0) {
      return 0;
    }
    iVar7 = -1;
    piVar17 = piVar17 + (long)iVar15 * 2;
    if (iVar2 <= iVar15 + 1) goto LAB_001000d4;
  }
  iVar7 = piVar17[3] - piVar17[1];
LAB_001000d4:
  *param_3 = iVar7;
  return (ulong)(uint)piVar17[1] + (long)piVar3;
}



undefined8 pointerTOCLookupFn(long param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    return *(undefined8 *)(param_1 + 8);
  }
  if (*piVar2 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  iVar14 = (uint)bVar1 - (uint)**(byte **)(piVar2 + 2);
  if ((iVar14 != 0) || (bVar1 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar10 = 1;
    do {
      uVar8 = uVar10;
      iVar14 = (uint)param_2[uVar8] - (uint)(*(byte **)(piVar2 + 2))[uVar8];
      if (iVar14 != 0) break;
      uVar10 = uVar8 + 1;
    } while (param_2[uVar8] != 0);
  }
  if (iVar14 != 0) {
    iVar14 = *piVar2 + -1;
    iVar11 = (uint)bVar1 - (uint)**(byte **)(piVar2 + (long)iVar14 * 4 + 2);
    if ((iVar11 != 0) || (bVar1 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar16 = 1;
      do {
        uVar10 = uVar16;
        iVar11 = (uint)param_2[uVar10] - (uint)(*(byte **)(piVar2 + (long)iVar14 * 4 + 2))[uVar10];
        if (iVar11 != 0) break;
        uVar16 = uVar10 + 1;
      } while (param_2[uVar10] != 0);
    }
    if (iVar11 == 0) {
LAB_00100436:
      if (-1 < iVar14) goto LAB_001002ea;
    }
    else {
      iVar11 = 1;
LAB_00100378:
      iVar15 = iVar14;
      uVar16 = uVar10;
      if (iVar11 < iVar15) {
        do {
          iVar14 = (iVar15 + iVar11) / 2;
          uVar3 = uVar16;
          if ((int)uVar8 <= (int)uVar16) {
            uVar3 = uVar8;
          }
          uVar10 = uVar3 & 0xffffffff;
          iVar9 = (int)uVar3;
          pbVar12 = (byte *)((long)iVar9 + *(long *)(piVar2 + (long)iVar14 * 4 + 2));
          uVar5 = (uint)param_2[iVar9];
          iVar13 = uVar5 - *pbVar12;
          if ((iVar13 == 0) && (uVar5 != 0)) {
            lVar4 = 1;
            do {
              lVar7 = lVar4;
              uVar5 = (uint)(param_2 + iVar9)[lVar7];
              iVar13 = uVar5 - pbVar12[lVar7];
              if (iVar13 != 0) break;
              lVar4 = lVar7 + 1;
            } while (uVar5 != 0);
            uVar10 = (ulong)(uint)(iVar9 + (int)lVar7);
          }
          if (iVar13 < 0) goto LAB_00100378;
          if (iVar13 == 0) goto LAB_00100436;
          iVar11 = iVar14 + 1;
          uVar8 = uVar10;
          if (iVar15 <= iVar11) {
            return 0;
          }
        } while( true );
      }
    }
    return 0;
  }
LAB_001002ea:
  *param_3 = 0xffffffff;
  uVar6 = UDataMemory_normalizeDataPointer_76_godot(*(undefined8 *)(piVar2 + (long)iVar14 * 4 + 4));
  return uVar6;
}



ushort udata_getHeaderSize_76_godot(ushort *param_1)

{
  ushort uVar1;
  
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  if ((char)param_1[4] == '\0') {
    return uVar1;
  }
  return uVar1 << 8 | uVar1 >> 8;
}



ushort udata_getInfoSize_76_godot(ushort *param_1)

{
  ushort uVar1;
  
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  if ((char)param_1[2] == '\0') {
    return uVar1;
  }
  return uVar1 << 8 | uVar1 >> 8;
}



void udata_checkCommonData_76_godot(undefined8 *param_1,int *param_2)

{
  char cVar1;
  ushort *puVar2;
  ushort uVar3;
  
  if (*param_2 < 1) {
    if ((((param_1 == (undefined8 *)0x0) || (puVar2 = (ushort *)param_1[1], puVar2 == (ushort *)0x0)
         ) || (puVar2[1] != 0x27da)) || (puVar2[4] != 0)) {
LAB_001004e0:
      *param_2 = 3;
      udata_close_76_godot();
      return;
    }
    if (puVar2[6] == 0x6d43) {
      if ((puVar2[7] != 0x446e) || ((char)puVar2[8] != '\x01')) goto LAB_001004e0;
      uVar3 = *puVar2;
      *param_1 = CmnDFuncs;
      cVar1 = (char)puVar2[4];
    }
    else {
      if (((puVar2[6] != 0x6f54) || (puVar2[7] != 0x5043)) || ((char)puVar2[8] != '\x01'))
      goto LAB_001004e0;
      uVar3 = *puVar2;
      *param_1 = ToCPFuncs;
      cVar1 = (char)puVar2[4];
    }
    if (cVar1 != '\0') {
      uVar3 = uVar3 << 8 | uVar3 >> 8;
    }
    param_1[2] = (long)puVar2 + (ulong)uVar3;
  }
  return;
}


