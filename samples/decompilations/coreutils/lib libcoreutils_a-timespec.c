
/* WARNING: Unknown calling convention */

timespec make_timespec(time_t s,long ns)

{
  timespec tVar1;
  
  tVar1.tv_nsec = ns;
  tVar1.tv_sec = s;
  return tVar1;
}



int timespec_cmp(timespec a,timespec b)

{
  return ((uint)(b.tv_nsec < a.tv_nsec) - (uint)(a.tv_nsec < b.tv_nsec)) +
         ((uint)(b.tv_sec < a.tv_sec) - (uint)(a.tv_sec < b.tv_sec)) * 2;
}



int timespec_sign(timespec a)

{
  undefined8 in_RDX;
  
  return ((uint)(a.tv_sec == 0) & (uint)CONCAT71((int7)((ulong)in_RDX >> 8),a.tv_nsec != 0)) +
         (uint)(0 < a.tv_sec) + (a.tv_sec._4_4_ >> 0x1f);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double timespectod(timespec a)

{
  return (double)a.tv_nsec / __LC0 + (double)a.tv_sec;
}


