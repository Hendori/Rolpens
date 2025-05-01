
/* WARNING: Unknown calling convention */

char * offtostr(off_t i,char *buf)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  
  buf[0x14] = '\0';
  pcVar2 = buf + 0x14;
  if (i < 0) {
    do {
      pcVar3 = pcVar2;
      lVar1 = i / 10;
      pcVar3[-1] = ((char)lVar1 * '\n' + '0') - (char)i;
      i = lVar1;
      pcVar2 = pcVar3 + -1;
    } while (lVar1 != 0);
    pcVar3[-2] = '-';
    return pcVar3 + -2;
  }
  do {
    pcVar2 = pcVar2 + -1;
    lVar1 = i / 10;
    *pcVar2 = (char)i + (char)lVar1 * -10 + '0';
    i = lVar1;
  } while (lVar1 != 0);
  return pcVar2;
}


