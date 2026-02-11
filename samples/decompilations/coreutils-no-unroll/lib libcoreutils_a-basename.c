
void base_name(char *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar1 = (char *)last_component();
  if (*pcVar1 == '\0') {
    lVar2 = base_len(param_1);
  }
  else {
    lVar2 = base_len(pcVar1);
    lVar2 = (ulong)(pcVar1[lVar2] == '/') + lVar2;
    param_1 = pcVar1;
  }
  uVar3 = ximalloc(lVar2 + 1);
  lVar4 = __memcpy_chk(uVar3,param_1,lVar2,lVar2 + 1);
  *(undefined1 *)(lVar4 + lVar2) = 0;
  return;
}


