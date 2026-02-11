
undefined8 ktxMemStream_skip(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x40), lVar1 != 0)) {
    uVar2 = 7;
    uVar3 = param_2 + *(long *)(lVar1 + 0x20);
    if ((*(long *)(lVar1 + 0x20) <= (long)uVar3) &&
       ((uVar3 & 0xffffffff) <= *(ulong *)(lVar1 + 0x18))) {
      *(ulong *)(lVar1 + 0x20) = uVar3;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xb;
}



undefined8 ktxMemStream_getpos(long param_1,undefined8 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
    return 0;
  }
  return 0xb;
}



undefined8 ktxMemStream_setpos(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 10;
    if (param_2 <= *(long *)(*(long *)(param_1 + 0x40) + 0x10)) {
      *(long *)(*(long *)(param_1 + 0x40) + 0x20) = param_2;
      return 0;
    }
  }
  return uVar1;
}



undefined8 ktxMemStream_getsize(long param_1,undefined8 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
    return 0;
  }
  return 0xb;
}



undefined8 ktxMemStream_read(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 == (long *)0x0) {
      uVar4 = 0xb;
    }
    else {
      lVar3 = plVar2[4];
      uVar4 = 7;
      uVar1 = lVar3 + param_3;
      if ((lVar3 <= (long)uVar1) && ((uVar1 & 0xffffffff) <= (ulong)plVar2[3])) {
        lVar5 = *plVar2;
        if (lVar5 == 0) {
          lVar5 = plVar2[1];
        }
        memcpy(param_2,(void *)(lVar5 + lVar3),param_3);
        plVar2[4] = uVar1;
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 0xb;
}



undefined8 ktxMemStream_write(long param_1,void *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  void *__ptr;
  size_t __n;
  ulong __size;
  long lVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    return 0xb;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    uVar3 = 0xb;
  }
  else {
    uVar3 = 10;
    if (*plVar2 == 0) {
      __n = param_3 * param_4;
      lVar4 = plVar2[4];
      uVar3 = 4;
      uVar1 = lVar4 + __n;
      if (lVar4 <= (long)uVar1) {
        __size = plVar2[2];
        __ptr = (void *)plVar2[1];
        if (__size < uVar1) {
          if (__size == 0) {
            __size = 0x100;
          }
          do {
            if (uVar1 <= __size) goto LAB_001001d1;
            bVar5 = __size <= __size * 2;
            __size = __size * 2;
          } while (bVar5);
          __size = 0xffffffffffffffff;
LAB_001001d1:
          if (__ptr == (void *)0x0) {
            __ptr = malloc(__size);
          }
          else {
            __ptr = realloc(__ptr,__size);
          }
          plVar2[1] = (long)__ptr;
          if (__ptr == (void *)0x0) {
            *(undefined1 (*) [16])(plVar2 + 2) = (undefined1  [16])0x0;
            return 0xd;
          }
          plVar2[2] = __size;
          lVar4 = plVar2[4];
        }
        memcpy((void *)((long)__ptr + lVar4),param_2,__n);
        lVar4 = __n + plVar2[4];
        plVar2[4] = lVar4;
        if (plVar2[3] < lVar4) {
          plVar2[3] = lVar4;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



void ktxMemStream_destruct(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x60) != '\0') {
    free(*(void **)((long)__ptr + 8));
  }
  free(__ptr);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



undefined8 ktxMemStream_getdata(long param_1,undefined8 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
    return 0;
  }
  return 0xb;
}



void ktxMemStream_setup(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 7) = 2;
  *param_1 = ktxMemStream_read;
  param_1[1] = 0x100000;
  param_1[2] = ktxMemStream_write;
  param_1[3] = ktxMemStream_getpos;
  param_1[6] = ktxMemStream_destruct;
  param_1[4] = ktxMemStream_setpos;
  param_1[5] = ktxMemStream_getsize;
  return;
}



undefined8 ktxMemStream_construct(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xb;
  }
  puVar1 = (undefined8 *)malloc(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[4] = 0;
    *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
    pvVar2 = malloc(0x100);
    puVar1[1] = pvVar2;
    if (pvVar2 != (void *)0x0) {
      param_1[8] = puVar1;
      puVar1[2] = 0x100;
      *(undefined1 *)(param_1 + 0xc) = param_2;
      *param_1 = ktxMemStream_read;
      param_1[1] = 0x100000;
      *(undefined4 *)(param_1 + 7) = 2;
      param_1[2] = ktxMemStream_write;
      param_1[3] = ktxMemStream_getpos;
      param_1[6] = ktxMemStream_destruct;
      param_1[4] = ktxMemStream_setpos;
      param_1[5] = ktxMemStream_getsize;
      return 0;
    }
  }
  return 0xd;
}



undefined8 ktxMemStream_construct_ro(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != (undefined8 *)0x0)) {
    plVar1 = (long *)malloc(0x28);
    if (plVar1 == (long *)0x0) {
      uVar2 = 0xd;
    }
    else {
      *plVar1 = param_2;
      plVar1[4] = 0;
      plVar1[2] = param_3;
      plVar1[3] = param_3;
      plVar1[1] = 0;
      param_1[8] = plVar1;
      *(undefined4 *)(param_1 + 7) = 2;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *param_1 = ktxMemStream_read;
      param_1[1] = 0x100000;
      param_1[2] = ktxMemStream_write;
      param_1[3] = ktxMemStream_getpos;
      param_1[6] = ktxMemStream_destruct;
      uVar2 = 0;
      param_1[4] = ktxMemStream_setpos;
      param_1[5] = ktxMemStream_getsize;
    }
    return uVar2;
  }
  return 0xb;
}


