
void getDFDComponentInfoUnpacked(long param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  *param_2 = 0;
  uVar1 = (uVar1 >> 0x12) - 6 >> 2;
  if (uVar1 != 0) {
    uVar1 = uVar1 * 4 + 7;
    uVar3 = 7;
    uVar4 = 0xffffffff;
    do {
      while( true ) {
        uVar2 = *(uint *)(param_1 + (ulong)uVar3 * 4);
        uVar5 = uVar2 >> 0x18 & 0xf;
        uVar2 = (uVar2 >> 0x10 & 0xff) + 1 >> 3;
        if (uVar5 != uVar4) break;
        uVar3 = uVar3 + 4;
        *param_3 = uVar2 + *param_3;
        uVar4 = uVar5;
        if (uVar3 == uVar1) {
          return;
        }
      }
      uVar3 = uVar3 + 4;
      *param_2 = *param_2 + 1;
      *param_3 = uVar2;
      uVar4 = uVar5;
    } while (uVar3 != uVar1);
  }
  return;
}



uint getDFDNumComponents(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (*(uint *)(param_1 + 8) >> 0x12) - 6 >> 2;
  if (uVar2 != 0) {
    iVar1 = uVar2 * 4;
    uVar3 = 7;
    uVar2 = 0;
    uVar4 = 0xffffffff;
    do {
      uVar5 = *(byte *)(param_1 + 3 + (ulong)uVar3 * 4) & 0xf;
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 + (uVar4 != uVar5);
      uVar4 = uVar5;
    } while (iVar1 + 7U != uVar3);
  }
  return uVar2;
}



uint reconstructDFDBytesPlane0FromSamples(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar5 = (*(uint *)(param_1 + 8) >> 0x12) - 6;
  uVar6 = uVar5 >> 2;
  if ((uVar7 & 0xf000000) == 0xe000000) {
    if (uVar6 == 1) {
      if ((uVar7 & 0xff0000) == 0x170000) {
        return 4;
      }
    }
    else {
      if (uVar6 != 2) goto LAB_0010010a;
      if ((uVar7 & 0xff0000) == 0xf0000) {
        return 4;
      }
      if (((uVar7 & 0xff0000) == 0x1f0000) && ((*(uint *)(param_1 + 0x2c) & 0xf000000) == 0xd000000)
         ) {
        return 8;
      }
    }
  }
  else {
LAB_0010010a:
    iVar8 = 1;
    lVar2 = 0x18;
    if (uVar5 >> 2 == 0) goto LAB_00100151;
  }
  uVar4 = 6;
  uVar5 = 0;
  uVar7 = 0;
  uVar1 = 0;
  do {
    uVar3 = (uint)*(ushort *)(param_1 + 4 + uVar4 * 4);
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
      uVar5 = uVar1;
    }
    uVar1 = uVar1 + 1;
    uVar4 = (ulong)((int)uVar4 + 4);
  } while (uVar1 < uVar6);
  iVar8 = uVar7 + 1;
  lVar2 = (ulong)(uVar5 * 4 + 6) << 2;
LAB_00100151:
  return (uint)*(byte *)(param_1 + 6 + lVar2) + iVar8 >> 3;
}



void recreateBytesPlane0FromSampleInfo(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = reconstructDFDBytesPlane0FromSamples();
  *param_2 = uVar1;
  return;
}


