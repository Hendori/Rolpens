
bool glthread_once_singlethreaded(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_1 = -1;
  }
  return cVar1 == '\0';
}



int glthread_once_multithreaded(pthread_once_t *param_1,__init_routine *param_2)

{
  int iVar1;
  
  iVar1 = pthread_once(param_1,param_2);
  if (iVar1 != 0x26) {
    return iVar1;
  }
  if ((char)*param_1 == '\0') {
    *(undefined1 *)param_1 = 0xff;
    (*param_2)();
  }
  return 0;
}


