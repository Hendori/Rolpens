
void try_link(char *param_1,int *param_2)

{
  linkat(*param_2,*(char **)(param_2 + 2),param_2[4],param_1,param_2[5]);
  return;
}



void try_symlink(char *param_1,undefined8 *param_2)

{
  symlinkat((char *)*param_2,*(int *)(param_2 + 1),param_1);
  return;
}



void * samedir_template(void *param_1,void *param_2)

{
  ulong __size;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = last_component();
  __size = (lVar1 - (long)param_1) + 9;
  if ((0x100 < __size) && (param_2 = malloc(__size), param_2 == (void *)0x0)) {
    return (void *)0x0;
  }
  puVar2 = (undefined8 *)mempcpy(param_2,param_1,lVar1 - (long)param_1);
  *puVar2 = simple_pattern;
  *(undefined1 *)(puVar2 + 1) = DAT_00100358;
  return param_2;
}



int force_linkat(int param_1,char *param_2,int param_3,char *param_4,int param_5,char param_6,
                int param_7)

{
  int iVar1;
  char *__old;
  int *piVar2;
  long in_FS_OFFSET;
  int local_168 [2];
  char *local_160;
  int local_158;
  int local_154;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 < 0) {
    param_7 = linkat(param_1,param_2,param_3,param_4,param_5);
    if (param_7 == 0) goto LAB_00100172;
    piVar2 = __errno_location();
    param_7 = *piVar2;
  }
  if ((param_6 == '\x01') && (param_7 == 0x11)) {
    __old = (char *)samedir_template(param_4,local_148);
    if (__old == (char *)0x0) {
      piVar2 = __errno_location();
      param_7 = *piVar2;
    }
    else {
      local_168[0] = param_1;
      local_160 = param_2;
      local_158 = param_3;
      local_154 = param_5;
      iVar1 = try_tempname_len(__old,0,local_168,0x100000,6);
      if (iVar1 == 0) {
        iVar1 = renameat(param_3,__old,param_3,param_4);
        param_7 = -1;
        if (iVar1 != 0) {
          piVar2 = __errno_location();
          param_7 = *piVar2;
        }
        unlinkat(param_3,__old,0);
      }
      else {
        piVar2 = __errno_location();
        param_7 = *piVar2;
      }
      if (__old != local_148) {
        free(__old);
      }
    }
  }
LAB_00100172:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_7;
}



int force_symlinkat(char *param_1,int param_2,char *param_3,char param_4,int param_5)

{
  int iVar1;
  char *__old;
  int *piVar2;
  long in_FS_OFFSET;
  char *local_158;
  int local_150;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0) {
    param_5 = symlinkat(param_1,param_2,param_3);
    if (param_5 == 0) goto LAB_001002bb;
    piVar2 = __errno_location();
    param_5 = *piVar2;
  }
  if ((param_4 == '\x01') && (param_5 == 0x11)) {
    __old = (char *)samedir_template(param_3,local_148);
    if (__old == (char *)0x0) {
      piVar2 = __errno_location();
      param_5 = *piVar2;
    }
    else {
      local_158 = param_1;
      local_150 = param_2;
      iVar1 = try_tempname_len(__old,0,&local_158,try_symlink,6);
      if (iVar1 == 0) {
        iVar1 = renameat(param_2,__old,param_2,param_3);
        param_5 = -1;
        if (iVar1 != 0) {
          piVar2 = __errno_location();
          param_5 = *piVar2;
          unlinkat(param_2,__old,0);
        }
      }
      else {
        piVar2 = __errno_location();
        param_5 = *piVar2;
      }
      if (__old != local_148) {
        free(__old);
      }
    }
  }
LAB_001002bb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_5;
}


