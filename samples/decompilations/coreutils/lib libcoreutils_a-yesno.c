
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool yesno(void)

{
  int iVar1;
  __ssize_t _Var2;
  bool bVar3;
  long in_FS_OFFSET;
  char *response;
  size_t response_size;
  long local_10;
  
  bVar3 = false;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  response = (char *)0x0;
  response_size = 0;
  _Var2 = __getdelim(&response,&response_size,10,_stdin);
  if (0 < _Var2) {
    if (response[_Var2 + -1] == '\n') {
      response[_Var2 + -1] = '\0';
    }
    iVar1 = rpmatch(response);
    bVar3 = 0 < iVar1;
  }
  free(response);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


