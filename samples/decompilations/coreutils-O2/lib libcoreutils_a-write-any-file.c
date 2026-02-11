
ulong can_write_any_file(void)

{
  __uid_t _Var1;
  undefined4 extraout_var;
  
  if (initialized_1 != '\0') {
    return (ulong)can_write_0;
  }
  _Var1 = geteuid();
  initialized_1 = 1;
  can_write_0 = _Var1 == 0;
  return CONCAT71((int7)(CONCAT44(extraout_var,_Var1) >> 8),_Var1 == 0);
}


