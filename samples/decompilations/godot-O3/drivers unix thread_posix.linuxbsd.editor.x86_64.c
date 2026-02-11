
/* set_name(String const&) */

byte set_name(String *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  pthread_t __target_thread;
  char *__name;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __target_thread = pthread_self();
  String::utf8();
  __name = (char *)CharString::get_data();
  iVar3 = pthread_setname_np(__target_thread,__name);
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(iVar3 != 0) & 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* init_thread_posix() */

void init_thread_posix(void)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_38 = 0x100000;
  Thread::_set_platform_functions((PlatformFunctions *)&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


