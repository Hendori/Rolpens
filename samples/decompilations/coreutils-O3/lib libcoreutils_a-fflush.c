
void rpl_fflush(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      rpl_fseeko(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


