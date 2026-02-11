
undefined8 ossl_err_load_BN_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x1800064);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(BN_str_reasons);
  return 1;
}


