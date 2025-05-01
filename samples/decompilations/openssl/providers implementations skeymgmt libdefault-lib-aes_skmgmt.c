
undefined8 aes_export(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) != 2) {
    return 0;
  }
  uVar1 = generic_export();
  return uVar1;
}



long aes_import(void)

{
  long lVar1;
  
  lVar1 = generic_import();
  if (lVar1 != 0) {
    if (((*(ulong *)(lVar1 + 0x18) & 0xfffffffffffffff7) == 0x10) ||
       (*(ulong *)(lVar1 + 0x18) == 0x20)) {
      *(undefined4 *)(lVar1 + 8) = 2;
      return lVar1;
    }
    generic_free(lVar1);
  }
  return 0;
}


