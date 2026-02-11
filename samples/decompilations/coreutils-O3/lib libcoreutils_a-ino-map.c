
ulong ino_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 ino_compare(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



long * ino_map_alloc(long param_1)

{
  long *__ptr;
  long lVar1;
  
  __ptr = (long *)malloc(0x18);
  if (__ptr != (long *)0x0) {
    lVar1 = hash_initialize(0x3fd,0,0x100000,ino_compare,free);
    *__ptr = lVar1;
    if (lVar1 != 0) {
      __ptr[1] = param_1;
      __ptr[2] = 0;
      return __ptr;
    }
    free(__ptr);
  }
  return (long *)0x0;
}



void ino_map_free(undefined8 *param_1)

{
  hash_free(*param_1);
  free((void *)param_1[2]);
  free(param_1);
  return;
}



long ino_map_insert(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)malloc(0x10);
    param_1[2] = plVar3;
    if (plVar3 == (long *)0x0) {
      return -1;
    }
  }
  else if (*plVar3 == param_2) {
    return plVar3[1];
  }
  *plVar3 = param_2;
  plVar2 = (long *)hash_insert(*param_1,plVar3);
  if (plVar2 == (long *)0x0) {
    return -1;
  }
  if (plVar3 == plVar2) {
    lVar1 = param_1[1];
    param_1[2] = 0;
    param_1[1] = lVar1 + 1;
    plVar3[1] = lVar1;
    return lVar1;
  }
  lVar1 = plVar2[1];
  plVar3[1] = lVar1;
  return lVar1;
}


