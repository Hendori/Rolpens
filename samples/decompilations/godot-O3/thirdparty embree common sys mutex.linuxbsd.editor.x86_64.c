
/* embree::MutexSys::MutexSys() */

void __thiscall embree::MutexSys::MutexSys(MutexSys *this)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)operator_new(0x28);
  *(pthread_mutex_t **)this = __mutex;
  iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::MutexSys::~MutexSys() */

void __thiscall embree::MutexSys::~MutexSys(MutexSys *this)

{
  pthread_mutex_destroy(*(pthread_mutex_t **)this);
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this,0x28);
    return;
  }
  return;
}



/* embree::MutexSys::lock() */

void __thiscall embree::MutexSys::lock(MutexSys *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(*(pthread_mutex_t **)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::MutexSys::try_lock() */

bool __thiscall embree::MutexSys::try_lock(MutexSys *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock(*(pthread_mutex_t **)this);
  return iVar1 == 0;
}



/* embree::MutexSys::unlock() */

void __thiscall embree::MutexSys::unlock(MutexSys *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(*(pthread_mutex_t **)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::MutexSys::MutexSys() [clone .cold] */

void __thiscall embree::MutexSys::MutexSys(MutexSys *this)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::MutexSys::lock() [clone .cold] */

void embree::MutexSys::lock(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::MutexSys::unlock() [clone .cold] */

void embree::MutexSys::unlock(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


