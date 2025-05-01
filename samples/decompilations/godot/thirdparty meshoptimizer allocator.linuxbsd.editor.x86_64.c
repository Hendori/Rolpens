
void meshopt_setAllocator(undefined *param_1,undefined *param_2)

{
  meshopt_Allocator::StorageT<void>::allocate = param_1;
  meshopt_Allocator::StorageT<void>::deallocate = param_2;
  return;
}


