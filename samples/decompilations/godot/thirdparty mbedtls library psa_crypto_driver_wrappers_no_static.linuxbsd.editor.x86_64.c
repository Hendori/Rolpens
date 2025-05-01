
undefined8 psa_driver_wrapper_get_key_buffer_size(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return 0xffffff79;
}



undefined8 psa_driver_wrapper_export_public_key(long param_1)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 4) >> 8 == 0) {
    uVar1 = psa_export_public_key_internal();
    return uVar1;
  }
  return 0xffffff79;
}



undefined8 psa_driver_wrapper_get_builtin_key(void)

{
  return 0xffffff74;
}


