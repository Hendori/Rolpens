
/* WARNING: Unknown calling convention */

_Bool strip_trailing_slashes(char *file)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)last_component();
  if (*pcVar3 != '\0') {
    file = pcVar3;
  }
  lVar2 = base_len(file);
  cVar1 = file[lVar2];
  file[lVar2] = '\0';
  return cVar1 != '\0';
}


