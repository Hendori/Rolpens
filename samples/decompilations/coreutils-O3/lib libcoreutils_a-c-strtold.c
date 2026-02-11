
void c_strtold(char *param_1,char **param_2)

{
  if (c_locale_cache == (__locale_t)0x0) {
    c_locale_cache = newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (c_locale_cache != (__locale_t)0x0) {
    strtold_l(param_1,param_2,c_locale_cache);
    return;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  return;
}


