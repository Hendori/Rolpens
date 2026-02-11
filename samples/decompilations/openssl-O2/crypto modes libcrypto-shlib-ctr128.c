
void CRYPTO_ctr128_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,byte *param_5,
               ulong *param_6,uint *param_7,code *param_8)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong *puVar8;
  ulong *puVar9;
  bool bVar10;
  
  uVar4 = *param_7;
  for (; (uVar6 = (ulong)uVar4, uVar4 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    *(byte *)param_2 = *(byte *)((long)param_6 + uVar6) ^ (byte)*param_1;
    uVar4 = uVar4 + 1 & 0xf;
    param_1 = (ulong *)((long)param_1 + 1);
    param_2 = (ulong *)((long)param_2 + 1);
  }
  if (0xf < param_3) {
    lVar1 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
    puVar2 = (ulong *)((long)param_1 + lVar1);
    puVar8 = param_2;
    do {
      (*param_8)(param_5,param_6,param_4);
      uVar4 = 1;
      pbVar7 = param_5 + 0xf;
      do {
        bVar3 = *pbVar7;
        *pbVar7 = (byte)(uVar4 + bVar3);
        uVar4 = uVar4 + bVar3 >> 8;
        bVar10 = param_5 != pbVar7;
        pbVar7 = pbVar7 + -1;
      } while (bVar10);
      puVar9 = param_1 + 2;
      *puVar8 = *param_1 ^ *param_6;
      puVar8[1] = param_1[1] ^ param_6[1];
      puVar8 = puVar8 + 2;
      param_1 = puVar9;
    } while (puVar9 != puVar2);
    uVar6 = 0;
    param_3 = (ulong)((uint)param_3 & 0xf);
    param_2 = (ulong *)((long)param_2 + lVar1);
    param_1 = puVar2;
  }
  uVar4 = (uint)uVar6;
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    uVar5 = 1;
    pbVar7 = param_5 + 0xf;
    do {
      bVar3 = *pbVar7;
      *pbVar7 = (byte)(uVar5 + bVar3);
      uVar5 = uVar5 + bVar3 >> 8;
      bVar10 = pbVar7 != param_5;
      pbVar7 = pbVar7 + -1;
    } while (bVar10);
    do {
      uVar5 = (int)uVar6 + 1;
      *(byte *)((long)param_2 + uVar6) =
           *(byte *)((long)param_1 + uVar6) ^ *(byte *)((long)param_6 + uVar6);
      uVar6 = (ulong)uVar5;
    } while ((int)param_3 + uVar4 != uVar5);
    uVar4 = uVar4 + (int)param_3;
  }
  *param_7 = uVar4;
  return;
}



void CRYPTO_ctr128_encrypt_ctr32
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,byte *param_5,
               undefined1 (*param_6) [16],uint *param_7,code *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = *param_7;
  for (; (uVar7 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    *param_2 = (*param_6)[uVar7] ^ *param_1;
    uVar7 = uVar7 + 1 & 0xf;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  uVar2 = *(uint *)(param_5 + 0xc);
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (0xf < param_3) {
    uVar5 = (ulong)uVar2;
    do {
      if (param_3 < 0x100000010) {
        uVar6 = param_3 >> 4;
        uVar5 = (ulong)(uint)((int)uVar6 + (int)uVar5);
        if (uVar5 < uVar6) goto LAB_0010025b;
LAB_00100311:
        (*param_8)(param_1,param_2,uVar6,param_4,param_5);
        uVar2 = (uint)uVar5;
        *(uint *)(param_5 + 0xc) =
             uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      }
      else {
        uVar6 = 0x10000000;
        uVar5 = (ulong)((int)uVar5 + 0x10000000);
        if (0xfffffff < uVar5) goto LAB_00100311;
LAB_0010025b:
        uVar6 = uVar6 - uVar5;
        (*param_8)(param_1,param_2,uVar6,param_4,param_5);
        param_5[0xc] = 0;
        param_5[0xd] = 0;
        param_5[0xe] = 0;
        param_5[0xf] = 0;
        uVar2 = 1;
        pbVar4 = param_5 + 0xb;
        do {
          bVar1 = *pbVar4;
          *pbVar4 = (byte)(uVar2 + bVar1);
          uVar2 = uVar2 + bVar1 >> 8;
          bVar8 = param_5 != pbVar4;
          pbVar4 = pbVar4 + -1;
        } while (bVar8);
        uVar5 = 0;
      }
      param_3 = param_3 + uVar6 * -0x10;
      param_2 = param_2 + uVar6 * 0x10;
      param_1 = param_1 + uVar6 * 0x10;
    } while (0xf < param_3);
    uVar2 = (uint)uVar5;
  }
  if (param_3 != 0) {
    *param_6 = (undefined1  [16])0x0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar2 = uVar2 + 1;
    *(uint *)(param_5 + 0xc) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
    if (uVar2 == 0) {
      uVar2 = 1;
      pbVar4 = param_5 + 0xb;
      do {
        bVar1 = *pbVar4;
        *pbVar4 = (byte)(uVar2 + bVar1);
        uVar2 = uVar2 + bVar1 >> 8;
        bVar8 = pbVar4 != param_5;
        pbVar4 = pbVar4 + -1;
      } while (bVar8);
    }
    uVar2 = uVar7;
    do {
      uVar3 = uVar2 + 1;
      param_2[uVar2] = param_1[uVar2] ^ (*param_6)[uVar2];
      uVar2 = uVar3;
    } while (uVar3 != (int)param_3 + uVar7);
    uVar7 = uVar7 + (int)param_3;
  }
  *param_7 = uVar7;
  return;
}


