
int memcasecmp(long param_1,long param_2,long param_3)

{
  int iVar1;
  __int32_t **pp_Var2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  pp_Var2 = __ctype_toupper_loc();
  lVar3 = 0;
  do {
    iVar1 = (*pp_Var2)[*(byte *)(param_1 + lVar3)] - (*pp_Var2)[*(byte *)(param_2 + lVar3)];
    if (iVar1 != 0) {
      return iVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != param_3);
  return iVar1;
}


