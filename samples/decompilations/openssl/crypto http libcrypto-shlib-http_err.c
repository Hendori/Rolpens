
undefined8 ossl_err_load_HTTP_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x1e80006c);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(HTTP_str_reasons);
  return 1;
}


