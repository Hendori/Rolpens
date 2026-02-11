
/* jolt_alloc(unsigned long) */

void jolt_alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* jolt_realloc(void*, unsigned long, unsigned long) */

void jolt_realloc(void *param_1,ulong param_2,ulong param_3)

{
  Memory::realloc_static(param_1,param_3,false);
  return;
}



/* jolt_free(void*) */

void jolt_free(void *param_1)

{
  Memory::free_static(param_1,false);
  return;
}



/* jolt_aligned_alloc(unsigned long, unsigned long) */

void jolt_aligned_alloc(ulong param_1,ulong param_2)

{
  Memory::alloc_aligned_static(param_1,param_2);
  return;
}



/* jolt_aligned_free(void*) */

void jolt_aligned_free(void *param_1)

{
  Memory::free_aligned_static(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* jolt_initialize() */

void jolt_initialize(void)

{
  JPH::Allocate = jolt_alloc;
  JPH::Reallocate = jolt_realloc;
  JPH::Free = jolt_free;
  JPH::AlignedAllocate = jolt_aligned_alloc;
  JPH::AlignedFree = jolt_aligned_free;
  JPH::Factory::sInstance = (undefined1 (*) [16])Memory::alloc_static(0x40,false);
  *JPH::Factory::sInstance = (undefined1  [16])0x0;
  JPH::Factory::sInstance[1] = (undefined1  [16])0x0;
  JPH::Factory::sInstance[2] = (undefined1  [16])0x0;
  JPH::Factory::sInstance[3] = (undefined1  [16])0x0;
  JPH::RegisterTypesInternal(0x20050201);
  JoltCustomRayShape::register_type();
  JoltCustomUserDataShape::register_type();
  JoltCustomDoubleSidedShape::register_type();
  JoltGroupFilter::instance = (undefined8 *)(*JPH::Allocate)(0x10);
  *JoltGroupFilter::instance = 0x101088;
  *(undefined4 *)(JoltGroupFilter::instance + 1) = 0;
  LOCK();
  *(int *)(JoltGroupFilter::instance + 1) = *(int *)(JoltGroupFilter::instance + 1) + 0xebedded;
  UNLOCK();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* jolt_deinitialize() */

void jolt_deinitialize(void)

{
  long *plVar1;
  
  if (JoltGroupFilter::instance != 0) {
    (*JPH::Free)();
    JoltGroupFilter::instance = 0;
  }
  JPH::UnregisterTypes();
  plVar1 = JPH::Factory::sInstance;
  if (JPH::Factory::sInstance != (long *)0x0) {
    if (JPH::Factory::sInstance[4] != 0) {
      (*JPH::Free)();
    }
    if (*plVar1 != 0) {
      (*JPH::Free)();
    }
    (*JPH::Free)(plVar1);
    JPH::Factory::sInstance = (long *)0x0;
  }
  return;
}


