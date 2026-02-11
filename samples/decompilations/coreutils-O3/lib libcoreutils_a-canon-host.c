
char * canon_host(char *param_1)

{
  addrinfo *__ai;
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  addrinfo *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (addrinfo *)0x0;
  hints_0._0_4_ = 2;
  iVar1 = getaddrinfo(param_1,(char *)0x0,(addrinfo *)hints_0,&local_28);
  __ai = local_28;
  if (iVar1 == 0) {
    pcVar2 = local_28->ai_canonname;
    if (local_28->ai_canonname == (char *)0x0) {
      pcVar2 = param_1;
    }
    pcVar2 = strdup(pcVar2);
    if (pcVar2 == (char *)0x0) {
      last_cherror = -10;
    }
    freeaddrinfo(__ai);
  }
  else {
    pcVar2 = (char *)0x0;
    last_cherror = iVar1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * canon_host_r(char *param_1,int *param_2)

{
  addrinfo *__ai;
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  addrinfo *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (addrinfo *)0x0;
  hints_0._0_4_ = 2;
  iVar1 = getaddrinfo(param_1,(char *)0x0,(addrinfo *)hints_0,&local_28);
  __ai = local_28;
  if (iVar1 == 0) {
    pcVar2 = local_28->ai_canonname;
    if (local_28->ai_canonname == (char *)0x0) {
      pcVar2 = param_1;
    }
    pcVar2 = strdup(pcVar2);
    if ((pcVar2 == (char *)0x0) && (param_2 != (int *)0x0)) {
      *param_2 = -10;
    }
    freeaddrinfo(__ai);
  }
  else {
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
    pcVar2 = (char *)0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ch_strerror(void)

{
  gai_strerror(last_cherror);
  return;
}


