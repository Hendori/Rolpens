
/* WARNING: Unknown calling convention */

xtime_t xtime_make(xtime_t s,long ns)

{
  return s * 1000000000 + ns;
}



/* WARNING: Unknown calling convention */

xtime_t xtime_nonnegative_sec(xtime_t t)

{
  return t / 1000000000;
}



/* WARNING: Unknown calling convention */

xtime_t xtime_sec(xtime_t t)

{
  return (t - (t >> 0x3f)) / 1000000000 + (t >> 0x3f);
}



/* WARNING: Unknown calling convention */

long xtime_nonnegative_nsec(xtime_t t)

{
  return t % 1000000000;
}



/* WARNING: Unknown calling convention */

long xtime_nsec(xtime_t t)

{
  long lVar1;
  
  lVar1 = t % 1000000000;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 1000000000;
  }
  return lVar1;
}


