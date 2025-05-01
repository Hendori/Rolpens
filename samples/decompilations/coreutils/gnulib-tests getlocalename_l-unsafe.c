
/* WARNING: Unknown calling convention */

string_with_storage getlocalename_l_unsafe(int category,locale_t locale)

{
  char *pcVar1;
  undefined4 uVar2;
  string_with_storage sVar3;
  
  if (category == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (locale == (locale_t)0xffffffffffffffff) {
    pcVar1 = (char *)setlocale_null();
    uVar2 = 1;
    if (pcVar1 == (char *)0x0) {
      return (string_with_storage)ZEXT816(0x10007a);
    }
  }
  else {
    pcVar1 = nl_langinfo_l(category << 0x10 | 0xffff,(__locale_t)locale);
    if (*pcVar1 == '\0') {
      pcVar1 = locale->__names[category];
    }
    uVar2 = 3;
  }
  sVar3.storage = uVar2;
  sVar3.value = pcVar1;
  sVar3._12_4_ = 0;
  return sVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void getlocalename_l_unsafe_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


