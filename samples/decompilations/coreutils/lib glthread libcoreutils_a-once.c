
/* WARNING: Unknown calling convention */

int glthread_once_singlethreaded(pthread_once_t *once_control)

{
  bool bVar1;
  
  bVar1 = (char)*once_control == '\0';
  if (bVar1) {
    *(undefined1 *)once_control = 0xff;
  }
  return (uint)bVar1;
}



/* WARNING: Unknown calling convention */

int glthread_once_multithreaded(pthread_once_t *once_control,_func_void *init_function)

{
  int iVar1;
  
  iVar1 = pthread_once(once_control,(__init_routine *)init_function);
  if (iVar1 != 0x26) {
    return iVar1;
  }
  if ((char)*once_control == '\0') {
    *(undefined1 *)once_control = 0xff;
    (*init_function)();
  }
  return 0;
}


