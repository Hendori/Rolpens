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



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x001010a3)
// WARNING: Removing unreachable block (ram,0x001010af)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001010e4)
// WARNING: Removing unreachable block (ram,0x001010f0)

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



void count_sheep(void)

{
  printf("%d ",0);
  printf("%d ",1);
  printf("%d ",2);
  printf("%d ",3);
  printf("%d ",4);
  printf("%d ",5);
  printf("%d ",6);
  printf("%d ",7);
  printf("%d ",8);
  printf("%d ",9);
  printf("%d ",10);
  printf("%d ",0xb);
  printf("%d ",0xc);
  printf("%d ",0xd);
  printf("%d ",0xe);
  printf("%d ",0xf);
  printf("%d ",0x10);
  printf("%d ",0x11);
  printf("%d ",0x12);
  printf("%d ",0x13);
  printf("%d ",0x14);
  printf("%d ",0x15);
  printf("%d ",0x16);
  printf("%d ",0x17);
  printf("%d ",0x18);
  printf("%d ",0x19);
  printf("%d ",0x1a);
  printf("%d ",0x1b);
  printf("%d ",0x1c);
  printf("%d ",0x1d);
  printf("%d ",0x1e);
  printf("%d ",0x1f);
  printf("%d ",0x20);
  printf("%d ",0x21);
  printf("%d ",0x22);
  printf("%d ",0x23);
  printf("%d ",0x24);
  printf("%d ",0x25);
  printf("%d ",0x26);
  printf("%d ",0x27);
  printf("%d ",0x28);
  printf("%d ",0x29);
  printf("%d ",0x2a);
  printf("%d ",0x2b);
  printf("%d ",0x2c);
  printf("%d ",0x2d);
  printf("%d ",0x2e);
  printf("%d ",0x2f);
  printf("%d ",0x30);
  printf("%d ",0x31);
  printf("%d ",0x32);
  printf("%d ",0x33);
  printf("%d ",0x34);
  printf("%d ",0x35);
  printf("%d ",0x36);
  printf("%d ",0x37);
  printf("%d ",0x38);
  printf("%d ",0x39);
  printf("%d ",0x3a);
  printf("%d ",0x3b);
  printf("%d ",0x3c);
  printf("%d ",0x3d);
  printf("%d ",0x3e);
  printf("%d ",0x3f);
  printf("%d ",0x40);
  printf("%d ",0x41);
  printf("%d ",0x42);
  printf("%d ",0x43);
  printf("%d ",0x44);
  printf("%d ",0x45);
  printf("(nice) ");
  printf("%d ",0x46);
  printf("%d ",0x47);
  printf("%d ",0x48);
  printf("%d ",0x49);
  printf("%d ",0x4a);
  printf("%d ",0x4b);
  printf("%d ",0x4c);
  printf("%d ",0x4d);
  printf("%d ",0x4e);
  printf("%d ",0x4f);
  printf("%d ",0x50);
  printf("%d ",0x51);
  printf("%d ",0x52);
  printf("%d ",0x53);
  printf("%d ",0x54);
  printf("%d ",0x55);
  printf("%d ",0x56);
  printf("%d ",0x57);
  printf("%d ",0x58);
  printf("%d ",0x59);
  printf("%d ",0x5a);
  printf("%d ",0x5b);
  printf("%d ",0x5c);
  printf("%d ",0x5d);
  printf("%d ",0x5e);
  printf("%d ",0x5f);
  printf("%d ",0x60);
  printf("%d ",0x61);
  printf("%d ",0x62);
  printf("%d ",99);
  puts("ZzZzZz...");
  return;
}



void short_multiplication_table(uint param_1)

{
  printf(&DAT_0010201a,0,(ulong)param_1,0);
  printf(&DAT_0010201a,1,(ulong)param_1,(ulong)param_1);
  printf(&DAT_0010201a,2,(ulong)param_1,(ulong)(param_1 * 2));
  printf(&DAT_0010202c,3,(ulong)param_1,(ulong)(param_1 * 3));
  printf(&DAT_0010201a,4,(ulong)param_1,(ulong)(param_1 * 4));
  printf(&DAT_0010201a,5,(ulong)param_1,(ulong)(param_1 * 5));
  printf(&DAT_0010201a,6,(ulong)param_1,(ulong)(param_1 * 6));
  printf(&DAT_0010202c,7,(ulong)param_1,(ulong)(param_1 * 7));
  printf(&DAT_0010201a,8,(ulong)param_1,(ulong)(param_1 * 8));
  printf(&DAT_0010201a,9,(ulong)param_1,(ulong)(param_1 * 9));
  printf(&DAT_0010201a,10,(ulong)param_1,(ulong)(param_1 * 10));
  printf(&DAT_0010202c,0xb,(ulong)param_1,(ulong)(param_1 * 0xb));
  printf(&DAT_0010201a,0xc,(ulong)param_1,(ulong)(param_1 * 0xc));
  printf(&DAT_0010201a,0xd,(ulong)param_1,(ulong)(param_1 * 0xd));
  printf(&DAT_0010201a,0xe,(ulong)param_1,(ulong)(param_1 * 0xe));
  printf(&DAT_0010202c,0xf,(ulong)param_1,(ulong)(param_1 * 0xf));
  printf(&DAT_0010201a,0x10,(ulong)param_1,(ulong)(param_1 * 0x10));
  printf(&DAT_0010201a,0x11,(ulong)param_1,(ulong)(param_1 * 0x11));
  printf(&DAT_0010201a,0x12,(ulong)param_1,(ulong)(param_1 * 0x12));
  printf(&DAT_0010202c,0x13,(ulong)param_1,(ulong)(param_1 * 0x13));
  return;
}



undefined8 main(void)

{
  short_multiplication_table(0x13);
  count_sheep();
  return 0;
}



void _fini(void)

{
  return;
}



