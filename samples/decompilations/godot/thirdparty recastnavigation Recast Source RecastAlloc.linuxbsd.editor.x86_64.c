
/* rcFreeDefault(void*) */

void rcFreeDefault(void *param_1)

{
  free(param_1);
  return;
}



/* rcAllocDefault(unsigned long, rcAllocHint) */

void rcAllocDefault(size_t param_1)

{
  malloc(param_1);
  return;
}



/* rcAllocSetCustom(void* (*)(unsigned long, rcAllocHint), void (*)(void*)) */

void rcAllocSetCustom(_func_void_ptr_ulong_rcAllocHint *param_1,_func_void_void_ptr *param_2)

{
  if (param_1 == (_func_void_ptr_ulong_rcAllocHint *)0x0) {
    param_1 = rcAllocDefault;
  }
  if (param_2 == (_func_void_void_ptr *)0x0) {
    param_2 = rcFreeDefault;
  }
  sRecastAllocFunc = param_1;
  sRecastFreeFunc = param_2;
  return;
}



/* rcAlloc(unsigned long, rcAllocHint) */

void rcAlloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)sRecastAllocFunc)();
  return;
}



/* rcFree(void*) */

void rcFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)sRecastFreeFunc)();
    return;
  }
  return;
}


