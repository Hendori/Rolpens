
long SharpYuvUpdateY_C(long param_1,long param_2,long param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar4 = (1 << (param_5 & 0x1f)) + -1;
  if (0 < param_4) {
    lVar3 = 0;
    lVar6 = 0;
    do {
      iVar1 = (uint)*(ushort *)(param_1 + lVar3) - (uint)*(ushort *)(param_2 + lVar3);
      iVar2 = (uint)*(ushort *)(param_3 + lVar3) + iVar1;
      iVar5 = 0;
      if ((-1 < iVar2) && (iVar5 = iVar2, iVar4 < iVar2)) {
        iVar5 = iVar4;
      }
      *(short *)(param_3 + lVar3) = (short)iVar5;
      if (iVar1 < 1) {
        iVar1 = -iVar1;
      }
      lVar3 = lVar3 + 2;
      lVar6 = lVar6 + iVar1;
    } while (lVar3 != (long)param_4 * 2);
    return lVar6;
  }
  return 0;
}



void SharpYuvUpdateRGB_C(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  
  if (0 < param_4) {
    lVar1 = 0;
    do {
      *(short *)(param_3 + lVar1) =
           *(short *)(param_3 + lVar1) + (*(short *)(param_1 + lVar1) - *(short *)(param_2 + lVar1))
      ;
      lVar1 = lVar1 + 2;
    } while ((long)param_4 * 2 != lVar1);
  }
  return;
}



void SharpYuvFilterRow_C(long param_1,long param_2,int param_3,long param_4,long param_5,
                        byte param_6)

{
  int iVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (0 < param_3) {
    iVar1 = (1 << (param_6 & 0x1f)) + -1;
    lVar4 = 0;
    do {
      sVar2 = *(short *)(param_1 + lVar4);
      iVar8 = (int)*(short *)(param_1 + 2 + lVar4);
      iVar6 = (int)*(short *)(param_2 + 2 + lVar4);
      sVar3 = *(short *)(param_2 + lVar4);
      iVar5 = (iVar6 + 8 + iVar8 * 3 + sVar2 * 9 + sVar3 * 3 >> 4) +
              (uint)*(ushort *)(param_4 + lVar4 * 2);
      iVar7 = 0;
      if ((-1 < iVar5) && (iVar7 = iVar5, iVar1 < iVar5)) {
        iVar7 = iVar1;
      }
      *(short *)(param_5 + lVar4 * 2) = (short)iVar7;
      iVar5 = (uint)*(ushort *)(param_4 + 2 + lVar4 * 2) +
              (sVar3 + 8 + sVar2 * 3 + iVar8 * 9 + iVar6 * 3 >> 4);
      iVar7 = 0;
      if ((-1 < iVar5) && (iVar7 = iVar5, iVar1 < iVar5)) {
        iVar7 = iVar1;
      }
      *(short *)(param_5 + 2 + lVar4 * 2) = (short)iVar7;
      lVar4 = lVar4 + 2;
    } while ((long)param_3 * 2 != lVar4);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SharpYuvInitDsp(void)

{
  int iVar1;
  
  SharpYuvUpdateY = 0x100000;
  SharpYuvUpdateRGB = SharpYuvUpdateRGB_C;
  SharpYuvFilterRow = SharpYuvFilterRow_C;
  if (_SharpYuvGetCPUInfo == (code *)0x0) {
    return;
  }
  iVar1 = (*_SharpYuvGetCPUInfo)(0);
  if (iVar1 == 0) {
    return;
  }
  InitSharpYuvSSE2();
  return;
}


