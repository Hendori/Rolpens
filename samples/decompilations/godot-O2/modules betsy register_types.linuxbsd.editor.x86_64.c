
/* initialize_betsy_module(ModuleInitializationLevel) */

void initialize_betsy_module(int param_1)

{
  if (param_1 == 2) {
    Image::_image_compress_bptc_rd_func = _betsy_compress_bptc;
    Image::_image_compress_bc_rd_func = _betsy_compress_s3tc;
  }
  return;
}



/* uninitialize_betsy_module(ModuleInitializationLevel) */

void uninitialize_betsy_module(int param_1)

{
  if (param_1 != 2) {
    return;
  }
  free_device();
  return;
}


