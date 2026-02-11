
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool yesno(void)

{
  int iVar1;
  __ssize_t _Var2;
  bool bVar3;
  long in_FS_OFFSET;
  char *local_20;
  size_t local_18;
  long local_10;
  
  bVar3 = false;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (char *)0x0;
  local_18 = 0;
  _Var2 = __getdelim(&local_20,&local_18,10,_stdin);
  if (0 < _Var2) {
    if (local_20[_Var2 + -1] == '\n') {
      local_20[_Var2 + -1] = '\0';
    }
    iVar1 = rpmatch(local_20);
    bVar3 = 0 < iVar1;
  }
  free(local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


