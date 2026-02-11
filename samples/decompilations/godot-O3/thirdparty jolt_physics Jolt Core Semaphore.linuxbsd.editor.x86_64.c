
/* JPH::Semaphore::Semaphore() */

void __thiscall JPH::Semaphore::Semaphore(Semaphore *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x28));
  *(undefined4 *)(this + 0x58) = 0;
  return;
}



/* JPH::Semaphore::~Semaphore() */

void __thiscall JPH::Semaphore::~Semaphore(Semaphore *this)

{
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x28));
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Semaphore::Release(unsigned int) */

void __thiscall JPH::Semaphore::Release(Semaphore *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  pthread_mutex_t *__mutex;
  long in_FS_OFFSET;
  
  uVar4 = param_1;
  uVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (uVar2 == 0) {
    LOCK();
    *(uint *)(this + 0x58) = *(int *)(this + 0x58) + param_1;
    UNLOCK();
    if (param_1 < 2) {
      std::condition_variable::notify_one();
      pthread_mutex_unlock((pthread_mutex_t *)this);
      return;
    }
    std::condition_variable::notify_all();
    pthread_mutex_unlock((pthread_mutex_t *)this);
    return;
  }
  __mutex = (pthread_mutex_t *)(ulong)uVar2;
  std::__throw_system_error(uVar2);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 == 0) {
    LOCK();
    *(int *)((long)__mutex + 0x58) = *(int *)((long)__mutex + 0x58) - uVar4;
    UNLOCK();
    while (*(int *)((long)__mutex + 0x58) < 0) {
      std::condition_variable::wait((unique_lock *)&__mutex[1].__data);
    }
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(__mutex);
    }
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  std::__throw_system_error(iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Semaphore::Acquire(unsigned int) */

void __thiscall JPH::Semaphore::Acquire(Semaphore *this,uint param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
    std::__throw_system_error(iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(uint *)(this + 0x58) = *(int *)(this + 0x58) - param_1;
  UNLOCK();
  while (*(int *)(this + 0x58) < 0) {
    std::condition_variable::wait((unique_lock *)(this + 0x28));
  }
  if (this != (Semaphore *)0x0) {
    pthread_mutex_unlock((pthread_mutex_t *)this);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::Semaphore::Semaphore() */

void JPH::Semaphore::_GLOBAL__sub_I_Semaphore(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


