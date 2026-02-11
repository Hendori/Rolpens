
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Thread::callback(unsigned long, Thread::Settings const&, void (*)(void*), void*) */

void Thread::callback(ulong param_1,Settings *param_2,_func_void_void_ptr *param_3,void *param_4)

{
  ulong *in_FS_OFFSET;
  
  if ((char)*in_FS_OFFSET == '\0') {
    *(char *)in_FS_OFFSET = '\x01';
    LOCK();
    id_counter = id_counter + 1;
    UNLOCK();
  }
  *in_FS_OFFSET = param_1;
  if (DAT_001003e8 != (code *)0x0) {
    (*DAT_001003e8)(*(undefined4 *)param_2);
  }
  if (DAT_001003f0 != (code *)0x0) {
    (*DAT_001003f0)();
  }
  ScriptServer::thread_enter();
  if (_DAT_001003f8 == (code *)0x0) {
    (*param_3)(param_4);
  }
  else {
    (*_DAT_001003f8)(param_3,param_4);
  }
  ScriptServer::thread_exit();
  if (_DAT_00100400 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_00100400)();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Thread::_set_platform_functions(Thread::PlatformFunctions const&) */

void Thread::_set_platform_functions(PlatformFunctions *param_1)

{
  platform_functions = *(undefined8 *)param_1;
  DAT_001003e8 = *(undefined8 *)(param_1 + 8);
  DAT_001003f0 = *(undefined8 *)(param_1 + 0x10);
  _DAT_001003f8 = *(undefined8 *)(param_1 + 0x18);
  _DAT_00100400 = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Thread::start(void (*)(void*), void*, Thread::Settings const&) */

undefined8 __thiscall
Thread::start(Thread *this,_func_void_void_ptr *param_1,void *param_2,Settings *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_40;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    LOCK();
    UNLOCK();
    local_40 = 0;
    lVar2 = id_counter + 1;
    id_counter = id_counter + 1;
    *(long *)this = lVar2;
    local_38 = (long *)operator_new(0x30);
    uVar1 = *(undefined4 *)param_3;
    *local_38 = (long)&PTR___State_impl_001007b0;
    *(undefined4 *)(local_38 + 3) = uVar1;
    lVar2 = *(long *)this;
    local_38[1] = (long)param_2;
    local_38[4] = lVar2;
    local_38[2] = (long)param_1;
    local_38[5] = 0x100000;
    std::thread::_M_start_thread(&local_40,&local_38,std::thread::_M_thread_deps_never_run);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    if (*(long *)(this + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *(undefined8 *)(this + 8) = local_40;
    uVar3 = *(undefined8 *)this;
  }
  else {
    _err_print_error("start","core/os/thread.cpp",0x49,
                     "Condition \"id != UNASSIGNED_ID\" is true. Returning: UNASSIGNED_ID",
                     "A Thread object has been re-started without wait_to_finish() having been called on it."
                     ,0,0);
    uVar3 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Thread::is_started() const */

bool __thiscall Thread::is_started(Thread *this)

{
  return *(long *)this != 0;
}



/* Thread::wait_to_finish() */

undefined8 __thiscall Thread::wait_to_finish(Thread *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *in_FS_OFFSET;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    uVar2 = _err_print_error("wait_to_finish","core/os/thread.cpp",0x54,
                             "Condition \"id == UNASSIGNED_ID\" is true.",
                             "Attempt of waiting to finish on a thread that was never started.",0,0)
    ;
    return uVar2;
  }
  if ((char)*in_FS_OFFSET == '\0') {
    *(char *)in_FS_OFFSET = '\x01';
    LOCK();
    UNLOCK();
    lVar3 = id_counter + 1;
    id_counter = id_counter + 1;
    *in_FS_OFFSET = lVar3;
  }
  else {
    lVar3 = *in_FS_OFFSET;
  }
  if (lVar1 != lVar3) {
    uVar2 = std::thread::join();
    if (*(long *)(this + 8) == 0) {
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  uVar2 = 0;
  _err_print_error("wait_to_finish","core/os/thread.cpp",0x55,
                   "Condition \"id == get_caller_id()\" is true.",
                   "Threads can\'t wait to finish on themselves, another thread must wait.",0);
  return uVar2;
}



/* Thread::set_name(String const&) */

undefined8 Thread::set_name(String *param_1)

{
  undefined8 uVar1;
  
  if (platform_functions != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*platform_functions)();
    return uVar1;
  }
  return 2;
}



/* Thread::Thread() */

void __thiscall Thread::Thread(Thread *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* Thread::~Thread() */

void __thiscall Thread::~Thread(Thread *this)

{
  if (*(long *)this != 0) {
    _err_print_error("~Thread","core/os/thread.cpp",0x69,
                     "A Thread object is being destroyed without its completion having been realized.\nPlease call wait_to_finish() on it to ensure correct cleanup."
                     ,0,1);
    std::thread::detach();
  }
  if (*(long *)(this + 8) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



/* TLS init function for Thread::caller_id */

void Thread::caller_id(void)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  if ((char)*in_FS_OFFSET != '\0') {
    return;
  }
  *(char *)in_FS_OFFSET = '\x01';
  LOCK();
  UNLOCK();
  lVar1 = id_counter + 1;
  id_counter = id_counter + 1;
  *in_FS_OFFSET = lVar1;
  return;
}



/* std::thread::_M_thread_deps_never_run() */

void std::thread::_M_thread_deps_never_run(void)

{
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(unsigned long,
   Thread::Settings const&, void (*)(void*), void*), unsigned long, Thread::Settings, void
   (*)(void*), void*> > >::_M_run() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
::_M_run(_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
         *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010043b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x28))
            (*(undefined8 *)(this + 0x20),this + 0x18,*(undefined8 *)(this + 0x10),
             *(undefined8 *)(this + 8));
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(unsigned long,
   Thread::Settings const&, void (*)(void*), void*), unsigned long, Thread::Settings, void
   (*)(void*), void*> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_001007b0;
  std::thread::_State::~_State((_State *)this);
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(unsigned long,
   Thread::Settings const&, void (*)(void*), void*), unsigned long, Thread::Settings, void
   (*)(void*), void*> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_001007b0;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x30);
  return;
}



/* Thread::id_counter */

void Thread::_GLOBAL__sub_I_id_counter(void)

{
  id_counter = 1;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(unsigned long,
   Thread::Settings const&, void (*)(void*), void*), unsigned long, Thread::Settings, void
   (*)(void*), void*> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<void(*)(unsigned_long,Thread::Settings_const&,void(*)(void*),void*),unsigned_long,Thread::Settings,void(*)(void*),void*>>>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


