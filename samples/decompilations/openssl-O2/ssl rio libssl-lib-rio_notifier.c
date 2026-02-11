
bool ossl_rio_notifier_init(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = socketpair(1,0x80801,0,(int *)&local_18);
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("ssl/rio/rio_notifier.c",0x12a,"ossl_rio_notifier_init");
    piVar2 = __errno_location();
    ERR_set_error(2,*piVar2,"calling socketpair()");
  }
  else {
    *param_1 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 >= 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_rio_notifier_cleanup(int *param_1)

{
  if (-1 < *param_1) {
    BIO_closesocket(param_1[1]);
    BIO_closesocket(*param_1);
    param_1[0] = -1;
    param_1[1] = -1;
    return;
  }
  return;
}



undefined8 ossl_rio_notifier_signal(long param_1)

{
  int *piVar1;
  ssize_t sVar2;
  
  do {
    sVar2 = write(*(int *)(param_1 + 4),&ch_0,1);
    if (-1 < sVar2) {
      return 1;
    }
    piVar1 = __errno_location();
  } while (*piVar1 == 4);
  return 1;
}



bool ossl_rio_notifier_unsignal(int *param_1)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    do {
      sVar2 = read(*param_1,auStack_38,0x10);
    } while (sVar2 == 0x10);
    if (-1 < sVar2) break;
    piVar3 = __errno_location();
    if (*piVar3 != 4) {
      iVar1 = BIO_fd_non_fatal_error(*piVar3);
      bVar4 = iVar1 != 0;
LAB_0010018d:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  bVar4 = true;
  goto LAB_0010018d;
}


