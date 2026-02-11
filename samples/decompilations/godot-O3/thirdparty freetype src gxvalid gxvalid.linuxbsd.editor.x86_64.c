
int gxv_compare_ushort_offset(ushort *param_1,ushort *param_2)

{
  return (uint)*param_1 - (uint)*param_2;
}



ulong gxv_compare_ulong_offset(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}



void gxv_LookupTable_fmt2_skip_endmarkers(char *param_1,ushort param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  
  if (param_1 + 4 < *(char **)(*param_3 + 0xd0)) {
    pcVar1 = param_1;
    while (((*pcVar1 == -1 && (pcVar1[1] == -1)) && (pcVar1[2] == -1))) {
      if ((pcVar1[3] != -1) ||
         (pcVar1 = pcVar1 + param_2, *(char **)(*param_3 + 0xd0) <= pcVar1 + 4)) break;
    }
    lVar2 = (long)pcVar1 - (long)param_1;
  }
  else {
    lVar2 = 0;
  }
  param_3[3] = lVar2;
  return;
}



void gxv_just_pcTable_LookupValue_entry_validate(undefined8 param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x10);
  uVar1 = *param_2;
  if (*(ushort *)(lVar2 + 4) < uVar1) {
    *(ushort *)(lVar2 + 4) = uVar1;
    return;
  }
  if (uVar1 < *(ushort *)(lVar2 + 4)) {
    *(ushort *)(lVar2 + 6) = uVar1;
  }
  return;
}



void gxv_just_classTable_entry_validate(void)

{
  return;
}



void gxv_just_wdcTable_LookupValue_validate(undefined8 param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *param_2;
  puVar2 = *(ushort **)(param_3 + 0x10);
  if (*puVar2 < uVar1) {
    *puVar2 = uVar1;
  }
  if (uVar1 < puVar2[1]) {
    puVar2[1] = uVar1;
  }
  return;
}



int gxv_opbd_LookupFmt4_transit(int param_1,ushort *param_2)

{
  return (uint)*param_2 + param_1 * 8;
}



void gxvalid_get_service(void)

{
  ft_service_list_lookup(gxvalid_services);
  return;
}



ulong gxv_load_table(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FT_Load_Sfnt_Table(param_1,param_2,0,0,param_4);
  local_34 = (uint)uVar1;
  if ((char)uVar1 == -0x72) {
    uVar1 = 0;
  }
  else if (local_34 == 0) {
    uVar2 = ft_mem_qalloc(uVar2,*param_4,&local_34);
    *param_3 = uVar2;
    uVar1 = (ulong)local_34;
    if (local_34 == 0) {
      uVar1 = FT_Load_Sfnt_Table(param_1,param_2,0,*param_3,param_4);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_kern_subtable_fmt1_valueTable_load(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)param_3[10];
  if (param_2 == (ushort *)0x0) {
    param_2 = *(ushort **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 1) {
    ft_validator_error(*param_3,8);
  }
  *puVar1 = *param_1 << 8 | *param_1 >> 8;
  return;
}



void gxv_odtect_validate(uint *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  if (*param_1 == 0) {
    return;
  }
  uVar7 = 0;
  lVar10 = 0;
  do {
    lVar9 = lVar10;
    uVar7 = uVar7 + 1;
    lVar10 = lVar9 + 0x18;
    if (*param_1 <= uVar7) {
      return;
    }
    lVar8 = 0;
    do {
      puVar1 = (ulong *)(*(long *)(param_1 + 2) + lVar8);
      puVar6 = (ulong *)(*(long *)(param_1 + 2) + lVar10);
      uVar2 = puVar1[1];
      uVar3 = puVar6[1];
      uVar4 = *puVar1;
      uVar5 = *puVar6;
      if (uVar4 == uVar5) {
        if ((uVar3 != 0) && (uVar2 != 0)) goto LAB_00100288;
      }
      else if (uVar5 < uVar4) {
        if (uVar4 < uVar5 + uVar3) goto LAB_00100288;
      }
      else if (uVar5 < uVar4 + uVar2) {
LAB_00100288:
        ft_validator_error(*param_2,9);
      }
      bVar11 = lVar9 != lVar8;
      lVar8 = lVar8 + 0x18;
    } while (bVar11);
  } while( true );
}



ushort gxv_bsln_LookupFmt4_transit(short param_1,short *param_2,ushort *param_3,long *param_4)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)((ulong)(ushort)(*param_2 + param_1 * 2) + param_4[7]);
  if (param_3 == (ushort *)0x0) {
    param_3 = *(ushort **)(*param_4 + 0xd0);
  }
  if (puVar1 + 1 <= param_3) {
    return *puVar1 << 8 | *puVar1 >> 8;
  }
  ft_validator_error(*param_4,8);
  return *puVar1 << 8 | *puVar1 >> 8;
}



void gxv_LookupTable_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  code *pcVar2;
  ushort *puVar3;
  ushort uVar4;
  long in_FS_OFFSET;
  code *local_78 [9];
  code *local_30;
  
  puVar1 = param_1 + 1;
  local_30 = (code *)*(long *)(in_FS_OFFSET + 0x28);
  param_3[7] = (long)param_1;
  local_78[1] = (code *)0x0;
  local_78[3] = (code *)0x0;
  local_78[5] = (code *)0x0;
  local_78[7] = (code *)0x0;
  local_78[0] = gxv_LookupTable_fmt0_validate;
  local_78[2] = gxv_LookupTable_fmt2_validate;
  local_78[4] = gxv_LookupTable_fmt4_validate;
  local_78[6] = gxv_LookupTable_fmt6_validate;
  local_78[8] = gxv_LookupTable_fmt8_validate;
  puVar3 = param_2;
  if (param_2 == (ushort *)0x0) {
    puVar3 = *(ushort **)(*param_3 + 0xd0);
  }
  if (puVar3 < puVar1) {
    ft_validator_error(*param_3,8);
  }
  uVar4 = *param_1 << 8 | *param_1 >> 8;
  if (uVar4 < 9) {
    pcVar2 = local_78[uVar4];
  }
  else {
    ft_validator_error(*param_3,8);
    pcVar2 = local_78[uVar4];
  }
  if (pcVar2 == (code *)0x0) {
    ft_validator_error(*param_3,8);
  }
  (*pcVar2)(puVar1,param_2,param_3);
  param_3[3] = (long)puVar1 + (param_3[3] - (long)param_1);
  if (local_30 != (code *)*(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_mort_subtable_type4_validate(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(code **)(param_3 + 0x28) = gxv_mort_subtable_type4_lookupval_validate;
  *(code **)(param_3 + 0x30) = gxv_mort_subtable_type4_lookupfmt4_transit;
  gxv_LookupTable_validate();
  return;
}



void gxv_LookupTable_fmt0_validate(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  long in_FS_OFFSET;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_3[1] + 0x20);
  uVar3 = param_1 + lVar1 * 2;
  if (param_2 == 0) {
    lVar2 = *param_3;
    if (*(ulong *)(lVar2 + 0xd0) < uVar3) goto LAB_001005e3;
    if (lVar1 < 1) goto LAB_00100659;
LAB_00100609:
    lVar1 = 0;
    if (*(ulong *)(lVar2 + 0xd0) < param_1 + 2U) {
      ft_validator_error(lVar2,8);
      lVar2 = *param_3;
    }
  }
  else {
    if (param_2 < uVar3) {
      lVar2 = *param_3;
LAB_001005e3:
      ft_validator_error(lVar2,8);
      if (*(long *)(param_3[1] + 0x20) < 1) goto LAB_00100659;
      if (param_2 == 0) {
        lVar2 = *param_3;
        goto LAB_00100609;
      }
    }
    else if (lVar1 < 1) {
LAB_00100659:
      lVar1 = 0;
      goto LAB_001005b0;
    }
    uVar3 = param_1 + 2;
    uVar4 = 0;
    while( true ) {
      if (param_2 < uVar3) break;
      if (param_2 == uVar3) {
        lVar1 = (uVar3 - 2) - param_1;
        lVar2 = *param_3;
        goto LAB_0010059b;
      }
      local_42 = CONCAT11(*(undefined1 *)(uVar3 - 2),*(undefined1 *)(uVar3 - 1));
      (*(code *)param_3[5])(uVar4,&local_42,param_3);
      if (*(long *)(param_3[1] + 0x20) <= (long)(ulong)(ushort)(uVar4 + 1)) {
        lVar1 = uVar3 - param_1;
        goto LAB_001005b0;
      }
      uVar3 = uVar3 + 2;
      uVar4 = uVar4 + 1;
    }
    ft_validator_error(*param_3,8);
    lVar2 = *param_3;
    lVar1 = (uVar3 - 2) - param_1;
  }
LAB_0010059b:
  if (1 < *(uint *)(lVar2 + 0xd8)) {
    ft_validator_error(lVar2,0x10);
  }
LAB_001005b0:
  param_3[3] = lVar1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_bsln_parts_fmt0_validate(long param_1,ulong param_2,long *param_3)

{
  if (param_2 == 0) {
    param_2 = *(ulong *)(*param_3 + 0xd0);
  }
  if (param_1 + 0x40U <= param_2) {
    param_3[2] = 0;
    return;
  }
  ft_validator_error(*param_3,8);
  param_3[2] = 0;
  return;
}



void gxv_mort_subtable_type2_entry_validate
               (undefined8 param_1,ushort param_2,undefined8 param_3,long param_4,undefined8 param_5
               ,long *param_6)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  
  if ((param_2 & 0x3fff) == 0) {
    return;
  }
  puVar1 = (uint *)(param_4 + (ulong)(param_2 & 0x3fff));
  puVar5 = (ushort *)param_6[10];
  uVar3 = *puVar5;
  puVar2 = (uint *)(param_4 + (ulong)uVar3);
  if ((param_2 & 3) != 0) {
    ft_validator_error(*param_6,9);
  }
  if ((puVar2 <= puVar1) && (puVar1 <= (uint *)((long)puVar2 + (ulong)uVar3))) {
    uVar4 = *puVar1;
    uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
            (uVar4 & 0x3f) << 0x18) * 2;
    if ((puVar5[2] <= uVar4) && (uVar4 <= (uint)puVar5[2] + (uint)puVar5[5])) {
      return;
    }
  }
  if (*(uint *)(*param_6 + 0xd8) < 2) {
    return;
  }
  ft_validator_error(*param_6,9);
  return;
}



void gxv_mort_subtable_type2_opttable_load(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)param_3[10];
  if (param_2 == (ushort *)0x0) {
    param_2 = *(ushort **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 3) {
    ft_validator_error(*param_3,8);
  }
  *puVar1 = *param_1 << 8 | *param_1 >> 8;
  puVar1[1] = param_1[1] << 8 | param_1[1] >> 8;
  puVar1[2] = param_1[2] << 8 | param_1[2] >> 8;
  return;
}



void gxv_mort_subtable_type1_substitutionTable_load(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)param_3[10];
  if (param_2 == (ushort *)0x0) {
    param_2 = *(ushort **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 1) {
    ft_validator_error(*param_3,8);
  }
  *puVar1 = *param_1 << 8 | *param_1 >> 8;
  return;
}



void gxv_mort_subtable_type0_entry_validate(undefined8 param_1,uint param_2)

{
  char cVar1;
  long *in_R9;
  
  cVar1 = (char)(param_2 >> 8);
  if ((((param_2 & 0x2000) != 0) && (cVar1 < '\0')) && (1 < *(uint *)(*in_R9 + 0xd8))) {
    ft_validator_error(*in_R9,8);
  }
  if ((((param_2 & 0x4000) != 0) && (cVar1 < '\0')) && (1 < *(uint *)(*in_R9 + 0xd8))) {
    ft_validator_error(*in_R9,8);
  }
  if (((param_2 & 0x1ff0) != 0) && (1 < *(uint *)(*in_R9 + 0xd8))) {
    ft_validator_error(*in_R9,8);
    return;
  }
  return;
}



void gxv_morx_subtable_type5_insertionGlyphList_load(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)param_3[0xf];
  if (param_2 == (uint *)0x0) {
    param_2 = *(uint **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 1) {
    ft_validator_error(*param_3,8);
  }
  uVar1 = *param_1;
  *puVar2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
  ;
  return;
}



void gxv_XClassTable_lookupval_validate(undefined8 param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if ((ulong)param_3[0x13] <= (ulong)uVar1) {
    ft_validator_error(*param_3,8);
    uVar1 = *param_2;
  }
  if (*(ushort *)(param_3 + 0x14) < uVar1) {
    *(ushort *)(param_3 + 0x14) = uVar1;
  }
  return;
}



void gxv_morx_subtable_type2_entry_validate
               (undefined8 param_1,undefined8 param_2,ushort *param_3,long param_4,
               undefined8 param_5,long *param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar3;
  
  if (*param_3 == 0) {
    return;
  }
  uVar4 = (ulong)((uint)*param_3 * 4);
  uVar6 = param_4 + *(long *)param_6[0xf];
  puVar5 = (uint *)(uVar4 + uVar6);
  if ((CARRY8(uVar4,uVar6)) || ((uint *)(uVar6 + *(long *)param_6[0xf]) < puVar5)) {
    ft_validator_error(*param_6,9);
  }
  uVar1 = *puVar5;
  uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8;
  uVar3 = uVar2 | (uVar1 & 0xff00) << 8;
  uVar7 = (uVar3 | uVar1 << 0x18) & 0x3fff0000;
  if (uVar7 == 0x3fff0000) {
    if ((long)(ulong)uVar2 < *(long *)(param_6[1] + 0x20)) {
      return;
    }
LAB_00100a38:
    lVar8 = *param_6;
    if (*(uint *)(lVar8 + 0xd8) < 2) goto LAB_00100a53;
    ft_validator_error(lVar8,9);
  }
  else if (uVar7 == 0) {
    if ((long)(ulong)(uVar3 | uVar1 << 0x18 & 0x3fffffff) < *(long *)(param_6[1] + 0x20)) {
      return;
    }
    goto LAB_00100a38;
  }
  lVar8 = *param_6;
LAB_00100a53:
  if (*(uint *)(lVar8 + 0xd8) < 2) {
    return;
  }
  ft_validator_error(lVar8,9);
  return;
}



void gxv_morx_subtable_type2_opttable_load(uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)param_3[0xf];
  if (param_2 == (uint *)0x0) {
    param_2 = *(uint **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 3) {
    ft_validator_error(*param_3,8);
  }
  uVar1 = *param_1;
  *puVar2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
  ;
  uVar1 = param_1[1];
  puVar2[1] = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18);
  uVar1 = param_1[2];
  puVar2[2] = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18);
  return;
}



void gxv_morx_subtable_type1_entry_validate
               (undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = param_6[0xf];
  uVar2 = *param_3;
  if (((param_2 & 0x3fff) != 0) && (1 < *(uint *)(*param_6 + 0xd8))) {
    ft_validator_error(*param_6,8);
  }
  uVar3 = (uint)*(ushort *)(lVar1 + 0x10);
  if ((int)(uint)*(ushort *)(lVar1 + 0x10) <= (int)(short)((ulong)uVar2 >> 0x10)) {
    uVar3 = (int)((ulong)uVar2 >> 0x10) + 1;
    *(short *)(lVar1 + 0x10) = (short)uVar3;
    uVar3 = uVar3 & 0xffff;
  }
  if ((int)uVar3 <= (int)(short)uVar2) {
    *(short *)(lVar1 + 0x10) = (short)uVar2 + 1;
  }
  return;
}



void gxv_morx_subtable_type1_substitutionTable_load(ushort *param_1,ushort *param_2,long *param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)param_3[0xf];
  if (param_2 == (ushort *)0x0) {
    param_2 = *(ushort **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 1) {
    ft_validator_error(*param_3,8);
  }
  *puVar1 = (ulong)(ushort)(*param_1 << 8 | *param_1 >> 8);
  return;
}



ushort gxv_lcar_LookupFmt4_transit(short param_1,short *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  lVar1 = *param_4;
  puVar2 = *(ushort **)(lVar1 + 0xd0);
  puVar3 = (ushort *)(*(long *)(lVar1 + 200) + (ulong)(ushort)(*param_2 + param_1 * 2));
  if (puVar2 == (ushort *)0x0) {
    puVar2 = *(ushort **)(lVar1 + 0xd0);
  }
  if (puVar3 + 1 <= puVar2) {
    return *puVar3 << 8 | *puVar3 >> 8;
  }
  ft_validator_error(lVar1,8);
  return *puVar3 << 8 | *puVar3 >> 8;
}



void gxv_set_length_by_ushort_offset
               (long param_1,undefined8 *param_2,short *param_3,uint param_4,ushort param_5,
               undefined8 *param_6)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  short *psVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = (ulong)param_4;
  puVar5 = param_2;
  do {
    puVar3 = (undefined2 *)*puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = 0;
  } while (param_2 + uVar10 != puVar5);
  lVar6 = 0;
  do {
    *(undefined2 *)((long)param_3 + lVar6) = *(undefined2 *)(param_1 + lVar6);
    lVar6 = lVar6 + 2;
  } while (lVar6 != uVar10 * 2);
  *(ushort *)((long)param_3 + lVar6) = param_5;
  qsort(param_3,(ulong)(param_4 + 1),2,gxv_compare_ushort_offset);
  if (param_5 < *(ushort *)((long)param_3 + lVar6)) {
    ft_validator_error(*param_6,9);
  }
  uVar9 = 0;
  do {
    psVar7 = param_3;
    uVar4 = 0;
    do {
      uVar8 = uVar4 + 1;
      if (*psVar7 == *(short *)(param_1 + uVar9 * 2)) {
        uVar8 = param_4;
        if (param_4 == uVar4) goto LAB_00100d60;
        goto LAB_00100d1c;
      }
      psVar7 = psVar7 + 1;
      uVar4 = uVar8;
    } while (param_4 != uVar8);
    psVar7 = param_3 + uVar10;
LAB_00100d60:
    uVar4 = uVar8;
    ft_validator_error(*param_6,9);
LAB_00100d1c:
    sVar2 = param_3[uVar4 + 1];
    sVar1 = *psVar7;
    *(short *)param_2[uVar9] = sVar2 - sVar1;
    if ((*(short *)(param_1 + uVar9 * 2) != 0) && ((short)(sVar2 - sVar1) == 0)) {
      ft_validator_error(*param_6,9);
    }
    uVar9 = uVar9 + 1;
    if (uVar10 == uVar9) {
      return;
    }
  } while( true );
}



void gxv_kern_subtable_fmt1_subtable_setup
               (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined1 local_42 [10];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined2 **)(param_8 + 0x50) + 1;
  local_50 = CONCAT62(CONCAT42(CONCAT22(**(undefined2 **)(param_8 + 0x50),param_4),param_3),param_2)
  ;
  local_28 = param_7;
  local_38 = param_5;
  local_30 = param_6;
  gxv_set_length_by_ushort_offset(&local_50,&local_38,local_42,4,param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_StateTable_subtable_setup
               (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long in_FS_OFFSET;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_7;
  local_36 = param_2;
  local_34 = param_3;
  local_32 = param_4;
  local_28 = param_5;
  local_20 = param_6;
  gxv_set_length_by_ushort_offset(&local_36,&local_28,local_30,3,param_1,param_8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_mort_subtable_type2_subtable_setup
               (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_56 [14];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined2 **)(param_8 + 0x50);
  local_68 = CONCAT62(CONCAT42(CONCAT22(*local_20,param_4),param_3),param_2);
  local_60 = *(undefined4 *)(local_20 + 1);
  local_38 = param_7;
  local_30 = local_20 + 3;
  local_28 = local_20 + 4;
  local_20 = local_20 + 5;
  local_48 = param_5;
  local_40 = param_6;
  gxv_set_length_by_ushort_offset(&local_68,&local_48,local_56,6,param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_mort_subtable_type1_subtable_setup
               (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined1 local_42 [10];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined2 **)(param_8 + 0x50) + 1;
  local_50 = CONCAT62(CONCAT42(CONCAT22(**(undefined2 **)(param_8 + 0x50),param_4),param_3),param_2)
  ;
  local_28 = param_7;
  local_38 = param_5;
  local_30 = param_6;
  gxv_set_length_by_ushort_offset(&local_50,&local_38,local_42,4,param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_set_length_by_ulong_offset
               (long param_1,undefined8 *param_2,long *param_3,uint param_4,ulong param_5,
               undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  uVar4 = (ulong)param_4;
  puVar6 = param_2;
  do {
    puVar1 = (undefined8 *)*puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  } while (puVar6 != param_2 + uVar4);
  lVar7 = 0;
  do {
    *(undefined8 *)((long)param_3 + lVar7) = *(undefined8 *)(param_1 + lVar7);
    lVar7 = lVar7 + 8;
  } while (uVar4 * 8 - lVar7 != 0);
  param_3[uVar4] = param_5;
  qsort(param_3,(ulong)(param_4 + 1),8,gxv_compare_ulong_offset);
  if (param_5 < (ulong)param_3[uVar4]) {
    ft_validator_error(*param_6,9);
  }
  lVar7 = 0;
  do {
    plVar8 = param_3;
    uVar5 = 0;
    do {
      uVar9 = uVar5 + 1;
      if (*plVar8 == *(long *)(param_1 + lVar7)) {
        uVar9 = param_4;
        if (param_4 == uVar5) goto LAB_001011a0;
        goto LAB_0010115c;
      }
      plVar8 = plVar8 + 1;
      uVar5 = uVar9;
    } while (param_4 != uVar9);
    plVar8 = param_3 + uVar4;
LAB_001011a0:
    uVar5 = uVar9;
    ft_validator_error(*param_6,9);
LAB_0010115c:
    lVar2 = param_3[uVar5 + 1];
    lVar3 = *plVar8;
    **(long **)((long)param_2 + lVar7) = lVar2 - lVar3;
    if ((*(long *)(param_1 + lVar7) != 0) && (lVar2 - lVar3 == 0)) {
      ft_validator_error(*param_6,9);
    }
    lVar7 = lVar7 + 8;
    if (uVar4 * 8 - lVar7 == 0) {
      return;
    }
  } while( true );
}



void gxv_morx_subtable_type5_subtable_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = **(undefined8 **)(param_8 + 0x78);
  local_40 = *(undefined8 **)(param_8 + 0x78) + 1;
  local_48 = param_7;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_58 = param_5;
  local_50 = param_6;
  gxv_set_length_by_ulong_offset(&local_78,&local_58,local_38,4,param_1,param_8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_XStateTable_subtable_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_7;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_58 = param_5;
  local_50 = param_6;
  gxv_set_length_by_ulong_offset(&local_78,&local_58,local_38,3,param_1,param_8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_morx_subtable_type2_subtable_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = *(undefined8 **)(param_8 + 0x78);
  local_90 = *local_50;
  local_88 = local_50[1];
  local_80 = local_50[2];
  local_68 = param_7;
  local_60 = local_50 + 3;
  local_58 = local_50 + 4;
  local_50 = local_50 + 5;
  local_a8 = param_2;
  local_a0 = param_3;
  local_98 = param_4;
  local_78 = param_5;
  local_70 = param_6;
  gxv_set_length_by_ulong_offset(&local_a8,&local_78,local_48,6,param_1,param_8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_morx_subtable_type1_subtable_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = **(undefined8 **)(param_8 + 0x78);
  local_40 = *(undefined8 **)(param_8 + 0x78) + 1;
  local_48 = param_7;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_58 = param_5;
  local_50 = param_6;
  gxv_set_length_by_ulong_offset(&local_78,&local_58,local_38,4,param_1,param_8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_sfntName_validate(ushort param_1,ushort param_2,ushort param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 auStack_48 [6];
  ushort local_42;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < param_2) || (param_3 < param_1)) {
    ft_validator_error(*param_4,8);
  }
  iVar1 = FT_Get_Sfnt_Name_Count(param_4[1]);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = FT_Get_Sfnt_Name(param_4[1],iVar3,auStack_48);
      if ((iVar2 == 0) && (local_42 == param_1)) goto LAB_00101528;
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  ft_validator_error(*param_4,8);
LAB_00101528:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_trak_trackData_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  long in_FS_OFFSET;
  ushort *local_d0;
  undefined4 local_b8 [2];
  ushort **local_b0;
  ushort *local_a8;
  undefined8 local_a0;
  char *local_98;
  ushort *local_90;
  long local_88;
  char *local_80;
  long local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  char *local_50;
  long local_40;
  
  puVar9 = param_1 + 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = &local_a8;
  puVar5 = param_2;
  if (param_2 == (ushort *)0x0) {
    puVar5 = *(ushort **)(*param_3 + 0xd0);
  }
  if (puVar5 < puVar9) {
    ft_validator_error(*param_3,8);
  }
  uVar2 = *(uint *)(param_1 + 2);
  uVar11 = *param_1;
  local_a0 = 8;
  uVar4 = param_1[1] << 8 | param_1[1] >> 8;
  uVar10 = uVar11 << 8 | uVar11 >> 8;
  local_98 = "trackData header";
  *(undefined4 *)param_3[2] = 0xffff;
  puVar5 = param_2;
  if (param_2 == (ushort *)0x0) {
    puVar5 = *(ushort **)(*param_3 + 0xd0);
  }
  local_a8 = param_1;
  if (puVar5 < puVar9 + (ulong)uVar10 * 4) {
    ft_validator_error(*param_3,8);
  }
  if (uVar11 == 0) {
    local_88 = 0;
  }
  else {
    param_1 = param_1 + 8;
    uVar11 = 0;
    do {
      uVar1 = param_1[-2];
      puVar5 = (ushort *)param_3[2];
      uVar6 = param_1[-1] << 8 | param_1[-1] >> 8;
      if (uVar6 < *puVar5) {
        *puVar5 = uVar6;
      }
      if (puVar5[1] < uVar6) {
        puVar5[1] = uVar6;
      }
      gxv_sfntName_validate(uVar1 << 8 | uVar1 >> 8,0x100,0x7fff,param_3);
      puVar5 = param_1;
      if (uVar11 < uVar10) {
        puVar5 = (ushort *)((long)(int)((uVar10 - 1 & 0xffff) * 8 + 4) + (long)puVar9);
      }
      uVar11 = uVar11 + 1;
      param_1 = param_1 + 4;
    } while (uVar11 < uVar10);
    local_88 = (long)puVar5 - (long)puVar9;
  }
  lVar8 = *param_3;
  param_3[3] = local_88;
  local_80 = "trackTable";
  lVar7 = (long)(int)((uint)uVar4 * 4);
  lVar12 = *(long *)(lVar8 + 200) +
           (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  puVar5 = param_2;
  if (param_2 == (ushort *)0x0) {
    puVar5 = *(ushort **)(lVar8 + 0xd0);
  }
  local_90 = puVar9;
  if (puVar5 < (ushort *)(lVar12 + lVar7)) {
    ft_validator_error(lVar8,8);
    lVar8 = *param_3;
  }
  puVar9 = (ushort *)param_3[2];
  iVar3 = (uint)uVar4 * 2;
  local_68 = "sizeTable";
  uVar11 = puVar9[1];
  local_d0 = param_2;
  if (param_2 == (ushort *)0x0) {
    local_d0 = *(ushort **)(lVar8 + 0xd0);
  }
  local_78 = lVar12;
  local_70 = lVar7;
  if (local_d0 < (ushort *)(*(long *)(lVar8 + 200) + (ulong)uVar11 + (long)iVar3)) {
    ft_validator_error(lVar8,8);
    puVar9 = (ushort *)param_3[2];
    lVar8 = *param_3;
    uVar11 = puVar9[1];
  }
  local_b8[0] = 4;
  local_60 = *(long *)(lVar8 + 200) + (ulong)*puVar9;
  local_58 = (long)(int)(((uint)uVar11 - (uint)*puVar9) + iVar3);
  local_50 = "trackValue array";
  gxv_odtect_validate(local_b8,param_3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_mort_subtable_type1_entry_validate
               (undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,long *param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  uVar2 = *param_3;
  if (((param_2 & 0x3fff) != 0) && (1 < *(uint *)(*param_6 + 0xd8))) {
    ft_validator_error(*param_6,8);
  }
  uVar1 = ((ushort *)param_6[10])[1];
  uVar4 = (uint)*(ushort *)param_6[10];
  *(short *)(param_6 + 8) = (short)((int)(uVar4 + (short)uVar2 * -2) / 2);
  uVar4 = (int)((uVar1 + uVar4 & 0xffff) + (short)uVar2 * -2) / 2;
  uVar3 = (undefined2)uVar4;
  if ((long)(ulong)(uVar4 & 0xffff) <= *(long *)(param_6[1] + 0x20)) {
    uVar3 = (undefined2)*(long *)(param_6[1] + 0x20);
  }
  *(undefined2 *)((long)param_6 + 0x42) = uVar3;
  return;
}



void gxv_BinSrchHeader_validate_constprop_0
               (ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,long *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  uVar10 = *param_3;
  puVar2 = param_1;
  if (uVar10 == 0) {
    puVar2 = param_1 + 1;
    if (param_2 == (ushort *)0x0) {
      if (*(ushort **)(*param_5 + 0xd0) < puVar2) goto LAB_00101b33;
    }
    else if (param_2 < puVar2) {
LAB_00101b33:
      ft_validator_error(*param_5,8);
    }
    uVar10 = *param_1 << 8 | *param_1 >> 8;
  }
  uVar9 = *param_4;
  puVar3 = puVar2;
  if (uVar9 == 0) {
    puVar3 = puVar2 + 1;
    if (param_2 == (ushort *)0x0) {
      if (*(ushort **)(*param_5 + 0xd0) < puVar3) goto LAB_00101b73;
    }
    else if (param_2 < puVar3) {
LAB_00101b73:
      ft_validator_error(*param_5,8);
    }
    uVar9 = *puVar2 << 8 | *puVar2 >> 8;
  }
  if (param_2 == (ushort *)0x0) {
    param_2 = *(ushort **)(*param_5 + 0xd0);
  }
  if (param_2 < puVar3 + 3) {
    ft_validator_error(*param_5,8);
  }
  uVar6 = *puVar3 << 8 | *puVar3 >> 8;
  uVar7 = puVar3[1] << 8 | puVar3[1] >> 8;
  uVar8 = puVar3[2] << 8 | puVar3[2] >> 8;
  if (uVar10 == 0) {
    ft_validator_error(*param_5,8);
  }
  if (uVar9 == 0) {
    if ((uVar7 == 0 && uVar6 == 0) && uVar8 == 0) goto LAB_00101a73;
    ft_validator_error(*param_5,8);
LAB_00101a0e:
    uVar4 = 0;
    uVar5 = uVar10;
  }
  else {
    if (uVar9 == 1) goto LAB_00101a0e;
    uVar5 = 1;
    uVar1 = 1;
    do {
      uVar4 = uVar1;
      uVar5 = uVar5 * 2;
      uVar1 = uVar4 + 1;
    } while ((uint)uVar5 * 2 <= (uint)uVar9);
    uVar5 = uVar5 * uVar10;
  }
  if (((uVar7 != uVar4 || uVar6 != uVar5) || ((ushort)(uVar9 * uVar10 - uVar5) != uVar8)) &&
     (1 < *(uint *)(*param_5 + 0xd8))) {
    ft_validator_error(*param_5,8);
  }
LAB_00101a73:
  if (*param_3 == 0) {
    *param_3 = uVar10;
  }
  if (*param_4 == 0) {
    *param_4 = uVar9;
  }
  param_5[3] = (long)(puVar3 + 3) - (long)param_1;
  return;
}



void gxv_ctlPoint_validate(undefined2 param_1,ushort param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_3[1];
  iVar2 = FT_Load_Glyph(lVar1,param_1,0x808);
  if (iVar2 != 0) {
    ft_validator_error(*param_3,0x10);
  }
  if (param_2 < *(ushort *)(*(long *)(lVar1 + 0x98) + 0xca)) {
    return;
  }
  ft_validator_error(*param_3,8);
  return;
}



void gxv_opbd_LookupValue_validate(undefined2 param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  uVar1 = *param_2;
  puVar2 = *(undefined1 **)(*param_3 + 0xd0);
  puVar4 = (undefined1 *)(*(long *)(*param_3 + 200) + (ulong)uVar1);
  if (uVar1 < *(ushort *)(param_3[2] + 2)) {
    *(ushort *)(param_3[2] + 2) = uVar1;
  }
  puVar6 = puVar4;
  do {
    puVar5 = puVar6 + 2;
    puVar3 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(*param_3 + 0xd0);
    }
    if (puVar3 < puVar5) {
      ft_validator_error(*param_3,8);
    }
    if ((*(short *)param_3[2] != 0) && (CONCAT11(*puVar6,puVar6[1]) != -1)) {
      gxv_ctlPoint_validate(param_1,CONCAT11(*puVar6,puVar6[1]),param_3);
    }
    puVar6 = puVar5;
  } while (puVar5 != puVar4 + 8);
  return;
}



void gxv_lcar_LookupValue_validate(undefined2 param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  lVar2 = *param_3;
  puVar5 = *(ushort **)(lVar2 + 0xd0);
  puVar4 = (ushort *)(*(long *)(lVar2 + 200) + (ulong)*param_2);
  puVar1 = puVar4 + 1;
  if (puVar5 == (ushort *)0x0) {
    if (*(ushort **)(lVar2 + 0xd0) < puVar1) {
      ft_validator_error(lVar2,8);
      lVar2 = *param_3;
      uVar3 = *puVar4 << 8 | *puVar4 >> 8;
    }
    else {
      uVar3 = *puVar4 << 8 | *puVar4 >> 8;
    }
    puVar5 = *(ushort **)(lVar2 + 0xd0);
  }
  else {
    if (puVar5 < puVar1) {
      ft_validator_error(lVar2,8);
    }
    uVar3 = *puVar4 << 8 | *puVar4 >> 8;
  }
  if (puVar5 < (ushort *)((ulong)((uint)uVar3 * 2) + (long)puVar1)) {
    ft_validator_error(*param_3,8);
  }
  if (uVar3 != 0) {
    do {
      while (puVar5 = puVar1 + 1, *(short *)param_3[2] == 1) {
        gxv_ctlPoint_validate
                  (param_1,CONCAT11((char)*puVar1,*(undefined1 *)((long)puVar1 + 1)),param_3);
        puVar1 = puVar5;
        if (puVar5 == puVar4 + (ulong)uVar3 + 1) {
          return;
        }
      }
      puVar1 = puVar5;
    } while (puVar5 != puVar4 + (ulong)uVar3 + 1);
  }
  return;
}



void gxv_morx_subtable_type1_LookupValue_validate
               (undefined8 param_1,ushort *param_2,undefined8 *param_3)

{
  if ((long)(ulong)*param_2 <= *(long *)(param_3[1] + 0x20)) {
    return;
  }
  ft_validator_error(*param_3,0x10);
  return;
}



void gxv_mort_featurearray_validate(ushort *param_1,ushort *param_2,long param_3,long *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte bVar10;
  long lVar11;
  long local_40;
  
  local_40 = param_3;
  if (param_3 != 0) {
    local_40 = param_3 * 0xc;
    puVar8 = param_1;
    do {
      while( true ) {
        lVar11 = *param_4;
        puVar9 = puVar8 + 6;
        puVar6 = param_2;
        if (param_2 == (ushort *)0x0) {
          puVar6 = *(ushort **)(lVar11 + 0xd0);
        }
        if (puVar6 < puVar9) {
          ft_validator_error(lVar11,8);
          lVar11 = *param_4;
        }
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        iVar3 = *(int *)(puVar8 + 2);
        iVar4 = *(int *)(puVar8 + 4);
        uVar5 = uVar1 << 8 | uVar1 >> 8;
        puVar8 = puVar9;
        if ((0x67 < uVar5) || (uVar7 = (ulong)uVar5, gxv_feat_registry[uVar7 * 4] == '\0')) break;
        bVar10 = gxv_feat_registry[uVar7 * 4 + 3];
        if (gxv_feat_registry[uVar7 * 4 + 2] != '\0') {
          bVar10 = bVar10 * '\x02';
        }
        if (((ushort)bVar10 < (ushort)(uVar2 << 8 | uVar2 >> 8)) && (1 < *(uint *)(lVar11 + 0xd8)))
        {
          ft_validator_error(lVar11,8);
        }
LAB_00101f20:
        if (puVar9 == param_1 + param_3 * 6) goto LAB_00101f29;
      }
      if (*(uint *)(lVar11 + 0xd8) < 2) goto LAB_00101f20;
      ft_validator_error(lVar11,8);
    } while (puVar9 != param_1 + param_3 * 6);
LAB_00101f29:
    if ((((uVar1 != 0) && (uVar2 != 0x100)) && (iVar3 != 0)) && (iVar4 != 0)) {
      ft_validator_error(*param_4,8);
    }
  }
  param_4[3] = local_40;
  return;
}



void gxv_XStateTable_validate(uint *param_1,uint *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ushort *puVar17;
  ushort uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ushort *puVar21;
  undefined1 *puVar22;
  long in_FS_OFFSET;
  long local_60;
  ulong local_58;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = param_2;
  if (param_2 == (uint *)0x0) {
    puVar8 = *(uint **)(*param_3 + 0xd0);
  }
  if (puVar8 < param_1 + 4) {
    ft_validator_error(*param_3,8);
  }
  uVar11 = *param_1;
  uVar9 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18);
  param_3[0x13] = uVar9;
  uVar11 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar14 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                  uVar11 << 0x18);
  uVar19 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18);
  uVar16 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
  if (0xffff < uVar9) {
    ft_validator_error(*param_3,8);
  }
  if ((code *)param_3[0x12] != (code *)0x0) {
    (*(code *)param_3[0x12])(param_1 + 4,param_2,param_3);
  }
  pcVar10 = (code *)param_3[0x10];
  if (pcVar10 == (code *)0x0) {
    pcVar10 = gxv_XStateTable_subtable_setup;
  }
  (*pcVar10)((long)param_2 - (long)param_1,uVar14,uVar19,uVar16,&local_60,&local_58,&local_50,
             param_3);
  if (uVar14 == 0) {
    *(short *)(param_3 + 0x14) = (short)param_3[0x13] + -1;
  }
  else {
    *(undefined2 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    param_3[5] = (long)gxv_XClassTable_lookupval_validate;
    param_3[6] = (long)gxv_XClassTable_lookupfmt4_transit;
    gxv_LookupTable_validate((long)param_1 + uVar14,local_60 + uVar14 + (long)param_1,param_3);
  }
  if (uVar19 == 0) {
LAB_001020e3:
    if (uVar16 == 0) goto LAB_0010220b;
    iVar13 = 1;
    uVar11 = 0;
  }
  else {
    uVar3 = *(ushort *)(param_3 + 0x14);
    puVar20 = (undefined1 *)(uVar19 + (long)param_1);
    iVar13 = uVar3 + 1;
    puVar22 = puVar20 + local_58;
    if (puVar22 < puVar20 + iVar13 * 4) {
      ft_validator_error(*param_3,8);
    }
    iVar13 = iVar13 * 2;
    if (puVar22 < puVar20 + iVar13) {
      local_58 = 0;
      goto LAB_001020e3;
    }
    uVar11 = 0;
    puVar15 = puVar20;
    do {
      uVar18 = 0;
      do {
        uVar2 = *puVar15;
        puVar1 = puVar15 + 1;
        puVar15 = puVar15 + 2;
        if ((ushort)uVar11 < CONCAT11(uVar2,*puVar1)) {
          uVar11 = (uint)CONCAT11(uVar2,*puVar1);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 <= uVar3);
    } while (puVar15 + iVar13 <= puVar22);
    local_58 = (long)puVar15 - (long)puVar20;
    if ((short)uVar11 == 0) goto LAB_001020e3;
    if (uVar16 == 0) {
      ft_validator_error(*param_3,9);
      goto LAB_0010220b;
    }
    iVar13 = uVar11 + 1;
  }
  uVar9 = local_58;
  puVar17 = (ushort *)(uVar16 + (long)param_1);
  uVar3 = *(ushort *)(param_3 + 0x14);
  if ((ushort *)(local_50 + (long)puVar17) <
      (ushort *)((long)(((int)param_3[0xe] / 2 + 4) * iVar13) + (long)puVar17)) {
    ft_validator_error(*param_3,8);
  }
  uVar18 = 0;
  puVar7 = puVar17;
  do {
    puVar21 = puVar7 + 2;
    if ((ushort *)(local_50 + (long)puVar17) < puVar21) {
      ft_validator_error(*param_3,8);
    }
    uVar4 = puVar7[1];
    uVar12 = *puVar7 << 8 | *puVar7 >> 8;
    if ((uVar9 < (ulong)(long)(int)((uint)uVar12 + (uint)uVar12)) &&
       (1 < *(uint *)(*param_3 + 0xd8))) {
      ft_validator_error(*param_3,9);
    }
    if (((int)((ulong)uVar12 % (ulong)(long)(int)(uVar3 + 1)) != 0) &&
       (1 < *(uint *)(*param_3 + 0xd8))) {
      ft_validator_error(*param_3,9);
    }
    switch((int)param_3[0xe]) {
    default:
      if (1 < *(uint *)(*param_3 + 0xd8)) {
        ft_validator_error(*param_3,8);
      }
      goto LAB_0010220b;
    case 2:
    case 3:
      puVar21 = (ushort *)((long)puVar7 + 5);
      local_48 = CONCAT71(local_48._1_7_,(char)puVar7[2]);
      break;
    case 4:
    case 5:
      puVar21 = puVar7 + 3;
      local_48 = CONCAT62(local_48._2_6_,puVar7[2] << 8 | puVar7[2] >> 8);
      break;
    case 8:
      uVar5 = *(uint *)(puVar7 + 2);
      puVar21 = puVar7 + 4;
      local_48 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18);
      break;
    case 9:
      uVar5 = *(uint *)(puVar7 + 2);
      puVar21 = puVar7 + 4;
      local_48 = (ulong)(int)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18);
      break;
    case -1:
      local_48 = (ulong)local_48._1_7_ << 8;
    }
    if ((code *)param_3[0x11] != (code *)0x0) {
      (*(code *)param_3[0x11])
                ((ulong)uVar12 / (ulong)(long)(int)(uVar3 + 1),uVar4 << 8 | uVar4 >> 8,&local_48,
                 param_1,param_2,param_3);
    }
    uVar18 = uVar18 + 1;
    puVar7 = puVar21;
  } while (uVar18 <= (ushort)uVar11);
LAB_0010220b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_morx_subtable_type5_validate(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar1 < param_1 + 0xcU) {
    ft_validator_error(*param_3,8);
  }
  param_3[0xf] = (long)auStack_38;
  param_3[0x12] = (long)gxv_morx_subtable_type5_insertionGlyphList_load;
  *(undefined4 *)(param_3 + 0xe) = 8;
  param_3[0x10] = (long)gxv_morx_subtable_type5_subtable_setup;
  param_3[0x11] = (long)gxv_morx_subtable_type5_entry_validate;
  gxv_XStateTable_validate(param_1,param_2,param_3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_morx_subtable_type2_validate(long param_1,ulong param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar4 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar4 < param_1 + 0x1cU) {
    ft_validator_error(*param_3,8);
  }
  param_3[0xf] = (long)auStack_58;
  param_3[0x12] = (long)gxv_morx_subtable_type2_opttable_load;
  *(undefined4 *)(param_3 + 0xe) = 4;
  param_3[0x10] = (long)gxv_morx_subtable_type2_subtable_setup;
  param_3[0x11] = (long)gxv_morx_subtable_type2_entry_validate;
  gxv_XStateTable_validate(param_1,param_2,param_3);
  lVar3 = *(long *)(param_3[0xf] + 0x10);
  if (lVar3 == 0) {
LAB_001026d0:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar7 = (undefined1 *)(param_1 + lVar3 + *(long *)(param_3[0xf] + 0x28));
  puVar5 = (undefined1 *)(param_1 + lVar3);
LAB_00102660:
  if (puVar5 < puVar7) {
    puVar6 = puVar5 + 2;
    if (puVar6 <= puVar7) goto code_r0x0010266e;
    ft_validator_error(*param_3,8);
    if ((long)(ulong)CONCAT11(*puVar5,puVar5[1]) < *(long *)(param_3[1] + 0x20)) goto LAB_00102688;
  }
  goto LAB_001026d0;
code_r0x0010266e:
  uVar2 = *puVar5;
  puVar1 = puVar5 + 1;
  puVar5 = puVar6;
  if ((long)(ulong)CONCAT11(uVar2,*puVar1) < *(long *)(param_3[1] + 0x20)) {
LAB_00102688:
    puVar5 = puVar6;
    if (1 < *(uint *)(*param_3 + 0xd8)) {
      ft_validator_error(*param_3,0x10);
    }
  }
  goto LAB_00102660;
}



void gxv_morx_subtable_type1_validate(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort uVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar2 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar2 < param_1 + 10U) {
    ft_validator_error(*param_3,8);
  }
  local_48 = 0;
  param_3[0xf] = (long)&local_58;
  param_3[0x12] = (long)gxv_morx_subtable_type1_substitutionTable_load;
  *(undefined4 *)(param_3 + 0xe) = 8;
  param_3[0x10] = (long)gxv_morx_subtable_type1_subtable_setup;
  param_3[0x11] = (long)gxv_morx_subtable_type1_entry_validate;
  gxv_XStateTable_validate(param_1,param_2,param_3);
  lVar1 = param_3[0xf];
  *(undefined4 *)(param_3 + 4) = 0;
  pbVar4 = (byte *)(local_50 + local_58 + param_1);
  param_3[5] = (long)gxv_morx_subtable_type1_LookupValue_validate;
  param_3[6] = (long)gxv_morx_subtable_type1_LookupFmt4_transit;
  if (*(short *)(lVar1 + 0x10) != 0) {
    uVar6 = 0;
    pbVar5 = (byte *)(param_1 + local_58);
    do {
      pbVar3 = pbVar4;
      if (pbVar4 == (byte *)0x0) {
        pbVar3 = *(byte **)(*param_3 + 0xd0);
      }
      if (pbVar3 < pbVar5 + 4) {
        ft_validator_error(*param_3,8);
      }
      uVar6 = uVar6 + 1;
      gxv_LookupTable_validate
                ((byte *)(param_1 + local_58) +
                 ((uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[3] |
                 (uint)pbVar5[2] << 8),pbVar4,param_3);
      pbVar5 = pbVar5 + 4;
    } while (uVar6 < *(ushort *)(lVar1 + 0x10));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_morx_subtable_type0_validate(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar1 < param_1 + 8U) {
    ft_validator_error(*param_3,8);
  }
  param_3[0xf] = 0;
  param_3[0x12] = 0;
  param_3[0x10] = 0;
  *(undefined4 *)(param_3 + 0xe) = 0xffffffff;
  param_3[0x11] = (long)gxv_morx_subtable_type0_entry_validate;
  gxv_XStateTable_validate(param_1,param_2,param_3);
  return;
}



void gxv_prop_property_validate(ushort param_1,ushort param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  
  if ((param_2 != 0) && ((short)param_1 < 0)) {
    lVar1 = param_3[1];
    iVar2 = FT_Load_Glyph(lVar1,param_2,0x800);
    if (iVar2 != 0) {
      ft_validator_error(*param_3,0x10);
    }
    lVar1 = *(long *)(lVar1 + 0x98);
    if ((*(long *)(lVar1 + 0x80) != 0) || (*(long *)(lVar1 + 0x88) != 0)) {
      ft_validator_error(*param_3,8);
    }
  }
  if ((param_1 & 0x1000) != 0) {
    if ((param_1 & 0xf00) == 0) {
      ft_validator_error(*param_3,9);
    }
    else {
      uVar3 = (param_1 & 0xf00) >> 8;
      if ((param_1 & 0xf00) >> 0xb != 0) {
        if (param_2 <= (ushort)((uVar3 & 7) + 1)) {
          ft_validator_error(*param_3,8);
        }
        goto LAB_001029b5;
      }
      param_2 = uVar3 + param_2;
    }
    if (((param_2 != 0xffff) && (*(long *)(param_3[1] + 0x20) < (long)(ulong)param_2)) &&
       (1 < *(uint *)(*param_3 + 0xd8))) {
      ft_validator_error(*param_3,0x10);
    }
  }
LAB_001029b5:
  if (((param_1 & 0x80) != 0) && (*(long *)param_3[2] == 0x10000)) {
    ft_validator_error(*param_3,8);
  }
  if ((param_1 & 0x60) != 0) {
    ft_validator_error(*param_3,8);
  }
  if ((0xb < (param_1 & 0x1f)) && ((*(long *)param_3[2] - 0x10000U & 0xfffffffffffeffff) == 0)) {
    ft_validator_error(*param_3,8);
    return;
  }
  return;
}



void gxv_prop_LookupValue_validate(undefined2 param_1,undefined2 *param_2)

{
  gxv_prop_property_validate(*param_2,param_1);
  return;
}



void gxv_morx_subtable_type4_validate(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(code **)(param_3 + 0x28) = gxv_mort_subtable_type4_lookupval_validate;
  *(code **)(param_3 + 0x30) = gxv_mort_subtable_type4_lookupfmt4_transit;
  gxv_LookupTable_validate();
  return;
}



void gxv_morx_subtable_type0_entry_validate(undefined8 param_1,uint param_2)

{
  undefined8 *in_R9;
  
  if ((param_2 & 0x1ff0) == 0) {
    return;
  }
  ft_validator_error(*in_R9,8);
  return;
}



void gxv_mort_subtable_type5_subtable_setup
               (undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined2 *puVar1;
  long in_FS_OFFSET;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined2 **)(param_8 + 0x50);
  local_48 = param_7;
  local_66 = param_2;
  local_64 = param_3;
  local_62 = param_4;
  local_58 = param_5;
  local_50 = param_6;
  gxv_set_length_by_ushort_offset(&local_66,&local_58,local_60,3,param_1);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(undefined8 *)(puVar1 + 4) = param_5;
  *(undefined8 *)(puVar1 + 8) = param_6;
  *(undefined8 *)(puVar1 + 0xc) = param_7;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_kern_subtable_fmt1_entry_validate
               (undefined8 param_1,ushort param_2,undefined8 param_3,long param_4,undefined8 param_5
               ,long *param_6)

{
  ushort uVar1;
  ushort *puVar2;
  ulong uVar3;
  
  puVar2 = (ushort *)param_6[10];
  uVar1 = *puVar2;
  if ((param_2 & 0x3fff) < uVar1) {
    ft_validator_error(*param_6,9);
    uVar1 = *puVar2;
  }
  uVar3 = param_4 + (ulong)uVar1 + (ulong)puVar2[1];
  if (uVar3 == 0) {
    uVar3 = *(ulong *)(*param_6 + 0xd0);
  }
  if ((ulong)(ushort)((param_2 & 0x3fff) + 4) + param_4 <= uVar3) {
    return;
  }
  ft_validator_error(*param_6,8);
  return;
}



void gxv_bsln_LookupValue_validate(undefined8 param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (0x1f < uVar1) {
    ft_validator_error(*param_3,8);
  }
  if ((*(long *)param_3[2] != 0) && (*(short *)(*(long *)param_3[2] + (ulong)uVar1 * 2) == -1)) {
    ft_validator_error(*param_3,8);
    return;
  }
  return;
}



void gxv_bsln_parts_fmt1_validate(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar1 < param_1 + 0x40U) {
    ft_validator_error(*param_3,8);
  }
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  param_3[5] = (long)gxv_bsln_LookupValue_validate;
  param_3[6] = (long)gxv_bsln_LookupFmt4_transit;
  gxv_LookupTable_validate(param_1 + 0x40U,param_2);
  return;
}



void gxv_mort_subtable_type5_entry_validate
               (undefined8 param_1,uint param_2,ulong *param_3,long param_4,ulong param_5,
               long *param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = param_2 >> 5 & 0x1f;
  uVar1 = *param_3;
  if (((uVar1 & 0xffff0000) != 0) && ((char)uVar2 != '\0')) {
    uVar3 = param_5;
    if (param_5 == 0) {
      uVar3 = *(ulong *)(*param_6 + 0xd0);
    }
    if (uVar3 < (uVar1 >> 0x10 & 0xffff) + (ulong)(uVar2 * 2) + param_4) {
      ft_validator_error(*param_6,8);
    }
  }
  if (((short)uVar1 != 0) && ((char)(param_2 & 0x1f) != '\0')) {
    if (param_5 == 0) {
      param_5 = *(ulong *)(*param_6 + 0xd0);
    }
    if (param_5 < param_4 + (uVar1 & 0xffff) + (ulong)((param_2 & 0x1f) * 2)) {
      ft_validator_error(*param_6,8);
      return;
    }
  }
  return;
}



void gxv_morx_subtable_type5_entry_validate
               (undefined8 param_1,uint param_2,ulong *param_3,long param_4,ulong param_5,
               long *param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = param_2 >> 5 & 0x1f;
  uVar1 = *param_3;
  if (((uVar1 & 0xff0000) != 0) && ((char)uVar2 != '\0')) {
    uVar3 = param_5;
    if (param_5 == 0) {
      uVar3 = *(ulong *)(*param_6 + 0xd0);
    }
    if (uVar3 < (ulong)(uVar2 * 2) + (ulong)((int)(uVar1 >> 0x10) * 2 & 0x1fe) + param_4) {
      ft_validator_error(*param_6,8);
    }
  }
  if (((short)uVar1 != 0) && ((char)(param_2 & 0x1f) != '\0')) {
    if (param_5 == 0) {
      param_5 = *(ulong *)(*param_6 + 0xd0);
    }
    if (param_5 < param_4 + (ulong)((int)uVar1 * 2 & 0x1fffe) + (ulong)((param_2 & 0x1f) * 2)) {
      ft_validator_error(*param_6,8);
      return;
    }
  }
  return;
}



ushort gxv_XClassTable_lookupfmt4_transit
                 (short param_1,short *param_2,ushort *param_3,long *param_4)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)((ulong)(ushort)(*param_2 + param_1 * 2) + param_4[7]);
  if (param_3 == (ushort *)0x0) {
    param_3 = *(ushort **)(*param_4 + 0xd0);
  }
  if (puVar1 + 1 <= param_3) {
    return *puVar1 << 8 | *puVar1 >> 8;
  }
  ft_validator_error(*param_4,8);
  return *puVar1 << 8 | *puVar1 >> 8;
}



ushort gxv_prop_LookupFmt4_transit(short param_1,short *param_2,ushort *param_3,long *param_4)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)((ulong)(ushort)(*param_2 + param_1 * 2) + param_4[7]);
  if (param_3 == (ushort *)0x0) {
    param_3 = *(ushort **)(*param_4 + 0xd0);
  }
  if (puVar1 + 1 <= param_3) {
    return *puVar1 << 8 | *puVar1 >> 8;
  }
  ft_validator_error(*param_4,8);
  return *puVar1 << 8 | *puVar1 >> 8;
}



ushort gxv_morx_subtable_type1_LookupFmt4_transit
                 (short param_1,short *param_2,ushort *param_3,long *param_4)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)((ulong)(ushort)(*param_2 + param_1 * 2) + param_4[7]);
  if (param_3 == (ushort *)0x0) {
    param_3 = *(ushort **)(*param_4 + 0xd0);
  }
  if (puVar1 + 1 <= param_3) {
    return *puVar1 << 8 | *puVar1 >> 8;
  }
  ft_validator_error(*param_4,8);
  return *puVar1 << 8 | *puVar1 >> 8;
}



ushort gxv_mort_subtable_type4_lookupfmt4_transit
                 (short param_1,short *param_2,ushort *param_3,long *param_4)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)((ulong)(ushort)(*param_2 + param_1 * 2) + param_4[7]);
  if (param_3 == (ushort *)0x0) {
    param_3 = *(ushort **)(*param_4 + 0xd0);
  }
  if (puVar1 + 1 <= param_3) {
    return *puVar1 << 8 | *puVar1 >> 8;
  }
  ft_validator_error(*param_4,8);
  return *puVar1 << 8 | *puVar1 >> 8;
}



void gxv_LookupTable_fmt6_validate(long param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort uVar8;
  ushort *puVar9;
  long in_FS_OFFSET;
  ushort local_46;
  ushort local_44;
  ushort local_42;
  long local_40;
  ushort *puVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_46 = 0;
  local_44 = 0;
  gxv_BinSrchHeader_validate_constprop_0(param_1,param_2,&local_46,&local_44,param_3);
  uVar3 = local_44;
  uVar2 = local_46;
  puVar9 = (ushort *)(param_1 + param_3[3]);
  if ((local_46 & 0xfffb) == 0) {
    if (local_44 == 0) goto LAB_001032e1;
  }
  else {
    if (local_44 == 0) goto LAB_001032e1;
    ft_validator_error(*param_3,8);
  }
  puVar6 = puVar9;
  uVar5 = 0;
  do {
    puVar7 = puVar6 + 2;
    puVar4 = param_2;
    if (param_2 == (ushort *)0x0) {
      puVar4 = *(ushort **)(*param_3 + 0xd0);
    }
    if (puVar4 < puVar7) {
      ft_validator_error(*param_3,8);
    }
    uVar1 = *puVar6;
    local_42 = puVar6[1] << 8 | puVar6[1] >> 8;
    uVar8 = uVar1 << 8 | uVar1 >> 8;
    if (uVar1 != 0xffff) {
      if ((*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar8) && (1 < *(uint *)(*param_3 + 0xd8))) {
        ft_validator_error(*param_3,0x10);
      }
      if ((uVar8 < uVar5) && (1 < *(uint *)(*param_3 + 0xd8))) {
        ft_validator_error(*param_3,0x10);
      }
    }
    (*(code *)param_3[5])(uVar8,&local_42,param_3);
    puVar6 = puVar7;
    uVar5 = uVar8;
  } while (puVar7 != puVar9 + (ulong)uVar3 * 2);
  puVar9 = puVar9 + (ulong)uVar3 * 2;
LAB_001032e1:
  if (puVar9 < *(ushort **)(*param_3 + 0xd0)) {
    do {
      if (((char)*puVar9 != -1) || (*(char *)((long)puVar9 + 1) != -1)) break;
      puVar9 = (ushort *)((long)puVar9 + (ulong)uVar2);
    } while (puVar9 < *(ushort **)(*param_3 + 0xd0));
  }
  param_3[3] = (long)puVar9 - param_1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_LookupTable_fmt2_validate(long param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar9;
  ushort uVar10;
  ushort uVar11;
  long in_FS_OFFSET;
  ushort *local_68;
  short local_46;
  ushort local_44;
  ushort local_42;
  long local_40;
  ushort *puVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_46 = 0;
  local_44 = 0;
  gxv_BinSrchHeader_validate_constprop_0(param_1,param_2,&local_46,&local_44,param_3);
  uVar3 = local_44;
  sVar2 = local_46;
  local_68 = (ushort *)(param_3[3] + param_1);
  if ((local_46 == 0) || (local_46 == 6)) {
    if (local_44 == 0) goto LAB_0010356d;
  }
  else {
    if (local_44 == 0) goto LAB_0010356d;
    ft_validator_error(*param_3,8);
  }
  uVar11 = 0;
  puVar7 = local_68;
  do {
    puVar8 = puVar7 + 3;
    puVar5 = param_2;
    if (param_2 == (ushort *)0x0) {
      puVar5 = *(ushort **)(*param_3 + 0xd0);
    }
    if (puVar5 < puVar8) {
      ft_validator_error(*param_3,8);
    }
    uVar6 = *puVar7;
    uVar1 = puVar7[1];
    local_42 = puVar7[2] << 8 | puVar7[2] >> 8;
    uVar10 = uVar6 << 8 | uVar6 >> 8;
    uVar4 = uVar1 << 8 | uVar1 >> 8;
    if (((uVar1 != 0xffff) && (*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar4)) &&
       (1 < *(uint *)(*param_3 + 0xd8))) {
      ft_validator_error(*param_3,0x10);
    }
    if (uVar6 == 0xffff) {
      uVar6 = 0xffff;
LAB_0010352b:
      do {
        uVar11 = uVar4 + 1;
        (*(code *)param_3[5])(uVar4,&local_42,param_3);
        uVar4 = uVar11;
      } while (uVar11 <= uVar6);
    }
    else {
      if ((*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar10) && (1 < *(uint *)(*param_3 + 0xd8)))
      {
        ft_validator_error(*param_3,0x10);
      }
      if ((uVar10 < uVar11) && (1 < *(uint *)(*param_3 + 0xd8))) {
        ft_validator_error(*param_3,0x10);
      }
      uVar6 = uVar10;
      if (uVar4 <= uVar10) goto LAB_0010352b;
      lVar9 = *param_3;
      if (1 < *(uint *)(lVar9 + 0xd8)) {
        ft_validator_error(lVar9,0x10);
        lVar9 = *param_3;
      }
      uVar6 = uVar4;
      uVar4 = uVar10;
      if (*(int *)(lVar9 + 0xd8) != 1) goto LAB_0010352b;
    }
    puVar7 = puVar8;
  } while (puVar8 != local_68 + (ulong)uVar3 * 3);
  local_68 = local_68 + (ulong)uVar3 * 3;
LAB_0010356d:
  gxv_LookupTable_fmt2_skip_endmarkers(local_68,sVar2,param_3);
  param_3[3] = (long)local_68 + (param_3[3] - param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_mort_subtable_type4_lookupval_validate(undefined8 param_1,ushort *param_2,long *param_3)

{
  if (((*param_2 != 0xffff) && (*(long *)(param_3[1] + 0x20) < (long)(ulong)*param_2)) &&
     (1 < *(uint *)(*param_3 + 0xd8))) {
    ft_validator_error(*param_3,0x10);
    return;
  }
  return;
}



void gxv_LookupTable_fmt4_validate(long param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar10;
  short sVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort *puVar14;
  long in_FS_OFFSET;
  short local_56;
  short local_48;
  short local_46;
  ushort local_44;
  undefined2 local_42;
  long local_40;
  ulong uVar9;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_46 = 0;
  local_48 = 0;
  gxv_BinSrchHeader_validate_constprop_0(param_1,param_2,&local_48,&local_46,param_3);
  sVar4 = local_46;
  sVar3 = local_48;
  puVar14 = (ushort *)(param_3[3] + param_1);
  if ((local_48 == 0) || (local_48 == 6)) {
    if (local_46 == 0) goto LAB_001038aa;
  }
  else {
    if (local_46 == 0) goto LAB_001038aa;
    ft_validator_error(*param_3,8);
  }
  uVar8 = 0;
  local_56 = 0;
  puVar12 = puVar14;
  do {
    puVar14 = puVar12 + 2;
    puVar5 = param_2;
    if (param_2 == (ushort *)0x0) {
      puVar5 = *(ushort **)(*param_3 + 0xd0);
    }
    if (puVar5 < puVar14) {
      ft_validator_error(*param_3,8);
    }
    uVar1 = *puVar12;
    uVar2 = puVar12[1];
    uVar13 = uVar1 << 8 | uVar1 >> 8;
    uVar6 = uVar2 << 8 | uVar2 >> 8;
    if (((uVar2 != 0xffff) && (*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar6)) &&
       (1 < *(uint *)(*param_3 + 0xd8))) {
      ft_validator_error(*param_3,0x10);
    }
    uVar9 = (ulong)uVar6;
    if (uVar1 == 0xffff) {
      uVar13 = 0xffff;
LAB_00103800:
      puVar14 = puVar12 + 3;
      puVar5 = param_2;
      if (param_2 == (ushort *)0x0) {
        puVar5 = *(ushort **)(*param_3 + 0xd0);
      }
      if (puVar5 < puVar14) {
        ft_validator_error(*param_3,8);
      }
      local_44 = puVar12[2] << 8 | puVar12[2] >> 8;
      uVar8 = uVar9;
      if ((ushort)uVar9 <= uVar13) {
        sVar11 = 0;
        do {
          local_42 = (*(code *)param_3[6])(sVar11,&local_44,param_2,param_3);
          uVar8 = uVar9 & 0xffff;
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar7;
          sVar11 = sVar11 + 1;
          (*(code *)param_3[5])(uVar8,&local_42,param_3);
          uVar8 = uVar9;
        } while ((ushort)uVar7 <= uVar13);
      }
    }
    else {
      if ((*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar13) && (1 < *(uint *)(*param_3 + 0xd8)))
      {
        ft_validator_error(*param_3,0x10);
      }
      if ((uVar13 < (ushort)uVar8) && (1 < *(uint *)(*param_3 + 0xd8))) {
        ft_validator_error(*param_3,0x10);
      }
      if (uVar6 <= uVar13) goto LAB_00103800;
      lVar10 = *param_3;
      if (1 < *(uint *)(lVar10 + 0xd8)) {
        ft_validator_error(lVar10,0x10);
        lVar10 = *param_3;
      }
      uVar9 = (ulong)uVar13;
      uVar13 = uVar6;
      if (*(int *)(lVar10 + 0xd8) != 1) goto LAB_00103800;
    }
    local_56 = local_56 + 1;
    puVar12 = puVar14;
  } while (local_56 != sVar4);
LAB_001038aa:
  gxv_LookupTable_fmt2_skip_endmarkers(puVar14,sVar3,param_3);
  param_3[3] = (long)puVar14 + (param_3[3] - param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_bsln_parts_fmt2_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  
  uVar2 = *(ushort *)(param_3[2] + 8);
  if (param_2 == (ushort *)0x0) {
    param_2 = *(ushort **)(*param_3 + 0xd0);
  }
  if (param_2 < param_1 + 0x21) {
    ft_validator_error(*param_3,8);
  }
  uVar3 = *param_1;
  uVar5 = uVar3 << 8 | uVar3 >> 8;
  if (((uVar3 != 0xffff) && (*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar5)) &&
     (1 < *(uint *)(*param_3 + 0xd8))) {
    ft_validator_error(*param_3,0x10);
  }
  *(ushort **)param_3[2] = param_1 + 1;
  lVar6 = 0;
  do {
    while( true ) {
      lVar4 = lVar6 + 1;
      uVar1 = *(undefined1 *)((long)param_1 + lVar6 * 2 + 3);
      if (CONCAT11((char)param_1[lVar4],uVar1) == -1) break;
      lVar6 = lVar6 + 1;
      gxv_ctlPoint_validate(uVar5,CONCAT11((char)param_1[lVar4],uVar1),param_3);
      if (lVar6 == 0x20) {
        return;
      }
    }
    if ((uint)uVar2 == (uint)lVar6) {
      ft_validator_error(*param_3,8);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  return;
}



void gxv_bsln_parts_fmt3_validate(long param_1,undefined8 param_2,long param_3)

{
  gxv_bsln_parts_fmt2_validate();
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(code **)(param_3 + 0x28) = gxv_bsln_LookupValue_validate;
  *(code **)(param_3 + 0x30) = gxv_bsln_LookupFmt4_transit;
  gxv_LookupTable_validate(param_1 + 0x42,param_2,param_3);
  return;
}



void gxv_LookupTable_fmt8_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  long in_FS_OFFSET;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = param_1 + 2;
  puVar3 = param_2;
  if (param_2 == (ushort *)0x0) {
    puVar3 = *(ushort **)(*param_3 + 0xd0);
  }
  if (puVar3 < puVar1) {
    ft_validator_error(*param_3,8);
  }
  uVar10 = *param_1;
  uVar2 = param_1[1];
  uVar9 = uVar10 << 8 | uVar10 >> 8;
  uVar7 = uVar2 << 8 | uVar2 >> 8;
  if (((uVar10 != 0xffff) && (*(long *)(param_3[1] + 0x20) < (long)(ulong)uVar9)) &&
     (1 < *(uint *)(*param_3 + 0xd8))) {
    ft_validator_error(*param_3,0x10);
  }
  if ((((ushort)(uVar9 + uVar7) != 0xffff) &&
      (*(long *)(param_3[1] + 0x20) < (long)(ulong)(ushort)(uVar9 + uVar7))) &&
     (1 < *(uint *)(*param_3 + 0xd8))) {
    ft_validator_error(*param_3,0x10);
  }
  if (uVar2 == 0) {
    puVar6 = (undefined1 *)0x4;
  }
  else {
    uVar10 = 0;
    puVar3 = puVar1;
    do {
      puVar4 = param_2;
      if (param_2 == (ushort *)0x0) {
        puVar4 = *(ushort **)(*param_3 + 0xd0);
      }
      if (puVar4 < puVar3 + 1) {
        ft_validator_error(*param_3,8);
      }
      sVar8 = uVar9 + uVar10;
      uVar10 = uVar10 + 1;
      local_42 = CONCAT11((char)*puVar3,*(undefined1 *)((long)puVar3 + 1));
      (*(code *)param_3[5])(sVar8,&local_42,param_3);
      puVar3 = puVar3 + 1;
    } while (uVar10 < uVar7);
    lVar5 = (ulong)(uVar7 - 1 & 0xffff) * 2 + 2;
    if (uVar2 == 0) {
      lVar5 = 2;
    }
    puVar6 = (undefined1 *)((long)puVar1 + (lVar5 - (long)param_1));
  }
  param_3[3] = (long)puVar6;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_kern_subtable_fmt2_clstbl_validate
               (ushort *param_1,ushort *param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  puVar13 = param_1 + 2;
  uVar4 = *(undefined8 *)(*(long *)(param_4[2] + 8) + 0x10 + (param_3 & 0xffffffff) * 8);
  puVar5 = *(uint **)(*(long *)(param_4[2] + 8) + 0x20);
  if (param_2 < puVar13) {
    ft_validator_error(*param_4,8);
  }
  uVar3 = *param_1;
  uVar7 = (uint)(ushort)(param_1[1] << 8 | param_1[1] >> 8);
  uVar9 = uVar3 << 8 | uVar3 >> 8;
  if ((uVar3 != 0xffff) && (*(long *)(param_4[1] + 0x20) < (long)(ulong)uVar9)) {
    if (1 < *(uint *)(*param_4 + 0xd8)) {
      ft_validator_error(*param_4,0x10);
    }
  }
  uVar10 = (uVar9 - 1) + uVar7;
  if (((short)uVar10 != -1) && (*(long *)(param_4[1] + 0x20) < (long)(ulong)(uVar10 & 0xffff))) {
    if (1 < *(uint *)(*param_4 + 0xd8)) {
      ft_validator_error(*param_4,0x10);
    }
  }
  uVar11 = (ulong)(uVar7 * 2);
  puVar12 = (ushort *)(uVar11 + (long)puVar13);
  lVar8 = *(long *)(param_4[2] + 8) + (param_3 & 0xffffffff) * 2;
  *(undefined2 *)(lVar8 + 4) = 0xffff;
  *(undefined2 *)(lVar8 + 8) = 0;
  if (puVar13 < puVar12) {
    do {
      puVar14 = puVar13 + 1;
      if (puVar12 < puVar14) {
        ft_validator_error(*param_4,8);
      }
      bVar2 = *(byte *)((long)puVar13 + 1);
      uVar3 = CONCAT11((char)*puVar13,bVar2);
      bVar6 = (byte)*(ushort *)(lVar8 + 4);
      if (uVar3 <= *(ushort *)(lVar8 + 4)) {
        bVar6 = bVar2;
      }
      *(ushort *)(lVar8 + 4) = (ushort)bVar6;
      uVar9 = (ushort)bVar2;
      if (uVar3 < *(ushort *)(lVar8 + 8)) {
        uVar9 = *(ushort *)(lVar8 + 8) & 0xff;
      }
      *(ushort *)(lVar8 + 8) = uVar9;
      puVar13 = puVar14;
    } while (puVar14 < puVar12);
    lVar8 = ((ulong)((long)puVar12 + (-5 - (long)param_1)) & 0xfffffffffffffffe) + 2;
  }
  else {
    lVar8 = 0;
  }
  uVar7 = *puVar5;
  param_4[3] = lVar8;
  puVar1 = (undefined8 *)(*(long *)(puVar5 + 2) + (ulong)uVar7 * 0x18);
  puVar1[1] = uVar11;
  *puVar1 = param_1;
  puVar1[2] = uVar4;
  *puVar5 = uVar7 + 1;
  return;
}



void gxv_ClassTable_validate
               (ushort *param_1,ushort *param_2,ushort param_3,undefined1 *param_4,long *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  char *pcVar7;
  ushort uVar8;
  ushort *puVar9;
  long in_FS_OFFSET;
  byte bVar11;
  char local_148 [264];
  long local_40;
  ushort *puVar10;
  
  bVar11 = 0;
  puVar1 = param_1 + 2;
  uVar2 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 3;
  if ((ushort *)((ulong)uVar2 + (long)param_1) < puVar1) {
    ft_validator_error(*param_5,8);
  }
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar8 = uVar3 << 8 | uVar3 >> 8;
    uVar6 = (*param_1 << 8 | *param_1 >> 8) + uVar8;
    if (((uVar6 != 0xffff) && (*(long *)(param_5[1] + 0x20) < (long)(ulong)uVar6)) &&
       (1 < *(uint *)(*param_5 + 0xd8))) {
      ft_validator_error(*param_5,0x10);
    }
    pcVar7 = local_148;
    for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      pcVar7[5] = '\0';
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      pcVar7 = pcVar7 + ((ulong)bVar11 * -2 + 1) * 8;
    }
    uVar6 = 0;
    puVar10 = puVar1;
    do {
      while (puVar9 = (ushort *)((long)puVar10 + 1),
            (ushort *)((ulong)uVar2 + (long)param_1) < puVar9) {
        ft_validator_error(*param_5,8);
        bVar11 = (byte)*puVar10;
        if (bVar11 != 0) goto LAB_00104039;
LAB_00104080:
        uVar6 = uVar6 + 1;
        ft_validator_error(*param_5,8);
        puVar10 = puVar9;
        if (uVar8 <= uVar6) goto LAB_00104095;
      }
      bVar11 = (byte)*puVar10;
      if (bVar11 == 0) goto LAB_00104080;
LAB_00104039:
      if ((byte)(bVar11 - 2) < 2) goto LAB_00104080;
      if (param_3 <= bVar11) {
        ft_validator_error(*param_5,8);
      }
      uVar6 = uVar6 + 1;
      local_148[bVar11] = local_148[bVar11] + '\x01';
      puVar10 = puVar9;
    } while (uVar6 < uVar8);
LAB_00104095:
    if (uVar3 == 0) {
      uVar8 = 1;
    }
    uVar4 = 0;
    *param_2 = ((short)puVar1 + uVar8) - (short)param_1;
    if (param_3 != 0) {
      do {
        if ((3 < uVar4) && (local_148[uVar4] != '\0')) {
          *param_4 = (char)uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_3);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_StateTable_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  byte *pbVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte bVar21;
  int iVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  byte local_4f;
  undefined1 local_4e [2];
  ushort local_4c;
  ushort local_4a;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar23 = param_2;
  if (param_2 == (ushort *)0x0) {
    puVar23 = *(ushort **)(*param_3 + 0xd0);
  }
  if (puVar23 < param_1 + 4) {
    ft_validator_error(*param_3,8);
  }
  uVar7 = param_1[1];
  uVar10 = param_1[2];
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar4 = uVar7 << 8 | uVar7 >> 8;
  uVar14 = uVar2 << 8 | uVar2 >> 8;
  uVar5 = uVar10 << 8 | uVar10 >> 8;
  uVar6 = uVar1 << 8 | uVar1 >> 8;
  if (0xff < uVar14) {
    ft_validator_error(*param_3,8);
  }
  if ((code *)param_3[0xd] != (code *)0x0) {
    (*(code *)param_3[0xd])(param_1 + 4,param_2,param_3);
  }
  pcVar8 = (code *)param_3[0xb];
  uVar18 = (uint)uVar5;
  if (pcVar8 == (code *)0x0) {
    pcVar8 = gxv_StateTable_subtable_setup;
  }
  (*pcVar8)((short)param_2 - (short)param_1,uVar4,uVar18,uVar6,local_4e,&local_4c,&local_4a,param_3)
  ;
  if (uVar7 == 0) {
    local_4f = (char)(uVar2 >> 8) - 1;
  }
  else {
    gxv_ClassTable_validate((ulong)uVar4 + (long)param_1,local_4e,uVar14,&local_4f,param_3);
  }
  bVar3 = local_4f;
  if (uVar10 == 0) {
LAB_001042ca:
    if (uVar1 == 0) goto LAB_00104418;
    uVar17 = (uint)local_4c;
    iVar15 = 1;
    bVar13 = 0;
    bVar3 = local_4f;
  }
  else {
    iVar15 = local_4f + 1;
    pbVar20 = (byte *)((ulong)uVar5 + (long)param_1);
    pbVar26 = pbVar20 + local_4c;
    if (pbVar26 < pbVar20 + iVar15 * 2) {
      ft_validator_error(*param_3,8);
    }
    if (pbVar26 < pbVar20 + iVar15) {
      local_4c = 0;
      goto LAB_001042ca;
    }
    uVar16 = 0;
    pbVar9 = pbVar20;
    do {
      bVar21 = 0;
      do {
        bVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if ((byte)uVar16 < bVar13) {
          uVar16 = (uint)bVar13;
        }
        bVar13 = (byte)uVar16;
        bVar21 = bVar21 + 1;
      } while (bVar21 <= bVar3);
    } while (pbVar9 + iVar15 <= pbVar26);
    local_4c = (ushort)((long)pbVar9 - (long)pbVar20);
    uVar17 = (uint)((long)pbVar9 - (long)pbVar20);
    if (bVar13 == 0) goto LAB_001042ca;
    if (uVar1 == 0) {
      ft_validator_error(*param_3,9);
      goto LAB_00104418;
    }
    iVar15 = uVar16 + 1;
  }
  uVar19 = (ulong)local_4a;
  puVar23 = (ushort *)((ulong)uVar6 + (long)param_1);
  iVar22 = (int)param_3[9] / 2 + 4;
  uVar12 = (ulong)(uint)(iVar15 * iVar22);
  if ((int)(uint)local_4a < iVar15 * iVar22) {
    if (1 < *(uint *)(*param_3 + 0xd8)) {
      ft_validator_error(*param_3,8);
    }
    uVar12 = (long)(ulong)local_4a % (long)iVar22 & 0xffffffff;
    bVar13 = (char)((long)(ulong)local_4a / (long)iVar22) - 1;
  }
  bVar21 = 0;
  puVar24 = puVar23;
  do {
    puVar25 = puVar24 + 2;
    if ((ushort *)((long)puVar23 + uVar19) < puVar25) {
      ft_validator_error(*param_3,8,uVar12);
      uVar12 = extraout_RDX_01;
    }
    uVar7 = *puVar24 << 8 | *puVar24 >> 8;
    if ((uVar7 < uVar5) || ((uVar17 & 0xffff) + uVar18 < (uint)uVar7)) {
LAB_00104490:
      if (1 < *(uint *)(*param_3 + 0xd8)) {
        ft_validator_error(*param_3,9,uVar12);
        uVar12 = extraout_RDX_00;
      }
    }
    else {
      uVar11 = (long)(int)(uVar7 - uVar18) % (long)(int)(bVar3 + 1);
      uVar12 = uVar11 & 0xffffffff;
      if ((int)uVar11 != 0) goto LAB_00104490;
      uVar16 = (int)param_3[9] + 1;
      uVar11 = (ulong)uVar16;
      uVar12 = uVar11;
      if (10 < uVar16) goto switchD_001043c9_caseD_1;
      uVar12 = (long)&switchD_001043c9::switchdataD_00107fcc +
               (long)(int)(&switchD_001043c9::switchdataD_00107fcc)[uVar11];
      switch(uVar11) {
      case 0:
        local_48 = (ulong)local_48._1_7_ << 8;
      default:
switchD_001043c9_caseD_1:
        break;
      case 3:
      case 4:
        uVar12 = (ulong)(byte)puVar24[2];
        puVar25 = (ushort *)((long)puVar24 + 5);
        local_48 = CONCAT71(local_48._1_7_,(byte)puVar24[2]);
        break;
      case 5:
      case 6:
        puVar25 = puVar24 + 3;
        uVar10 = puVar24[2] << 8 | puVar24[2] >> 8;
        uVar12 = (ulong)uVar10;
        local_48 = CONCAT62(local_48._2_6_,uVar10);
        break;
      case 9:
        uVar16 = *(uint *)(puVar24 + 2);
        puVar25 = puVar24 + 4;
        uVar12 = (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                        uVar16 << 0x18);
        local_48 = uVar12;
        break;
      case 10:
        uVar16 = *(uint *)(puVar24 + 2);
        puVar25 = puVar24 + 4;
        uVar12 = (ulong)(int)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                             uVar16 << 0x18);
        local_48 = uVar12;
      }
      if ((code *)param_3[0xc] != (code *)0x0) {
        (*(code *)param_3[0xc])
                  ((long)(int)(uVar7 - uVar18) / (long)(int)(bVar3 + 1) & 0xff,
                   puVar24[1] << 8 | puVar24[1] >> 8,&local_48,param_1,param_2,param_3);
        uVar12 = extraout_RDX;
      }
    }
    bVar21 = bVar21 + 1;
    puVar24 = puVar25;
  } while (bVar21 <= bVar13);
LAB_00104418:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_just_justData_validate(ushort *param_1,uint *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  long in_FS_OFFSET;
  uint local_b8 [2];
  uint **local_b0;
  uint *local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  long local_88;
  char *local_80;
  long local_40;
  
  puVar20 = (uint *)(param_1 + 3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = param_2;
  if (param_2 == (uint *)0x0) {
    puVar6 = *(uint **)(*param_3 + 0xd0);
  }
  local_b0 = &local_a8;
  if (puVar6 < puVar20) {
    ft_validator_error(*param_3,8);
  }
  uVar1 = *param_1;
  uVar11 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)param_3[2] = _LC5;
  param_3[5] = (long)gxv_just_wdcTable_LookupValue_validate;
  *(undefined4 *)(param_3 + 4) = 0;
  gxv_LookupTable_validate(puVar20,param_2,param_3);
  local_a0 = param_3[3];
  local_98 = "just_LookupTable";
  local_b8[0] = 1;
  local_a8 = puVar20;
  if (uVar11 != 0) {
    lVar16 = *param_3;
    uVar12 = (ulong)(ushort)(uVar11 << 8 | uVar11 >> 8);
    puVar20 = (uint *)(*(long *)(lVar16 + 200) + uVar12);
    puVar6 = (uint *)((long)puVar20 + (ulong)*(ushort *)param_3[2]);
    if (param_2 <= puVar6) {
      ft_validator_error(lVar16,9);
      lVar16 = *param_3;
    }
    puVar7 = puVar20;
    if (puVar6 < puVar20) {
      local_88 = 0;
    }
    else {
      do {
        puVar13 = puVar7 + 1;
        puVar8 = param_2;
        if (param_2 == (uint *)0x0) {
          puVar8 = *(uint **)(lVar16 + 0xd0);
        }
        if (puVar8 < puVar13) {
          ft_validator_error(lVar16,8);
          uVar3 = *puVar7;
          lVar16 = *param_3;
          uVar10 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18);
          if (uVar10 != 0) goto LAB_00104c91;
LAB_00104dc5:
          lVar14 = 4;
        }
        else {
          uVar3 = *puVar7;
          uVar10 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18);
          if (uVar10 == 0) goto LAB_00104dc5;
LAB_00104c91:
          uVar18 = 0;
          puVar8 = puVar13;
          do {
            puVar9 = param_2;
            if (param_2 == (uint *)0x0) {
              puVar9 = *(uint **)(lVar16 + 0xd0);
            }
            if (puVar9 < puVar8 + 6) {
              ft_validator_error(lVar16,8);
              lVar16 = *param_3;
            }
            uVar3 = *puVar8;
            if ((0x7f < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18)) && (1 < *(uint *)(lVar16 + 0xd8))) {
              ft_validator_error(lVar16,8);
              lVar16 = *param_3;
            }
            uVar18 = uVar18 + 1;
            param_3[3] = 0x18;
            puVar8 = puVar8 + 6;
          } while (uVar10 != uVar18);
          puVar13 = puVar13 + uVar10 * 6;
          lVar14 = (long)puVar13 - (long)puVar7;
        }
        param_3[3] = lVar14;
        puVar7 = puVar13;
      } while (puVar13 <= puVar6);
      local_88 = (long)puVar13 - (long)puVar20;
    }
    local_90 = *(long *)(lVar16 + 200);
    param_3[3] = local_88;
    local_90 = uVar12 + local_90;
    local_80 = "just_wdcTable";
    local_b8[0] = 2;
  }
  if (uVar2 != 0) {
    uVar12 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
    lVar16 = *(long *)(*param_3 + 200);
    *(undefined4 *)(param_3[2] + 4) = _LC5;
    lVar16 = lVar16 + uVar12;
    *(undefined4 *)(param_3 + 4) = 0;
    param_3[5] = (long)gxv_just_pcTable_LookupValue_entry_validate;
    gxv_LookupTable_validate(lVar16,param_2,param_3);
    lVar14 = param_3[3];
    lVar15 = *param_3;
    puVar20 = (uint *)(lVar14 + lVar16) + 1;
    puVar6 = param_2;
    if (param_2 == (uint *)0x0) {
      puVar6 = *(uint **)(lVar15 + 0xd0);
    }
    if (puVar6 < puVar20) {
      ft_validator_error(lVar15,8);
      lVar15 = *param_3;
    }
    uVar3 = *(uint *)(lVar14 + lVar16);
    uVar10 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
    if (uVar10 != 0) {
      uVar18 = 0;
      do {
        puVar6 = param_2;
        if (param_2 == (uint *)0x0) {
          puVar6 = *(uint **)(lVar15 + 0xd0);
        }
        if (puVar6 < puVar20 + 2) {
          ft_validator_error(lVar15,8);
          lVar15 = *param_3;
        }
        uVar11 = *(ushort *)((long)puVar20 + 2);
        uVar3 = puVar20[1];
        uVar19 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        if ((0x7f < (ushort)((ushort)*puVar20 << 8 | (ushort)*puVar20 >> 8)) &&
           (1 < *(uint *)(lVar15 + 0xd8))) {
          ft_validator_error(lVar15,8);
          lVar15 = *param_3;
        }
        switch(uVar11 << 8 | uVar11 >> 8) {
        case 0:
          puVar6 = param_2;
          if (param_2 == (uint *)0x0) {
            puVar6 = *(uint **)(lVar15 + 0xd0);
          }
          if (puVar6 < puVar20 + 5) {
            ft_validator_error(lVar15,8);
            lVar15 = *param_3;
          }
          uVar3 = puVar20[2];
          uVar4 = puVar20[3];
          uVar11 = *(ushort *)((long)puVar20 + 0x12) << 8 | *(ushort *)((long)puVar20 + 0x12) >> 8;
          if (((int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
                    ) <= (int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18)) && (1 < *(uint *)(lVar15 + 0xd8))) {
            ft_validator_error(lVar15,8);
            lVar15 = *param_3;
          }
          if (uVar11 != 0) {
            puVar6 = puVar20 + 5;
            do {
              puVar13 = (uint *)((long)puVar6 + 2);
              puVar7 = param_2;
              if (param_2 == (uint *)0x0) {
                puVar7 = *(uint **)(lVar15 + 0xd0);
              }
              if (puVar7 < puVar13) {
                ft_validator_error(lVar15,8);
                lVar15 = *param_3;
              }
              if ((*(long *)(param_3[1] + 0x20) <=
                   (long)(ulong)CONCAT11((char)*puVar6,*(undefined1 *)((long)puVar6 + 1))) &&
                 (1 < *(uint *)(lVar15 + 0xd8))) {
                ft_validator_error(lVar15,0x10);
                lVar15 = *param_3;
              }
              puVar6 = puVar13;
            } while ((uint *)((long)puVar20 + (ulong)(uVar11 + 10) * 2) != puVar13);
          }
          break;
        case 1:
          puVar6 = param_2;
          if (param_2 == (uint *)0x0) {
            puVar6 = *(uint **)(lVar15 + 0xd0);
          }
          if (puVar6 < (uint *)((long)puVar20 + 10U)) {
            ft_validator_error(lVar15,8);
            lVar15 = *param_3;
          }
          uVar11 = (ushort)puVar20[2];
          goto LAB_00104b66;
        case 2:
          puVar6 = param_2;
          if (param_2 == (uint *)0x0) {
            puVar6 = *(uint **)(lVar15 + 0xd0);
          }
          if (puVar6 < puVar20 + 4) {
            ft_validator_error(lVar15,8);
            lVar15 = *param_3;
          }
          uVar11 = *(ushort *)((long)puVar20 + 0xe);
          uVar2 = (ushort)puVar20[3];
          lVar14 = *(long *)(param_3[1] + 0x20);
          if (((uVar2 != 0xffff) && (lVar14 <= (long)(ulong)(ushort)(uVar2 << 8 | uVar2 >> 8))) &&
             (1 < *(uint *)(lVar15 + 0xd8))) {
            ft_validator_error(lVar15,0x10);
            lVar15 = *param_3;
            lVar14 = *(long *)(param_3[1] + 0x20);
          }
          if ((long)(ulong)(ushort)(uVar11 << 8 | uVar11 >> 8) < lVar14) break;
          goto LAB_00104b7b;
        case 3:
          break;
        case 4:
          puVar6 = param_2;
          if (param_2 == (uint *)0x0) {
            puVar6 = *(uint **)(lVar15 + 0xd0);
          }
          if (puVar6 < puVar20 + 6) {
            ft_validator_error(lVar15,8);
            lVar15 = *param_3;
          }
          uVar3 = puVar20[3];
          uVar4 = puVar20[5];
          uVar5 = puVar20[4];
          param_3[3] = 0x10;
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if ((((int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18) < (int)uVar5) ||
              ((int)uVar5 <
               (int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    ))) || (1 < *(uint *)(lVar15 + 0xd8))) goto switchD_00104938_default;
          break;
        case 5:
          puVar6 = param_2;
          if (param_2 == (uint *)0x0) {
            puVar6 = *(uint **)(lVar15 + 0xd0);
          }
          if (puVar6 < puVar20 + 3) {
            ft_validator_error(lVar15,8);
            lVar15 = *param_3;
          }
          uVar11 = *(ushort *)((long)puVar20 + 10);
LAB_00104b66:
          if (*(long *)(param_3[1] + 0x20) <= (long)(ulong)(ushort)(uVar11 << 8 | uVar11 >> 8)) {
LAB_00104b7b:
            if (1 < *(uint *)(lVar15 + 0xd8)) {
              ft_validator_error(lVar15,0x10);
              lVar15 = *param_3;
            }
          }
          break;
        default:
switchD_00104938_default:
          ft_validator_error(lVar15,8);
          lVar15 = *param_3;
        }
        param_3[3] = uVar19;
        puVar20 = (uint *)((long)puVar20 + uVar19);
        uVar18 = uVar18 + 1;
      } while (uVar10 != uVar18);
    }
    uVar10 = (ulong)local_b8[0];
    lVar14 = *(long *)(lVar15 + 200);
    param_3[3] = (long)puVar20 - lVar16;
    local_b8[0] = local_b8[0] + 1;
    (&local_a8)[uVar10 * 3] = (uint *)(lVar14 + uVar12);
    (&local_a0)[uVar10 * 3] = (long)puVar20 - lVar16;
    (&local_98)[uVar10 * 3] = "just_pcTable";
  }
  if (uVar1 != 0) {
    lVar16 = *param_3;
    uVar12 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
    puVar17 = (ushort *)(*(long *)(lVar16 + 200) + uVar12);
    if (param_2 == (uint *)0x0) {
      param_2 = *(uint **)(lVar16 + 0xd0);
    }
    if (param_2 < puVar17 + 4) {
      ft_validator_error(lVar16,8);
    }
    uVar1 = *puVar17;
    param_3[10] = 0;
    param_3[0xc] = (long)gxv_just_classTable_entry_validate;
    param_3[0xd] = 0;
    param_3[0xb] = 0;
    *(undefined4 *)(param_3 + 9) = 0xffffffff;
    gxv_StateTable_validate
              (puVar17 + 4,(long)puVar17 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8),param_3);
    uVar10 = (ulong)local_b8[0];
    lVar16 = *(long *)(*param_3 + 200);
    local_b8[0] = local_b8[0] + 1;
    (&local_a0)[uVar10 * 3] = param_3[3];
    (&local_a8)[uVar10 * 3] = (uint *)(lVar16 + uVar12);
    (&local_98)[uVar10 * 3] = "just_justClassTable";
  }
  gxv_odtect_validate(local_b8,param_3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void gxv_mort_subtable_type5_validate(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar1 < param_1 + 8U) {
    ft_validator_error(*param_3,8);
  }
  param_3[10] = (long)auStack_48;
  param_3[0xd] = 0;
  *(undefined4 *)(param_3 + 9) = 8;
  param_3[0xb] = (long)gxv_mort_subtable_type5_subtable_setup;
  param_3[0xc] = (long)gxv_mort_subtable_type5_entry_validate;
  gxv_StateTable_validate(param_1,param_2,param_3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_mort_subtable_type2_validate(long param_1,ulong param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined1 local_3c [12];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = param_2;
  if (param_2 == 0) {
    uVar5 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar5 < param_1 + 0xeU) {
    ft_validator_error(*param_3,8);
  }
  param_3[10] = (long)local_3c;
  param_3[0xd] = (long)gxv_mort_subtable_type2_opttable_load;
  *(undefined4 *)(param_3 + 9) = 0xffffffff;
  param_3[0xb] = (long)gxv_mort_subtable_type2_subtable_setup;
  param_3[0xc] = (long)gxv_mort_subtable_type2_entry_validate;
  gxv_StateTable_validate(param_1,param_2,param_3);
  lVar4 = param_3[3];
  uVar3 = *(ushort *)(param_3[10] + 4);
  if (uVar3 == 0) {
LAB_00105129:
    param_3[3] = lVar4;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar8 = (undefined1 *)(param_1 + (ulong)uVar3 + (ulong)*(ushort *)(param_3[10] + 10));
  puVar6 = (undefined1 *)(param_1 + (ulong)uVar3);
LAB_001050b8:
  if (puVar6 < puVar8) {
    puVar7 = puVar6 + 2;
    if (puVar7 <= puVar8) goto code_r0x001050c6;
    ft_validator_error(*param_3,8);
    if (*(long *)(param_3[1] + 0x20) < (long)(ulong)CONCAT11(*puVar6,puVar6[1])) goto LAB_001050e1;
  }
  goto LAB_00105129;
code_r0x001050c6:
  uVar2 = *puVar6;
  puVar1 = puVar6 + 1;
  puVar6 = puVar7;
  if (*(long *)(param_3[1] + 0x20) < (long)(ulong)CONCAT11(uVar2,*puVar1)) {
LAB_001050e1:
    puVar6 = puVar7;
    if (1 < *(uint *)(*param_3 + 0xd8)) {
      ft_validator_error(*param_3,0x10);
    }
  }
  goto LAB_001050b8;
}



void gxv_mort_subtable_type1_validate(long param_1,ulong param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  ushort local_34;
  ushort local_32;
  long local_30;
  undefined1 *puVar7;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_2;
  if (param_2 == 0) {
    uVar3 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar3 < param_1 + 10U) {
    ft_validator_error(*param_3,8);
  }
  param_3[10] = (long)&local_34;
  param_3[0xd] = (long)gxv_mort_subtable_type1_substitutionTable_load;
  *(undefined4 *)(param_3 + 9) = 8;
  param_3[0xb] = (long)gxv_mort_subtable_type1_subtable_setup;
  param_3[0xc] = (long)gxv_mort_subtable_type1_entry_validate;
  gxv_StateTable_validate(param_1,param_2,param_3);
  puVar8 = (undefined1 *)((ulong)local_32 + (ulong)local_34 + param_1);
  puVar5 = (undefined1 *)(param_1 + (ulong)local_34);
  uVar1 = *(ushort *)(param_3[10] + 2) >> 1;
  if (uVar1 != 0) {
    puVar7 = puVar5;
    do {
      puVar6 = puVar7 + 2;
      puVar4 = puVar8;
      if (puVar8 == (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(*param_3 + 0xd0);
      }
      if (puVar4 < puVar6) {
        ft_validator_error(*param_3,8);
      }
      uVar2 = CONCAT11(*puVar7,puVar7[1]);
      if ((uVar2 != 0xffff) &&
         (((uVar2 < *(ushort *)(param_3 + 8) || (*(ushort *)((long)param_3 + 0x42) < uVar2)) &&
          (1 < *(uint *)(*param_3 + 0xd8))))) {
        ft_validator_error(*param_3,0x10);
      }
      puVar7 = puVar6;
    } while (puVar5 + (ulong)uVar1 * 2 != puVar6);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gxv_mort_subtable_type0_validate(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = *(ulong *)(*param_3 + 0xd0);
  }
  if (uVar1 < param_1 + 8U) {
    ft_validator_error(*param_3,8);
  }
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xb] = 0;
  *(undefined4 *)(param_3 + 9) = 0xffffffff;
  param_3[0xc] = (long)gxv_mort_subtable_type0_entry_validate;
  gxv_StateTable_validate(param_1,param_2,param_3);
  return;
}



void gxv_kern_validate_generic
               (ushort *param_1,long param_2,char param_3,undefined4 param_4,long param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  short sVar15;
  ushort uVar16;
  ulong uVar17;
  uint *puVar18;
  byte bVar19;
  ushort uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  long in_FS_OFFSET;
  uint local_1b8;
  ushort local_19a;
  uint local_198 [2];
  undefined1 *local_190;
  uint local_188 [4];
  undefined4 local_178;
  long local_168;
  long local_160;
  uint *local_158;
  ulong local_150;
  undefined4 local_120;
  uint *local_118;
  code *local_110;
  code *pcStack_108;
  code *local_100;
  undefined8 local_b8;
  undefined4 local_b0;
  char *local_a8;
  char *pcStack_a0;
  uint *local_98;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = local_188;
  local_178 = param_4;
  local_168 = param_5;
  local_160 = param_2;
  if (*(ushort **)(param_5 + 0xd0) < param_1 + 1) {
    ft_validator_error(param_5,8);
  }
  lVar11 = local_168;
  uVar7 = *param_1 << 8 | *param_1 >> 8;
  *local_158 = (uint)uVar7;
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      puVar24 = (uint *)(param_1 + 2);
      if (*(uint **)(lVar11 + 0xd0) < puVar24) {
        ft_validator_error(lVar11,8);
      }
      uVar10 = (ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8);
    }
    else {
      if (param_3 != '\0') {
        ft_validator_error(lVar11,8);
        lVar11 = local_168;
      }
      if (param_1[1] != 0) {
        ft_validator_error(lVar11,8);
        lVar11 = local_168;
      }
      puVar24 = (uint *)(param_1 + 4);
      if (*(uint **)(lVar11 + 0xd0) < puVar24) {
        ft_validator_error(lVar11,8);
      }
      uVar9 = *(uint *)(param_1 + 2);
      uVar10 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18);
    }
    if (uVar10 != 0) {
      local_1b8 = 0;
      do {
        puVar21 = (uint *)((long)puVar24 + 6);
        if (*(uint **)(local_168 + 0xd0) < puVar21) {
          ft_validator_error(local_168,8);
        }
        uVar7 = (ushort)puVar24[1];
        uVar9 = *puVar24;
        uVar14 = uVar7 >> 8;
        uVar8 = uVar7 << 8 | uVar14;
        uVar13 = (ulong)(ushort)(*(ushort *)((long)puVar24 + 2) << 8 |
                                *(ushort *)((long)puVar24 + 2) >> 8);
        if (*local_158 == 1) {
          if ((uVar8 & 0x1ffc) != 0) goto LAB_00105a40;
          puVar23 = puVar24 + 2;
          if (*(uint **)(local_168 + 0xd0) < puVar23) {
            ft_validator_error(local_168,8);
          }
          uVar13 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18);
          puVar22 = (uint *)((long)puVar24 + uVar13);
          if ((uVar14 & 3) == 0) {
            if (*local_158 != 1) goto LAB_00105a9c;
            puVar24 = puVar24 + 4;
LAB_00105aa3:
            local_19a = 0;
            local_198[0] = CONCAT22(local_198[0]._2_2_,6);
            if (puVar22 < puVar24) {
              ft_validator_error(local_168,8);
            }
            gxv_BinSrchHeader_validate_constprop_0
                      (puVar23,puVar22,local_198,&local_19a,&local_168,uVar13,uVar10,uVar13);
            if (local_19a != 0) {
              puVar21 = (uint *)((long)puVar24 + (ulong)local_19a * 6);
              uVar7 = 0;
              uVar14 = 0;
              do {
                while( true ) {
                  uVar8 = (ushort)*puVar24;
                  uVar16 = uVar8 << 8 | uVar8 >> 8;
                  if (((uVar8 != 0xffff) && (*(long *)(local_160 + 0x20) < (long)(ulong)uVar16)) &&
                     (1 < *(uint *)(local_168 + 0xd8))) {
                    ft_validator_error(local_168,0x10);
                  }
                  uVar8 = *(ushort *)((long)puVar24 + 2);
                  uVar20 = uVar8 << 8 | uVar8 >> 8;
                  if (((uVar8 != 0xffff) && (*(long *)(local_160 + 0x20) < (long)(ulong)uVar20)) &&
                     (1 < *(uint *)(local_168 + 0xd8))) {
                    ft_validator_error(local_168,0x10);
                  }
                  if (uVar14 == uVar16) break;
                  if (uVar16 <= uVar14) {
LAB_00105be0:
                    ft_validator_error(local_168,8);
                    uVar20 = uVar7;
                    uVar16 = uVar14;
                  }
                  uVar7 = uVar20;
                  puVar24 = (uint *)((long)puVar24 + 6);
                  uVar14 = uVar16;
                  if (puVar21 == puVar24) goto LAB_001056c0;
                }
                if (uVar20 <= uVar7) goto LAB_00105be0;
                puVar24 = (uint *)((long)puVar24 + 6);
                uVar7 = uVar20;
              } while (puVar21 != puVar24);
            }
          }
          else if ((uVar14 & 3) == 1) {
            local_120 = 0xffffffff;
            local_100 = gxv_kern_subtable_fmt1_valueTable_load;
            local_110 = gxv_kern_subtable_fmt1_subtable_setup;
            pcStack_108 = gxv_kern_subtable_fmt1_entry_validate;
            local_118 = local_198;
            gxv_StateTable_validate(puVar24,puVar22,&local_168);
          }
          else {
LAB_0010578f:
            uVar9 = *local_158;
            if ((uVar14 & 3) == 2) goto LAB_0010552b;
            if (uVar9 == 1) {
              puVar21 = puVar24 + 2;
              puVar24 = (uint *)((long)puVar24 + 0xe);
            }
            else {
              puVar24 = puVar24 + 3;
            }
            if (puVar22 < puVar24) {
              ft_validator_error(local_168,8);
            }
            bVar2 = *(byte *)((long)puVar21 + 3);
            bVar3 = *(byte *)((long)puVar21 + 2);
            bVar4 = (byte)puVar21[1];
            uVar12 = (ulong)(ushort)((ushort)*puVar21 << 8 | (ushort)*puVar21 >> 8);
            puVar24 = (uint *)((long)puVar24 + (ulong)((uint)bVar3 * 2));
            if ((*(ulong *)(local_160 + 0x20) != uVar12) && (1 < *(uint *)(local_168 + 0xd8))) {
              ft_validator_error(local_168,0x10);
            }
            puVar21 = (uint *)((long)puVar24 + uVar12);
            if (puVar22 < puVar24) {
              ft_validator_error(local_168,8);
            }
            if (puVar22 < puVar21) {
              ft_validator_error(local_168,8);
            }
            if (puVar24 < puVar21) {
              bVar19 = 0;
              puVar23 = puVar24;
              do {
                puVar18 = (uint *)((long)puVar23 + 1);
                if (puVar21 < puVar18) {
                  ft_validator_error(local_168,8);
                  if (bVar19 < (byte)*puVar23) {
                    bVar19 = (byte)*puVar23;
                  }
                  break;
                }
                if (bVar19 < (byte)*puVar23) {
                  bVar19 = (byte)*puVar23;
                }
                puVar23 = puVar18;
              } while (puVar18 != puVar21);
              local_150 = (long)puVar18 - (long)puVar24;
              puVar21 = (uint *)((long)puVar18 + uVar12);
              if (bVar2 < bVar19) {
                ft_validator_error(local_168,8);
              }
              puVar24 = puVar18;
              if (puVar22 < puVar21) {
LAB_00105d29:
                ft_validator_error(local_168,8);
              }
              puVar23 = puVar24;
              if (puVar21 <= puVar24) goto LAB_00105ee5;
              bVar19 = 0;
              puVar18 = puVar24;
              do {
                puVar23 = (uint *)((long)puVar18 + 1);
                if (puVar21 < puVar23) {
                  ft_validator_error(local_168,8);
                  if (bVar19 < (byte)*puVar18) {
                    bVar19 = (byte)*puVar18;
                  }
                  break;
                }
                if (bVar19 < (byte)*puVar18) {
                  bVar19 = (byte)*puVar18;
                }
                puVar18 = puVar23;
              } while (puVar23 != puVar21);
              local_150 = (long)puVar23 - (long)puVar24;
              if (bVar4 < bVar19) {
                ft_validator_error(local_168,8);
              }
            }
            else {
              local_150 = 0;
              puVar23 = puVar24;
              if (puVar22 < puVar21) goto LAB_00105d29;
LAB_00105ee5:
              local_150 = 0;
            }
            uVar7 = 0;
            if (bVar2 != 0) {
              uVar14 = (ushort)bVar2;
              if (bVar4 == 0) {
                do {
                  if ((ushort)(uVar7 + 1) == uVar14) break;
                  uVar7 = uVar7 + 2;
                } while (uVar7 != uVar14);
              }
              else {
                uVar12 = (ulong)uVar14;
                sVar15 = 0;
                do {
                  puVar24 = (uint *)((long)puVar23 + (ulong)bVar4);
                  do {
                    while( true ) {
                      puVar21 = (uint *)((long)puVar23 + 1);
                      if (puVar22 < puVar21) {
                        ft_validator_error(local_168,8);
                      }
                      if ((byte)*puVar23 <= bVar3) break;
                      ft_validator_error(local_168,9);
                      puVar23 = puVar21;
                      if (puVar21 == puVar24) goto LAB_001059db;
                    }
                    puVar23 = puVar21;
                  } while (puVar21 != puVar24);
LAB_001059db:
                  sVar15 = sVar15 + 1;
                  puVar23 = puVar24;
                } while ((short)uVar12 != sVar15);
              }
            }
          }
        }
        else {
          if (*local_158 != 0) goto LAB_00105a40;
          uVar5 = local_158[4];
          if ((uVar5 & 0x8000) == 0) {
            if ((uVar5 & 0x4000) != 0) {
LAB_0010550e:
              if ((uVar8 & 0xfdf0) == 0) {
                if ((uVar7 & 0xff) != 0) goto LAB_00105522;
                goto LAB_00105a98;
              }
            }
LAB_00105a40:
            puVar22 = (uint *)((long)puVar24 + uVar13);
            goto LAB_001056c0;
          }
          if ((uVar7 << 8 & 0xfd00) == 0) {
            if ((uVar5 & 0x4000) != 0) goto LAB_0010550e;
            if (((uVar8 & 0x2fc) != 0) || ((uVar14 & 3) == 1)) goto LAB_00105a40;
LAB_00105a80:
            uVar13 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 << 0x18);
            puVar22 = (uint *)((long)puVar24 + uVar13);
            if ((uVar14 & 3) != 0) goto LAB_0010578f;
LAB_00105a98:
            puVar22 = (uint *)((long)puVar24 + uVar13);
LAB_00105a9c:
            puVar24 = (uint *)((long)puVar24 + 0xe);
            puVar23 = puVar21;
            goto LAB_00105aa3;
          }
          if (((uVar8 & 0x2fc) == 0) && ((uVar14 & 3) != 1)) goto LAB_00105a80;
          if (((uVar5 & 0x4000) == 0) || ((uVar8 & 0xfdf0) != 0)) goto LAB_00105a40;
LAB_00105522:
          uVar9 = *local_158;
          puVar22 = (uint *)((long)puVar24 + uVar13);
LAB_0010552b:
          puVar23 = (uint *)((long)puVar24 + 0xe);
          if (uVar9 == 1) {
            puVar21 = puVar24 + 2;
            puVar23 = puVar24 + 4;
          }
          local_198[0] = 0;
          local_b0 = 0;
          local_a8 = "leftClass";
          pcStack_a0 = "rightClass";
          local_b8 = 0;
          *(undefined8 **)(local_158 + 2) = &local_b8;
          local_190 = local_88;
          local_98 = local_198;
          if (puVar22 < puVar23) {
            ft_validator_error(local_168,8);
          }
          puVar6 = *(ushort **)(local_158 + 2);
          *puVar6 = (ushort)*puVar21 << 8 | (ushort)*puVar21 >> 8;
          uVar9 = puVar21[1];
          uVar17 = (ulong)(ushort)(*(ushort *)((long)puVar21 + 2) << 8 |
                                  *(ushort *)((long)puVar21 + 2) >> 8);
          puVar6[1] = *(ushort *)((long)puVar21 + 6) << 8 | *(ushort *)((long)puVar21 + 6) >> 8;
          uVar12 = (ulong)(ushort)((ushort)uVar9 << 8 | (ushort)uVar9 >> 8);
          puVar21 = (uint *)((long)puVar23 + uVar12);
          if (puVar22 < (uint *)((long)puVar23 + uVar17)) {
            ft_validator_error(local_168,8);
            if (puVar22 < puVar21) goto LAB_00105e34;
LAB_001055e5:
            uVar7 = *(ushort *)(*(long *)(local_158 + 2) + 2);
          }
          else {
            if (puVar21 <= puVar22) goto LAB_001055e5;
LAB_00105e34:
            ft_validator_error(local_168,8);
            uVar7 = *(ushort *)(*(long *)(local_158 + 2) + 2);
          }
          if (puVar22 < (uint *)((ulong)uVar7 + (long)puVar23)) {
            ft_validator_error(local_168,8);
          }
          gxv_kern_subtable_fmt2_clstbl_validate
                    ((byte *)((long)puVar24 + uVar17),puVar22,0,&local_168);
          gxv_kern_subtable_fmt2_clstbl_validate
                    ((byte *)((long)puVar24 + uVar12),puVar22,1,&local_168);
          lVar11 = *(long *)(local_158 + 2);
          uVar7 = *(ushort *)(lVar11 + 2);
          if ((uint)*(ushort *)(lVar11 + 4) + (uint)*(ushort *)(lVar11 + 6) < (uint)uVar7) {
            ft_validator_error(local_168,9);
            lVar11 = *(long *)(local_158 + 2);
            uVar7 = *(ushort *)(lVar11 + 2);
          }
          uVar14 = *(ushort *)(lVar11 + 8);
          uVar8 = *(ushort *)(lVar11 + 10);
          puVar1 = (undefined8 *)(local_190 + (ulong)local_198[0] * 0x18);
          *puVar1 = (byte *)((ulong)uVar7 + (long)puVar24);
          puVar1[2] = "array";
          local_198[0] = local_198[0] + 1;
          puVar1[1] = (long)(int)(((uint)uVar8 + (uint)uVar14) - (uint)uVar7);
          gxv_odtect_validate(local_198,&local_168);
        }
LAB_001056c0:
        local_1b8 = local_1b8 + 1;
        puVar24 = puVar22;
        local_150 = uVar13;
      } while (local_1b8 < uVar10);
    }
  }
  else {
    ft_validator_error(lVar11,8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int classic_kern_validate(long param_1,uint param_2,long *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_114;
  long local_108;
  long local_100;
  __jmp_buf_tag local_f8;
  int local_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *param_3 = 0;
  local_100 = 0;
  local_108 = 0;
  local_114 = gxv_load_table(param_1,0x6b65726e,&local_108,&local_100);
  if (local_114 == 0) {
    if (local_108 != 0) {
      ft_validator_init(&local_f8,local_108,local_108 + local_100,0);
      iVar2 = _setjmp(&local_f8);
      if (iVar2 == 0) {
        gxv_kern_validate_generic(local_108,param_1,1,param_2 & 0xc000,&local_f8);
      }
      local_114 = local_1c;
      if (local_1c != 0) goto LAB_00105fc8;
    }
    *param_3 = local_108;
  }
LAB_00105fc8:
  if (local_114 != 0) {
    ft_mem_free(uVar1,local_108);
    local_108 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_114;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int gxv_validate(long param_1,ulong param_2,undefined8 *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  ushort uVar17;
  long lVar18;
  short sVar19;
  uint uVar20;
  short sVar21;
  ushort uVar22;
  uint uVar23;
  uint *puVar24;
  long in_FS_OFFSET;
  uint local_a3c;
  ushort local_972;
  undefined1 local_970 [4];
  ushort local_96c;
  undefined2 local_96a;
  undefined8 local_968;
  int *local_960;
  long local_958;
  int *local_950;
  long local_948;
  int *local_940;
  long local_938;
  int *local_930;
  long local_928;
  int *local_920;
  long local_918;
  int *local_910;
  long local_908;
  long local_900;
  long local_8f8;
  int *local_8f0;
  long local_8e8;
  uint *local_8e0;
  long local_8d8;
  int *local_8d0;
  long local_8c8;
  long local_8c0;
  uint local_8b8;
  ushort local_8b4;
  ushort local_8b2;
  undefined1 local_8b0 [8];
  undefined1 local_8a8 [8];
  ushort local_8a0;
  uint local_898 [2];
  long *local_890;
  uint local_888 [2];
  int **local_880;
  __jmp_buf_tag *local_878;
  long local_870;
  uint *local_868;
  __jmp_buf_tag *local_7c8;
  long local_7c0;
  undefined1 *local_7b8;
  __jmp_buf_tag *local_718;
  long local_710;
  undefined1 *local_708;
  long local_700;
  __jmp_buf_tag *local_668;
  long local_660;
  undefined1 *local_658;
  int *local_650;
  __jmp_buf_tag *local_5b8;
  long local_5b0;
  ulong local_5a0;
  __jmp_buf_tag *local_508;
  long local_500;
  ulong local_4f0;
  __jmp_buf_tag *local_458;
  long local_450;
  ushort *local_448;
  long local_440;
  undefined4 local_438;
  code *local_430;
  code *pcStack_428;
  __jmp_buf_tag *local_3a8;
  long local_3a0;
  long *local_398;
  undefined4 local_388;
  code *local_380;
  code *pcStack_378;
  __jmp_buf_tag *local_2f8;
  long local_2f0;
  ushort *local_2e8;
  undefined4 local_2d8;
  code *local_2d0;
  code *pcStack_2c8;
  code *local_248 [4];
  code *local_228 [5];
  code *local_200;
  code *local_1f8 [5];
  code *local_1d0;
  long local_1c8 [2];
  char *local_1b8 [8];
  int *local_178 [2];
  char *local_168;
  long local_160;
  char *local_150;
  __jmp_buf_tag local_128;
  long local_60;
  uint *local_58;
  uint local_50;
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_968 = *(undefined8 *)(param_1 + 0xb8);
  local_958 = 0;
  local_948 = 0;
  local_938 = 0;
  local_928 = 0;
  local_918 = 0;
  local_960 = (int *)0x0;
  local_950 = (int *)0x0;
  local_940 = (int *)0x0;
  local_930 = (int *)0x0;
  local_920 = (int *)0x0;
  local_910 = (int *)0x0;
  local_908 = 0;
  local_900 = 0;
  local_8f8 = 0;
  local_8f0 = (int *)0x0;
  local_8e8 = 0;
  local_8e0 = (uint *)0x0;
  local_8d8 = 0;
  local_8d0 = (int *)0x0;
  local_8c8 = 0;
  if (param_4 == 0) goto LAB_001061d0;
  memset(param_3,0,(ulong)param_4 << 3);
  if (((param_2 & 0x4000) == 0) ||
     (iVar5 = gxv_load_table(param_1,0x66656174,&local_960,&local_958), iVar5 == 0)) {
    if (param_4 < 4) {
      if (param_4 != 1) {
        if ((param_2 & 0x8000) == 0) {
          if (param_4 != 2) {
LAB_001061be:
            if ((param_2 & 0x10000) != 0) goto LAB_00107120;
          }
        }
        else {
LAB_00106ad0:
          iVar5 = gxv_load_table(param_1,0x6d6f7274,&local_920,&local_918);
          if (iVar5 != 0) goto LAB_001066f0;
          if (param_4 != 2) goto LAB_0010665b;
        }
      }
LAB_001061d0:
      if (local_960 != (int *)0x0) {
        ft_validator_init(&local_128,local_960,(long)local_960 + local_958,0);
        iVar5 = _setjmp(&local_128);
        piVar14 = local_960;
        if (iVar5 == 0) {
          local_868 = &local_8b8;
          local_878 = &local_128;
          puVar24 = (uint *)(local_960 + 3);
          local_8b8 = 0;
          local_870 = param_1;
          uVar23 = 0xc;
          if (local_58 < puVar24) {
            ft_validator_error(local_878,8);
            uVar23 = local_8b8 + 0xc;
          }
          local_8b8 = uVar23;
          if (*piVar14 != 0x100) {
            ft_validator_error(&local_128,8);
          }
          uVar4 = *(ushort *)(piVar14 + 1) << 8 | *(ushort *)(piVar14 + 1) >> 8;
          if (1 < local_50) {
            if (*(short *)((long)piVar14 + 6) != 0) {
              ft_validator_error(&local_128,8);
            }
            if (piVar14[2] != 0) {
              ft_validator_error(&local_128,8);
            }
          }
          local_8b8 = local_8b8 + ((uint)uVar4 + (uint)uVar4 * 2) * 4;
          if (uVar4 != 0) {
            local_a3c = 0xffffffff;
            do {
              uVar23 = local_8b8;
              if (local_58 < (uint *)((long)puVar24 + 10U)) {
                ft_validator_error(&local_128,8);
              }
              uVar22 = (ushort)*puVar24 << 8 | (ushort)*puVar24 >> 8;
              uVar12 = *(ushort *)((long)puVar24 + 2);
              uVar7 = puVar24[1];
              uVar11 = (ushort)puVar24[2];
              uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18;
              uVar10 = uVar12 << 8 | uVar12 >> 8;
              uVar2 = uVar11 << 8;
              uVar17 = uVar2 | uVar11 >> 8;
              local_8b4 = uVar22;
              if (uVar7 < uVar23) {
                ft_validator_error(&local_128,9);
              }
              if (((uVar2 & 0x3f00) == 0) && (1 < local_50)) {
                ft_validator_error(&local_128,8);
              }
              if ((short)uVar17 < 0) {
                uVar3 = uVar2 & 0x4000;
                if ((uVar2 & 0x4000) != 0) {
                  uVar3 = uVar11 >> 8;
                }
                if (uVar10 <= uVar3) {
                  ft_validator_error(&local_128,8);
                }
              }
              if ((uVar22 < 0x68) && (gxv_feat_registry[(ulong)uVar22 * 4] != '\0')) {
                if ((gxv_feat_registry[(ulong)uVar22 * 4 + 1] != '\0') && (local_50 != 0)) {
                  ft_validator_error(&local_128,8);
                }
                if (((byte)gxv_feat_registry[(long)(int)(uint)uVar22 * 4 + 3] != uVar10) &&
                   (local_50 != 0)) {
                  ft_validator_error(&local_128,8);
                }
                if ((gxv_feat_registry[(long)(int)(uint)uVar22 * 4 + 2] !=
                     (char)-((char)uVar11 >> 7)) && (local_50 != 0)) {
LAB_00106f20:
                  ft_validator_error(&local_128,8);
                }
              }
              else if (1 < local_50) goto LAB_00106f20;
              puVar15 = puVar24 + 3;
              if (local_58 < puVar15) {
                ft_validator_error(&local_128,8);
              }
              uVar20 = 0;
              uVar23 = 0xffffffff;
              gxv_sfntName_validate
                        (*(ushort *)((long)puVar24 + 10) << 8 | *(ushort *)((long)puVar24 + 10) >> 8
                         ,0xff,0x8000,&local_878);
              puVar24 = (uint *)((ulong)uVar7 + local_60);
              if (uVar12 != 0) {
                do {
                  while( true ) {
                    if (local_58 < (uint *)((long)puVar24 + 2U)) {
                      ft_validator_error(&local_128,8);
                    }
                    uVar12 = (ushort)*puVar24 >> 8;
                    uVar11 = (ushort)*puVar24 << 8 | uVar12;
                    if (((short)uVar17 < 0) && ((uVar12 & 1) == 0)) {
                      ft_validator_error(&local_128,8);
                    }
                    puVar13 = puVar24 + 1;
                    if (local_58 < puVar13) {
                      ft_validator_error(&local_128,8);
                    }
                    gxv_sfntName_validate
                              (*(ushort *)((long)puVar24 + 2) << 8 |
                               *(ushort *)((long)puVar24 + 2) >> 8,0xff,0x8000,&local_878);
                    puVar24 = puVar13;
                    local_8b2 = uVar11;
                    if ((int)(uint)uVar11 <= (int)uVar23) break;
                    uVar20 = uVar20 + 1;
                    uVar23 = (uint)uVar11;
                    if (uVar10 <= uVar20) goto LAB_00106e70;
                  }
                  if (1 < local_50) {
                    ft_validator_error(&local_128,8);
                  }
                  uVar23 = (uint)local_8b2;
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar10);
              }
LAB_00106e70:
              uVar23 = (uint)local_8b4;
              if (((int)(uint)local_8b4 <= (int)local_a3c) && (1 < local_50)) {
                ft_validator_error(&local_128,8);
                uVar23 = (uint)local_8b4;
              }
              puVar24 = puVar15;
              local_a3c = uVar23;
            } while (puVar15 != (uint *)(piVar14 + (ulong)(uVar4 - 1) * 3 + 6));
          }
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_950 != (int *)0x0) {
        ft_validator_init(&local_128,local_950,(long)local_950 + local_948,0);
        iVar5 = _setjmp(&local_128);
        piVar14 = local_950;
        if (iVar5 == 0) {
          local_7b8 = local_8a8;
          local_248[0] = gxv_bsln_parts_fmt0_validate;
          local_248[1] = gxv_bsln_parts_fmt1_validate;
          puVar24 = (uint *)(local_950 + 2);
          local_7c0 = param_1;
          local_7c8 = &local_128;
          local_248[2] = gxv_bsln_parts_fmt2_validate;
          local_248[3] = gxv_bsln_parts_fmt3_validate;
          if (local_58 < puVar24) {
            ft_validator_error(&local_128,8);
          }
          uVar4 = *(ushort *)(piVar14 + 1) << 8 | *(ushort *)(piVar14 + 1) >> 8;
          uVar12 = *(ushort *)((long)piVar14 + 6) << 8 | *(ushort *)((long)piVar14 + 6) >> 8;
          if (*piVar14 != 0x100) {
            ft_validator_error(local_7c8,8);
          }
          if (3 < uVar4) {
            ft_validator_error(local_7c8,8);
          }
          if (0x1f < uVar12) {
            ft_validator_error(local_7c8,8);
          }
          local_8a0 = uVar12;
          (*local_248[uVar4])(puVar24,0,&local_7c8);
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_940 != (int *)0x0) {
        ft_validator_init(&local_128,local_940,(long)local_940 + local_938,0);
        iVar5 = _setjmp(&local_128);
        puVar24 = local_58;
        piVar14 = local_940;
        if (iVar5 == 0) {
          local_890 = local_1c8;
          local_898[0] = 0;
          local_718 = &local_128;
          local_708 = local_970;
          local_710 = param_1;
          if (local_58 < local_940 + 3) {
            ft_validator_error(&local_128,8);
          }
          uVar4 = *(ushort *)((long)piVar14 + 6);
          uVar12 = *(ushort *)(piVar14 + 2);
          iVar5 = piVar14[1];
          sVar19 = *(ushort *)((long)piVar14 + 10) << 8;
          uVar11 = *(ushort *)((long)piVar14 + 10) >> 8;
          uVar2 = uVar12 >> 8;
          if (*piVar14 != 0x100) {
            ft_validator_error(&local_128,8);
          }
          if ((short)iVar5 != 0) {
            ft_validator_error(&local_128,8);
          }
          if ((uVar4 >> 8 & 3) == 0) {
            if ((uVar2 & 3) == 0) {
              if (sVar19 != 0 || uVar11 != 0) {
LAB_00107c73:
                ft_validator_error(&local_128,8);
              }
              if (uVar4 != 0) goto LAB_00107bfd;
              goto LAB_0010694c;
            }
LAB_001076a0:
            ft_validator_error(&local_128,9);
            if (sVar19 != 0 || uVar11 != 0) {
              ft_validator_error(&local_128,8);
            }
            if (uVar4 != 0) goto LAB_00107bfd;
LAB_001076db:
            lVar18 = (ulong)(ushort)(uVar12 << 8 | uVar2) + (long)piVar14;
            gxv_trak_trackData_validate(lVar18,puVar24,&local_718);
            uVar8 = (ulong)local_898[0];
            local_898[0] = local_898[0] + 1;
            local_1c8[uVar8 * 3] = lVar18;
            local_1c8[uVar8 * 3 + 1] = local_700;
            local_1b8[uVar8 * 3] = "vertJustData";
          }
          else {
            ft_validator_error(&local_128,9);
            if ((uVar2 & 3) != 0) goto LAB_001076a0;
            if (sVar19 != 0 || uVar11 != 0) goto LAB_00107c73;
LAB_00107bfd:
            lVar18 = (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + (long)piVar14;
            gxv_trak_trackData_validate(lVar18,puVar24,&local_718);
            local_1b8[0] = "horizJustData";
            local_898[0] = 1;
            local_1c8[0] = lVar18;
LAB_0010694c:
            if (uVar12 != 0) goto LAB_001076db;
          }
          gxv_odtect_validate(local_898,&local_718);
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_930 != (int *)0x0) {
        ft_validator_init(&local_128,local_930,(long)local_930 + local_928,0);
        iVar5 = _setjmp(&local_128);
        puVar24 = local_58;
        piVar14 = local_930;
        if (iVar5 == 0) {
          local_880 = local_178;
          local_668 = &local_128;
          local_658 = local_8b0;
          local_660 = param_1;
          if (local_58 < (uint *)((long)local_930 + 10U)) {
            ft_validator_error(&local_128,8);
          }
          uVar4 = *(ushort *)((long)piVar14 + 6);
          local_178[0] = piVar14;
          local_168 = "just header";
          iVar5 = piVar14[1];
          local_888[0] = 1;
          uVar12 = *(ushort *)(piVar14 + 2);
          local_178[1] = (int *)0xa;
          if (*piVar14 != 0x100) {
            ft_validator_error(local_668,8);
          }
          if ((short)iVar5 != 0) {
            ft_validator_error(local_668,8);
          }
          if (uVar4 != 0) {
            lVar18 = (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + (long)piVar14;
            gxv_just_justData_validate(lVar18,puVar24,&local_668);
            local_888[0] = 2;
            local_150 = "horizJustData";
            local_160 = lVar18;
          }
          if (uVar12 != 0) {
            piVar14 = (int *)((long)piVar14 + (ulong)(ushort)(uVar12 << 8 | uVar12 >> 8));
            gxv_just_justData_validate(piVar14,puVar24,&local_668);
            uVar8 = (ulong)local_888[0];
            local_888[0] = local_888[0] + 1;
            local_178[uVar8 * 3] = piVar14;
            local_178[uVar8 * 3 + 1] = local_650;
            (&local_168)[uVar8 * 3] = "vertJustData";
          }
          gxv_odtect_validate(local_888,&local_668);
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_920 != (int *)0x0) {
        ft_validator_init(&local_128,local_920,(long)local_920 + local_918,0);
        iVar5 = _setjmp(&local_128);
        puVar24 = local_58;
        piVar14 = local_920;
        if (iVar5 == 0) {
          local_5b8 = &local_128;
          puVar15 = (uint *)(local_920 + 2);
          local_5b0 = param_1;
          if (local_58 < puVar15) {
            ft_validator_error(&local_128,8);
          }
          uVar23 = piVar14[1];
          uVar8 = (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                         uVar23 << 0x18);
          if (*piVar14 != 0x100) {
            ft_validator_error(local_5b8,8);
          }
          uVar16 = 0;
          if (uVar8 != 0) {
            uVar6 = (long)puVar15 - (long)piVar14;
            while( true ) {
              if ((uVar6 & 3) != 0) {
                ft_validator_error(local_5b8,9);
              }
              puVar13 = puVar15 + 3;
              puVar9 = puVar24;
              if (puVar24 == (uint *)0x0) {
                puVar9 = (uint *)local_5b8[1].__jmpbuf[1];
              }
              if (puVar9 < puVar13) {
                ft_validator_error(local_5b8,8);
              }
              uVar4 = *(ushort *)((long)puVar15 + 10);
              uVar23 = puVar15[1];
              uVar12 = 0;
              puVar9 = puVar15 + 2;
              uVar6 = (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                             uVar23 << 0x18);
              puVar15 = (uint *)((long)puVar15 + uVar6);
              gxv_mort_featurearray_validate
                        (puVar13,puVar15,(ushort)*puVar9 << 8 | (ushort)*puVar9 >> 8,&local_5b8);
              local_228[2] = gxv_mort_subtable_type2_validate;
              local_228[4] = gxv_mort_subtable_type4_validate;
              puVar13 = (uint *)(local_5a0 + (long)puVar13);
              local_228[3] = (code *)0x0;
              local_200 = gxv_mort_subtable_type5_validate;
              local_228[0] = gxv_mort_subtable_type0_validate;
              local_228[1] = gxv_mort_subtable_type1_validate;
              if (uVar4 != 0) {
                do {
                  puVar9 = puVar13 + 2;
                  if (puVar15 < puVar9) {
                    ft_validator_error(local_5b8,8);
                  }
                  bVar1 = *(byte *)((long)puVar13 + 3);
                  puVar13 = (uint *)((long)puVar9 +
                                    (ulong)((ushort)((ushort)*puVar13 << 8 | (ushort)*puVar13 >> 8)
                                           - 8));
                  if (puVar15 < puVar13) {
                    ft_validator_error(local_5b8,8);
                  }
                  if (5 < (bVar1 & 7)) {
                    ft_validator_error(local_5b8,8);
                  }
                  uVar12 = uVar12 + 1;
                  (*local_228[bVar1 & 7])(puVar9,puVar13,&local_5b8);
                } while (uVar12 < (ushort)(uVar4 << 8 | uVar4 >> 8));
              }
              uVar16 = uVar16 + 1;
              local_5a0 = uVar6;
              if (uVar8 == uVar16) break;
              uVar6 = (long)puVar15 - (long)piVar14;
            }
          }
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_910 != (int *)0x0) {
        ft_validator_init(&local_128,local_910,(long)local_910 + local_908,0);
        iVar5 = _setjmp(&local_128);
        piVar14 = local_910;
        if (iVar5 == 0) {
          local_508 = &local_128;
          puVar24 = (uint *)(local_910 + 2);
          local_500 = param_1;
          if (local_58 < puVar24) {
            ft_validator_error(local_508,8);
          }
          uVar23 = piVar14[1];
          uVar8 = (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                         uVar23 << 0x18);
          if (*piVar14 != 0x200) {
            ft_validator_error(local_508,8);
          }
          uVar16 = 0;
          if (uVar8 != 0) {
            do {
              if (((long)puVar24 - (long)piVar14 & 3U) != 0) {
                ft_validator_error(local_508,9);
              }
              puVar15 = puVar24 + 4;
              if ((uint *)local_508[1].__jmpbuf[1] < puVar15) {
                ft_validator_error(local_508,8);
              }
              uVar23 = puVar24[1];
              uVar7 = puVar24[2];
              uVar6 = (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                             uVar23 << 0x18);
              uVar23 = puVar24[3];
              uVar20 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8;
              gxv_mort_featurearray_validate
                        (puVar15,0,
                         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                         uVar7 << 0x18,&local_508);
              puVar15 = (uint *)((long)puVar15 + local_4f0);
              if (0xffff < (uVar20 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18)) {
                ft_validator_error(local_508,8);
              }
              sVar21 = 0;
              local_1f8[3] = (code *)0x0;
              puVar24 = (uint *)((long)puVar24 + uVar6);
              local_1f8[0] = gxv_morx_subtable_type0_validate;
              local_1f8[1] = gxv_morx_subtable_type1_validate;
              local_1f8[2] = gxv_morx_subtable_type2_validate;
              local_1f8[4] = gxv_morx_subtable_type4_validate;
              local_1d0 = gxv_morx_subtable_type5_validate;
              sVar19 = (short)uVar20;
              if (sVar19 != 0) {
                do {
                  puVar13 = puVar15 + 3;
                  if (puVar24 < puVar13) {
                    ft_validator_error(local_508,8);
                  }
                  uVar23 = *puVar15;
                  uVar7 = *(byte *)((long)puVar15 + 7) & 7;
                  puVar15 = (uint *)((long)puVar15 +
                                    (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 |
                                            (uVar23 & 0xff00) << 8 | uVar23 << 0x18));
                  if (puVar24 < puVar15) {
                    ft_validator_error(local_508,8);
                  }
                  if (5 < uVar7) {
                    ft_validator_error(local_508,8);
                  }
                  sVar21 = sVar21 + 1;
                  (*local_1f8[uVar7])(puVar13,puVar15,&local_508);
                } while (sVar19 != sVar21);
              }
              uVar16 = uVar16 + 1;
              local_4f0 = uVar6;
            } while (uVar8 != uVar16);
          }
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_900 != 0) {
        ft_validator_init(&local_128,local_900,local_900 + local_8f8,0);
        iVar5 = _setjmp(&local_128);
        if (iVar5 == 0) {
          gxv_kern_validate_generic(local_900,param_1,0,0xc000,&local_128);
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_8f0 != (int *)0x0) {
        ft_validator_init(&local_128,local_8f0,(long)local_8f0 + local_8e8,0);
        iVar5 = _setjmp(&local_128);
        piVar14 = local_8f0;
        if (iVar5 == 0) {
          local_448 = &local_96c;
          local_458 = &local_128;
          local_96a = 0xffff;
          puVar24 = (uint *)((long)local_8f0 + 6);
          local_450 = param_1;
          if (local_58 < puVar24) {
            ft_validator_error(local_458,8);
          }
          iVar5 = *piVar14;
          uVar4 = *(ushort *)(piVar14 + 1) << 8 | *(ushort *)(piVar14 + 1) >> 8;
          *local_448 = uVar4;
          if (iVar5 != 0x100) {
            ft_validator_error(local_458,8);
            uVar4 = *local_448;
          }
          if (1 < uVar4) {
            ft_validator_error(local_458,8);
          }
          local_438 = 0;
          local_430 = gxv_opbd_LookupValue_validate;
          pcStack_428 = gxv_opbd_LookupFmt4_transit;
          gxv_LookupTable_validate(puVar24,0,&local_458);
          if ((ulong)local_448[1] + (long)piVar14 < (ulong)((long)puVar24 + local_440)) {
            ft_validator_error(local_458,9);
          }
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_8e0 != (uint *)0x0) {
        ft_validator_init(&local_128,local_8e0,(long)local_8e0 + local_8d8,0);
        iVar5 = _setjmp(&local_128);
        puVar24 = local_8e0;
        if (iVar5 == 0) {
          local_398 = &local_8c0;
          local_3a8 = &local_128;
          puVar15 = local_8e0 + 2;
          local_3a0 = param_1;
          if (local_58 < puVar15) {
            ft_validator_error(local_3a8,8);
          }
          uVar23 = *puVar24;
          uVar4 = (ushort)puVar24[1];
          uVar7 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8;
          uVar20 = (uVar23 & 0xff00) << 8;
          lVar18 = (long)(int)(uVar7 | uVar20 | uVar23 << 0x18);
          uVar12 = *(ushort *)((long)puVar24 + 6) << 8 | *(ushort *)((long)puVar24 + 6) >> 8;
          if (((uVar7 | uVar20 & 0xfffdffff | uVar23 << 0x18) != 0x10000) && (lVar18 != 0x20000)) {
            ft_validator_error(local_3a8,8);
          }
          if ((ushort)(uVar4 << 8 | uVar4 >> 8) < 2) {
            gxv_prop_property_validate(uVar12,0,&local_3a8);
            if (uVar4 == 0) goto LAB_001064eb;
          }
          else {
            ft_validator_error(local_3a8,8);
            gxv_prop_property_validate(uVar12,0,&local_3a8);
          }
          *local_398 = lVar18;
          local_388 = 0;
          local_380 = gxv_prop_LookupValue_validate;
          pcStack_378 = gxv_prop_LookupFmt4_transit;
          gxv_LookupTable_validate(puVar15,0,&local_3a8);
        }
LAB_001064eb:
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (local_8d0 != (int *)0x0) {
        ft_validator_init(&local_128,local_8d0,(long)local_8d0 + local_8c8,0);
        iVar5 = _setjmp(&local_128);
        piVar14 = local_8d0;
        if (iVar5 == 0) {
          local_2e8 = &local_972;
          local_2f8 = &local_128;
          puVar24 = (uint *)((long)local_8d0 + 6);
          local_2f0 = param_1;
          if (local_58 < puVar24) {
            ft_validator_error(local_2f8,8);
          }
          uVar4 = *(ushort *)(piVar14 + 1);
          iVar5 = *piVar14;
          uVar4 = uVar4 << 8 | uVar4 >> 8;
          *local_2e8 = uVar4;
          if (iVar5 != 0x100) {
            ft_validator_error(local_2f8,8);
            uVar4 = *local_2e8;
          }
          if (1 < uVar4) {
            ft_validator_error(local_2f8,8);
          }
          local_2d8 = 0;
          local_2d0 = gxv_lcar_LookupValue_validate;
          pcStack_2c8 = gxv_lcar_LookupFmt4_transit;
          gxv_LookupTable_validate(puVar24,0,&local_2f8);
        }
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_001066f0;
      }
      if (((((((param_4 != 0) && (*param_3 = local_960, param_4 != 1)) &&
             (param_3[1] = local_920, param_4 != 2)) &&
            ((param_3[2] = local_910, param_4 != 3 && (param_3[3] = local_950, param_4 != 4)))) &&
           ((param_3[4] = local_930, param_4 != 5 &&
            ((param_3[5] = local_900, param_4 != 6 && (param_3[6] = local_8f0, param_4 != 7)))))) &&
          (param_3[7] = local_940, param_4 != 8)) && (param_3[8] = local_8e0, param_4 != 9)) {
        param_3[9] = local_8d0;
      }
      iVar5 = 0;
      goto LAB_0010683a;
    }
    if (((param_2 & 0x20000) == 0) ||
       (iVar5 = gxv_load_table(param_1,0x62736c6e,&local_950,&local_948), iVar5 == 0)) {
      if (param_4 < 8) {
        if (param_4 == 4) {
          if ((param_2 & 0x8000) == 0) goto LAB_001061be;
          goto LAB_00106ad0;
        }
      }
      else if (((param_2 & 0x200000) != 0) &&
              (iVar5 = gxv_load_table(param_1,0x7472616b,&local_940,&local_938), iVar5 != 0))
      goto LAB_001066f0;
      if (((param_2 & 0x40000) == 0) ||
         (iVar5 = gxv_load_table(param_1,0x6a757374,&local_930,&local_928), iVar5 == 0)) {
        if ((param_2 & 0x8000) != 0) goto LAB_00106ad0;
LAB_0010665b:
        if ((param_2 & 0x10000) != 0) {
LAB_00107120:
          iVar5 = gxv_load_table(param_1,0x6d6f7278,&local_910,&local_908);
          if (iVar5 != 0) goto LAB_001066f0;
        }
        if ((param_4 < 6) ||
           ((((param_2 & 0x80000) == 0 ||
             (iVar5 = gxv_load_table(param_1,0x6b65726e,&local_900,&local_8f8), iVar5 == 0)) &&
            ((param_4 == 6 ||
             ((((param_2 & 0x100000) == 0 ||
               (iVar5 = gxv_load_table(param_1,0x6f706264,&local_8f0,&local_8e8), iVar5 == 0)) &&
              ((param_4 < 9 ||
               ((((param_2 & 0x400000) == 0 ||
                 (iVar5 = gxv_load_table(param_1,0x70726f70,&local_8e0,&local_8d8), iVar5 == 0)) &&
                ((param_4 == 9 ||
                 (((param_2 & 0x800000) == 0 ||
                  (iVar5 = gxv_load_table(param_1,0x6c636172,&local_8d0,&local_8c8), iVar5 == 0)))))
                ))))))))))) goto LAB_001061d0;
      }
    }
  }
LAB_001066f0:
  ft_mem_free(local_968,local_960);
  local_960 = (int *)0x0;
  ft_mem_free(local_968,local_950);
  local_950 = (int *)0x0;
  ft_mem_free(local_968,local_940);
  local_940 = (int *)0x0;
  ft_mem_free(local_968,local_930);
  local_930 = (int *)0x0;
  ft_mem_free(local_968,local_920);
  local_920 = (int *)0x0;
  ft_mem_free(local_968,local_910);
  local_910 = (int *)0x0;
  ft_mem_free(local_968,local_900);
  local_900 = 0;
  ft_mem_free(local_968,local_8f0);
  local_8f0 = (int *)0x0;
  ft_mem_free(local_968,local_8e0);
  local_8e0 = (uint *)0x0;
  ft_mem_free(local_968,local_8d0);
  local_8d0 = (int *)0x0;
LAB_0010683a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


