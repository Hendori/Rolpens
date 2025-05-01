
/* WARNING: Unknown calling convention */

wint_t rpl_btowc(wchar_t c)

{
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  wchar_t wc;
  mbstate_t state;
  char buf [1];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (c != L'\xffffffff') {
    buf[0] = (char)c;
    state.__count = L'\0';
    state.__value = (anon_union_4_2_91654ee9_for___value)0x0;
    uVar2 = rpl_mbrtowc(&wc,buf,1,&state);
    if (uVar2 < 0xfffffffffffffffe) goto LAB_0010004f;
  }
  wc = L'\xffffffff';
LAB_0010004f:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return wc;
}


