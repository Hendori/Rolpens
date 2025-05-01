
/* WARNING: Unknown calling convention */

int get_fs_usage(char *file,char *disk,fs_usage *fsp)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  statfs fsd;
  char local_126 [262];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)statvfs_works_cache_0 < 0) {
    iVar2 = uname((utsname *)&fsd);
    if (iVar2 == 0) {
      uVar3 = strverscmp(local_126,"2.6.36");
      statvfs_works_cache_0 = ~uVar3 >> 0x1f;
      goto LAB_00100037;
    }
    statvfs_works_cache_0 = 0;
  }
  else {
LAB_00100037:
    if (statvfs_works_cache_0 != 0) {
      iVar1 = statvfs(file,(statvfs *)&fsd);
      iVar2 = -1;
      if (-1 < iVar1) {
        if (fsd.f_bsize == 0) {
          fsd.f_bsize = fsd.f_type;
        }
        fsp->fsu_blocksize = fsd.f_bsize;
        fsp->fsu_blocks = fsd.f_blocks;
        fsp->fsu_files = fsd.f_files;
        fsp->fsu_ffree = fsd.f_ffree;
        fsp->fsu_bfree = fsd.f_bfree;
        fsp->fsu_bavail = fsd.f_bavail;
        fsp->fsu_bavail_top_bit_set = SUB81(fsd.f_bavail >> 0x3f,0);
        iVar2 = 0;
      }
      goto LAB_00100094;
    }
  }
  iVar2 = statfs(file,(statfs *)&fsd);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    fsp->fsu_blocksize = fsd.f_frsize;
    fsp->fsu_blocks = fsd.f_blocks;
    fsp->fsu_bavail_top_bit_set = SUB81(fsd.f_bavail >> 0x3f,0);
    iVar2 = 0;
    fsp->fsu_bfree = fsd.f_bfree;
    fsp->fsu_bavail = fsd.f_bavail;
    fsp->fsu_files = fsd.f_files;
    fsp->fsu_ffree = fsd.f_ffree;
  }
LAB_00100094:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


