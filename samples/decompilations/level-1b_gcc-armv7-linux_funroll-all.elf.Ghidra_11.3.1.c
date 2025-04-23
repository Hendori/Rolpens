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



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x000103d0)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x000103f0)
// WARNING: Removing unreachable block (ram,0x000103f8)
// WARNING: Removing unreachable block (ram,0x000103fc)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00010428)
// WARNING: Removing unreachable block (ram,0x00010430)
// WARNING: Removing unreachable block (ram,0x00010434)

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



// WARNING: Removing unreachable block (ram,0x00010428)
// WARNING: Removing unreachable block (ram,0x00010430)
// WARNING: Removing unreachable block (ram,0x00010434)

void frame_dummy(void)

{
  return;
}



void all_badges(void)

{
  printf("We can open every door with badge #%d\n",
         ((uint)DAT_000210af - (uint)DAT_000210b3) +
         ((uint)DAT_00021098 - (uint)DAT_0002109c) +
         ((uint)DAT_00021081 - (uint)DAT_00021085) +
         ((uint)DAT_0002106a - (uint)DAT_0002106e) +
         ((uint)DAT_0002103c - (uint)DAT_00021040) + ((uint)DAT_00021053 - (uint)DAT_00021057));
  return;
}



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



undefined4 main(void)

{
  all_badges();
  polynome_table();
  red_herring();
  return 0;
}



void _fini(void)

{
  return;
}



