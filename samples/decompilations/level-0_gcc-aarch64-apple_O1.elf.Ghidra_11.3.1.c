#include "out.h"



int _it_crowd(void)

{
  int iVar1;
  
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
  iVar1 = _puts("Well done, Jen.\n");
  return iVar1;
}



int _some_calculation(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 2 + param_1 * param_1;
  iVar1 = param_1 + iVar1 * iVar1 + iVar1;
  iVar1 = param_1 + iVar1 * iVar1 + iVar1;
  iVar1 = param_1 + iVar1 * iVar1 + iVar1;
  iVar1 = param_1 + iVar1 * iVar1 + iVar1;
  iVar1 = param_1 + iVar1 * iVar1 + iVar1;
  return param_1 + iVar1 * iVar1 + iVar1;
}



undefined8 entry(void)

{
  _it_crowd();
  _printf("Some calculation returned %d.\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100008000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100008008)((int)param_1);
  return iVar1;
}



