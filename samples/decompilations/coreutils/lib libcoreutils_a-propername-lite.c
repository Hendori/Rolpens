
/* WARNING: Unknown calling convention */

char * proper_name_lite(char *name_ascii,char *name_utf8)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)dcgettext(0,name_ascii,5);
  if (name_ascii != pcVar2) {
    return pcVar2;
  }
  uVar3 = locale_charset();
  iVar1 = c_strcasecmp(uVar3,"UTF-8");
  if (iVar1 == 0) {
    pcVar2 = name_utf8;
  }
  return pcVar2;
}


