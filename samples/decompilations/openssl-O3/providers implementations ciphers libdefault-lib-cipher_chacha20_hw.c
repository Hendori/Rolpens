
undefined8 chacha20_initkey(long param_1,byte *param_2)

{
  if (param_2 != (byte *)0x0) {
    *(uint *)(param_1 + 0xc0) =
         (uint)param_2[2] << 0x10 | (uint)param_2[1] << 8 | (uint)*param_2 |
         (uint)param_2[3] << 0x18;
    *(uint *)(param_1 + 0xc4) =
         (uint)param_2[5] << 8 | (uint)param_2[6] << 0x10 | (uint)param_2[4] |
         (uint)param_2[7] << 0x18;
    *(uint *)(param_1 + 200) =
         (uint)param_2[9] << 8 | (uint)param_2[10] << 0x10 | (uint)param_2[8] |
         (uint)param_2[0xb] << 0x18;
    *(uint *)(param_1 + 0xcc) =
         (uint)param_2[0xd] << 8 | (uint)param_2[0xe] << 0x10 | (uint)param_2[0xc] |
         (uint)param_2[0xf] << 0x18;
    *(uint *)(param_1 + 0xd0) =
         (uint)param_2[0x11] << 8 | (uint)param_2[0x12] << 0x10 | (uint)param_2[0x10] |
         (uint)param_2[0x13] << 0x18;
    *(uint *)(param_1 + 0xd4) =
         (uint)param_2[0x15] << 8 | (uint)param_2[0x16] << 0x10 | (uint)param_2[0x14] |
         (uint)param_2[0x17] << 0x18;
    *(uint *)(param_1 + 0xd8) =
         (uint)param_2[0x19] << 8 | (uint)param_2[0x1a] << 0x10 | (uint)param_2[0x18] |
         (uint)param_2[0x1b] << 0x18;
    *(uint *)(param_1 + 0xdc) =
         (uint)param_2[0x1f] << 0x18 |
         (uint)param_2[0x1d] << 8 | (uint)param_2[0x1e] << 0x10 | (uint)param_2[0x1c];
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return 1;
}



undefined8 chacha20_initiv(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0x6c) & 4) != 0) {
    param_1[0x1c] = *param_1;
    param_1[0x1d] = param_1[1];
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  return 1;
}



undefined8 chacha20_cipher(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  if (uVar1 == 0) {
    uVar5 = (ulong)*(uint *)(param_1 + 0xe0);
  }
  else {
    if (param_4 != 0) {
      do {
        if (0x3f < uVar1) break;
        uVar6 = (ulong)uVar1;
        uVar5 = *param_3;
        puVar9 = (ulong *)((long)param_2 + 1);
        param_3 = (ulong *)((long)param_3 + 1);
        uVar1 = uVar1 + 1;
        *(byte *)param_2 = (byte)uVar5 ^ *(byte *)(param_1 + 0xf0 + uVar6);
        param_4 = param_4 - 1;
        param_2 = puVar9;
      } while (param_4 != 0);
    }
    *(uint *)(param_1 + 0x130) = uVar1;
    if (param_4 == 0) {
      return 1;
    }
    uVar5 = (ulong)*(uint *)(param_1 + 0xe0);
    if (uVar1 == 0x40) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      uVar1 = *(uint *)(param_1 + 0xe0) + 1;
      uVar5 = (ulong)uVar1;
      *(uint *)(param_1 + 0xe0) = uVar1;
      if (uVar1 == 0) {
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      }
    }
  }
  uVar1 = (uint)param_4 & 0x3f;
  uVar6 = param_4 - uVar1;
  if (0x3f < uVar6) {
    do {
      iVar7 = (int)uVar5;
      if (0x40000003f < uVar6) goto LAB_0010026e;
      while( true ) {
        uVar2 = uVar6 >> 6;
        uVar5 = (ulong)(uint)((int)uVar2 + (int)uVar5);
        if (uVar2 <= uVar5) break;
        while( true ) {
          lVar3 = uVar2 - uVar5;
          ChaCha20_ctr32(param_2,param_3,lVar3 * 0x40,param_1 + 0xc0,param_1 + 0xe0);
          uVar6 = uVar6 + lVar3 * -0x40;
          param_3 = param_3 + lVar3 * 8;
          param_2 = param_2 + lVar3 * 8;
          *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
          *(undefined4 *)(param_1 + 0xe0) = 0;
          if (uVar6 < 0x40) goto LAB_001002c3;
          uVar5 = 0;
          iVar7 = 0;
          if (uVar6 < 0x400000040) break;
LAB_0010026e:
          uVar2 = 0x10000000;
          uVar5 = (ulong)(iVar7 + 0x10000000);
          if (0xfffffff < uVar5) goto LAB_00100282;
        }
      }
LAB_00100282:
      ChaCha20_ctr32(param_2,param_3,uVar2 * 0x40,param_1 + 0xc0,param_1 + 0xe0);
      uVar6 = uVar6 + uVar2 * -0x40;
      param_3 = param_3 + uVar2 * 8;
      param_2 = param_2 + uVar2 * 8;
      *(int *)(param_1 + 0xe0) = (int)uVar5;
    } while (0x3f < uVar6);
  }
LAB_001002c3:
  if ((param_4 & 0x3f) == 0) {
    return 1;
  }
  *(undefined1 (*) [16])(param_1 + 0xf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x100) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x120) = (undefined1  [16])0x0;
  ChaCha20_ctr32(param_1 + 0xf0,param_1 + 0xf0,0x40,param_1 + 0xc0,param_1 + 0xe0);
  if (((uVar1 - 1 < 7) || ((ulong)((long)param_2 - (long)((long)param_3 + 1)) < 0xf)) ||
     ((ulong)((long)param_2 - (param_1 + 0xf1)) < 0xf)) {
    uVar5 = 0;
    do {
      *(byte *)((long)param_2 + uVar5) =
           *(byte *)(param_1 + 0xf0 + uVar5) ^ *(byte *)((long)param_3 + uVar5);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
    *(uint *)(param_1 + 0x130) = uVar1;
    return 1;
  }
  if (uVar1 - 1 < 0xf) {
    uVar4 = 0;
    uVar8 = uVar1;
LAB_00100459:
    uVar5 = (ulong)uVar4;
    *(ulong *)((long)param_2 + uVar5) =
         *(ulong *)((long)param_3 + uVar5) ^ *(ulong *)(param_1 + 0xf0 + uVar5);
    uVar4 = uVar4 + (uVar8 & 0xfffffff8);
    if ((uVar8 & 7) == 0) goto LAB_00100538;
  }
  else {
    uVar5 = param_3[1];
    uVar6 = *(ulong *)(param_1 + 0xf8);
    *param_2 = *param_3 ^ *(ulong *)(param_1 + 0xf0);
    param_2[1] = uVar5 ^ uVar6;
    if (uVar1 >> 4 != 1) {
      uVar5 = *(ulong *)(param_1 + 0x108);
      uVar6 = param_3[3];
      param_2[2] = param_3[2] ^ *(ulong *)(param_1 + 0x100);
      param_2[3] = uVar6 ^ uVar5;
      if (uVar1 >> 4 == 3) {
        uVar5 = *(ulong *)(param_1 + 0x118);
        uVar6 = param_3[5];
        param_2[4] = param_3[4] ^ *(ulong *)(param_1 + 0x110);
        param_2[5] = uVar6 ^ uVar5;
      }
    }
    uVar4 = (uint)param_4 & 0x30;
    if (uVar4 == uVar1) goto LAB_00100538;
    uVar8 = uVar1 - uVar4;
    if (6 < (uVar1 - uVar4) - 1) goto LAB_00100459;
  }
  uVar5 = (ulong)uVar4;
  *(byte *)((long)param_2 + uVar5) =
       *(byte *)((long)param_3 + uVar5) ^ *(byte *)(param_1 + 0xf0 + uVar5);
  uVar5 = (ulong)(uVar4 + 1);
  if (uVar4 + 1 < uVar1) {
    *(byte *)((long)param_2 + uVar5) =
         *(byte *)((long)param_3 + uVar5) ^ *(byte *)(param_1 + 0xf0 + uVar5);
    uVar5 = (ulong)(uVar4 + 2);
    if (uVar4 + 2 < uVar1) {
      *(byte *)((long)param_2 + uVar5) =
           *(byte *)((long)param_3 + uVar5) ^ *(byte *)(param_1 + 0xf0 + uVar5);
      uVar5 = (ulong)(uVar4 + 3);
      if (uVar4 + 3 < uVar1) {
        *(byte *)((long)param_2 + uVar5) =
             *(byte *)((long)param_3 + uVar5) ^ *(byte *)(param_1 + 0xf0 + uVar5);
        uVar5 = (ulong)(uVar4 + 4);
        if (uVar4 + 4 < uVar1) {
          *(byte *)((long)param_2 + uVar5) =
               *(byte *)((long)param_3 + uVar5) ^ *(byte *)(param_1 + 0xf0 + uVar5);
          uVar5 = (ulong)(uVar4 + 5);
          if (uVar4 + 5 < uVar1) {
            uVar6 = (ulong)(uVar4 + 6);
            *(byte *)((long)param_2 + uVar5) =
                 *(byte *)((long)param_3 + uVar5) ^ *(byte *)(param_1 + 0xf0 + uVar5);
            if (uVar4 + 6 < uVar1) {
              *(byte *)((long)param_2 + uVar6) =
                   *(byte *)((long)param_3 + uVar6) ^ *(byte *)(param_1 + 0xf0 + uVar6);
            }
          }
        }
      }
    }
  }
LAB_00100538:
  *(uint *)(param_1 + 0x130) = uVar1;
  return 1;
}



undefined1 * ossl_prov_cipher_hw_chacha20(void)

{
  return chacha20_hw;
}


