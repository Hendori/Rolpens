
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

timespec dtotimespec(double sec)

{
  long lVar1;
  long lVar2;
  double dVar3;
  timespec tVar4;
  timespec tVar5;
  
  lVar2 = -0x8000000000000000;
  lVar1 = 0;
  if (__LC0 < sec) {
    lVar1 = 999999999;
    lVar2 = 0x7fffffffffffffff;
    if (sec < _LC1) {
      dVar3 = (sec - (double)(long)sec) * __LC2;
      lVar1 = (long)dVar3;
      lVar1 = (ulong)((double)lVar1 < dVar3) + lVar1;
      lVar2 = (long)sec + lVar1 / 1000000000;
      lVar1 = lVar1 % 1000000000;
      if (lVar1 < 0) {
        tVar5.tv_nsec = lVar1 + 1000000000;
        tVar5.tv_sec = lVar2 + -1;
        return tVar5;
      }
    }
  }
  tVar4.tv_nsec = lVar1;
  tVar4.tv_sec = lVar2;
  return tVar4;
}


