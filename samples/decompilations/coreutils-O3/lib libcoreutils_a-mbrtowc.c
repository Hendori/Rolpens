
size_t rpl_mbrtowc(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  wchar_t local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (wchar_t *)0x0) {
    param_1 = &local_34;
  }
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (param_3 != 0)) {
    cVar1 = hard_locale(0);
    if (cVar1 == '\0') {
      sVar2 = 1;
      *param_1 = (uint)*param_2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


