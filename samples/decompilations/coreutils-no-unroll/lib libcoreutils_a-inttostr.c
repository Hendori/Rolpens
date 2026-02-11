
char * inttostr(int param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(undefined1 *)(param_2 + 0xb) = 0;
  pcVar2 = (char *)(param_2 + 0xb);
  if (param_1 < 0) {
    do {
      pcVar3 = pcVar2;
      iVar1 = param_1 / 10;
      pcVar3[-1] = ((char)iVar1 * '\n' + '0') - (char)param_1;
      pcVar2 = pcVar3 + -1;
      param_1 = iVar1;
    } while (iVar1 != 0);
    pcVar3[-2] = '-';
    return pcVar3 + -2;
  }
  do {
    pcVar2 = pcVar2 + -1;
    iVar1 = param_1 / 10;
    *pcVar2 = (char)param_1 + (char)iVar1 * -10 + '0';
    param_1 = iVar1;
  } while (iVar1 != 0);
  return pcVar2;
}


