
timespec timespec_sub(timespec a,timespec b)

{
  uint uVar1;
  ulong uVar2;
  __time_t _Var3;
  __syscall_slong_t _Var4;
  int iVar5;
  long lVar6;
  long lVar7;
  timespec tVar8;
  timespec tVar9;
  
  iVar5 = a.tv_nsec - b.tv_nsec;
  uVar1 = iVar5 >> 0x1f;
  lVar6 = a.tv_sec - b.tv_sec;
  uVar2 = (ulong)(-uVar1 & 0xff);
  lVar7 = lVar6 - uVar2;
  if (SBORROW8(lVar6,uVar2) != SBORROW8(a.tv_sec,b.tv_sec)) {
    _Var4 = 999999999;
    if (0 < lVar7) {
      _Var4 = 0;
    }
    _Var3 = 0x7fffffffffffffff;
    if (0 < lVar7) {
      _Var3 = -0x8000000000000000;
    }
    tVar8.tv_nsec = _Var4;
    tVar8.tv_sec = _Var3;
    return tVar8;
  }
  tVar9.tv_nsec = (long)(int)((uVar1 & 1000000000) + iVar5);
  tVar9.tv_sec = lVar7;
  return tVar9;
}


