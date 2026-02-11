
ulong uprv_itou_76_godot(long param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar4 = 1;
  do {
    uVar10 = uVar4;
    sVar3 = (short)((ulong)param_3 % (ulong)param_4);
    sVar2 = sVar3 + 0x37;
    if ((int)((ulong)param_3 % (ulong)param_4) < 10) {
      sVar2 = sVar3 + 0x30;
    }
    *(short *)(param_1 + -2 + uVar10 * 2) = sVar2;
    iVar8 = (int)uVar10;
  } while ((param_4 <= param_3) &&
          (uVar4 = uVar10 + 1, param_3 = param_3 / param_4, iVar8 < param_2));
  uVar10 = uVar10 & 0xffffffff;
  if (iVar8 < (int)param_5) {
    puVar5 = (undefined2 *)(param_1 + (long)iVar8 * 2);
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = 0x30;
      puVar5 = puVar6;
    } while (puVar6 != (undefined2 *)(param_1 + ((ulong)(param_5 - iVar8) + (long)iVar8) * 2));
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
  puVar5 = (undefined2 *)(param_1 + (long)((int)uVar10 + -1) * 2);
  do {
    uVar1 = *puVar5;
    *puVar5 = *(undefined2 *)(param_1 + lVar7 * 2);
    *(undefined2 *)(param_1 + lVar7 * 2) = uVar1;
    lVar7 = lVar7 + 1;
    puVar5 = puVar5 + -1;
  } while ((int)lVar7 < iVar9);
  return uVar10;
}


