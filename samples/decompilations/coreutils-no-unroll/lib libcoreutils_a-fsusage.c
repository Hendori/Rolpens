
undefined8 get_fs_usage(char *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  utsname local_1a8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)statvfs_works_cache_0 < 0) {
    iVar1 = uname(&local_1a8);
    if (iVar1 == 0) {
      uVar2 = strverscmp(local_1a8.release,"2.6.36");
      statvfs_works_cache_0 = ~uVar2 >> 0x1f;
      goto LAB_00100037;
    }
    statvfs_works_cache_0 = 0;
  }
  else {
LAB_00100037:
    if (statvfs_works_cache_0 != 0) {
      iVar1 = statvfs(param_1,(statvfs *)&local_1a8);
      uVar3 = 0xffffffff;
      if (-1 < iVar1) {
        if (local_1a8.sysname._8_8_ == 0) {
          local_1a8.sysname._8_8_ = local_1a8.sysname._0_8_;
        }
        *param_3 = local_1a8.sysname._8_8_;
        param_3[1] = local_1a8.sysname._16_8_;
        param_3[5] = local_1a8.sysname._40_8_;
        param_3[6] = local_1a8.sysname._48_8_;
        param_3[2] = local_1a8.sysname._24_8_;
        param_3[3] = local_1a8.sysname._32_8_;
        *(byte *)(param_3 + 4) = SUB81(local_1a8.sysname._32_8_,7) >> 7;
        uVar3 = 0;
      }
      goto LAB_00100094;
    }
  }
  iVar1 = statfs(param_1,(statfs *)&local_1a8);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    *param_3 = local_1a8.nodename._7_8_;
    param_3[1] = local_1a8.sysname._16_8_;
    *(byte *)(param_3 + 4) = SUB81(local_1a8.sysname._32_8_,7) >> 7;
    uVar3 = 0;
    param_3[2] = local_1a8.sysname._24_8_;
    param_3[3] = local_1a8.sysname._32_8_;
    param_3[5] = local_1a8.sysname._40_8_;
    param_3[6] = local_1a8.sysname._48_8_;
  }
LAB_00100094:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


