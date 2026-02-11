
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_basis_universal_module(ModuleInitializationLevel) */

void initialize_basis_universal_module(int param_1)

{
  if (param_1 != 2) {
    return;
  }
  basis_universal_init();
  Image::basis_universal_packer = basis_universal_packer;
  Image::basis_universal_unpacker = basis_universal_unpacker;
  _basis_universal_unpacker_ptr = basis_universal_unpacker_ptr;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* uninitialize_basis_universal_module(ModuleInitializationLevel) */

void uninitialize_basis_universal_module(int param_1)

{
  if (param_1 == 2) {
    Image::basis_universal_packer = 0;
    Image::basis_universal_unpacker = 0;
    _basis_universal_unpacker_ptr = 0;
  }
  return;
}


