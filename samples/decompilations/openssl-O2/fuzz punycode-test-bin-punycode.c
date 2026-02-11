
undefined8 FuzzerInitialize(void)

{
  return 1;
}



undefined8 FuzzerTestOneInput(void *param_1,size_t param_2)

{
  void *__dest;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [64];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x10;
  __dest = CRYPTO_malloc((int)param_2 + 1,"fuzz/punycode.c",0x1d);
  if (__dest != (void *)0x0) {
    ossl_punycode_decode(param_1,param_2,local_88,&local_8c);
    memcpy(__dest,param_1,param_2);
    *(undefined1 *)((long)__dest + param_2) = 0;
    ossl_a2ulabel(__dest,local_48,0x10);
    CRYPTO_free(__dest);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  return;
}


