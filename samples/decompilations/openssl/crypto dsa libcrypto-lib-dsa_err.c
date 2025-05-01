
undefined8 ossl_err_load_DSA_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x5000072);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(DSA_str_reasons);
  return 1;
}


