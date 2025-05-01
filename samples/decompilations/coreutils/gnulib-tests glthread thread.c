
/* WARNING: Unknown calling convention */

gl_thread_t gl_thread_create(_func_void_ptr_void_ptr *func,void *arg)

{
  int iVar1;
  long in_FS_OFFSET;
  gl_thread_t thread;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_create(&thread,(pthread_attr_t *)0x0,(__start_routine *)func,arg);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return thread;
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


