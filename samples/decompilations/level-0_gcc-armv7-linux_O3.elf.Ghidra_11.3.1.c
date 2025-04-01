#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



undefined4 main(void)

{
  it_crowd();
  printf("Some calculation returned %d.\n",0x937c862f);
  return 0;
}



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x000103f4)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00010414)
// WARNING: Removing unreachable block (ram,0x0001041c)
// WARNING: Removing unreachable block (ram,0x00010420)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001044c)
// WARNING: Removing unreachable block (ram,0x00010454)
// WARNING: Removing unreachable block (ram,0x00010458)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001044c)
// WARNING: Removing unreachable block (ram,0x00010454)
// WARNING: Removing unreachable block (ram,0x00010458)

void frame_dummy(void)

{
  return;
}



void it_crowd(void)

{
  puts("Are you feeling stressed, Jen?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Are you sure?\n");
  puts("Well, I guess you\'re not.\n");
  puts("Well done, Jen.\n");
  return;
}



int some_calculation(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * param_1 + param_1 * 2;
  iVar1 = iVar1 * iVar1 + param_1 + iVar1;
  iVar1 = iVar1 * iVar1 + param_1 + iVar1;
  iVar1 = iVar1 * iVar1 + param_1 + iVar1;
  iVar1 = iVar1 * iVar1 + param_1 + iVar1;
  iVar1 = iVar1 * iVar1 + param_1 + iVar1;
  return iVar1 * iVar1 + param_1 + iVar1;
}



void _fini(void)

{
  return;
}



