
/* WARNING: Unknown calling convention */

size_t src_to_dest_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool src_to_dest_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *(long *)((long)x + 8) == *(long *)((long)y + 8) && *x == *y;
}



/* WARNING: Unknown calling convention */

void src_to_dest_free(void *x)

{
  free(*(void **)((long)x + 0x10));
  free(x);
  return;
}



/* WARNING: Unknown calling convention */

void forget_created(ino_t ino,dev_t dev)

{
  long lVar1;
  void *__ptr;
  long in_FS_OFFSET;
  Src_to_dest probe;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  probe.name = (char *)0x0;
  probe.st_ino = ino;
  probe.st_dev = dev;
  __ptr = (void *)hash_remove(src_to_dest,&probe);
  if (__ptr != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x10));
    free(__ptr);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

char * src_to_dest_lookup(ino_t ino,dev_t dev)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  Src_to_dest ent;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ent.st_ino = ino;
  ent.st_dev = dev;
  pcVar2 = (char *)hash_lookup(src_to_dest,&ent);
  if (pcVar2 != (char *)0x0) {
    pcVar2 = *(char **)(pcVar2 + 0x10);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

char * remember_copied(char *name,ino_t ino,dev_t dev)

{
  Hash_table *pHVar1;
  ino_t *__ptr;
  ino_t iVar2;
  ino_t *piVar3;
  char *pcVar4;
  
  __ptr = (ino_t *)xmalloc(0x18);
  iVar2 = xstrdup(name);
  *__ptr = ino;
  pHVar1 = src_to_dest;
  __ptr[2] = iVar2;
  __ptr[1] = dev;
  piVar3 = (ino_t *)hash_insert(pHVar1,__ptr);
  if (piVar3 != (ino_t *)0x0) {
    pcVar4 = (char *)0x0;
    if (__ptr != piVar3) {
      free((void *)__ptr[2]);
      free(__ptr);
      pcVar4 = (char *)piVar3[2];
    }
    return pcVar4;
  }
  xalloc_die();
  src_to_dest = (Hash_table *)hash_initialize(0x67,0,0x100000,src_to_dest_compare,src_to_dest_free);
  if (src_to_dest != (Hash_table *)0x0) {
    return (char *)src_to_dest;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_init(void)

{
  src_to_dest = (Hash_table *)hash_initialize(0x67,0,0x100000,src_to_dest_compare,src_to_dest_free);
  if (src_to_dest != (Hash_table *)0x0) {
    return;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


