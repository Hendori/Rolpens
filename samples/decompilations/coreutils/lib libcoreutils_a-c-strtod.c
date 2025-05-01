
/* WARNING: Unknown calling convention */

double c_strtod(char *nptr,char **endptr)

{
  double dVar1;
  
  if (c_locale_cache == (locale_t)0x0) {
    c_locale_cache = (locale_t)newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (c_locale_cache != (locale_t)0x0) {
    dVar1 = strtod_l(nptr,endptr,(__locale_t)c_locale_cache);
    return dVar1;
  }
  if (endptr != (char **)0x0) {
    *endptr = nptr;
  }
  return 0.0;
}


