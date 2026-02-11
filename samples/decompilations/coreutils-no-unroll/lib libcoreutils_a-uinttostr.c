
char * uinttostr(ulong param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  
  *(undefined1 *)(param_2 + 10) = 0;
  pcVar2 = (char *)(param_2 + 10);
  do {
    uVar1 = (uint)param_1;
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)((param_1 & 0xffffffff) / 10) * -10 + '0';
    param_1 = (param_1 & 0xffffffff) / 10;
  } while (9 < uVar1);
  return pcVar2;
}


