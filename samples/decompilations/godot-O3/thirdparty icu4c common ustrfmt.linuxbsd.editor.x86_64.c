
ulong uprv_itou_76_godot(long param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar5 = 1;
  do {
    uVar10 = uVar5;
    sVar4 = (short)((ulong)param_3 % (ulong)param_4);
    sVar3 = sVar4 + 0x37;
    if ((int)((ulong)param_3 % (ulong)param_4) < 10) {
      sVar3 = sVar4 + 0x30;
    }
    *(short *)(param_1 + -2 + uVar10 * 2) = sVar3;
    iVar8 = (int)uVar10;
  } while ((param_4 <= param_3) &&
          (uVar5 = uVar10 + 1, param_3 = param_3 / param_4, iVar8 < param_2));
  uVar10 = uVar10 & 0xffffffff;
  if (iVar8 < (int)param_5) {
    puVar6 = (undefined2 *)(param_1 + (long)iVar8 * 2);
    puVar1 = (undefined2 *)(param_1 + ((ulong)(param_5 - iVar8) + (long)iVar8) * 2);
    if (((int)puVar1 - (int)puVar6 & 2U) == 0) goto LAB_00100090;
    *puVar6 = 0x30;
    for (puVar6 = puVar6 + 1; puVar6 != puVar1; puVar6 = puVar6 + 2) {
LAB_00100090:
      *puVar6 = 0x30;
      puVar6[1] = 0x30;
    }
    iVar9 = (int)param_5 >> 1;
    if ((int)param_5 < param_2) {
      uVar10 = (ulong)param_5;
      *(undefined2 *)(param_1 + (long)(int)param_5 * 2) = 0;
    }
    else {
      uVar10 = (ulong)param_5;
    }
  }
  else {
    if (iVar8 < param_2) {
      *(undefined2 *)(param_1 + (long)iVar8 * 2) = 0;
    }
    iVar9 = iVar8 >> 1;
    if (iVar8 == 1) {
      return uVar10;
    }
  }
  lVar7 = 0;
  puVar6 = (undefined2 *)(param_1 + (long)((int)uVar10 + -1) * 2);
  do {
    uVar2 = *puVar6;
    *puVar6 = *(undefined2 *)(param_1 + lVar7 * 2);
    *(undefined2 *)(param_1 + lVar7 * 2) = uVar2;
    lVar7 = lVar7 + 1;
    puVar6 = puVar6 + -1;
  } while ((int)lVar7 < iVar9);
  return uVar10;
}


