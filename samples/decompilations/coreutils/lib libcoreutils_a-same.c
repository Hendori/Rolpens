
/* WARNING: Unknown calling convention */

_Bool same_nameat(int source_dfd,char *source,int dest_dfd,char *dest)

{
  long lVar1;
  int iVar2;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar3;
  char *__file;
  uint *puVar4;
  char *dest_00;
  char *source_00;
  long in_FS_OFFSET;
  _Bool _Var5;
  stat source_dir_stats;
  stat dest_dir_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __s1 = (void *)last_component(source);
  __s2 = (void *)last_component(dest);
  __n = base_len(__s1);
  sVar3 = base_len(__s2);
  _Var5 = false;
  if (__n == sVar3) {
    iVar2 = memcmp(__s1,__s2,__n);
    _Var5 = false;
    if (iVar2 == 0) {
      __file = (char *)dir_name(source);
      iVar2 = fstatat(source_dfd,__file,(stat *)&source_dir_stats,0x100);
      if (iVar2 == 0) {
        free(__file);
        __file = (char *)dir_name(dest);
        iVar2 = fstatat(dest_dfd,__file,(stat *)&dest_dir_stats,0x100);
        if (iVar2 == 0) {
          _Var5 = source_dir_stats.st_dev == dest_dir_stats.st_dev &&
                  source_dir_stats.st_ino == dest_dir_stats.st_ino;
          free(__file);
          goto LAB_00100065;
        }
      }
      puVar4 = (uint *)__errno_location();
      source_00 = (char *)0x1;
      dest_00 = (char *)(ulong)*puVar4;
      error(1,dest_00,&_LC0,__file);
      _Var5 = same_nameat(-100,source_00,-100,dest_00);
      return _Var5;
    }
  }
LAB_00100065:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool same_name(char *source,char *dest)

{
  _Bool _Var1;
  
  _Var1 = same_nameat(-100,source,-100,dest);
  return _Var1;
}


