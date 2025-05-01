
undefined8
u_strToWCS_76_godot(long param_1,int param_2,undefined8 param_3,long param_4,int param_5,
                   int *param_6)

{
  undefined8 uVar1;
  
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if ((((param_4 != 0) || (param_5 == 0)) && ((-2 < param_5 && (-1 < param_2)))) &&
       ((param_1 != 0 || (param_2 < 1)))) {
      uVar1 = u_strToUTF32_76_godot();
      return uVar1;
    }
    *param_6 = 1;
  }
  return 0;
}



undefined8
u_strFromWCS_76_godot
          (long param_1,int param_2,undefined8 param_3,long param_4,int param_5,int *param_6)

{
  undefined8 uVar1;
  
  if ((param_6 != (int *)0x0) && (*param_6 < 1)) {
    if ((((param_4 != 0) || (param_5 == 0)) && ((-2 < param_5 && (-1 < param_2)))) &&
       ((param_1 != 0 || (param_2 < 1)))) {
      uVar1 = u_strFromUTF32_76_godot();
      return uVar1;
    }
    *param_6 = 1;
  }
  return 0;
}


