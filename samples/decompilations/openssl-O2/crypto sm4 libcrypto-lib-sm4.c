
undefined8 ossl_sm4_set_key(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar8 = param_1[2];
  uVar3 = param_1[3];
  uVar7 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ^
          0xa3b1bac6;
  uVar1 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
          0x56aa3350;
  uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) ^
          0x677d9197;
  uVar4 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
          0xb27022dc;
  puVar5 = &CK_0;
  do {
    uVar3 = uVar4 ^ uVar8 ^ uVar1 ^ *puVar5;
    uVar9 = (uint)(byte)SM4_S[uVar3 >> 0x10 & 0xff] << 0x10 |
            (uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar3 & 0xff];
    uVar3 = uVar9 | (uint)(byte)SM4_S[uVar3 >> 8 & 0xff] << 8;
    uVar7 = uVar7 ^ uVar3 ^ (uVar3 << 0xd | uVar9 >> 0x13) ^ (uVar3 >> 9 | uVar3 << 0x17);
    uVar9 = uVar4 ^ uVar8 ^ puVar5[1] ^ uVar7;
    uVar3 = (uint)(byte)SM4_S[uVar9 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar9 & 0xff] |
            (uint)(byte)SM4_S[uVar9 >> 0x10 & 0xff] << 0x10;
    uVar9 = uVar3 | (uint)(byte)SM4_S[uVar9 >> 8 & 0xff] << 8;
    uVar1 = uVar1 ^ uVar9 ^ (uVar9 << 0xd | uVar3 >> 0x13) ^ (uVar9 >> 9 | uVar9 << 0x17);
    puVar6 = puVar5 + 4;
    uVar3 = puVar5[2] ^ uVar4 ^ uVar7 ^ uVar1;
    uVar9 = (uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar3 & 0xff] |
            (uint)(byte)SM4_S[uVar3 >> 0x10 & 0xff] << 0x10;
    uVar2 = uVar9 | (uint)(byte)SM4_S[uVar3 >> 8 & 0xff] << 8;
    uVar3 = puVar5[3];
    *param_2 = uVar7;
    uVar8 = uVar8 ^ uVar2 ^ (uVar2 << 0xd | uVar9 >> 0x13) ^ (uVar2 >> 9 | uVar2 << 0x17);
    param_2[1] = uVar1;
    param_2[2] = uVar8;
    uVar9 = uVar3 ^ uVar7 ^ uVar1 ^ uVar8;
    uVar3 = (uint)(byte)SM4_S[uVar9 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar9 & 0xff] |
            (uint)(byte)SM4_S[uVar9 >> 0x10 & 0xff] << 0x10;
    uVar9 = uVar3 | (uint)(byte)SM4_S[uVar9 >> 8 & 0xff] << 8;
    uVar4 = uVar4 ^ uVar9 ^ (uVar9 << 0xd | uVar3 >> 0x13) ^ (uVar9 >> 9 | uVar9 << 0x17);
    param_2[3] = uVar4;
    puVar5 = puVar6;
    param_2 = param_2 + 4;
  } while (puVar6 != (uint *)SM4_SBOX_T3);
  return 1;
}



void ossl_sm4_encrypt(uint *param_1,ulong *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = param_1[2];
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = *param_1;
  uVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar4 = uVar6 ^ uVar7 ^ *param_3 ^ uVar5;
  uVar1 = (uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar4 & 0xff] |
          (uint)(byte)SM4_S[uVar4 >> 0x10 & 0xff] << 0x10;
  uVar2 = uVar1 | (uint)(byte)SM4_S[uVar4 >> 8 & 0xff] << 8;
  uVar4 = (uVar2 << 2 | ((uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^ uVar2
          ^ (uVar2 << 10 | uVar1 >> 0x16) ^ (uVar2 >> 0xe | uVar2 << 0x12) ^
          (uVar2 >> 8 | (uint)(byte)SM4_S[uVar4 & 0xff] << 0x18);
  uVar2 = uVar6 ^ uVar5 ^ param_3[1] ^ uVar4;
  uVar3 = (uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar2 & 0xff] |
          (uint)(byte)SM4_S[uVar2 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar2 >> 8 & 0xff] << 8;
  uVar7 = (uVar1 << 2 | ((uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18) >> 0x1e) ^ uVar7 ^ uVar1 ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12) ^
          (uVar1 >> 8 | (uint)(byte)SM4_S[uVar2 & 0xff] << 0x18);
  uVar2 = param_3[2] ^ uVar5 ^ uVar4 ^ uVar7;
  uVar3 = (uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar2 & 0xff] |
          (uint)(byte)SM4_S[uVar2 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar2 >> 8 & 0xff] << 8;
  uVar6 = (uVar1 << 2 | ((uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18) >> 0x1e) ^ uVar6 ^ uVar1 ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12) ^
          (uVar1 >> 8 | (uint)(byte)SM4_S[uVar2 & 0xff] << 0x18);
  uVar2 = uVar4 ^ uVar7 ^ param_3[3] ^ uVar6;
  uVar3 = (uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar2 & 0xff] |
          (uint)(byte)SM4_S[uVar2 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar2 >> 8 & 0xff] << 8;
  uVar3 = (uVar1 << 2 | ((uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18) >> 0x1e) ^ uVar5 ^ uVar1 ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12) ^
          (uVar1 >> 8 | (uint)(byte)SM4_S[uVar2 & 0xff] << 0x18);
  uVar1 = param_3[4] ^ uVar7 ^ uVar6 ^ uVar3;
  uVar8 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[5] ^ uVar6 ^ uVar3 ^ uVar8;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar7 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[6] ^ uVar3 ^ uVar8 ^ uVar5;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = uVar8 ^ uVar5 ^ param_3[7] ^ uVar2;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar3 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar3 = param_3[8] ^ uVar5 ^ uVar2 ^ uVar4;
  uVar1 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar8 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[9] ^ uVar2 ^ uVar4 ^ uVar1;
  uVar6 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar2 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar2 = uVar1 ^ uVar6 ^ param_3[0xb] ^ uVar3;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar2 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar2 >> 8 & 0xff) * 4);
  uVar4 = param_3[0xc] ^ uVar6 ^ uVar3 ^ uVar2;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar4 & 0xff) * 4) ^ uVar1 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar4 >> 8 & 0xff) * 4);
  uVar1 = param_3[0xd] ^ uVar3 ^ uVar2 ^ uVar5;
  uVar1 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar4 = param_3[0xe] ^ uVar2 ^ uVar5 ^ uVar1;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar4 & 0xff) * 4) ^ uVar3 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar4 >> 8 & 0xff) * 4);
  uVar3 = uVar5 ^ uVar1 ^ param_3[0xf] ^ uVar4;
  uVar3 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar2 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar2 = param_3[0x10] ^ uVar1 ^ uVar4 ^ uVar3;
  uVar6 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar2 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar2 >> 8 & 0xff) * 4);
  uVar2 = param_3[0x11] ^ uVar4 ^ uVar3 ^ uVar6;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar2 & 0xff) * 4) ^ uVar1 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar2 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x12] ^ uVar3 ^ uVar6 ^ uVar5;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = uVar6 ^ uVar5 ^ param_3[0x13] ^ uVar2;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar3 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x14] ^ uVar5 ^ uVar2 ^ uVar4;
  uVar1 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x15] ^ uVar2 ^ uVar4 ^ uVar1;
  uVar6 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar1 ^ uVar6;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar2 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x17] ^ uVar1 ^ uVar6 ^ uVar5;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x18] ^ uVar6 ^ uVar5 ^ uVar4;
  uVar3 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar1 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x19] ^ uVar5 ^ uVar4 ^ uVar3;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x1a] ^ uVar4 ^ uVar3 ^ uVar2;
  uVar7 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = uVar3 ^ uVar2 ^ param_3[0x1b] ^ uVar7;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x1c] ^ uVar2 ^ uVar7 ^ uVar5;
  uVar4 = (uint)(byte)SM4_S[uVar1 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar1 & 0xff] |
          (uint)(byte)SM4_S[uVar1 >> 0x10 & 0xff] << 0x10;
  uVar6 = uVar4 | (uint)(byte)SM4_S[uVar1 >> 8 & 0xff] << 8;
  uVar6 = (uVar6 >> 8 | (uint)(byte)SM4_S[uVar1 & 0xff] << 0x18) ^
          uVar3 ^ uVar6 ^ (uVar6 << 2 | ((uint)(byte)SM4_S[uVar1 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar6 << 10 | uVar4 >> 0x16) ^ (uVar6 >> 0xe | uVar6 << 0x12);
  uVar4 = param_3[0x1d] ^ uVar7 ^ uVar5 ^ uVar6;
  uVar3 = (uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar4 & 0xff] |
          (uint)(byte)SM4_S[uVar4 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar4 >> 8 & 0xff] << 8;
  uVar1 = (uVar1 >> 8 | (uint)(byte)SM4_S[uVar4 & 0xff] << 0x18) ^
          uVar2 ^ uVar1 ^ (uVar1 << 2 | ((uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12);
  uVar3 = param_3[0x1e] ^ uVar5 ^ uVar6 ^ uVar1;
  uVar2 = (uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar3 & 0xff] |
          (uint)(byte)SM4_S[uVar3 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar2 | (uint)(byte)SM4_S[uVar3 >> 8 & 0xff] << 8;
  uVar7 = (uVar4 >> 8 | (uint)(byte)SM4_S[uVar3 & 0xff] << 0x18) ^
          uVar7 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar2 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12);
  uVar3 = uVar6 ^ uVar1 ^ param_3[0x1f] ^ uVar7;
  uVar2 = (uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar3 & 0xff] |
          (uint)(byte)SM4_S[uVar3 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar2 | (uint)(byte)SM4_S[uVar3 >> 8 & 0xff] << 8;
  uVar3 = (uVar4 >> 8 | (uint)(byte)SM4_S[uVar3 & 0xff] << 0x18) ^
          uVar5 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar2 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12);
  *param_2 = (((((((ulong)(uVar7 & 0xff) << 8 | (ulong)(uVar7 >> 8 & 0xff)) << 8 |
                 (ulong)(uVar7 >> 0x10 & 0xff)) << 8 | (ulong)(uVar7 >> 0x18)) << 8 |
               (ulong)(uVar3 & 0xff)) << 8 | (ulong)(uVar3 >> 8 & 0xff)) << 8 |
             (ulong)(uVar3 >> 0x10 & 0xff)) << 8 | (ulong)(uVar3 >> 0x18);
  param_2[1] = (((((((ulong)(uVar6 & 0xff) << 8 | (ulong)(uVar6 >> 8 & 0xff)) << 8 |
                   (ulong)(uVar6 >> 0x10 & 0xff)) << 8 | (ulong)(uVar6 >> 0x18)) << 8 |
                 (ulong)(uVar1 & 0xff)) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 8 |
               (ulong)(uVar1 >> 0x10 & 0xff)) << 8 | (ulong)(uVar1 >> 0x18);
  return;
}



void ossl_sm4_decrypt(uint *param_1,ulong *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = param_1[2];
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = *param_1;
  uVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar4 = uVar6 ^ uVar7 ^ param_3[0x1f] ^ uVar5;
  uVar1 = (uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar4 & 0xff] |
          (uint)(byte)SM4_S[uVar4 >> 0x10 & 0xff] << 0x10;
  uVar2 = uVar1 | (uint)(byte)SM4_S[uVar4 >> 8 & 0xff] << 8;
  uVar4 = (uVar2 << 2 | ((uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^ uVar2
          ^ (uVar2 << 10 | uVar1 >> 0x16) ^ (uVar2 >> 0xe | uVar2 << 0x12) ^
          (uVar2 >> 8 | (uint)(byte)SM4_S[uVar4 & 0xff] << 0x18);
  uVar2 = uVar6 ^ uVar5 ^ param_3[0x1e] ^ uVar4;
  uVar3 = (uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar2 & 0xff] |
          (uint)(byte)SM4_S[uVar2 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar2 >> 8 & 0xff] << 8;
  uVar7 = (uVar1 << 2 | ((uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18) >> 0x1e) ^ uVar7 ^ uVar1 ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12) ^
          (uVar1 >> 8 | (uint)(byte)SM4_S[uVar2 & 0xff] << 0x18);
  uVar2 = param_3[0x1d] ^ uVar5 ^ uVar4 ^ uVar7;
  uVar3 = (uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar2 & 0xff] |
          (uint)(byte)SM4_S[uVar2 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar2 >> 8 & 0xff] << 8;
  uVar6 = (uVar1 << 2 | ((uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18) >> 0x1e) ^ uVar6 ^ uVar1 ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12) ^
          (uVar1 >> 8 | (uint)(byte)SM4_S[uVar2 & 0xff] << 0x18);
  uVar2 = uVar4 ^ uVar7 ^ param_3[0x1c] ^ uVar6;
  uVar3 = (uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar2 & 0xff] |
          (uint)(byte)SM4_S[uVar2 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar2 >> 8 & 0xff] << 8;
  uVar3 = (uVar1 << 2 | ((uint)(byte)SM4_S[uVar2 >> 0x18] << 0x18) >> 0x1e) ^ uVar5 ^ uVar1 ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12) ^
          (uVar1 >> 8 | (uint)(byte)SM4_S[uVar2 & 0xff] << 0x18);
  uVar1 = param_3[0x1b] ^ uVar7 ^ uVar6 ^ uVar3;
  uVar8 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x1a] ^ uVar6 ^ uVar3 ^ uVar8;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar7 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x19] ^ uVar3 ^ uVar8 ^ uVar5;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = uVar8 ^ uVar5 ^ param_3[0x18] ^ uVar2;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar3 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x17] ^ uVar5 ^ uVar2 ^ uVar4;
  uVar1 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar8 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x16] ^ uVar2 ^ uVar4 ^ uVar1;
  uVar6 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar2 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar2 = uVar1 ^ uVar6 ^ param_3[0x14] ^ uVar3;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar2 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar2 >> 8 & 0xff) * 4);
  uVar4 = param_3[0x13] ^ uVar6 ^ uVar3 ^ uVar2;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar4 & 0xff) * 4) ^ uVar1 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar4 >> 8 & 0xff) * 4);
  uVar1 = param_3[0x12] ^ uVar3 ^ uVar2 ^ uVar5;
  uVar1 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar4 = param_3[0x11] ^ uVar2 ^ uVar5 ^ uVar1;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar4 & 0xff) * 4) ^ uVar3 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar4 >> 8 & 0xff) * 4);
  uVar3 = uVar5 ^ uVar1 ^ param_3[0x10] ^ uVar4;
  uVar3 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar2 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar2 = param_3[0xf] ^ uVar1 ^ uVar4 ^ uVar3;
  uVar6 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar2 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar2 >> 8 & 0xff) * 4);
  uVar2 = param_3[0xe] ^ uVar4 ^ uVar3 ^ uVar6;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar2 & 0xff) * 4) ^ uVar1 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar2 >> 8 & 0xff) * 4);
  uVar1 = param_3[0xd] ^ uVar3 ^ uVar6 ^ uVar5;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = uVar6 ^ uVar5 ^ param_3[0xc] ^ uVar2;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar3 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar3 = param_3[0xb] ^ uVar5 ^ uVar2 ^ uVar4;
  uVar1 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[10] ^ uVar2 ^ uVar4 ^ uVar1;
  uVar6 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar1 ^ uVar6;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar2 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[8] ^ uVar1 ^ uVar6 ^ uVar5;
  uVar4 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar3 = param_3[7] ^ uVar6 ^ uVar5 ^ uVar4;
  uVar3 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar3 & 0xff) * 4) ^ uVar1 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar3 >> 8 & 0xff) * 4);
  uVar1 = param_3[6] ^ uVar5 ^ uVar4 ^ uVar3;
  uVar2 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar6 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[5] ^ uVar4 ^ uVar3 ^ uVar2;
  uVar7 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar5 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = uVar3 ^ uVar2 ^ param_3[4] ^ uVar7;
  uVar5 = *(uint *)(SM4_SBOX_T0 + (ulong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(SM4_SBOX_T3 + (ulong)(uVar1 & 0xff) * 4) ^ uVar4 ^
          *(uint *)(SM4_SBOX_T1 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(SM4_SBOX_T2 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar1 = param_3[3] ^ uVar2 ^ uVar7 ^ uVar5;
  uVar4 = (uint)(byte)SM4_S[uVar1 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar1 & 0xff] |
          (uint)(byte)SM4_S[uVar1 >> 0x10 & 0xff] << 0x10;
  uVar6 = uVar4 | (uint)(byte)SM4_S[uVar1 >> 8 & 0xff] << 8;
  uVar6 = (uVar6 >> 8 | (uint)(byte)SM4_S[uVar1 & 0xff] << 0x18) ^
          uVar3 ^ uVar6 ^ (uVar6 << 2 | ((uint)(byte)SM4_S[uVar1 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar6 << 10 | uVar4 >> 0x16) ^ (uVar6 >> 0xe | uVar6 << 0x12);
  uVar4 = param_3[2] ^ uVar7 ^ uVar5 ^ uVar6;
  uVar3 = (uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar4 & 0xff] |
          (uint)(byte)SM4_S[uVar4 >> 0x10 & 0xff] << 0x10;
  uVar1 = uVar3 | (uint)(byte)SM4_S[uVar4 >> 8 & 0xff] << 8;
  uVar1 = (uVar1 >> 8 | (uint)(byte)SM4_S[uVar4 & 0xff] << 0x18) ^
          uVar2 ^ uVar1 ^ (uVar1 << 2 | ((uint)(byte)SM4_S[uVar4 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar1 << 10 | uVar3 >> 0x16) ^ (uVar1 >> 0xe | uVar1 << 0x12);
  uVar3 = param_3[1] ^ uVar5 ^ uVar6 ^ uVar1;
  uVar2 = (uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar3 & 0xff] |
          (uint)(byte)SM4_S[uVar3 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar2 | (uint)(byte)SM4_S[uVar3 >> 8 & 0xff] << 8;
  uVar7 = (uVar4 >> 8 | (uint)(byte)SM4_S[uVar3 & 0xff] << 0x18) ^
          uVar7 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar2 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12);
  uVar3 = uVar6 ^ uVar1 ^ *param_3 ^ uVar7;
  uVar2 = (uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18 | (uint)(byte)SM4_S[uVar3 & 0xff] |
          (uint)(byte)SM4_S[uVar3 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar2 | (uint)(byte)SM4_S[uVar3 >> 8 & 0xff] << 8;
  uVar3 = (uVar4 >> 8 | (uint)(byte)SM4_S[uVar3 & 0xff] << 0x18) ^
          uVar5 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)SM4_S[uVar3 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar2 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12);
  *param_2 = (((((((ulong)(uVar7 & 0xff) << 8 | (ulong)(uVar7 >> 8 & 0xff)) << 8 |
                 (ulong)(uVar7 >> 0x10 & 0xff)) << 8 | (ulong)(uVar7 >> 0x18)) << 8 |
               (ulong)(uVar3 & 0xff)) << 8 | (ulong)(uVar3 >> 8 & 0xff)) << 8 |
             (ulong)(uVar3 >> 0x10 & 0xff)) << 8 | (ulong)(uVar3 >> 0x18);
  param_2[1] = (((((((ulong)(uVar6 & 0xff) << 8 | (ulong)(uVar6 >> 8 & 0xff)) << 8 |
                   (ulong)(uVar6 >> 0x10 & 0xff)) << 8 | (ulong)(uVar6 >> 0x18)) << 8 |
                 (ulong)(uVar1 & 0xff)) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 8 |
               (ulong)(uVar1 >> 0x10 & 0xff)) << 8 | (ulong)(uVar1 >> 0x18);
  return;
}


