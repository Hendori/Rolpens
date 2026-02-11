
pthread_t gl_thread_create(__start_routine *param_1,void *param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  pthread_t local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,param_1,param_2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gl_thread_create_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


