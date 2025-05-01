
/* WARNING: Unknown calling convention */

long get_stat_atime_ns(stat *st)

{
  return (st->st_atim).tv_nsec;
}



/* WARNING: Unknown calling convention */

long get_stat_ctime_ns(stat *st)

{
  return (st->st_ctim).tv_nsec;
}



/* WARNING: Unknown calling convention */

long get_stat_mtime_ns(stat *st)

{
  return (st->st_mtim).tv_nsec;
}



/* WARNING: Unknown calling convention */

long get_stat_birthtime_ns(stat *st)

{
  return 0;
}



/* WARNING: Unknown calling convention */

timespec get_stat_atime(stat *st)

{
  return st->st_atim;
}



/* WARNING: Unknown calling convention */

timespec get_stat_ctime(stat *st)

{
  return st->st_ctim;
}



/* WARNING: Unknown calling convention */

timespec get_stat_mtime(stat *st)

{
  return st->st_mtim;
}



/* WARNING: Unknown calling convention */

timespec get_stat_birthtime(stat *st)

{
  timespec tVar1;
  
  tVar1.tv_nsec = -1;
  tVar1.tv_sec = -1;
  return tVar1;
}



/* WARNING: Unknown calling convention */

int stat_time_normalize(int result,stat *st)

{
  return result;
}


