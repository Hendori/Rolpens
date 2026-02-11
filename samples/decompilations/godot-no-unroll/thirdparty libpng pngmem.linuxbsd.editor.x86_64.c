
void png_destroy_png_struct(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 auStack_508 [127];
  code *local_110;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
    puVar4 = auStack_508;
    for (lVar1 = 0x9e; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *param_1 = 0;
    param_1[0x9d] = 0;
    puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)(((int)param_1 -
                         (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x4f0U >>
                        3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (local_110 == (code *)0x0) {
      free(param_1);
    }
    else {
      (*local_110)(auStack_508,param_1);
    }
    png_free_jmpbuf(auStack_508);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * png_calloc(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
      pvVar1 = malloc(param_2);
    }
    else {
      pvVar1 = (void *)(**(code **)(param_1 + 0x3f0))();
    }
    if (pvVar1 != (void *)0x0) {
      pvVar1 = memset(pvVar1,0,param_2);
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of memory");
}



void * png_malloc_base(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 0x3f0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010014a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(param_1 + 0x3f0))();
    return pvVar1;
  }
  pvVar1 = malloc(param_2);
  return pvVar1;
}



void * png_malloc_array(long param_1,int param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  void *pvVar3;
  
  if ((param_2 < 1) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array alloc");
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)param_2;
  __size = SUB168(auVar1 * auVar2,0);
  if ((SUB168(auVar1 * auVar2,8) == 0) && (__size != 0)) {
    if ((param_1 != 0) && (*(code **)(param_1 + 0x3f0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001001a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (void *)(**(code **)(param_1 + 0x3f0))(param_1,__size);
      return pvVar3;
    }
    pvVar3 = malloc(__size);
    return pvVar3;
  }
  return (void *)0x0;
}



void * png_realloc_array(long param_1,void *param_2,int param_3,int param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  void *__dest;
  
  if (((param_4 < 1 || param_5 == 0) || (param_3 < 0)) ||
     ((param_2 == (void *)0x0 && (0 < param_3)))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array realloc");
  }
  if (((param_4 <= 0x7fffffff - param_3) &&
      (auVar1._8_8_ = 0, auVar1._0_8_ = (long)(param_4 + param_3), auVar2._8_8_ = 0,
      auVar2._0_8_ = param_5, __size = SUB168(auVar1 * auVar2,0), SUB168(auVar1 * auVar2,8) == 0))
     && (__size != 0)) {
    if ((param_1 == 0) || (*(code **)(param_1 + 0x3f0) == (code *)0x0)) {
      __dest = malloc(__size);
    }
    else {
      __dest = (void *)(**(code **)(param_1 + 0x3f0))();
    }
    if (__dest != (void *)0x0) {
      if (param_3 != 0) {
        memcpy(__dest,param_2,(long)param_3 * param_5);
      }
      memset((void *)((long)__dest + (long)param_3 * param_5),0,(long)param_4 * param_5);
      return __dest;
    }
  }
  return (void *)0x0;
}



void * png_malloc(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
      pvVar1 = malloc(param_2);
    }
    else {
      pvVar1 = (void *)(**(code **)(param_1 + 0x3f0))();
    }
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of memory");
}



void * png_malloc_default(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    pvVar1 = malloc(param_2);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of Memory");
}



void * png_malloc_warn(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
      pvVar1 = malloc(param_2);
    }
    else {
      pvVar1 = (void *)(**(code **)(param_1 + 0x3f0))();
    }
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
  png_warning(param_1,"Out of memory");
  return (void *)0x0;
}



void png_free(long param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x3f8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001003ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x3f8))();
      return;
    }
    free(param_2);
    return;
  }
  return;
}



void png_free_default(long param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
    return;
  }
  return;
}



void png_set_mem_fn(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 1000) = param_2;
    *(undefined8 *)(param_1 + 0x3f0) = param_3;
    *(undefined8 *)(param_1 + 0x3f8) = param_4;
  }
  return;
}



undefined8 png_get_mem_ptr(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 1000);
  }
  return 0;
}


