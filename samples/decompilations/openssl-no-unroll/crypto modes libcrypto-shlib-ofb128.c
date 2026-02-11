
void CRYPTO_ofb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,code *param_7)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *local_50;
  
  uVar6 = 0xffffffff;
  uVar5 = *param_6;
  local_50 = param_1;
  if (-1 < (int)uVar5) {
    for (; (uVar2 = (ulong)uVar5, uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      *param_2 = *(byte *)(param_5 + uVar2) ^ *local_50;
      uVar5 = uVar5 + 1 & 0xf;
      local_50 = local_50 + 1;
      param_2 = param_2 + 1;
    }
    if (0xf < param_3) {
      lVar4 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
      pbVar1 = local_50 + lVar4;
      pbVar7 = param_2;
      do {
        (*param_7)(param_5,param_5,param_4);
        if ((uint)uVar2 < 0x10) {
          uVar5 = (uint)uVar2 + 8;
          uVar3 = (ulong)uVar5;
          *(ulong *)(pbVar7 + uVar2) = *(ulong *)(local_50 + uVar2) ^ *(ulong *)(param_5 + uVar2);
          if (uVar5 < 0x10) {
            *(ulong *)(pbVar7 + uVar3) = *(ulong *)(local_50 + uVar3) ^ *(ulong *)(param_5 + uVar3);
          }
        }
        local_50 = local_50 + 0x10;
        pbVar7 = pbVar7 + 0x10;
        uVar2 = 0;
      } while (local_50 != pbVar1);
      param_3 = (ulong)((uint)param_3 & 0xf);
      param_2 = param_2 + lVar4;
      local_50 = pbVar1;
    }
    uVar6 = (uint)uVar2;
    if (param_3 != 0) {
      (*param_7)(param_5,param_5,param_4);
      uVar3 = (ulong)(uVar6 + 1);
      param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ local_50[uVar2];
      lVar4 = param_3 - 1;
      if (lVar4 != 0) {
        param_2[uVar3] = *(byte *)(param_5 + uVar3) ^ local_50[uVar3];
        uVar2 = (ulong)(uVar6 + 2);
        if (lVar4 != 1) {
          param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ local_50[uVar2];
          uVar2 = (ulong)(uVar6 + 3);
          if (param_3 != 3) {
            param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
            uVar2 = (ulong)(uVar6 + 4);
            if (param_3 != 4) {
              param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
              uVar2 = (ulong)(uVar6 + 5);
              if (param_3 != 5) {
                param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                uVar2 = (ulong)(uVar6 + 6);
                if (param_3 != 6) {
                  param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                  uVar2 = (ulong)(uVar6 + 7);
                  if (param_3 != 7) {
                    param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                    uVar2 = (ulong)(uVar6 + 8);
                    if (param_3 != 8) {
                      param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                      uVar2 = (ulong)(uVar6 + 9);
                      if (param_3 != 9) {
                        param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                        uVar2 = (ulong)(uVar6 + 10);
                        if (param_3 != 10) {
                          param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                          uVar2 = (ulong)(uVar6 + 0xb);
                          if (param_3 != 0xb) {
                            param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                            uVar2 = (ulong)(uVar6 + 0xc);
                            if (param_3 != 0xc) {
                              param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                              uVar2 = (ulong)(uVar6 + 0xd);
                              if (param_3 != 0xd) {
                                param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                                uVar2 = (ulong)(uVar6 + 0xe);
                                if (param_3 != 0xe) {
                                  param_2[uVar2] = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar6 = uVar6 + 1 + (int)lVar4;
    }
  }
  *param_6 = uVar6;
  return;
}


