
/* WARNING: Unknown calling convention */

_Bool print_group(gid_t gid,_Bool use_name)

{
  group *pgVar1;
  undefined8 uVar2;
  _Bool _Var3;
  
  if (use_name) {
    pgVar1 = getgrgid(gid);
    if (pgVar1 != (group *)0x0) {
      __printf_chk(2,&_LC0,pgVar1->gr_name);
      return use_name;
    }
    _Var3 = false;
    uVar2 = dcgettext(0,"cannot find name for group ID %ju",5);
    error(0,0,uVar2,gid);
  }
  else {
    _Var3 = true;
  }
  __printf_chk(2,&_LC2,gid);
  return _Var3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool print_group_list(char *username,uid_t ruid,gid_t rgid,gid_t egid,_Bool use_names,char delim)

{
  char *pcVar1;
  _Bool _Var2;
  _Bool _Var3;
  int iVar4;
  passwd *ppVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  __gid_t _Var9;
  gid_t *__ptr;
  long lVar10;
  long in_FS_OFFSET;
  _Bool local_49;
  gid_t *groups;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (username == (char *)0x0) {
    local_49 = true;
    ppVar5 = (passwd *)0x0;
  }
  else {
    ppVar5 = getpwuid(ruid);
    local_49 = ppVar5 != (passwd *)0x0;
  }
  _Var2 = print_group(rgid,use_names);
  if (!_Var2) {
    local_49 = _Var2;
  }
  if (rgid != egid) {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = delim;
    }
    else {
      __overflow(_stdout,(uint)(byte)delim);
    }
    _Var2 = print_group(egid,use_names);
    if (!_Var2) goto LAB_0010013c;
  }
  _Var2 = local_49;
LAB_0010013c:
  _Var9 = egid;
  if (ppVar5 != (passwd *)0x0) {
    _Var9 = ppVar5->pw_gid;
  }
  iVar4 = xgetgroups(username,_Var9,&groups);
  if (iVar4 < 0) {
    if (username == (char *)0x0) {
      uVar6 = dcgettext(0,"failed to get groups for the current process",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar6);
    }
    else {
      uVar6 = quote();
      uVar7 = dcgettext(0,"failed to get groups for user %s",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar7,uVar6);
    }
    _Var2 = false;
  }
  else {
    lVar10 = 0;
    __ptr = groups;
    if (iVar4 != 0) {
      do {
        if ((*(gid_t *)((long)__ptr + lVar10) != egid) && (*(gid_t *)((long)__ptr + lVar10) != rgid)
           ) {
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = delim;
          }
          else {
            __overflow(_stdout,(uint)(byte)delim);
          }
          _Var3 = print_group(*(gid_t *)((long)groups + lVar10),use_names);
          __ptr = groups;
          if (!_Var3) {
            _Var2 = false;
          }
        }
        lVar10 = lVar10 + 4;
      } while ((long)iVar4 * 4 != lVar10);
    }
    free(__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


