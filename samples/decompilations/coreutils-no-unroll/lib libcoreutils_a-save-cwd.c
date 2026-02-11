
int save_cwd(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = open_safer();
  *param_1 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  pcVar2 = getcwd((char *)0x0,0);
  *(char **)(param_1 + 2) = pcVar2;
  return -(uint)(pcVar2 == (char *)0x0);
}



void restore_cwd(int *param_1)

{
  if (-1 < *param_1) {
    fchdir(*param_1);
    return;
  }
  chdir_long(*(undefined8 *)(param_1 + 2));
  return;
}



void free_cwd(int *param_1)

{
  if (-1 < *param_1) {
    close(*param_1);
  }
  free(*(void **)(param_1 + 2));
  return;
}


