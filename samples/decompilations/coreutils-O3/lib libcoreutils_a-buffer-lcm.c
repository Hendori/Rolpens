
ulong buffer_lcm(ulong param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    param_1 = 0x2000;
    if (param_2 != 0) {
      param_1 = param_2;
    }
  }
  else {
    uVar5 = param_1;
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        uVar7 = uVar6;
        uVar6 = uVar5 % uVar7;
        uVar5 = uVar7;
      } while (uVar6 != 0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar2 / auVar1,0);
      uVar5 = SUB168(auVar3 * auVar4,0);
      if ((uVar5 <= param_3) && (SUB168(auVar3 * auVar4,8) == 0)) {
        return uVar5;
      }
    }
  }
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return param_3;
}


