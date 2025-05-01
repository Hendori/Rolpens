
/* WARNING: Unknown calling convention */

size_t triple_hash(void *x,size_t table_size)

{
  ulong uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = hash_pjw(*x);
  return (uVar1 ^ *(ulong *)((long)x + 8)) % table_size;
}



/* WARNING: Unknown calling convention */

_Bool triple_compare_ino_str(void *x,void *y)

{
  int iVar1;
  
  if (*(long *)((long)x + 0x10) == *(long *)((long)y + 0x10) &&
      *(long *)((long)x + 8) == *(long *)((long)y + 8)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    iVar1 = strcmp(*x,*y);
    return iVar1 == 0;
  }
  return false;
}



/* WARNING: Unknown calling convention */

void triple_free(void *x)

{
                    /* WARNING: Load size is inaccurate */
  free(*x);
  free(x);
  return;
}


