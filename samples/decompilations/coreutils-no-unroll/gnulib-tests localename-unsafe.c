
undefined8 gl_locale_name_thread_unsafe(int param_1)

{
  __locale_t p_Var1;
  undefined8 uVar2;
  
  if (param_1 != 6) {
    p_Var1 = uselocale((__locale_t)0x0);
    uVar2 = 0;
    if (p_Var1 != (__locale_t)0xffffffffffffffff) {
      uVar2 = getlocalename_l_unsafe(param_1);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void gl_locale_name_posix_unsafe(int param_1)

{
  if (param_1 != 6) {
    setlocale_null_unlocked();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



undefined * gl_locale_name_default(void)

{
  return &_LC2;
}



undefined * gl_locale_name_unsafe(int param_1)

{
  __locale_t p_Var1;
  undefined *puVar2;
  
  if (param_1 == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  p_Var1 = uselocale((__locale_t)0x0);
  if (p_Var1 != (__locale_t)0xffffffffffffffff) {
    puVar2 = (undefined *)getlocalename_l_unsafe(param_1,p_Var1);
    if (puVar2 != (undefined *)0x0) {
      return puVar2;
    }
  }
  puVar2 = (undefined *)setlocale_null_unlocked(param_1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = &_LC2;
  }
  return puVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gl_locale_name_thread_unsafe_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void gl_locale_name_posix_unsafe_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gl_locale_name_unsafe_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


