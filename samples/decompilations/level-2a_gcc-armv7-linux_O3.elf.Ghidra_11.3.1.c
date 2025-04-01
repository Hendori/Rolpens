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

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



undefined4 main(void)

{
  short_multiplication_table(0x13);
  count_sheep();
  return 0;
}



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x000103e8)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00010408)
// WARNING: Removing unreachable block (ram,0x00010410)
// WARNING: Removing unreachable block (ram,0x00010414)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00010440)
// WARNING: Removing unreachable block (ram,0x00010448)
// WARNING: Removing unreachable block (ram,0x0001044c)

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



// WARNING: Removing unreachable block (ram,0x00010440)
// WARNING: Removing unreachable block (ram,0x00010448)
// WARNING: Removing unreachable block (ram,0x0001044c)

void frame_dummy(void)

{
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



void short_multiplication_table(int param_1)

{
  printf(&DAT_00010bc0,0,param_1);
  printf(&DAT_00010bc0,1,param_1,param_1);
  printf(&DAT_00010bc0,2,param_1,param_1 << 1);
  printf(&DAT_00010bd4,3,param_1,param_1 * 3);
  printf(&DAT_00010bc0,4,param_1,param_1 << 2);
  printf(&DAT_00010bc0,5,param_1,param_1 * 5);
  printf(&DAT_00010bc0,6,param_1,param_1 * 6);
  printf(&DAT_00010bd4,7,param_1,param_1 * 7);
  printf(&DAT_00010bc0,8,param_1,param_1 << 3);
  printf(&DAT_00010bc0,9,param_1,param_1 * 9);
  printf(&DAT_00010bc0,10,param_1,param_1 * 10);
  printf(&DAT_00010bd4,0xb,param_1,param_1 * 0xb);
  printf(&DAT_00010bc0,0xc,param_1,param_1 * 0xc);
  printf(&DAT_00010bc0,0xd,param_1,param_1 * 0xd);
  printf(&DAT_00010bc0,0xe,param_1,param_1 * 0xe);
  printf(&DAT_00010bd4,0xf,param_1,param_1 * 0xf);
  printf(&DAT_00010bc0,0x10,param_1,param_1 << 4);
  printf(&DAT_00010bc0,0x11,param_1,param_1 * 0x11);
  printf(&DAT_00010bc0,0x12,param_1,param_1 * 0x12);
  printf(&DAT_00010bd4,0x13,param_1,param_1 * 0x13);
  return;
}



void _fini(void)

{
  return;
}



