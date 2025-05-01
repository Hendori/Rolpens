
/* WARNING: Unknown calling convention */

size_t buffer_lcm(size_t a,size_t b,size_t lcm_max)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  size_t sVar5;
  ulong uVar6;
  size_t sVar7;
  
  if (a == 0) {
    a = 0x2000;
    if (b != 0) {
      a = b;
    }
  }
  else {
    sVar5 = a;
    sVar7 = b;
    if (b != 0) {
      do {
        uVar6 = sVar7;
        sVar7 = sVar5 % uVar6;
        sVar5 = uVar6;
      } while (sVar7 != 0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = a;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = b;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = SUB168(auVar2 / auVar1,0);
      uVar6 = SUB168(auVar3 * auVar4,0);
      if ((uVar6 <= lcm_max) && (SUB168(auVar3 * auVar4,8) == 0)) {
        return uVar6;
      }
    }
  }
  if (a <= lcm_max) {
    lcm_max = a;
  }
  return lcm_max;
}


