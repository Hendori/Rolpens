
/* WARNING: Unknown calling convention */

int dirchownmod(int fd,char *dir,mode_t mkdir_mode,uid_t owner,gid_t group,mode_t mode,
               mode_t mode_bits)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  __mode_t _Var4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (fd < 0) {
    iVar2 = stat(dir,(stat *)&st);
    if (iVar2 != 0) goto LAB_00100069;
    if ((st.st_mode & 0xf000) != 0x4000) {
      piVar3 = __errno_location();
      iVar2 = -1;
      *piVar3 = 0x14;
      goto LAB_00100069;
    }
    if ((owner == 0xffffffff) || (uVar5 = st.st_mode, owner == st.st_uid)) goto LAB_00100170;
LAB_001000fe:
    if (mkdir_mode == 0xffffffff) {
      iVar2 = chown(dir,owner,group);
    }
    else {
      iVar2 = lchown(dir,owner,group);
    }
    st.st_mode = uVar5;
    if (iVar2 != 0) goto LAB_00100069;
LAB_0010012b:
    if ((st.st_mode & 0x49) == 0) {
LAB_001001b0:
      uVar5 = 0;
    }
    else {
      uVar5 = st.st_mode & 0xc00;
    }
    if ((mode_bits & (mode ^ st.st_mode | uVar5)) == 0) {
      iVar2 = 0;
      if (fd < 0) goto LAB_00100069;
    }
    else {
      uVar5 = ~mode_bits & st.st_mode & 0xfff | mode;
      if (fd < 0) {
        if (mkdir_mode == 0xffffffff) {
          iVar2 = chmod(dir,uVar5);
        }
        else {
          iVar2 = lchmod(dir,uVar5);
        }
        goto LAB_00100069;
      }
      iVar2 = fchmod(fd,uVar5);
      if (iVar2 != 0) goto LAB_00100053;
    }
    iVar2 = close(fd);
    goto LAB_00100069;
  }
  iVar2 = fstat(fd,(stat *)&st);
  if (iVar2 == 0) {
    if ((st.st_mode & 0xf000) == 0x4000) {
      if ((owner == 0xffffffff) || (_Var4 = st.st_mode, owner == st.st_uid)) {
LAB_00100170:
        if ((group != 0xffffffff) && (st.st_gid != group)) {
          _Var4 = st.st_mode;
          uVar5 = st.st_mode;
          if (fd < 0) goto LAB_001000fe;
          goto LAB_00100185;
        }
        goto LAB_001001b0;
      }
LAB_00100185:
      iVar2 = fchown(fd,owner,group);
      st.st_mode = _Var4;
      if (iVar2 == 0) goto LAB_0010012b;
      goto LAB_00100053;
    }
    piVar3 = __errno_location();
    iVar6 = 0x14;
    iVar2 = -1;
    *piVar3 = 0x14;
  }
  else {
LAB_00100053:
    piVar3 = __errno_location();
    iVar6 = *piVar3;
  }
  close(fd);
  *piVar3 = iVar6;
LAB_00100069:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


