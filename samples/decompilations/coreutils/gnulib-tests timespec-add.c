
timespec timespec_add(timespec a,timespec b)

{
  ulong uVar1;
  __time_t _Var2;
  int iVar3;
  __syscall_slong_t _Var4;
  long lVar5;
  timespec tVar6;
  timespec tVar7;
  
  iVar3 = b.tv_nsec + a.tv_nsec;
  lVar5 = a.tv_sec + b.tv_sec;
  uVar1 = (ulong)(999999999 < iVar3);
  tVar7.tv_sec = uVar1 + lVar5;
  if (SCARRY8(uVar1,lVar5) != SCARRY8(a.tv_sec,b.tv_sec)) {
    _Var4 = 999999999;
    if (0 < tVar7.tv_sec) {
      _Var4 = 0;
    }
    _Var2 = 0x7fffffffffffffff;
    if (0 < tVar7.tv_sec) {
      _Var2 = -0x8000000000000000;
    }
    tVar6.tv_nsec = _Var4;
    tVar6.tv_sec = _Var2;
    return tVar6;
  }
  tVar7.tv_nsec =
       (long)(int)(((int)((uint)(999999999 < iVar3) << 0x1f) >> 0x1f & 0xc4653600U) + iVar3);
  return tVar7;
}


