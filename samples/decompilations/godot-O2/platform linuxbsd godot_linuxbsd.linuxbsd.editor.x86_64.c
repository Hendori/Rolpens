
uint main(int param_1,char **param_2)

{
  uint uVar1;
  int iVar2;
  char *__buf;
  char *pcVar3;
  long in_FS_OFFSET;
  bool local_539;
  OS_LinuxBSD local_538 [1288];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  OS_LinuxBSD::OS_LinuxBSD(local_538);
  setlocale(0,"");
  local_539 = false;
  uVar1 = Main::test_entrypoint(param_1,param_2,&local_539);
  if (local_539 == false) {
    __buf = (char *)malloc(0x1000);
    if (__buf == (char *)0x0) {
      uVar1 = 6;
      _err_print_error(&_LC3,"platform/linuxbsd/godot_linuxbsd.cpp",0x47,
                       "Parameter \"cwd\" is null.",0,0);
    }
    else {
      pcVar3 = getcwd(__buf,0x1000);
      iVar2 = Main::setup(*param_2,param_1 + -1,param_2 + 1,true);
      if (iVar2 == 0) {
        iVar2 = Main::start();
        if (iVar2 == 0) {
          OS_LinuxBSD::run();
        }
        else {
          OS::set_exit_code((int)local_538);
        }
        Main::cleanup(false);
        if (pcVar3 != (char *)0x0) {
          iVar2 = chdir(__buf);
          if (iVar2 != 0) {
            _err_print_error(&_LC3,"platform/linuxbsd/godot_linuxbsd.cpp",0x5d,
                             "Couldn\'t return to previous working directory.",0,0);
          }
        }
        free(__buf);
        uVar1 = OS::get_exit_code();
      }
      else {
        free(__buf);
        uVar1 = (uint)(iVar2 != 0x2e);
      }
    }
  }
  OS_LinuxBSD::~OS_LinuxBSD(local_538);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


