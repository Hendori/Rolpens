
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool WebPValidateConfig(uint *param_1)

{
  if ((((((param_1 != (uint *)0x0) && (0.0 <= (float)param_1[1])) && ((float)param_1[1] <= __LC1))
       && (((-1 < (int)param_1[4] && (0.0 < (float)param_1[5] || (float)param_1[5] == 0.0)) &&
           ((param_1[2] < 7 && ((param_1[6] - 1 < 4 && (param_1[7] < 0x65)))))))) &&
      ((param_1[8] < 0x65 && (((param_1[9] < 8 && (param_1[10] < 2)) && (param_1[0xb] < 2)))))) &&
     (((((param_1[0xf] - 1 < 10 && (-1 < (int)param_1[0x1b])) &&
        (((int)param_1[0x1b] <= (int)param_1[0x1c] &&
         (((int)param_1[0x1c] < 0x65 && (param_1[0x10] < 2)))))) && (param_1[0x11] < 8)) &&
      (((((param_1[0x12] < 4 && (param_1[0x13] < 0x65)) && (-1 < (int)param_1[0xc])) &&
        ((-1 < (int)param_1[0xd] && (param_1[0xe] < 0x65)))) &&
       ((((*param_1 < 2 && ((param_1[0x17] < 0x65 && (param_1[3] < 4)))) && (param_1[0x14] < 2)) &&
        ((((param_1[0x15] < 2 && (param_1[0x16] < 2)) && (param_1[0x18] < 2)) && (param_1[0x19] < 2)
         ))))))))) {
    return param_1[0x1a] < 2;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
WebPConfigInitInternal(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_4 >> 8 == 2) && (param_2 != (undefined4 *)0x0)) {
    param_2[1] = param_1;
    uVar1 = _UNK_001002c8;
    uVar3 = __LC2;
    *param_2 = 0;
    *(undefined8 *)(param_2 + 6) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar1;
    uVar1 = _UNK_001002d8;
    uVar3 = __LC3;
    *(undefined8 *)(param_2 + 2) = 4;
    *(undefined8 *)(param_2 + 10) = uVar3;
    *(undefined8 *)(param_2 + 0xc) = uVar1;
    uVar1 = _UNK_001002e8;
    uVar3 = __LC4;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 0xe) = uVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    *(undefined1 (*) [16])(param_2 + 0x12) = (undefined1  [16])0x0;
    uVar1 = _UNK_001002f8;
    uVar3 = __LC5;
    *(undefined8 *)(param_2 + 0x1a) = 0;
    param_2[0x1c] = 100;
    *(undefined8 *)(param_2 + 0x16) = uVar3;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    uVar2 = _LC8;
    uVar1 = _LC7;
    uVar3 = _LC6;
    switch(param_3) {
    case 1:
      param_2[9] = 4;
      *(undefined8 *)(param_2 + 7) = uVar3;
      break;
    case 2:
      param_2[9] = 3;
      param_2[0x11] = 2;
      *(undefined8 *)(param_2 + 7) = uVar1;
      break;
    case 3:
      param_2[9] = 6;
      *(undefined8 *)(param_2 + 7) = uVar2;
      break;
    case 4:
      *(undefined8 *)(param_2 + 7) = 0;
      break;
    case 5:
      param_2[8] = 0;
      *(undefined8 *)(param_2 + 6) = 2;
    }
    uVar3 = WebPValidateConfig();
    return uVar3;
  }
  return 0;
}



undefined8 WebPConfigLosslessPreset(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 < 10)) {
    *param_1 = 1;
    bVar1 = kLosslessPresets[(long)(int)param_2 * 2 + 1];
    param_1[2] = (uint)(byte)kLosslessPresets[(long)(int)param_2 * 2];
    param_1[1] = (float)bVar1;
    return 1;
  }
  return 0;
}


