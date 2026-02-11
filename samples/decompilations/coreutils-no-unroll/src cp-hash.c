
ulong src_to_dest_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 src_to_dest_compare(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] ^ param_2[1] | *param_1 ^ *param_2;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 == 0);
}



void src_to_dest_free(void *param_1)

{
  free(*(void **)((long)param_1 + 0x10));
  free(param_1);
  return;
}



void forget_created(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  local_28 = param_1;
  local_20 = param_2;
  __ptr = (void *)hash_remove(src_to_dest,&local_28);
  if (__ptr != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x10));
    free(__ptr);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long src_to_dest_lookup(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_1;
  local_20 = param_2;
  lVar1 = hash_lookup(src_to_dest,&local_28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */

long remember_copied(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  __ptr = (undefined8 *)xmalloc(0x18);
  uVar2 = xstrdup(param_1);
  *__ptr = param_2;
  uVar1 = src_to_dest;
  __ptr[2] = uVar2;
  __ptr[1] = param_3;
  puVar3 = (undefined8 *)hash_insert(uVar1,__ptr);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    if (__ptr != puVar3) {
      free((void *)__ptr[2]);
      free(__ptr);
      lVar4 = puVar3[2];
    }
    return lVar4;
  }
  xalloc_die();
  src_to_dest = hash_initialize(0x67,0,0x100000,src_to_dest_compare,src_to_dest_free);
  if (src_to_dest != 0) {
    return src_to_dest;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void hash_init(void)

{
  src_to_dest = hash_initialize(0x67,0,0x100000,src_to_dest_compare,src_to_dest_free);
  if (src_to_dest != 0) {
    return;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


