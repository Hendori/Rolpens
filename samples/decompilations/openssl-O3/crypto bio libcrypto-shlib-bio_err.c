
undefined8 ossl_err_load_BIO_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x10000064);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(BIO_str_reasons);
  return 1;
}



uint BIO_err_is_non_fatal(uint param_1)

{
  uint uVar1;
  
  if (-1 < (int)param_1) {
    uVar1 = 0;
    if (param_1 >> 0x17 == 0x20) {
      uVar1 = (uint)((param_1 & 0x7fffff) == 0x70);
    }
    return uVar1;
  }
  uVar1 = BIO_sock_non_fatal_error(param_1 & 0x7fffffff);
  return uVar1;
}


