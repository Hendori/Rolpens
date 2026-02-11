
undefined8 uscript_getSampleString_76_godot(uint param_1,ushort *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*param_4 < 1) {
    if ((-1 < param_3) && ((param_3 < 1 || (param_2 != (ushort *)0x0)))) {
      uVar2 = 0;
      if (param_1 < 0xd0) {
        uVar2 = *(uint *)((anonymous_namespace)::SCRIPT_PROPS + (long)(int)param_1 * 4) & 0x1fffff;
        if (uVar2 != 0) {
          if ((*(uint *)((anonymous_namespace)::SCRIPT_PROPS + (long)(int)param_1 * 4) & 0x1f0000)
              == 0) {
            if (param_3 != 0) {
              *param_2 = (ushort)uVar2;
            }
            uVar2 = 1;
          }
          else {
            if (1 < param_3) {
              param_2[1] = (ushort)uVar2 & 0x3ff | 0xdc00;
              *param_2 = (short)((int)uVar2 >> 10) + 0xd7c0;
            }
            uVar2 = 2;
          }
        }
      }
      uVar1 = u_terminateUChars_76_godot(param_2,param_3,uVar2);
      return uVar1;
    }
    *param_4 = 1;
  }
  return 0;
}



/* uscript_getSampleUnicodeString_76_godot(UScriptCode) */

undefined8 * uscript_getSampleUnicodeString_76_godot(undefined8 *param_1,uint param_2)

{
  *param_1 = 0x101018;
  *(undefined2 *)(param_1 + 1) = 2;
  if ((param_2 < 0xd0) &&
     ((*(uint *)((anonymous_namespace)::SCRIPT_PROPS + (long)(int)param_2 * 4) & 0x1fffff) != 0)) {
    icu_76_godot::UnicodeString::append((int)param_1);
  }
  return param_1;
}



uint uscript_getUsage_76_godot(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0xd0) {
    uVar1 = *(int *)((anonymous_namespace)::SCRIPT_PROPS + (long)(int)param_1 * 4) >> 0x15 & 7;
  }
  return uVar1;
}



byte uscript_isRightToLeft_76_godot(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 < 0xd0) {
    bVar1 = (anonymous_namespace)::SCRIPT_PROPS[(long)(int)param_1 * 4 + 3] & 1;
  }
  return bVar1;
}



uint uscript_breaksBetweenLetters_76_godot(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0xd0) {
    uVar1 = *(uint *)((anonymous_namespace)::SCRIPT_PROPS + (long)(int)param_1 * 4) >> 0x19 & 1;
  }
  return uVar1;
}



uint uscript_isCased_76_godot(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0xd0) {
    uVar1 = *(uint *)((anonymous_namespace)::SCRIPT_PROPS + (long)(int)param_1 * 4) >> 0x1a & 1;
  }
  return uVar1;
}


