
void fcrypt_body(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 0x19;
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar1 = uVar3 >> 0x10 ^ uVar3;
    uVar5 = param_3 & uVar1;
    uVar1 = uVar1 & param_4;
    uVar6 = uVar5 << 0x10 ^ *param_2 ^ uVar3 ^ uVar5;
    uVar5 = param_2[1] ^ uVar3 ^ uVar1;
    uVar1 = (uVar1 << 0x10 ^ uVar5) >> 4;
    uVar2 = *(uint *)((ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar1 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400) ^ uVar2;
    uVar1 = uVar2 >> 0x10 ^ uVar2;
    uVar5 = param_3 & uVar1;
    uVar1 = uVar1 & param_4;
    uVar5 = uVar5 << 0x10 ^ param_2[2] ^ uVar2 ^ uVar5;
    uVar6 = param_2[3] ^ uVar2 ^ uVar1;
    uVar1 = (uVar1 << 0x10 ^ uVar6) >> 4;
    uVar1 = uVar3 ^ *(uint *)((ulong)((uVar1 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^
            *(uint *)((ulong)(uVar5 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar3 = uVar1 >> 0x10 ^ uVar1;
    uVar5 = param_3 & uVar3;
    uVar3 = uVar3 & param_4;
    uVar6 = uVar5 << 0x10 ^ param_2[4] ^ uVar1 ^ uVar5;
    uVar5 = param_2[5] ^ uVar1 ^ uVar3;
    uVar3 = (uVar3 << 0x10 ^ uVar5) >> 4;
    uVar5 = *(uint *)((ulong)((uVar3 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar3 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar3 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar3 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar2 ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar5 >> 0x10 ^ uVar5;
    uVar3 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar6 = uVar3 << 0x10 ^ param_2[6] ^ uVar5 ^ uVar3;
    uVar3 = param_2[7] ^ uVar5 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar3) >> 4;
    uVar1 = *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^
            *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x101700) ^ uVar1 ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar1 >> 0x10 ^ uVar1;
    uVar3 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar6 = uVar3 << 0x10 ^ param_2[8] ^ uVar1 ^ uVar3;
    uVar3 = param_2[9] ^ uVar1 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar3) >> 4;
    uVar3 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar5 ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar3 >> 0x10 ^ uVar3;
    uVar5 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar5 = uVar5 << 0x10 ^ param_2[10] ^ uVar3 ^ uVar5;
    uVar6 = param_2[0xb] ^ uVar3 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar1 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar1 ^
            *(uint *)((ulong)(uVar5 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar1 >> 0x10 ^ uVar1;
    uVar5 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar5 = uVar5 << 0x10 ^ param_2[0xc] ^ uVar1 ^ uVar5;
    uVar6 = param_2[0xd] ^ uVar1 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar5 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar3 ^
            *(uint *)((ulong)(uVar5 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar5 >> 0x10 ^ uVar5;
    uVar3 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar3 = uVar3 << 0x10 ^ param_2[0xe] ^ uVar5 ^ uVar3;
    uVar6 = param_2[0xf] ^ uVar5 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar3 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar1 ^
            *(uint *)((ulong)(uVar3 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar3 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar3 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar3 >> 0x10 ^ uVar3;
    uVar1 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar1 = uVar1 << 0x10 ^ param_2[0x10] ^ uVar3 ^ uVar1;
    uVar6 = param_2[0x11] ^ uVar3 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar1 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar5 ^
            *(uint *)((ulong)(uVar1 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar1 >> 0x10 ^ uVar1;
    uVar5 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar5 = uVar5 << 0x10 ^ param_2[0x12] ^ uVar1 ^ uVar5;
    uVar6 = param_2[0x13] ^ uVar1 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar5 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar3 ^
            *(uint *)((ulong)(uVar5 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar5 >> 0x10 ^ uVar5;
    uVar3 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar3 = uVar3 << 0x10 ^ param_2[0x14] ^ uVar5 ^ uVar3;
    uVar6 = param_2[0x15] ^ uVar5 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar3 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar1 ^
            *(uint *)((ulong)(uVar3 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar3 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar3 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar3 >> 0x10 ^ uVar3;
    uVar1 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar1 = uVar1 << 0x10 ^ param_2[0x16] ^ uVar3 ^ uVar1;
    uVar6 = param_2[0x17] ^ uVar3 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar1 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar5 ^
            *(uint *)((ulong)(uVar1 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar1 >> 0x10 ^ uVar1;
    uVar5 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar6 = uVar5 << 0x10 ^ param_2[0x18] ^ uVar1 ^ uVar5;
    uVar5 = param_2[0x19] ^ uVar1 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar5) >> 4;
    uVar5 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar3 ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar5 >> 0x10 ^ uVar5;
    uVar3 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar6 = uVar3 << 0x10 ^ param_2[0x1a] ^ uVar5 ^ uVar3;
    uVar3 = param_2[0x1b] ^ uVar5 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar3) >> 4;
    uVar1 = *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^
            *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x101700) ^ uVar1 ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar1 >> 0x10 ^ uVar1;
    uVar3 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar6 = uVar3 << 0x10 ^ param_2[0x1c] ^ uVar1 ^ uVar3;
    uVar3 = param_2[0x1d] ^ uVar1 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar3) >> 4;
    uVar3 = *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^
            *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x101700) ^ uVar5 ^
            *(uint *)((ulong)(uVar6 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x101400);
    uVar2 = uVar3 >> 0x10 ^ uVar3;
    uVar5 = param_3 & uVar2;
    uVar2 = uVar2 & param_4;
    uVar5 = uVar5 << 0x10 ^ param_2[0x1e] ^ uVar3 ^ uVar5;
    uVar6 = param_2[0x1f] ^ uVar3 ^ uVar2;
    uVar2 = (uVar2 << 0x10 ^ uVar6) >> 4;
    uVar2 = *(uint *)((ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x101100) ^
            *(uint *)((ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x101300) ^
            *(uint *)((ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4 + 0x101700) ^
            *(uint *)((ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x101500) ^ uVar1 ^
            *(uint *)((ulong)(uVar5 >> 0x1a) * 4 + 0x101600) ^
            *(uint *)(&DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)((ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x101200) ^
            *(uint *)((ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x101400);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar1 = uVar2 >> 3 | uVar2 << 0x1d;
  uVar3 = uVar3 >> 3 | uVar3 << 0x1d;
  uVar2 = (uVar1 >> 1 ^ uVar3) & 0x55555555;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 * 2;
  uVar2 = (uVar3 >> 8 ^ uVar1) & 0xff00ff;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 << 8;
  uVar2 = (uVar1 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 2 ^ uVar1;
  uVar2 = (uVar3 >> 0x10 ^ uVar1) & 0xffff;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 << 0x10;
  uVar2 = (uVar1 >> 4 ^ uVar3) & 0xf0f0f0f;
  *param_1 = uVar3 ^ uVar2;
  param_1[1] = uVar2 << 4 ^ uVar1;
  return;
}


