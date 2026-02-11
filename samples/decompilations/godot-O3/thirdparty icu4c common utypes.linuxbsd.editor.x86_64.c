
char * u_errorName_76_godot(uint param_1)

{
  if (param_1 < 0x20) {
    return *(char **)(_uErrorName + (long)(int)param_1 * 8);
  }
  if (param_1 + 0x80 < 9) {
    return *(char **)(_uErrorInfoName + (long)(int)(param_1 + 0x80) * 8);
  }
  if (param_1 - 0x10000 < 0x23) {
    return *(char **)(_uTransErrorName + (long)(int)(param_1 - 0x10000) * 8);
  }
  if (param_1 - 0x10100 < 0x20) {
    return *(char **)(_uFmtErrorName + (long)(int)(param_1 - 0x10100) * 8);
  }
  if (param_1 - 0x10200 < 0xe) {
    return *(char **)(_uBrkErrorName + (long)(int)(param_1 - 0x10200) * 8);
  }
  if (param_1 - 0x10300 < 0x16) {
    return *(char **)(_uRegexErrorName + (long)(int)(param_1 - 0x10300) * 8);
  }
  if (param_1 - 0x10400 < 9) {
    return *(char **)(_uIDNAErrorName + (long)(int)(param_1 - 0x10400) * 8);
  }
  if (1 < param_1 - 0x10500) {
    return "[BOGUS UErrorCode]";
  }
  return *(char **)(_uPluginErrorName + (long)(int)(param_1 - 0x10500) * 8);
}


