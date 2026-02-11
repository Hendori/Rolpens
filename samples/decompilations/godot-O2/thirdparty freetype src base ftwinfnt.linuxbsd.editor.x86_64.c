
undefined8 FT_Get_WinFNT_Header(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xf0) + 0x60);
    if (puVar3 != (undefined8 *)0xfffffffffffffffe) {
      if (puVar3 != (undefined8 *)0x0) {
LAB_00100034:
                    /* WARNING: Could not recover jumptable at 0x00100043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)*puVar3)(param_1,param_2);
        return uVar2;
      }
      pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
      if (pcVar1 == (code *)0x0) {
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x60) = 0xfffffffffffffffe;
      }
      else {
        puVar3 = (undefined8 *)(*pcVar1)(*(long **)(param_1 + 0xb0),"winfonts");
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined8 **)(*(long *)(param_1 + 0xf0) + 0x60) = puVar3;
          goto LAB_00100034;
        }
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x60) = 0xfffffffffffffffe;
      }
    }
  }
  return 6;
}


