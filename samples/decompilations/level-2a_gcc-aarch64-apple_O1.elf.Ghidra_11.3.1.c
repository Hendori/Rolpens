#include "out.h"



int _count_sheep(void)

{
  int iVar1;
  
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("(nice) ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  _printf("%d ");
  iVar1 = _puts("ZzZzZz...");
  return iVar1;
}



int _short_multiplication_table(void)

{
  int iVar1;
  
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ef8);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ef8);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ef8);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ef8);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  _printf(s__2d__3d____4d_100003ee0);
  iVar1 = _printf(s__2d__3d____4d_100003ef8);
  return iVar1;
}



undefined8 entry(void)

{
  _short_multiplication_table(0x13);
  _count_sheep();
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



