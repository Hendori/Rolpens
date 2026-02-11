
bool strip_trailing_slashes(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)last_component();
  if (*pcVar3 != '\0') {
    param_1 = pcVar3;
  }
  lVar2 = base_len(param_1);
  cVar1 = param_1[lVar2];
  param_1[lVar2] = '\0';
  return cVar1 != '\0';
}


