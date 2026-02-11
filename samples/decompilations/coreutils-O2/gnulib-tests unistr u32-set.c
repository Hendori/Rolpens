
uint * u32_set(uint *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    if ((0x101fff < param_2 - 0xe000) && (0xd7ff < param_2)) {
      piVar2 = __errno_location();
      *piVar2 = 0x54;
      return (uint *)0x0;
    }
    uVar1 = 0;
    if ((param_3 & 1) != 0) {
      uVar1 = 1;
      *param_1 = param_2;
      if (param_3 == 1) {
        return param_1;
      }
    }
    do {
      param_1[uVar1] = param_2;
      param_1[uVar1 + 1] = param_2;
      uVar1 = uVar1 + 2;
    } while (uVar1 != param_3);
  }
  return param_1;
}


