
ulong * memchr2(ulong *param_1,byte param_2,byte param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_2 == param_3) {
    puVar4 = (ulong *)memchr(param_1,(uint)param_2,param_4);
    return puVar4;
  }
  if (param_4 == 0) {
    return (ulong *)0x0;
  }
  uVar3 = (ulong)param_1 & 7;
  while (uVar3 != 0) {
    if (((byte)*param_1 == param_2) || ((byte)*param_1 == param_3)) {
      return param_1;
    }
    param_1 = (ulong *)((long)param_1 + 1);
    param_4 = param_4 - 1;
    if (param_4 == 0) {
      return (ulong *)0x0;
    }
    uVar3 = (ulong)param_1 & 7;
  }
  lVar1 = (ulong)((uint)param_2 * 0x100 + (uint)param_2) * 0x10001;
  lVar2 = (ulong)((uint)param_3 * 0x101) * 0x10001;
  if (7 < param_4) {
    do {
      uVar3 = *param_1 ^ lVar2 + (lVar2 << 0x20);
      uVar5 = *param_1 ^ lVar1 + (lVar1 << 0x20);
      if (((~uVar3 & uVar3 + 0xfefefefefefefeff | uVar5 + 0xfefefefefefefeff & ~uVar5) &
          0x8080808080808080) != 0) goto LAB_001000f6;
      param_4 = param_4 - 8;
      param_1 = param_1 + 1;
    } while (7 < param_4);
    if (param_4 == 0) {
      return (ulong *)0x0;
    }
  }
LAB_001000f6:
  puVar4 = (ulong *)((long)param_1 + param_4);
  while( true ) {
    if ((byte)*param_1 == param_2) {
      return param_1;
    }
    if ((byte)*param_1 == param_3) break;
    param_1 = (ulong *)((long)param_1 + 1);
    if (param_1 == puVar4) {
      return (ulong *)0x0;
    }
  }
  return param_1;
}


