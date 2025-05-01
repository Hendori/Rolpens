
undefined8 FuzzerInitialize(void)

{
  return 1;
}



undefined8 FuzzerTestOneInput(uchar *param_1,long param_2)

{
  GENERAL_NAME *a;
  GENERAL_NAME *b;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1;
  a = d2i_GENERAL_NAME((GENERAL_NAME **)0x0,&local_38,param_2);
  local_38 = param_1;
  b = d2i_GENERAL_NAME((GENERAL_NAME **)0x0,&local_38,param_2);
  GENERAL_NAME_cmp(a,b);
  if (a != (GENERAL_NAME *)0x0) {
    GENERAL_NAME_free(a);
  }
  if (b != (GENERAL_NAME *)0x0) {
    GENERAL_NAME_free(b);
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


