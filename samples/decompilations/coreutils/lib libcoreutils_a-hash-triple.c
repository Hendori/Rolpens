
/* WARNING: Unknown calling convention */

size_t triple_hash_no_name(void *x,size_t table_size)

{
  return *(ulong *)((long)x + 8) % table_size;
}



/* WARNING: Unknown calling convention */

_Bool triple_compare(void *x,void *y)

{
  undefined1 uVar1;
  
  if (*(long *)((long)x + 0x10) != *(long *)((long)y + 0x10) ||
      *(long *)((long)x + 8) != *(long *)((long)y + 8)) {
    return false;
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = same_name(*x,*y);
  return (_Bool)uVar1;
}


