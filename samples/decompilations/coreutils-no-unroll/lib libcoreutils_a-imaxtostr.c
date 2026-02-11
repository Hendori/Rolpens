
char * imaxtostr(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(undefined1 *)(param_2 + 0x14) = 0;
  pcVar2 = (char *)(param_2 + 0x14);
  if (param_1 < 0) {
    do {
      pcVar3 = pcVar2;
      lVar1 = param_1 / 10;
      pcVar3[-1] = ((char)lVar1 * '\n' + '0') - (char)param_1;
      param_1 = lVar1;
      pcVar2 = pcVar3 + -1;
    } while (lVar1 != 0);
    pcVar3[-2] = '-';
    return pcVar3 + -2;
  }
  do {
    pcVar2 = pcVar2 + -1;
    lVar1 = param_1 / 10;
    *pcVar2 = (char)param_1 + (char)lVar1 * -10 + '0';
    param_1 = lVar1;
  } while (lVar1 != 0);
  return pcVar2;
}


