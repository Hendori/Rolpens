
/* WARNING: Unknown calling convention */

char * last_component(char *name)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *name;
  while (cVar3 == '/') {
    pcVar2 = name + 1;
    name = name + 1;
    cVar3 = *pcVar2;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = name;
    do {
      while (cVar3 != '/') {
        if (bVar1) {
          bVar1 = false;
          name = pcVar2;
        }
        cVar3 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        if (cVar3 == '\0') {
          return name;
        }
      }
      cVar3 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      bVar1 = true;
    } while (cVar3 != '\0');
  }
  return name;
}



/* WARNING: Unknown calling convention */

size_t base_len(char *name)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen(name);
  do {
    sVar2 = sVar1;
    if (sVar2 < 2) {
      return sVar2;
    }
    sVar1 = sVar2 - 1;
  } while (name[sVar2 - 1] == '/');
  return sVar2;
}


