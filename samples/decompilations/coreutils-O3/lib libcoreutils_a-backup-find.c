
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong find_backup_file_name(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = backupfile_internal();
  if (uVar1 != 0) {
    return uVar1;
  }
  xalloc_die();
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      return 2;
    }
    lVar2 = __xargmatch_internal();
    return (ulong)*(uint *)(backup_types + lVar2 * 4);
  }
  return 2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] get_version(undefined8 param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 == (char *)0x0) {
    auVar4._8_8_ = param_3;
    auVar4._0_8_ = 2;
    return auVar4;
  }
  if (*param_2 == '\0') {
    auVar2._8_8_ = param_3;
    auVar2._0_8_ = 2;
    return auVar2;
  }
  lVar1 = __xargmatch_internal(param_1,param_2,backup_args,backup_types,4,_argmatch_die);
  auVar3._4_4_ = 0;
  auVar3._0_4_ = *(uint *)(backup_types + lVar1 * 4);
  auVar3._8_8_ = 1;
  return auVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 xget_version(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    lVar2 = __xargmatch_internal(param_1,param_2,backup_args,backup_types,4,_argmatch_die,1);
    return *(undefined4 *)(backup_types + lVar2 * 4);
  }
  pcVar1 = getenv("VERSION_CONTROL");
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar2 = __xargmatch_internal
                      ("$VERSION_CONTROL",pcVar1,backup_args,backup_types,4,_argmatch_die,1);
    return *(undefined4 *)(backup_types + lVar2 * 4);
  }
  return 2;
}


