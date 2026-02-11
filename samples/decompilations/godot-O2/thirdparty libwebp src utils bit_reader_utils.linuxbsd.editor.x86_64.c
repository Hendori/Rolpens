
void ShiftBytes(ulong *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = (int)param_1[4];
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar5 < 8) {
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    uVar4 = param_1[3];
    do {
      if (param_1[2] <= uVar4) {
        if (iVar2 == 0) {
          if (param_1[3] != param_1[2]) {
            return;
          }
          if (iVar5 < 0x41) {
            return;
          }
        }
        goto LAB_00100073;
      }
      uVar3 = *param_1;
      iVar5 = iVar5 + -8;
      *param_1 = uVar3 >> 8;
      bVar1 = *(byte *)(param_1[1] + uVar4);
      uVar4 = uVar4 + 1;
      param_1[3] = uVar4;
      *(int *)(param_1 + 4) = iVar5;
      *param_1 = (ulong)bVar1 << 0x38 | uVar3 >> 8;
    } while (7 < iVar5);
    if (iVar2 == 0) {
      return;
    }
  }
LAB_00100073:
  param_1[4] = _LC0;
  return;
}



void VP8BitReaderSetBuffer(long param_1,long param_2,ulong param_3)

{
  *(long *)(param_1 + 0x10) = param_2;
  *(ulong *)(param_1 + 0x18) = param_2 + param_3;
  if (7 < param_3) {
    param_2 = param_2 + -7 + param_3;
  }
  *(long *)(param_1 + 0x20) = param_2;
  return;
}



void VP8InitBitReader(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0xfffffff8000000fe;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = (ulong)param_2;
  param_1[3] = (long)param_2 + param_3;
  if (param_3 < 8) {
    param_1[4] = (ulong)param_2;
  }
  else {
    puVar1 = (ulong *)((long)param_2 + (param_3 - 7));
    param_1[4] = (ulong)puVar1;
    if (param_2 < puVar1) {
      uVar2 = *param_2;
      *(undefined4 *)((long)param_1 + 0xc) = 0x30;
      param_1[2] = (ulong)((long)param_2 + 7);
      *param_1 = ((uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
                  (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 |
                  (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) >> 8;
      return;
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (param_2 < (ulong *)((long)param_2 + param_3)) {
    param_1[2] = (ulong)((long)param_2 + 1);
    *param_1 = (ulong)(byte)*param_2;
    return;
  }
  *(undefined4 *)(param_1 + 5) = 1;
  return;
}



void VP8RemapBitReader(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
  }
  return;
}



void VP8LoadFinalBytes(ulong *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)param_1[2];
  if (pbVar1 < (byte *)param_1[3]) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 8;
    param_1[2] = (ulong)(pbVar1 + 1);
    *param_1 = *param_1 << 8 | (ulong)*pbVar1;
    return;
  }
  if ((int)param_1[5] == 0) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 8;
    *(undefined4 *)(param_1 + 5) = 1;
    *param_1 = *param_1 << 8;
    return;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}



uint VP8GetValue(ulong *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (0 < param_2) {
    param_2 = param_2 + -1;
    iVar7 = (int)param_1[1];
    uVar6 = 0;
    iVar4 = *(int *)((long)param_1 + 0xc);
    do {
      if (iVar4 < 0) {
        puVar1 = (ulong *)param_1[2];
        if (puVar1 < (ulong *)param_1[4]) {
          uVar5 = *puVar1;
          iVar4 = iVar4 + 0x38;
          param_1[2] = (long)puVar1 + 7;
          uVar5 = ((uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
                   (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
                   (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38) >> 8 |
                  *param_1 << 0x38;
          *param_1 = uVar5;
        }
        else {
          VP8LoadFinalBytes();
          uVar5 = *param_1;
          iVar4 = *(int *)((long)param_1 + 0xc);
        }
      }
      else {
        uVar5 = *param_1;
      }
      uVar3 = (uint)(iVar7 << 7) >> 8;
      bVar8 = uVar3 < (uint)(uVar5 >> ((byte)iVar4 & 0x3f));
      uVar2 = uVar3 + 1;
      if (bVar8) {
        *param_1 = uVar5 - ((ulong)uVar2 << ((byte)iVar4 & 0x3f));
        uVar2 = iVar7 - uVar3;
      }
      uVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      iVar4 = iVar4 - (uVar3 ^ 7);
      iVar7 = (uVar2 << ((byte)(uVar3 ^ 7) & 0x1f)) + -1;
      *(int *)((long)param_1 + 0xc) = iVar4;
      *(int *)(param_1 + 1) = iVar7;
      uVar6 = uVar6 | (uint)bVar8 << ((byte)param_2 & 0x1f);
      bVar8 = param_2 != 0;
      param_2 = param_2 + -1;
    } while (bVar8);
    return uVar6;
  }
  return 0;
}



int VP8GetSignedValue(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = VP8GetValue();
  iVar2 = VP8GetValue(param_1,1);
  if (iVar2 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



void VP8LInitBitReader(ulong *param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[4] = 0;
  uVar4 = 8;
  if (param_3 < 9) {
    uVar4 = param_3;
  }
  if (param_3 != 0) {
    param_3 = 0;
    uVar3 = 0;
    do {
      pbVar1 = (byte *)(param_2 + uVar3);
      cVar2 = (char)uVar3;
      uVar3 = uVar3 + 1;
      param_3 = param_3 | (ulong)*pbVar1 << (cVar2 * '\b' & 0x3fU);
    } while (uVar3 < uVar4);
  }
  *param_1 = param_3;
  param_1[3] = uVar4;
  param_1[1] = param_2;
  return;
}



void VP8LBitReaderSetBuffer(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar1 = 1;
  *(ulong *)(param_1 + 0x10) = param_3;
  if (*(ulong *)(param_1 + 0x18) <= param_3) {
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar1 = 0;
      if (*(ulong *)(param_1 + 0x18) == param_3) {
        uVar1 = (uint)(0x40 < *(int *)(param_1 + 0x20));
      }
    }
    else {
      uVar1 = 1;
    }
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  return;
}



void VP8LDoFillBitWindow(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[3];
  if (uVar2 + 8 < param_1[2]) {
    uVar3 = *param_1;
    *(int *)(param_1 + 4) = (int)param_1[4] + -0x20;
    *param_1 = uVar3 >> 0x20;
    uVar1 = *(uint *)(param_1[1] + uVar2);
    param_1[3] = uVar2 + 4;
    *param_1 = (ulong)uVar1 << 0x20 | uVar3 >> 0x20;
    return;
  }
  ShiftBytes();
  return;
}



uint VP8LReadBits(ulong *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(int *)((long)param_1 + 0x24) == 0) && (param_2 < 0x19)) {
    uVar3 = param_1[4];
    uVar2 = *param_1;
    uVar1 = *(uint *)(kBitMask + (long)param_2 * 4);
    *(int *)(param_1 + 4) = param_2 + (int)uVar3;
    ShiftBytes();
    return (uint)(uVar2 >> ((byte)(int)uVar3 & 0x3f)) & uVar1;
  }
  param_1[4] = _LC0;
  return 0;
}


