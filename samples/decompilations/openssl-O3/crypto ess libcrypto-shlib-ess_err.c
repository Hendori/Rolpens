
undefined8 ossl_err_load_ESS_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x1b00006b);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(ESS_str_reasons);
  return 1;
}


