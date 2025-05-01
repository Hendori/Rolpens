
/* WARNING: Unknown calling convention */

_Bool str_endswith(char *string,char *suffix)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  _Bool _Var4;
  
  sVar2 = strlen(string);
  sVar3 = strlen(suffix);
  _Var4 = false;
  if (sVar3 <= sVar2) {
    iVar1 = strcmp(string + (sVar2 - sVar3),suffix);
    _Var4 = iVar1 == 0;
  }
  return _Var4;
}


