
/* embree::ConditionSys::ConditionSys() */

void __thiscall embree::ConditionSys::ConditionSys(ConditionSys *this)

{
  int iVar1;
  pthread_cond_t *__cond;
  
  __cond = (pthread_cond_t *)operator_new(0x30);
  iVar1 = pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  if (iVar1 == 0) {
    *(pthread_cond_t **)this = __cond;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::ConditionSys::~ConditionSys() */

void __thiscall embree::ConditionSys::~ConditionSys(ConditionSys *this)

{
  pthread_cond_t *__cond;
  
  __cond = *(pthread_cond_t **)this;
  if (__cond != (pthread_cond_t *)0x0) {
    pthread_cond_destroy(__cond);
    operator_delete(__cond,0x30);
    return;
  }
  return;
}



/* embree::ConditionSys::wait(embree::MutexSys&) */

void __thiscall embree::ConditionSys::wait(ConditionSys *this,MutexSys *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(*(pthread_cond_t **)this,*(pthread_mutex_t **)param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::ConditionSys::notify_all() */

void __thiscall embree::ConditionSys::notify_all(ConditionSys *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast(*(pthread_cond_t **)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::ConditionSys::ConditionSys() [clone .cold] */

void __thiscall embree::ConditionSys::ConditionSys(ConditionSys *this)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::ConditionSys::wait(embree::MutexSys&) [clone .cold] */

void embree::ConditionSys::wait(MutexSys *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::ConditionSys::notify_all() [clone .cold] */

void embree::ConditionSys::notify_all(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


