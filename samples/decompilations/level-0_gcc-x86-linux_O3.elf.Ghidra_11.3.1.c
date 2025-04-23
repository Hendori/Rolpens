#include "out.h"



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00011020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
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



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 main(void)

{
  it_crowd(&stack0x00000004);
  printf("Some calculation returned %d.\n",0x937c862f);
  return 0;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x0001111b)
// WARNING: Removing unreachable block (ram,0x00011125)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x0001116e)
// WARNING: Removing unreachable block (ram,0x00011178)

void register_tm_clones(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_dx(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

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



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}



