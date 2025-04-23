#include "out.h"



int _all_badges(void)

{
  int iVar1;
  
  iVar1 = _printf("We can open every door with badge #%d\n");
  return iVar1;
}



int _polynome_table(void)

{
  int iVar1;
  
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  _printf("P(%d) = %d\n");
  iVar1 = _printf("P(%d) = %d\n");
  return iVar1;
}



int _red_herring(void)

{
  int iVar1;
  
  _puts("These are a few of my favorite numbers:");
  _printf(" *  %d\n");
  _printf(" *  %d\n");
  _printf(" *  %d\n");
  _printf(" *  %d\n");
  iVar1 = _printf(" *  %d\n");
  return iVar1;
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
  
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100008000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100008008)((int)param_1);
  return iVar1;
}



