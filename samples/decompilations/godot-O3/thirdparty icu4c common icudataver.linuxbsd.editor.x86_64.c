
void u_getDataVersion_76_godot(long param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (0 < *param_2) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  uVar1 = ures_openDirect_76_godot(0,"icuver",param_2);
  if (*param_2 < 1) {
    ures_getVersionByKey_76_godot(uVar1,"DataVersion",param_1,param_2);
  }
  ures_close_76_godot(uVar1);
  return;
}


