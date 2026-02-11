
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] dtotimespec(double param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar2 = -0x8000000000000000;
  lVar1 = 0;
  if (__LC0 < param_1) {
    lVar1 = 999999999;
    lVar2 = 0x7fffffffffffffff;
    if (param_1 < _LC1) {
      dVar3 = (param_1 - (double)(long)param_1) * __LC2;
      lVar1 = (long)dVar3;
      lVar1 = (ulong)((double)lVar1 < dVar3) + lVar1;
      lVar2 = (long)param_1 + lVar1 / 1000000000;
      lVar1 = lVar1 % 1000000000;
      if (lVar1 < 0) {
        auVar5._8_8_ = lVar1 + 1000000000;
        auVar5._0_8_ = lVar2 + -1;
        return auVar5;
      }
    }
  }
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = lVar2;
  return auVar4;
}


