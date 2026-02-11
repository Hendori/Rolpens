
void umtx_init(void)

{
  icu_76_godot::(anonymous_namespace)::initMutex = umtx_init::{lambda()#1}::operator()()::storage;
  umtx_init::{lambda()#1}::operator()()::storage._32_8_ = 0;
  umtx_init::{lambda()#1}::operator()()::storage._0_16_ = (undefined1  [16])0x0;
  umtx_init::{lambda()#1}::operator()()::storage._16_16_ = (undefined1  [16])0x0;
  std::condition_variable::condition_variable
            ((condition_variable *)umtx_init::{lambda()#2}::operator()()::storage);
  icu_76_godot::(anonymous_namespace)::initCondition =
       umtx_init::{lambda()#2}::operator()()::storage;
  ucln_common_registerCleanup_76_godot(0x1c,umtx_cleanup);
  return;
}



undefined8 umtx_cleanup(void)

{
  long lVar1;
  
  std::condition_variable::~condition_variable(icu_76_godot::(anonymous_namespace)::initCondition);
  while (icu_76_godot::UMutex::gListHead != 0) {
    LOCK();
    *(undefined8 *)(icu_76_godot::UMutex::gListHead + 0x28) = 0;
    UNLOCK();
    lVar1 = *(long *)(icu_76_godot::UMutex::gListHead + 0x30);
    *(undefined8 *)(icu_76_godot::UMutex::gListHead + 0x30) = 0;
    icu_76_godot::UMutex::gListHead = lVar1;
  }
  icu_76_godot::UMutex::gListHead = 0;
  icu_76_godot::(anonymous_namespace)::pInitFlag =
       (undefined *)&icu_76_godot::(anonymous_namespace)::initFlag;
  icu_76_godot::(anonymous_namespace)::initFlag = 0;
  return 1;
}



/* icu_76_godot::UMutex::getMutex() */

long __thiscall icu_76_godot::UMutex::getMutex(UMutex *this)

{
  long lVar1;
  long lVar2;
  pthread_mutex_t *__mutex;
  undefined *__once_control;
  UMutex *pUVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  __once_control = (anonymous_namespace)::pInitFlag;
  lVar2 = lRam0000000000100150;
  lVar1 = lRam000000000010013e;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(this + 0x28);
  if (lVar5 != 0) {
LAB_00100108:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar5;
  }
  local_38 = 0x100000;
  *(undefined8 **)(in_FS_OFFSET + lRam000000000010013e) = &local_38;
  *(code **)(in_FS_OFFSET + lVar2) =
       std::once_flag::_Prepare_execution::
       _Prepare_execution<std::call_once<void(&)()>(std::once_flag&,void(&)())::{lambda()#1}()#1}>(void(&)())
       ::{lambda()#1}::_FUN;
  iVar4 = pthread_once((pthread_once_t *)__once_control,(__init_routine *)&__once_proxy);
  if (iVar4 == 0) {
    *(undefined8 *)(in_FS_OFFSET + lVar1) = 0;
    *(undefined8 *)(in_FS_OFFSET + lVar2) = 0;
    __mutex = (anonymous_namespace)::initMutex;
    iVar4 = pthread_mutex_lock((anonymous_namespace)::initMutex);
    if (iVar4 == 0) {
      lVar5 = *(long *)(this + 0x28);
      if (lVar5 == 0) {
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined1 (*) [16])this = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
        LOCK();
        *(UMutex **)(this + 0x28) = this;
        UNLOCK();
        lVar5 = *(long *)(this + 0x28);
        pUVar3 = this;
        *(UMutex **)(this + 0x30) = gListHead;
        gListHead = pUVar3;
      }
      pthread_mutex_unlock(__mutex);
      goto LAB_00100108;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar4);
}



/* icu_76_godot::UMutex::cleanup() */

void icu_76_godot::UMutex::cleanup(void)

{
  long lVar1;
  
  if (gListHead != 0) {
    do {
      LOCK();
      *(undefined8 *)(gListHead + 0x28) = 0;
      UNLOCK();
      lVar1 = *(long *)(gListHead + 0x30);
      *(undefined8 *)(gListHead + 0x30) = 0;
      gListHead = lVar1;
    } while (lVar1 != 0);
  }
  gListHead = 0;
  return;
}



void umtx_lock_76_godot(undefined1 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  if ((UMutex *)param_1 == (UMutex *)0x0) {
    param_1 = icu_76_godot::(anonymous_namespace)::globalMutex;
  }
  __mutex = *(pthread_mutex_t **)((UMutex *)param_1 + 0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    __mutex = (pthread_mutex_t *)icu_76_godot::UMutex::getMutex((UMutex *)param_1);
  }
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



void umtx_unlock_76_godot(undefined1 *param_1)

{
  if (param_1 == (undefined1 *)0x0) {
    param_1 = icu_76_godot::(anonymous_namespace)::globalMutex;
  }
  pthread_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x28));
  return;
}



/* icu_76_godot::umtx_initImplPreInit(icu_76_godot::UInitOnce&) */

undefined8 icu_76_godot::umtx_initImplPreInit(UInitOnce *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__once_control;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  __once_control = (anonymous_namespace)::pInitFlag;
  lVar1 = CONCAT17(uRam00000000001002df,uRam00000000001002d8);
  lVar2 = CONCAT71(uRam00000000001002e0,uRam00000000001002df);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (pthread_mutex_t *)umtx_init;
  *(pthread_mutex_t ***)(in_FS_OFFSET + lVar1) = &local_48;
  *(code **)(in_FS_OFFSET + lVar2) =
       std::once_flag::_Prepare_execution::
       _Prepare_execution<std::call_once<void(&)()>(std::once_flag&,void(&)())::{lambda()#1}()#1}>(void(&)())
       ::{lambda()#1}::_FUN;
  iVar3 = pthread_once((pthread_once_t *)__once_control,(__init_routine *)&__once_proxy);
  if (iVar3 != 0) {
LAB_001003d2:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  *(undefined8 *)(in_FS_OFFSET + lVar1) = 0;
  *(undefined8 *)(in_FS_OFFSET + lVar2) = 0;
  local_40 = 0;
  local_48 = (anonymous_namespace)::initMutex;
  if ((anonymous_namespace)::initMutex == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(1);
  }
  iVar3 = pthread_mutex_lock((anonymous_namespace)::initMutex);
  if (iVar3 != 0) goto LAB_001003d2;
  local_40 = '\x01';
  if (*(int *)param_1 == 0) {
    *(undefined4 *)param_1 = 1;
    uVar4 = 1;
  }
  else {
    while (*(int *)param_1 == 1) {
      std::condition_variable::wait((anonymous_namespace)::initCondition);
    }
    uVar4 = 0;
    if (local_40 == '\0') goto LAB_0010038f;
  }
  if (local_48 != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(local_48);
  }
LAB_0010038f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* icu_76_godot::umtx_initImplPostInit(icu_76_godot::UInitOnce&) */

void icu_76_godot::umtx_initImplPostInit(UInitOnce *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (anonymous_namespace)::initMutex;
  if ((anonymous_namespace)::initMutex == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(1);
  }
  iVar1 = pthread_mutex_lock((anonymous_namespace)::initMutex);
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = 2;
    pthread_mutex_unlock(__mutex);
    std::condition_variable::notify_all();
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



void u_setMutexFunctions_76_godot(void)

{
  int *in_R9;
  
  if (0 < *in_R9) {
    return;
  }
  *in_R9 = 0x10;
  return;
}



void u_setAtomicIncDecFunctions_76_godot(void)

{
  int *in_RCX;
  
  if (0 < *in_RCX) {
    return;
  }
  *in_RCX = 0x10;
  return;
}



/* _FUN() */

void std::once_flag::_Prepare_execution::
     _Prepare_execution<std::call_once<void(&)()>(std::once_flag&,void(&)())::{lambda()#1}()#1}>(void(&)())
     ::{lambda()#1}::_FUN(void)

{
  long in_FS_OFFSET;
  
                    /* WARNING: Could not recover jumptable at 0x0010057f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(in_FS_OFFSET + lRam000000000010057b))();
  return;
}


