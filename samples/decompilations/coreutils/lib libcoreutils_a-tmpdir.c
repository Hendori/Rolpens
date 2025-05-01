
/* WARNING: Unknown calling convention */

int path_search(char *tmpl,size_t tmpl_len,char *dir,char *pfx,_Bool try_tmpdir)

{
  long lVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  char *__file;
  size_t sVar6;
  long in_FS_OFFSET;
  bool bVar7;
  stat buf;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pfx == (char *)0x0) || (*pfx == '\0')) {
    sVar6 = 4;
    pfx = "file";
    if (try_tmpdir) goto LAB_00100140;
LAB_0010005b:
    __file = dir;
    if (dir == (char *)0x0) goto LAB_001001c5;
LAB_00100064:
    __n = strlen(__file);
    if (__n != 0) {
      lVar3 = __n - 1;
      goto LAB_00100104;
    }
    bVar7 = false;
    uVar5 = 0;
LAB_0010007f:
    if (sVar6 + 7 + __n + uVar5 <= tmpl_len) {
      memcpy(tmpl,__file,__n);
      __sprintf_chk(tmpl + __n,2,0xffffffffffffffff,"/%.*sXXXXXX" + !bVar7,sVar6 & 0xffffffff,pfx);
      iVar2 = 0;
      goto LAB_001000ce;
    }
    piVar4 = __errno_location();
    *piVar4 = 0x16;
  }
  else {
    sVar6 = strlen(pfx);
    if (5 < sVar6) {
      sVar6 = 5;
    }
    if (!try_tmpdir) goto LAB_0010005b;
LAB_00100140:
    __file = (char *)secure_getenv("TMPDIR");
    if ((((__file != (char *)0x0) && (iVar2 = stat(__file,(stat *)&buf), iVar2 == 0)) &&
        ((buf.st_mode & 0xf000) == 0x4000)) ||
       (((dir != (char *)0x0 && (iVar2 = stat(dir,(stat *)&buf), iVar2 == 0)) &&
        (__file = dir, (buf.st_mode & 0xf000) == 0x4000)))) goto LAB_00100064;
LAB_001001c5:
    __file = "/tmp";
    iVar2 = stat("/tmp",(stat *)&buf);
    if ((iVar2 == 0) && ((buf.st_mode & 0xf000) == 0x4000)) {
      lVar3 = 3;
      __n = 4;
LAB_00100104:
      bVar7 = __file[lVar3] != '/';
      uVar5 = (ulong)bVar7;
      goto LAB_0010007f;
    }
    piVar4 = __errno_location();
    *piVar4 = 2;
  }
  iVar2 = -1;
LAB_001000ce:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


