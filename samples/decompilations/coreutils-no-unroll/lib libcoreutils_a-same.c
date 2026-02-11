
ulong same_nameat_part_0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  char *__file;
  int *piVar2;
  long in_FS_OFFSET;
  stat local_158;
  stat local_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __file = (char *)dir_name(param_2);
  iVar1 = fstatat((int)param_1,__file,&local_158,0x100);
  if (iVar1 == 0) {
    free(__file);
    __file = (char *)dir_name(param_4);
    iVar1 = fstatat(param_3,__file,&local_c8,0x100);
    if (iVar1 == 0) {
      free(__file);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return CONCAT71((int7)((ulong)param_1 >> 8),
                        local_158.st_dev == local_c8.st_dev && local_158.st_ino == local_c8.st_ino)
               & 0xffffffff;
      }
      goto LAB_001000e0;
    }
  }
  piVar2 = __errno_location();
  error(1,*piVar2,&_LC0,__file);
LAB_001000e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 same_name(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar2;
  undefined8 uVar3;
  
  __s1 = (void *)last_component();
  __s2 = (void *)last_component(param_2);
  __n = base_len(__s1);
  sVar2 = base_len(__s2);
  if (__n == sVar2) {
    iVar1 = memcmp(__s1,__s2,__n);
    if (iVar1 == 0) {
      uVar3 = same_nameat_part_0(0xffffff9c,param_1,0xffffff9c,param_2);
      return uVar3;
    }
  }
  return 0;
}



undefined8 same_nameat(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar2;
  undefined8 uVar3;
  
  __s1 = (void *)last_component(param_2);
  __s2 = (void *)last_component(param_4);
  __n = base_len(__s1);
  sVar2 = base_len(__s2);
  if (__n == sVar2) {
    iVar1 = memcmp(__s1,__s2,__n);
    if (iVar1 == 0) {
      uVar3 = same_nameat_part_0(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return 0;
}


