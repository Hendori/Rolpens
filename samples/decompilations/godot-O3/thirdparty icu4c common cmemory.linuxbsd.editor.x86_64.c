
undefined1 * uprv_malloc_76_godot(size_t param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 0) {
    return zeroMem;
  }
  if (pAlloc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010001f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(*pAlloc)(pContext,param_1);
    return puVar1;
  }
  puVar1 = (undefined1 *)malloc(param_1);
  return puVar1;
}



undefined1 * uprv_realloc_76_godot(undefined1 *param_1,size_t param_2)

{
  undefined1 *puVar1;
  
  if (param_1 == zeroMem) {
    if (param_2 != 0) {
      if (pAlloc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined1 *)(*pAlloc)(pContext);
        return puVar1;
      }
      puVar1 = (undefined1 *)malloc(param_2);
      return puVar1;
    }
  }
  else {
    if (param_2 != 0) {
      if (pRealloc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined1 *)(*pRealloc)(pContext,param_1,param_2);
        return puVar1;
      }
      puVar1 = (undefined1 *)realloc(param_1,param_2);
      return puVar1;
    }
    if (pFree == (code *)0x0) {
      free(param_1);
    }
    else {
      (*pFree)(pContext,param_1);
    }
  }
  return zeroMem;
}



void uprv_free_76_godot(undefined1 *param_1)

{
  if (param_1 == zeroMem) {
    return;
  }
  if (pFree != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pFree)(pContext,param_1);
    return;
  }
  free(param_1);
  return;
}



void * uprv_calloc_76_godot(long param_1,long param_2)

{
  undefined1 *__s;
  void *pvVar1;
  size_t __size;
  
  __size = param_2 * param_1;
  if (__size == 0) {
    __s = zeroMem;
  }
  else {
    if (pAlloc == (code *)0x0) {
      __s = (undefined1 *)malloc(__size);
    }
    else {
      __s = (undefined1 *)(*pAlloc)(pContext);
    }
    if (__s == (undefined1 *)0x0) {
      return (void *)0x0;
    }
  }
  pvVar1 = memset(__s,0,__size);
  return pvVar1;
}



void u_setMemoryFunctions_76_godot
               (undefined8 param_1,long param_2,long param_3,long param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = pFree;
  lVar2 = pRealloc;
  lVar3 = pAlloc;
  uVar4 = pContext;
  if ((*param_5 < 1) &&
     ((param_3 == 0 || param_4 == 0 ||
      (lVar1 = param_4, lVar2 = param_3, lVar3 = param_2, uVar4 = param_1, param_2 == 0)))) {
    *param_5 = 1;
    return;
  }
  pContext = uVar4;
  pAlloc = lVar3;
  pRealloc = lVar2;
  pFree = lVar1;
  return;
}



undefined8 cmemory_cleanup_76_godot(void)

{
  pContext = 0;
  pAlloc = 0;
  pRealloc = 0;
  pFree = 0;
  return 1;
}


