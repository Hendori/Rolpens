
/* WARNING: Unknown calling convention */

size_t rpl_mbsrtowcs(wchar_t *dest,char **srcp,size_t len,mbstate_t *ps)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  mbstate_t state;
  
  pcVar4 = *srcp;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (ps == (mbstate_t *)0x0) {
    ps = (mbstate_t *)&_gl_mbsrtowcs_state;
  }
  if (dest == (wchar_t *)0x0) {
    state = *ps;
    sVar6 = 0;
    while( true ) {
      lVar3 = 1;
      if ((((*pcVar4 != '\0') && (lVar3 = 2, pcVar4[1] != '\0')) && (lVar3 = 3, pcVar4[2] != '\0'))
         && (lVar3 = 4, pcVar4[3] != '\0')) {
        lVar3 = strnlen1(pcVar4 + 4,0xc,4);
        lVar3 = lVar3 + 4;
      }
      lVar3 = rpl_mbrtowc(0,pcVar4,lVar3,&state);
      if (lVar3 == -2) goto rpl_mbsrtowcs_cold;
      if (lVar3 == -1) goto LAB_00100183;
      if (lVar3 == 0) break;
      pcVar4 = pcVar4 + lVar3;
      sVar6 = sVar6 + 1;
    }
  }
  else {
    pwVar5 = dest;
    if (len == 0) {
      sVar6 = 0;
    }
    else {
      do {
        lVar3 = 1;
        if (((*pcVar4 != '\0') && (lVar3 = 2, pcVar4[1] != '\0')) &&
           ((lVar3 = 3, pcVar4[2] != '\0' && (lVar3 = 4, pcVar4[3] != '\0')))) {
          lVar3 = strnlen1(pcVar4 + 4,0xc,4);
          lVar3 = lVar3 + 4;
        }
        lVar3 = rpl_mbrtowc(pwVar5,pcVar4,lVar3,ps);
        if (lVar3 == -2) {
rpl_mbsrtowcs_cold:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar3 == -1) {
          *srcp = pcVar4;
LAB_00100183:
          piVar2 = __errno_location();
          sVar6 = 0xffffffffffffffff;
          *piVar2 = 0x54;
          goto LAB_001000ca;
        }
        if (lVar3 == 0) {
          pcVar4 = (char *)0x0;
          sVar6 = (long)pwVar5 - (long)dest >> 2;
          goto LAB_001000c7;
        }
        pcVar4 = pcVar4 + lVar3;
        pwVar5 = pwVar5 + 1;
        len = len - 1;
      } while (len != 0);
      sVar6 = (long)pwVar5 - (long)dest >> 2;
    }
LAB_001000c7:
    *srcp = pcVar4;
  }
LAB_001000ca:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar6;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_mbsrtowcs_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


