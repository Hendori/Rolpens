
char * umaxtostr(ulong param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  
  *(undefined1 *)(param_2 + 0x14) = 0;
  pcVar2 = (char *)(param_2 + 0x14);
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return pcVar2;
}


