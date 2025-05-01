
void psh_hint_table_record(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  
  uVar1 = *param_1;
  if (param_2 < uVar1) {
    piVar6 = (int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x30);
    if ((piVar6[6] & 4U) == 0) {
      uVar2 = param_1[1];
      puVar3 = *(undefined8 **)(param_1 + 6);
      piVar6[6] = piVar6[6] | 4;
      piVar6[8] = 0;
      piVar6[9] = 0;
      if (uVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)uVar2;
        puVar5 = puVar3;
        do {
          piVar4 = (int *)*puVar5;
          if ((*piVar4 <= piVar6[1] + *piVar6) && (*piVar6 <= *piVar4 + piVar4[1])) {
            *(int **)(piVar6 + 8) = piVar4;
            break;
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar3 + uVar7);
        if (uVar1 <= uVar2) {
          return;
        }
      }
      param_1[1] = uVar2 + 1;
      puVar3[uVar7] = piVar6;
      return;
    }
  }
  return;
}



void psh_globals_scale_widths(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = (ulong)param_2 * 0x198 + param_1;
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 != 0) {
    lVar7 = (long)*(int *)(lVar3 + 400);
    piVar1 = (int *)(param_1 + 0x10 + (ulong)(-param_2 & 0x198));
    lVar3 = *piVar1 * lVar7;
    lVar3 = (long)(int)((ulong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    *(long *)(piVar1 + 2) = lVar3;
    *(ulong *)(piVar1 + 4) = lVar3 + 0x20U & 0xffffffffffffffc0;
    if (iVar2 != 1) {
      piVar4 = piVar1 + 6;
      while( true ) {
        lVar5 = *piVar4 * lVar7;
        lVar6 = (long)(int)((ulong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
        lVar5 = lVar6 - lVar3;
        if (lVar6 - lVar3 < 0) {
          lVar5 = lVar3 - lVar6;
        }
        if (0x7f < lVar5) {
          lVar3 = lVar6;
        }
        *(long *)(piVar4 + 2) = lVar3;
        *(ulong *)(piVar4 + 4) = lVar3 + 0x20U & 0xffffffffffffffc0;
        if (piVar4 + 6 == piVar1 + (ulong)(iVar2 - 2) * 6 + 0xc) break;
        lVar3 = *(long *)(piVar1 + 2);
        piVar4 = piVar4 + 6;
      }
    }
  }
  return;
}



void psh_globals_set_scale(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  
  if ((*(long *)(param_1 + 400) != param_2) || (*(long *)(param_1 + 0x198) != param_4)) {
    *(long *)(param_1 + 400) = param_2;
    *(long *)(param_1 + 0x198) = param_4;
    psh_globals_scale_widths(param_1,0);
  }
  if ((*(long *)(param_1 + 0x328) != param_3) || (*(long *)(param_1 + 0x330) != param_5)) {
    *(long *)(param_1 + 0x328) = param_3;
    *(long *)(param_1 + 0x330) = param_5;
    psh_globals_scale_widths(param_1,1);
    if (param_3 < 0x20c49ba) {
      bVar6 = param_3 * 0x7d < *(long *)(param_1 + 0xf58) * 8;
    }
    else {
      bVar6 = param_3 < (*(long *)(param_1 + 0xf58) * 8) / 0x7d;
    }
    iVar14 = *(int *)(param_1 + 0xf60);
    *(bool *)(param_1 + 0xf6c) = bVar6;
    iVar18 = (int)param_3;
    if (0 < iVar14) {
      lVar10 = (long)iVar18;
      lVar7 = iVar14 * lVar10;
      if (0x20 < (int)((ulong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10)) {
        lVar7 = lVar7 - lVar10;
        do {
          iVar14 = iVar14 + -1;
          if (iVar14 == 0) break;
          lVar11 = lVar7 >> 0x3f;
          lVar1 = lVar7 + 0x8000;
          lVar7 = lVar7 - lVar10;
        } while (0x20 < (int)((ulong)(lVar1 + lVar11) >> 0x10));
      }
    }
    uVar2 = *(uint *)(param_1 + 0x338);
    uVar17 = (ulong)uVar2;
    puVar15 = (uint *)(param_1 + 0x340);
    *(int *)(param_1 + 0xf64) = iVar14;
    iVar14 = 0;
    puVar13 = (uint *)(param_1 + 0x338);
    puVar16 = (uint *)(param_1 + 0x948);
    puVar8 = puVar15;
    uVar12 = uVar17;
    if (uVar2 == 0) {
LAB_001004c4:
      puVar13 = (uint *)(param_1 + 0x640);
      iVar14 = 1;
      goto LAB_001004d0;
    }
LAB_001002a9:
    do {
      lVar7 = (long)iVar18;
      do {
        puVar9 = puVar8 + 0xc;
        *(long *)(puVar8 + 10) =
             (int)((ulong)((int)puVar8[2] * lVar7 + 0x8000 + ((int)puVar8[2] * lVar7 >> 0x3f)) >>
                  0x10) + param_5;
        *(long *)(puVar8 + 8) =
             (int)((ulong)((int)puVar8[3] * lVar7 + 0x8000 + ((int)puVar8[3] * lVar7 >> 0x3f)) >>
                  0x10) + param_5;
        *(long *)(puVar8 + 6) =
             (long)(int)((ulong)((int)puVar8[1] * lVar7 + 0x8000 + ((int)puVar8[1] * lVar7 >> 0x3f))
                        >> 0x10);
        *(ulong *)(puVar8 + 4) =
             param_5 + 0x20 +
             (long)(int)((ulong)((int)*puVar8 * lVar7 + 0x8000 + ((int)*puVar8 * lVar7 >> 0x3f)) >>
                        0x10) & 0xffffffffffffffc0;
        puVar8 = puVar9;
      } while (puVar9 != puVar13 + (ulong)((int)uVar12 - 1) * 0xc + 0xe);
      iVar14 = iVar14 + 1;
      if (iVar14 == 4) break;
      if (iVar14 == 1) goto LAB_001004c4;
      for (; iVar14 == 2; iVar14 = iVar14 + 1) {
        iVar14 = 2;
        puVar13 = puVar16;
LAB_001004d0:
        uVar12 = (ulong)*puVar13;
        puVar8 = puVar13 + 2;
        if (*puVar13 != 0) goto LAB_001002a9;
      }
      uVar12 = (ulong)*(uint *)(param_1 + 0xc50);
      puVar13 = (uint *)(param_1 + 0xc50);
      iVar14 = 3;
      puVar8 = (uint *)(param_1 + 0xc58);
    } while (*(uint *)(param_1 + 0xc50) != 0);
    bVar6 = false;
    if (uVar2 == 0) goto LAB_0010044e;
    do {
      uVar2 = *puVar16;
      puVar8 = puVar15 + uVar17 * 0xc;
      if (uVar2 != 0) {
        do {
          puVar13 = puVar16 + 2;
          do {
            iVar19 = *puVar15 - *puVar13;
            iVar14 = -iVar19;
            if (0 < iVar19) {
              iVar14 = iVar19;
            }
            if ((int)((ulong)((long)iVar14 * (long)iVar18 + 0x8000 +
                             ((long)iVar14 * (long)iVar18 >> 0x3f)) >> 0x10) < 0x40) {
              uVar3 = *(undefined8 *)(puVar13 + 4);
              uVar4 = *(undefined8 *)(puVar13 + 6);
              uVar5 = *(undefined8 *)(puVar13 + 10);
              *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar13 + 8);
              *(undefined8 *)(puVar15 + 10) = uVar5;
              *(undefined8 *)(puVar15 + 4) = uVar3;
              *(undefined8 *)(puVar15 + 6) = uVar4;
              break;
            }
            puVar13 = puVar13 + 0xc;
          } while (puVar13 != puVar16 + (ulong)(uVar2 - 1) * 0xc + 0xe);
          if (puVar8 == puVar15 + 0xc) goto LAB_00100449;
          puVar15 = puVar15 + 0xc;
        } while( true );
      }
      do {
        if (puVar15 + 0xc == puVar8) break;
        puVar15 = puVar15 + 0x18;
      } while (puVar15 != puVar8);
LAB_00100449:
      if (bVar6) {
        return;
      }
LAB_0010044e:
      uVar17 = (ulong)*(uint *)(param_1 + 0x640);
      puVar16 = (uint *)(param_1 + 0xc50);
      bVar6 = true;
      puVar15 = (uint *)(param_1 + 0x648);
    } while (*(uint *)(param_1 + 0x640) != 0);
  }
  return;
}



long pshinter_get_globals_funcs(long param_1)

{
  return param_1 + 0x90;
}



long pshinter_get_t1_funcs(long param_1)

{
  return param_1 + 0xa8;
}



long pshinter_get_t2_funcs(long param_1)

{
  return param_1 + 0xe0;
}



void t1_hints_open(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



void t2_hints_open(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



undefined8 ps_hinter_init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1 + 0x18;
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar4 = (undefined8 *)(param_1 + 0x20U & 0xfffffffffffffff8);
  uVar3 = (ulong)(((int)lVar1 - (int)puVar4) + 0x78U >> 3);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(long *)(param_1 + 0xa8) = lVar1;
  *(code **)(param_1 + 0xa0) = psh_globals_destroy;
  *(code **)(param_1 + 0x90) = psh_globals_new;
  *(code **)(param_1 + 0x98) = psh_globals_set_scale;
  *(long *)(param_1 + 0xe0) = lVar1;
  *(code **)(param_1 + 0xb0) = t1_hints_open;
  *(code **)(param_1 + 0xb8) = t1_hints_close;
  *(code **)(param_1 + 0xc0) = t1_hints_stem;
  *(code **)(param_1 + 200) = ps_hints_t1stem3;
  *(code **)(param_1 + 0xd0) = ps_hints_t1reset;
  *(code **)(param_1 + 0xd8) = t1_hints_apply;
  *(code **)(param_1 + 0xe8) = t2_hints_open;
  *(code **)(param_1 + 0xf0) = t2_hints_close;
  *(code **)(param_1 + 0xf8) = t2_hints_stems;
  *(code **)(param_1 + 0x100) = ps_hints_t2mask;
  *(code **)(param_1 + 0x108) = ps_hints_t2counter;
  *(code **)(param_1 + 0x110) = t2_hints_apply;
  return 0;
}



void ps_mask_table_done(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar4 = (undefined8 *)param_1[1];
  if (uVar1 != 0) {
    puVar2 = puVar4;
    do {
      puVar3 = puVar2 + 3;
      ft_mem_free(param_2,puVar2[1]);
      puVar2[1] = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2 = puVar3;
    } while (puVar3 != puVar4 + (ulong)uVar1 * 3);
    puVar4 = (undefined8 *)param_1[1];
  }
  ft_mem_free(param_2,puVar4);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



int ps_mask_table_alloc(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 2);
  uVar1 = *param_1 + 1;
  if (param_1[1] < uVar1) {
    puVar4 = (undefined4 *)0x0;
    uVar5 = *param_1 + 8 & 0xfffffff8;
    local_34 = 0;
    lVar3 = ft_mem_realloc(param_2,0x18,param_1[1],uVar5,lVar3,&local_34);
    *(long *)(param_1 + 2) = lVar3;
    iVar2 = local_34;
    if (local_34 != 0) goto LAB_001007cb;
    param_1[1] = uVar5;
  }
  puVar4 = (undefined4 *)(lVar3 + -0x18 + (ulong)uVar1 * 0x18);
  *puVar4 = 0;
  puVar4[4] = 0;
  if (puVar4[1] != 0) {
    memset(*(void **)(puVar4 + 2),0,(ulong)((uint)puVar4[1] >> 3));
  }
  *param_1 = uVar1;
  iVar2 = 0;
LAB_001007cb:
  *param_3 = puVar4;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ps_mask_ensure(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  uVar4 = param_2 + 7U >> 3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  uVar3 = *(uint *)(param_1 + 4) >> 3;
  iVar1 = 0;
  if (uVar3 < uVar4) {
    uVar4 = uVar4 + 7 & 0xfffffff8;
    uVar2 = ft_mem_realloc(param_3,1,uVar3,uVar4,*(undefined8 *)(param_1 + 8),&local_24);
    *(undefined8 *)(param_1 + 8) = uVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 4) = uVar4 << 3;
    }
  }
  local_24 = iVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void psh_globals_destroy(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x129) = 0;
    *(undefined4 *)(param_1 + 0x18a) = 0;
    ft_mem_free(*param_1);
    return;
  }
  return;
}



void psh_hint_align(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  ulong local_70;
  int local_64;
  
  uVar4 = param_1[6];
  if ((uVar4 & 8) != 0) {
    return;
  }
  iVar6 = (int)param_3;
  iVar12 = *param_1;
  lVar10 = (long)iVar6 * 0x198 + param_2;
  lVar15 = (long)*(int *)(lVar10 + 400);
  lVar5 = iVar12 * lVar15;
  local_70 = (long)(int)((ulong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) +
             *(long *)(lVar10 + 0x198);
  local_64 = param_1[1];
  uVar14 = (ulong)(int)((ulong)(local_64 * lVar15 + 0x8000 + (local_64 * lVar15 >> 0x3f)) >> 0x10);
  if (iVar6 == 0) {
    if (*(char *)(param_4 + 0xc0) == '\0') {
LAB_00100d00:
      *(ulong *)(param_1 + 4) = uVar14;
      param_1[6] = uVar4 | 8;
      *(ulong *)(param_1 + 2) = local_70;
      return;
    }
    if (*(char *)(param_4 + 0xc2) == '\0') goto LAB_00100d28;
    *(ulong *)(param_1 + 4) = uVar14;
    bVar16 = true;
  }
  else if (iVar6 == 1) {
    if (*(char *)(param_4 + 0xc1) == '\0') goto LAB_00100d00;
    bVar16 = *(char *)(param_4 + 0xc3) != '\0';
    *(ulong *)(param_1 + 4) = uVar14;
    lVar5 = param_2 + 0x340;
    if (*(int *)(param_2 + 0x338) != 0) {
      while (lVar10 = (long)(iVar12 + local_64) - (long)*(int *)(lVar5 + 0xc),
            -*(int *)(param_2 + 0xf68) <= lVar10) {
        if (iVar12 + local_64 <= *(int *)(lVar5 + 8) + *(int *)(param_2 + 0xf68)) {
          if ((*(char *)(param_2 + 0xf6c) == '\0') && (*(int *)(param_2 + 0xf64) < lVar10)) {
            bVar2 = false;
            lVar5 = 0;
          }
          else {
            bVar2 = true;
            lVar5 = *(long *)(lVar5 + 0x10);
          }
          goto LAB_00100aa5;
        }
        lVar5 = lVar5 + 0x30;
        if (lVar5 == param_2 + 0x370 + (ulong)(*(int *)(param_2 + 0x338) - 1) * 0x30) break;
      }
    }
    bVar2 = false;
    lVar5 = 0;
LAB_00100aa5:
    uVar7 = *(uint *)(param_2 + 0x640);
    lVar10 = param_2 + 0x618 + (ulong)uVar7 * 0x30;
    if (uVar7 != 0) {
      lVar13 = (ulong)uVar7 * -0x30 + lVar10;
      do {
        lVar11 = (long)*(int *)(lVar10 + 8) - (long)iVar12;
        if (lVar11 < -*(int *)(param_2 + 0xf68)) break;
        if (*(int *)(lVar10 + 0xc) - *(int *)(param_2 + 0xf68) <= iVar12) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (lVar11 < *(int *)(param_2 + 0xf64))) {
            lVar15 = *(long *)(lVar10 + 0x10);
            if (bVar2) {
              *(long *)(param_1 + 2) = lVar15;
              *(long *)(param_1 + 4) = lVar5 - lVar15;
            }
            else {
              *(long *)(param_1 + 2) = lVar15;
              if (bVar16) {
                uVar8 = uVar14 + 0x20 & 0xffffffffffffffc0;
                if ((long)uVar14 < 0x40) {
                  uVar8 = 0x40;
                }
                *(ulong *)(param_1 + 4) = uVar8;
              }
            }
            goto LAB_00100b51;
          }
          break;
        }
        lVar10 = lVar10 + -0x30;
      } while (lVar10 != lVar13);
    }
    if (bVar2) {
      if (bVar16) {
        uVar8 = uVar14 + 0x20 & 0xffffffffffffffc0;
        if ((long)uVar14 < 0x40) {
          uVar8 = 0x40;
        }
        *(ulong *)(param_1 + 4) = uVar8;
        *(ulong *)(param_1 + 2) = lVar5 - uVar8;
      }
      else {
        *(ulong *)(param_1 + 2) = lVar5 - uVar14;
      }
      goto LAB_00100b51;
    }
  }
  else {
LAB_00100d28:
    *(ulong *)(param_1 + 4) = uVar14;
    bVar16 = false;
  }
  piVar1 = *(int **)(param_1 + 8);
  lVar5 = (long)uVar14 >> 1;
  if (piVar1 != (int *)0x0) {
    if ((*(byte *)(piVar1 + 6) & 8) == 0) {
      psh_hint_align(piVar1,param_2,param_3,param_4);
      local_64 = param_1[1];
      iVar12 = *param_1;
      uVar4 = param_1[6];
    }
    lVar15 = (((local_64 >> 1) + iVar12) - ((piVar1[1] >> 1) + *piVar1)) * lVar15;
    local_70 = ((long)(int)((ulong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) +
               (*(long *)(piVar1 + 4) >> 1) + *(long *)(piVar1 + 2)) - lVar5;
  }
  uVar8 = local_70;
  if (*(char *)(param_4 + 0xc4) != '\0') {
    if ((long)uVar14 < 0x41) {
      if ((long)uVar14 < 0x20) {
        uVar9 = local_70 + 0x20 & 0xffffffffffffffc0;
        uVar8 = uVar9;
        if (0 < (long)uVar14) {
          lVar5 = local_70 + uVar14;
          uVar8 = lVar5 + 0x20U & 0xffffffffffffffc0;
          lVar15 = uVar9 - local_70;
          if ((long)(uVar9 - local_70) < 0) {
            lVar15 = local_70 - uVar9;
          }
          lVar10 = uVar8 - lVar5;
          if ((long)(uVar8 - lVar5) < 0) {
            lVar10 = lVar5 - uVar8;
          }
          if (lVar15 <= lVar10) {
            uVar8 = uVar9;
          }
        }
      }
      else {
        uVar14 = 0x40;
        uVar8 = local_70 + lVar5 & 0xffffffffffffffc0;
      }
    }
    else {
      uVar9 = *(ulong *)(param_2 + 0x18 + (long)iVar6 * 0x198);
      uVar3 = uVar14;
      if ((long)(uVar14 - uVar9) < 0) {
        if ((long)(uVar9 - uVar14) < 0x28) {
          uVar3 = uVar9;
        }
      }
      else if (((long)(uVar14 - uVar9) < 0x28) && (uVar14 = 0x36, uVar3 = uVar9, (long)uVar9 < 0x30)
              ) goto LAB_00100c70;
      uVar14 = uVar3;
      if ((long)uVar14 < 0xc0) {
        uVar7 = (uint)uVar14 & 0x3f;
        if (9 < uVar7) {
          if ((uVar14 & 0x20) == 0) {
            uVar14 = (uVar14 & 0xffffffffffffffc0) + 10;
          }
          else if (uVar7 < 0x36) {
            uVar14 = (uVar14 & 0xffffffffffffffc0) + 0x36;
          }
        }
      }
      else {
        uVar14 = uVar14 + 0x20 & 0xffffffffffffffc0;
      }
    }
  }
LAB_00100c70:
  local_70 = uVar8;
  *(ulong *)(param_1 + 4) = uVar14;
  uVar8 = local_70 + 0x20 & 0xffffffffffffffc0;
  lVar10 = uVar8 - local_70;
  lVar15 = ((local_70 + 0x20 + uVar14 & 0xffffffffffffffc0) - local_70) - uVar14;
  lVar5 = -lVar10;
  if (0 < lVar10) {
    lVar5 = lVar10;
  }
  lVar10 = -lVar15;
  if (0 < lVar15) {
    lVar10 = lVar15;
  }
  if (lVar10 < lVar5) {
    uVar8 = lVar15 + local_70;
  }
  *(ulong *)(param_1 + 2) = uVar8;
  if (!bVar16) goto LAB_00100b51;
  if ((long)uVar14 < 0x40) {
    param_1[4] = 0x40;
    param_1[5] = 0;
    lVar5 = 0x20;
    uVar8 = uVar8 + 0x20;
LAB_00100cdf:
    uVar14 = (uVar8 & 0xffffffffffffffc0) + 0x20;
  }
  else {
    uVar9 = uVar14 + 0x20 & 0xffffffffffffffc0;
    *(ulong *)(param_1 + 4) = uVar9;
    lVar5 = (long)uVar9 >> 1;
    uVar8 = uVar8 + lVar5;
    if ((uVar14 + 0x20 & 0x40) != 0) goto LAB_00100cdf;
    uVar14 = uVar8 + 0x20 & 0xffffffffffffffc0;
  }
  *(ulong *)(param_1 + 2) = uVar14 - lVar5;
LAB_00100b51:
  param_1[6] = uVar4 | 8;
  return;
}



undefined8 ps_mask_table_merge_all(uint *param_1,undefined8 param_2)

{
  uint *__dest;
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  
  uVar7 = *param_1 - 1;
  if (*param_1 == 0) {
    return 0;
  }
LAB_00100f40:
  uVar5 = uVar7 - 1;
  if (uVar7 == 0) {
    return 0;
  }
  __dest = (uint *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 0x18);
  pbVar11 = *(byte **)(__dest + 2);
  uVar13 = *__dest;
  uVar9 = uVar5;
LAB_00100f78:
  puVar12 = (uint *)(*(long *)(param_1 + 2) + (ulong)uVar9 * 0x18);
  uVar1 = *puVar12;
  pbVar10 = *(byte **)(puVar12 + 2);
  pbVar2 = pbVar11;
  pbVar3 = pbVar10;
  uVar4 = uVar1;
  if (uVar13 <= uVar1) {
    uVar4 = uVar13;
  }
  for (; 7 < uVar4; uVar4 = uVar4 - 8) {
    if ((*pbVar2 & *pbVar3) != 0) goto LAB_00100fc3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  if ((uVar4 == 0) || (((uint)(*pbVar2 & *pbVar3) & -0x100 >> ((byte)uVar4 & 0x1f)) == 0))
  goto LAB_00101059;
LAB_00100fc3:
  if (uVar13 != 0) {
    if (uVar1 < uVar13) {
      uVar6 = ps_mask_ensure(puVar12,uVar13,param_2);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      pbVar11 = *(byte **)(__dest + 2);
      pbVar10 = *(byte **)(puVar12 + 2);
      *puVar12 = uVar13;
    }
    uVar13 = uVar13 + 7 >> 3;
    if (uVar13 != 0) {
      uVar8 = 0;
      do {
        pbVar10[uVar8] = pbVar10[uVar8] | pbVar11[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar13 != uVar8);
    }
  }
  *__dest = 0;
  __dest[4] = 0;
  uVar13 = *param_1 - 1;
  uVar7 = uVar13 - uVar7;
  if (uVar7 != 0) {
    uVar13 = __dest[1];
    uVar6 = *(undefined8 *)(__dest + 2);
    puVar12 = __dest + (ulong)uVar7 * 6;
    memmove(__dest,__dest + 6,(ulong)uVar7 * 0x18);
    puVar12[1] = uVar13;
    *puVar12 = 0;
    uVar13 = *param_1;
    *(undefined8 *)(puVar12 + 2) = uVar6;
    puVar12[4] = 0;
    uVar13 = uVar13 - 1;
  }
  *param_1 = uVar13;
  goto LAB_0010101d;
LAB_00101059:
  uVar9 = uVar9 - 1;
  if (uVar7 <= uVar9) goto code_r0x00101064;
  goto LAB_00100f78;
code_r0x00101064:
  uVar13 = *param_1;
LAB_0010101d:
  uVar7 = uVar5;
  if (uVar13 <= uVar5) {
    return 0;
  }
  goto LAB_00100f40;
}



void psh_blues_set_zones_0_isra_0
               (char param_1,uint param_2,short *param_3,uint *param_4,uint *param_5)

{
  short *psVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar11 = *param_4;
  uVar12 = *param_5;
  if (1 < param_2) {
    psVar1 = param_3 + (ulong)((param_2 - 2 >> 1) + 1) * 2;
    bVar3 = true;
    do {
      if (bVar3 || param_1 != '\0') {
        uVar10 = (uint)param_3[1];
        uVar7 = (ulong)uVar12;
        bVar3 = false;
        uVar8 = (int)*param_3 - uVar10;
        puVar9 = param_5 + 2;
        if (uVar12 != 0) {
LAB_0010115f:
          if ((int)*puVar9 <= (int)uVar10) {
            if (*puVar9 != uVar10) goto code_r0x00101156;
            if ((int)uVar8 < 0) {
              if ((int)puVar9[1] <= (int)uVar8) goto LAB_001011bf;
            }
            else if ((int)uVar8 <= (int)puVar9[1]) goto LAB_001011bf;
            puVar9[1] = uVar8;
            goto LAB_001011bf;
          }
          uVar4 = (ulong)((int)uVar7 - 1);
          puVar5 = puVar9 + uVar4 * 0xc;
          do {
            uVar2 = *(undefined8 *)(puVar5 + 2);
            *(undefined8 *)(puVar5 + uVar4 * -0xc + uVar7 * 0xc) = *(undefined8 *)puVar5;
            *(undefined8 *)(puVar5 + uVar4 * -0xc + uVar7 * 0xc + 2) = uVar2;
            uVar2 = *(undefined8 *)(puVar5 + 6);
            *(undefined8 *)(puVar5 + uVar4 * -0xc + uVar7 * 0xc + 4) = *(undefined8 *)(puVar5 + 4);
            *(undefined8 *)(puVar5 + uVar4 * -0xc + uVar7 * 0xc + 4 + 2) = uVar2;
            uVar2 = *(undefined8 *)(puVar5 + 10);
            *(undefined8 *)(puVar5 + uVar4 * -0xc + uVar7 * 0xc + 8) = *(undefined8 *)(puVar5 + 8);
            *(undefined8 *)(puVar5 + uVar4 * -0xc + uVar7 * 0xc + 8 + 2) = uVar2;
            bVar13 = puVar5 != puVar9;
            puVar5 = puVar5 + -0xc;
          } while (bVar13);
LAB_001011b1:
          *puVar9 = uVar10;
          puVar9[1] = uVar8;
          if (bVar3) goto LAB_001011bb;
          goto LAB_00101210;
        }
        param_5[2] = uVar10;
        param_5[3] = uVar8;
LAB_00101210:
        uVar12 = uVar12 + 1;
      }
      else {
        uVar10 = (uint)*param_3;
        puVar9 = param_4 + 2;
        uVar8 = (int)param_3[1] - uVar10;
        if (uVar11 != 0) {
          uVar7 = (ulong)uVar11;
          bVar3 = true;
          goto LAB_0010115f;
        }
        param_4[2] = uVar10;
        param_4[3] = uVar8;
LAB_001011bb:
        uVar11 = uVar11 + 1;
      }
LAB_001011bf:
      param_3 = param_3 + 2;
      bVar3 = false;
    } while (param_3 != psVar1);
  }
  *param_4 = uVar11;
  *param_5 = uVar12;
  return;
code_r0x00101156:
  puVar9 = puVar9 + 0xc;
  uVar6 = (int)uVar7 - 1;
  uVar7 = (ulong)uVar6;
  if (uVar6 == 0) goto LAB_001011b1;
  goto LAB_0010115f;
}



void psh_blues_set_zones(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                        undefined8 param_5,int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  if (param_7 == 0) {
    piVar2 = param_1 + 0xc2;
  }
  else {
    piVar2 = param_1 + 0x246;
    param_1 = param_1 + 0x184;
  }
  *param_1 = 0;
  *piVar2 = 0;
  psh_blues_set_zones_0_isra_0(0,param_2,param_3,param_1,piVar2);
  psh_blues_set_zones_0_isra_0(1,param_4,param_5,param_1,piVar2);
  iVar3 = *param_1;
  iVar1 = *piVar2;
  piVar11 = param_1 + 2;
  if (iVar3 != 0) {
    iVar8 = param_1[2];
    iVar10 = param_1[3];
    if (iVar3 != 1) {
      piVar4 = piVar11;
      iVar7 = iVar8;
      do {
        iVar8 = piVar4[0xc];
        iVar9 = iVar7 + iVar10;
        if (iVar8 - iVar7 < iVar10) {
          piVar4[1] = iVar8 - iVar7;
          iVar9 = iVar8;
        }
        piVar4[3] = iVar7;
        piVar5 = piVar4 + 0xc;
        piVar4[2] = iVar9;
        iVar10 = piVar4[0xd];
        piVar4 = piVar5;
        iVar7 = iVar8;
      } while (param_1 + (ulong)(iVar3 - 2) * 0xc + 0xe != piVar5);
    }
    piVar11[(ulong)(iVar3 - 1U) * 0xc + 3] = iVar8;
    piVar11[(ulong)(iVar3 - 1U) * 0xc + 2] = iVar10 + iVar8;
  }
  piVar4 = piVar2 + 2;
  if (iVar1 != 0) {
    iVar8 = piVar2[2];
    iVar10 = piVar2[3];
    if (iVar1 != 1) {
      piVar5 = piVar4;
      iVar7 = iVar8;
      do {
        iVar8 = piVar5[0xc];
        iVar9 = iVar7 - iVar8;
        if (iVar10 < iVar9) {
          piVar5[1] = iVar9;
          iVar10 = iVar9;
        }
        piVar5[2] = iVar7;
        piVar6 = piVar5 + 0xc;
        piVar5[3] = iVar7 + iVar10;
        iVar10 = piVar5[0xd];
        piVar5 = piVar6;
        iVar7 = iVar8;
      } while (piVar2 + (ulong)(iVar1 - 2) * 0xc + 0xe != piVar6);
    }
    piVar4[(ulong)(iVar1 - 1U) * 0xc + 2] = iVar8;
    piVar4[(ulong)(iVar1 - 1U) * 0xc + 3] = iVar10 + iVar8;
  }
  iVar8 = 2;
  while( true ) {
    if (iVar3 != 0) {
      piVar11[3] = piVar11[3] - param_6;
      iVar10 = piVar11[2];
      if (iVar3 != 1) {
        piVar5 = piVar11 + (ulong)(iVar3 - 1) * 0xc;
        piVar2 = piVar11;
        do {
          iVar3 = (piVar2[0xf] - iVar10) / 2;
          if (iVar3 < param_6) {
            iVar3 = iVar3 + iVar10;
            iVar10 = iVar3;
          }
          else {
            iVar3 = piVar2[0xf] - param_6;
            iVar10 = iVar10 + param_6;
          }
          piVar2[2] = iVar10;
          piVar6 = piVar2 + 0xc;
          piVar2[0xf] = iVar3;
          iVar10 = piVar2[0xe];
          piVar2 = piVar6;
          piVar11 = piVar5;
        } while (piVar5 != piVar6);
      }
      piVar11[2] = iVar10 + param_6;
    }
    if (iVar8 == 1) break;
    iVar8 = 1;
    iVar3 = iVar1;
    piVar11 = piVar4;
  }
  return;
}



void psh_hint_table_find_strong_points_isra_0
               (uint param_1,undefined8 *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    lVar5 = (long)param_5;
    lVar1 = param_3 + (ulong)param_4 * 0x48;
    puVar2 = param_2 + param_1;
    do {
      uVar3 = *(uint *)(param_3 + 0x1c);
      lVar4 = *(long *)(param_3 + 0x30);
      if ((uVar3 & 0x10) == 0) {
        uVar6 = (*(uint *)(param_3 + 0x20) | *(uint *)(param_3 + 0x24)) & param_6;
        if ((uVar6 & 10) == 0) {
          if ((uVar6 & 5) == 0) {
            if ((uVar3 & 0x40) != 0) {
              puVar8 = param_2;
              if ((uVar3 & (-(uint)(param_6 != 0xc) & 0x80) + 0x80) == 0) {
                if ((uVar3 & (-(uint)(param_6 != 0xc) & 0xffffff80) + 0x100) == 0) {
                  if ((*(long *)(param_3 + 0x28) == 0) && (param_1 != 0)) {
LAB_0010162d:
                    do {
                      piVar7 = (int *)*puVar8;
                      if ((*piVar7 <= lVar4) && (lVar4 <= *piVar7 + piVar7[1])) {
                        *(int **)(param_3 + 0x28) = piVar7;
                        break;
                      }
                      puVar8 = puVar8 + 1;
                    } while (puVar8 != puVar2);
                  }
                }
                else if (param_1 != 0) {
                  puVar10 = param_2;
                  do {
                    piVar7 = (int *)*puVar10;
                    if (((lVar4 - *piVar7) - (long)piVar7[1] < (long)param_5) &&
                       ((long)piVar7[1] - (lVar4 - *piVar7) < (long)param_5)) {
                      *(int **)(param_3 + 0x28) = piVar7;
                      *(uint *)(param_3 + 0x1c) = uVar3 | 0x410;
                      goto LAB_00101612;
                    }
                    puVar10 = puVar10 + 1;
                  } while (puVar10 != puVar2);
                  piVar7 = *(int **)(param_3 + 0x28);
                  goto LAB_00101612;
                }
              }
              else if (param_1 != 0) {
                puVar10 = param_2;
                do {
                  piVar7 = (int *)*puVar10;
                  if ((lVar4 - *piVar7 < (long)param_5) && (*piVar7 - lVar4 < (long)param_5)) {
                    *(int **)(param_3 + 0x28) = piVar7;
                    *(uint *)(param_3 + 0x1c) = uVar3 | 0x210;
                    goto LAB_00101612;
                  }
                  puVar10 = puVar10 + 1;
                } while (puVar10 != puVar2);
                piVar7 = *(int **)(param_3 + 0x28);
LAB_00101612:
                if (piVar7 == (int *)0x0) goto LAB_0010162d;
              }
            }
          }
          else {
            puVar8 = param_2;
            if (param_1 != 0) {
              do {
                piVar7 = (int *)*puVar8;
                if (((lVar4 - *piVar7) - (long)piVar7[1] < lVar5) &&
                   ((long)piVar7[1] - (lVar4 - *piVar7) < lVar5)) {
                  *(int **)(param_3 + 0x28) = piVar7;
                  *(uint *)(param_3 + 0x1c) = uVar3 | 0x410;
                  break;
                }
                puVar8 = puVar8 + 1;
              } while (puVar2 != puVar8);
            }
          }
        }
        else {
          puVar8 = param_2;
          if (param_1 != 0) {
            do {
              lVar9 = (long)*(int *)*puVar8;
              if ((lVar4 - lVar9 < lVar5) && (lVar9 - lVar4 < lVar5)) {
                *(int **)(param_3 + 0x28) = (int *)*puVar8;
                *(uint *)(param_3 + 0x1c) = uVar3 | 0x210;
                break;
              }
              puVar8 = puVar8 + 1;
            } while (puVar2 != puVar8);
          }
        }
      }
      param_3 = param_3 + 0x48;
    } while (lVar1 != param_3);
  }
  return;
}



int psh_hint_table_init_isra_0(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  int *local_60;
  int local_44;
  long local_40;
  
  uVar3 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = ft_mem_qrealloc(param_4,8,0,uVar3 * 2,0,&local_44);
  *(undefined8 *)(param_1 + 4) = uVar6;
  if (local_44 != 0) goto LAB_00101752;
  uVar14 = (ulong)uVar3;
  uVar6 = ft_mem_qrealloc(param_4,0x30,0,uVar14,0,&local_44);
  *(undefined8 *)(param_1 + 2) = uVar6;
  if (local_44 != 0) goto LAB_00101752;
  uVar6 = ft_mem_qrealloc(param_4,0x20,0,uVar3 * 2 + 1,0,&local_44);
  *(undefined8 *)(param_1 + 10) = uVar6;
  if (local_44 != 0) goto LAB_00101752;
  lVar7 = *(long *)(param_1 + 4);
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[8] = 0;
  if (lVar7 != 0) {
    lVar7 = lVar7 + uVar14 * 8;
  }
  local_60 = *(int **)(param_3 + 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar13 = *param_3;
  *(long *)(param_1 + 6) = lVar7;
  puVar5 = *(undefined8 **)(param_2 + 2);
  if (uVar3 == 0) {
    *(uint **)(param_1 + 0xe) = param_3;
    if (uVar13 == 0) goto LAB_00101752;
LAB_0010185b:
    piVar1 = local_60 + (ulong)uVar13 * 6;
    do {
      uVar16 = 0;
      iVar4 = *local_60;
      pbVar15 = *(byte **)(local_60 + 2);
      uVar13 = 0;
      iVar11 = 0;
      if (iVar4 != 0) {
        do {
          while (uVar13 != 0) {
            uVar17 = (int)uVar13 >> 1;
            if ((uVar13 & uVar16) != 0) goto LAB_001018c1;
LAB_0010189b:
            iVar11 = iVar11 + 1;
            uVar13 = uVar17;
            if (iVar4 == iVar11) goto LAB_001018d3;
          }
          bVar2 = *pbVar15;
          uVar16 = (uint)bVar2;
          pbVar15 = pbVar15 + 1;
          uVar17 = 0x40;
          if ((bVar2 & 0x80) == 0) goto LAB_0010189b;
LAB_001018c1:
          iVar12 = iVar11 + 1;
          psh_hint_table_record(param_1,iVar11);
          uVar13 = uVar17;
          iVar11 = iVar12;
        } while (iVar4 != iVar12);
      }
LAB_001018d3:
      local_60 = local_60 + 6;
    } while (local_60 != piVar1);
    if ((uVar3 == param_1[1]) || (uVar3 == 0)) goto LAB_00101752;
  }
  else {
    puVar8 = puVar5;
    puVar10 = *(undefined8 **)(param_1 + 2);
    do {
      puVar9 = (undefined8 *)((long)puVar8 + 0xc);
      *puVar10 = *puVar8;
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar8 + 1);
      puVar8 = puVar9;
      puVar10 = puVar10 + 6;
    } while (puVar9 != (undefined8 *)((long)puVar5 + uVar14 * 0xc));
    *(uint **)(param_1 + 0xe) = param_3;
    if (uVar13 != 0) goto LAB_0010185b;
  }
  uVar13 = 0;
  do {
    uVar16 = uVar13 + 1;
    psh_hint_table_record(param_1,uVar13);
    uVar13 = uVar16;
  } while (uVar3 != uVar16);
LAB_00101752:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_44;
}



void psh_hint_table_activate_mask_isra_0(uint *param_1,uint param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  
  uVar13 = *param_1;
  lVar7 = *(long *)(param_1 + 2);
  if (uVar13 != 0) {
    lVar14 = lVar7;
    do {
      *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) & 0xfffffffb;
      lVar6 = lVar14 + 0x30;
      *(undefined4 *)(lVar14 + 0x28) = 0xffffffff;
      lVar14 = lVar6;
    } while ((ulong)uVar13 * 0x30 + lVar7 != lVar6);
  }
  if (param_2 == 0) {
    param_1[1] = 0;
    return;
  }
  lVar7 = 0;
  uVar5 = 0;
  uVar12 = 0;
  puVar2 = *(undefined8 **)(param_1 + 4);
  uVar11 = 0;
  do {
    if (uVar5 == 0) {
      uVar12 = (uint)*param_3;
      param_3 = param_3 + 1;
      uVar8 = 0x80;
      uVar5 = 0x40;
    }
    else {
      uVar8 = uVar5;
      uVar5 = (int)uVar5 >> 1;
    }
    if ((uVar8 & uVar12) != 0) {
      lVar14 = *(long *)(param_1 + 2) + lVar7;
      if (((*(uint *)(lVar14 + 0x18) & 4) == 0) &&
         (*(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | 4, uVar11 < uVar13)) {
        uVar9 = (ulong)uVar11;
        uVar11 = uVar11 + 1;
        puVar2[uVar9] = lVar14;
      }
    }
    lVar7 = lVar7 + 0x30;
  } while (lVar7 != (ulong)param_2 * 0x30);
  param_1[1] = uVar11;
  uVar13 = 1;
  puVar15 = puVar2;
  if (1 < uVar11) {
    do {
      puVar15 = puVar15 + 1;
      piVar3 = (int *)*puVar15;
      uVar5 = uVar13 - 1;
      iVar1 = *piVar3;
      puVar10 = puVar15;
      do {
        uVar9 = (ulong)uVar5;
        piVar4 = (int *)puVar2[uVar9];
        if (*piVar4 < iVar1) break;
        uVar5 = uVar5 - 1;
        *puVar10 = piVar4;
        puVar10 = puVar10 + -1;
        puVar2[uVar9] = piVar3;
      } while (uVar5 < uVar13);
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar11);
  }
  return;
}



void ps_hints_close_part_0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (*(uint *)(param_1 + 5) != 0) {
    *(undefined4 *)(param_1[6] + (ulong)*(uint *)(param_1 + 5) * 0x18 + -8) = param_2;
  }
  iVar2 = ps_mask_table_merge_all(param_1 + 7,uVar1);
  if (iVar2 != 0) {
    return;
  }
  if (*(uint *)(param_1 + 0xb) != 0) {
    *(undefined4 *)(param_1[0xc] + (ulong)*(uint *)(param_1 + 0xb) * 0x18 + -8) = param_2;
  }
  ps_mask_table_merge_all(param_1 + 0xd,uVar1);
  return;
}



void t1_hints_close(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  ps_hints_close_part_0();
  return;
}



void ps_hinter_done(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  ps_mask_table_done(param_1 + 0x50,uVar1);
  ps_mask_table_done(param_1 + 0x40,uVar1);
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  ps_mask_table_done(param_1 + 0x80,uVar1);
  ps_mask_table_done(param_1 + 0x70,uVar1);
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



void t2_hints_close(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  ps_hints_close_part_0();
  return;
}



int ps_dimension_set_mask_bits
              (long param_1,long param_2,uint param_3,int param_4,undefined4 param_5,
              undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  int *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18 + -8) =
         param_5;
  }
  iVar2 = ps_mask_table_alloc(param_1 + 0x10,param_6,&local_48);
  if (iVar2 == 0) {
    if (*(uint *)(param_1 + 0x10) == 0) {
      iVar2 = ps_mask_table_alloc(param_1 + 0x10,param_6,&local_48);
      if (iVar2 != 0) goto LAB_00101c22;
    }
    else {
      local_48 = (int *)(*(long *)(param_1 + 0x18) + -0x18 + (ulong)*(uint *)(param_1 + 0x10) * 0x18
                        );
    }
    iVar2 = ps_mask_ensure(local_48,param_4,param_6);
    if (iVar2 == 0) {
      *local_48 = param_4;
      pbVar6 = *(byte **)(local_48 + 2);
      iVar5 = 0x80;
      pbVar4 = (byte *)(param_2 + (ulong)(param_3 >> 3));
      uVar3 = 0x80 >> ((byte)param_3 & 7);
      if (param_4 != 0) {
        do {
          bVar1 = *pbVar6 | (byte)iVar5;
          if ((*pbVar4 & uVar3) == 0) {
            bVar1 = ~(byte)iVar5 & *pbVar6;
          }
          uVar3 = (int)uVar3 >> 1;
          *pbVar6 = bVar1;
          if (uVar3 == 0) {
            pbVar4 = pbVar4 + 1;
            uVar3 = 0x80;
          }
          iVar5 = iVar5 >> 1;
          if (iVar5 == 0) {
            pbVar6 = pbVar6 + 1;
            iVar5 = 0x80;
          }
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
  }
LAB_00101c22:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void ps_hints_t2counter(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 3);
  iVar2 = *(int *)(param_1 + 9);
  uVar3 = *param_1;
  if (param_2 == iVar1 + iVar2) {
    iVar4 = ps_dimension_set_mask_bits(param_1 + 3,param_3,0,iVar1,0,uVar3);
    if ((iVar4 == 0) &&
       (iVar4 = ps_dimension_set_mask_bits(param_1 + 9,param_3,iVar1,iVar2,0,uVar3), iVar4 == 0)) {
      return;
    }
    *(int *)(param_1 + 1) = iVar4;
    return;
  }
  return;
}



void ps_hints_t2mask(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 9);
  uVar2 = *param_1;
  if (param_3 == *(int *)(param_1 + 3) + iVar1) {
    iVar3 = ps_dimension_set_mask_bits
                      (param_1 + 3,param_4,iVar1,*(int *)(param_1 + 3),param_2,uVar2);
    if ((iVar3 == 0) &&
       (iVar3 = ps_dimension_set_mask_bits(param_1 + 9,param_4,0,iVar1,param_2,uVar2), iVar3 == 0))
    {
      return;
    }
    *(int *)(param_1 + 1) = iVar3;
    return;
  }
  return;
}



void ps_hints_t1reset(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    iVar2 = 6;
    if (*(int *)(param_1 + 2) == 1) {
      if (*(uint *)(param_1 + 5) != 0) {
        *(undefined4 *)(param_1[6] + (ulong)*(uint *)(param_1 + 5) * 0x18 + -8) = param_2;
      }
      iVar2 = ps_mask_table_alloc(param_1 + 5,uVar1,auStack_38);
      if (iVar2 == 0) {
        if (*(uint *)(param_1 + 0xb) != 0) {
          *(undefined4 *)(param_1[0xc] + (ulong)*(uint *)(param_1 + 0xb) * 0x18 + -8) = param_2;
        }
        iVar2 = ps_mask_table_alloc(param_1 + 0xb,uVar1,auStack_38);
        if (iVar2 == 0) goto LAB_00101e7b;
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
LAB_00101e7b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



int ps_hints_apply_part_0(long param_1,short *param_2,undefined8 *param_3,int param_4)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  short *psVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  long *plVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  byte *pbVar30;
  byte bVar31;
  uint *puVar32;
  short *psVar33;
  long lVar34;
  int iVar35;
  short *psVar36;
  long lVar37;
  int iVar38;
  undefined8 *puVar39;
  long lVar40;
  ulong *puVar41;
  ulong uVar42;
  undefined4 *puVar43;
  long lVar44;
  ulong uVar45;
  long in_FS_OFFSET;
  long local_210;
  uint *local_208;
  long *local_1d8;
  int iStack_18c;
  long local_188 [16];
  uint local_108;
  uint local_104;
  long *local_100;
  ulong *local_f8;
  undefined8 local_f0;
  short *local_e8;
  undefined8 *local_e0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar32 = &local_108;
  for (lVar21 = 0x19; lVar21 != 0; lVar21 = lVar21 + -1) {
    puVar32[0] = 0;
    puVar32[1] = 0;
    puVar32 = puVar32 + 2;
  }
  uVar4 = *param_3;
  local_f0 = uVar4;
  local_100 = (long *)ft_mem_qrealloc(uVar4,0x48,0,(long)param_2[1],0,&iStack_18c);
  iVar35 = iStack_18c;
  if (iStack_18c != 0) goto LAB_00101fab;
  local_f8 = (ulong *)ft_mem_qrealloc(uVar4,0x10,0,(long)*param_2,0,&iStack_18c);
  plVar24 = local_100;
  iVar35 = iStack_18c;
  if (iStack_18c != 0) goto LAB_00101fab;
  sVar3 = param_2[1];
  local_108 = (uint)sVar3;
  local_104 = (uint)*param_2;
  local_e8 = param_2;
  local_e0 = param_3;
  if (*param_2 == 0) {
    plVar17 = *(long **)(param_2 + 4);
    if (sVar3 != 0) goto LAB_0010220c;
  }
  else {
    psVar1 = *(short **)(param_2 + 0xc) + 1;
    puVar23 = local_f8;
    psVar10 = psVar1;
    psVar36 = *(short **)(param_2 + 0xc);
    uVar26 = 0;
    while( true ) {
      psVar33 = psVar10;
      uVar19 = (int)*psVar36 + 1;
      iVar35 = uVar19 - uVar26;
      plVar17 = local_100 + (ulong)uVar26 * 9;
      *(int *)(puVar23 + 1) = iVar35;
      *puVar23 = (ulong)plVar17;
      if (iVar35 != 0) {
        plVar17[2] = (long)puVar23;
        *plVar17 = (long)(local_100 + (ulong)uVar19 * 9 + -9);
        plVar14 = plVar17;
        if (iVar35 != 1) {
          plVar25 = plVar17;
          do {
            plVar16 = plVar25 + 9;
            plVar25[1] = (long)plVar16;
            *plVar16 = (long)plVar25;
            plVar25[0xb] = (long)puVar23;
            plVar25 = plVar16;
            plVar14 = plVar17 + (ulong)(iVar35 - 1) * 9;
          } while (plVar16 != plVar17 + (ulong)(iVar35 - 1) * 9);
        }
        plVar14[1] = (long)plVar17;
      }
      if (psVar33 == psVar1 + (local_104 - 1)) break;
      puVar23 = puVar23 + 2;
      psVar10 = psVar33 + 1;
      psVar36 = psVar33;
      uVar26 = uVar19;
    }
    plVar17 = *(long **)(param_2 + 4);
    if (sVar3 == 0) goto LAB_0010245c;
LAB_0010220c:
    lVar21 = 0;
    plVar14 = local_100;
    plVar25 = plVar17;
    do {
      lVar29 = *(long *)(param_2 + 8);
      *(undefined4 *)(plVar14 + 3) = 0;
      uVar26 = ~(uint)*(byte *)(lVar29 + lVar21) & 1;
      *(uint *)(plVar14 + 3) = uVar26;
      lVar29 = *plVar25;
      lVar22 = plVar25[1];
      lVar34 = lVar29 - plVar17[(long)((int)(*plVar14 - (long)plVar24 >> 3) * 0x38e38e39) * 2];
      lVar37 = lVar22 - (plVar17 + (long)((int)(*plVar14 - (long)plVar24 >> 3) * 0x38e38e39) * 2)[1]
      ;
      lVar44 = -lVar34;
      if (0 < lVar34) {
        lVar44 = lVar34;
      }
      lVar12 = -lVar37;
      if (0 < lVar37) {
        lVar12 = lVar37;
      }
      if (lVar12 * 0xc < lVar44) {
        iVar35 = ((uint)(lVar34 >> 0x3f) & 0xfffffffc) + 8;
      }
      else {
        iVar35 = 1 - (int)(lVar37 >> 0x3f);
        if (lVar12 <= lVar44 * 0xc) {
          iVar35 = 0;
        }
      }
      *(int *)(plVar14 + 4) = iVar35;
      lVar29 = plVar17[(long)((int)(plVar14[1] - (long)plVar24 >> 3) * 0x38e38e39) * 2] - lVar29;
      lVar22 = (plVar17 + (long)((int)(plVar14[1] - (long)plVar24 >> 3) * 0x38e38e39) * 2)[1] -
               lVar22;
      lVar44 = -lVar29;
      if (0 < lVar29) {
        lVar44 = lVar29;
      }
      lVar12 = -lVar22;
      if (0 < lVar22) {
        lVar12 = lVar22;
      }
      if (lVar12 * 0xc < lVar44) {
        if (lVar29 < 0) {
          *(undefined4 *)((long)plVar14 + 0x24) = 4;
          if (uVar26 != 0) goto LAB_00102358;
          if (iVar35 == 4) goto LAB_00102398;
        }
        else {
          *(undefined4 *)((long)plVar14 + 0x24) = 8;
          if (uVar26 == 0) {
            if (iVar35 == 8) {
LAB_00102398:
              *(uint *)(plVar14 + 3) = uVar26 | 2;
            }
          }
          else {
LAB_00102358:
            *(undefined4 *)(plVar14 + 3) = 3;
          }
        }
      }
      else if (lVar44 * 0xc < lVar12) {
        if (lVar22 < 0) {
          *(undefined4 *)((long)plVar14 + 0x24) = 2;
          if (uVar26 != 0) goto LAB_00102358;
          if (iVar35 == 2) goto LAB_00102398;
        }
        else {
          *(undefined4 *)((long)plVar14 + 0x24) = 1;
          if (uVar26 != 0) goto LAB_00102358;
          if (iVar35 == 1) goto LAB_00102398;
        }
      }
      else {
        *(undefined4 *)((long)plVar14 + 0x24) = 0;
        if (uVar26 != 0) goto LAB_00102358;
        if ((iVar35 == 0) && (iVar35 = ft_corner_is_flat(lVar34,lVar37,lVar29), iVar35 != 0)) {
          uVar26 = *(uint *)(plVar14 + 3);
          goto LAB_00102398;
        }
      }
      lVar21 = lVar21 + 1;
      plVar14 = plVar14 + 9;
      plVar25 = plVar25 + 2;
    } while ((uint)lVar21 < local_108);
    plVar24 = *(long **)(param_2 + 4);
    if (local_108 != 0) {
      plVar14 = plVar24 + (ulong)local_108 * 2;
      plVar17 = local_100;
      do {
        lVar21 = *plVar24;
        lVar29 = plVar24[1];
        plVar24 = plVar24 + 2;
        *(undefined4 *)((long)plVar17 + 0x1c) = 0;
        plVar17[5] = 0;
        plVar17[6] = lVar21;
        plVar17[7] = lVar29;
        plVar17 = plVar17 + 9;
      } while (plVar24 != plVar14);
    }
    if (local_104 != 0) {
LAB_0010245c:
      lVar21 = 0;
LAB_0010247a:
      do {
        if ((uint)(local_f8 + lVar21 * 2)[1] < 4) goto LAB_00102468;
        plVar24 = (long *)local_f8[lVar21 * 2];
        plVar17 = plVar24;
        do {
          plVar17 = (long *)plVar17[1];
          if (plVar24 == plVar17) goto LAB_00102468;
          local_210 = plVar24[6];
          lVar29 = plVar24[7];
          lVar44 = plVar17[6] - local_210;
          lVar22 = plVar17[7] - lVar29;
        } while (lVar44 == 0 && lVar22 == 0);
        plVar14 = (long *)*plVar24;
        plVar25 = plVar24;
        if (plVar24 == (long *)*plVar24) goto LAB_00102468;
        while( true ) {
          plVar16 = plVar14;
          local_210 = local_210 - plVar16[6];
          local_208 = (uint *)(lVar29 - plVar16[7]);
          if ((local_210 != 0 || local_208 != (uint *)0x0) &&
             (uVar26 = ft_corner_orientation(lVar44,lVar22,local_210,local_208), local_1d8 = plVar25
             , uVar26 != 0)) goto LAB_00102560;
          if (plVar24 == (long *)*plVar16) break;
          local_210 = plVar16[6];
          lVar29 = plVar16[7];
          plVar14 = (long *)*plVar16;
          plVar25 = plVar16;
        }
        lVar21 = lVar21 + 1;
      } while ((uint)lVar21 < local_104);
    }
  }
LAB_00102627:
  local_208 = local_d8;
  iStack_18c = psh_hint_table_init_isra_0(local_208,param_1 + 0x18,param_1 + 0x28,uVar4);
  iVar35 = iStack_18c;
  if (iStack_18c == 0) {
    iVar35 = psh_hint_table_init_isra_0(&local_90,param_1 + 0x48,param_1 + 0x58);
    if (iVar35 == 0) {
      bVar8 = false;
      lVar21 = local_e0[0x32];
      uVar4 = local_e0[0x65];
      puVar18 = local_e0;
      if (*(int *)(param_3 + 0x67) != 0) {
        lVar29 = (long)*(int *)(param_3 + 0x68) * (long)(int)uVar4;
        uVar42 = (ulong)(int)((ulong)(lVar29 + 0x8000 + (lVar29 >> 0x3f)) >> 0x10);
        uVar45 = uVar42 + 0x20 & 0xffffffffffffffc0;
        if ((uVar45 == 0) || (uVar42 == uVar45)) {
          bVar8 = false;
        }
        else {
          uVar13 = FT_MulDiv(uVar4,uVar45,uVar42);
          puVar18 = local_e0;
          lVar29 = lVar21;
          if ((long)uVar45 < (long)uVar42) {
            lVar29 = lVar21 - lVar21 / 0x32;
          }
          psh_globals_set_scale(local_e0,lVar29,uVar13,0,0);
          bVar8 = true;
        }
      }
      local_46 = param_4 - 2U < 2;
      if ((bool)local_46) {
        local_45 = param_4 == 2;
      }
      else {
        local_45 = param_4 == 4;
      }
      local_44 = (bool)local_46 || param_4 != 1;
      local_48 = 0x101;
      iVar28 = 0;
      do {
        plVar24 = *(long **)(local_e8 + 4);
        if (local_108 == 0) {
          if (local_104 != 0) goto LAB_001027fa;
        }
        else {
          plVar14 = plVar24 + (ulong)local_108 * 2;
          plVar17 = local_100;
          do {
            *(undefined4 *)((long)plVar17 + 0x1c) = 0;
            lVar29 = *plVar24;
            lVar22 = plVar24[1];
            plVar17[5] = 0;
            lVar44 = lVar29;
            if (iVar28 != 0) {
              lVar44 = lVar22;
              lVar22 = lVar29;
            }
            plVar24 = plVar24 + 2;
            plVar17[6] = lVar44;
            plVar17[7] = lVar22;
            plVar17 = plVar17 + 9;
          } while (plVar24 != plVar14);
          uVar42 = 1;
          plVar24 = local_100;
          if (local_104 == 0) goto LAB_00102831;
LAB_001027fa:
          uVar26 = 0;
          puVar23 = local_f8;
          do {
            plVar24 = (long *)*puVar23;
            plVar17 = plVar24;
            if ((int)puVar23[1] != 0) {
              do {
                plVar17 = (long *)*plVar17;
                if (plVar24 == plVar17) {
                  uVar26 = uVar26 + 1;
                  uVar45 = (ulong)uVar26;
                  goto joined_r0x00102883;
                }
              } while (plVar17[6] == plVar24[6]);
              plVar24 = (long *)plVar17[1];
              plVar14 = plVar24;
              plVar25 = plVar24;
              while (plVar14 = (long *)plVar14[1], plVar24 != plVar14) {
                lVar29 = plVar14[6];
                lVar22 = plVar25[6];
                if (lVar29 != lVar22) {
                  if (*(long *)((long)plVar17 + 0x30) < lVar22) {
                    if (lVar29 < lVar22) {
LAB_00102a38:
                      do {
                        *(uint *)((long)plVar25 + 0x1c) = *(uint *)((long)plVar25 + 0x1c) | 0x40;
                        plVar17 = (long *)plVar25[1];
                        if (plVar14 == plVar17) break;
                        *(uint *)((long)plVar17 + 0x1c) = *(uint *)((long)plVar17 + 0x1c) | 0x40;
                        plVar25 = (long *)plVar17[1];
                      } while (plVar14 != plVar25);
                    }
                  }
                  else if (lVar22 < lVar29) goto LAB_00102a38;
                  plVar17 = (long *)*plVar14;
                  plVar25 = plVar14;
                }
              }
            }
            uVar26 = uVar26 + 1;
            puVar23 = puVar23 + 2;
          } while (uVar26 < local_104);
          uVar42 = 0;
LAB_00102820:
          uVar26 = (uint)uVar42;
          uVar45 = uVar42;
joined_r0x00102883:
          if (uVar26 < local_108) {
            uVar42 = (ulong)((int)uVar45 + 1);
            plVar24 = local_100 + uVar45 * 9;
LAB_00102831:
            uVar26 = *(uint *)((long)plVar24 + 0x1c);
            plVar17 = plVar24;
            if ((uVar26 & 0x40) != 0) {
              do {
                plVar17 = (long *)*plVar17;
                if (plVar17 == plVar24) goto LAB_00102820;
                lVar29 = plVar17[7];
                lVar22 = plVar24[7];
                plVar14 = plVar24;
              } while (lVar29 == lVar22);
              do {
                plVar14 = (long *)plVar14[1];
                if (plVar14 == plVar24) goto LAB_00102820;
              } while (lVar22 == plVar14[7]);
              if (lVar29 < lVar22) {
                if (lVar22 < plVar14[7]) {
                  *(uint *)((long)plVar24 + 0x1c) = uVar26 | 0x80;
                }
              }
              else if ((lVar22 < lVar29) && (plVar14[7] < lVar22)) {
                *(uint *)((long)plVar24 + 0x1c) = uVar26 | 0x100;
              }
            }
            goto LAB_00102820;
          }
        }
        lVar29 = *(long *)(local_208 + 2);
        if (*local_208 != 0) {
          lVar22 = (ulong)*local_208 * 0x30 + lVar29;
          do {
            psh_hint_align(lVar29,puVar18,iVar28);
            lVar29 = lVar29 + 0x30;
          } while (lVar29 != lVar22);
        }
        iVar38 = (-(uint)(iVar28 == 0) & 0xfffffff7) + 0xc;
        uVar26 = **(uint **)(local_208 + 0xe);
        lVar29 = *(long *)(*(uint **)(local_208 + 0xe) + 2);
        lVar22 = (long)iVar28;
        iVar11 = FT_DivFix(0x20,puVar18[lVar22 * 0x33 + 0x32]);
        plVar24 = local_100;
        uVar19 = local_108;
        if (0xc < iVar11) {
          iVar11 = 0xc;
        }
        if (uVar26 < 2) {
          if (uVar26 == 1) goto LAB_001031f0;
LAB_00102a77:
          if (local_108 == 0) goto LAB_00102bab;
          plVar17 = plVar24 + (ulong)local_108 * 9;
          plVar14 = plVar24;
          do {
            if ((plVar14[5] != 0) && ((*(uint *)((long)plVar14 + 0x1c) & 0x10) == 0)) {
              *(uint *)((long)plVar14 + 0x1c) = *(uint *)((long)plVar14 + 0x1c) | 0x10;
            }
            plVar14 = plVar14 + 9;
          } while (plVar14 != plVar17);
          plVar14 = plVar24;
          if (iVar28 == 1) {
            do {
              if (((plVar14[4] & 0xc0000000cU) != 0) &&
                 ((*(byte *)((long)plVar14 + 0x1c) & 0x10) == 0)) {
                iVar11 = *(int *)(param_3 + 0x67);
                lVar29 = plVar14[6];
                puVar18 = param_3 + 0x68;
                if (iVar11 != 0) {
                  iVar38 = *(int *)(param_3 + 0x1ed);
                  do {
                    lVar44 = lVar29 - *(int *)((long)puVar18 + 0xc);
                    if (lVar44 < -iVar38) break;
                    if ((lVar29 <= *(int *)(puVar18 + 1) + iVar38) &&
                       ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                        (lVar44 <= *(int *)((long)param_3 + 0xf64))))) {
                      lVar44 = puVar18[4];
                      *(uint *)((long)plVar14 + 0x1c) = *(uint *)((long)plVar14 + 0x1c) | 0x30;
                      plVar14[8] = lVar44;
                    }
                    puVar18 = puVar18 + 6;
                  } while (puVar18 != param_3 + (ulong)(iVar11 - 1) * 6 + 0x6e);
                }
                uVar26 = *(uint *)(param_3 + 200);
                puVar18 = param_3 + (ulong)uVar26 * 6 + 0xc3;
                if (uVar26 != 0) {
                  iVar11 = *(int *)(param_3 + 0x1ed);
                  puVar39 = puVar18 + (ulong)uVar26 * -6;
                  do {
                    if (*(int *)(puVar18 + 1) - lVar29 < (long)-iVar11) break;
                    if ((*(int *)((long)puVar18 + 0xc) - iVar11 <= lVar29) &&
                       ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                        (*(int *)(puVar18 + 1) - lVar29 < (long)*(int *)((long)param_3 + 0xf64)))))
                    {
                      lVar44 = puVar18[5];
                      *(uint *)((long)plVar14 + 0x1c) = *(uint *)((long)plVar14 + 0x1c) | 0x30;
                      plVar14[8] = lVar44;
                    }
                    puVar18 = puVar18 + -6;
                  } while (puVar18 != puVar39);
                }
              }
              plVar14 = plVar14 + 9;
            } while (plVar17 != plVar14);
          }
          uVar13 = local_e0[lVar22 * 0x33 + 0x32];
          do {
            piVar5 = (int *)plVar24[5];
            if (piVar5 != (int *)0x0) {
              uVar26 = *(uint *)((long)plVar24 + 0x1c);
              lVar29 = *(long *)(piVar5 + 2);
              if ((uVar26 & 0x200) == 0) {
                if ((uVar26 & 0x400) != 0) {
                  lVar29 = lVar29 + *(long *)(piVar5 + 4);
                  goto LAB_00102ae0;
                }
                lVar44 = plVar24[6] - (long)*piVar5;
                if (lVar44 < 1) {
                  lVar44 = (long)(int)lVar44 * (long)(int)uVar13;
                  lVar29 = lVar29 + (int)((ulong)(lVar44 + 0x8000 + (lVar44 >> 0x3f)) >> 0x10);
                  goto LAB_00102ae0;
                }
                iVar11 = piVar5[1];
                if (iVar11 <= lVar44) {
                  lVar44 = (long)((int)lVar44 - iVar11) * (long)(int)uVar13;
                  lVar29 = (long)(int)((ulong)(lVar44 + 0x8000 + (lVar44 >> 0x3f)) >> 0x10) +
                           *(long *)(piVar5 + 4) + lVar29;
                  goto LAB_00102ae0;
                }
                lVar44 = FT_MulDiv(lVar44,*(long *)(piVar5 + 4),(long)iVar11);
                plVar24[8] = lVar44 + lVar29;
                uVar26 = *(uint *)((long)plVar24 + 0x1c);
              }
              else {
LAB_00102ae0:
                plVar24[8] = lVar29;
              }
              *(uint *)((long)plVar24 + 0x1c) = uVar26 | 0x20;
            }
            uVar9 = local_f0;
            plVar14 = local_100;
            plVar24 = plVar24 + 9;
          } while (plVar17 != plVar24);
          iVar11 = (int)local_e0[lVar22 * 0x33 + 0x32];
          plVar24 = local_100 + (ulong)local_108 * 9;
          if (local_100 < plVar24) {
            uVar26 = 0;
            plVar17 = local_100;
            do {
              uVar26 = (uVar26 + 1) - (uint)((*(uint *)((long)plVar17 + 0x1c) & 0x10) == 0);
              plVar17 = plVar17 + 9;
            } while (plVar17 < plVar24);
            if (uVar26 != 0) {
              plVar17 = local_188;
              if ((uVar26 < 0x11) ||
                 (plVar17 = (long *)ft_mem_qrealloc(local_f0,8,0,uVar26,0,&iStack_18c),
                 iStack_18c == 0)) {
                uVar42 = 0;
                plVar25 = plVar14;
                do {
                  while ((*(byte *)((long)plVar25 + 0x1c) & 0x10) != 0) {
                    plVar16 = plVar17 + uVar42;
                    if (plVar17 < plVar16) {
                      lVar29 = plVar25[6];
                      do {
                        if (*(long *)(plVar16[-1] + 0x30) <= lVar29) break;
                        *plVar16 = plVar16[-1];
                        plVar16 = plVar16 + -1;
                      } while (plVar17 < plVar16);
                    }
                    *plVar16 = (long)plVar25;
                    plVar25 = plVar25 + 9;
                    uVar42 = (ulong)((int)uVar42 + 1);
                    if (plVar24 <= plVar25) goto LAB_00102fed;
                  }
                  plVar25 = plVar25 + 9;
                } while (plVar25 < plVar24);
LAB_00102fed:
                do {
                  uVar26 = *(uint *)((long)plVar14 + 0x1c);
                  if ((uVar26 & 0x10) == 0) {
                    if ((*(uint *)(plVar14 + 3) & 2) != 0) {
                      if ((((int)plVar14[4] == 0) ||
                          ((int)plVar14[4] != *(int *)((long)plVar14 + 0x24))) ||
                         ((plVar14[3] & 0x4000000004U) == 0)) goto LAB_00102fe0;
                      *(uint *)(plVar14 + 3) = *(uint *)(plVar14 + 3) & 0xfffffffd;
                    }
                    lVar29 = plVar14[6];
                    iVar38 = (int)uVar42;
                    if (iVar38 == 0) {
LAB_00103031:
                      lVar44 = *plVar17;
LAB_00103035:
                      lVar29 = (long)((int)lVar29 - *(int *)(lVar44 + 0x30)) * (long)iVar11;
                      lVar34 = (long)(int)((ulong)(lVar29 + 0x8000 + (lVar29 >> 0x3f)) >> 0x10) +
                               *(long *)(lVar44 + 0x40);
LAB_0010305b:
                      plVar14[8] = lVar34;
                    }
                    else {
                      iVar20 = 0;
                      plVar25 = plVar17;
                      do {
                        if (lVar29 < *(long *)(*plVar25 + 0x30)) {
                          if (iVar20 == 0) goto LAB_00103031;
                          break;
                        }
                        iVar20 = iVar20 + 1;
                        plVar25 = plVar25 + 1;
                      } while (iVar20 != iVar38);
                      lVar44 = plVar17[iVar20 - 1];
                      uVar45 = uVar42;
                      do {
                        uVar19 = (int)uVar45 - 1;
                        uVar15 = (ulong)uVar19;
                        if (*(long *)(plVar17[uVar15] + 0x30) < lVar29) {
                          uVar15 = uVar45;
                          if ((int)uVar45 == iVar38) {
                            lVar44 = plVar17[iVar38 - 1];
                            goto LAB_00103035;
                          }
                          break;
                        }
                        uVar45 = uVar15;
                      } while (uVar19 != 0);
                      lVar37 = *(long *)(lVar44 + 0x30);
                      if (lVar37 == lVar29) {
                        lVar34 = *(long *)(lVar44 + 0x40);
                        goto LAB_0010305b;
                      }
                      lVar12 = *(long *)(plVar17[uVar15] + 0x30);
                      lVar34 = *(long *)(plVar17[uVar15] + 0x40);
                      if (lVar12 == lVar29) goto LAB_0010305b;
                      lVar44 = *(long *)(lVar44 + 0x40);
                      lVar29 = FT_MulDiv(lVar29 - lVar37,lVar34 - lVar44,lVar12 - lVar37);
                      uVar26 = *(uint *)((long)plVar14 + 0x1c);
                      plVar14[8] = lVar29 + lVar44;
                    }
                    *(uint *)((long)plVar14 + 0x1c) = uVar26 | 0x20;
                  }
LAB_00102fe0:
                  plVar14 = plVar14 + 9;
                } while (plVar14 < plVar24);
                if (plVar17 != local_188) {
                  ft_mem_free(uVar9,plVar17);
                }
              }
              goto LAB_00102bab;
            }
          }
        }
        else {
          if (local_108 != 0) {
            puVar43 = (undefined4 *)(lVar29 + 0x18);
            uVar7 = *(uint *)(lVar29 + 0x10);
            if (local_108 <= *(uint *)(lVar29 + 0x10)) {
              uVar7 = local_108;
            }
            do {
              uVar6 = puVar43[4];
              if (uVar19 <= (uint)puVar43[4]) {
                uVar6 = uVar19;
              }
              if (uVar7 < uVar6) {
                psh_hint_table_activate_mask_isra_0(local_208,*puVar43,*(undefined8 *)(puVar43 + 2))
                ;
                psh_hint_table_find_strong_points_isra_0
                          (local_208[1],*(undefined8 *)(local_208 + 4),plVar24 + (ulong)uVar7 * 9,
                           uVar6 - uVar7,iVar11,iVar38);
              }
              puVar43 = puVar43 + 6;
              uVar7 = uVar6;
            } while (puVar43 != (undefined4 *)(lVar29 + 0x30 + (ulong)(uVar26 - 2) * 0x18));
LAB_001031f0:
            uVar26 = local_108;
            psh_hint_table_activate_mask_isra_0
                      (local_208,**(undefined4 **)(*(long *)(local_208 + 0xe) + 8),
                       *(undefined8 *)(*(undefined4 **)(*(long *)(local_208 + 0xe) + 8) + 2));
            psh_hint_table_find_strong_points_isra_0
                      (local_208[1],*(undefined8 *)(local_208 + 4),plVar24,uVar26,iVar11,iVar38);
            goto LAB_00102a77;
          }
LAB_00102bab:
          iVar11 = (int)local_e0[lVar22 * 0x33 + 0x32];
        }
        lVar44 = (long)iVar11;
        puVar23 = local_f8 + (ulong)local_104 * 2;
        lVar29 = local_e0[lVar22 * 0x33 + 0x33];
        puVar41 = local_f8;
        if (local_104 != 0) {
          do {
            uVar45 = *puVar41;
            uVar42 = uVar45 + (ulong)(uint)puVar41[1] * 0x48;
            if (uVar45 < uVar42) {
              uVar26 = 0;
              uVar27 = 0;
              uVar15 = uVar45;
              do {
                if ((*(byte *)(uVar15 + 0x1c) & 0x20) != 0) {
                  if (uVar27 == 0) {
                    uVar27 = uVar15;
                  }
                  uVar26 = uVar26 + 1;
                }
                uVar15 = uVar15 + 0x48;
              } while (uVar15 < uVar42);
              uVar15 = uVar27;
              if (uVar26 < 2) {
                if (uVar26 == 1) {
                  lVar29 = (long)*(int *)(uVar27 + 0x30) * (long)iVar11;
                  lVar29 = *(long *)(uVar27 + 0x40) -
                           (long)(int)((ulong)(lVar29 + 0x8000 + (lVar29 >> 0x3f)) >> 0x10);
                }
                do {
                  if (uVar27 != uVar45) {
                    lVar22 = *(int *)(uVar45 + 0x30) * lVar44;
                    *(long *)(uVar45 + 0x40) =
                         (int)((ulong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10) + lVar29;
                  }
                  uVar45 = uVar45 + 0x48;
                } while (uVar45 < uVar42);
              }
              else {
                do {
                  do {
                    uVar42 = uVar15;
                    uVar15 = *(ulong *)(uVar42 + 8);
                    if (uVar27 == uVar15) goto LAB_00102c66;
                    uVar45 = uVar15;
                  } while ((*(byte *)(uVar15 + 0x1c) & 0x20) != 0);
                  do {
                    uVar45 = *(ulong *)(uVar45 + 8);
                  } while ((*(byte *)(uVar45 + 0x1c) & 0x20) == 0);
                  lVar22 = *(long *)(uVar42 + 0x30);
                  lVar34 = *(long *)(uVar45 + 0x30);
                  lVar37 = *(long *)(uVar42 + 0x40);
                  lVar12 = *(long *)(uVar45 + 0x40);
                  if (lVar34 < lVar22) {
                    local_210 = lVar37 - lVar12;
                    lVar40 = lVar22 - lVar34;
                    lVar22 = lVar34;
                    lVar37 = lVar12;
LAB_00102dee:
                    iVar38 = FT_DivFix(local_210,lVar40);
                    uVar15 = *(ulong *)(uVar42 + 8);
                  }
                  else {
                    local_210 = lVar12 - lVar37;
                    lVar40 = lVar34 - lVar22;
                    if (lVar40 != 0) goto LAB_00102dee;
                    iVar38 = 0x10000;
                  }
                  do {
                    while( true ) {
                      lVar34 = *(long *)(uVar15 + 0x30) - lVar22;
                      iVar20 = (int)lVar34;
                      if (0 < lVar34) break;
                      lVar34 = iVar20 * lVar44;
LAB_00102d98:
                      *(long *)(uVar15 + 0x40) =
                           (int)((ulong)(lVar34 + 0x8000 + (lVar34 >> 0x3f)) >> 0x10) + lVar37;
                      uVar15 = *(ulong *)(uVar15 + 8);
                      if (uVar45 == uVar15) goto LAB_00102dbe;
                    }
                    if (lVar34 < lVar40) {
                      lVar34 = (long)iVar20 * (long)iVar38;
                      goto LAB_00102d98;
                    }
                    lVar34 = (iVar20 - (int)lVar40) * lVar44;
                    *(long *)(uVar15 + 0x40) =
                         (long)(int)((ulong)(lVar34 + 0x8000 + (lVar34 >> 0x3f)) >> 0x10) +
                         local_210 + lVar37;
                    uVar15 = *(ulong *)(uVar15 + 8);
                  } while (uVar45 != uVar15);
LAB_00102dbe:
                } while (uVar27 != uVar15);
              }
            }
LAB_00102c66:
            puVar41 = puVar41 + 2;
          } while (puVar23 != puVar41);
        }
        pbVar30 = *(byte **)(local_e8 + 8);
        plVar24 = *(long **)(local_e8 + 4);
        uVar26 = 0;
        plVar17 = local_100;
        if (local_108 != 0) {
          do {
            uVar19 = *(uint *)((long)plVar17 + 0x1c);
            if (iVar28 == 0) {
              *plVar24 = plVar17[8];
              if ((uVar19 & 0x10) != 0) {
                bVar2 = *pbVar30;
                bVar31 = 0x20;
                goto LAB_00102cb1;
              }
            }
            else {
              plVar24[1] = plVar17[8];
              if ((uVar19 & 0x10) != 0) {
                bVar2 = *pbVar30;
                bVar31 = 0x40;
LAB_00102cb1:
                *pbVar30 = bVar31 | bVar2;
              }
            }
            plVar17 = plVar17 + 9;
            uVar26 = uVar26 + 1;
            pbVar30 = pbVar30 + 1;
            plVar24 = plVar24 + 2;
          } while (uVar26 < local_108);
        }
        if (bVar8) {
          psh_globals_set_scale(local_e0,lVar21,uVar4,0,0);
        }
        if (iVar28 != 0) break;
        local_208 = local_208 + 0x12;
        iVar28 = 1;
        puVar18 = local_e0;
      } while( true );
    }
  }
LAB_00101fab:
  uVar4 = local_f0;
  ft_mem_free(local_f0,local_68._0_8_);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  ft_mem_free(uVar4,local_80);
  local_80 = 0;
  ft_mem_free(uVar4,local_88);
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  ft_mem_free(uVar4,local_b0._0_8_);
  local_b0 = (undefined1  [16])0x0;
  local_b8 = 0;
  ft_mem_free(uVar4,local_c8);
  local_c8 = 0;
  ft_mem_free(uVar4,local_d0);
  local_d0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c0 = 0;
  ft_mem_free(uVar4,local_100);
  local_100 = (long *)0x0;
  ft_mem_free(uVar4,local_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar35;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102560:
  do {
    bVar8 = false;
    lVar29 = plVar17[6];
    lVar22 = plVar17[7];
    while( true ) {
      do {
        plVar24 = plVar17;
        plVar17 = (long *)plVar24[1];
        if (plVar17 == plVar25) {
          bVar8 = true;
        }
        lVar34 = plVar17[6] - lVar29;
        lVar44 = plVar17[7] - lVar22;
        lVar29 = plVar17[6];
        lVar22 = plVar17[7];
      } while (lVar34 == 0 && lVar44 == 0);
      uVar19 = ft_corner_orientation(local_210,local_208,lVar34,lVar44);
      if (uVar19 != 0) break;
      lVar29 = plVar17[6];
      lVar22 = plVar17[7];
    }
    if ((int)(uVar26 ^ uVar19) < 0) {
      do {
        *(uint *)(local_1d8 + 3) = *(uint *)(local_1d8 + 3) | 4;
        local_1d8 = (long *)local_1d8[1];
      } while (plVar24 != local_1d8);
      *(uint *)(plVar24 + 3) = *(uint *)(plVar24 + 3) | 4;
    }
    local_210 = lVar34;
    local_208 = (uint *)lVar44;
    local_1d8 = plVar24;
    uVar26 = uVar19;
  } while (!bVar8);
LAB_00102468:
  lVar21 = lVar21 + 1;
  if (local_104 <= (uint)lVar21) goto LAB_00102627;
  goto LAB_0010247a;
}



undefined8 t1_hints_apply(undefined8 param_1,short *param_2)

{
  undefined8 uVar1;
  
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    uVar1 = ps_hints_apply_part_0();
    return uVar1;
  }
  return 0;
}



undefined8 t2_hints_apply(undefined8 param_1,short *param_2)

{
  undefined8 uVar1;
  
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    uVar1 = ps_hints_apply_part_0();
    return uVar1;
  }
  return 0;
}



int psh_globals_new(undefined8 param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  short sVar14;
  short *psVar15;
  long in_FS_OFFSET;
  undefined4 uVar16;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (undefined8 *)ft_mem_qalloc(param_1,0xf70,&local_44);
  if (local_44 == 0) {
    uVar4 = *(ushort *)(param_2 + 0x80);
    *puVar7 = param_1;
    *(uint *)(puVar7 + 0x35) = (uint)uVar4;
    psVar8 = (short *)(param_2 + 0x88);
    bVar1 = *(byte *)(param_2 + 0x84);
    if (bVar1 != 0) {
      piVar11 = (int *)(puVar7 + 0x38);
      do {
        sVar14 = *psVar8;
        psVar8 = psVar8 + 1;
        *piVar11 = (int)sVar14;
        piVar11 = piVar11 + 6;
      } while (psVar8 != (short *)(param_2 + (ulong)(bVar1 + 0x44) * 2));
    }
    uVar4 = *(ushort *)(param_2 + 0x82);
    *(uint *)(puVar7 + 0x34) = bVar1 + 1;
    *(uint *)(puVar7 + 2) = (uint)uVar4;
    psVar8 = (short *)(param_2 + 0xa2);
    bVar1 = *(byte *)(param_2 + 0x85);
    if (bVar1 != 0) {
      piVar11 = (int *)(puVar7 + 5);
      do {
        sVar14 = *psVar8;
        psVar8 = psVar8 + 1;
        *piVar11 = (int)sVar14;
        piVar11 = piVar11 + 6;
      } while (psVar8 != (short *)(param_2 + (ulong)(bVar1 + 0x51) * 2));
    }
    uVar5 = *(undefined4 *)(param_2 + 0x7c);
    psVar8 = (short *)(param_2 + 0x28);
    *(uint *)(puVar7 + 1) = bVar1 + 1;
    psVar13 = (short *)(param_2 + 0xc);
    bVar1 = *(byte *)(param_2 + 8);
    uVar16 = 0;
    uVar6 = (uint)*(byte *)(param_2 + 9);
    psh_blues_set_zones(puVar7 + 0x67,bVar1,psVar13,uVar6,psVar8,uVar5,0);
    bVar2 = *(byte *)(param_2 + 10);
    bVar3 = *(byte *)(param_2 + 0xb);
    psVar15 = (short *)(param_2 + 0x58);
    psVar12 = (short *)(param_2 + 0x3c);
    psh_blues_set_zones(puVar7 + 0x67,bVar2,psVar12,bVar3,psVar15,uVar5,CONCAT44(uVar16,1));
    sVar14 = 1;
    if (bVar1 != 0) {
      sVar14 = 1;
      do {
        if (sVar14 < (short)(psVar13[1] - *psVar13)) {
          sVar14 = psVar13[1] - *psVar13;
        }
        psVar13 = psVar13 + 2;
      } while ((short *)(param_2 + 0x10 + (ulong)(bVar1 - 1 >> 1) * 4) != psVar13);
    }
    if (uVar6 != 0) {
      do {
        if (sVar14 < (short)(psVar8[1] - *psVar8)) {
          sVar14 = psVar8[1] - *psVar8;
        }
        psVar8 = psVar8 + 2;
      } while ((short *)(param_2 + 0x2c + (ulong)(uVar6 - 1 >> 1) * 4) != psVar8);
    }
    if (bVar2 != 0) {
      do {
        if (sVar14 < (short)(psVar12[1] - *psVar12)) {
          sVar14 = psVar12[1] - *psVar12;
        }
        psVar12 = psVar12 + 2;
      } while (psVar12 != (short *)(param_2 + 0x40 + (ulong)(bVar2 - 1 >> 1) * 4));
    }
    if (bVar3 != 0) {
      do {
        if (sVar14 < (short)(psVar15[1] - *psVar15)) {
          sVar14 = psVar15[1] - *psVar15;
        }
        psVar15 = psVar15 + 2;
      } while ((short *)(param_2 + 0x5c + (ulong)(bVar3 - 1 >> 1) * 4) != psVar15);
    }
    lVar9 = FT_DivFix(1000,(long)sVar14);
    lVar10 = *(long *)(param_2 + 0x70);
    if (lVar9 < *(long *)(param_2 + 0x70)) {
      lVar10 = lVar9;
    }
    puVar7[0x1eb] = lVar10;
    *(undefined4 *)(puVar7 + 0x1ec) = *(undefined4 *)(param_2 + 0x78);
    uVar5 = *(undefined4 *)(param_2 + 0x7c);
    *(undefined1 (*) [16])(puVar7 + 0x32) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar7 + 0x1ed) = uVar5;
    *(undefined1 (*) [16])(puVar7 + 0x65) = (undefined1  [16])0x0;
  }
  *param_3 = (long)puVar7;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ps_dimension_add_t1stem
                (uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  byte *pbVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long in_FS_OFFSET;
  uint local_48;
  undefined4 uStack_44;
  long local_40;
  
  iVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    if (param_3 == -0x15) {
      param_2 = param_2 + -0x15;
      iVar9 = 3;
      param_3 = 0;
    }
    else {
      iVar9 = 1;
      param_3 = 0;
    }
  }
  uVar7 = *param_1;
  piVar6 = *(int **)(param_1 + 2);
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    piVar3 = piVar6;
    do {
      if ((*piVar3 == param_2) && (piVar3[1] == param_3)) {
        if (uVar8 < uVar7) {
          uVar7 = param_1[4];
          goto joined_r0x001038d9;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar7 != uVar8);
  }
  uVar1 = uVar7 + 1;
  if (param_1[1] < uVar1) {
    uVar7 = uVar7 + 8 & 0xfffffff8;
    piVar6 = (int *)ft_mem_qrealloc(param_4,0xc,param_1[1],uVar7,piVar6,&local_48);
    *(int **)(param_1 + 2) = piVar6;
    uVar5 = (ulong)local_48;
    if (local_48 != 0) goto LAB_0010387c;
    param_1[1] = uVar7;
  }
  *param_1 = uVar1;
  piVar6 = piVar6 + (ulong)uVar1 * 3 + -3;
  *piVar6 = param_2;
  piVar6[1] = param_3;
  piVar6[2] = iVar9;
  uVar7 = param_1[4];
joined_r0x001038d9:
  if (uVar7 == 0) {
    uVar5 = ps_mask_table_alloc(param_1 + 4,param_4,&local_48);
    puVar2 = (uint *)CONCAT44(uStack_44,local_48);
    if ((int)uVar5 != 0) goto LAB_0010387c;
    uVar7 = *puVar2;
  }
  else {
    puVar2 = (uint *)(*(long *)(param_1 + 6) + -0x18 + (ulong)uVar7 * 0x18);
    uVar7 = *puVar2;
  }
  if (uVar7 <= uVar8) {
    uVar5 = ps_mask_ensure(puVar2,uVar8 + 1,param_4);
    if ((int)uVar5 != 0) goto LAB_0010387c;
    *puVar2 = uVar8 + 1;
  }
  pbVar4 = (byte *)((ulong)(uVar8 >> 3) + *(long *)(puVar2 + 2));
  *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)uVar8 & 7));
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar8;
  }
  uVar5 = 0;
LAB_0010387c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void t1_hints_stem(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FT_RoundFix(*param_3);
  uVar3 = FT_RoundFix(param_3[1]);
  if (*(int *)(param_1 + 1) == 0) {
    if (param_2 != 0) {
      param_2 = 1;
    }
    iVar1 = ps_dimension_add_t1stem
                      ((long)param_1 + (ulong)(-param_2 & 0x30) + 0x18,lVar2 >> 0x10 & 0xffffffff,
                       uVar3 >> 0x10 & 0xffffffff,*param_1,0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 1) = iVar1;
    }
  }
  return;
}



void t2_hints_stems(undefined8 *param_1,int param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint local_158;
  long local_148;
  long local_140 [32];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < (int)param_3) {
    if (param_2 != 0) {
      param_2 = 1;
    }
    lVar5 = 0;
    local_158 = param_3;
    do {
      uVar1 = 0x10;
      if ((int)local_158 < 0x11) {
        uVar1 = local_158;
      }
      lVar6 = 0;
      do {
        lVar5 = lVar5 + *(long *)(param_4 + lVar6 * 8);
        lVar2 = FT_RoundFix(lVar5);
        (&local_148)[lVar6] = lVar2 >> 0x10;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)(uVar1 * 2));
      iVar4 = 0;
      plVar3 = local_140;
      do {
        iVar4 = iVar4 + 2;
        *plVar3 = *plVar3 - plVar3[-1];
        plVar3 = plVar3 + 2;
      } while (SBORROW4(iVar4,uVar1 * 2) != (int)(iVar4 + uVar1 * -2) < 0);
      if (*(int *)(param_1 + 1) == 0) {
        plVar3 = &local_148;
        do {
          iVar4 = ps_dimension_add_t1stem
                            ((long)param_1 + (ulong)(-param_2 & 0x30) + 0x18,(int)*plVar3,
                             (int)plVar3[1],*param_1,0);
          if (iVar4 != 0) {
            *(int *)(param_1 + 1) = iVar4;
            break;
          }
          plVar3 = plVar3 + 2;
        } while (plVar3 != &local_148 + (ulong)uVar1 * 2);
      }
      local_158 = local_158 - uVar1;
    } while (0 < (int)local_158);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ps_hints_t1stem3(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint *local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 1) != 0) goto LAB_00103d80;
  uVar2 = *param_1;
  if (*(int *)(param_1 + 2) == 1) {
    puVar7 = &local_4c;
    if (param_2 != 0) {
      param_2 = 1;
    }
    uVar9 = (ulong)(-param_2 & 0x30);
    do {
      lVar5 = FT_RoundFix(param_3[1]);
      uVar6 = FT_RoundFix(*param_3);
      iVar4 = ps_dimension_add_t1stem
                        ((long)param_1 + uVar9 + 0x18,uVar6 >> 0x10 & 0xffffffff,
                         lVar5 >> 0x10 & 0xffffffff,uVar2,puVar7);
      if (iVar4 != 0) goto LAB_00103dad;
      puVar7 = puVar7 + 1;
      param_3 = param_3 + 2;
    } while ((uint *)local_40 != puVar7);
    iVar4 = *(int *)((long)param_1 + uVar9 + 0x38);
    local_58 = *(uint **)((long)param_1 + uVar9 + 0x40);
    if (iVar4 != 0) {
      bVar3 = false;
      puVar7 = local_58;
      do {
        uVar1 = *puVar7;
        if ((((local_4c < uVar1) &&
             (((uint)*(byte *)(*(long *)(puVar7 + 2) + (ulong)(local_4c >> 3)) &
              0x80 >> ((byte)local_4c & 7)) != 0)) ||
            ((local_48 < uVar1 &&
             (((uint)*(byte *)(*(long *)(puVar7 + 2) + (ulong)(local_48 >> 3)) &
              0x80 >> ((byte)local_48 & 7)) != 0)))) ||
           ((local_44 < uVar1 &&
            (((uint)*(byte *)(*(long *)(puVar7 + 2) + (ulong)(local_44 >> 3)) &
             0x80 >> ((byte)local_44 & 7)) != 0)))) {
          if (bVar3) {
            local_58 = puVar7;
          }
          goto LAB_00103d17;
        }
        puVar7 = puVar7 + 6;
        bVar3 = true;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = ps_mask_table_alloc((long)param_1 + uVar9 + 0x38,uVar2,&local_58);
    if (iVar4 == 0) {
LAB_00103d17:
      puVar7 = local_58;
      if (*local_58 <= local_4c) {
        iVar4 = ps_mask_ensure(local_58,local_4c + 1,uVar2);
        if (iVar4 != 0) goto LAB_00103dad;
        *puVar7 = local_4c + 1;
      }
      pbVar8 = (byte *)((ulong)(local_4c >> 3) + *(long *)(puVar7 + 2));
      *pbVar8 = *pbVar8 | (byte)(0x80 >> ((byte)local_4c & 7));
      if (*puVar7 <= local_48) {
        iVar4 = ps_mask_ensure(puVar7,local_48 + 1,uVar2);
        if (iVar4 != 0) goto LAB_00103dad;
        *puVar7 = local_48 + 1;
      }
      pbVar8 = (byte *)((ulong)(local_48 >> 3) + *(long *)(puVar7 + 2));
      *pbVar8 = *pbVar8 | (byte)(0x80 >> ((byte)local_48 & 7));
      if (*puVar7 <= local_44) {
        iVar4 = ps_mask_ensure(puVar7,local_44 + 1,uVar2);
        if (iVar4 != 0) goto LAB_00103dad;
        *puVar7 = local_44 + 1;
      }
      pbVar8 = (byte *)((ulong)(local_44 >> 3) + *(long *)(puVar7 + 2));
      *pbVar8 = *pbVar8 | (byte)(0x80 >> ((byte)local_44 & 7));
      goto LAB_00103d80;
    }
  }
  else {
    iVar4 = 6;
  }
LAB_00103dad:
  *(int *)(param_1 + 1) = iVar4;
LAB_00103d80:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 ps_hints_apply(undefined8 param_1,short *param_2)

{
  undefined8 uVar1;
  
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    uVar1 = ps_hints_apply_part_0();
    return uVar1;
  }
  return 0;
}


