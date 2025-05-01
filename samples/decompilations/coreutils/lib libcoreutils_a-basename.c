
/* WARNING: Unknown calling convention */

char * base_name(char *name)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)last_component();
  if (*pcVar1 == '\0') {
    lVar2 = base_len(name);
  }
  else {
    lVar2 = base_len(pcVar1);
    lVar2 = (ulong)(pcVar1[lVar2] == '/') + lVar2;
    name = pcVar1;
  }
  uVar3 = ximalloc(lVar2 + 1);
  pcVar1 = (char *)__memcpy_chk(uVar3,name,lVar2,lVar2 + 1);
  pcVar1[lVar2] = '\0';
  return pcVar1;
}


