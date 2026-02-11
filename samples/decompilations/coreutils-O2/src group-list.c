
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint print_group_list(long param_1,__uid_t param_2,__gid_t param_3,__gid_t param_4,
                     undefined1 param_5,byte param_6)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  passwd *ppVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  __gid_t _Var10;
  void *__ptr;
  long lVar11;
  long in_FS_OFFSET;
  bool local_49;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_49 = true;
    ppVar6 = (passwd *)0x0;
  }
  else {
    ppVar6 = getpwuid(param_2);
    local_49 = ppVar6 != (passwd *)0x0;
  }
  uVar3 = print_group(param_3,param_5);
  uVar4 = (uint)local_49;
  if ((char)uVar3 == '\0') {
    uVar4 = uVar3;
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
    uVar3 = print_group(param_4,param_5);
    if ((char)uVar3 == '\0') goto LAB_0010013c;
  }
  uVar3 = uVar4;
LAB_0010013c:
  _Var10 = param_4;
  if (ppVar6 != (passwd *)0x0) {
    _Var10 = ppVar6->pw_gid;
  }
  iVar5 = xgetgroups(param_1,_Var10,&local_48);
  if (iVar5 < 0) {
    if (param_1 == 0) {
      uVar7 = dcgettext(0,"failed to get groups for the current process",5);
      piVar9 = __errno_location();
      error(0,*piVar9,uVar7);
    }
    else {
      uVar7 = quote();
      uVar8 = dcgettext(0,"failed to get groups for user %s",5);
      piVar9 = __errno_location();
      error(0,*piVar9,uVar8,uVar7);
    }
    uVar3 = 0;
  }
  else {
    lVar11 = 0;
    __ptr = local_48;
    if (iVar5 != 0) {
      do {
        if ((*(__gid_t *)((long)__ptr + lVar11) != param_4) &&
           (*(__gid_t *)((long)__ptr + lVar11) != param_3)) {
          pbVar1 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
            *pbVar1 = param_6;
          }
          else {
            __overflow(_stdout,(uint)param_6);
          }
          cVar2 = print_group(*(undefined4 *)((long)local_48 + lVar11),param_5);
          __ptr = local_48;
          if (cVar2 == '\0') {
            uVar3 = 0;
          }
        }
        lVar11 = lVar11 + 4;
      } while ((long)iVar5 * 4 != lVar11);
    }
    free(__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


