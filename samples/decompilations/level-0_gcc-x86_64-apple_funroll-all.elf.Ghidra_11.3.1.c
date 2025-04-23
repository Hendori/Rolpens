#include "out.h"



void _it_crowd(void)

{
  _puts("Are you feeling stressed, Jen?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Are you sure?\n");
  _puts("Well, I guess you\'re not.\n");
  _puts("Well done, Jen.\n");
  return;
}



int _some_calculation(int param_1)

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



undefined8 entry(void)

{
  _it_crowd();
  _printf("Some calculation returned %d.\n",0x937c862f);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100002000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100000ec6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100002008)();
  return iVar1;
}



