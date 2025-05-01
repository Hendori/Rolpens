
/* WARNING: Unknown calling convention */

char * gl_locale_name_thread_unsafe(int category,char *categoryname)

{
  __locale_t p_Var1;
  char *pcVar2;
  
  if (category != 6) {
    p_Var1 = uselocale((__locale_t)0x0);
    pcVar2 = (char *)0x0;
    if (p_Var1 != (__locale_t)0xffffffffffffffff) {
      pcVar2 = (char *)getlocalename_l_unsafe(category);
    }
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention */

char * gl_locale_name_posix_unsafe(int category,char *categoryname)

{
  char *pcVar1;
  
  if (category != 6) {
    pcVar1 = (char *)setlocale_null_unlocked();
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention */

char * gl_locale_name_default(void)

{
  return "C";
}



/* WARNING: Unknown calling convention */

char * gl_locale_name_unsafe(int category,char *categoryname)

{
  __locale_t p_Var1;
  char *pcVar2;
  
  if (category == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  p_Var1 = uselocale((__locale_t)0x0);
  if (p_Var1 != (__locale_t)0xffffffffffffffff) {
    pcVar2 = (char *)getlocalename_l_unsafe(category,p_Var1);
    if (pcVar2 != (char *)0x0) {
      return pcVar2;
    }
  }
  pcVar2 = (char *)setlocale_null_unlocked(category);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "C";
  }
  return pcVar2;
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


