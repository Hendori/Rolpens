
void CRYPTO_cfb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,int param_7,code *param_8)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *local_50;
  
  uVar10 = *param_6;
  uVar1 = 0xffffffff;
  if (-1 < (int)uVar10) {
    bVar3 = uVar10 != 0 && param_3 != 0;
    if (param_7 == 0) {
      pbVar9 = param_2;
      if (bVar3) {
        do {
          uVar2 = (ulong)uVar10;
          bVar4 = *param_1;
          param_1 = param_1 + 1;
          param_2 = pbVar9 + 1;
          param_3 = param_3 - 1;
          uVar10 = uVar10 + 1 & 0xf;
          *pbVar9 = *(byte *)(uVar2 + param_5) ^ bVar4;
          *(byte *)(uVar2 + param_5) = bVar4;
          if (uVar10 == 0) break;
          pbVar9 = param_2;
        } while (param_3 != 0);
      }
      local_50 = param_1;
      if (0xf < param_3) {
        lVar7 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_50 = param_1 + lVar7;
        pbVar9 = param_2;
        do {
          (*param_8)(param_5,param_5,param_4);
          if (uVar10 < 0x10) {
            uVar6 = (ulong)uVar10;
            uVar5 = (ulong)(uVar10 + 8);
            uVar2 = *(ulong *)(param_1 + uVar6);
            *(ulong *)(pbVar9 + uVar6) = *(ulong *)(param_5 + uVar6) ^ uVar2;
            *(ulong *)(param_5 + uVar6) = uVar2;
            if (uVar10 + 8 < 0x10) {
              uVar2 = *(ulong *)(param_1 + uVar5);
              *(ulong *)(pbVar9 + uVar5) = *(ulong *)(param_5 + uVar5) ^ uVar2;
              *(ulong *)(param_5 + uVar5) = uVar2;
            }
          }
          param_1 = param_1 + 0x10;
          pbVar9 = pbVar9 + 0x10;
          uVar10 = 0;
        } while (param_1 != local_50);
        param_3 = (ulong)((uint)param_3 & 0xf);
        param_2 = param_2 + lVar7;
      }
      uVar1 = uVar10;
      if (param_3 != 0) {
        (*param_8)(param_5,param_5,param_4);
        uVar2 = (ulong)uVar10;
        bVar4 = local_50[uVar2];
        param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
        *(byte *)(param_5 + uVar2) = bVar4;
        uVar2 = (ulong)(uVar10 + 1);
        lVar7 = param_3 - 1;
        if (lVar7 != 0) {
          bVar4 = local_50[uVar2];
          param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
          uVar5 = (ulong)(uVar10 + 2);
          *(byte *)(param_5 + uVar2) = bVar4;
          if (lVar7 != 1) {
            bVar4 = local_50[uVar5];
            param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
            uVar2 = (ulong)(uVar10 + 3);
            *(byte *)(param_5 + uVar5) = bVar4;
            if (param_3 != 3) {
              bVar4 = local_50[uVar2];
              param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
              uVar5 = (ulong)(uVar10 + 4);
              *(byte *)(param_5 + uVar2) = bVar4;
              if (param_3 != 4) {
                bVar4 = local_50[uVar5];
                param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
                uVar2 = (ulong)(uVar10 + 5);
                *(byte *)(param_5 + uVar5) = bVar4;
                if (param_3 != 5) {
                  bVar4 = local_50[uVar2];
                  param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
                  uVar5 = (ulong)(uVar10 + 6);
                  *(byte *)(param_5 + uVar2) = bVar4;
                  if (param_3 != 6) {
                    bVar4 = local_50[uVar5];
                    param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
                    uVar2 = (ulong)(uVar10 + 7);
                    *(byte *)(param_5 + uVar5) = bVar4;
                    if (param_3 != 7) {
                      bVar4 = local_50[uVar2];
                      param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
                      uVar5 = (ulong)(uVar10 + 8);
                      *(byte *)(param_5 + uVar2) = bVar4;
                      if (param_3 != 8) {
                        bVar4 = local_50[uVar5];
                        param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
                        uVar2 = (ulong)(uVar10 + 9);
                        *(byte *)(param_5 + uVar5) = bVar4;
                        if (param_3 != 9) {
                          bVar4 = local_50[uVar2];
                          param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
                          uVar5 = (ulong)(uVar10 + 10);
                          *(byte *)(param_5 + uVar2) = bVar4;
                          if (param_3 != 10) {
                            bVar4 = local_50[uVar5];
                            param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
                            uVar2 = (ulong)(uVar10 + 0xb);
                            *(byte *)(param_5 + uVar5) = bVar4;
                            if (param_3 != 0xb) {
                              bVar4 = local_50[uVar2];
                              param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
                              uVar5 = (ulong)(uVar10 + 0xc);
                              *(byte *)(param_5 + uVar2) = bVar4;
                              if (param_3 != 0xc) {
                                bVar4 = local_50[uVar5];
                                param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
                                uVar2 = (ulong)(uVar10 + 0xd);
                                *(byte *)(param_5 + uVar5) = bVar4;
                                if (param_3 != 0xd) {
                                  bVar4 = local_50[uVar2];
                                  uVar5 = (ulong)(uVar10 + 0xe);
                                  param_2[uVar2] = *(byte *)(param_5 + uVar2) ^ bVar4;
                                  *(byte *)(param_5 + uVar2) = bVar4;
                                  if (param_3 != 0xe) {
                                    bVar4 = local_50[uVar5];
                                    param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ bVar4;
                                    *(byte *)(param_5 + uVar5) = bVar4;
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
        uVar1 = uVar10 + 1 + (int)lVar7;
      }
    }
    else {
      pbVar9 = param_1;
      pbVar8 = param_2;
      if (bVar3) {
        do {
          uVar2 = (ulong)uVar10;
          param_1 = pbVar9 + 1;
          param_2 = pbVar8 + 1;
          param_3 = param_3 - 1;
          bVar4 = *(byte *)(uVar2 + param_5) ^ *pbVar9;
          uVar10 = uVar10 + 1 & 0xf;
          *(byte *)(uVar2 + param_5) = bVar4;
          *pbVar8 = bVar4;
          if (uVar10 == 0) break;
          pbVar9 = param_1;
          pbVar8 = param_2;
        } while (param_3 != 0);
      }
      local_50 = param_1;
      if (0xf < param_3) {
        lVar7 = (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10;
        local_50 = param_1 + lVar7;
        pbVar9 = param_2;
        do {
          (*param_8)(param_5,param_5,param_4);
          if (uVar10 < 0x10) {
            uVar6 = (ulong)uVar10;
            uVar2 = (ulong)(uVar10 + 8);
            uVar5 = *(ulong *)(param_1 + uVar6) ^ *(ulong *)(param_5 + uVar6);
            *(ulong *)(param_5 + uVar6) = uVar5;
            *(ulong *)(pbVar9 + uVar6) = uVar5;
            if (uVar10 + 8 < 0x10) {
              uVar5 = *(ulong *)(param_1 + uVar2) ^ *(ulong *)(param_5 + uVar2);
              *(ulong *)(param_5 + uVar2) = uVar5;
              *(ulong *)(pbVar9 + uVar2) = uVar5;
            }
          }
          param_1 = param_1 + 0x10;
          pbVar9 = pbVar9 + 0x10;
          uVar10 = 0;
        } while (param_1 != local_50);
        param_3 = (ulong)((uint)param_3 & 0xf);
        param_2 = param_2 + lVar7;
      }
      uVar1 = uVar10;
      if (param_3 != 0) {
        (*param_8)(param_5,param_5,param_4);
        uVar2 = (ulong)uVar10;
        uVar5 = (ulong)(uVar10 + 1);
        bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
        *(byte *)(param_5 + uVar2) = bVar4;
        param_2[uVar2] = bVar4;
        lVar7 = param_3 - 1;
        if (lVar7 != 0) {
          bVar4 = local_50[uVar5] ^ *(byte *)(param_5 + uVar5);
          *(byte *)(param_5 + uVar5) = bVar4;
          param_2[uVar5] = bVar4;
          uVar2 = (ulong)(uVar10 + 2);
          if (lVar7 != 1) {
            bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
            *(byte *)(param_5 + uVar2) = bVar4;
            param_2[uVar2] = bVar4;
            uVar2 = (ulong)(uVar10 + 3);
            if (param_3 != 3) {
              bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
              *(byte *)(param_5 + uVar2) = bVar4;
              param_2[uVar2] = bVar4;
              uVar2 = (ulong)(uVar10 + 4);
              if (param_3 != 4) {
                bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                *(byte *)(param_5 + uVar2) = bVar4;
                param_2[uVar2] = bVar4;
                uVar2 = (ulong)(uVar10 + 5);
                if (param_3 != 5) {
                  bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                  *(byte *)(param_5 + uVar2) = bVar4;
                  param_2[uVar2] = bVar4;
                  uVar2 = (ulong)(uVar10 + 6);
                  if (param_3 != 6) {
                    bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                    *(byte *)(param_5 + uVar2) = bVar4;
                    param_2[uVar2] = bVar4;
                    uVar2 = (ulong)(uVar10 + 7);
                    if (param_3 != 7) {
                      bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                      *(byte *)(param_5 + uVar2) = bVar4;
                      param_2[uVar2] = bVar4;
                      uVar2 = (ulong)(uVar10 + 8);
                      if (param_3 != 8) {
                        bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                        *(byte *)(param_5 + uVar2) = bVar4;
                        param_2[uVar2] = bVar4;
                        uVar2 = (ulong)(uVar10 + 9);
                        if (param_3 != 9) {
                          bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                          *(byte *)(param_5 + uVar2) = bVar4;
                          param_2[uVar2] = bVar4;
                          uVar2 = (ulong)(uVar10 + 10);
                          if (param_3 != 10) {
                            bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                            *(byte *)(param_5 + uVar2) = bVar4;
                            param_2[uVar2] = bVar4;
                            uVar2 = (ulong)(uVar10 + 0xb);
                            if (param_3 != 0xb) {
                              bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                              *(byte *)(param_5 + uVar2) = bVar4;
                              param_2[uVar2] = bVar4;
                              uVar2 = (ulong)(uVar10 + 0xc);
                              if (param_3 != 0xc) {
                                bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                                *(byte *)(param_5 + uVar2) = bVar4;
                                param_2[uVar2] = bVar4;
                                uVar2 = (ulong)(uVar10 + 0xd);
                                if (param_3 != 0xd) {
                                  uVar5 = (ulong)(uVar10 + 0xe);
                                  bVar4 = local_50[uVar2] ^ *(byte *)(param_5 + uVar2);
                                  *(byte *)(param_5 + uVar2) = bVar4;
                                  param_2[uVar2] = bVar4;
                                  if (param_3 != 0xe) {
                                    bVar4 = local_50[uVar5] ^ *(byte *)(param_5 + uVar5);
                                    *(byte *)(param_5 + uVar5) = bVar4;
                                    param_2[uVar5] = bVar4;
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
        uVar1 = uVar10 + 1 + (int)lVar7;
      }
    }
  }
  *param_6 = uVar1;
  return;
}



void CRYPTO_cfb128_1_encrypt
               (long param_1,long param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               undefined8 param_6,int param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_3 == 0) {
    return;
  }
  if (param_7 == 0) {
    uVar11 = 0;
    do {
      uVar3 = param_5[1];
      bVar5 = (byte)uVar11;
      bVar2 = *(byte *)(param_1 + (uVar11 >> 3));
      bVar8 = ~bVar5 & 7;
      uVar4 = *param_5;
      (*param_8)(param_5,param_5,param_4);
      uVar6 = *param_5;
      uVar10 = ((int)(uint)bVar2 >> bVar8) << 7;
      bVar7 = (byte)(uVar4 >> 8);
      *(byte *)param_5 = (char)uVar4 * '\x02' | (byte)((int)(uint)bVar7 >> 7);
      bVar2 = (byte)(uVar4 >> 0x10);
      *(byte *)((long)param_5 + 1) = bVar2 >> 7 | bVar7 * '\x02';
      *(byte *)((long)param_5 + 2) = bVar2 * '\x02' | (byte)(uVar4 >> 0x1f) & 1;
      *(byte *)((long)param_5 + 3) = (byte)(uVar4 >> 0x27) & 1 | (char)(uVar4 >> 0x18) * '\x02';
      *(byte *)((long)param_5 + 4) = (byte)(uVar4 >> 0x2f) & 1 | (char)(uVar4 >> 0x20) * '\x02';
      bVar2 = (byte)(uVar4 >> 0x38);
      *(byte *)((long)param_5 + 5) = (byte)(uVar4 >> 0x37) & 1 | (char)(uVar4 >> 0x28) * '\x02';
      *(byte *)((long)param_5 + 6) = bVar2 >> 7 | (char)(uVar4 >> 0x30) * '\x02';
      *(byte *)((long)param_5 + 7) = (byte)((uVar3 & 0xffffffff) >> 7) & 1 | bVar2 * '\x02';
      bVar7 = (byte)(uVar3 >> 8);
      *(byte *)(param_5 + 1) = (char)uVar3 * '\x02' | (byte)((int)(uint)bVar7 >> 7);
      bVar2 = (byte)(uVar3 >> 0x10);
      *(byte *)((long)param_5 + 9) = bVar2 >> 7 | bVar7 * '\x02';
      *(byte *)((long)param_5 + 10) = bVar2 * '\x02' | (byte)(uVar3 >> 0x1f) & 1;
      *(byte *)((long)param_5 + 0xb) = (byte)(uVar3 >> 0x27) & 1 | (char)(uVar3 >> 0x18) * '\x02';
      *(byte *)((long)param_5 + 0xc) = (byte)(uVar3 >> 0x2f) & 1 | (char)(uVar3 >> 0x20) * '\x02';
      bVar2 = (byte)(uVar3 >> 0x38);
      *(byte *)((long)param_5 + 0xd) = (byte)(uVar3 >> 0x37) & 1 | (char)(uVar3 >> 0x28) * '\x02';
      *(byte *)((long)param_5 + 0xe) = bVar2 >> 7 | (char)(uVar3 >> 0x30) * '\x02';
      *(byte *)((long)param_5 + 0xf) = bVar2 * '\x02' | (byte)((int)(uVar10 & 0xff) >> 7);
      pbVar1 = (byte *)(param_2 + (uVar11 >> 3));
      uVar11 = uVar11 + 1;
      *pbVar1 = ~(byte)(1 << bVar8) & *pbVar1 |
                (byte)((int)(((byte)uVar6 ^ uVar10) & 0x80) >> (bVar5 & 7));
    } while (param_3 != uVar11);
    return;
  }
  uVar11 = 0;
  do {
    uVar3 = param_5[1];
    bVar5 = (byte)uVar11;
    bVar2 = *(byte *)(param_1 + (uVar11 >> 3));
    uVar4 = *param_5;
    bVar8 = ~bVar5 & 7;
    (*param_8)(param_5,param_5,param_4);
    bVar9 = (byte)(((int)(uint)bVar2 >> bVar8) << 7) ^ (byte)*param_5;
    bVar7 = (byte)(uVar4 >> 8);
    *(byte *)param_5 = (char)uVar4 * '\x02' | (byte)((int)(uint)bVar7 >> 7);
    bVar2 = (byte)(uVar4 >> 0x10);
    *(byte *)((long)param_5 + 1) = bVar2 >> 7 | bVar7 * '\x02';
    *(byte *)((long)param_5 + 2) = bVar2 * '\x02' | (byte)(uVar4 >> 0x1f) & 1;
    *(byte *)((long)param_5 + 3) = (byte)(uVar4 >> 0x27) & 1 | (char)(uVar4 >> 0x18) * '\x02';
    *(byte *)((long)param_5 + 4) = (byte)(uVar4 >> 0x2f) & 1 | (char)(uVar4 >> 0x20) * '\x02';
    *(byte *)((long)param_5 + 5) = (char)(uVar4 >> 0x28) * '\x02' | (byte)(uVar4 >> 0x37) & 1;
    bVar2 = (byte)(uVar4 >> 0x38);
    bVar7 = (byte)(uVar3 >> 8);
    *(byte *)((long)param_5 + 6) = bVar2 >> 7 | (char)(uVar4 >> 0x30) * '\x02';
    *(byte *)((long)param_5 + 7) = (byte)((uVar3 & 0xffffffff) >> 7) & 1 | bVar2 * '\x02';
    pbVar1 = (byte *)(param_2 + (uVar11 >> 3));
    *(byte *)(param_5 + 1) = (char)uVar3 * '\x02' | (byte)((int)(uint)bVar7 >> 7);
    bVar2 = (byte)(uVar3 >> 0x10);
    *(byte *)((long)param_5 + 9) = bVar2 >> 7 | bVar7 * '\x02';
    *(byte *)((long)param_5 + 10) = bVar2 * '\x02' | (byte)(uVar3 >> 0x1f) & 1;
    *(byte *)((long)param_5 + 0xb) = (byte)(uVar3 >> 0x27) & 1 | (char)(uVar3 >> 0x18) * '\x02';
    *(byte *)((long)param_5 + 0xc) = (char)(uVar3 >> 0x20) * '\x02' | (byte)(uVar3 >> 0x2f) & 1;
    bVar2 = (byte)(uVar3 >> 0x38);
    *(byte *)((long)param_5 + 0xe) = bVar2 >> 7 | (char)(uVar3 >> 0x30) * '\x02';
    *(byte *)((long)param_5 + 0xd) = (char)(uVar3 >> 0x28) * '\x02' | (byte)(uVar3 >> 0x37) & 1;
    *(byte *)((long)param_5 + 0xf) = bVar9 >> 7 | bVar2 * '\x02';
    uVar11 = uVar11 + 1;
    *pbVar1 = ~(byte)(1 << bVar8) & *pbVar1 | (byte)((int)(bVar9 & 0x80) >> (bVar5 & 7));
  } while (param_3 != uVar11);
  return;
}



void CRYPTO_cfb128_8_encrypt
               (byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
               undefined8 param_6,int param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined7 uStack_5f;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)param_5;
    uVar5 = *(undefined8 *)(param_5 + 8);
    pbVar7 = param_1;
    if (param_7 == 0) {
      do {
        uStack_67 = (undefined7)((ulong)uVar4 >> 8);
        pbVar6 = pbVar7 + 1;
        local_60 = (undefined1)uVar5;
        uStack_5f = (undefined7)((ulong)uVar5 >> 8);
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *pbVar7;
        uVar4 = CONCAT17(local_60,uStack_67);
        *param_2 = *param_5 ^ bVar1;
        uVar5 = CONCAT17(bVar1,uStack_5f);
        *(undefined8 *)param_5 = uVar4;
        *(undefined8 *)(param_5 + 8) = uVar5;
        pbVar7 = pbVar6;
        param_2 = param_2 + 1;
      } while (param_1 + param_3 != pbVar6);
    }
    else {
      do {
        uStack_67 = (undefined7)((ulong)uVar4 >> 8);
        pbVar6 = pbVar7 + 1;
        local_60 = (undefined1)uVar5;
        uStack_5f = (undefined7)((ulong)uVar5 >> 8);
        (*param_8)(param_5,param_5,param_4);
        bVar2 = *pbVar7;
        bVar1 = *param_5;
        *param_2 = bVar2 ^ bVar1;
        uVar4 = CONCAT17(local_60,uStack_67);
        uVar5 = CONCAT17(bVar2 ^ bVar1,uStack_5f);
        *(undefined8 *)param_5 = uVar4;
        *(undefined8 *)(param_5 + 8) = uVar5;
        pbVar7 = pbVar6;
        param_2 = param_2 + 1;
      } while (pbVar6 != param_1 + param_3);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


