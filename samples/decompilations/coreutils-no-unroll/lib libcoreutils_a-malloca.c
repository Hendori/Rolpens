
long mmalloca(ulong param_1)

{
  ulong __size;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  __size = param_1 + 0x20;
  if ((-1 < (long)__size) && (param_1 <= __size)) {
    pvVar1 = malloc(__size);
    if (pvVar1 != (void *)0x0) {
      lVar3 = (((long)pvVar1 + 0x10U & 0xffffffffffffffe0) - (long)pvVar1) + 0x10;
      lVar2 = (long)pvVar1 + lVar3;
      *(char *)(lVar2 + -1) = (char)lVar3;
      return lVar2;
    }
    return 0;
  }
  return 0;
}



void freea(ulong param_1)

{
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_1 & 0x10) == 0) {
    return;
  }
  free((void *)(param_1 - *(byte *)(param_1 - 1)));
  return;
}



void freea_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


