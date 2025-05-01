
/* WARNING: Unknown calling convention */

char * inttostr(int i,char *buf)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  buf[0xb] = '\0';
  pcVar2 = buf + 0xb;
  if (i < 0) {
    do {
      pcVar3 = pcVar2;
      iVar1 = i / 10;
      pcVar3[-1] = ((char)iVar1 * '\n' + '0') - (char)i;
      pcVar2 = pcVar3 + -1;
      i = iVar1;
    } while (iVar1 != 0);
    pcVar3[-2] = '-';
    return pcVar3 + -2;
  }
  do {
    pcVar2 = pcVar2 + -1;
    iVar1 = i / 10;
    *pcVar2 = (char)i + (char)iVar1 * -10 + '0';
    i = iVar1;
  } while (iVar1 != 0);
  return pcVar2;
}


