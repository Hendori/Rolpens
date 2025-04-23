#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



undefined8 main(void)

{
  all_badges();
  polynome_table();
  red_herring();
  return 0;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x001010c3)
// WARNING: Removing unreachable block (ram,0x001010cf)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101104)
// WARNING: Removing unreachable block (ram,0x00101110)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void all_badges(void)

{
  printf("We can open every door with badge #%d\n",
         (ulong)(((uint)_DAT_001040c3 - (uint)DAT_001040c7) +
                ((uint)_DAT_001040ac - (uint)DAT_001040b0) +
                ((uint)_DAT_00104095 - (uint)DAT_00104099) +
                ((uint)_DAT_0010407e - (uint)DAT_00104082) +
                ((uint)_DAT_00104050 - (uint)DAT_00104054) +
                ((uint)_DAT_00104067 - (uint)DAT_0010406b)));
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



void _fini(void)

{
  return;
}



