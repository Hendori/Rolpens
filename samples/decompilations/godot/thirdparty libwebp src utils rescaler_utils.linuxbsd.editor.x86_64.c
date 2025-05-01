
undefined8
WebPRescalerInit(uint *param_1,uint param_2,int param_3,undefined8 param_4,uint param_5,uint param_6
                ,uint param_7,uint param_8,void *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  *(undefined8 *)(param_1 + 0x12) = param_4;
  lVar5 = (long)(int)param_8 * (long)(int)param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = param_7;
  *param_1 = (uint)((int)param_2 < (int)param_5);
  param_1[2] = param_8;
  param_1[1] = (uint)(param_3 < (int)param_6);
  *(ulong *)(param_1 + 0xb) = CONCAT44(param_3,param_2);
  *(ulong *)(param_1 + 0xd) = CONCAT44(param_6,param_5);
  if ((int)param_2 < (int)param_5) {
    param_1[10] = param_2 - 1;
    uVar6 = (ulong)(int)(param_5 - 1);
    param_1[9] = param_5 - 1;
  }
  else {
    param_1[10] = param_5;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)(int)param_5;
    param_1[3] = SUB164((ZEXT416(0) << 0x40 | ZEXT816(0x100000000)) / auVar1,0);
    param_1[9] = param_2;
    uVar6 = (ulong)(int)param_2;
  }
  if (param_3 < (int)param_6) {
    param_1[7] = param_3 - 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar4 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x100000000)) / auVar3,0);
    param_1[8] = param_6 - 1;
    param_1[6] = param_6 - 1;
  }
  else {
    param_1[8] = param_6;
    *(ulong *)(param_1 + 6) = CONCAT44(param_3,param_3);
    uVar6 = ((ulong)param_6 << 0x20) / ((long)param_3 * uVar6);
    if (0xffffffff < uVar6) {
      uVar6 = 0;
    }
    param_1[5] = (uint)uVar6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)(int)param_6;
    uVar4 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x100000000)) / auVar2,0);
  }
  param_1[4] = uVar4;
  *(void **)(param_1 + 0x16) = param_9;
  *(void **)(param_1 + 0x18) = (void *)((long)param_9 + lVar5 * 4);
  memset(param_9,0,lVar5 * 8);
  WebPRescalerDspInit();
  return 1;
}



undefined8 WebPRescalerGetScaledDimensions(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = *param_4;
  if ((iVar1 == 0) && (0 < param_2)) {
    iVar1 = (int)((((long)param_2 - 1U) + (long)param_1 * (long)iVar2) / (ulong)(long)param_2);
  }
  if ((iVar2 == 0) && (0 < param_1)) {
    iVar2 = (int)((((long)param_1 - 1U) + (long)param_2 * (long)iVar1) / (ulong)(long)param_1);
  }
  if ((iVar1 - 1U < 0x3fffffff) && (iVar2 - 1U < 0x3fffffff)) {
    *param_3 = iVar1;
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



undefined1  [16] WebPRescaleNeededLines(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  iVar1 = *(int *)(param_1 + 0x20);
  lVar2 = (long)(*(int *)(param_1 + 0x18) + iVar1 + -1);
  uVar3 = lVar2 / (long)iVar1;
  auVar5._8_8_ = lVar2 % (long)iVar1 & 0xffffffff;
  uVar4 = uVar3 & 0xffffffff;
  if ((int)param_2 < (int)uVar3) {
    uVar4 = (ulong)param_2;
  }
  auVar5._0_8_ = uVar4;
  return auVar5;
}



int WebPRescalerImport(long param_1,int param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      if ((*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x18) < 1)) {
        return iVar6;
      }
      if (*(int *)(param_1 + 4) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = uVar4;
      }
      WebPRescalerImportRow(param_1,param_3);
      if ((*(int *)(param_1 + 4) == 0) && (0 < *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34))) {
        lVar2 = *(long *)(param_1 + 0x58);
        lVar3 = *(long *)(param_1 + 0x60);
        lVar5 = 0;
        do {
          piVar1 = (int *)(lVar2 + lVar5 * 4);
          *piVar1 = *piVar1 + *(int *)(lVar3 + lVar5 * 4);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34));
      }
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      param_3 = param_3 + param_4;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
    } while (param_2 != iVar6);
  }
  return iVar6;
}



int WebPRescalerExport(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    while (*(int *)(param_1 + 0x18) < 1) {
      iVar1 = iVar1 + 1;
      WebPRescalerExportRow(param_1);
      if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40)) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


