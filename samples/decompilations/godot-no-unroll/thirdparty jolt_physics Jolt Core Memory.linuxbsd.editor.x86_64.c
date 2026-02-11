
/* JPH::FreeImpl(void*) */

void JPH::FreeImpl(void *param_1)

{
  free(param_1);
  return;
}



/* JPH::AlignedAllocateImpl(unsigned long, unsigned long) */

void * JPH::AlignedAllocateImpl(ulong param_1,ulong param_2)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = posix_memalign(&local_18,param_2,param_1);
  pvVar2 = (void *)0x0;
  if (iVar1 == 0) {
    pvVar2 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ReallocateImpl(void*, unsigned long, unsigned long) */

void JPH::ReallocateImpl(void *param_1,ulong param_2,ulong param_3)

{
  realloc(param_1,param_3);
  return;
}



/* JPH::AllocateImpl(unsigned long) */

void JPH::AllocateImpl(ulong param_1)

{
  malloc(param_1);
  return;
}



/* JPH::AlignedFreeImpl(void*) */

void JPH::AlignedFreeImpl(void *param_1)

{
  free(param_1);
  return;
}



/* JPH::RegisterDefaultAllocator() */

void JPH::RegisterDefaultAllocator(void)

{
  Allocate = AllocateImpl;
  Reallocate = ReallocateImpl;
  Free = 0x100000;
  AlignedAllocate = AlignedAllocateImpl;
  AlignedFree = AlignedFreeImpl;
  return;
}



/* JPH::Allocate */

void JPH::_GLOBAL__sub_I_Allocate(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


