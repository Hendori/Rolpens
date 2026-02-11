
char * last_component(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 == '/') {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar3 = *pcVar2;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = param_1;
    do {
      while (cVar3 != '/') {
        if (bVar1) {
          bVar1 = false;
          param_1 = pcVar2;
        }
        cVar3 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        if (cVar3 == '\0') {
          return param_1;
        }
      }
      cVar3 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      bVar1 = true;
    } while (cVar3 != '\0');
  }
  return param_1;
}



void base_len(char *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = strlen(param_1);
  do {
    if (uVar2 < 2) {
      return;
    }
    lVar1 = uVar2 - 1;
    uVar2 = uVar2 - 1;
  } while (param_1[lVar1] == '/');
  return;
}


