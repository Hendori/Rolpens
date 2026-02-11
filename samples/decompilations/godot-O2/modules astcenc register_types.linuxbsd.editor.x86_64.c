
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_astcenc_module(ModuleInitializationLevel) */

void initialize_astcenc_module(int param_1)

{
  if (param_1 == 2) {
    Image::_image_compress_astc_func = _compress_astc;
    __image_decompress_astc = _decompress_astc;
  }
  return;
}



/* uninitialize_astcenc_module(ModuleInitializationLevel) */

void uninitialize_astcenc_module(void)

{
  return;
}


