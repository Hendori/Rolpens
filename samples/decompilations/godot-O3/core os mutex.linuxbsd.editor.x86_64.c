
/* MutexImpl<std::recursive_mutex>::lock() const */

void __thiscall MutexImpl<std::recursive_mutex>::lock(MutexImpl<std::recursive_mutex> *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* MutexImpl<std::recursive_mutex>::unlock() const */

void __thiscall MutexImpl<std::recursive_mutex>::unlock(MutexImpl<std::recursive_mutex> *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}



/* MutexImpl<std::recursive_mutex>::try_lock() const */

bool __thiscall MutexImpl<std::recursive_mutex>::try_lock(MutexImpl<std::recursive_mutex> *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}



/* MutexImpl<std::mutex>::lock() const */

void __thiscall MutexImpl<std::mutex>::lock(MutexImpl<std::mutex> *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* MutexImpl<std::mutex>::unlock() const */

void __thiscall MutexImpl<std::mutex>::unlock(MutexImpl<std::mutex> *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}



/* MutexImpl<std::mutex>::try_lock() const */

bool __thiscall MutexImpl<std::mutex>::try_lock(MutexImpl<std::mutex> *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}



/* MutexLock<MutexImpl<std::recursive_mutex> >::MutexLock(MutexImpl<std::recursive_mutex> const&) */

void __thiscall
MutexLock<MutexImpl<std::recursive_mutex>>::MutexLock
          (MutexLock<MutexImpl<std::recursive_mutex>> *this,MutexImpl *param_1)

{
  int iVar1;
  
  *(MutexImpl **)this = param_1;
  this[8] = (MutexLock<MutexImpl<std::recursive_mutex>>)0x0;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar1 == 0) {
    this[8] = (MutexLock<MutexImpl<std::recursive_mutex>>)0x1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* MutexLock<MutexImpl<std::recursive_mutex> >::temp_relock() const */

void __thiscall
MutexLock<MutexImpl<std::recursive_mutex>>::temp_relock
          (MutexLock<MutexImpl<std::recursive_mutex>> *this)

{
  int iVar1;
  
  if (*(pthread_mutex_t **)this == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(1);
  }
  if (this[8] == (MutexLock<MutexImpl<std::recursive_mutex>>)0x0) {
    iVar1 = pthread_mutex_lock(*(pthread_mutex_t **)this);
    if (iVar1 == 0) {
      this[8] = (MutexLock<MutexImpl<std::recursive_mutex>>)0x1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* MutexLock<MutexImpl<std::recursive_mutex> >::temp_unlock() const */

void __thiscall
MutexLock<MutexImpl<std::recursive_mutex>>::temp_unlock
          (MutexLock<MutexImpl<std::recursive_mutex>> *this)

{
  if (this[8] != (MutexLock<MutexImpl<std::recursive_mutex>>)0x0) {
    if (*(pthread_mutex_t **)this != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t **)this);
      this[8] = (MutexLock<MutexImpl<std::recursive_mutex>>)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(1);
}



/* MutexLock<MutexImpl<std::mutex> >::MutexLock(MutexImpl<std::mutex> const&) */

void __thiscall
MutexLock<MutexImpl<std::mutex>>::MutexLock
          (MutexLock<MutexImpl<std::mutex>> *this,MutexImpl *param_1)

{
  int iVar1;
  
  *(MutexImpl **)this = param_1;
  this[8] = (MutexLock<MutexImpl<std::mutex>>)0x0;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar1 == 0) {
    this[8] = (MutexLock<MutexImpl<std::mutex>>)0x1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* MutexLock<MutexImpl<std::mutex> >::temp_relock() const */

void __thiscall
MutexLock<MutexImpl<std::mutex>>::temp_relock(MutexLock<MutexImpl<std::mutex>> *this)

{
  int iVar1;
  
  if (*(pthread_mutex_t **)this == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(1);
  }
  if (this[8] == (MutexLock<MutexImpl<std::mutex>>)0x0) {
    iVar1 = pthread_mutex_lock(*(pthread_mutex_t **)this);
    if (iVar1 == 0) {
      this[8] = (MutexLock<MutexImpl<std::mutex>>)0x1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* MutexLock<MutexImpl<std::mutex> >::temp_unlock() const */

void __thiscall
MutexLock<MutexImpl<std::mutex>>::temp_unlock(MutexLock<MutexImpl<std::mutex>> *this)

{
  if (this[8] != (MutexLock<MutexImpl<std::mutex>>)0x0) {
    if (*(pthread_mutex_t **)this != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t **)this);
      this[8] = (MutexLock<MutexImpl<std::mutex>>)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(1);
}



/* WARNING: Control flow encountered bad instruction data */
/* MutexLock<MutexImpl<std::mutex> >::MutexLock(MutexImpl<std::mutex> const&) */

void MutexLock<MutexImpl<std::mutex>>::MutexLock(MutexImpl *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MutexLock<MutexImpl<std::recursive_mutex> >::MutexLock(MutexImpl<std::recursive_mutex> const&) */

void MutexLock<MutexImpl<std::recursive_mutex>>::MutexLock(MutexImpl *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


