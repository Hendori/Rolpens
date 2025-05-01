
/* WARNING: Unknown calling convention */

int getfileconat(int fd,char *file,char **con)

{
  long lVar1;
  int iVar2;
  char *__ptr;
  int *piVar3;
  int *piVar4;
  char **con_00;
  char *file_00;
  long in_FS_OFFSET;
  saved_cwd saved_cwd;
  char proc_buf [4032];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((fd == -100) || (*file == '/')) {
    piVar4 = __errno_location();
    *piVar4 = 0x5f;
  }
  else {
    piVar4 = (int *)(ulong)(uint)fd;
    file_00 = (char *)(ulong)(uint)fd;
    __ptr = (char *)openat_proc_name(proc_buf,file_00,file);
    if (__ptr != (char *)0x0) {
      piVar3 = __errno_location();
      *piVar3 = 0x5f;
      if (__ptr != proc_buf) {
        free(__ptr);
      }
    }
    iVar2 = save_cwd(&saved_cwd);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      openat_save_fail(*piVar3);
LAB_00100136:
      iVar2 = *piVar4;
      openat_restore_fail();
      iVar2 = getfileconat(iVar2,file_00,con_00);
      return iVar2;
    }
    if ((fd < 0) || (saved_cwd.desc != fd)) {
      iVar2 = fchdir(fd);
      if (iVar2 == 0) {
        piVar4 = __errno_location();
        *piVar4 = 0x5f;
        iVar2 = restore_cwd(&saved_cwd);
        if (iVar2 != 0) goto LAB_00100136;
        free_cwd(&saved_cwd);
        *piVar4 = 0x5f;
      }
      else {
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        free_cwd(&saved_cwd);
        *piVar4 = iVar2;
      }
    }
    else {
      free_cwd(&saved_cwd);
      piVar4 = __errno_location();
      *piVar4 = 9;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int lgetfileconat(int fd,char *file,char **con)

{
  int iVar1;
  
  iVar1 = getfileconat(fd,file,con);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int setfileconat(int fd,char *file,char **con)

{
  int iVar1;
  
  iVar1 = getfileconat(fd,file,con);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int lsetfileconat(int fd,char *file,char **con)

{
  int iVar1;
  
  iVar1 = getfileconat(fd,file,con);
  return iVar1;
}


