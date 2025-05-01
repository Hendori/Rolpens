
/* WARNING: Unknown calling convention */

void record_file(Hash_table *ht,char *file,stat *stats)

{
  long lVar1;
  __dev_t _Var2;
  __ino_t _Var3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  
  if (ht == (Hash_table *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)xmalloc(0x18);
  uVar5 = xstrdup(file);
  _Var2 = stats->st_dev;
  _Var3 = stats->st_ino;
  *puVar4 = uVar5;
  puVar4[1] = _Var3;
  puVar4[2] = _Var2;
  puVar6 = (undefined8 *)hash_insert();
  if (puVar6 != (undefined8 *)0x0) {
    if (puVar4 != puVar6) {
      triple_free(puVar4);
      return;
    }
    return;
  }
  xalloc_die();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (ht != (Hash_table *)0x0) {
    hash_lookup();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool seen_file(Hash_table *ht,char *file,stat *stats)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  _Bool _Var3;
  F_triple new_ent;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = false;
  if (ht != (Hash_table *)0x0) {
    new_ent.st_dev = stats->st_dev;
    new_ent.st_ino = stats->st_ino;
    new_ent.name = file;
    lVar2 = hash_lookup(ht,&new_ent);
    _Var3 = lVar2 != 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


