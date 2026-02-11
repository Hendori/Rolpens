
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



int force_linkat(int param_1,char *param_2,int param_3,char *param_4,int param_5,char param_6,
                int param_7)

{
  int iVar1;
  long lVar2;
  char *__old;
  undefined8 *puVar3;
  int *piVar4;
  ulong __size;
  long in_FS_OFFSET;
  char *local_180;
  int local_168 [2];
  char *local_160;
  int local_158;
  int local_154;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 < 0) {
    param_7 = linkat(param_1,param_2,param_3,param_4,param_5);
    if (param_7 == 0) goto LAB_0010016a;
    piVar4 = __errno_location();
    param_7 = *piVar4;
  }
  if ((param_6 == '\x01') && (param_7 == 0x11)) {
    lVar2 = last_component(param_4);
    __size = (lVar2 - (long)param_4) + 9;
    if (__size < 0x101) {
      __old = local_148;
      __size = 0x100;
    }
    else {
      __old = (char *)malloc(__size);
      if (__old == (char *)0x0) {
        piVar4 = __errno_location();
        param_7 = *piVar4;
        goto LAB_0010016a;
      }
    }
    local_180 = local_148;
    puVar3 = (undefined8 *)__mempcpy_chk(__old,param_4,lVar2 - (long)param_4,__size);
    *puVar3 = simple_pattern;
    *(undefined1 *)(puVar3 + 1) = DAT_001003d8;
    local_168[0] = param_1;
    local_160 = param_2;
    local_158 = param_3;
    local_154 = param_5;
    iVar1 = try_tempname_len(__old,0,local_168,0x100000,6);
    if (iVar1 == 0) {
      iVar1 = renameat(param_3,__old,param_3,param_4);
      param_7 = -1;
      if (iVar1 != 0) {
        piVar4 = __errno_location();
        param_7 = *piVar4;
      }
      unlinkat(param_3,__old,0);
    }
    else {
      piVar4 = __errno_location();
      param_7 = *piVar4;
    }
    if (__old != local_180) {
      free(__old);
    }
  }
LAB_0010016a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_7;
}



int force_symlinkat(char *param_1,int param_2,char *param_3,char param_4,int param_5)

{
  int iVar1;
  long lVar2;
  char *__old;
  undefined8 *puVar3;
  int *piVar4;
  ulong __size;
  long in_FS_OFFSET;
  char *local_158;
  int local_150;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0) {
    param_5 = symlinkat(param_1,param_2,param_3);
    if (param_5 == 0) goto LAB_00100323;
    piVar4 = __errno_location();
    param_5 = *piVar4;
  }
  if ((param_4 == '\x01') && (param_5 == 0x11)) {
    lVar2 = last_component(param_3);
    __size = (lVar2 - (long)param_3) + 9;
    if (__size < 0x101) {
      __old = local_148;
      __size = 0x100;
    }
    else {
      __old = (char *)malloc(__size);
      if (__old == (char *)0x0) {
        piVar4 = __errno_location();
        param_5 = *piVar4;
        goto LAB_00100323;
      }
    }
    puVar3 = (undefined8 *)__mempcpy_chk(__old,param_3,lVar2 - (long)param_3,__size);
    *puVar3 = simple_pattern;
    *(undefined1 *)(puVar3 + 1) = DAT_001003d8;
    local_158 = param_1;
    local_150 = param_2;
    iVar1 = try_tempname_len(__old,0,&local_158,try_symlink,6);
    if (iVar1 == 0) {
      iVar1 = renameat(param_2,__old,param_2,param_3);
      param_5 = -1;
      if (iVar1 != 0) {
        piVar4 = __errno_location();
        param_5 = *piVar4;
        unlinkat(param_2,__old,0);
      }
    }
    else {
      piVar4 = __errno_location();
      param_5 = *piVar4;
    }
    if (__old != local_148) {
      free(__old);
    }
  }
LAB_00100323:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_5;
}


