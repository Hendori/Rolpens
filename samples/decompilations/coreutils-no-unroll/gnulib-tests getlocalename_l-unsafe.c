
undefined1  [16] getlocalename_l_unsafe(int param_1,__locale_t param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == (__locale_t)0xffffffffffffffff) {
    pcVar1 = (char *)setlocale_null();
    uVar2 = 1;
    if (pcVar1 == (char *)0x0) {
      return ZEXT816(0x10007a);
    }
  }
  else {
    pcVar1 = nl_langinfo_l(param_1 << 0x10 | 0xffff,param_2);
    if (*pcVar1 == '\0') {
      pcVar1 = param_2->__names[param_1];
    }
    uVar2 = 3;
  }
  auVar3._8_4_ = uVar2;
  auVar3._0_8_ = pcVar1;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void getlocalename_l_unsafe_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


