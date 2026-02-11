
int rpl_fseeko(FILE *param_1,__off_t param_2,int param_3)

{
  int iVar1;
  __off_t _Var2;
  
  if (((param_1->_IO_read_end == param_1->_IO_read_ptr) &&
      (param_1->_IO_write_ptr == param_1->_IO_write_base)) &&
     (param_1->_IO_save_base == (char *)0x0)) {
    iVar1 = fileno(param_1);
    _Var2 = lseek(iVar1,param_2,param_3);
    if (_Var2 == -1) {
      iVar1 = -1;
    }
    else {
      param_1->_flags = param_1->_flags & 0xffffffef;
      param_1->_offset = _Var2;
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = fseeko(param_1,param_2,param_3);
  return iVar1;
}


