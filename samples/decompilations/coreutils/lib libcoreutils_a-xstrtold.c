
/* WARNING: Unknown calling convention */

_Bool xstrtold(char *str,char **ptr,longdouble *result,
              _func_longdouble_char_ptr_char_ptr_ptr *convert)

{
  _Bool _Var1;
  int *piVar2;
  _Bool _Var3;
  char **extraout_RDX;
  long in_FS_OFFSET;
  longdouble in_ST0;
  char *terminator;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  *piVar2 = 0;
  (*convert)((longdouble *)str,(char *)&terminator,extraout_RDX);
  if (terminator == str) {
    _Var3 = false;
    _Var1 = false;
    if (ptr == (char **)0x0) goto LAB_00100065;
  }
  else {
    if (ptr == (char **)0x0) {
      _Var3 = false;
      if (*terminator == '\0') {
        if ((in_ST0 != (longdouble)0) && (*piVar2 == 0x22)) {
          _Var3 = false;
          if (((longdouble)1 <= in_ST0) || (in_ST0 <= -(longdouble)1)) goto LAB_00100065;
          *piVar2 = 0;
        }
        _Var3 = true;
      }
      goto LAB_00100065;
    }
    if ((in_ST0 != (longdouble)0) && (*piVar2 == 0x22)) {
      _Var1 = false;
      if (((longdouble)1 <= in_ST0) || (in_ST0 <= -(longdouble)1)) goto LAB_00100062;
      *piVar2 = 0;
    }
    _Var1 = true;
  }
LAB_00100062:
  _Var3 = _Var1;
  *ptr = terminator;
LAB_00100065:
  *result = in_ST0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


