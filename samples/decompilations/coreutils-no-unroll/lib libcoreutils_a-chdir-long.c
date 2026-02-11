
void cdb_free_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("! close_fail","lib/chdir-long.c",0x3f,"cdb_free");
}



int chdir_long(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int __fd;
  int *piVar4;
  size_t sVar5;
  size_t sVar6;
  undefined1 *puVar7;
  char *__file;
  
  iVar1 = chdir(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar4 = __errno_location();
  if (*piVar4 != 0x24) {
    return iVar1;
  }
  sVar5 = strlen(param_1);
  if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < len","lib/chdir-long.c",0x7d,"chdir_long");
  }
  if (sVar5 < 0x1000) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("4096 <= len","lib/chdir-long.c",0x7e,"chdir_long");
  }
  sVar6 = strspn(param_1,"/");
  if (sVar6 == 2) {
    puVar7 = (undefined1 *)memchr(param_1 + 3,0x2f,sVar5 - 3);
    if (puVar7 == (undefined1 *)0x0) {
      return -1;
    }
    *puVar7 = 0;
    iVar1 = openat(-100,param_1,0x10900);
    *puVar7 = 0x2f;
    if (iVar1 < 0) {
LAB_00100308:
      iVar3 = *piVar4;
LAB_001001b4:
      *piVar4 = iVar3;
      return -1;
    }
    sVar6 = strspn(puVar7 + 1,"/");
    __file = puVar7 + 1 + sVar6;
  }
  else {
    iVar1 = -100;
    __file = param_1;
    if (sVar6 != 0) {
      iVar1 = openat(-100,"/",0x10900);
      if (iVar1 < 0) goto LAB_00100308;
      __file = param_1 + sVar6;
    }
  }
  if (*__file == '/') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("*dir != \'/\'","lib/chdir-long.c",0xa1,"chdir_long");
  }
  param_1 = param_1 + sVar5;
  if (param_1 < __file) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dir <= dir_end","lib/chdir-long.c",0xa2,"chdir_long");
  }
  while (0xfff < (long)param_1 - (long)__file) {
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
    iVar3 = openat(iVar1,__file,0x10900);
    if (iVar3 < 0) {
      *puVar7 = 0x2f;
      goto LAB_001001a4;
    }
    if ((-1 < iVar1) && (iVar2 = close(iVar1), __fd = iVar1, iVar2 != 0)) goto LAB_00100171;
    *puVar7 = 0x2f;
    sVar5 = strspn(puVar7 + 1,"/");
    iVar1 = iVar3;
    __file = puVar7 + 1 + sVar5;
  }
  do {
    if (__file < param_1) {
      __fd = openat(iVar1,__file,0x10900);
      if (__fd < 0) goto LAB_001001a4;
      if ((-1 < iVar1) && (iVar1 = close(iVar1), iVar1 != 0)) goto LAB_00100171;
      iVar3 = fchdir(__fd);
      iVar1 = __fd;
      if (iVar3 == 0) goto LAB_0010029e;
      iVar3 = *piVar4;
LAB_001002bc:
      iVar1 = close(__fd);
      if (iVar1 == 0) goto LAB_001001b4;
    }
    else {
      iVar3 = fchdir(iVar1);
      if (iVar3 != 0) {
LAB_001001a4:
        iVar3 = *piVar4;
        __fd = iVar1;
        if (-1 < iVar1) goto LAB_001002bc;
        goto LAB_001001b4;
      }
      if (iVar1 < 0) {
        return 0;
      }
LAB_0010029e:
      iVar3 = close(iVar1);
      __fd = iVar1;
      if (iVar3 == 0) {
        return 0;
      }
    }
LAB_00100171:
    cdb_free_part_0();
    iVar1 = __fd;
  } while( true );
}


