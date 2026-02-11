
double c_strtod(char *param_1,char **param_2)

{
  double dVar1;
  
  if (c_locale_cache == (__locale_t)0x0) {
    c_locale_cache = newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (c_locale_cache != (__locale_t)0x0) {
    dVar1 = strtod_l(param_1,param_2,c_locale_cache);
    return dVar1;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  return 0.0;
}


