
void cdb_free(cd_buf *cdb)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("! close_fail","lib/chdir-long.c",0x3f,"cdb_free");
}



/* WARNING: Unknown calling convention */

int chdir_long(char *dir)

{
  int iVar1;
  uint uVar2;
  uint __fd;
  uint __fd_00;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  size_t sVar6;
  undefined1 *puVar7;
  char *pcVar8;
  cd_buf *cdb;
  char *__file;
  
  iVar1 = chdir(dir);
  if (iVar1 == 0) {
    return 0;
  }
  piVar4 = __errno_location();
  if (*piVar4 != 0x24) {
    return iVar1;
  }
  sVar5 = strlen(dir);
  if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < len","lib/chdir-long.c",0x7d,"chdir_long");
  }
  if (sVar5 < 0x1000) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("4096 <= len","lib/chdir-long.c",0x7e,"chdir_long");
  }
  sVar6 = strspn(dir,"/");
  if (sVar6 == 2) {
    puVar7 = (undefined1 *)memchr(dir + 3,0x2f,sVar5 - 3);
    if (puVar7 == (undefined1 *)0x0) {
      return -1;
    }
    *puVar7 = 0;
    __fd = openat(-100,dir,0x10900);
    *puVar7 = 0x2f;
    if ((int)__fd < 0) {
LAB_00100308:
      iVar1 = *piVar4;
LAB_001001b4:
      *piVar4 = iVar1;
      return -1;
    }
    sVar6 = strspn(puVar7 + 1,"/");
    __file = puVar7 + 1 + sVar6;
  }
  else {
    __fd = 0xffffff9c;
    __file = dir;
    if (sVar6 != 0) {
      __fd = openat(-100,"/",0x10900);
      if ((int)__fd < 0) goto LAB_00100308;
      __file = dir + sVar6;
    }
  }
  if (*__file == '/') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("*dir != \'/\'","lib/chdir-long.c",0xa1,"chdir_long");
  }
  pcVar8 = dir + sVar5;
  if (pcVar8 < __file) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dir <= dir_end","lib/chdir-long.c",0xa2,"chdir_long");
  }
  while (0xfff < (long)pcVar8 - (long)__file) {
    puVar7 = (undefined1 *)memrchr(__file,0x2f,0x1000);
    if (puVar7 == (undefined1 *)0x0) {
      *piVar4 = 0x24;
      return -1;
    }
    *puVar7 = 0;
    if (0xfff < (long)puVar7 - (long)__file) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("slash - dir < 4096","lib/chdir-long.c",0xb2,"chdir_long");
    }
    uVar2 = openat(__fd,__file,0x10900);
    if ((int)uVar2 < 0) {
      *puVar7 = 0x2f;
      goto LAB_001001a4;
    }
    if (-1 < (int)__fd) {
      cdb = (cd_buf *)(ulong)__fd;
      iVar1 = close(__fd);
      __fd_00 = __fd;
      if (iVar1 != 0) goto LAB_00100171;
    }
    *puVar7 = 0x2f;
    sVar5 = strspn(puVar7 + 1,"/");
    __fd = uVar2;
    __file = puVar7 + 1 + sVar5;
  }
  do {
    cdb = (cd_buf *)(ulong)__fd;
    if (__file < pcVar8) {
      __fd_00 = openat(__fd,__file,0x10900);
      if ((int)__fd_00 < 0) goto LAB_001001a4;
      if ((-1 < (int)__fd) && (iVar1 = close(__fd), iVar1 != 0)) goto LAB_00100171;
      iVar1 = fchdir(__fd_00);
      __fd = __fd_00;
      if (iVar1 == 0) goto LAB_0010029e;
      iVar1 = *piVar4;
LAB_001002bc:
      cdb = (cd_buf *)(ulong)__fd_00;
      iVar3 = close(__fd_00);
      if (iVar3 == 0) goto LAB_001001b4;
    }
    else {
      iVar1 = fchdir(__fd);
      if (iVar1 != 0) {
LAB_001001a4:
        iVar1 = *piVar4;
        __fd_00 = __fd;
        if (-1 < (int)__fd) goto LAB_001002bc;
        goto LAB_001001b4;
      }
      if ((int)__fd < 0) {
        return 0;
      }
LAB_0010029e:
      cdb = (cd_buf *)(ulong)__fd;
      iVar1 = close(__fd);
      __fd_00 = __fd;
      if (iVar1 == 0) {
        return 0;
      }
    }
LAB_00100171:
    cdb_free(cdb);
    __fd = __fd_00;
  } while( true );
}


