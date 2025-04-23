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



undefined4 main(void)

{
  all_badges();
  polynome_table();
  red_herring();
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
// WARNING: Removing unreachable block (ram,0x000110eb)
// WARNING: Removing unreachable block (ram,0x000110f5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx
// WARNING: Removing unreachable block (ram,0x0001113e)
// WARNING: Removing unreachable block (ram,0x00011148)

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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void all_badges(void)

{
  printf("We can open every door with badge #%d\n",
         ((uint)_DAT_000140c3 - (uint)DAT_000140c7) +
         ((uint)_DAT_000140ac - (uint)DAT_000140b0) +
         ((uint)_DAT_00014095 - (uint)DAT_00014099) +
         ((uint)_DAT_0001407e - (uint)DAT_00014082) +
         ((uint)_DAT_00014050 - (uint)DAT_00014054) + ((uint)_DAT_00014067 - (uint)DAT_0001406b));
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void polynome_table(void)

{
  printf("P(%d) = %d\n",0,5);
  printf("P(%d) = %d\n",1,0xffffffc9);
  printf("P(%d) = %d\n",2,0xffffffa3);
  printf("P(%d) = %d\n",3,0xffffff93);
  printf("P(%d) = %d\n",4,0xffffff99);
  printf("P(%d) = %d\n",5,0xffffffb5);
  printf("P(%d) = %d\n",6,0xffffffe7);
  printf("P(%d) = %d\n",7,0x2f);
  printf("P(%d) = %d\n",8,0x8d);
  printf("P(%d) = %d\n",9,0x101);
  printf("P(%d) = %d\n",10,0x18b);
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void red_herring(void)

{
  puts("These are a few of my favorite numbers:");
  printf(" *  %d\n",0x10);
  printf(" *  %d\n",0x23);
  printf(" *  %d\n",0x30);
  printf(" *  %d\n",0x31);
  printf(" *  %d\n",0x20);
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}



