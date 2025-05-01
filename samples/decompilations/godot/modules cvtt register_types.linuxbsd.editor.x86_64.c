
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_cvtt_module(ModuleInitializationLevel) */

void initialize_cvtt_module(int param_1)

{
  if (param_1 == 2) {
    __image_compress_bptc_func = image_compress_cvtt;
  }
  return;
}



/* uninitialize_cvtt_module(ModuleInitializationLevel) */

void uninitialize_cvtt_module(void)

{
  return;
}


