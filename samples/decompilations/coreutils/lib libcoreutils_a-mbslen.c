
/* WARNING: Unknown calling convention */

size_t mbslen(char *string)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = __ctype_get_mb_cur_max();
  if (sVar3 < 2) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      sVar3 = strlen(string);
      return sVar3;
    }
  }
  else {
    sVar6 = 0;
    cVar1 = *string;
    while (cVar1 != '\0') {
      sVar6 = sVar6 + 1;
      lVar4 = 1;
      if (cVar1 < '\0') {
        pcVar5 = string + (2 - (ulong)(string[1] == '\0'));
        mbs.__count = 0;
        lVar4 = mbrtoc32(&ch,string,
                         pcVar5 + (*pcVar5 != '\0') +
                         ((ulong)(pcVar5[*pcVar5 != '\0'] != '\0') - (long)string),&mbs);
        if (lVar4 < 0) {
          lVar4 = 1;
        }
      }
      string = string + lVar4;
      cVar1 = *string;
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return sVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


