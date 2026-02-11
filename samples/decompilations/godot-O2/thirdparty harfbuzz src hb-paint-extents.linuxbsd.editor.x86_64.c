
/* hb_paint_extents_pop_transform(hb_paint_funcs_t*, void*, void*) */

void hb_paint_extents_pop_transform(hb_paint_funcs_t *param_1,void *param_2,void *param_3)

{
  if (*(int *)((long)param_2 + 4) != 0) {
    *(int *)((long)param_2 + 4) = *(int *)((long)param_2 + 4) + -1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_push_transform(hb_paint_funcs_t*, void*, float, float, float, float, float,
   float, void*) */

void hb_paint_extents_push_transform
               (hb_paint_funcs_t *param_1,void *param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,void *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  float *pfVar11;
  void *pvVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar1 = __hb_CrapPool;
  uVar15 = *(uint *)((long)param_2 + 4);
  if (uVar15 == 0) {
    ___stack_chk_fail = _realloc;
    pfVar11 = (float *)&_hb_CrapPool;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
    uVar15 = *(uint *)((long)param_2 + 4);
  }
  else {
    pfVar11 = (float *)(*(long *)((long)param_2 + 8) + (ulong)(uVar15 - 1) * 0x18);
  }
  uVar9 = _realloc;
  uVar8 = __hb_CrapPool;
  uVar14 = (ulong)uVar15;
  fVar4 = *pfVar11;
  fVar5 = pfVar11[1];
  fVar6 = pfVar11[2];
  fVar7 = pfVar11[3];
  uVar13 = uVar15 + 1;
  uVar1 = *(undefined8 *)(pfVar11 + 2);
  uVar2 = *(undefined8 *)pfVar11;
  uVar3 = *(undefined8 *)(pfVar11 + 4);
                    /* WARNING: Load size is inaccurate */
  uVar10 = *param_2;
  if ((int)uVar10 <= (int)uVar15) {
    if ((int)uVar10 < 0) {
      __hb_CrapPool = __hb_NullPool;
      _realloc = uVar8;
      ___stack_chk_fail = uVar9;
      return;
    }
    uVar15 = uVar10;
    if (uVar10 < uVar13) {
      do {
        uVar15 = (uVar15 >> 1) + 8 + uVar15;
      } while (uVar15 < uVar13);
      if (0xaaaaaaa < uVar15) {
LAB_00100142:
        *(uint *)param_2 = ~uVar10;
        ___stack_chk_fail = _realloc;
        _realloc = __hb_CrapPool;
        __hb_CrapPool = __hb_NullPool;
        return;
      }
      pvVar12 = realloc(*(void **)((long)param_2 + 8),(ulong)uVar15 * 0x18);
      if (pvVar12 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        uVar10 = *param_2;
        if (uVar10 < uVar15) goto LAB_00100142;
        uVar14 = (ulong)*(uint *)((long)param_2 + 4);
        pvVar12 = *(void **)((long)param_2 + 8);
        uVar13 = *(uint *)((long)param_2 + 4) + 1;
      }
      else {
        uVar14 = (ulong)*(uint *)((long)param_2 + 4);
        *(void **)((long)param_2 + 8) = pvVar12;
        *(uint *)param_2 = uVar15;
        uVar13 = *(uint *)((long)param_2 + 4) + 1;
      }
      goto LAB_001000bd;
    }
  }
  pvVar12 = *(void **)((long)param_2 + 8);
LAB_001000bd:
  *(uint *)((long)param_2 + 4) = uVar13;
  pfVar11 = (float *)((long)pvVar12 + uVar14 * 0x18);
  *pfVar11 = param_4 * fVar6 + fVar4 * param_3;
  pfVar11[1] = param_4 * fVar7 + fVar5 * param_3;
  pfVar11[2] = param_6 * fVar6 + fVar4 * param_5;
  pfVar11[3] = param_6 * fVar7 + fVar5 * param_5;
  *(ulong *)(pfVar11 + 4) =
       CONCAT44((float)((ulong)uVar1 >> 0x20) * param_8 + (float)((ulong)uVar2 >> 0x20) * param_7 +
                (float)((ulong)uVar3 >> 0x20),
                (float)uVar1 * param_8 + (float)uVar2 * param_7 + (float)uVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_pop_group(hb_paint_funcs_t*, void*, hb_paint_composite_mode_t, void*) */

void hb_paint_extents_pop_group(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) {
    local_18 = _realloc;
    local_28 = __hb_NullPool;
    uStack_20 = __hb_CrapPool;
  }
  else {
    uVar6 = iVar2 - 1;
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x28) + (ulong)uVar6 * 0x14);
    local_28 = *puVar1;
    uStack_20 = puVar1[1];
    local_18 = *(float *)(puVar1 + 2);
    *(uint *)(param_2 + 0x24) = uVar6;
    if (iVar2 - 2U < uVar6) {
      piVar5 = (int *)(*(long *)(param_2 + 0x28) + (ulong)(iVar2 - 2U) * 0x14);
      uVar3 = __hb_CrapPool;
      uVar4 = _realloc;
      goto joined_r0x00100231;
    }
  }
  piVar5 = (int *)&_hb_CrapPool;
  uVar3 = __hb_NullPool;
  uVar4 = __hb_CrapPool;
  ___stack_chk_fail = _realloc;
joined_r0x00100231:
  _realloc = uVar4;
  __hb_CrapPool = uVar3;
  if (param_3 < 9) {
                    /* WARNING: Could not recover jumptable at 0x00100243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00101268 + *(int *)(&DAT_00101268 + (ulong)param_3 * 4)))();
    return;
  }
  if ((int)local_28 == 0) {
    *piVar5 = 0;
    return;
  }
  if ((int)local_28 == 1) {
    if (*piVar5 == 2) {
      *(undefined8 *)piVar5 = local_28;
      *(undefined8 *)(piVar5 + 2) = uStack_20;
      piVar5[4] = (int)local_18;
      return;
    }
    if (*piVar5 == 1) {
      local_28._4_4_ = (float)((ulong)local_28 >> 0x20);
      uVar6 = -(uint)((float)piVar5[1] <= local_28._4_4_);
      piVar5[1] = piVar5[1] & uVar6 | ~uVar6 & (uint)local_28._4_4_;
      uVar6 = -(uint)((float)piVar5[2] <= (float)uStack_20);
      uStack_20._4_4_ = (float)((ulong)uStack_20 >> 0x20);
      piVar5[2] = piVar5[2] & uVar6 | ~uVar6 & (uint)(float)uStack_20;
      uVar6 = -(uint)(uStack_20._4_4_ <= (float)piVar5[3]);
      piVar5[3] = piVar5[3] & uVar6 | ~uVar6 & (uint)uStack_20._4_4_;
      uVar6 = -(uint)(local_18 <= (float)piVar5[4]);
      piVar5[4] = piVar5[4] & uVar6 | ~uVar6 & (uint)local_18;
      return;
    }
  }
  return;
}



/* hb_paint_extents_pop_clip(hb_paint_funcs_t*, void*, void*) */

void hb_paint_extents_pop_clip(hb_paint_funcs_t *param_1,void *param_2,void *param_3)

{
  if (*(int *)((long)param_2 + 0x14) != 0) {
    *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_paint_color(hb_paint_funcs_t*, void*, int, unsigned int, void*) */

void hb_paint_extents_paint_color
               (hb_paint_funcs_t *param_1,void *param_2,int param_3,uint param_4,void *param_5)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = __hb_CrapPool;
  if (*(int *)((long)param_2 + 0x14) == 0) {
    piVar3 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar3 = (int *)(*(long *)((long)param_2 + 0x18) +
                    (ulong)(*(int *)((long)param_2 + 0x14) - 1) * 0x14);
  }
  uVar1 = __hb_CrapPool;
  if (*(int *)((long)param_2 + 0x24) == 0) {
    piVar2 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar2 = (int *)(*(long *)((long)param_2 + 0x28) +
                    (ulong)(*(int *)((long)param_2 + 0x24) - 1) * 0x14);
  }
  if (*piVar3 == 0) {
    *piVar2 = 0;
    return;
  }
  if (*piVar3 == 1) {
    if (*piVar2 == 2) {
      uVar1 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar2 + 2) = uVar1;
      piVar2[4] = piVar3[4];
      return;
    }
    if (*piVar2 == 1) {
      uVar4 = -(uint)((float)piVar2[1] <= (float)piVar3[1]);
      piVar2[1] = piVar2[1] & uVar4 | ~uVar4 & piVar3[1];
      uVar4 = -(uint)((float)piVar2[2] <= (float)piVar3[2]);
      piVar2[2] = piVar2[2] & uVar4 | ~uVar4 & piVar3[2];
      uVar4 = -(uint)((float)piVar3[3] <= (float)piVar2[3]);
      piVar2[3] = piVar2[3] & uVar4 | ~uVar4 & piVar3[3];
      uVar4 = -(uint)((float)piVar3[4] <= (float)piVar2[4]);
      piVar2[4] = piVar2[4] & uVar4 | ~uVar4 & piVar3[4];
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_paint_radial_gradient(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float,
   float, float, float, float, void*) */

ulong hb_paint_extents_paint_radial_gradient
                (hb_paint_funcs_t *param_1,void *param_2,hb_color_line_t *param_3,float param_4,
                float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10
                )

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 in_register_00001204 [12];
  undefined1 auVar6 [16];
  
  uVar1 = __hb_CrapPool;
  auVar6._4_12_ = in_register_00001204;
  auVar6._0_4_ = param_4;
  if (*(int *)((long)param_2 + 0x14) == 0) {
    piVar3 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar3 = (int *)(*(long *)((long)param_2 + 0x18) +
                    (ulong)(*(int *)((long)param_2 + 0x14) - 1) * 0x14);
  }
  uVar1 = __hb_CrapPool;
  if (*(int *)((long)param_2 + 0x24) == 0) {
    piVar2 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar2 = (int *)(*(long *)((long)param_2 + 0x28) +
                    (ulong)(*(int *)((long)param_2 + 0x24) - 1) * 0x14);
  }
  uVar5 = auVar6._0_8_;
  if (*piVar3 == 0) {
    *piVar2 = 0;
    return uVar5;
  }
  if (*piVar3 == 1) {
    if (*piVar2 == 2) {
      uVar1 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar2 + 2) = uVar1;
      piVar2[4] = piVar3[4];
      return uVar5;
    }
    if (*piVar2 == 1) {
      uVar4 = -(uint)((float)piVar2[1] <= (float)piVar3[1]);
      piVar2[1] = piVar2[1] & uVar4 | ~uVar4 & piVar3[1];
      uVar4 = -(uint)((float)piVar2[2] <= (float)piVar3[2]);
      piVar2[2] = piVar2[2] & uVar4 | ~uVar4 & piVar3[2];
      uVar4 = -(uint)((float)piVar3[3] <= (float)piVar2[3]);
      piVar2[3] = piVar2[3] & uVar4 | ~uVar4 & piVar3[3];
      uVar4 = -(uint)((float)piVar3[4] <= (float)piVar2[4]);
      uVar4 = piVar2[4] & uVar4 | ~uVar4 & piVar3[4];
      piVar2[4] = uVar4;
      return (ulong)uVar4;
    }
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_paint_sweep_gradient(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float,
   float, float, void*) */

ulong hb_paint_extents_paint_sweep_gradient
                (hb_paint_funcs_t *param_1,void *param_2,hb_color_line_t *param_3,float param_4,
                float param_5,float param_6,float param_7,void *param_8)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 in_register_00001204 [12];
  undefined1 auVar6 [16];
  
  uVar1 = __hb_CrapPool;
  auVar6._4_12_ = in_register_00001204;
  auVar6._0_4_ = param_4;
  if (*(int *)((long)param_2 + 0x14) == 0) {
    piVar3 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar3 = (int *)(*(long *)((long)param_2 + 0x18) +
                    (ulong)(*(int *)((long)param_2 + 0x14) - 1) * 0x14);
  }
  uVar1 = __hb_CrapPool;
  if (*(int *)((long)param_2 + 0x24) == 0) {
    piVar2 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar2 = (int *)(*(long *)((long)param_2 + 0x28) +
                    (ulong)(*(int *)((long)param_2 + 0x24) - 1) * 0x14);
  }
  uVar5 = auVar6._0_8_;
  if (*piVar3 == 0) {
    *piVar2 = 0;
    return uVar5;
  }
  if (*piVar3 == 1) {
    if (*piVar2 == 2) {
      uVar1 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar2 + 2) = uVar1;
      piVar2[4] = piVar3[4];
      return uVar5;
    }
    if (*piVar2 == 1) {
      uVar4 = -(uint)((float)piVar2[1] <= (float)piVar3[1]);
      piVar2[1] = piVar2[1] & uVar4 | ~uVar4 & piVar3[1];
      uVar4 = -(uint)((float)piVar2[2] <= (float)piVar3[2]);
      piVar2[2] = piVar2[2] & uVar4 | ~uVar4 & piVar3[2];
      uVar4 = -(uint)((float)piVar3[3] <= (float)piVar2[3]);
      piVar2[3] = piVar2[3] & uVar4 | ~uVar4 & piVar3[3];
      uVar4 = -(uint)((float)piVar3[4] <= (float)piVar2[4]);
      uVar4 = piVar2[4] & uVar4 | ~uVar4 & piVar3[4];
      piVar2[4] = uVar4;
      return (ulong)uVar4;
    }
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_paint_linear_gradient(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float,
   float, float, float, float, void*) */

ulong hb_paint_extents_paint_linear_gradient
                (hb_paint_funcs_t *param_1,void *param_2,hb_color_line_t *param_3,float param_4,
                float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10
                )

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 in_register_00001204 [12];
  undefined1 auVar6 [16];
  
  uVar1 = __hb_CrapPool;
  auVar6._4_12_ = in_register_00001204;
  auVar6._0_4_ = param_4;
  if (*(int *)((long)param_2 + 0x14) == 0) {
    piVar3 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar3 = (int *)(*(long *)((long)param_2 + 0x18) +
                    (ulong)(*(int *)((long)param_2 + 0x14) - 1) * 0x14);
  }
  uVar1 = __hb_CrapPool;
  if (*(int *)((long)param_2 + 0x24) == 0) {
    piVar2 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar1;
  }
  else {
    piVar2 = (int *)(*(long *)((long)param_2 + 0x28) +
                    (ulong)(*(int *)((long)param_2 + 0x24) - 1) * 0x14);
  }
  uVar5 = auVar6._0_8_;
  if (*piVar3 == 0) {
    *piVar2 = 0;
    return uVar5;
  }
  if (*piVar3 == 1) {
    if (*piVar2 == 2) {
      uVar1 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar2 + 2) = uVar1;
      piVar2[4] = piVar3[4];
      return uVar5;
    }
    if (*piVar2 == 1) {
      uVar4 = -(uint)((float)piVar2[1] <= (float)piVar3[1]);
      piVar2[1] = piVar2[1] & uVar4 | ~uVar4 & piVar3[1];
      uVar4 = -(uint)((float)piVar2[2] <= (float)piVar3[2]);
      piVar2[2] = piVar2[2] & uVar4 | ~uVar4 & piVar3[2];
      uVar4 = -(uint)((float)piVar3[3] <= (float)piVar2[3]);
      piVar2[3] = piVar2[3] & uVar4 | ~uVar4 & piVar3[3];
      uVar4 = -(uint)((float)piVar3[4] <= (float)piVar2[4]);
      uVar4 = piVar2[4] & uVar4 | ~uVar4 & piVar3[4];
      piVar2[4] = uVar4;
      return (ulong)uVar4;
    }
  }
  return uVar5;
}



/* hb_draw_extents_move_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void hb_draw_extents_move_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,void *param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  fVar1 = *param_2;
  fVar2 = *(float *)((long)param_2 + 8);
  if (fVar1 <= fVar2) {
    *(uint *)param_2 =
         (uint)fVar1 & -(uint)(fVar1 <= param_4) | ~-(uint)(fVar1 <= param_4) & (uint)param_4;
    uVar3 = -(uint)(*(float *)((long)param_2 + 4) <= param_5);
    *(uint *)((long)param_2 + 4) =
         (uint)*(float *)((long)param_2 + 4) & uVar3 | ~uVar3 & (uint)param_5;
    *(uint *)((long)param_2 + 8) =
         (uint)fVar2 & -(uint)(param_4 <= fVar2) | ~-(uint)(param_4 <= fVar2) & (uint)param_4;
    uVar3 = -(uint)(param_5 <= *(float *)((long)param_2 + 0xc));
    *(uint *)((long)param_2 + 0xc) =
         (uint)*(float *)((long)param_2 + 0xc) & uVar3 | ~uVar3 & (uint)param_5;
    return;
  }
  *(ulong *)param_2 = CONCAT44(param_5,param_4);
  *(ulong *)((long)param_2 + 8) = CONCAT44(param_5,param_4);
  return;
}



/* hb_draw_extents_line_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void hb_draw_extents_line_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,void *param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  fVar1 = *param_2;
  fVar2 = *(float *)((long)param_2 + 8);
  if (fVar1 <= fVar2) {
    *(uint *)param_2 =
         (uint)fVar1 & -(uint)(fVar1 <= param_4) | ~-(uint)(fVar1 <= param_4) & (uint)param_4;
    uVar3 = -(uint)(*(float *)((long)param_2 + 4) <= param_5);
    *(uint *)((long)param_2 + 4) =
         (uint)*(float *)((long)param_2 + 4) & uVar3 | ~uVar3 & (uint)param_5;
    *(uint *)((long)param_2 + 8) =
         (uint)fVar2 & -(uint)(param_4 <= fVar2) | ~-(uint)(param_4 <= fVar2) & (uint)param_4;
    uVar3 = -(uint)(param_5 <= *(float *)((long)param_2 + 0xc));
    *(uint *)((long)param_2 + 0xc) =
         (uint)*(float *)((long)param_2 + 0xc) & uVar3 | ~uVar3 & (uint)param_5;
    return;
  }
  *(ulong *)param_2 = CONCAT44(param_5,param_4);
  *(ulong *)((long)param_2 + 8) = CONCAT44(param_5,param_4);
  return;
}



/* hb_draw_extents_quadratic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float,
   float, void*) */

void hb_draw_extents_quadratic_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,float param_6,float param_7,void *param_8)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
                    /* WARNING: Load size is inaccurate */
  fVar5 = *param_2;
  fVar1 = *(float *)((long)param_2 + 8);
  fVar4 = param_4;
  fVar6 = param_5;
  if (fVar5 <= fVar1) {
    fVar5 = (float)((uint)fVar5 & -(uint)(fVar5 <= param_4) |
                   ~-(uint)(fVar5 <= param_4) & (uint)param_4);
    uVar2 = -(uint)(*(float *)((long)param_2 + 4) <= param_5);
    fVar4 = (float)((uint)fVar1 & -(uint)(param_4 <= fVar1) |
                   ~-(uint)(param_4 <= fVar1) & (uint)param_4);
    uVar3 = -(uint)(param_5 <= *(float *)((long)param_2 + 0xc));
    uVar7 = ~uVar3 & (uint)param_5;
    param_4 = fVar5;
    param_5 = (float)((uint)*(float *)((long)param_2 + 4) & uVar2 | ~uVar2 & (uint)param_5);
    fVar6 = (float)((uint)*(float *)((long)param_2 + 0xc) & uVar3 | uVar7);
    if (fVar4 < fVar5) {
      *(float *)param_2 = param_6;
      *(float *)((long)param_2 + 4) = param_7;
      *(float *)((long)param_2 + 8) = param_6;
      *(float *)((long)param_2 + 0xc) = param_7;
      return;
    }
  }
  *(uint *)param_2 =
       (uint)param_4 & -(uint)(param_4 <= param_6) | ~-(uint)(param_4 <= param_6) & (uint)param_6;
  *(uint *)((long)param_2 + 4) =
       (uint)param_5 & -(uint)(param_5 <= param_7) | ~-(uint)(param_5 <= param_7) & (uint)param_7;
  *(uint *)((long)param_2 + 8) =
       (uint)fVar4 & -(uint)(param_6 <= fVar4) | ~-(uint)(param_6 <= fVar4) & (uint)param_6;
  *(uint *)((long)param_2 + 0xc) =
       (uint)fVar6 & -(uint)(param_7 <= fVar6) | ~-(uint)(param_7 <= fVar6) & (uint)param_7;
  return;
}



/* hb_draw_extents_cubic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float, float,
   float, float, void*) */

void hb_draw_extents_cubic_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
                    /* WARNING: Load size is inaccurate */
  fVar4 = *param_2;
  fVar7 = *(float *)((long)param_2 + 8);
  fVar5 = param_4;
  fVar8 = param_5;
  if (fVar4 <= fVar7) {
    fVar5 = (float)((uint)fVar4 & -(uint)(fVar4 <= param_4) |
                   ~-(uint)(fVar4 <= param_4) & (uint)param_4);
    uVar2 = -(uint)(*(float *)((long)param_2 + 4) <= param_5);
    uVar6 = ~uVar2 & (uint)param_5;
    param_4 = (float)((uint)fVar7 & -(uint)(param_4 <= fVar7) |
                     ~-(uint)(param_4 <= fVar7) & (uint)param_4);
    uVar3 = -(uint)(param_5 <= *(float *)((long)param_2 + 0xc));
    param_5 = (float)((uint)*(float *)((long)param_2 + 0xc) & uVar3 | ~uVar3 & (uint)param_5);
    fVar4 = param_6;
    fVar7 = param_7;
    fVar8 = (float)((uint)*(float *)((long)param_2 + 4) & uVar2 | uVar6);
    if (param_4 < fVar5) goto LAB_00100c31;
  }
  fVar5 = (float)((uint)fVar5 & -(uint)(fVar5 <= param_6) |
                 ~-(uint)(fVar5 <= param_6) & (uint)param_6);
  fVar4 = (float)((uint)param_4 & -(uint)(param_6 <= param_4) |
                 ~-(uint)(param_6 <= param_4) & (uint)param_6);
  bVar1 = param_7 <= param_5;
  uVar2 = ~-(uint)bVar1 & (uint)param_7;
  param_6 = fVar5;
  param_7 = (float)((uint)fVar8 & -(uint)(fVar8 <= param_7) |
                   ~-(uint)(fVar8 <= param_7) & (uint)param_7);
  fVar7 = (float)((uint)param_5 & -(uint)bVar1 | uVar2);
  if (fVar4 < fVar5) {
    *(float *)param_2 = param_8;
    *(float *)((long)param_2 + 4) = param_9;
    *(float *)((long)param_2 + 8) = param_8;
    *(float *)((long)param_2 + 0xc) = param_9;
    return;
  }
LAB_00100c31:
  *(uint *)param_2 =
       (uint)param_6 & -(uint)(param_6 <= param_8) | ~-(uint)(param_6 <= param_8) & (uint)param_8;
  *(uint *)((long)param_2 + 4) =
       (uint)param_7 & -(uint)(param_7 <= param_9) | ~-(uint)(param_7 <= param_9) & (uint)param_9;
  *(uint *)((long)param_2 + 8) =
       (uint)fVar4 & -(uint)(param_8 <= fVar4) | ~-(uint)(param_8 <= fVar4) & (uint)param_8;
  *(uint *)((long)param_2 + 0xc) =
       (uint)fVar7 & -(uint)(param_9 <= fVar7) | ~-(uint)(param_9 <= fVar7) & (uint)param_9;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_push_group(hb_paint_funcs_t*, void*, void*) */

void hb_paint_extents_push_group(hb_paint_funcs_t *param_1,void *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)((long)param_2 + 0x24);
  uVar7 = (ulong)uVar8;
  uVar4 = *(uint *)((long)param_2 + 0x20);
  uVar6 = uVar8 + 1;
  if ((int)uVar4 <= (int)uVar8) {
    if ((int)uVar4 < 0) {
LAB_00100d68:
      uVar2 = __hb_CrapPool;
      ___stack_chk_fail = _realloc;
      __hb_CrapPool = __hb_NullPool;
      _realloc = uVar2;
      return;
    }
    uVar8 = uVar4;
    if (uVar4 < uVar6) {
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < uVar6);
      if (uVar8 < 0xccccccd) {
        pvVar5 = realloc(*(void **)((long)param_2 + 0x28),(ulong)uVar8 * 0x14);
        if (pvVar5 != (void *)0x0) {
          uVar7 = (ulong)*(uint *)((long)param_2 + 0x24);
          *(void **)((long)param_2 + 0x28) = pvVar5;
          *(uint *)((long)param_2 + 0x20) = uVar8;
          uVar6 = *(uint *)((long)param_2 + 0x24) + 1;
          goto LAB_00100cee;
        }
        uVar4 = *(uint *)((long)param_2 + 0x20);
        if (uVar8 <= uVar4) {
          uVar7 = (ulong)*(uint *)((long)param_2 + 0x24);
          pvVar5 = *(void **)((long)param_2 + 0x28);
          uVar6 = *(uint *)((long)param_2 + 0x24) + 1;
          goto LAB_00100cee;
        }
      }
      *(uint *)((long)param_2 + 0x20) = ~uVar4;
      goto LAB_00100d68;
    }
  }
  pvVar5 = *(void **)((long)param_2 + 0x28);
LAB_00100cee:
  *(uint *)((long)param_2 + 0x24) = uVar6;
  uVar3 = __LC1;
  uVar2 = __LC0;
  puVar1 = (undefined4 *)((long)pvVar5 + uVar7 * 0x14);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 1) = uVar2;
  *(undefined8 *)(puVar1 + 3) = uVar3;
  return;
}



/* hb_paint_extents_push_clip_rectangle(hb_paint_funcs_t*, void*, float, float, float, float, void*)
    */

void hb_paint_extents_push_clip_rectangle
               (hb_paint_funcs_t *param_1,void *param_2,float param_3,float param_4,float param_5,
               float param_6,void *param_7)

{
  hb_paint_extents_context_t::push_clip(CONCAT44(param_4,param_3),CONCAT44(param_6,param_5),param_2)
  ;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_paint_image(hb_paint_funcs_t*, void*, hb_blob_t*, unsigned int, unsigned int,
   unsigned int, float, hb_glyph_extents_t*, void*) */

undefined8
hb_paint_extents_paint_image
          (hb_paint_funcs_t *param_1,void *param_2,hb_blob_t *param_3,uint param_4,uint param_5,
          uint param_6,float param_7,hb_glyph_extents_t *param_8,void *param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_register_0000000c;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  hb_paint_extents_context_t::push_clip
            (CONCAT44((float)*(int *)(param_8 + 0xc) + (float)*(int *)(param_8 + 4),
                      (float)*(int *)param_8),
             CONCAT44((float)*(int *)(param_8 + 4),
                      (float)*(int *)(param_8 + 8) + (float)*(int *)param_8),param_2,param_2,param_3
             ,CONCAT44(in_register_0000000c,param_4));
  uVar2 = __hb_CrapPool;
  iVar1 = *(int *)((long)param_2 + 0x14);
  if (iVar1 == 0) {
    piVar3 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar2;
  }
  else {
    piVar3 = (int *)(*(long *)((long)param_2 + 0x18) + (ulong)(iVar1 - 1U) * 0x14);
  }
  uVar2 = __hb_CrapPool;
  if (*(int *)((long)param_2 + 0x24) == 0) {
    piVar4 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = _realloc;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar2;
  }
  else {
    piVar4 = (int *)(*(long *)((long)param_2 + 0x28) +
                    (ulong)(*(int *)((long)param_2 + 0x24) - 1) * 0x14);
  }
  if (*piVar3 == 0) {
    *piVar4 = 0;
  }
  else if (*piVar3 == 1) {
    if (*piVar4 == 2) {
      uVar2 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar4 + 2) = uVar2;
      piVar4[4] = piVar3[4];
    }
    else if (*piVar4 == 1) {
      uVar5 = -(uint)((float)piVar4[1] <= (float)piVar3[1]);
      piVar4[1] = piVar4[1] & uVar5 | ~uVar5 & piVar3[1];
      uVar5 = -(uint)((float)piVar4[2] <= (float)piVar3[2]);
      piVar4[2] = piVar4[2] & uVar5 | ~uVar5 & piVar3[2];
      uVar5 = -(uint)((float)piVar3[3] <= (float)piVar4[3]);
      piVar4[3] = piVar4[3] & uVar5 | ~uVar5 & piVar3[3];
      uVar5 = -(uint)((float)piVar3[4] <= (float)piVar4[4]);
      piVar4[4] = piVar4[4] & uVar5 | ~uVar5 & piVar3[4];
    }
  }
  if (iVar1 != 0) {
    *(uint *)((long)param_2 + 0x14) = iVar1 - 1U;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_push_clip_glyph(hb_paint_funcs_t*, void*, unsigned int, hb_font_t*, void*) */

void hb_paint_extents_push_clip_glyph
               (hb_paint_funcs_t *param_1,void *param_2,uint param_3,hb_font_t *param_4,
               void *param_5)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = __LC0;
  uStack_40 = __LC1;
LAB_00100fc4:
  lVar1 = static_draw_extents_funcs;
  if (static_draw_extents_funcs == 0) {
    lVar1 = hb_draw_funcs_create();
    hb_draw_funcs_set_move_to_func(lVar1,hb_draw_extents_move_to,0,0);
    hb_draw_funcs_set_line_to_func(lVar1,hb_draw_extents_line_to,0);
    hb_draw_funcs_set_quadratic_to_func(lVar1,hb_draw_extents_quadratic_to,0);
    hb_draw_funcs_set_cubic_to_func(lVar1,hb_draw_extents_cubic_to,0);
    hb_draw_funcs_make_immutable(lVar1);
    if (lVar1 == 0) {
      lVar1 = hb_draw_funcs_get_empty();
      LOCK();
      bVar3 = static_draw_extents_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_draw_extents_funcs;
      }
      static_draw_extents_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto code_r0x001010c8;
    }
    else {
      LOCK();
      bVar3 = static_draw_extents_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_draw_extents_funcs;
      }
      static_draw_extents_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto LAB_00101093;
    }
  }
  hb_font_draw_glyph(param_4,param_3,lVar1,&local_48);
  hb_paint_extents_context_t::push_clip(local_48,uStack_40,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x001010c8:
  if (lVar1 != 0) {
LAB_00101093:
    lVar2 = hb_draw_funcs_get_empty();
    if (lVar1 != lVar2) {
      hb_draw_funcs_destroy(lVar1);
    }
  }
  goto LAB_00100fc4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* hb_paint_extents_get_funcs() */

long hb_paint_extents_get_funcs(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
LAB_001010ea:
  lVar1 = static_paint_extents_funcs;
  if (static_paint_extents_funcs == 0) {
    lVar1 = hb_paint_funcs_create();
    hb_paint_funcs_set_push_transform_func(lVar1,hb_paint_extents_push_transform,0,0);
    hb_paint_funcs_set_pop_transform_func(lVar1,0x100000,0);
    hb_paint_funcs_set_push_clip_glyph_func(lVar1,hb_paint_extents_push_clip_glyph,0);
    hb_paint_funcs_set_push_clip_rectangle_func(lVar1,hb_paint_extents_push_clip_rectangle,0);
    hb_paint_funcs_set_pop_clip_func(lVar1,hb_paint_extents_pop_clip,0);
    hb_paint_funcs_set_push_group_func(lVar1,hb_paint_extents_push_group,0);
    hb_paint_funcs_set_pop_group_func(lVar1,hb_paint_extents_pop_group,0);
    hb_paint_funcs_set_color_func(lVar1,hb_paint_extents_paint_color,0);
    hb_paint_funcs_set_image_func(lVar1,hb_paint_extents_paint_image,0);
    hb_paint_funcs_set_linear_gradient_func(lVar1,hb_paint_extents_paint_linear_gradient,0);
    hb_paint_funcs_set_radial_gradient_func(lVar1,hb_paint_extents_paint_radial_gradient,0);
    hb_paint_funcs_set_sweep_gradient_func(lVar1,hb_paint_extents_paint_sweep_gradient,0);
    hb_paint_funcs_make_immutable(lVar1);
    if (lVar1 == 0) {
      lVar1 = hb_paint_funcs_get_empty();
      LOCK();
      bVar3 = static_paint_extents_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_paint_extents_funcs;
      }
      static_paint_extents_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto code_r0x00101248;
    }
    else {
      LOCK();
      bVar3 = static_paint_extents_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_paint_extents_funcs;
      }
      static_paint_extents_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto LAB_00101213;
    }
  }
  return lVar1;
code_r0x00101248:
  if (lVar1 != 0) {
LAB_00101213:
    lVar2 = hb_paint_funcs_get_empty();
    if (lVar1 != lVar2) {
      hb_paint_funcs_destroy(lVar1);
    }
  }
  goto LAB_001010ea;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_context_t::push_clip(hb_extents_t) */

void hb_paint_extents_context_t::push_clip(float param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  ulong uVar14;
  void *__ptr;
  uint uVar15;
  int *piVar16;
  float *pfVar17;
  int iVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  float local_48 [4];
  float local_38 [6];
  long local_20;
  
  uVar25 = __hb_CrapPool;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_3 + 4) == 0) {
    ___stack_chk_fail = _realloc;
    pfVar13 = (float *)&_hb_CrapPool;
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar25;
  }
  else {
    pfVar13 = (float *)(*(long *)(param_3 + 8) + (ulong)(*(int *)(param_3 + 4) - 1) * 0x18);
  }
  uVar25 = __hb_CrapPool;
  fVar22 = 0.0;
  fVar1 = *pfVar13;
  fVar2 = pfVar13[2];
  fVar3 = pfVar13[1];
  local_48[0] = param_1;
  local_48[1] = param_1;
  local_48[2] = (float)param_2;
  local_48[3] = (float)param_2;
  fVar4 = pfVar13[5];
  fVar21 = 0.0;
  fVar5 = pfVar13[3];
  fVar6 = pfVar13[4];
  pfVar13 = local_48;
  pfVar17 = local_38;
  fVar9 = _LC1;
  fVar10 = _LC1;
  do {
    fVar20 = fVar2 * *pfVar17 + fVar1 * *pfVar13 + fVar6;
    fVar19 = *pfVar17 * fVar5 + *pfVar13 * fVar3 + fVar4;
    *pfVar13 = fVar20;
    *pfVar17 = fVar19;
    fVar11 = fVar20;
    fVar12 = fVar19;
    if (fVar21 <= fVar10) {
      bVar7 = fVar21 <= fVar20;
      uVar23 = ~-(uint)bVar7 & (uint)fVar20;
      bVar8 = fVar22 <= fVar19;
      uVar24 = ~-(uint)bVar8 & (uint)fVar19;
      fVar20 = (float)((uint)fVar10 & -(uint)(fVar20 <= fVar10) |
                      ~-(uint)(fVar20 <= fVar10) & (uint)fVar20);
      fVar19 = (float)((uint)fVar9 & -(uint)(fVar19 <= fVar9) |
                      ~-(uint)(fVar19 <= fVar9) & (uint)fVar19);
      fVar11 = (float)((uint)fVar21 & -(uint)bVar7 | uVar23);
      fVar12 = (float)((uint)fVar22 & -(uint)bVar8 | uVar24);
    }
    fVar22 = fVar12;
    fVar21 = fVar11;
    pfVar13 = pfVar13 + 1;
    pfVar17 = pfVar17 + 1;
    fVar9 = fVar19;
    fVar10 = fVar20;
  } while (pfVar13 != local_38);
  iVar18 = 2;
  if (fVar21 < fVar20) {
    iVar18 = (fVar19 <= fVar22) + 1;
  }
  uVar23 = *(uint *)(param_3 + 0x14);
  uVar14 = (ulong)uVar23;
  __ptr = *(void **)(param_3 + 0x18);
  if (uVar23 == 0) {
    piVar16 = (int *)&_hb_CrapPool;
    ___stack_chk_fail = CONCAT44(_DAT_0010201c,_realloc);
    __hb_CrapPool = __hb_NullPool;
    _realloc = uVar25;
  }
  else {
    piVar16 = (int *)((long)__ptr + (ulong)(uVar23 - 1) * 0x14);
  }
  if (*piVar16 == 2) {
    iVar18 = 2;
  }
  else if ((*piVar16 == 1) && (iVar18 == 1)) {
    iVar18 = 2;
    uVar24 = -(uint)((float)piVar16[1] <= fVar21);
    fVar21 = (float)((uint)fVar21 & uVar24 | ~uVar24 & piVar16[1]);
    uVar24 = -(uint)((float)piVar16[2] <= fVar22);
    fVar22 = (float)((uint)fVar22 & uVar24 | ~uVar24 & piVar16[2]);
    uVar24 = -(uint)(fVar20 <= (float)piVar16[3]);
    fVar20 = (float)((uint)fVar20 & uVar24 | ~uVar24 & piVar16[3]);
    uVar24 = -(uint)(fVar19 <= (float)piVar16[4]);
    fVar19 = (float)((uint)fVar19 & uVar24 | ~uVar24 & piVar16[4]);
    if (fVar21 < fVar20) {
      iVar18 = (fVar19 <= fVar22) + 1;
    }
  }
  uVar24 = *(uint *)(param_3 + 0x10);
  uVar15 = uVar23 + 1;
  if ((int)uVar24 <= (int)uVar23) {
    if ((int)uVar24 < 0) {
LAB_0010158f:
      uVar25 = __hb_CrapPool;
      ___stack_chk_fail = CONCAT44(_DAT_0010201c,_realloc);
      __hb_CrapPool = __hb_NullPool;
      _realloc = uVar25;
      goto LAB_00101467;
    }
    uVar23 = uVar24;
    if (uVar24 < uVar15) {
      do {
        uVar23 = uVar23 + 8 + (uVar23 >> 1);
      } while (uVar23 < uVar15);
      if (0xccccccc < uVar23) {
        *(uint *)(param_3 + 0x10) = ~uVar24;
        goto LAB_0010158f;
      }
      __ptr = realloc(__ptr,(ulong)uVar23 * 0x14);
      if (__ptr == (void *)0x0) {
        if (*(uint *)(param_3 + 0x10) < uVar23) {
          *(uint *)(param_3 + 0x10) = ~*(uint *)(param_3 + 0x10);
          goto LAB_0010158f;
        }
        uVar14 = (ulong)*(uint *)(param_3 + 0x14);
        __ptr = *(void **)(param_3 + 0x18);
        uVar15 = *(uint *)(param_3 + 0x14) + 1;
      }
      else {
        *(void **)(param_3 + 0x18) = __ptr;
        uVar14 = (ulong)*(uint *)(param_3 + 0x14);
        *(uint *)(param_3 + 0x10) = uVar23;
        uVar15 = *(uint *)(param_3 + 0x14) + 1;
      }
    }
  }
  *(uint *)(param_3 + 0x14) = uVar15;
  piVar16 = (int *)((long)__ptr + uVar14 * 0x14);
  *piVar16 = iVar18;
  *(ulong *)(piVar16 + 1) = CONCAT44(fVar22,fVar21);
  *(ulong *)(piVar16 + 3) = CONCAT44(fVar19,fVar20);
LAB_00101467:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


