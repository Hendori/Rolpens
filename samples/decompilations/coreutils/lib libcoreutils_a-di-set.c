
/* WARNING: Unknown calling convention */

size_t di_ent_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool di_ent_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

size_t di_ino_hash(void *i,size_t table_size)

{
  return (ulong)i % table_size;
}



/* WARNING: Unknown calling convention */

void di_ent_free(void *v)

{
  hash_free(*(undefined8 *)((long)v + 8));
  free(v);
  return;
}



/* WARNING: Unknown calling convention */

hash_table * map_device(di_set *dis,dev_t dev)

{
  di_ent *pdVar1;
  di_ent *pdVar2;
  hash_table *phVar3;
  
  pdVar2 = dis->probe;
  if (pdVar2 == (di_ent *)0x0) {
    pdVar2 = (di_ent *)malloc(0x10);
    dis->probe = pdVar2;
    if (pdVar2 == (di_ent *)0x0) {
      return (hash_table *)0x0;
    }
  }
  else if (pdVar2->dev == dev) {
    return pdVar2->ino_set;
  }
  pdVar2->dev = dev;
  pdVar1 = (di_ent *)hash_insert(dis->dev_map,pdVar2);
  if (pdVar1 == (di_ent *)0x0) {
    return (hash_table *)0x0;
  }
  if (pdVar2 == pdVar1) {
    dis->probe = (di_ent *)0x0;
    phVar3 = (hash_table *)hash_initialize(0x3fd,0,di_ino_hash,0,0);
    pdVar2->ino_set = phVar3;
    return phVar3;
  }
  phVar3 = pdVar1->ino_set;
  pdVar2->ino_set = phVar3;
  return phVar3;
}



/* WARNING: Unknown calling convention */

di_set * di_set_alloc(void)

{
  di_set *__ptr;
  hash_table *phVar1;
  
  __ptr = (di_set *)malloc(0x18);
  if (__ptr != (di_set *)0x0) {
    phVar1 = (hash_table *)hash_initialize(0xb,0,0x100000,di_ent_compare,di_ent_free);
    __ptr->dev_map = phVar1;
    if (phVar1 != (hash_table *)0x0) {
      __ptr->ino_map = (ino_map *)0x0;
      __ptr->probe = (di_ent *)0x0;
      return __ptr;
    }
    free(__ptr);
  }
  return (di_set *)0x0;
}



/* WARNING: Unknown calling convention */

void di_set_free(di_set *dis)

{
  hash_free(dis->dev_map);
  if (dis->ino_map != (ino_map *)0x0) {
    ino_map_free();
  }
  free(dis->probe);
  free(dis);
  return;
}



/* WARNING: Unknown calling convention */

int di_set_insert(di_set *dis,dev_t dev,ino_t ino)

{
  int iVar1;
  hash_table *phVar2;
  ino_map *piVar3;
  
  phVar2 = map_device(dis,dev);
  if (phVar2 == (hash_table *)0x0) {
    return -1;
  }
  if (0x7ffffffffffffffd < ino - 1) {
    piVar3 = dis->ino_map;
    if (piVar3 == (ino_map *)0x0) {
      piVar3 = (ino_map *)ino_map_alloc(0x7fffffffffffffff);
      dis->ino_map = piVar3;
      if (piVar3 == (ino_map *)0x0) {
        return -1;
      }
    }
    ino = ino_map_insert(piVar3,ino);
    if (ino == 0xffffffffffffffff) {
      return -1;
    }
  }
  iVar1 = hash_insert_if_absent(phVar2,ino,0);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int di_set_lookup(di_set *dis,dev_t dev,ino_t ino)

{
  hash_table *phVar1;
  long lVar2;
  ino_map *piVar3;
  
  phVar1 = map_device(dis,dev);
  if (phVar1 == (hash_table *)0x0) {
    return -1;
  }
  if (0x7ffffffffffffffd < ino - 1) {
    piVar3 = dis->ino_map;
    if (piVar3 == (ino_map *)0x0) {
      piVar3 = (ino_map *)ino_map_alloc(0x7fffffffffffffff);
      dis->ino_map = piVar3;
      if (piVar3 == (ino_map *)0x0) {
        return -1;
      }
    }
    ino = ino_map_insert(piVar3,ino);
    if (ino == 0xffffffffffffffff) {
      return -1;
    }
  }
  lVar2 = hash_lookup(phVar1,ino);
  return (int)(lVar2 != 0);
}


