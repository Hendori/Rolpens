
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8InitRandom(float param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar2 = _UNK_00100128;
  uVar1 = _LC0;
  param_2[1] = __LC4;
  param_2[2] = uVar2;
  uVar3 = _UNK_00100138;
  uVar2 = __LC5;
  *param_2 = uVar1;
  uVar4 = 0;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  uVar1 = _UNK_00100148;
  param_2[5] = __LC6;
  param_2[6] = uVar1;
  uVar1 = _UNK_00100158;
  param_2[7] = __LC7;
  param_2[8] = uVar1;
  uVar1 = _UNK_00100168;
  param_2[9] = __LC8;
  param_2[10] = uVar1;
  uVar1 = _UNK_00100178;
  param_2[0xb] = __LC9;
  param_2[0xc] = uVar1;
  uVar1 = _UNK_00100188;
  param_2[0xd] = __LC10;
  param_2[0xe] = uVar1;
  uVar1 = _UNK_00100198;
  param_2[0xf] = __LC11;
  param_2[0x10] = uVar1;
  uVar1 = _UNK_001001a8;
  param_2[0x11] = __LC12;
  param_2[0x12] = uVar1;
  uVar1 = _UNK_001001b8;
  param_2[0x13] = __LC13;
  param_2[0x14] = uVar1;
  uVar1 = _UNK_001001c8;
  param_2[0x15] = __LC14;
  param_2[0x16] = uVar1;
  uVar1 = _UNK_001001d8;
  param_2[0x17] = __LC15;
  param_2[0x18] = uVar1;
  uVar1 = _UNK_001001e8;
  param_2[0x19] = __LC16;
  param_2[0x1a] = uVar1;
  uVar1 = _UNK_001001f8;
  *(undefined8 *)((long)param_2 + 0xd4) = __LC17;
  *(undefined8 *)((long)param_2 + 0xdc) = uVar1;
  if ((0.0 <= param_1) && (uVar4 = 0x100, param_1 <= __LC2)) {
    *(int *)((long)param_2 + 0xe4) = (int)(long)(param_1 * __LC3);
    return;
  }
  *(undefined4 *)((long)param_2 + 0xe4) = uVar4;
  return;
}


