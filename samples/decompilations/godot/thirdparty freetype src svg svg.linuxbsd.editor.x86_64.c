
undefined8 ft_svg_init(long param_1)

{
  *(undefined2 *)(param_1 + 0x80) = 0;
  return 0;
}



void ft_svg_done(long param_1)

{
  if (*(short *)(param_1 + 0x80) == 0x101) {
    (**(code **)(param_1 + 0x90))(param_1 + 0xa8);
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



undefined8 ft_svg_preset_slot(long param_1,undefined8 param_2,undefined1 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xa0);
    if (*(char *)(param_1 + 0x80) == '\0') {
      (**(code **)(param_1 + 0x88))(param_1 + 0xa8);
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00100099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_1 + 0xa8);
    return uVar1;
  }
  return 0x9e;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ft_svg_transform(undefined8 param_1,long param_2,int *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)(param_2 + 0x120);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (int *)0x0) {
    param_3 = (int *)&local_88;
    local_88 = __LC0;
    uStack_80 = _UNK_00100588;
    local_78 = __LC1;
    uStack_70 = _UNK_00100598;
  }
  if (param_4 == (long *)0x0) {
    local_98 = (undefined1  [16])0x0;
    param_4 = (long *)local_98;
  }
  local_68 = *(undefined8 *)(lVar1 + 0x50);
  uStack_60 = *(undefined8 *)(lVar1 + 0x58);
  local_58 = *(undefined8 *)(lVar1 + 0x60);
  uStack_50 = *(undefined8 *)(lVar1 + 0x68);
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)(param_3 + 2);
  local_38 = *(undefined8 *)(param_3 + 4);
  uStack_30 = *(undefined8 *)(param_3 + 6);
  FT_Matrix_Multiply(&local_48,&local_68);
  lVar4 = (long)*param_3 * (long)*(int *)(lVar1 + 0x70);
  lVar7 = (long)param_3[4] * (long)*(int *)(lVar1 + 0x70);
  lVar5 = (long)param_3[2] * (long)*(int *)(lVar1 + 0x78);
  lVar6 = (long)param_3[6] * (long)*(int *)(lVar1 + 0x78);
  lVar2 = *param_4;
  lVar3 = param_4[1];
  *(undefined8 *)(lVar1 + 0x50) = local_68;
  *(undefined8 *)(lVar1 + 0x58) = uStack_60;
  *(undefined8 *)(lVar1 + 0x60) = local_58;
  *(undefined8 *)(lVar1 + 0x68) = uStack_50;
  *(long *)(lVar1 + 0x70) =
       (long)(int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) +
       (long)(int)((ulong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + lVar2;
  *(long *)(lVar1 + 0x78) =
       (long)(int)((ulong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) +
       (long)(int)((ulong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + lVar3;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ft_svg_get_interface(void)

{
  ft_service_list_lookup(ft_svg_services);
  return;
}



int ft_svg_property_get(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = strcmp(param_2,"svg-hooks");
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *param_3 = *(undefined8 *)(param_1 + 0x88);
    param_3[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    param_3[2] = *(undefined8 *)(param_1 + 0x98);
    param_3[3] = uVar1;
    return iVar2;
  }
  return 0xc;
}



int ft_svg_property_set(long param_1,char *param_2,long *param_3,char param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = strcmp(param_2,"svg-hooks");
  if (iVar3 != 0) {
    return 0xc;
  }
  if ((((param_4 != '\x01') && (*param_3 != 0)) && (param_3[1] != 0)) &&
     ((param_3[2] != 0 && (param_3[3] != 0)))) {
    lVar1 = param_3[1];
    *(long *)(param_1 + 0x88) = *param_3;
    *(long *)(param_1 + 0x90) = lVar1;
    lVar1 = param_3[2];
    lVar2 = param_3[3];
    *(undefined1 *)(param_1 + 0x81) = 1;
    *(long *)(param_1 + 0x98) = lVar1;
    *(long *)(param_1 + 0xa0) = lVar2;
    return iVar3;
  }
  return 6;
}



ulong ft_svg_render(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0x84;
  if ((param_3 != 0) || (uVar4 = 0x9e, *(char *)(param_1 + 0x81) == '\0')) goto LAB_0010040a;
  pcVar2 = *(code **)(param_1 + 0x98);
  uVar3 = **(undefined8 **)(param_1 + 8);
  if (*(char *)(param_1 + 0x80) == '\0') {
    local_34 = (**(code **)(param_1 + 0x88))(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x80) = 1;
    if (*(char *)(param_1 + 0x81) != '\0') {
      pcVar5 = *(code **)(param_1 + 0xa0);
      goto LAB_001003b3;
    }
  }
  else {
    pcVar5 = *(code **)(param_1 + 0xa0);
LAB_001003b3:
    (*pcVar5)(param_2,1,param_1 + 0xa8);
  }
  uVar6 = ft_mem_alloc(uVar3,(long)*(int *)(param_2 + 0xa0) * (ulong)*(uint *)(param_2 + 0x98),
                       &local_34);
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  uVar4 = (ulong)local_34;
  if (local_34 == 0) {
    uVar4 = (*pcVar2)(param_2,param_1 + 0xa8);
    local_34 = (uint)uVar4;
    if (local_34 == 0) {
      puVar1 = (uint *)(*(long *)(param_2 + 0x128) + 8);
      *puVar1 = *puVar1 | 1;
    }
    else {
      ft_mem_free(uVar3,*(undefined8 *)(param_2 + 0xa8));
      uVar4 = (ulong)local_34;
      *(undefined8 *)(param_2 + 0xa8) = 0;
    }
  }
LAB_0010040a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


