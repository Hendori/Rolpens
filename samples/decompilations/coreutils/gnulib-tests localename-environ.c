
/* WARNING: Unknown calling convention */

char * gl_locale_name_environ(int category,char *categoryname)

{
  char *pcVar1;
  
  pcVar1 = getenv("LC_ALL");
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = getenv(categoryname);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      pcVar1 = getenv("LANG");
      if ((pcVar1 != (char *)0x0) && (*pcVar1 == '\0')) {
        pcVar1 = (char *)0x0;
      }
    }
  }
  return pcVar1;
}


