
long proper_name_lite(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = dcgettext(0,param_1,5);
  if (param_1 != lVar2) {
    return lVar2;
  }
  uVar3 = locale_charset();
  iVar1 = c_strcasecmp(uVar3,"UTF-8");
  if (iVar1 == 0) {
    lVar2 = param_2;
  }
  return lVar2;
}


