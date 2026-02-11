
void ft_stroke_border_close(uint *param_1,char param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar2 = param_1[7];
  uVar3 = *param_1;
  if (uVar3 <= uVar2 + 1) {
    *param_1 = uVar2;
    param_1[7] = 0xffffffff;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  uVar17 = (ulong)(uVar3 - 1);
  uVar18 = (ulong)uVar2;
  lVar12 = *(long *)(param_1 + 4);
  *param_1 = uVar3 - 1;
  puVar10 = (undefined8 *)(*(long *)(param_1 + 2) + uVar17 * 0x10);
  uVar4 = puVar10[1];
  puVar13 = (undefined8 *)(*(long *)(param_1 + 2) + uVar18 * 0x10);
  *puVar13 = *puVar10;
  puVar13[1] = uVar4;
  *(undefined1 *)(lVar12 + uVar18) = *(undefined1 *)(lVar12 + uVar17);
  if (param_2 != '\0') {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10 + uVar18 * 0x10);
    puVar13 = (undefined8 *)(*(long *)(param_1 + 2) + -0x10 + uVar17 * 0x10);
    if (puVar10 < puVar13) {
      do {
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        uVar6 = puVar13[1];
        puVar11 = puVar10 + 2;
        puVar14 = puVar13 + -2;
        *puVar10 = *puVar13;
        puVar10[1] = uVar6;
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        puVar10 = puVar11;
        puVar13 = puVar14;
      } while (puVar11 < puVar14);
    }
    lVar12 = *(long *)(param_1 + 4);
    puVar7 = (undefined1 *)(uVar18 + 1 + lVar12);
    puVar15 = (undefined1 *)(lVar12 + -1 + uVar17);
    if (puVar15 <= puVar7) goto LAB_001000be;
    do {
      uVar1 = *puVar7;
      puVar8 = puVar7 + 1;
      puVar16 = puVar15 + -1;
      *puVar7 = *puVar15;
      *puVar15 = uVar1;
      puVar7 = puVar8;
      puVar15 = puVar16;
    } while (puVar8 < puVar16);
  }
  lVar12 = *(long *)(param_1 + 4);
LAB_001000be:
  *(byte *)(lVar12 + uVar18) = *(byte *)(lVar12 + uVar18) | 4;
  pbVar9 = (byte *)((ulong)(uVar3 - 2) + *(long *)(param_1 + 4));
  *pbVar9 = *pbVar9 | 8;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



undefined8 ft_stroke_border_get_counts(uint *param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  pbVar1 = *(byte **)(param_1 + 4);
  if (*param_1 == 0) {
    iVar5 = 0;
    iVar4 = 0;
  }
  else {
    bVar6 = false;
    iVar5 = 0;
    pbVar2 = pbVar1;
    do {
      pbVar3 = pbVar2;
      if ((*pbVar3 & 4) == 0) {
        if (!bVar6) goto LAB_0010012c;
      }
      else if (bVar6) goto LAB_0010012c;
      bVar6 = (*pbVar3 & 8) == 0;
      if (!bVar6) {
        iVar5 = iVar5 + 1;
      }
      pbVar2 = pbVar3 + 1;
    } while (pbVar3 + 1 != pbVar1 + *param_1);
    if (bVar6) {
LAB_0010012c:
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
    iVar4 = ((int)pbVar3 - (int)pbVar1) + 1;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  *param_2 = iVar4;
  *param_3 = iVar5;
  return 0;
}



int ft_stroke_border_grow(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  uVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar2 = 0;
  if (uVar1 < (uint)(param_2 + *param_1)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = uVar1;
    do {
      uVar5 = (uVar5 >> 1) + 0x10 + uVar5;
    } while (uVar5 < (uint)(param_2 + *param_1));
    uVar3 = ft_mem_realloc(uVar4,0x10,uVar1,uVar5,*(undefined8 *)(param_1 + 2),&local_44);
    *(undefined8 *)(param_1 + 2) = uVar3;
    iVar2 = local_44;
    if (local_44 == 0) {
      uVar4 = ft_mem_realloc(uVar4,1,uVar1,uVar5,*(undefined8 *)(param_1 + 4),&local_44);
      *(undefined8 *)(param_1 + 4) = uVar4;
      iVar2 = local_44;
      if (local_44 == 0) {
        param_1[1] = uVar5;
      }
    }
  }
  local_44 = iVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ft_stroke_border_cubicto
               (uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  iVar2 = ft_stroke_border_grow(param_1,3);
  if (iVar2 == 0) {
    uVar1 = param_2[1];
    puVar4 = (undefined2 *)((ulong)*param_1 + *(long *)(param_1 + 4));
    puVar3 = (undefined8 *)((ulong)*param_1 * 0x10 + *(long *)(param_1 + 2));
    *puVar3 = *param_2;
    puVar3[1] = uVar1;
    uVar1 = param_3[1];
    puVar3[2] = *param_3;
    puVar3[3] = uVar1;
    uVar1 = param_4[1];
    puVar3[4] = *param_4;
    puVar3[5] = uVar1;
    *puVar4 = 0x202;
    *(undefined1 *)(puVar4 + 1) = 1;
    *param_1 = *param_1 + 3;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



void ft_stroke_border_arcto
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  lVar4 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = 0x5a0000; (lVar2 < param_5 || (SBORROW8(lVar2,-param_5) != lVar2 + param_5 < 0));
      lVar2 = lVar2 + 0x5a0000) {
    lVar4 = lVar4 + 1;
  }
  iVar7 = 1;
  lVar2 = (long)((int)lVar4 * 4);
  lVar2 = FT_Tan(param_5 / lVar2,lVar2,param_5 % lVar2);
  lVar6 = (long)((int)(lVar2 / 3) + (int)lVar2);
  FT_Vector_From_Polar(&local_88,param_3,param_4);
  lVar2 = (int)local_88 * lVar6;
  local_78 = (long)(int)((ulong)(-(int)lStack_80 * lVar6 + 0x8000 +
                                (-(int)lStack_80 * lVar6 >> 0x3f)) >> 0x10) + *param_2 + local_88;
  lStack_70 = (long)(int)((ulong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) +
              param_2[1] + lStack_80;
  lVar2 = param_5;
  local_88 = *param_2 + local_88;
  lStack_80 = param_2[1] + lStack_80;
  do {
    FT_Vector_From_Polar(&local_58,param_3,lVar2 / lVar4 + param_4);
    lVar5 = (long)(int)lStack_50;
    lStack_50 = param_2[1] + lStack_50;
    lVar3 = -(int)local_58 * lVar6;
    lVar5 = (long)(int)((ulong)(lVar5 * lVar6 + 0x8000 + (lVar5 * lVar6 >> 0x3f)) >> 0x10) +
            *param_2 + local_58;
    lVar3 = (int)((ulong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + lStack_50;
    local_68 = lVar5;
    lStack_60 = lVar3;
    local_58 = *param_2 + local_58;
    iVar1 = ft_stroke_border_cubicto(param_1,&local_78,&local_68,&local_58);
    if (iVar1 != 0) break;
    iVar7 = iVar7 + 1;
    lVar2 = lVar2 + param_5;
    local_78 = local_58 * 2 - lVar5;
    lStack_70 = lStack_50 * 2 - lVar3;
  } while (iVar7 <= (int)lVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ft_stroke_border_lineto(uint *param_1,long *param_2,undefined1 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  if ((char)param_1[6] == '\0') {
    if (((param_1[7] < uVar1) &&
        (plVar4 = (long *)((ulong)(uVar1 - 1) * 0x10 + *(long *)(param_1 + 2)),
        (*plVar4 - *param_2) + 1U < 3)) && ((plVar4[1] - param_2[1]) + 1U < 3)) {
      return 0;
    }
    uVar5 = ft_stroke_border_grow(param_1,1);
    if ((int)uVar5 == 0) {
      uVar1 = *param_1;
      lVar2 = *(long *)(param_1 + 4);
      lVar3 = param_2[1];
      plVar4 = (long *)((ulong)uVar1 * 0x10 + *(long *)(param_1 + 2));
      *plVar4 = *param_2;
      plVar4[1] = lVar3;
      *(undefined1 *)(lVar2 + (ulong)uVar1) = 1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    lVar2 = param_2[1];
    plVar4 = (long *)((ulong)(uVar1 - 1) * 0x10 + *(long *)(param_1 + 2));
    *plVar4 = *param_2;
    plVar4[1] = lVar2;
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 6) = param_3;
  return uVar5;
}



undefined8 ft_stroker_process_corner(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FT_Angle_Diff(*param_1,param_1[1]);
  uVar5 = 0;
  if (uVar2 == 0) goto LAB_0010060c;
  local_68 = (undefined1  [16])0x0;
  lVar3 = FT_Angle_Diff(*param_1,param_1[1]);
  lVar9 = (long)param_1 + (ulong)((uint)((long)uVar2 >> 0x3f) & 0x30) + 0x70;
  lVar11 = ((long)uVar2 >> 0x3f & 0xffffffffff4c0000U) + 0x5a0000;
  if (((*(char *)(lVar9 + 0x18) == '\0') || (0x1670002 < lVar3 + 0xb38001U)) || (param_2 == 0)) {
    lVar10 = param_1[0xd];
LAB_0010072c:
    FT_Vector_From_Polar(&local_58,lVar10,param_1[1] + lVar11);
    lVar3 = param_1[2];
    lVar11 = param_1[3];
    *(undefined1 *)(lVar9 + 0x18) = 0;
    local_58 = lVar3 + local_58;
    lStack_50 = lVar11 + lStack_50;
  }
  else {
    FT_Vector_Unit(local_68,lVar3 / 2);
    lVar4 = FT_MulDiv(param_1[0xd],local_68._8_8_,local_68._0_8_);
    lVar10 = param_1[0xd];
    if (lVar4 == 0) goto LAB_0010072c;
    lVar6 = param_1[4];
    if (param_2 <= param_1[4]) {
      lVar6 = param_2;
    }
    if (lVar4 < 1) {
      lVar4 = -lVar4;
    }
    if (lVar6 < lVar4) goto LAB_0010072c;
    lVar4 = *param_1;
    uVar5 = FT_DivFix(lVar10,local_68._0_8_);
    FT_Vector_From_Polar(&local_58,uVar5,lVar11 + lVar3 / 2 + lVar4);
    local_58 = param_1[2] + local_58;
    lStack_50 = param_1[3] + lStack_50;
  }
  uVar5 = ft_stroke_border_lineto(lVar9,&local_58,0);
  if ((int)uVar5 != 0) goto LAB_0010060c;
  iVar1 = (int)param_1[0xb];
  lVar9 = param_1[1];
  uVar8 = (long)~uVar2 >> 0x3f & 0xffffffffff4c0000;
  lVar3 = uVar8 + 0x5a0000;
  lVar10 = (long)param_1 + (ulong)((uint)((long)~uVar2 >> 0x3f) & 0x30) + 0x70;
  lVar11 = param_1[0xd];
  if (iVar1 == 0) {
    lVar9 = FT_Angle_Diff(*param_1);
    if (lVar9 == 0xb40000) {
      lVar9 = lVar3 * -2;
    }
    uVar5 = ft_stroke_border_arcto(lVar10,param_1 + 2,lVar11,*param_1 + lVar3,lVar9);
    *(undefined1 *)(lVar10 + 0x18) = 0;
    goto LAB_0010060c;
  }
  local_78 = (undefined1  [16])0x0;
  if (iVar1 == 1) {
LAB_00100914:
    FT_Vector_From_Polar(&local_58,lVar11,lVar3 + lVar9);
    lVar3 = param_1[2];
    lVar9 = param_1[3];
    *(undefined1 *)(lVar10 + 0x18) = 0;
    local_58 = lVar3 + local_58;
    lStack_50 = lVar9 + lStack_50;
    uVar5 = ft_stroke_border_lineto(lVar10,&local_58,0);
  }
  else {
    lVar6 = FT_Angle_Diff(*param_1);
    lVar9 = *param_1;
    lVar4 = -0x5a0000 - uVar8;
    if (lVar6 / 2 != 0x5a0000) {
      lVar4 = lVar6 / 2;
    }
    FT_Vector_From_Polar(local_78,param_1[0xc],lVar4);
    lVar9 = lVar9 + lVar4 + lVar3;
    if ((long)local_78._0_8_ < 0x10000) {
      if (iVar1 != 2) {
        lVar9 = param_1[1];
        goto LAB_00100914;
      }
      lVar6 = param_1[0xc];
      if (lVar4 < 1) {
        lVar4 = -lVar4;
      }
      if (lVar4 < 0x3a) goto LAB_00100845;
      lVar4 = (long)(int)lVar11 * (long)(int)lVar6;
      FT_Vector_From_Polar
                (local_68,(long)(int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10),lVar9);
      iVar1 = FT_DivFix(0x10000 - local_78._0_8_,local_78._8_8_);
      lVar4 = (long)(int)local_68._8_4_;
      local_58 = param_1[2] + local_68._0_8_;
      lStack_50 = param_1[3] + local_68._8_8_;
      lVar4 = lVar4 * iVar1;
      iVar7 = local_68._0_4_;
      local_68._8_8_ = lStack_50;
      local_68._0_8_ = local_58;
      lVar9 = (long)-iVar7 * (long)iVar1;
      local_58 = (int)((ulong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + local_58;
      lStack_50 = (int)((ulong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + lStack_50;
      uVar5 = ft_stroke_border_lineto(lVar10,&local_58,0);
      if ((int)uVar5 != 0) goto LAB_0010060c;
      local_58 = local_68._0_8_ * 2 - local_58;
      lStack_50 = local_68._8_8_ * 2 - lStack_50;
      uVar5 = ft_stroke_border_lineto(lVar10,&local_58,0);
      if (((int)uVar5 != 0) || (param_2 != 0)) goto LAB_0010060c;
      lVar9 = param_1[1];
    }
    else {
      lVar6 = param_1[0xc];
LAB_00100845:
      uVar5 = FT_MulDiv(param_1[0xd],lVar6);
      FT_Vector_From_Polar(&local_58,uVar5,lVar9);
      local_58 = param_1[2] + local_58;
      lStack_50 = param_1[3] + lStack_50;
      uVar5 = ft_stroke_border_lineto(lVar10,&local_58,0);
      if (((int)uVar5 != 0) || (param_2 != 0)) goto LAB_0010060c;
      lVar9 = param_1[1];
      lVar11 = param_1[0xd];
    }
    FT_Vector_From_Polar(&local_58,lVar11,lVar9 + lVar3);
    local_58 = param_1[2] + local_58;
    lStack_50 = param_1[3] + lStack_50;
    uVar5 = ft_stroke_border_lineto(lVar10,&local_58,0);
  }
LAB_0010060c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FT_Stroker_ExportBorder_part_0(long param_1,uint param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  short sVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  short *psVar10;
  short *psVar11;
  long lVar12;
  
  lVar12 = (ulong)param_2 * 0x30 + param_1;
  if (*(char *)(lVar12 + 0x98) == '\0') {
    return;
  }
  if (*(uint *)(lVar12 + 0x70) != 0) {
    memcpy((void *)((long)param_3[1] * 0x10 + *(long *)(param_3 + 4)),*(void **)(lVar12 + 0x78),
           (ulong)*(uint *)(lVar12 + 0x70) << 4);
    uVar3 = *(uint *)(lVar12 + 0x70);
    sVar2 = param_3[1];
    lVar12 = *(long *)(lVar12 + 0x80);
    lVar4 = *(long *)(param_3 + 8);
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        bVar1 = *(byte *)(lVar12 + uVar6);
        bVar8 = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          bVar8 = bVar1 & 2;
        }
        *(byte *)(sVar2 + lVar4 + uVar6) = bVar8;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
      sVar2 = param_3[1];
      param_1 = param_1 + (ulong)param_2 * 0x30;
      uVar3 = *(uint *)(param_1 + 0x70);
      pbVar7 = *(byte **)(param_1 + 0x80);
      if (uVar3 != 0) {
        sVar5 = (short)pbVar7;
        pbVar9 = pbVar7 + uVar3;
        psVar10 = (short *)(*(long *)(param_3 + 0xc) + (long)*param_3 * 2);
        do {
          psVar11 = psVar10;
          if ((*pbVar7 & 8) != 0) {
            psVar11 = psVar10 + 1;
            *psVar10 = (sVar2 - sVar5) + (short)pbVar7;
            *param_3 = *param_3 + 1;
          }
          pbVar7 = pbVar7 + 1;
          psVar10 = psVar11;
        } while (pbVar7 != pbVar9);
        param_3[1] = param_3[1] + (short)uVar3;
        return;
      }
    }
  }
  param_3[1] = param_3[1];
  return;
}



void ft_stroker_cap_part_0_constprop_0(long param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FT_Vector_From_Polar(&local_48,*(undefined8 *)(param_1 + 0x68),param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x54) == 2) {
    lVar2 = lVar2 + local_48;
    lVar3 = lVar3 + lStack_40;
  }
  lVar5 = lVar2 - lStack_40;
  lVar4 = local_48 + lVar3;
  local_48 = lVar2;
  lStack_40 = lVar3;
  local_38 = lVar5;
  lStack_30 = lVar4;
  iVar1 = ft_stroke_border_lineto(param_1 + 0x70,&local_38,0);
  if (iVar1 == 0) {
    local_38 = local_48 * 2 - lVar5;
    lStack_30 = lStack_40 * 2 - lVar4;
    ft_stroke_border_lineto(param_1 + 0x70,&local_38,0);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ft_stroker_subpath_start(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FT_Vector_From_Polar(&local_58,*(undefined8 *)(param_1 + 0x68),param_2 + 0x5a0000);
  local_48 = *(long *)(param_1 + 0x10) + local_58;
  lStack_40 = *(long *)(param_1 + 0x18) + lStack_50;
  if (-1 < *(int *)(param_1 + 0x8c)) {
    ft_stroke_border_close(param_1 + 0x70,0);
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x70);
  iVar1 = ft_stroke_border_lineto();
  if (iVar1 == 0) {
    local_48 = *(long *)(param_1 + 0x10) - local_58;
    lStack_40 = *(long *)(param_1 + 0x18) - lStack_50;
    if (-1 < *(int *)(param_1 + 0xbc)) {
      ft_stroke_border_close(param_1 + 0xa0,0);
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xa0);
    ft_stroke_border_lineto();
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x48) = param_3;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
FT_Stroker_CubicTo_part_0(long *param_1,undefined1 (*param_2) [16],long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long in_FS_OFFSET;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 local_350;
  long local_2f8;
  long lStack_2f0;
  long local_2e8;
  long lStack_2e0;
  long local_2d8;
  long lStack_2d0;
  long local_2c8;
  long lStack_2c0;
  long local_2b8;
  long lStack_2b0;
  long local_2a8;
  long lStack_2a0;
  long local_298;
  long lStack_290;
  long local_288;
  long lStack_280;
  undefined1 local_278 [16];
  long local_268;
  long lStack_260;
  long local_98 [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((param_1[2] - *(long *)*param_2) + 1U < 3) &&
       ((param_1[3] - *(long *)(*param_2 + 8)) + 1U < 3)) &&
      ((*(long *)*param_2 - *param_3) + 1U < 3)) &&
     ((((*(long *)(*param_2 + 8) - param_3[1]) + 1U < 3 && ((*param_3 - *param_4) + 1U < 3)) &&
      ((param_3[1] - param_4[1]) + 1U < 3)))) {
    lVar5 = param_4[1];
    uVar6 = 0;
    param_1[2] = *param_4;
    param_1[3] = lVar5;
  }
  else {
    local_298 = *param_4;
    lStack_290 = param_4[1];
    bVar3 = true;
    local_288 = *param_3;
    lStack_280 = param_3[1];
    local_278 = *param_2;
    local_268 = param_1[2];
    lStack_260 = param_1[3];
    plVar25 = &local_298;
    do {
      lVar5 = *param_1;
      lVar24 = lVar5;
      lVar16 = lVar5;
      if (plVar25 < local_98) {
        lVar7 = plVar25[4];
        lVar8 = plVar25[5];
        lVar9 = plVar25[6];
        lVar10 = plVar25[7];
        lVar1 = plVar25[2];
        lVar2 = plVar25[3];
        lVar15 = *plVar25;
        lVar14 = plVar25[1];
        lVar22 = lVar8 - lVar10;
        lVar23 = plVar25[2] - plVar25[4];
        lVar19 = plVar25[4] - plVar25[6];
        lVar21 = lVar2 - lVar8;
        lVar20 = lVar14 - lVar2;
        lVar17 = *plVar25 - plVar25[2];
        uVar26 = lVar17 + 1;
        if (lVar19 + 1U < 3) {
          uVar27 = lVar22 + 1;
          if ((lVar23 + 1U < 3) && (lVar21 + 1U < 3)) {
            if ((uVar26 < 3) && (lVar20 + 1U < 3)) {
              if (2 < uVar27) goto LAB_00100eed;
            }
            else {
              if (2 < uVar27) goto LAB_001016f0;
              lVar5 = FT_Atan2(lVar17,lVar20);
              lVar24 = lVar5;
              lVar16 = lVar5;
            }
          }
          else if ((uVar26 < 3) && (lVar20 + 1U < 3)) {
            if (2 < uVar27) goto LAB_0010163e;
            lVar5 = FT_Atan2(lVar23,lVar21);
            lVar24 = lVar5;
            lVar16 = lVar5;
          }
          else {
            if (2 < uVar27) goto LAB_0010122a;
            lVar5 = FT_Atan2(lVar23,lVar21);
            lVar16 = FT_Atan2(lVar17,lVar20);
            lVar24 = lVar5;
          }
        }
        else if ((lVar23 + 1U < 3) && (lVar21 + 1U < 3)) {
          if ((uVar26 < 3) && (lVar20 + 1U < 3)) {
LAB_00100eed:
            lVar5 = FT_Atan2(lVar19,lVar22);
            lVar24 = lVar5;
            lVar16 = lVar5;
          }
          else {
LAB_001016f0:
            lVar5 = FT_Atan2(lVar19,lVar22);
            lVar16 = FT_Atan2(lVar17,lVar20);
            lVar24 = FT_Angle_Diff(lVar5,lVar16);
            lVar24 = lVar24 / 2 + lVar5;
          }
        }
        else if ((uVar26 < 3) && (lVar20 + 1U < 3)) {
LAB_0010163e:
          lVar5 = FT_Atan2(lVar19,lVar22);
          lVar24 = FT_Atan2(lVar23,lVar21);
          lVar16 = lVar24;
        }
        else {
LAB_0010122a:
          lVar5 = FT_Atan2(lVar19,lVar22);
          lVar24 = FT_Atan2(lVar23,lVar21);
          lVar16 = FT_Atan2(lVar17,lVar20);
        }
        lVar19 = FT_Angle_Diff(lVar5,lVar24);
        lVar17 = FT_Angle_Diff(lVar24,lVar16);
        if (lVar19 < 1) {
          lVar19 = -lVar19;
        }
        if (lVar19 < 0x168000) {
          if (lVar17 < 1) {
            lVar17 = -lVar17;
          }
          if (lVar17 < 0x168000) {
            if (!bVar3) goto LAB_0010127f;
            goto LAB_00100f56;
          }
        }
        if ((char)param_1[5] != '\0') {
          *param_1 = lVar5;
        }
        plVar18 = plVar25 + 6;
        plVar25[0xc] = lVar9;
        plVar25[0xd] = lVar10;
        uVar32 = lVar9 + lVar7;
        uVar33 = lVar10 + lVar8;
        lVar7 = lVar7 + lVar1;
        uVar28 = lVar15 + lVar1;
        uVar29 = lVar14 + lVar2;
        uVar30 = uVar32 + lVar7;
        uVar31 = uVar33 + lVar8 + lVar2;
        uVar26 = lVar7 + uVar28;
        uVar27 = lVar8 + lVar2 + uVar29;
        *(int *)(plVar25 + 10) = (int)(uVar32 >> 1);
        *(int *)((long)plVar25 + 0x54) = (int)((long)uVar32 >> 0x21);
        *(int *)(plVar25 + 0xb) = (int)(uVar33 >> 1);
        *(int *)((long)plVar25 + 0x5c) = (int)((long)uVar33 >> 0x21);
        *(int *)(plVar25 + 8) = (int)(uVar30 >> 2);
        *(int *)((long)plVar25 + 0x44) = (int)((long)uVar30 >> 0x22);
        *(int *)(plVar25 + 9) = (int)(uVar31 >> 2);
        *(int *)((long)plVar25 + 0x4c) = (int)((long)uVar31 >> 0x22);
        *(int *)(plVar25 + 2) = (int)(uVar28 >> 1);
        *(int *)((long)plVar25 + 0x14) = (int)((long)uVar28 >> 0x21);
        *(int *)(plVar25 + 3) = (int)(uVar29 >> 1);
        *(int *)((long)plVar25 + 0x1c) = (int)((long)uVar29 >> 0x21);
        *(int *)(plVar25 + 4) = (int)(uVar26 >> 2);
        *(int *)((long)plVar25 + 0x24) = (int)((long)uVar26 >> 0x22);
        *(int *)(plVar25 + 5) = (int)(uVar27 >> 2);
        *(int *)((long)plVar25 + 0x2c) = (int)((long)uVar27 >> 0x22);
        *(int *)plVar18 = (int)(uVar26 + uVar30 >> 3);
        *(int *)((long)plVar25 + 0x34) = (int)((long)(uVar26 + uVar30) >> 0x23);
        *(int *)(plVar25 + 7) = (int)(uVar27 + uVar31 >> 3);
        *(int *)((long)plVar25 + 0x3c) = (int)((long)(uVar27 + uVar31) >> 0x23);
      }
      else {
        if (bVar3) {
LAB_00100f56:
          if ((char)param_1[5] == '\0') {
            param_1[1] = lVar5;
            uVar6 = ft_stroker_process_corner(param_1,0);
          }
          else {
            uVar6 = ft_stroker_subpath_start(param_1,lVar5,0);
          }
LAB_00100f6e:
          if ((int)uVar6 != 0) goto LAB_00101603;
        }
        else {
LAB_0010127f:
          lVar8 = FT_Angle_Diff(*param_1,lVar5);
          lVar7 = -lVar8;
          if (0 < lVar8) {
            lVar7 = lVar8;
          }
          if (0x5a000 < lVar7) {
            lVar7 = plVar25[6];
            lVar8 = plVar25[7];
            param_1[1] = lVar5;
            *(undefined4 *)(param_1 + 0xb) = 0;
            param_1[2] = lVar7;
            param_1[3] = lVar8;
            uVar6 = ft_stroker_process_corner(param_1,0);
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
            goto LAB_00100f6e;
          }
        }
        lVar7 = FT_Angle_Diff(lVar5,lVar24);
        lVar8 = FT_Angle_Diff(lVar24,lVar16);
        lVar9 = FT_Angle_Diff(lVar5,lVar24);
        lVar10 = FT_Angle_Diff(lVar24,lVar16);
        lVar24 = lVar24 + lVar10 / 2;
        uVar6 = FT_Cos(lVar7 / 2);
        uVar11 = FT_DivFix(param_1[0xd],uVar6);
        uVar6 = FT_Cos(lVar8 / 2);
        uVar12 = FT_DivFix(param_1[0xd],uVar6);
        if ((char)param_1[10] == '\0') {
          local_350 = 0;
        }
        else {
          local_350 = FT_Atan2(*plVar25 - plVar25[6],plVar25[1] - plVar25[7]);
        }
        plVar18 = param_1 + 0xe;
        lVar7 = lVar24 + 0x5a0000;
        do {
          FT_Vector_From_Polar(&local_2f8,uVar11,((lVar9 / 2 + lVar5) - lVar24) + lVar7);
          local_2f8 = local_2f8 + plVar25[4];
          lStack_2f0 = lStack_2f0 + plVar25[5];
          FT_Vector_From_Polar(&local_2e8,uVar12,lVar7);
          local_2e8 = local_2e8 + plVar25[2];
          lStack_2e0 = lStack_2e0 + plVar25[3];
          FT_Vector_From_Polar(&local_2d8,param_1[0xd],(lVar16 - lVar24) + lVar7);
          lVar8 = *plVar25;
          lVar10 = plVar25[1];
          local_2d8 = lVar8 + local_2d8;
          lStack_2d0 = lVar10 + lStack_2d0;
          if ((char)param_1[10] == '\0') {
LAB_001011a7:
            uVar6 = ft_stroke_border_cubicto(plVar18,&local_2f8,&local_2e8,&local_2d8);
            iVar4 = (int)uVar6;
          }
          else {
            plVar13 = (long *)((ulong)((int)*plVar18 - 1) * 0x10 + plVar18[1]);
            lVar1 = *plVar13;
            lVar2 = plVar13[1];
            local_2c8 = lVar1;
            lStack_2c0 = lVar2;
            lVar14 = FT_Atan2(local_2d8 - lVar1,lStack_2d0 - lVar2);
            lVar17 = FT_Angle_Diff(local_350,lVar14);
            lVar15 = -lVar17;
            if (0 < lVar17) {
              lVar15 = lVar17;
            }
            if (lVar15 < 0x5a0001) goto LAB_001011a7;
            lVar15 = FT_Atan2(plVar25[6] - lVar1,plVar25[7] - lVar2);
            lVar8 = FT_Atan2(lVar8 - local_2d8,lVar10 - lStack_2d0);
            local_2b8 = local_2d8 - lVar1;
            lStack_2b0 = lStack_2d0 - lVar2;
            uVar6 = FT_Vector_Length(&local_2b8);
            lVar10 = FT_Sin(lVar14 - lVar8);
            lVar14 = FT_Sin(lVar15 - lVar8);
            lVar8 = -lVar14;
            if (0 < lVar14) {
              lVar8 = lVar14;
            }
            lVar14 = -lVar10;
            if (0 < lVar10) {
              lVar14 = lVar10;
            }
            uVar6 = FT_MulDiv(uVar6,lVar14,lVar8);
            FT_Vector_From_Polar(&local_2a8,uVar6,lVar15);
            *(undefined1 *)(plVar18 + 3) = 0;
            local_2a8 = lVar1 + local_2a8;
            lStack_2a0 = lVar2 + lStack_2a0;
            uVar6 = ft_stroke_border_lineto(plVar18,&local_2a8,0);
            if ((((int)uVar6 != 0) ||
                (uVar6 = ft_stroke_border_lineto(plVar18,&local_2d8,0), (int)uVar6 != 0)) ||
               (uVar6 = ft_stroke_border_cubicto(plVar18,&local_2e8,&local_2f8,&local_2c8),
               (int)uVar6 != 0)) goto LAB_00101603;
            uVar6 = ft_stroke_border_lineto(plVar18,&local_2d8,0);
            iVar4 = (int)uVar6;
          }
          if (iVar4 != 0) goto LAB_00101603;
          plVar18 = plVar18 + 6;
          lVar7 = lVar7 + -0xb40000;
        } while (plVar18 != param_1 + 0x1a);
        *param_1 = lVar16;
        plVar18 = plVar25 + -6;
        bVar3 = false;
      }
      plVar25 = plVar18;
    } while (&local_298 <= plVar18);
    uVar6 = 0;
    lVar5 = *param_4;
    lVar24 = param_4[1];
    param_1[4] = 0;
    param_1[2] = lVar5;
    param_1[3] = lVar24;
  }
LAB_00101603:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Stroker_ConicTo_part_0(long *param_1,long *param_2,long *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  uint *puVar19;
  long *plVar20;
  long in_FS_OFFSET;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 local_300;
  long local_2a8;
  long lStack_2a0;
  long local_298;
  long lStack_290;
  long local_288;
  long lStack_280;
  long local_278;
  long lStack_270;
  long local_268;
  long lStack_260;
  long local_258;
  long lStack_250;
  long local_248;
  long lStack_240;
  long local_88 [9];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((param_1[2] - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
      ((*param_2 - *param_3) + 1U < 3)) && ((param_2[1] - param_3[1]) + 1U < 3)) {
    lVar7 = param_3[1];
    uVar8 = 0;
    param_1[2] = *param_3;
    param_1[3] = lVar7;
  }
  else {
    bVar5 = true;
    local_268 = *param_3;
    lStack_260 = param_3[1];
    local_258 = *param_2;
    lStack_250 = param_2[1];
    local_248 = param_1[2];
    lStack_240 = param_1[3];
    plVar20 = &local_268;
    do {
      lVar7 = *param_1;
      lVar12 = lVar7;
      if (plVar20 < local_88) {
        lVar9 = plVar20[2];
        lVar14 = plVar20[3];
        lVar15 = *plVar20;
        lVar3 = plVar20[1];
        lVar4 = plVar20[4];
        lVar13 = plVar20[5];
        lVar18 = *plVar20 - plVar20[2];
        lVar16 = lVar3 - lVar14;
        if (((plVar20[2] - plVar20[4]) + 1U < 3) && ((lVar14 - lVar13) + 1U < 3)) {
          if ((2 < lVar18 + 1U) || (2 < lVar16 + 1U)) {
            lVar7 = FT_Atan2(lVar18,lVar16);
            lVar12 = lVar7;
          }
        }
        else if ((lVar18 + 1U < 3) && (lVar16 + 1U < 3)) {
          lVar7 = FT_Atan2();
          lVar12 = lVar7;
        }
        else {
          lVar7 = FT_Atan2();
          lVar12 = FT_Atan2(lVar18,lVar16);
        }
        lVar18 = FT_Angle_Diff(lVar7,lVar12);
        lVar16 = -lVar18;
        if (0 < lVar18) {
          lVar16 = lVar18;
        }
        if (lVar16 < 0x1e0000) goto LAB_001019b3;
        if ((char)param_1[5] != '\0') {
          *param_1 = lVar7;
        }
        plVar11 = plVar20 + 4;
        uVar23 = lVar9 + lVar15;
        uVar24 = lVar14 + lVar3;
        plVar20[8] = lVar4;
        plVar20[9] = lVar13;
        uVar21 = lVar9 + lVar4;
        uVar22 = lVar14 + lVar13;
        *(int *)(plVar20 + 6) = (int)(uVar21 >> 1);
        *(int *)((long)plVar20 + 0x34) = (int)((long)uVar21 >> 0x21);
        *(int *)(plVar20 + 7) = (int)(uVar22 >> 1);
        *(int *)((long)plVar20 + 0x3c) = (int)((long)uVar22 >> 0x21);
        *(int *)plVar11 = (int)(uVar21 + uVar23 >> 2);
        *(int *)((long)plVar20 + 0x24) = (int)((long)(uVar21 + uVar23) >> 0x22);
        *(int *)(plVar20 + 5) = (int)(uVar22 + uVar24 >> 2);
        *(int *)((long)plVar20 + 0x2c) = (int)((long)(uVar22 + uVar24) >> 0x22);
        *(int *)(plVar20 + 2) = (int)(uVar23 >> 1);
        *(int *)((long)plVar20 + 0x14) = (int)((long)uVar23 >> 0x21);
        *(int *)(plVar20 + 3) = (int)(uVar24 >> 1);
        *(int *)((long)plVar20 + 0x1c) = (int)((long)uVar24 >> 0x21);
      }
      else {
LAB_001019b3:
        if (bVar5) {
          if ((char)param_1[5] == '\0') {
            param_1[1] = lVar7;
            uVar8 = ft_stroker_process_corner(param_1,0);
          }
          else {
            uVar8 = ft_stroker_subpath_start(param_1,lVar7,0);
          }
LAB_001019d4:
          if ((int)uVar8 != 0) goto LAB_00101ba5;
        }
        else {
          lVar14 = FT_Angle_Diff(*param_1,lVar7);
          lVar9 = -lVar14;
          if (0 < lVar14) {
            lVar9 = lVar14;
          }
          if (0x78000 < lVar9) {
            auVar1 = *(undefined1 (*) [16])(plVar20 + 4);
            param_1[1] = lVar7;
            *(undefined4 *)(param_1 + 0xb) = 0;
            *(undefined1 (*) [16])(param_1 + 2) = auVar1;
            uVar8 = ft_stroker_process_corner(param_1,0);
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
            goto LAB_001019d4;
          }
        }
        lVar9 = FT_Angle_Diff(lVar7,lVar12);
        lVar7 = lVar9 / 2 + lVar7;
        uVar8 = FT_Cos();
        uVar10 = FT_DivFix(param_1[0xd],uVar8);
        if ((char)param_1[10] == '\0') {
          local_300 = 0;
        }
        else {
          local_300 = FT_Atan2(*plVar20 - plVar20[4],plVar20[1] - plVar20[5]);
        }
        puVar19 = (uint *)(param_1 + 0xe);
        lVar9 = lVar7 + 0x5a0000;
        do {
          FT_Vector_From_Polar(&local_2a8,uVar10,lVar9);
          local_2a8 = local_2a8 + plVar20[2];
          lStack_2a0 = lStack_2a0 + plVar20[3];
          FT_Vector_From_Polar(&local_298,param_1[0xd],(lVar12 - lVar7) + lVar9);
          lVar14 = *plVar20;
          lVar15 = plVar20[1];
          local_298 = lVar14 + local_298;
          lStack_290 = lVar15 + lStack_290;
          if ((char)param_1[10] == '\0') {
LAB_00101b21:
            uVar8 = ft_stroke_border_grow(puVar19);
            uVar6 = _LC1;
            if ((int)uVar8 != 0) {
LAB_00101ba0:
              *(undefined1 *)(puVar19 + 6) = 0;
              goto LAB_00101ba5;
            }
            uVar2 = *puVar19;
            lVar14 = *(long *)(puVar19 + 4);
            plVar11 = (long *)((ulong)uVar2 * 0x10 + *(long *)(puVar19 + 2));
            *plVar11 = local_2a8;
            plVar11[1] = lStack_2a0;
            plVar11[2] = local_298;
            plVar11[3] = lStack_290;
            *(undefined2 *)((ulong)uVar2 + lVar14) = uVar6;
            *puVar19 = *puVar19 + 2;
            *(undefined1 *)(puVar19 + 6) = 0;
          }
          else {
            plVar11 = (long *)((ulong)(*puVar19 - 1) * 0x10 + *(long *)(puVar19 + 2));
            lVar3 = *plVar11;
            lVar4 = plVar11[1];
            lVar16 = FT_Atan2(local_298 - lVar3,lStack_290 - lVar4);
            lVar18 = FT_Angle_Diff(local_300,lVar16);
            lVar13 = -lVar18;
            if (0 < lVar18) {
              lVar13 = lVar18;
            }
            if (lVar13 < 0x5a0001) goto LAB_00101b21;
            lVar13 = FT_Atan2(plVar20[4] - lVar3,plVar20[5] - lVar4);
            lVar14 = FT_Atan2(lVar14 - local_298,lVar15 - lStack_290);
            local_288 = local_298 - lVar3;
            lStack_280 = lStack_290 - lVar4;
            uVar8 = FT_Vector_Length(&local_288);
            lVar15 = FT_Sin(lVar16 - lVar14);
            lVar16 = FT_Sin(lVar13 - lVar14);
            lVar14 = -lVar16;
            if (0 < lVar16) {
              lVar14 = lVar16;
            }
            lVar16 = -lVar15;
            if (0 < lVar15) {
              lVar16 = lVar15;
            }
            uVar8 = FT_MulDiv(uVar8,lVar16,lVar14);
            FT_Vector_From_Polar(&local_278,uVar8,lVar13);
            *(undefined1 *)(puVar19 + 6) = 0;
            local_278 = lVar3 + local_278;
            lStack_270 = lVar4 + lStack_270;
            uVar8 = ft_stroke_border_lineto(puVar19,&local_278,0);
            if (((int)uVar8 != 0) ||
               (uVar8 = ft_stroke_border_lineto(puVar19,&local_298,0), (int)uVar8 != 0))
            goto LAB_00101ba5;
            uVar8 = ft_stroke_border_grow(puVar19,2);
            uVar6 = _LC1;
            if ((int)uVar8 != 0) goto LAB_00101ba0;
            uVar2 = *puVar19;
            auVar1._8_8_ = lStack_2a0;
            auVar1._0_8_ = local_2a8;
            lVar14 = *(long *)(puVar19 + 4);
            pauVar17 = (undefined1 (*) [16])((ulong)uVar2 * 0x10 + *(long *)(puVar19 + 2));
            *pauVar17 = auVar1;
            *(long *)pauVar17[1] = lVar3;
            *(long *)(pauVar17[1] + 8) = lVar4;
            *(undefined2 *)((ulong)uVar2 + lVar14) = uVar6;
            *puVar19 = *puVar19 + 2;
            *(undefined1 *)(puVar19 + 6) = 0;
            uVar8 = ft_stroke_border_lineto(puVar19,&local_298,0);
            if ((int)uVar8 != 0) goto LAB_00101ba5;
          }
          puVar19 = puVar19 + 0xc;
          lVar9 = lVar9 + -0xb40000;
        } while (puVar19 != (uint *)(param_1 + 0x1a));
        plVar11 = plVar20 + -4;
        bVar5 = false;
        *param_1 = lVar12;
      }
      plVar20 = plVar11;
    } while (&local_268 <= plVar11);
    uVar8 = 0;
    lVar7 = *param_3;
    lVar12 = param_3[1];
    param_1[4] = 0;
    param_1[2] = lVar7;
    param_1[3] = lVar12;
  }
LAB_00101ba5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



bool FT_Outline_GetInsideBorder(void)

{
  int iVar1;
  
  iVar1 = FT_Outline_Get_Orientation();
  return iVar1 == 0;
}



bool FT_Outline_GetOutsideBorder(void)

{
  int iVar1;
  
  iVar1 = FT_Outline_Get_Orientation();
  return iVar1 != 0;
}



int FT_Stroker_New(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    local_24 = 0x21;
  }
  else if (param_2 == (long *)0x0) {
    local_24 = 6;
  }
  else {
    uVar1 = *param_1;
    lVar2 = ft_mem_alloc(uVar1,0xd8,&local_24);
    if (local_24 == 0) {
      *(undefined8 **)(lVar2 + 0xd0) = param_1;
      *(undefined8 *)(lVar2 + 0x90) = uVar1;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x98) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = uVar1;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined4 *)(lVar2 + 0xbc) = 0xffffffff;
      *(undefined1 *)(lVar2 + 200) = 0;
      *(undefined1 (*) [16])(lVar2 + 0x78) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar2 + 0xa8) = (undefined1  [16])0x0;
    }
    *param_2 = lVar2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FT_Stroker_Set(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   long param_5)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x54) = param_3;
    if (param_5 < 0x10000) {
      param_5 = 0x10000;
    }
    *(undefined4 *)(param_1 + 0x58) = param_4;
    *(undefined4 *)(param_1 + 0x5c) = param_4;
    *(long *)(param_1 + 0x60) = param_5;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



void FT_Stroker_Rewind(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



void FT_Stroker_Done(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = **(undefined8 **)(param_1 + 0xd0);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x80));
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xb0));
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    ft_mem_free(uVar2,param_1);
    return;
  }
  return;
}



undefined8 FT_Stroker_LineTo(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    uVar6 = 6;
  }
  else {
    local_68 = *param_2 - param_1[2];
    lStack_60 = param_2[1] - param_1[3];
    if (lStack_60 != 0 || local_68 != 0) {
      lVar4 = FT_Vector_Length(&local_68);
      lVar5 = FT_Atan2(local_68,lStack_60);
      FT_Vector_From_Polar(&local_68,param_1[0xd],lVar5 + 0x5a0000);
      if ((char)param_1[5] == '\0') {
        param_1[1] = lVar5;
        uVar6 = ft_stroker_process_corner(param_1,lVar4);
        iVar3 = (int)uVar6;
      }
      else {
        uVar6 = ft_stroker_subpath_start(param_1,lVar5,lVar4);
        iVar3 = (int)uVar6;
      }
      if (iVar3 != 0) goto LAB_0010228c;
      plVar7 = param_1 + 0xe;
      do {
        local_58 = local_68 + *param_2;
        lStack_50 = lStack_60 + param_2[1];
        uVar6 = ft_stroke_border_lineto(plVar7,&local_58,1);
        if ((int)uVar6 != 0) goto LAB_0010228c;
        local_68 = -local_68;
        lStack_60 = -lStack_60;
        plVar7 = plVar7 + 6;
      } while (param_1 + 0x1a != plVar7);
      lVar1 = *param_2;
      lVar2 = param_2[1];
      *param_1 = lVar5;
      param_1[4] = lVar4;
      param_1[2] = lVar1;
      param_1[3] = lVar2;
    }
    uVar6 = 0;
  }
LAB_0010228c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Stroker_ConicTo(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
    uVar1 = FT_Stroker_ConicTo_part_0();
    return uVar1;
  }
  return 6;
}



undefined8 FT_Stroker_CubicTo(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    uVar1 = FT_Stroker_CubicTo_part_0();
    return uVar1;
  }
  return 6;
}



undefined8 FT_Stroker_BeginSubPath(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *(char *)((long)param_1 + 0x29) = param_3;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    if (*(int *)(param_1 + 0xb) == 0) {
      if (param_3 != '\0') {
        param_3 = *(int *)((long)param_1 + 0x54) == 0;
      }
    }
    else {
      param_3 = '\x01';
    }
    *(char *)(param_1 + 10) = param_3;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_1 = 0;
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    return 0;
  }
  return 6;
}



ulong FT_Stroker_EndSubPath(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  if (param_1 == (long *)0x0) {
    return 6;
  }
  if (*(char *)((long)param_1 + 0x29) == '\0') {
    if ((((param_1[2] - param_1[7]) + 1U < 3) && ((param_1[3] - param_1[8]) + 1U < 3)) ||
       (uVar5 = FT_Stroker_LineTo(param_1,param_1 + 7), (int)uVar5 == 0)) {
      param_1[1] = param_1[6];
      uVar5 = ft_stroker_process_corner(param_1,param_1[9]);
      if ((int)uVar5 == 0) {
        ft_stroke_border_close(param_1 + 0xe,0);
        ft_stroke_border_close(param_1 + 0x14,1);
        uVar5 = uVar5 & 0xffffffff;
      }
    }
  }
  else {
    plVar1 = param_1 + 0xe;
    if (*(int *)((long)param_1 + 0x54) == 1) {
      lVar2 = param_1[0xd];
      param_1[1] = *param_1 + 0xb40000;
      lVar6 = FT_Angle_Diff();
      if (lVar6 == 0xb40000) {
        lVar6 = -0xb40000;
      }
      uVar5 = ft_stroke_border_arcto(plVar1,param_1 + 2,lVar2,*param_1 + 0x5a0000,lVar6);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    else {
      uVar5 = ft_stroker_cap_part_0_constprop_0(param_1,*param_1);
    }
    if ((int)uVar5 == 0) {
      iVar13 = (int)param_1[0x14] - *(int *)((long)param_1 + 0xbc);
      if (0 < iVar13) {
        uVar5 = ft_stroke_border_grow(plVar1,iVar13);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        iVar11 = *(int *)((long)param_1 + 0xbc);
        uVar12 = *(uint *)(param_1 + 0xe);
        pbVar10 = (byte *)(param_1[0x16] + -1 + (ulong)*(uint *)(param_1 + 0x14));
        puVar8 = (undefined8 *)(param_1[0x15] + -0x10 + (ulong)*(uint *)(param_1 + 0x14) * 0x10);
        pbVar7 = (byte *)((ulong)uVar12 + param_1[0x10]);
        puVar9 = (undefined8 *)((ulong)uVar12 * 0x10 + param_1[0xf]);
        if ((undefined8 *)(param_1[0x15] + (long)iVar11 * 0x10) <= puVar8) {
          do {
            uVar3 = *puVar8;
            uVar4 = puVar8[1];
            puVar8 = puVar8 + -2;
            *puVar9 = uVar3;
            puVar9[1] = uVar4;
            *pbVar7 = *pbVar10 & 0xf3;
            iVar11 = *(int *)((long)param_1 + 0xbc);
            pbVar7 = pbVar7 + 1;
            puVar9 = puVar9 + 2;
            pbVar10 = pbVar10 + -1;
          } while ((undefined8 *)((long)iVar11 * 0x10 + param_1[0x15]) <= puVar8);
          uVar12 = *(uint *)(param_1 + 0xe);
        }
        *(int *)(param_1 + 0x14) = iVar11;
        *(uint *)(param_1 + 0xe) = iVar13 + uVar12;
        *(undefined1 *)(param_1 + 0x11) = 0;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
      param_1[2] = param_1[7];
      param_1[3] = param_1[8];
      lVar2 = param_1[6] + 0xb40000;
      if (*(int *)((long)param_1 + 0x54) == 1) {
        *param_1 = lVar2;
        lVar2 = param_1[0xd];
        param_1[1] = param_1[6] + 0x1680000;
        lVar6 = FT_Angle_Diff();
        if (lVar6 == 0xb40000) {
          lVar6 = -0xb40000;
        }
        uVar5 = ft_stroke_border_arcto(plVar1,param_1 + 2,lVar2,*param_1 + 0x5a0000,lVar6);
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        uVar5 = ft_stroker_cap_part_0_constprop_0(param_1,lVar2);
      }
      if ((int)uVar5 == 0) {
        ft_stroke_border_close(plVar1,0);
        uVar5 = uVar5 & 0xffffffff;
      }
    }
  }
  return uVar5;
}



undefined8
FT_Stroker_GetBorderCounts(long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if ((param_1 == 0) || (1 < param_2)) {
    local_24 = 0;
    uVar1 = 6;
  }
  else {
    uVar1 = ft_stroke_border_get_counts
                      (param_1 + 0x70 + (ulong)(-param_2 & 0x30),&local_28,&local_24);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_28;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_24;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Stroker_GetCounts(long param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar1 = 6;
    local_24 = 0;
    local_28 = 0;
  }
  else {
    uVar1 = ft_stroke_border_get_counts(param_1 + 0x70,&local_30,&local_2c);
    if ((int)uVar1 == 0) {
      uVar1 = ft_stroke_border_get_counts(param_1 + 0xa0,&local_28,&local_24);
      if ((int)uVar1 == 0) {
        local_28 = local_28 + local_30;
        local_24 = local_24 + local_2c;
        goto LAB_00102735;
      }
    }
    local_24 = 0;
    local_28 = 0;
  }
LAB_00102735:
  if (param_2 != (int *)0x0) {
    *param_2 = local_28;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_24;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FT_Stroker_ExportBorder(long param_1,uint param_2,long param_3)

{
  if ((param_1 != 0 && param_3 != 0) && (param_2 < 2)) {
    FT_Stroker_ExportBorder_part_0();
    return;
  }
  return;
}



void FT_Stroker_Export(long param_1,long param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    FT_Stroker_ExportBorder_part_0(param_1,0,param_2);
    FT_Stroker_ExportBorder_part_0(param_1,1,param_2);
    return;
  }
  return;
}



undefined8 FT_Stroker_ParseOutline(undefined8 *param_1,short *param_2,char param_3)

{
  char cVar1;
  short sVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_b8;
  int local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (short *)0x0) {
LAB_00102c30:
    uVar4 = 0x14;
  }
  else if (param_1 == (undefined8 *)0x0) {
    uVar4 = 6;
  }
  else {
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    sVar2 = *param_2;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
    if (0 < sVar2) {
      local_b8 = 0;
      local_a0 = -1;
      do {
        sVar2 = *(short *)(*(long *)(param_2 + 0xc) + local_b8 * 2);
        iVar10 = local_a0 + 1;
        local_a0 = (int)sVar2;
        if (iVar10 < sVar2) {
          pbVar11 = (byte *)((long)iVar10 + *(long *)(param_2 + 8));
          plVar6 = (long *)((long)sVar2 * 0x10 + *(long *)(param_2 + 4));
          plVar3 = (long *)(*(long *)(param_2 + 4) + (long)iVar10 * 0x10);
          lVar7 = *plVar6;
          local_98 = *plVar3;
          lStack_90 = plVar3[1];
          lVar8 = plVar6[1];
          local_88 = local_98;
          lStack_80 = lStack_90;
          if ((*pbVar11 & 3) == 2) goto LAB_00102c30;
          local_88 = local_98;
          lStack_80 = lStack_90;
          if ((*pbVar11 & 3) == 0) {
            if ((*(byte *)(*(long *)(param_2 + 8) + (long)sVar2) & 3) == 1) {
              plVar6 = plVar6 + -2;
            }
            else {
              lVar7 = (lVar7 + local_98) / 2;
              lVar8 = (lVar8 + lStack_90) / 2;
            }
            plVar3 = plVar3 + -2;
            pbVar11 = pbVar11 + -1;
            local_88 = lVar7;
            lStack_80 = lVar8;
          }
          *(undefined1 *)(param_1 + 5) = 1;
          bVar12 = true;
          *(char *)((long)param_1 + 0x29) = param_3;
          param_1[2] = local_88;
          param_1[3] = lStack_80;
          if ((*(int *)(param_1 + 0xb) == 0) && (bVar12 = false, param_3 != '\0')) {
            bVar12 = *(int *)((long)param_1 + 0x54) == 0;
          }
          *(bool *)(param_1 + 10) = bVar12;
          *param_1 = 0;
          param_1[7] = local_88;
          param_1[8] = lStack_80;
          if (plVar3 < plVar6) {
            do {
              plVar5 = plVar3 + 2;
              pbVar9 = pbVar11 + 1;
              if ((pbVar11[1] & 3) == 0) {
                local_98 = plVar3[2];
                lStack_90 = plVar3[3];
                if (plVar6 <= plVar5) {
LAB_00102c00:
                  uVar4 = FT_Stroker_ConicTo_part_0(param_1,&local_98,&local_88);
LAB_00102c10:
                  if ((int)uVar4 != 0) goto LAB_00102900;
                  cVar1 = *(char *)(param_1 + 5);
                  goto joined_r0x00102c1d;
                }
                while( true ) {
                  pbVar11 = pbVar9 + 1;
                  local_68 = plVar5[2];
                  lStack_60 = plVar5[3];
                  plVar5 = plVar5 + 2;
                  pbVar9 = pbVar9 + 1;
                  if ((*pbVar11 & 3) == 1) break;
                  if ((*pbVar11 & 3) != 0) goto LAB_00102c30;
                  local_58 = (local_68 + local_98) / 2;
                  lStack_50 = (lStack_60 + lStack_90) / 2;
                  uVar4 = FT_Stroker_ConicTo_part_0(param_1,&local_98,&local_58);
                  if ((int)uVar4 != 0) goto LAB_00102900;
                  local_98 = local_68;
                  lStack_90 = lStack_60;
                  if (plVar6 <= plVar5) goto LAB_00102c00;
                }
                uVar4 = FT_Stroker_ConicTo_part_0(param_1,&local_98,&local_68);
                iVar10 = (int)uVar4;
                pbVar11 = pbVar9;
joined_r0x00102bd7:
                if (iVar10 != 0) goto LAB_00102900;
              }
              else {
                if ((pbVar11[1] & 3) == 1) {
                  local_58 = plVar3[2];
                  lStack_50 = plVar3[3];
                  uVar4 = FT_Stroker_LineTo(param_1,&local_58);
                  iVar10 = (int)uVar4;
                  pbVar11 = pbVar9;
                  goto joined_r0x00102bd7;
                }
                if ((plVar6 < plVar3 + 4) || ((pbVar11[2] & 3) != 2)) goto LAB_00102c30;
                local_78 = plVar3[2];
                lStack_70 = plVar3[3];
                local_68 = plVar3[4];
                lStack_60 = plVar3[5];
                plVar5 = plVar3 + 6;
                if (plVar6 < plVar5) {
                  uVar4 = FT_Stroker_CubicTo_part_0(param_1,&local_78,&local_68,&local_88);
                  goto LAB_00102c10;
                }
                local_58 = plVar3[6];
                lStack_50 = plVar3[7];
                uVar4 = FT_Stroker_CubicTo_part_0(param_1,&local_78,&local_68,&local_58);
                if ((int)uVar4 != 0) goto LAB_00102900;
                pbVar11 = pbVar11 + 3;
              }
              plVar3 = plVar5;
            } while (plVar5 < plVar6);
            cVar1 = *(char *)(param_1 + 5);
joined_r0x00102c1d:
            if ((cVar1 == '\0') && (uVar4 = FT_Stroker_EndSubPath(param_1), (int)uVar4 != 0))
            goto LAB_00102900;
          }
        }
        local_b8 = local_b8 + 1;
      } while ((int)local_b8 < (int)*param_2);
    }
    uVar4 = 0;
  }
LAB_00102900:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong FT_Glyph_Stroke(long *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    uVar5 = 6;
  }
  else {
    uVar5 = 6;
    if (*(undefined **)(lVar2 + 8) == &ft_outline_glyph_class) {
      uVar5 = FT_Glyph_Copy(lVar2,&local_48);
      if ((int)uVar5 == 0) {
        puVar3 = (undefined8 *)CONCAT44(uStack_44,local_48);
        puVar1 = puVar3 + 5;
        uVar4 = FT_Stroker_ParseOutline(param_2,puVar1,0);
        if (uVar4 == 0) {
          FT_Stroker_GetCounts(param_2,&local_4c,&local_48);
          FT_Outline_Done(*puVar3,puVar1);
          uVar4 = FT_Outline_New(*puVar3,local_4c,local_48,puVar1);
          if (uVar4 == 0) {
            *(undefined4 *)(puVar3 + 5) = 0;
            FT_Stroker_Export(param_2,puVar1);
            if (param_3 != '\0') {
              FT_Done_Glyph(*param_1);
            }
            uVar5 = 0;
            *param_1 = (long)puVar3;
            goto LAB_00102cbf;
          }
        }
        FT_Done_Glyph(puVar3);
        uVar5 = (ulong)uVar4;
        if (param_3 == '\0') {
          *param_1 = 0;
        }
      }
    }
  }
LAB_00102cbf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int FT_Glyph_StrokeBorder(long *param_1,long param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    iVar4 = 6;
    goto LAB_00102e09;
  }
  lVar2 = *param_1;
  iVar4 = 6;
  if ((lVar2 == 0) || (*(undefined **)(lVar2 + 8) != &ft_outline_glyph_class)) goto LAB_00102e09;
  iVar4 = FT_Glyph_Copy(lVar2,&local_48);
  if (iVar4 != 0) goto LAB_00102e09;
  puVar3 = (undefined8 *)CONCAT44(uStack_44,local_48);
  puVar1 = puVar3 + 5;
  iVar4 = FT_Outline_Get_Orientation(puVar1);
  if (param_3 == '\0') {
    bVar6 = iVar4 != 0;
  }
  else {
    bVar6 = iVar4 == 0;
  }
  iVar4 = FT_Stroker_ParseOutline(param_2,puVar1,0);
  iVar5 = iVar4;
  if (iVar4 == 0) {
    if (param_2 == 0) {
      FT_Outline_Done(*puVar3,puVar1);
      iVar5 = FT_Outline_New(*puVar3,0,0,puVar1);
      if (iVar5 == 0) {
        *(undefined4 *)(puVar3 + 5) = 0;
        goto LAB_00102f52;
      }
    }
    else {
      ft_stroke_border_get_counts(param_2 + 0x70 + (ulong)(-(uint)bVar6 & 0x30),&local_4c,&local_48)
      ;
      FT_Outline_Done(*puVar3,puVar1);
      iVar5 = FT_Outline_New(*puVar3,local_4c,local_48,puVar1);
      if (iVar5 == 0) {
        *(undefined4 *)(puVar3 + 5) = 0;
        FT_Stroker_ExportBorder_part_0(param_2,bVar6,puVar1);
LAB_00102f52:
        if (param_4 != '\0') {
          FT_Done_Glyph(*param_1);
        }
        *param_1 = (long)puVar3;
        goto LAB_00102e09;
      }
    }
  }
  iVar4 = iVar5;
  FT_Done_Glyph(puVar3);
  if (param_4 == '\0') {
    *param_1 = 0;
  }
LAB_00102e09:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


