
ulong di_ent_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 di_ent_compare(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



ulong di_ino_hash(ulong param_1,ulong param_2)

{
  return param_1 % param_2;
}



void di_ent_free(void *param_1)

{
  hash_free(*(undefined8 *)((long)param_1 + 8));
  free(param_1);
  return;
}



long map_device(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[2];
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)malloc(0x10);
    param_1[2] = plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
  else if (*plVar2 == param_2) {
    return plVar2[1];
  }
  *plVar2 = param_2;
  plVar1 = (long *)hash_insert(*param_1,plVar2);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (plVar2 == plVar1) {
    param_1[2] = 0;
    lVar3 = hash_initialize(0x3fd,0,di_ino_hash,0,0);
    plVar2[1] = lVar3;
    return lVar3;
  }
  lVar3 = plVar1[1];
  plVar2[1] = lVar3;
  return lVar3;
}



long * di_set_alloc(void)

{
  long *__ptr;
  long lVar1;
  
  __ptr = (long *)malloc(0x18);
  if (__ptr != (long *)0x0) {
    lVar1 = hash_initialize(0xb,0,0x100000,di_ent_compare,di_ent_free);
    *__ptr = lVar1;
    if (lVar1 != 0) {
      *(undefined1 (*) [16])(__ptr + 1) = (undefined1  [16])0x0;
      return __ptr;
    }
    free(__ptr);
  }
  return (long *)0x0;
}



void di_set_free(undefined8 *param_1)

{
  hash_free(*param_1);
  if (param_1[1] != 0) {
    ino_map_free();
  }
  free((void *)param_1[2]);
  free(param_1);
  return;
}



undefined8 di_set_insert(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = map_device();
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (0x7ffffffffffffffd < param_3 - 1U) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      lVar3 = ino_map_alloc(0x7fffffffffffffff);
      *(long *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        return 0xffffffff;
      }
    }
    param_3 = ino_map_insert(lVar3,param_3);
    if (param_3 == -1) {
      return 0xffffffff;
    }
  }
  uVar2 = hash_insert_if_absent(lVar1,param_3,0);
  return uVar2;
}



ulong di_set_lookup(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = map_device();
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (0x7ffffffffffffffd < param_3 - 1U) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == 0) {
      lVar2 = ino_map_alloc(0x7fffffffffffffff);
      *(long *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        return 0xffffffff;
      }
    }
    param_3 = ino_map_insert(lVar2,param_3);
    if (param_3 == -1) {
      return 0xffffffff;
    }
  }
  lVar1 = hash_lookup(lVar1,param_3);
  return (ulong)(lVar1 != 0);
}


