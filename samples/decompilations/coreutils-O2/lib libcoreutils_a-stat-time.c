
undefined8 get_stat_atime_ns(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



undefined8 get_stat_ctime_ns(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



undefined8 get_stat_mtime_ns(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



undefined8 get_stat_birthtime_ns(void)

{
  return 0;
}



undefined1  [16] get_stat_atime(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x48);
}



undefined1  [16] get_stat_ctime(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



undefined1  [16] get_stat_mtime(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



undefined1  [16] get_stat_birthtime(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xffffffffffffffff;
  auVar1._0_8_ = 0xffffffffffffffff;
  return auVar1;
}



undefined4 stat_time_normalize(undefined4 param_1)

{
  return param_1;
}


