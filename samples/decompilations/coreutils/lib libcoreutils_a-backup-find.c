
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

char * find_backup_file_name(int dir_fd,char *file,backup_type backup_type)

{
  char *pcVar1;
  long lVar2;
  undefined4 in_register_00000014;
  
  pcVar1 = (char *)backupfile_internal(dir_fd,file,CONCAT44(in_register_00000014,backup_type),0);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  xalloc_die();
  if (file != (char *)0x0) {
    if (*file == '\0') {
      return (char *)0x2;
    }
    lVar2 = __xargmatch_internal();
    return (char *)(ulong)backup_types[lVar2];
  }
  return (char *)0x2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

backup_type get_version(char *context,char *version)

{
  long lVar1;
  
  if (version == (char *)0x0) {
    return numbered_existing_backups;
  }
  if (*version == '\0') {
    return numbered_existing_backups;
  }
  lVar1 = __xargmatch_internal(context,version,backup_args,backup_types,4,_argmatch_die,1);
  return backup_types[lVar1];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

backup_type xget_version(char *context,char *version)

{
  char *pcVar1;
  long lVar2;
  
  if ((version != (char *)0x0) && (*version != '\0')) {
    lVar2 = __xargmatch_internal(context,version,backup_args,backup_types,4,_argmatch_die,1);
    return backup_types[lVar2];
  }
  pcVar1 = getenv("VERSION_CONTROL");
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar2 = __xargmatch_internal
                      ("$VERSION_CONTROL",pcVar1,backup_args,backup_types,4,_argmatch_die,1);
    return backup_types[lVar2];
  }
  return numbered_existing_backups;
}


