
/* VHACD::btAlignedAllocDefault(unsigned long, int) */

ulong VHACD::btAlignedAllocDefault(ulong param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (*(code *)sAllocFunc)((long)(param_2 + -1) + 8 + param_1);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 7 + (long)param_2 & -(long)param_2;
    *(long *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
  return 0;
}



/* VHACD::btAlignedFreeDefault(void*) */

void VHACD::btAlignedFreeDefault(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010004d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)sFreeFunc)(*(undefined8 *)((long)param_1 + -8));
    return;
  }
  return;
}



/* VHACD::btFreeDefault(void*) */

void VHACD::btFreeDefault(void *param_1)

{
  free(param_1);
  return;
}



/* VHACD::btAllocDefault(unsigned long) */

void VHACD::btAllocDefault(ulong param_1)

{
  malloc(param_1);
  return;
}



/* VHACD::btAlignedAllocSetCustomAligned(void* (*)(unsigned long, int), void (*)(void*)) */

void VHACD::btAlignedAllocSetCustomAligned
               (_func_void_ptr_ulong_int *param_1,_func_void_void_ptr *param_2)

{
  if (param_1 == (_func_void_ptr_ulong_int *)0x0) {
    param_1 = btAlignedAllocDefault;
  }
  if (param_2 == (_func_void_void_ptr *)0x0) {
    param_2 = btAlignedFreeDefault;
  }
  sAlignedAllocFunc = param_1;
  sAlignedFreeFunc = param_2;
  return;
}



/* VHACD::btAlignedAllocSetCustom(void* (*)(unsigned long), void (*)(void*)) */

void VHACD::btAlignedAllocSetCustom(_func_void_ptr_ulong *param_1,_func_void_void_ptr *param_2)

{
  if (param_1 == (_func_void_ptr_ulong *)0x0) {
    param_1 = btAllocDefault;
  }
  if (param_2 == (_func_void_void_ptr *)0x0) {
    param_2 = btFreeDefault;
  }
  sAllocFunc = param_1;
  sFreeFunc = param_2;
  return;
}



/* VHACD::btAlignedAllocInternal(unsigned long, int) */

void VHACD::btAlignedAllocInternal(ulong param_1,int param_2)

{
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    /* WARNING: Could not recover jumptable at 0x001000eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)sAlignedAllocFunc)();
  return;
}



/* VHACD::btAlignedFreeInternal(void*) */

void VHACD::btAlignedFreeInternal(void *param_1)

{
  if (param_1 != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00100110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)sAlignedFreeFunc)();
    return;
  }
  return;
}


