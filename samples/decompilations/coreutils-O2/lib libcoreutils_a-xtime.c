
long xtime_make(long param_1,long param_2)

{
  return param_1 * 1000000000 + param_2;
}



long xtime_nonnegative_sec(long param_1)

{
  return param_1 / 1000000000;
}



long xtime_sec(long param_1)

{
  return (param_1 - (param_1 >> 0x3f)) / 1000000000 + (param_1 >> 0x3f);
}



long xtime_nonnegative_nsec(long param_1)

{
  return param_1 % 1000000000;
}



long xtime_nsec(long param_1)

{
  param_1 = param_1 % 1000000000;
  if (param_1 < 0) {
    param_1 = param_1 + 1000000000;
  }
  return param_1;
}


