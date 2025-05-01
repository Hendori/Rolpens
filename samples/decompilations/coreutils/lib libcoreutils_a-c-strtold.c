
/* WARNING: Unknown calling convention */

longdouble * c_strtold(char *nptr,char **endptr)

{
  longdouble *extraout_RAX;
  
  if (c_locale_cache == (locale_t)0x0) {
    c_locale_cache = (locale_t)newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (c_locale_cache != (locale_t)0x0) {
    strtold_l(nptr,endptr,(__locale_t)c_locale_cache);
    return extraout_RAX;
  }
  if (endptr != (char **)0x0) {
    *endptr = nptr;
  }
  return (longdouble *)0x0;
}


