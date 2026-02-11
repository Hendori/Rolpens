
undefined8 mbedtls_version_get_number(void)

{
  return 0x3060300;
}



void mbedtls_version_get_string(undefined4 *param_1)

{
  *param_1 = 0x2e362e33;
  *(undefined2 *)(param_1 + 1) = 0x33;
  return;
}



void mbedtls_version_get_string_full(undefined8 *param_1)

{
  *param_1 = 0x534c54206465624d;
  *(undefined8 *)((long)param_1 + 7) = 0x332e362e332053;
  return;
}


