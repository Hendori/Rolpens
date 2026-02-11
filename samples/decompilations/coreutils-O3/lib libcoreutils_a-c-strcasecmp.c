
int c_strcasecmp(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  
  iVar2 = 0;
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      bVar4 = *(byte *)(param_1 + lVar3);
      uVar1 = (uint)bVar4;
      uVar5 = (uint)*(byte *)(param_2 + lVar3);
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 + 0x20;
        bVar4 = bVar4 + 0x20;
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        if (uVar1 == 0) break;
      }
      lVar3 = lVar3 + 1;
    } while (bVar4 == (byte)uVar5);
    iVar2 = uVar1 - uVar5;
  }
  return iVar2;
}


