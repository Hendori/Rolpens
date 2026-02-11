
void CRYPTO_ofb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,code *param_7)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar6 = 0xffffffff;
  uVar2 = *param_6;
  if (-1 < (int)uVar2) {
    for (; (uVar4 = (ulong)uVar2, uVar2 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      *param_2 = *(byte *)(param_5 + uVar4) ^ *param_1;
      uVar2 = uVar2 + 1 & 0xf;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if (0xf < param_3) {
      lVar3 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
      pbVar1 = param_1 + lVar3;
      pbVar5 = param_2;
      do {
        (*param_7)(param_5,param_5,param_4);
        uVar2 = (uint)uVar4;
        while (uVar2 < 0x10) {
          *(ulong *)(pbVar5 + uVar4) = *(ulong *)(param_1 + uVar4) ^ *(ulong *)(param_5 + uVar4);
          uVar4 = uVar4 + 8;
          uVar2 = (uint)uVar4;
        }
        param_1 = param_1 + 0x10;
        pbVar5 = pbVar5 + 0x10;
        uVar4 = 0;
      } while (param_1 != pbVar1);
      param_3 = (ulong)((uint)param_3 & 0xf);
      param_2 = param_2 + lVar3;
      param_1 = pbVar1;
    }
    uVar6 = (uint)uVar4;
    if (param_3 != 0) {
      (*param_7)(param_5,param_5,param_4);
      do {
        uVar2 = (int)uVar4 + 1;
        param_2[uVar4] = param_1[uVar4] ^ *(byte *)(param_5 + uVar4);
        uVar4 = (ulong)uVar2;
      } while (uVar6 + (int)param_3 != uVar2);
      uVar6 = uVar6 + (int)param_3;
    }
  }
  *param_6 = uVar6;
  return;
}


