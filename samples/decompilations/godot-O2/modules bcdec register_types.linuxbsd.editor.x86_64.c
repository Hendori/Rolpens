
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_bcdec_module(ModuleInitializationLevel) */

void initialize_bcdec_module(int param_1)

{
  if (param_1 == 2) {
    Image::_image_decompress_bc = image_decompress_bcdec;
    __image_decompress_bptc = image_decompress_bcdec;
  }
  return;
}



/* uninitialize_bcdec_module(ModuleInitializationLevel) */

void uninitialize_bcdec_module(void)

{
  return;
}


