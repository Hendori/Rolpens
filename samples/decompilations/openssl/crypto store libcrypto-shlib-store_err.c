
undefined8 ossl_err_load_OSSL_STORE_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x1600006b);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(OSSL_STORE_str_reasons);
  return 1;
}


