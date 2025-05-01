
/* WARNING: Unknown calling convention */

size_t ino_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool ino_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

ino_map * ino_map_alloc(size_t next_mapped_ino)

{
  ino_map *__ptr;
  hash_table *phVar1;
  
  __ptr = (ino_map *)malloc(0x18);
  if (__ptr != (ino_map *)0x0) {
    phVar1 = (hash_table *)hash_initialize(0x3fd,0,0x100000,ino_compare,free);
    __ptr->map = phVar1;
    if (phVar1 != (hash_table *)0x0) {
      __ptr->next_mapped_ino = next_mapped_ino;
      __ptr->probe = (ino_map_ent *)0x0;
      return __ptr;
    }
    free(__ptr);
  }
  return (ino_map *)0x0;
}



/* WARNING: Unknown calling convention */

void ino_map_free(ino_map *map)

{
  hash_free(map->map);
  free(map->probe);
  free(map);
  return;
}



/* WARNING: Unknown calling convention */

size_t ino_map_insert(ino_map *im,ino_t ino)

{
  size_t sVar1;
  ino_map_ent *piVar2;
  ino_map_ent *piVar3;
  
  piVar3 = im->probe;
  if (piVar3 == (ino_map_ent *)0x0) {
    piVar3 = (ino_map_ent *)malloc(0x10);
    im->probe = piVar3;
    if (piVar3 == (ino_map_ent *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  else if (piVar3->ino == ino) {
    return piVar3->mapped_ino;
  }
  piVar3->ino = ino;
  piVar2 = (ino_map_ent *)hash_insert(im->map,piVar3);
  if (piVar2 == (ino_map_ent *)0x0) {
    return 0xffffffffffffffff;
  }
  if (piVar3 == piVar2) {
    sVar1 = im->next_mapped_ino;
    im->probe = (ino_map_ent *)0x0;
    im->next_mapped_ino = sVar1 + 1;
    piVar3->mapped_ino = sVar1;
    return sVar1;
  }
  sVar1 = piVar2->mapped_ino;
  piVar3->mapped_ino = sVar1;
  return sVar1;
}


