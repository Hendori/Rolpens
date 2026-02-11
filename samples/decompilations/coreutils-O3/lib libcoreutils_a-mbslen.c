
size_t mbslen(char *param_1)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = __ctype_get_mb_cur_max();
  if (sVar2 < 2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      sVar2 = strlen(param_1);
      return sVar2;
    }
  }
  else {
    sVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      sVar2 = sVar2 + 1;
      lVar3 = 1;
      if (cVar1 < '\0') {
        pcVar4 = param_1 + (2 - (ulong)(param_1[1] == '\0'));
        local_28[0] = 0;
        lVar3 = mbrtoc32(local_2c,param_1,
                         pcVar4 + (*pcVar4 != '\0') +
                         ((ulong)(pcVar4[*pcVar4 != '\0'] != '\0') - (long)param_1),local_28);
        if (lVar3 < 0) {
          lVar3 = 1;
        }
      }
      param_1 = param_1 + lVar3;
      cVar1 = *param_1;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return sVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


