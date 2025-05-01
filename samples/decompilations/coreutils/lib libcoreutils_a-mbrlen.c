
/* WARNING: Unknown calling convention */

size_t rpl_mbrlen(char *s,size_t n,mbstate_t *ps)

{
  size_t sVar1;
  
  if (ps == (mbstate_t *)0x0) {
    ps = &internal_state;
  }
  sVar1 = rpl_mbrtowc(0,s,n,ps);
  return sVar1;
}


