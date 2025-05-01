
/* WARNING: Unknown calling convention */

int pipe_safer(int *fd)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = pipe(fd);
  if (iVar1 == 0) {
    iVar1 = fd_safer(*fd);
    *fd = iVar1;
    if (iVar1 < 0) {
      fd = fd + 1;
    }
    else {
      iVar1 = fd_safer(fd[1]);
      fd[1] = iVar1;
      if (-1 < iVar1) {
        return 0;
      }
    }
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    close(*fd);
    *piVar2 = iVar1;
  }
  return -1;
}


