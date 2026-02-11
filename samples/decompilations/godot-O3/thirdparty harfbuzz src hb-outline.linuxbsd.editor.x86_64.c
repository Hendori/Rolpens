
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_recording_pen_close_path(hb_draw_funcs_t*, void*, hb_draw_state_t*, void*) */

void hb_outline_recording_pen_close_path
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,void *param_4)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((long)param_2 + 0x14);
  uVar4 = (ulong)uVar5;
  uVar1 = *(uint *)((long)param_2 + 0x10);
  uVar3 = uVar5 + 1;
  if ((int)uVar1 <= (int)uVar5) {
    if ((int)uVar1 < 0) {
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar5 = uVar1;
    if (uVar1 < uVar3) {
      do {
        uVar5 = (uVar5 >> 1) + 8 + uVar5;
      } while (uVar5 < uVar3);
      if (0x3fffffff < uVar5) {
LAB_00100077:
        *(uint *)((long)param_2 + 0x10) = ~uVar1;
        __hb_CrapPool = __hb_NullPool;
        return;
      }
      pvVar2 = realloc(*(void **)((long)param_2 + 0x18),(ulong)uVar5 << 2);
      if (pvVar2 == (void *)0x0) {
        uVar1 = *(uint *)((long)param_2 + 0x10);
        if (uVar1 < uVar5) goto LAB_00100077;
        uVar4 = (ulong)*(uint *)((long)param_2 + 0x14);
        pvVar2 = *(void **)((long)param_2 + 0x18);
        uVar3 = *(uint *)((long)param_2 + 0x14) + 1;
      }
      else {
        uVar4 = (ulong)*(uint *)((long)param_2 + 0x14);
        *(void **)((long)param_2 + 0x18) = pvVar2;
        *(uint *)((long)param_2 + 0x10) = uVar5;
        uVar3 = *(uint *)((long)param_2 + 0x14) + 1;
      }
      goto LAB_0010001e;
    }
  }
  pvVar2 = *(void **)((long)param_2 + 0x18);
LAB_0010001e:
  *(uint *)((long)param_2 + 0x14) = uVar3;
  *(undefined4 *)((long)pvVar2 + uVar4 * 4) = *(undefined4 *)((long)param_2 + 4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_recording_pen_move_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*)
    */

void hb_outline_recording_pen_move_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,void *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((long)param_2 + 4);
  uVar5 = (ulong)uVar6;
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2;
  uVar4 = uVar6 + 1;
  if ((int)uVar2 <= (int)uVar6) {
    if ((int)uVar2 < 0) {
LAB_00100139:
      __hb_CrapPool = (undefined4)__hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar6 = uVar2;
    if (uVar2 < uVar4) {
      do {
        uVar6 = (uVar6 >> 1) + 8 + uVar6;
      } while (uVar6 < uVar4);
      if (uVar6 < 0x15555556) {
        pvVar3 = realloc(*(void **)((long)param_2 + 8),(ulong)uVar6 * 0xc);
        if (pvVar3 != (void *)0x0) {
          uVar5 = (ulong)*(uint *)((long)param_2 + 4);
          *(void **)((long)param_2 + 8) = pvVar3;
          *(uint *)param_2 = uVar6;
          uVar4 = *(uint *)((long)param_2 + 4) + 1;
          goto LAB_001000c0;
        }
                    /* WARNING: Load size is inaccurate */
        uVar2 = *param_2;
        if (uVar6 <= uVar2) {
          uVar5 = (ulong)*(uint *)((long)param_2 + 4);
          pvVar3 = *(void **)((long)param_2 + 8);
          uVar4 = *(uint *)((long)param_2 + 4) + 1;
          goto LAB_001000c0;
        }
      }
      *(uint *)param_2 = ~uVar2;
      goto LAB_00100139;
    }
  }
  pvVar3 = *(void **)((long)param_2 + 8);
LAB_001000c0:
  *(uint *)((long)param_2 + 4) = uVar4;
  puVar1 = (undefined8 *)((long)pvVar3 + uVar5 * 0xc);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = CONCAT44(param_5,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_recording_pen_line_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*)
    */

void hb_outline_recording_pen_line_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,void *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((long)param_2 + 4);
  uVar5 = (ulong)uVar6;
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2;
  uVar4 = uVar6 + 1;
  if ((int)uVar2 <= (int)uVar6) {
    if ((int)uVar2 < 0) {
LAB_00100209:
      __hb_CrapPool = (undefined4)__hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar6 = uVar2;
    if (uVar2 < uVar4) {
      do {
        uVar6 = (uVar6 >> 1) + 8 + uVar6;
      } while (uVar6 < uVar4);
      if (uVar6 < 0x15555556) {
        pvVar3 = realloc(*(void **)((long)param_2 + 8),(ulong)uVar6 * 0xc);
        if (pvVar3 != (void *)0x0) {
          uVar5 = (ulong)*(uint *)((long)param_2 + 4);
          *(void **)((long)param_2 + 8) = pvVar3;
          *(uint *)param_2 = uVar6;
          uVar4 = *(uint *)((long)param_2 + 4) + 1;
          goto LAB_00100190;
        }
                    /* WARNING: Load size is inaccurate */
        uVar2 = *param_2;
        if (uVar6 <= uVar2) {
          uVar5 = (ulong)*(uint *)((long)param_2 + 4);
          pvVar3 = *(void **)((long)param_2 + 8);
          uVar4 = *(uint *)((long)param_2 + 4) + 1;
          goto LAB_00100190;
        }
      }
      *(uint *)param_2 = ~uVar2;
      goto LAB_00100209;
    }
  }
  pvVar3 = *(void **)((long)param_2 + 8);
LAB_00100190:
  *(uint *)((long)param_2 + 4) = uVar4;
  puVar1 = (undefined8 *)((long)pvVar3 + uVar5 * 0xc);
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = CONCAT44(param_5,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_recording_pen_quadratic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float,
   float, float, void*) */

void hb_outline_recording_pen_quadratic_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,float param_6,float param_7,void *param_8)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar7;
  ulong uVar6;
  
  uVar3 = *(uint *)((long)param_2 + 4);
  uVar4 = (ulong)uVar3;
                    /* WARNING: Load size is inaccurate */
  uVar7 = *param_2;
  uVar5 = uVar3 + 1;
  uVar6 = (ulong)uVar5;
  if ((int)uVar3 < (int)uVar7) {
LAB_0010025f:
    pvVar2 = *(void **)((long)param_2 + 8);
LAB_00100263:
    *(int *)((long)param_2 + 4) = (int)uVar6;
    puVar1 = (undefined8 *)((long)pvVar2 + uVar4 * 0xc);
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = CONCAT44(param_5,param_4);
  }
  else {
    if (-1 < (int)uVar7) {
      uVar3 = uVar7;
      if (uVar5 <= uVar7) goto LAB_0010025f;
      do {
        uVar3 = (uVar3 >> 1) + 8 + uVar3;
      } while (uVar3 < uVar5);
      if (0x15555555 < uVar3) {
LAB_00100399:
        *(uint *)param_2 = ~uVar7;
        goto LAB_0010039d;
      }
      pvVar2 = realloc(*(void **)((long)param_2 + 8),(ulong)uVar3 * 0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        uVar7 = *param_2;
        if (uVar7 < uVar3) goto LAB_00100399;
        uVar4 = (ulong)*(uint *)((long)param_2 + 4);
        pvVar2 = *(void **)((long)param_2 + 8);
        uVar6 = (ulong)(*(uint *)((long)param_2 + 4) + 1);
      }
      else {
        uVar4 = (ulong)*(uint *)((long)param_2 + 4);
        *(void **)((long)param_2 + 8) = pvVar2;
        *(uint *)param_2 = uVar3;
        uVar6 = (ulong)(*(uint *)((long)param_2 + 4) + 1);
        uVar7 = uVar3;
      }
      goto LAB_00100263;
    }
LAB_0010039d:
    __hb_CrapPool = (undefined4)__hb_NullPool;
    ___stack_chk_fail = __hb_CrapPool;
    uVar6 = (ulong)*(uint *)((long)param_2 + 4);
                    /* WARNING: Load size is inaccurate */
    uVar7 = *param_2;
    __hb_CrapPool = __hb_NullPool;
  }
  uVar3 = (int)uVar6 + 1;
  if ((int)uVar7 <= (int)uVar6) {
    if ((int)uVar7 < 0) {
LAB_0010037a:
      __hb_CrapPool = (undefined4)__hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar4 = (ulong)uVar7;
    if (uVar7 < uVar3) {
      do {
        uVar5 = (int)(uVar4 >> 1) + 8 + (int)uVar4;
        uVar4 = (ulong)uVar5;
      } while (uVar5 < uVar3);
      if (0x15555555 < uVar5) {
        *(uint *)param_2 = ~uVar7;
        goto LAB_0010037a;
      }
      pvVar2 = realloc(*(void **)((long)param_2 + 8),uVar4 * 0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        if (*param_2 < uVar5) {
          *(uint *)param_2 = ~*param_2;
          goto LAB_0010037a;
        }
        uVar6 = (ulong)*(uint *)((long)param_2 + 4);
        pvVar2 = *(void **)((long)param_2 + 8);
        uVar3 = *(uint *)((long)param_2 + 4) + 1;
      }
      else {
        uVar6 = (ulong)*(uint *)((long)param_2 + 4);
        *(void **)((long)param_2 + 8) = pvVar2;
        *(uint *)param_2 = uVar5;
        uVar3 = *(uint *)((long)param_2 + 4) + 1;
      }
      goto LAB_00100287;
    }
  }
  pvVar2 = *(void **)((long)param_2 + 8);
LAB_00100287:
  *(uint *)((long)param_2 + 4) = uVar3;
  puVar1 = (undefined8 *)((long)pvVar2 + uVar6 * 0xc);
  *(undefined4 *)(puVar1 + 1) = 2;
  *puVar1 = CONCAT44(param_7,param_6);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_recording_pen_cubic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float,
   float, float, float, void*) */

void hb_outline_recording_pen_cubic_to
               (hb_draw_funcs_t *param_1,void *param_2,hb_draw_state_t *param_3,float param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar4;
  
  uVar5 = *(uint *)((long)param_2 + 4);
  uVar6 = (ulong)uVar5;
                    /* WARNING: Load size is inaccurate */
  uVar8 = *param_2;
  uVar3 = uVar5 + 1;
  uVar4 = (ulong)uVar3;
  if ((int)uVar5 < (int)uVar8) {
LAB_00100422:
    pvVar2 = *(void **)((long)param_2 + 8);
LAB_00100426:
    *(int *)((long)param_2 + 4) = (int)uVar4;
    puVar1 = (undefined8 *)((long)pvVar2 + uVar6 * 0xc);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = CONCAT44(param_5,param_4);
  }
  else {
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
      if (uVar3 <= uVar8) goto LAB_00100422;
      do {
        uVar5 = (uVar5 >> 1) + 8 + uVar5;
      } while (uVar5 < uVar3);
      if (0x15555555 < uVar5) {
LAB_001005ec:
        *(uint *)param_2 = ~uVar8;
        goto LAB_001005f0;
      }
      pvVar2 = realloc(*(void **)((long)param_2 + 8),(ulong)uVar5 * 0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        uVar8 = *param_2;
        if (uVar8 < uVar5) goto LAB_001005ec;
        uVar6 = (ulong)*(uint *)((long)param_2 + 4);
        pvVar2 = *(void **)((long)param_2 + 8);
        uVar4 = (ulong)(*(uint *)((long)param_2 + 4) + 1);
      }
      else {
        uVar6 = (ulong)*(uint *)((long)param_2 + 4);
        *(void **)((long)param_2 + 8) = pvVar2;
        *(uint *)param_2 = uVar5;
        uVar4 = (ulong)(*(uint *)((long)param_2 + 4) + 1);
        uVar8 = uVar5;
      }
      goto LAB_00100426;
    }
LAB_001005f0:
    __hb_CrapPool = (undefined4)__hb_NullPool;
    ___stack_chk_fail = __hb_CrapPool;
    uVar4 = (ulong)*(uint *)((long)param_2 + 4);
                    /* WARNING: Load size is inaccurate */
    uVar8 = *param_2;
    __hb_CrapPool = __hb_NullPool;
  }
  uVar5 = (int)uVar4 + 1;
  uVar6 = (ulong)uVar5;
  if ((int)uVar4 < (int)uVar8) {
LAB_00100446:
    pvVar2 = *(void **)((long)param_2 + 8);
LAB_0010044a:
    *(int *)((long)param_2 + 4) = (int)uVar6;
    puVar1 = (undefined8 *)((long)pvVar2 + uVar4 * 0xc);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = CONCAT44(param_7,param_6);
  }
  else {
    if (-1 < (int)uVar8) {
      uVar7 = (ulong)uVar8;
      if (uVar5 <= uVar8) goto LAB_00100446;
      do {
        uVar3 = (int)(uVar7 >> 1) + 8 + (int)uVar7;
        uVar7 = (ulong)uVar3;
      } while (uVar3 < uVar5);
      if (0x15555555 < uVar3) {
LAB_00100637:
        *(uint *)param_2 = ~uVar8;
        goto LAB_0010063b;
      }
      pvVar2 = realloc(*(void **)((long)param_2 + 8),uVar7 * 0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        uVar8 = *param_2;
        if (uVar8 < uVar3) goto LAB_00100637;
        uVar4 = (ulong)*(uint *)((long)param_2 + 4);
        pvVar2 = *(void **)((long)param_2 + 8);
        uVar6 = (ulong)(*(uint *)((long)param_2 + 4) + 1);
      }
      else {
        uVar4 = (ulong)*(uint *)((long)param_2 + 4);
        *(void **)((long)param_2 + 8) = pvVar2;
        *(uint *)param_2 = uVar3;
        uVar6 = (ulong)(*(uint *)((long)param_2 + 4) + 1);
        uVar8 = uVar3;
      }
      goto LAB_0010044a;
    }
LAB_0010063b:
    __hb_CrapPool = (undefined4)__hb_NullPool;
    ___stack_chk_fail = __hb_CrapPool;
    uVar6 = (ulong)*(uint *)((long)param_2 + 4);
                    /* WARNING: Load size is inaccurate */
    uVar8 = *param_2;
    __hb_CrapPool = __hb_NullPool;
  }
  uVar5 = (int)uVar6 + 1;
  if ((int)uVar8 <= (int)uVar6) {
    if ((int)uVar8 < 0) {
LAB_00100618:
      __hb_CrapPool = (undefined4)__hb_NullPool;
      ___stack_chk_fail = __hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar4 = (ulong)uVar8;
    if (uVar8 < uVar5) {
      do {
        uVar3 = (int)(uVar4 >> 1) + 8 + (int)uVar4;
        uVar4 = (ulong)uVar3;
      } while (uVar3 < uVar5);
      if (0x15555555 < uVar3) {
        *(uint *)param_2 = ~uVar8;
        goto LAB_00100618;
      }
      pvVar2 = realloc(*(void **)((long)param_2 + 8),uVar4 * 0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        if (*param_2 < uVar3) {
          *(uint *)param_2 = ~*param_2;
          goto LAB_00100618;
        }
        uVar6 = (ulong)*(uint *)((long)param_2 + 4);
        pvVar2 = *(void **)((long)param_2 + 8);
        uVar5 = *(uint *)((long)param_2 + 4) + 1;
      }
      else {
        uVar6 = (ulong)*(uint *)((long)param_2 + 4);
        *(void **)((long)param_2 + 8) = pvVar2;
        *(uint *)param_2 = uVar3;
        uVar5 = *(uint *)((long)param_2 + 4) + 1;
      }
      goto LAB_0010046e;
    }
  }
  pvVar2 = *(void **)((long)param_2 + 8);
LAB_0010046e:
  *(uint *)((long)param_2 + 4) = uVar5;
  puVar1 = (undefined8 *)((long)pvVar2 + uVar6 * 0xc);
  *(undefined4 *)(puVar1 + 1) = 3;
  *puVar1 = CONCAT44(param_9,param_8);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_t::replay(hb_draw_funcs_t*, void*) const */

void __thiscall hb_outline_t::replay(hb_outline_t *this,hb_draw_funcs_t *param_1,void *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  uint *local_c0;
  uint local_b4;
  int local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_64 [12];
  undefined1 local_58 [16];
  long local_40;
  
  local_c0 = *(uint **)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b4 = 0;
  puVar1 = local_c0 + *(uint *)(this + 0x14);
  auStack_64 = SUB1612((undefined1  [16])0x0,4);
  local_58 = (undefined1  [16])0x0;
  if (puVar1 != local_c0) {
    do {
      fStack_68 = 0.0;
      fStack_6c = 0.0;
      fStack_70 = 0.0;
      fStack_74 = 0.0;
      local_78 = 0;
      uVar3 = *local_c0;
      if (*(uint *)(this + 4) < local_b4) {
        uVar10 = 0;
      }
      else {
        uVar11 = uVar3 - local_b4;
        uVar10 = *(uint *)(this + 4) - local_b4;
        if (uVar11 <= uVar10) {
          uVar10 = uVar11;
        }
      }
      puVar14 = (undefined8 *)(*(long *)(this + 8) + (ulong)local_b4 * 0xc);
      iVar7 = 0;
LAB_00100770:
      puVar13 = puVar14;
      uVar11 = uVar10;
      if (uVar10 != 0) {
        while( true ) {
          fVar16 = fStack_68;
          fVar15 = fStack_6c;
          iVar4 = *(int *)(puVar13 + 1);
          puVar14 = (undefined8 *)((long)puVar13 + 0xc);
          uVar10 = uVar11 - 1;
          if (iVar4 == 2) break;
          if (2 < iVar4) {
            fStack_6c = fVar15;
            fStack_68 = fVar16;
            if (iVar4 == 3) {
              fVar15 = __hb_NullPool;
              fVar16 = _DAT_0010200c;
              if (uVar10 == 0) {
                uVar10 = 0;
              }
              else if (uVar11 == 2) {
                puVar14 = puVar13 + 3;
                uVar10 = 0;
              }
              else {
                uVar10 = uVar11 - 3;
                puVar14 = (undefined8 *)((long)puVar13 + 0x24);
                fVar15 = *(float *)(puVar13 + 3);
                fVar16 = *(float *)((long)puVar13 + 0x1c);
              }
              if (iVar7 == 0) {
                plVar9 = *(long **)(param_1 + 0x38);
                if (plVar9 != (long *)0x0) {
                  plVar9 = (long *)*plVar9;
                }
                (**(code **)(param_1 + 0x10))(param_1,param_2,&local_78,plVar9);
                local_78 = 1;
                fStack_74 = fStack_6c;
                fStack_70 = fStack_68;
              }
              lVar8 = *(long *)(param_1 + 0x38);
              if (lVar8 != 0) {
                lVar8 = *(long *)(lVar8 + 0x18);
              }
              (**(code **)(param_1 + 0x28))(param_1,param_2,&local_78,lVar8);
              iVar7 = local_78;
              fStack_6c = fVar15;
              fStack_68 = fVar16;
            }
            goto LAB_00100770;
          }
          fStack_6c = (float)*puVar13;
          fVar5 = fStack_6c;
          fStack_68 = (float)((ulong)*puVar13 >> 0x20);
          fVar6 = fStack_68;
          if (iVar4 == 0) {
            if (iVar7 != 0) {
              if ((fStack_74 != fVar15) ||
                 (fStack_6c = fVar15, fStack_68 = fVar16, fStack_70 != fVar16)) {
                lVar8 = *(long *)(param_1 + 0x38);
                if (lVar8 != 0) {
                  lVar8 = *(long *)(lVar8 + 8);
                }
                fStack_6c = fVar15;
                fStack_68 = fVar16;
                (**(code **)(param_1 + 0x18))(param_1,param_2,&local_78,lVar8);
              }
              (**(code **)(param_1 + 0x30))(param_1,param_2,&local_78);
              local_78 = 0;
              fStack_74 = 0.0;
              fStack_70 = 0.0;
            }
            iVar7 = 0;
            fStack_6c = fVar5;
            fStack_68 = fVar6;
            goto LAB_00100770;
          }
          fStack_6c = fVar15;
          fStack_68 = fVar16;
          if (iVar4 != 1) goto LAB_00100770;
          if (iVar7 == 0) {
            plVar9 = *(long **)(param_1 + 0x38);
            if (plVar9 != (long *)0x0) {
              plVar9 = (long *)*plVar9;
            }
            (**(code **)(param_1 + 0x10))(param_1,param_2,&local_78,plVar9);
            local_78 = 1;
            fStack_74 = fStack_6c;
            fStack_70 = fStack_68;
          }
          lVar8 = *(long *)(param_1 + 0x38);
          if (lVar8 != 0) {
            lVar8 = *(long *)(lVar8 + 8);
          }
          (**(code **)(param_1 + 0x18))(param_1,param_2,&local_78,lVar8);
          puVar13 = puVar14;
          iVar7 = local_78;
          fStack_6c = fVar5;
          fStack_68 = fVar6;
          uVar11 = uVar10;
          if (uVar10 == 0) goto LAB_00100818;
        }
        if (uVar10 == 0) {
          uVar10 = 0;
          puVar12 = (undefined8 *)&_hb_NullPool;
        }
        else {
          uVar10 = uVar11 - 2;
          puVar12 = puVar14;
          puVar14 = puVar13 + 3;
        }
        uVar2 = *puVar12;
        if (iVar7 == 0) {
          plVar9 = *(long **)(param_1 + 0x38);
          if (plVar9 != (long *)0x0) {
            plVar9 = (long *)*plVar9;
          }
          (**(code **)(param_1 + 0x10))(param_1,param_2,&local_78,plVar9);
          local_78 = 1;
          fStack_74 = fStack_6c;
          fStack_70 = fStack_68;
        }
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 != 0) {
          lVar8 = *(long *)(lVar8 + 0x10);
        }
        (**(code **)(param_1 + 0x20))(param_1,param_2,&local_78,lVar8);
        iVar7 = local_78;
        fStack_6c = (float)uVar2;
        fStack_68 = (float)((ulong)uVar2 >> 0x20);
        goto LAB_00100770;
      }
LAB_00100818:
      if (iVar7 != 0) {
        if ((fStack_74 != fStack_6c) || (fStack_70 != fStack_68)) {
          lVar8 = *(long *)(param_1 + 0x38);
          if (lVar8 != 0) {
            lVar8 = *(long *)(lVar8 + 8);
          }
          (**(code **)(param_1 + 0x18))(param_1,param_2,&local_78,lVar8);
        }
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 != 0) {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        (**(code **)(param_1 + 0x30))(param_1,param_2,&local_78,lVar8);
      }
      local_c0 = local_c0 + 1;
      local_b4 = uVar3;
    } while (puVar1 != local_c0);
  }
  fStack_68 = 0.0;
  fStack_6c = 0.0;
  fStack_70 = 0.0;
  fStack_74 = 0.0;
  local_78 = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* hb_outline_t::control_area() const */

float __thiscall hb_outline_t::control_area(hb_outline_t *this)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  uint *puVar8;
  float *pfVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  
  puVar8 = *(uint **)(this + 0x18);
  puVar1 = puVar8 + *(uint *)(this + 0x14);
  if (puVar1 != puVar8) {
    fVar12 = 0.0;
    uVar11 = 0;
    do {
      uVar2 = *puVar8;
      if (uVar11 < uVar2) {
        uVar5 = (ulong)uVar11;
        lVar10 = (ulong)uVar11 * 0xc;
        do {
          uVar3 = (uint)uVar5;
          uVar4 = uVar3 + 1;
          uVar5 = (ulong)uVar4;
          pfVar9 = (float *)&_hb_NullPool;
          uVar7 = (ulong)uVar11;
          if (uVar4 < uVar2) {
            uVar7 = uVar5;
          }
          if (uVar3 < *(uint *)(this + 4)) {
            pfVar9 = (float *)(*(long *)(this + 8) + lVar10);
          }
          pfVar6 = (float *)&_hb_NullPool;
          if ((uint)uVar7 < *(uint *)(this + 4)) {
            pfVar6 = (float *)(*(long *)(this + 8) + uVar7 * 0xc);
          }
          lVar10 = lVar10 + 0xc;
          fVar12 = fVar12 + (*pfVar9 * pfVar6[1] - pfVar9[1] * *pfVar6);
        } while (uVar4 != uVar2);
      }
      puVar8 = puVar8 + 1;
      uVar11 = uVar2;
    } while (puVar1 != puVar8);
    return fVar12 * _LC1;
  }
  return 0.0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_outline_t::embolden(float, float, float, float) */

void __thiscall
hb_outline_t::embolden(hb_outline_t *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint *puVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  float *pfVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_6c;
  float local_68;
  float local_64;
  
  if (((param_1 != 0.0) || (param_2 != 0.0)) && (*(int *)(this + 4) != 0)) {
    fVar26 = param_1 * _LC1;
    fVar28 = param_2 * _LC1;
    fVar19 = (float)control_area(this);
    if (*(uint *)(this + 0x14) != 0) {
      puVar12 = *(uint **)(this + 0x18);
      puVar2 = puVar12 + *(uint *)(this + 0x14);
      uVar7 = 0;
      do {
        uVar4 = *puVar12;
        uVar1 = uVar4 - 1;
        if ((uVar1 != uVar7) && (uVar1 != 0xffffffff)) {
          uVar18 = 0xffffffff;
          local_68 = 0.0;
          local_64 = 0.0;
          local_6c = 0.0;
          uVar16 = (ulong)uVar1;
          fVar30 = 0.0;
          uVar8 = uVar7;
          fVar27 = 0.0;
          fVar31 = 0.0;
          do {
            uVar6 = __hb_CrapPool;
            uVar17 = (ulong)uVar8;
            uVar14 = (uint)uVar16;
            fVar22 = local_6c;
            fVar23 = local_64;
            fVar24 = local_68;
            if (uVar18 == uVar8) {
LAB_00100f4c:
              uVar15 = uVar17;
              if (fVar27 != 0.0) {
                if ((int)uVar18 < 0) {
                  uVar18 = uVar14;
                  local_6c = fVar30;
                  local_68 = fVar27;
                  local_64 = fVar31;
                }
                fVar21 = fVar23 * fVar31 + fVar22 * fVar30;
                if (fVar21 <= __LC2) {
                  fVar21 = 0.0;
                  fVar30 = 0.0;
                }
                else {
                  fVar21 = fVar21 + __LC3;
                  fVar29 = fVar22 + fVar30;
                  fVar25 = fVar23 + fVar31;
                  fVar31 = fVar30 * fVar23 - fVar31 * fVar22;
                  if (fVar19 < 0.0) {
                    fVar29 = (float)((uint)fVar29 ^ __LC4);
                    fVar31 = (float)((uint)fVar31 ^ __LC4);
                  }
                  else {
                    fVar25 = (float)((uint)fVar25 ^ __LC4);
                  }
                  fVar27 = (float)((uint)fVar27 & -(uint)(fVar27 <= fVar24) |
                                  ~-(uint)(fVar27 <= fVar24) & (uint)fVar24);
                  if (fVar21 * fVar27 < fVar26 * fVar31) {
                    fVar30 = (fVar29 * fVar27) / fVar31;
                  }
                  else {
                    fVar30 = (fVar29 * fVar26) / fVar21;
                  }
                  if (fVar21 * fVar27 < fVar28 * fVar31) {
                    fVar21 = (fVar25 * fVar27) / fVar31;
                  }
                  else {
                    fVar21 = (fVar25 * fVar28) / fVar21;
                  }
                }
                uVar15 = uVar16;
                if (uVar14 != uVar8) {
                  do {
                    uVar14 = (uint)uVar16;
                    if (uVar14 < *(uint *)(this + 4)) {
                      lVar13 = *(long *)(this + 8);
                      pfVar10 = (float *)(lVar13 + uVar16 * 0xc);
                      *pfVar10 = param_3 + fVar30 + *pfVar10;
LAB_001010b5:
                      puVar9 = (undefined *)(lVar13 + uVar16 * 0xc);
                    }
                    else {
                      __hb_CrapPool = (float)__hb_NullPool;
                      ___stack_chk_fail = __hb_CrapPool;
                      if (uVar14 < *(uint *)(this + 4)) {
                        lVar13 = *(long *)(this + 8);
                        _DAT_00102014 = (float)((ulong)__hb_NullPool >> 0x20);
                        __hb_CrapPool = CONCAT44(_DAT_00102014,param_3 + fVar30 + __hb_CrapPool);
                        goto LAB_001010b5;
                      }
                      puVar9 = &_hb_CrapPool;
                      __hb_CrapPool = __hb_NullPool;
                    }
                    *(float *)(puVar9 + 4) = *(float *)(puVar9 + 4) + fVar21 + param_4;
                    uVar11 = uVar14 + 1;
                    if ((int)uVar1 <= (int)uVar14) {
                      uVar11 = uVar7;
                    }
                    uVar16 = (ulong)uVar11;
                    uVar15 = uVar16;
                  } while (uVar8 != uVar11);
                }
              }
            }
            else {
              uVar11 = *(uint *)(this + 4);
              __hb_CrapPool = (float)__hb_NullPool;
              fVar22 = __hb_CrapPool;
              if (uVar8 < uVar11) {
                pfVar10 = (float *)(*(long *)(this + 8) + uVar17 * 0xc);
                __hb_CrapPool = uVar6;
              }
              else {
                ___stack_chk_fail = __hb_CrapPool;
                pfVar10 = (float *)&_hb_CrapPool;
                uVar11 = *(uint *)(this + 4);
                __hb_CrapPool = __hb_NullPool;
              }
              fVar21 = *pfVar10;
              if (uVar14 < uVar11) {
                pfVar10 = (float *)(*(long *)(this + 8) + uVar16 * 0xc);
              }
              else {
                __hb_CrapPool = __hb_NullPool;
                ___stack_chk_fail = fVar22;
                pfVar10 = (float *)&_hb_CrapPool;
                uVar11 = *(uint *)(this + 4);
              }
              fVar25 = *pfVar10;
              if (uVar8 < uVar11) {
                fVar29 = *(float *)(*(long *)(this + 8) + uVar17 * 0xc + 4);
                if (uVar14 < uVar11) goto LAB_00100edb;
LAB_00101198:
                __hb_CrapPool = __hb_NullPool;
                ___stack_chk_fail = fVar22;
                puVar9 = &_hb_CrapPool;
              }
              else {
                ___stack_chk_fail = fVar22;
                _DAT_00102014 = (float)((ulong)__hb_NullPool >> 0x20);
                fVar29 = _DAT_00102014;
                __hb_CrapPool = __hb_NullPool;
                if (*(uint *)(this + 4) <= uVar14) goto LAB_00101198;
LAB_00100edb:
                puVar9 = (undefined *)(*(long *)(this + 8) + uVar16 * 0xc);
              }
              fVar3 = *(float *)(puVar9 + 4);
              fVar20 = hypotf(fVar21 - fVar25,fVar29 - fVar3);
              uVar15 = uVar16;
              fVar22 = fVar30;
              fVar24 = fVar27;
              fVar23 = fVar31;
              if (fVar20 != 0.0) {
                fVar22 = (fVar29 - fVar3) / fVar20;
                fVar23 = (fVar21 - fVar25) / fVar20;
                fVar24 = fVar20;
                goto LAB_00100f4c;
              }
            }
            bVar5 = (int)uVar1 <= (int)uVar8;
            uVar8 = uVar8 + 1;
            if (bVar5) {
              uVar8 = uVar7;
            }
          } while (((uint)uVar15 != uVar8) &&
                  (uVar16 = uVar15, fVar30 = fVar22, fVar27 = fVar24, fVar31 = fVar23,
                  (uint)uVar15 != uVar18));
        }
        puVar12 = puVar12 + 1;
        uVar7 = uVar4;
        if (puVar2 == puVar12) {
          return;
        }
      } while( true );
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* hb_outline_recording_pen_get_funcs() */

long hb_outline_recording_pen_get_funcs(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
LAB_0010128a:
  lVar1 = static_outline_recording_pen_funcs;
  if (static_outline_recording_pen_funcs == 0) {
    lVar1 = hb_draw_funcs_create();
    hb_draw_funcs_set_move_to_func(lVar1,hb_outline_recording_pen_move_to,0,0);
    hb_draw_funcs_set_line_to_func(lVar1,hb_outline_recording_pen_line_to,0);
    hb_draw_funcs_set_quadratic_to_func(lVar1,hb_outline_recording_pen_quadratic_to,0);
    hb_draw_funcs_set_cubic_to_func(lVar1,hb_outline_recording_pen_cubic_to,0);
    hb_draw_funcs_set_close_path_func(lVar1,0x100000,0);
    hb_draw_funcs_make_immutable(lVar1);
    if (lVar1 == 0) {
      lVar1 = hb_draw_funcs_get_empty();
      LOCK();
      bVar3 = static_outline_recording_pen_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_outline_recording_pen_funcs;
      }
      static_outline_recording_pen_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto code_r0x00101363;
    }
    else {
      LOCK();
      bVar3 = static_outline_recording_pen_funcs != 0;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = static_outline_recording_pen_funcs;
      }
      static_outline_recording_pen_funcs = lVar2;
      UNLOCK();
      if (bVar3) goto LAB_0010132e;
    }
  }
  return lVar1;
code_r0x00101363:
  if (lVar1 != 0) {
LAB_0010132e:
    lVar2 = hb_draw_funcs_get_empty();
    if (lVar1 != lVar2) {
      hb_draw_funcs_destroy(lVar1);
    }
  }
  goto LAB_0010128a;
}


