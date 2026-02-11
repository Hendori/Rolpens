
int dirchownmod(int param_1,char *param_2,int param_3,__uid_t param_4,__gid_t param_5,uint param_6,
               uint param_7)

{
  int iVar1;
  int *piVar2;
  __mode_t _Var3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    iVar1 = stat(param_2,&local_d8);
    if (iVar1 != 0) goto LAB_00100069;
    if ((local_d8.st_mode & 0xf000) != 0x4000) {
      piVar2 = __errno_location();
      iVar1 = -1;
      *piVar2 = 0x14;
      goto LAB_00100069;
    }
    if ((param_4 == 0xffffffff) || (uVar4 = local_d8.st_mode, param_4 == local_d8.st_uid))
    goto LAB_00100170;
LAB_001000fe:
    if (param_3 == -1) {
      iVar1 = chown(param_2,param_4,param_5);
    }
    else {
      iVar1 = lchown(param_2,param_4,param_5);
    }
    local_d8.st_mode = uVar4;
    if (iVar1 != 0) goto LAB_00100069;
LAB_0010012b:
    if ((local_d8.st_mode & 0x49) == 0) {
LAB_001001b0:
      uVar4 = 0;
    }
    else {
      uVar4 = local_d8.st_mode & 0xc00;
    }
    if ((param_7 & (param_6 ^ local_d8.st_mode | uVar4)) == 0) {
      iVar1 = 0;
      if (param_1 < 0) goto LAB_00100069;
    }
    else {
      param_6 = ~param_7 & local_d8.st_mode & 0xfff | param_6;
      if (param_1 < 0) {
        if (param_3 == -1) {
          iVar1 = chmod(param_2,param_6);
        }
        else {
          iVar1 = lchmod(param_2,param_6);
        }
        goto LAB_00100069;
      }
      iVar1 = fchmod(param_1,param_6);
      if (iVar1 != 0) goto LAB_00100053;
    }
    iVar1 = close(param_1);
    goto LAB_00100069;
  }
  iVar1 = fstat(param_1,&local_d8);
  if (iVar1 == 0) {
    if ((local_d8.st_mode & 0xf000) == 0x4000) {
      if ((param_4 == 0xffffffff) || (_Var3 = local_d8.st_mode, param_4 == local_d8.st_uid)) {
LAB_00100170:
        if ((param_5 != 0xffffffff) && (local_d8.st_gid != param_5)) {
          _Var3 = local_d8.st_mode;
          uVar4 = local_d8.st_mode;
          if (param_1 < 0) goto LAB_001000fe;
          goto LAB_00100185;
        }
        goto LAB_001001b0;
      }
LAB_00100185:
      iVar1 = fchown(param_1,param_4,param_5);
      local_d8.st_mode = _Var3;
      if (iVar1 == 0) goto LAB_0010012b;
      goto LAB_00100053;
    }
    piVar2 = __errno_location();
    iVar5 = 0x14;
    iVar1 = -1;
    *piVar2 = 0x14;
  }
  else {
LAB_00100053:
    piVar2 = __errno_location();
    iVar5 = *piVar2;
  }
  close(param_1);
  *piVar2 = iVar5;
LAB_00100069:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


