
undefined8 OSSL_STORE_INFO_type_string(int param_1)

{
  if (param_1 - 1U < 6) {
    return *(undefined8 *)(type_strings + (long)(int)(param_1 - 1U) * 8);
  }
  return 0;
}


