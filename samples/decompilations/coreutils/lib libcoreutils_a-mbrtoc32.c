
/* WARNING: Unknown calling convention */

size_t rpl_mbrtoc32(char32_t *pwc,char *s,size_t n,mbstate_t *ps)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  uint *puVar5;
  size_t sVar6;
  
  pbVar4 = &_LC0;
  puVar5 = (uint *)0x0;
  sVar6 = 1;
  if (s != (char *)0x0) {
    pbVar4 = (byte *)s;
    puVar5 = pwc;
    sVar6 = n;
  }
  if (ps == (mbstate_t *)0x0) {
    ps = &internal_state;
  }
  uVar3 = mbrtoc32(puVar5,pbVar4,sVar6,ps);
  if (uVar3 < 0xfffffffffffffffd) {
    iVar2 = mbsinit((mbstate_t *)ps);
    if (iVar2 == 0) {
      ((mbstate_t *)ps)->__count = 0;
      ((mbstate_t *)ps)->__value = (_union_27)0x0;
      return uVar3;
    }
  }
  else {
    if (uVar3 == 0xfffffffffffffffd) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar6 != 0) {
      cVar1 = hard_locale(0);
      if (cVar1 == '\0') {
        if (puVar5 != (uint *)0x0) {
          *puVar5 = (uint)*pbVar4;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_mbrtoc32_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


