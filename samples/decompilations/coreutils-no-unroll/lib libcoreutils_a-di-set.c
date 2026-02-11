
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



undefined8 di_set_insert(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)malloc(0x10);
    param_1[2] = plVar4;
    if (plVar4 == (long *)0x0) {
      return 0xffffffff;
    }
  }
  else if (param_2 == *plVar4) {
    lVar5 = plVar4[1];
    goto LAB_00100134;
  }
  *plVar4 = param_2;
  plVar1 = (long *)hash_insert(*param_1,plVar4);
  if (plVar1 == (long *)0x0) {
    return 0xffffffff;
  }
  if (plVar4 == plVar1) {
    param_1[2] = 0;
    lVar5 = hash_initialize(0x3fd,0,di_ino_hash,0,0);
    plVar4[1] = lVar5;
  }
  else {
    lVar5 = plVar1[1];
    plVar4[1] = lVar5;
  }
LAB_00100134:
  if (lVar5 == 0) {
    return 0xffffffff;
  }
  if (0x7ffffffffffffffd < param_3 - 1U) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      lVar3 = ino_map_alloc(0x7fffffffffffffff);
      param_1[1] = lVar3;
      if (lVar3 == 0) {
        return 0xffffffff;
      }
    }
    param_3 = ino_map_insert(lVar3,param_3);
    if (param_3 == -1) {
      return 0xffffffff;
    }
  }
  uVar2 = hash_insert_if_absent(lVar5,param_3,0);
  return uVar2;
}



ulong di_set_lookup(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)malloc(0x10);
    param_1[2] = plVar3;
    if (plVar3 == (long *)0x0) {
      return 0xffffffff;
    }
  }
  else if (param_2 == *plVar3) {
    lVar2 = plVar3[1];
    goto LAB_00100262;
  }
  *plVar3 = param_2;
  plVar1 = (long *)hash_insert(*param_1,plVar3);
  if (plVar1 == (long *)0x0) {
    return 0xffffffff;
  }
  if (plVar3 == plVar1) {
    param_1[2] = 0;
    lVar2 = hash_initialize(0x3fd,0,di_ino_hash,0,0);
    plVar3[1] = lVar2;
  }
  else {
    lVar2 = plVar1[1];
    plVar3[1] = lVar2;
  }
LAB_00100262:
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  if (0x7ffffffffffffffd < param_3 - 1U) {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      lVar4 = ino_map_alloc(0x7fffffffffffffff);
      param_1[1] = lVar4;
      if (lVar4 == 0) {
        return 0xffffffff;
      }
    }
    param_3 = ino_map_insert(lVar4,param_3);
    if (param_3 == -1) {
      return 0xffffffff;
    }
  }
  lVar2 = hash_lookup(lVar2,param_3);
  return (ulong)(lVar2 != 0);
}


