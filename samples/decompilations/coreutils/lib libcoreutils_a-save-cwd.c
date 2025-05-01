
/* WARNING: Unknown calling convention */

int save_cwd(saved_cwd *cwd)

{
  int iVar1;
  char *pcVar2;
  
  cwd->name = (char *)0x0;
  iVar1 = open_safer();
  cwd->desc = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  pcVar2 = getcwd((char *)0x0,0);
  cwd->name = pcVar2;
  return -(uint)(pcVar2 == (char *)0x0);
}



/* WARNING: Unknown calling convention */

int restore_cwd(saved_cwd *cwd)

{
  int iVar1;
  
  if (-1 < cwd->desc) {
    iVar1 = fchdir(cwd->desc);
    return iVar1;
  }
  iVar1 = chdir_long(cwd->name);
  return iVar1;
}



/* WARNING: Unknown calling convention */

void free_cwd(saved_cwd *cwd)

{
  if (-1 < cwd->desc) {
    close(cwd->desc);
  }
  free(cwd->name);
  return;
}


