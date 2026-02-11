
undefined8 FT_Get_PS_Font_Info(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != 0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (pcVar1 != (code *)0x0) {
      puVar2 = (undefined8 *)(*pcVar1)(*(long **)(param_1 + 0xb0),"postscript-info");
      if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010004f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)(param_1,param_2);
        return uVar3;
      }
    }
  }
  return 6;
}



undefined8 FT_Has_PS_Glyph_Names(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
  if (pcVar1 != (code *)0x0) {
    lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),"postscript-info");
    if ((lVar2 != 0) && (*(code **)(lVar2 + 0x10) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001000ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x10))(param_1);
      return uVar3;
    }
  }
  return 0;
}



undefined8 FT_Get_PS_Font_Private(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != 0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (pcVar1 != (code *)0x0) {
      lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),"postscript-info");
      if ((lVar2 != 0) && (*(code **)(lVar2 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 0x18))(param_1,param_2);
        return uVar3;
      }
    }
  }
  return 6;
}



long FT_Get_PS_Font_Value
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
  if (pcVar1 != (code *)0x0) {
    lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"postscript-info");
    if ((lVar3 != 0) && (*(code **)(lVar3 + 0x20) != (code *)0x0)) {
      iVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,param_3,param_4,param_5);
      return (long)iVar2;
    }
  }
  return 0;
}


