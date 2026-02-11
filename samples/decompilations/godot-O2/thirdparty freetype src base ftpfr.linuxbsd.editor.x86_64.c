
long ft_pfr_check(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  lVar2 = *(long *)(lVar4 + 0x58);
  if (lVar2 == -2) {
    return 0;
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
  lVar2 = 0;
  if (pcVar1 != (code *)0x0) {
    lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),"pfr-metrics");
    lVar4 = *(long *)(param_1 + 0xf0);
    lVar3 = lVar2;
    if (lVar2 != 0) goto LAB_00100053;
  }
  lVar3 = -2;
LAB_00100053:
  *(long *)(lVar4 + 0x58) = lVar3;
  return lVar2;
}



undefined8
FT_Get_PFR_Metrics(long param_1,uint *param_2,uint *param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  puVar2 = (undefined8 *)ft_pfr_check();
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4,param_5);
    return uVar3;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(ushort *)(param_1 + 0x88);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)*(ushort *)(param_1 + 0x88);
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    uVar4 = 0x10000;
    uVar3 = 0x10000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = uVar3;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar4;
  }
  return 2;
}



undefined8 FT_Get_PFR_Kerning(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_4 != 0) {
    lVar1 = ft_pfr_check();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 8))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    uVar2 = FT_Get_Kerning(param_1,param_2,param_3,2,param_4);
    return uVar2;
  }
  return 6;
}



undefined8 FT_Get_PFR_Advance(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_3 != 0) {
    lVar1 = ft_pfr_check();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0x10))(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 6;
}


