
ulong str_endswith(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 extraout_RDX;
  ulong uVar4;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  uVar4 = 0;
  if (sVar3 <= sVar2) {
    iVar1 = strcmp(param_1 + (sVar2 - sVar3),param_2);
    uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),iVar1 == 0);
  }
  return uVar4 & 0xffffffff;
}


