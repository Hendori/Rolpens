
undefined1  [16] timespec_add(long param_1,int param_2,long param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  param_4 = param_4 + param_2;
  uVar1 = (ulong)(999999999 < param_4);
  auVar5._0_8_ = uVar1 + param_1 + param_3;
  if (SCARRY8(uVar1,param_1 + param_3) != SCARRY8(param_1,param_3)) {
    uVar3 = 999999999;
    if (0 < auVar5._0_8_) {
      uVar3 = 0;
    }
    uVar2 = 0x7fffffffffffffff;
    if (0 < auVar5._0_8_) {
      uVar2 = 0x8000000000000000;
    }
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  auVar5._8_8_ = (long)(int)(((int)((uint)(999999999 < param_4) << 0x1f) >> 0x1f & 0xc4653600U) +
                            param_4);
  return auVar5;
}


