
undefined8 chacha20_initkey(long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      pbVar2 = (byte *)(param_2 + 1 + uVar6);
      pbVar3 = (byte *)(param_2 + 2 + uVar6);
      uVar5 = uVar6 >> 2;
      pbVar1 = (byte *)(param_2 + uVar6);
      pbVar4 = (byte *)(param_2 + 3 + uVar6);
      uVar6 = uVar6 + 4;
      *(uint *)(param_1 + 0xc0 + (uVar5 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar6 != 0x20);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return 1;
}



undefined8 chacha20_initiv(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + 0x6c) & 4) != 0) {
    uVar6 = 0;
    do {
      pbVar2 = (byte *)(param_1 + 1 + uVar6);
      pbVar3 = (byte *)(param_1 + 2 + uVar6);
      uVar5 = uVar6 >> 2;
      pbVar1 = (byte *)(param_1 + uVar6);
      pbVar4 = (byte *)(param_1 + 3 + uVar6);
      uVar6 = uVar6 + 4;
      *(uint *)(param_1 + 0xe0 + (uVar5 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar6 != 0x10);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return 1;
}



undefined8 chacha20_cipher(long param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(uint *)(param_1 + 0x130);
  if (uVar8 == 0) {
    uVar9 = *(uint *)(param_1 + 0xe0);
  }
  else {
    if (param_4 != 0) {
      do {
        if (0x3f < uVar8) break;
        uVar6 = (ulong)uVar8;
        bVar1 = *param_3;
        pbVar7 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar8 = uVar8 + 1;
        *param_2 = bVar1 ^ *(byte *)(param_1 + 0xf0 + uVar6);
        param_4 = param_4 - 1;
        param_2 = pbVar7;
      } while (param_4 != 0);
    }
    *(uint *)(param_1 + 0x130) = uVar8;
    if (param_4 == 0) {
      return 1;
    }
    uVar9 = *(uint *)(param_1 + 0xe0);
    if (uVar8 == 0x40) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      uVar9 = uVar9 + 1;
      *(uint *)(param_1 + 0xe0) = uVar9;
      if (uVar9 == 0) {
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      }
    }
  }
  uVar8 = (uint)param_4 & 0x3f;
  uVar6 = param_4 - uVar8;
  if (0x3f < uVar6) {
    uVar5 = (ulong)uVar9;
    do {
      while (uVar6 < 0x400000040) {
        uVar3 = uVar6 >> 6;
        uVar5 = (ulong)(uint)((int)uVar3 + (int)uVar5);
        if (uVar5 < uVar3) goto LAB_00100153;
LAB_001001bd:
        lVar4 = uVar3 * 0x40;
        ChaCha20_ctr32(param_2,param_3,lVar4,param_1 + 0xc0,param_1 + 0xe0);
        uVar6 = uVar6 + uVar3 * -0x40;
        param_3 = param_3 + lVar4;
        param_2 = param_2 + lVar4;
        *(int *)(param_1 + 0xe0) = (int)uVar5;
        if (uVar6 < 0x40) goto LAB_00100205;
      }
      uVar3 = 0x10000000;
      uVar5 = (ulong)((int)uVar5 + 0x10000000);
      if (0xfffffff < uVar5) goto LAB_001001bd;
LAB_00100153:
      lVar4 = uVar3 - uVar5;
      lVar2 = lVar4 * 0x40;
      uVar5 = 0;
      ChaCha20_ctr32(param_2,param_3,lVar2,param_1 + 0xc0,param_1 + 0xe0);
      uVar6 = uVar6 + lVar4 * -0x40;
      param_3 = param_3 + lVar2;
      param_2 = param_2 + lVar2;
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      *(undefined4 *)(param_1 + 0xe0) = 0;
    } while (0x3f < uVar6);
  }
LAB_00100205:
  if ((param_4 & 0x3f) != 0) {
    *(undefined1 (*) [16])(param_1 + 0xf0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x100) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x110) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x120) = (undefined1  [16])0x0;
    ChaCha20_ctr32(param_1 + 0xf0,param_1 + 0xf0,0x40,param_1 + 0xc0,param_1 + 0xe0);
    uVar6 = 0;
    do {
      param_2[uVar6] = param_3[uVar6] ^ *(byte *)(param_1 + 0xf0 + uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar6);
    *(uint *)(param_1 + 0x130) = uVar8;
  }
  return 1;
}



undefined1 * ossl_prov_cipher_hw_chacha20(void)

{
  return chacha20_hw;
}


