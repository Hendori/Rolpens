
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_etcpak_module(ModuleInitializationLevel) */

void initialize_etcpak_module(int param_1)

{
  if (param_1 == 2) {
    Image::_image_compress_etc1_func = _compress_etc1;
    Image::_image_compress_etc2_func = _compress_etc2;
    Image::_image_compress_bc_func = _compress_bc;
    Image::_image_decompress_etc1 = _decompress_etc;
    __image_decompress_etc2 = _decompress_etc;
  }
  return;
}



/* uninitialize_etcpak_module(ModuleInitializationLevel) */

void uninitialize_etcpak_module(void)

{
  return;
}


