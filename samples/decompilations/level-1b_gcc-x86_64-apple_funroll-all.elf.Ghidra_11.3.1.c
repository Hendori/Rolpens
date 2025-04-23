#include "out.h"



void _all_badges(void)

{
  _printf("We can open every door with badge #%d\n",
          (ulong)(((uint)DAT_1000020c3 - (uint)DAT_1000020c7) +
                 ((uint)DAT_1000020ac - (uint)DAT_1000020b0) +
                 ((uint)DAT_100002095 - (uint)DAT_100002099) +
                 ((uint)DAT_10000207e - (uint)DAT_100002082) +
                 ((uint)DAT_100002050 - (uint)DAT_100002054) +
                 ((uint)DAT_100002067 - (uint)DAT_10000206b)));
  return;
}



void _polynome_table(void)

{
  _printf("P(%d) = %d\n",0,5);
  _printf("P(%d) = %d\n",1,0xffffffc9);
  _printf("P(%d) = %d\n",2,0xffffffa3);
  _printf("P(%d) = %d\n",3,0xffffff93);
  _printf("P(%d) = %d\n",4,0xffffff99);
  _printf("P(%d) = %d\n",5,0xffffffb5);
  _printf("P(%d) = %d\n",6,0xffffffe7);
  _printf("P(%d) = %d\n",7,0x2f);
  _printf("P(%d) = %d\n",8,0x8d);
  _printf("P(%d) = %d\n",9,0x101);
  _printf("P(%d) = %d\n",10,0x18b);
  return;
}



void _red_herring(void)

{
  _puts("These are a few of my favorite numbers:");
  _printf(" *  %d\n",0x10);
  _printf(" *  %d\n",0x23);
  _printf(" *  %d\n",0x30);
  _printf(" *  %d\n",0x31);
  _printf(" *  %d\n",0x20);
  return;
}



undefined8 entry(void)

{
  _all_badges();
  _polynome_table();
  _red_herring();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100002000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000ea6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100002008)();
  return iVar1;
}



