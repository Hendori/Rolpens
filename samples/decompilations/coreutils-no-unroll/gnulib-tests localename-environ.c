
char * gl_locale_name_environ(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getenv("LC_ALL");
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = getenv(param_2);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      pcVar1 = getenv("LANG");
      if ((pcVar1 != (char *)0x0) && (*pcVar1 == '\0')) {
        pcVar1 = (char *)0x0;
      }
    }
  }
  return pcVar1;
}


