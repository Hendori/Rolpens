
ulong same_nameat(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar2;
  char *__file;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  stat local_168;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s1 = (void *)last_component(param_2);
  __s2 = (void *)last_component(param_4);
  __n = base_len(__s1);
  sVar2 = base_len(__s2);
  uVar4 = 0;
  if (__n == sVar2) {
    iVar1 = memcmp(__s1,__s2,__n);
    uVar4 = 0;
    if (iVar1 == 0) {
      __file = (char *)dir_name(param_2);
      iVar1 = fstatat(param_1,__file,&local_168,0x100);
      if (iVar1 == 0) {
        free(__file);
        __file = (char *)dir_name(param_4);
        iVar1 = fstatat(param_3,__file,&local_d8,0x100);
        if (iVar1 == 0) {
          free(__file);
          uVar4 = (ulong)(local_168.st_dev == local_d8.st_dev && local_168.st_ino == local_d8.st_ino
                         );
          goto LAB_00100065;
        }
      }
      puVar3 = (uint *)__errno_location();
      uVar5 = 1;
      uVar4 = (ulong)*puVar3;
      error(1,uVar4,&_LC0,__file);
      uVar4 = same_nameat(0xffffff9c,uVar5,0xffffff9c,uVar4);
      return uVar4;
    }
  }
LAB_00100065:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void same_name(undefined8 param_1,undefined8 param_2)

{
  same_nameat(0xffffff9c,param_1,0xffffff9c,param_2);
  return;
}


