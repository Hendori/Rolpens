
undefined1  [16] timespec_sub(long param_1,int param_2,long param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar1 = param_2 - param_4 >> 0x1f;
  uVar2 = (ulong)(-uVar1 & 0xff);
  lVar5 = (param_1 - param_3) - uVar2;
  if (SBORROW8(param_1 - param_3,uVar2) != SBORROW8(param_1,param_3)) {
    uVar4 = 999999999;
    if (0 < lVar5) {
      uVar4 = 0;
    }
    uVar3 = 0x7fffffffffffffff;
    if (0 < lVar5) {
      uVar3 = 0x8000000000000000;
    }
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar3;
    return auVar6;
  }
  auVar7._8_8_ = (long)(int)((uVar1 & 1000000000) + (param_2 - param_4));
  auVar7._0_8_ = lVar5;
  return auVar7;
}


