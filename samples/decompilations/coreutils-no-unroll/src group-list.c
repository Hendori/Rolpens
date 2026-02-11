
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool print_group_list(long param_1,__uid_t param_2,__gid_t param_3,__gid_t param_4,char param_5,
                     byte param_6)

{
  byte *pbVar1;
  int iVar2;
  passwd *ppVar3;
  group *pgVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  __gid_t _Var8;
  void *__ptr;
  long lVar9;
  long in_FS_OFFSET;
  bool local_58;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_58 = true;
    ppVar3 = (passwd *)0x0;
  }
  else {
    ppVar3 = getpwuid(param_2);
    local_58 = ppVar3 != (passwd *)0x0;
  }
  if (param_5 == '\0') {
    __printf_chk(2,&_LC2,param_3);
  }
  else {
    pgVar4 = getgrgid(param_3);
    if (pgVar4 == (group *)0x0) {
      uVar7 = dcgettext(0,"cannot find name for group ID %ju",5);
      error(0,0,uVar7);
      __printf_chk(2,&_LC2,param_3);
      local_58 = false;
    }
    else {
      __printf_chk(2,&_LC0,pgVar4->gr_name);
    }
  }
  if (param_3 != param_4) {
    pbVar1 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
      *pbVar1 = param_6;
    }
    else {
      __overflow(_stdout,(uint)param_6);
    }
    if (param_5 == '\0') {
      __printf_chk(2,&_LC2,param_4);
    }
    else {
      pgVar4 = getgrgid(param_4);
      if (pgVar4 == (group *)0x0) {
        uVar7 = dcgettext(0,"cannot find name for group ID %ju",5);
        error(0,0,uVar7);
        __printf_chk(2,&_LC2,param_4);
        local_58 = false;
      }
      else {
        __printf_chk(2,&_LC0,pgVar4->gr_name);
      }
    }
  }
  _Var8 = param_4;
  if (ppVar3 != (passwd *)0x0) {
    _Var8 = ppVar3->pw_gid;
  }
  iVar2 = xgetgroups(param_1,_Var8,&local_48);
  if (iVar2 < 0) {
    if (param_1 == 0) {
      uVar7 = dcgettext(0,"failed to get groups for the current process",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar7);
    }
    else {
      uVar7 = quote(param_1);
      uVar5 = dcgettext(0,"failed to get groups for user %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5,uVar7);
    }
    local_58 = false;
  }
  else {
    __ptr = local_48;
    if (iVar2 != 0) {
      if (param_5 == '\0') {
        lVar9 = 0;
        do {
          if ((param_3 != *(__gid_t *)((long)__ptr + lVar9)) &&
             (param_4 != *(__gid_t *)((long)__ptr + lVar9))) {
            pbVar1 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
              *pbVar1 = param_6;
            }
            else {
              __overflow(_stdout,(uint)param_6);
            }
            __printf_chk(2,&_LC2,*(undefined4 *)((long)local_48 + lVar9));
            __ptr = local_48;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (long)iVar2 * 4);
      }
      else {
        lVar9 = 0;
        do {
          if ((*(__gid_t *)((long)__ptr + lVar9) != param_4) &&
             (*(__gid_t *)((long)__ptr + lVar9) != param_3)) {
            pbVar1 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
              *pbVar1 = param_6;
            }
            else {
              __overflow(_stdout,(uint)param_6);
            }
            _Var8 = *(__gid_t *)((long)local_48 + lVar9);
            pgVar4 = getgrgid(_Var8);
            if (pgVar4 == (group *)0x0) {
              uVar7 = dcgettext(0,"cannot find name for group ID %ju",5);
              error(0,0,uVar7,_Var8);
              __printf_chk(2,&_LC2,_Var8);
              local_58 = false;
              __ptr = local_48;
            }
            else {
              __printf_chk(2,&_LC0,pgVar4->gr_name);
              __ptr = local_48;
            }
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (long)iVar2 * 4);
      }
    }
    free(__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 print_group(__gid_t param_1,undefined4 param_2)

{
  group *pgVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((char)param_2 == '\0') {
    uVar3 = 1;
  }
  else {
    pgVar1 = getgrgid(param_1);
    if (pgVar1 != (group *)0x0) {
      __printf_chk(2,&_LC0,pgVar1->gr_name);
      return param_2;
    }
    uVar3 = 0;
    uVar2 = dcgettext(0,"cannot find name for group ID %ju",5);
    error(0,0,uVar2,param_1);
  }
  __printf_chk(2,&_LC2,param_1);
  return uVar3;
}


