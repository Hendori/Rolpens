
uint * u32_set(uint *param_1,uint param_2,ulong param_3)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    if ((0x101fff < param_2 - 0xe000) && (0xd7ff < param_2)) {
      piVar2 = __errno_location();
      *piVar2 = 0x54;
      return (uint *)0x0;
    }
    puVar1 = param_1;
    if (2 < param_3 - 1) {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1;
        puVar1 = param_1 + uVar3 * 4;
        *puVar1 = param_2;
        puVar1[1] = param_2;
        puVar1[2] = param_2;
        puVar1[3] = param_2;
        uVar3 = uVar4;
      } while (param_3 >> 2 != uVar4);
      uVar3 = param_3 & 3;
      puVar1 = param_1 + (param_3 & 0xfffffffffffffffc);
      param_3 = (ulong)((uint)param_3 & 3);
      if (uVar3 == 0) {
        return param_1;
      }
    }
    *puVar1 = param_2;
    if ((param_3 != 1) && (puVar1[1] = param_2, param_3 != 2)) {
      puVar1[2] = param_2;
    }
  }
  return param_1;
}


