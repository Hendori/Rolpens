
undefined1  [16] make_timespec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



int timespec_cmp(long param_1,long param_2,long param_3,long param_4)

{
  return ((uint)(param_4 < param_2) - (uint)(param_2 < param_4)) +
         ((uint)(param_3 < param_1) - (uint)(param_1 < param_3)) * 2;
}



int timespec_sign(long param_1,long param_2,undefined8 param_3)

{
  return ((uint)(param_1 == 0) & (uint)CONCAT71((int7)((ulong)param_3 >> 8),param_2 != 0)) +
         (uint)(0 < param_1) + (int)(param_1 >> 0x3f);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double timespectod(long param_1,long param_2)

{
  return (double)param_2 / __LC0 + (double)param_1;
}


