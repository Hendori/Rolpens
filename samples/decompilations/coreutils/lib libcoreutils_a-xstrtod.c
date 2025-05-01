
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool xstrtod(char *str,char **ptr,double *result,_func_double_char_ptr_char_ptr_ptr *convert)

{
  _Bool _Var1;
  int *piVar2;
  _Bool _Var3;
  long in_FS_OFFSET;
  double dVar4;
  char *terminator;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  *piVar2 = 0;
  dVar4 = (*convert)(str,&terminator);
  if (terminator == str) {
    _Var3 = false;
    _Var1 = false;
    if (ptr == (char **)0x0) goto LAB_00100066;
  }
  else {
    if (ptr == (char **)0x0) {
      _Var3 = false;
      if (*terminator == '\0') {
        if ((dVar4 != 0.0) && (*piVar2 == 0x22)) {
          _Var3 = false;
          if ((__LC1 <= dVar4) || (dVar4 <= _LC2)) goto LAB_00100066;
          *piVar2 = 0;
        }
        _Var3 = true;
      }
      goto LAB_00100066;
    }
    if ((dVar4 != 0.0) && (*piVar2 == 0x22)) {
      _Var1 = false;
      if ((__LC1 <= dVar4) || (dVar4 <= _LC2)) goto LAB_00100062;
      *piVar2 = 0;
    }
    _Var1 = true;
  }
LAB_00100062:
  _Var3 = _Var1;
  *ptr = terminator;
LAB_00100066:
  *result = dVar4;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


