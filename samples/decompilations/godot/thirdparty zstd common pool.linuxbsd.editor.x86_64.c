
undefined4 * POOL_create(void)

{
  return &g_poolCtx;
}



undefined4 * POOL_create_advanced(void)

{
  return &g_poolCtx;
}



void POOL_free(void)

{
  return;
}



void POOL_joinJobs(void)

{
  return;
}



undefined8 POOL_resize(void)

{
  return 0;
}



void POOL_add(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



undefined8 POOL_tryAdd(undefined8 param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(param_3);
  return 1;
}



long POOL_sizeof(long param_1)

{
  return (ulong)(param_1 != 0) << 2;
}


