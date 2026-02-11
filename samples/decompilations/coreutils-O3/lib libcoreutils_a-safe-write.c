
ssize_t safe_write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = write(param_1,param_2,param_3);
      if (-1 < sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (*piVar2 != 0x16) break;
    if ((long)param_3 < 0x7ff00001) {
      return sVar1;
    }
    param_3 = 0x7ff00000;
  }
  return sVar1;
}


