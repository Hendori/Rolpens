
/* WARNING: Unknown calling convention */

double dtimespec_bound(double c,int err)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined8 in_XMM0_Qb;
  
  if (err == 0x22) {
    uVar2 = (undefined4)CONCAT71((int7)((ulong)in_RAX >> 8),!NAN(c));
    if (c != 0.0) {
      uVar2 = 0;
    }
    if ((char)uVar2 != '\0') {
      auVar1._8_8_ = in_XMM0_Qb;
      auVar1._0_8_ = c;
      uVar3 = movmskpd(uVar2,auVar1);
      if ((uVar3 & 1) == 0) {
        return _LC0;
      }
      return _LC1;
    }
  }
  return c + _LC3 * c;
}


