
/* setup_masks_indic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void setup_masks_indic(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0xc0);
  puVar2 = *(uint **)(param_2 + 0x70);
  if (uVar1 != 0) {
    puVar4 = puVar2;
    do {
      puVar5 = puVar4 + 5;
      uVar3 = hb_indic_get_categories(*puVar4);
      *(char *)((long)puVar4 + 0x12) = (char)uVar3;
      *(char *)((long)puVar4 + 0x13) = (char)((ushort)uVar3 >> 8);
      puVar4 = puVar5;
    } while (puVar2 + (ulong)uVar1 * 5 != puVar5);
  }
  return;
}



/* compose_indic(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int, unsigned int*)
    */

bool compose_indic(hb_ot_shape_normalize_context_t *param_1,uint param_2,uint param_3,uint *param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000034;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar3 = (**(code **)(lVar1 + 0x28))
                    (lVar1,CONCAT44(in_register_00000034,param_2),*(undefined8 *)(lVar1 + 0x68));
  if (uVar3 < 0x20) {
    lVar1 = *(long *)(param_1 + 0x18);
    bVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
    if ((1 << (bVar2 & 0x1f) & 0x1c00U) != 0) {
      return false;
    }
  }
  if (param_2 == 0x9af && param_3 == 0x9bc) {
    *param_4 = 0x9df;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    *param_4 = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar4 = (**(code **)(lVar1 + 0x40))
                        (lVar1,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0x80));
      return iVar4 != 0;
    }
  }
  return param_2 == 0x9af && param_3 == 0x9bc;
}



/* preprocess_text_indic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void preprocess_text_indic(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  if (*(char *)(*(long *)(param_1 + 0x88) + 9) != '\0') {
    return;
  }
  _hb_preprocess_text_vowel_constraints(param_1,param_2,param_3);
  return;
}



/* data_destroy_indic(void*) */

void data_destroy_indic(void *param_1)

{
  free(param_1);
  return;
}



/* override_features_indic(hb_ot_shape_planner_t*) */

void override_features_indic(hb_ot_shape_planner_t *param_1)

{
  hb_ot_map_builder_t::add_feature(param_1 + 0x28,0x6c696761,1,0);
  hb_ot_map_builder_t::add_pause
            ((uint)(param_1 + 0x28),
             (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  return;
}



/* collect_features_indic(hb_ot_shape_planner_t*) */

void collect_features_indic(hb_ot_shape_planner_t *param_1)

{
  hb_ot_shape_planner_t *phVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = "tkunM";
  phVar1 = param_1 + 0x28;
  pcVar4 = "tkunM";
  uVar5 = (uint)phVar1;
  hb_ot_map_builder_t::add_pause
            (uVar5,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_feature(phVar1,0x6c6f636c,0x41,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x63636d70,0x41,1);
  hb_ot_map_builder_t::add_pause
            (uVar5,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    pcVar2 = pcVar4 + 4;
    uVar3 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 8;
    hb_ot_map_builder_t::add_feature(phVar1,uVar3,*(undefined4 *)pcVar2,1);
    hb_ot_map_builder_t::add_pause
              (uVar5,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  } while (pcVar4 != "tiniL");
  hb_ot_map_builder_t::add_pause
            (uVar5,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    pcVar4 = pcVar6 + 0x5c;
    pcVar2 = pcVar6 + 0x58;
    pcVar6 = pcVar6 + 8;
    hb_ot_map_builder_t::add_feature(phVar1,*(undefined4 *)pcVar2,*(undefined4 *)pcVar4,1);
  } while (pcVar6 != "fvbaL");
  return;
}



/* decompose_indic(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int*, unsigned
   int*) */

bool decompose_indic(hb_ot_shape_normalize_context_t *param_1,uint param_2,uint *param_3,
                    uint *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = false;
  if (param_2 < 0x9de) {
    if (0x9db < param_2) {
      return bVar2;
    }
    if (param_2 == 0x931) {
      return bVar2;
    }
  }
  else if (param_2 == 0xb94) {
    return bVar2;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar3 = (**(code **)(lVar1 + 0x48))(lVar1);
  return iVar3 != 0;
}



/* initial_reordering_consonant_syllable(hb_ot_shape_plan_t const*, hb_face_t*, hb_buffer_t*,
   unsigned int, unsigned int) [clone .isra.0] */

void initial_reordering_consonant_syllable
               (hb_ot_shape_plan_t *param_1,hb_face_t *param_2,hb_buffer_t *param_3,uint param_4,
               uint param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint *puVar5;
  hb_ot_shape_plan_t hVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  uint uVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  char *pcVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined1 uVar40;
  undefined2 *puVar41;
  uint uVar42;
  undefined4 *puVar43;
  long in_FS_OFFSET;
  bool bVar44;
  uint local_80;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  uVar42 = param_4 + 1;
  lVar8 = *(long *)(param_3 + 0x70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (ulong)param_4;
  lVar16 = uVar15 * 0x14;
  puVar25 = (undefined8 *)(lVar8 + lVar16);
  uVar34 = (uint)param_3;
  if (*(int *)(param_3 + 0x3c) == 0x4b6e6461) {
    if (param_5 < param_4 + 3) {
      iVar13 = *(int *)(*(long *)param_1 + 0x10);
    }
    else {
      if (((((*(byte *)((long)puVar25 + 0xc) & 0x20) == 0) &&
           (*(char *)((long)puVar25 + 0x12) == '\x0f')) &&
          (puVar18 = (undefined8 *)(lVar8 + (ulong)uVar42 * 0x14),
          (*(byte *)((long)puVar18 + 0xc) & 0x20) == 0)) &&
         (((*(char *)((long)puVar18 + 0x12) == '\x04' &&
           (puVar39 = (undefined8 *)(lVar8 + (ulong)(param_4 + 2) * 0x14),
           (*(byte *)((long)puVar39 + 0xc) & 0x20) == 0)) &&
          (*(char *)((long)puVar39 + 0x12) == '\x06')))) {
        hb_buffer_t::merge_clusters_impl(uVar34,uVar42);
        local_58 = *puVar18;
        uStack_50 = puVar18[1];
        local_48 = *(undefined4 *)(puVar18 + 2);
        uVar9 = puVar39[1];
        *puVar18 = *puVar39;
        puVar18[1] = uVar9;
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar39 + 2);
        *puVar39 = local_58;
        puVar39[1] = uStack_50;
        *(undefined4 *)(puVar39 + 2) = local_48;
      }
      iVar13 = *(int *)(*(long *)param_1 + 0x10);
      if (*(int *)(param_1 + 0x90) != 0) {
        iVar13 = *(int *)(*(long *)param_1 + 0x10);
        if (iVar13 != 0) goto LAB_0010113b;
        iVar13 = 0;
        goto LAB_00100b27;
      }
    }
LAB_00100333:
    if ((iVar13 == 2) && (*(char *)((long)puVar25 + 0x12) == '\x0e')) {
      uVar31 = uVar42;
      if (uVar42 < param_5) {
        lVar24 = lVar8 + (ulong)uVar42 * 0x14;
        do {
          if ((((*(byte *)(lVar24 + 0xc) & 0x20) != 0) || (0x1f < *(byte *)(lVar24 + 0x12))) ||
             ((1 << (*(byte *)(lVar24 + 0x12) & 0x1f) & 0x60U) == 0)) break;
          uVar31 = uVar31 + 1;
          lVar24 = lVar24 + 0x14;
        } while (uVar31 < param_5);
      }
      goto LAB_0010107b;
    }
  }
  else {
    iVar13 = *(int *)(*(long *)param_1 + 0x10);
    if ((*(int *)(param_1 + 0x90) == 0) || (param_5 < param_4 + 3)) goto LAB_00100333;
    iVar13 = *(int *)(*(long *)param_1 + 0x10);
    if (iVar13 == 0) {
LAB_00100b27:
      lVar24 = lVar8 + (ulong)(param_4 + 2) * 0x14;
      bVar11 = *(byte *)(lVar24 + 0x12);
      if ((((*(byte *)(lVar24 + 0xc) & 0x20) != 0) || (0x1f < bVar11)) ||
         ((1 << (bVar11 & 0x1f) & 0x60U) == 0)) {
        local_58 = CONCAT44(*(undefined4 *)(lVar8 + (ulong)uVar42 * 0x14),*(undefined4 *)puVar25);
LAB_00100b5f:
        uVar31 = param_4 + 2;
        uStack_50 = CONCAT44(uStack_50._4_4_,iVar13);
        puVar41 = *(undefined2 **)(param_1 + 0x10);
        puVar1 = puVar41 + (ulong)*(uint *)(param_1 + 0x18) * 6;
        if (puVar41 != puVar1) {
          do {
            iVar13 = hb_ot_layout_lookup_would_substitute
                               (param_2,*puVar41,&local_58,2,param_1[0x20]);
            if (iVar13 != 0) goto LAB_00100be9;
            puVar41 = puVar41 + 6;
          } while (puVar1 != puVar41);
          if (*(int *)(*(long *)param_1 + 0x10) == 1) {
            lVar33 = *(long *)(param_1 + 0x10);
            lVar24 = lVar33 + (ulong)*(uint *)(param_1 + 0x18) * 0xc;
            for (; lVar33 != lVar24; lVar33 = lVar33 + 0xc) {
              iVar13 = hb_ot_layout_lookup_would_substitute();
              if (iVar13 != 0) goto LAB_00100be9;
            }
          }
        }
      }
    }
    else {
LAB_0010113b:
      if (iVar13 != 1) goto LAB_00100333;
      piVar3 = (int *)(lVar8 + (ulong)(param_4 + 2) * 0x14);
      if (*(char *)((long)piVar3 + 0x12) == '\x06') {
        local_58 = CONCAT44(*(undefined4 *)(lVar8 + (ulong)uVar42 * 0x14),*(undefined4 *)puVar25);
        iVar13 = *piVar3;
        goto LAB_00100b5f;
      }
    }
  }
  bVar44 = false;
  uVar31 = param_4;
  uVar22 = param_5;
  goto LAB_00100344;
LAB_001004c0:
  do {
    bVar11 = *(byte *)((long)puVar18 + 0x12);
    if ((*(byte *)((long)puVar18 + 0xc) & 0x20) == 0) {
      if (bVar11 < 0x20) {
        if ((1 << (bVar11 & 0x1f) & 0x58c06U) == 0) goto LAB_001004a0;
        if ((uVar12 < uVar14) && (bVar11 != 4)) {
          local_58 = *puVar39;
          uStack_50 = puVar39[1];
          local_48 = *(undefined4 *)(puVar39 + 2);
          memmove(puVar39,(void *)(lVar8 + (ulong)(uVar12 + 1) * 0x14),
                  (ulong)(uVar14 - uVar12) * 0x14);
          *puVar18 = local_58;
          puVar18[1] = uStack_50;
          *(undefined4 *)(puVar18 + 2) = local_48;
        }
        break;
      }
    }
    else {
LAB_001004a0:
      if ((*(int *)(param_3 + 0x3c) == 0x4b6e6461) && (bVar11 == 4)) break;
    }
    uVar14 = uVar14 - 1;
    puVar18 = (undefined8 *)((long)puVar18 + -0x14);
  } while (uVar12 < uVar14);
  goto LAB_00100550;
LAB_00100be9:
  uVar19 = (ulong)uVar31;
  if (uVar31 < param_5) {
    lVar24 = lVar8 + uVar19 * 0x14;
    do {
      uVar31 = (uint)uVar19;
      if ((((*(byte *)(lVar24 + 0xc) & 0x20) != 0) || (0x1f < *(byte *)(lVar24 + 0x12))) ||
         ((1 << (*(byte *)(lVar24 + 0x12) & 0x1f) & 0x60U) == 0)) break;
      uVar31 = uVar31 + 1;
      uVar19 = (ulong)uVar31;
      lVar24 = lVar24 + 0x14;
    } while (uVar31 < param_5);
  }
LAB_0010107b:
  bVar44 = true;
  uVar22 = param_4;
LAB_00100344:
  uVar17 = (ulong)uVar22;
  uVar22 = param_5 - 1;
  bVar10 = false;
  puVar18 = (undefined8 *)(lVar8 + (ulong)uVar22 * 0x14);
  puVar39 = puVar18;
  uVar19 = (ulong)param_5;
  do {
    uVar12 = (uint)uVar17;
    bVar11 = *(byte *)((long)puVar39 + 0x12);
    uVar30 = (int)uVar19 - 1;
    uVar21 = (ulong)uVar30;
    if ((*(byte *)((long)puVar39 + 0xc) & 0x20) == 0) {
      if (bVar11 < 0x20) {
        if ((1 << (bVar11 & 0x1f) & 0x58c06U) == 0) goto LAB_001003b6;
        uVar17 = uVar21;
        if (*(char *)((long)puVar39 + 0x13) == '\b') {
          bVar10 = true;
        }
        else {
          bVar10 = (bool)(bVar10 | *(char *)((long)puVar39 + 0x13) != '\v');
          if (bVar10) goto LAB_001003dc;
        }
      }
    }
    else {
LAB_001003b6:
      if (((param_4 < uVar30) && (bVar11 == 6)) &&
         (*(char *)(lVar8 + 0x12 + (ulong)((int)uVar19 - 2) * 0x14) == '\x04')) break;
    }
    uVar12 = (uint)uVar17;
    puVar39 = (undefined8 *)((long)puVar39 + -0x14);
    uVar19 = uVar21;
  } while (uVar31 < uVar30);
  uVar19 = (ulong)(uVar12 + 1);
  uVar21 = (ulong)uVar12;
LAB_001003dc:
  uVar12 = (uint)uVar21;
  uVar30 = param_4;
  if (bVar44) {
    if (param_4 == uVar12) {
      bVar44 = 2 < uVar31 - param_4;
      goto joined_r0x00101125;
    }
    if (param_4 < uVar12) goto LAB_001003f8;
    if (uVar12 < param_5) {
      *(undefined1 *)(lVar8 + 0x13 + uVar21 * 0x14) = 4;
    }
LAB_00100431:
    *(undefined1 *)((long)puVar25 + 0x13) = 1;
  }
  else if (param_4 < uVar12) {
LAB_001003f8:
    do {
      lVar24 = lVar8 + (ulong)uVar30 * 0x14;
      bVar11 = *(byte *)(lVar24 + 0x13);
      if (3 < bVar11) {
        bVar11 = 3;
      }
      uVar30 = uVar30 + 1;
      *(byte *)(lVar24 + 0x13) = bVar11;
    } while (uVar30 < uVar12);
joined_r0x00101125:
    if (uVar12 < param_5) {
      *(undefined1 *)(lVar8 + 0x13 + uVar21 * 0x14) = 4;
    }
    if (bVar44) goto LAB_00100431;
  }
  else if (uVar12 < param_5) {
    *(undefined1 *)(lVar8 + 0x13 + uVar21 * 0x14) = 4;
  }
  uVar30 = (uint)uVar19;
  uVar31 = param_5;
  if (param_1[8] == (hb_ot_shape_plan_t)0x0) {
LAB_00100550:
    if (param_4 < param_5) {
LAB_00100559:
      uVar17 = (ulong)param_4;
      cVar35 = '\0';
      puVar18 = puVar25;
      do {
        while( true ) {
          bVar11 = *(byte *)((long)puVar18 + 0x12);
          uVar12 = (uint)uVar17;
          if (0x1f < bVar11) break;
          if ((1 << (bVar11 & 0x1f) & 0x11078U) == 0) {
            cVar7 = *(char *)((long)puVar18 + 0x13);
            if (cVar7 != '\r') {
              if (((bVar11 == 0xd) && (param_4 < uVar12)) &&
                 (lVar24 = lVar8 + (ulong)(uVar12 - 1) * 0x14, *(char *)(lVar24 + 0x12) == '\b')) {
                *(char *)(lVar24 + 0x13) = cVar7;
              }
              goto LAB_001005b3;
            }
          }
          else {
            *(char *)((long)puVar18 + 0x13) = cVar35;
            if (*(short *)((long)puVar18 + 0x12) == 0x204) {
              do {
                if ((uint)uVar17 <= param_4) goto LAB_00100593;
                uVar17 = (ulong)((uint)uVar17 - 1);
                cVar7 = *(char *)(lVar8 + 0x13 + uVar17 * 0x14);
              } while (cVar7 == '\x02');
              *(char *)((long)puVar18 + 0x13) = cVar7;
            }
          }
LAB_00100593:
          uVar17 = (ulong)(uVar12 + 1);
          puVar18 = (undefined8 *)((long)puVar18 + 0x14);
          if (param_5 == uVar12 + 1) goto LAB_001005c3;
        }
        cVar7 = *(char *)((long)puVar18 + 0x13);
        if (*(char *)((long)puVar18 + 0x13) == '\r') goto LAB_00100593;
LAB_001005b3:
        cVar35 = cVar7;
        uVar17 = (ulong)(uVar12 + 1);
        puVar18 = (undefined8 *)((long)puVar18 + 0x14);
      } while (param_5 != uVar12 + 1);
LAB_001005c3:
      if (uVar30 < param_5) goto LAB_001005c8;
    }
    else {
      if (param_5 <= uVar30) goto LAB_00101419;
LAB_001005c8:
      pbVar27 = (byte *)(lVar8 + 0xc + uVar19 * 0x14);
      do {
        bVar11 = pbVar27[6];
        uVar30 = (uint)uVar19;
        if ((*pbVar27 & 0x20) == 0) {
          if (bVar11 < 0x20) {
            uVar12 = 1 << (bVar11 & 0x1f);
            if ((uVar12 & 0x58c06) == 0) goto LAB_00100601;
            uVar12 = (int)uVar21 + 1;
            if (uVar12 < uVar30) {
              lVar24 = lVar8 + (ulong)uVar12 * 0x14;
              do {
                if (*(byte *)(lVar24 + 0x13) < 0xd) {
                  *(byte *)(lVar24 + 0x13) = pbVar27[7];
                }
                lVar24 = lVar24 + 0x14;
              } while (lVar8 + 0x14 + ((ulong)uVar12 + (ulong)((uVar30 - 2) - (int)uVar21)) * 0x14
                       != lVar24);
            }
LAB_00100608:
            uVar21 = uVar19;
          }
        }
        else if (bVar11 < 0x20) {
          uVar12 = 1 << (bVar11 & 0x1f);
LAB_00100601:
          if ((uVar12 & 0x2080) != 0) goto LAB_00100608;
        }
        uVar19 = (ulong)(uVar30 + 1);
        pbVar27 = pbVar27 + 0x14;
      } while (param_5 != uVar30 + 1);
    }
    uVar40 = *(undefined1 *)((long)puVar25 + 0xf);
    if (param_4 < param_5) {
      puVar28 = (undefined1 *)(lVar8 + 0xf + lVar16);
      iVar13 = 0;
      do {
        *puVar28 = (char)iVar13;
        iVar13 = iVar13 + 1;
        puVar28 = puVar28 + 0x14;
      } while (param_5 - param_4 != iVar13);
      uVar30 = param_5 - param_4;
      if (uVar30 != 1) goto LAB_00100660;
      goto LAB_00100740;
    }
    uVar30 = param_5 - param_4;
    if (1 < uVar30) {
LAB_00100660:
      uVar12 = 1;
      puVar18 = puVar25;
      do {
        uVar19 = (ulong)uVar12;
        do {
          uVar14 = (uint)uVar19;
          uVar26 = uVar14 - 1;
          uVar17 = (ulong)uVar26;
          if (*(byte *)((long)puVar25 + uVar17 * 0x14 + 0x13) <= *(byte *)((long)puVar18 + 0x27)) {
            if (uVar12 == uVar14) goto LAB_0010070e;
            break;
          }
          uVar19 = uVar17;
          uVar14 = uVar26;
        } while (uVar26 != 0);
        local_58 = *(undefined8 *)((long)puVar18 + 0x14);
        uStack_50 = *(undefined8 *)((long)puVar18 + 0x1c);
        puVar39 = (undefined8 *)((long)puVar25 + uVar19 * 0x14);
        local_48 = *(undefined4 *)((long)puVar18 + 0x24);
        memmove((undefined4 *)((long)puVar25 + (ulong)(uVar14 + 1) * 0x14),puVar39,
                (ulong)(uVar12 - uVar14) * 0x14);
        *puVar39 = local_58;
        puVar39[1] = uStack_50;
        *(undefined4 *)(puVar39 + 2) = local_48;
LAB_0010070e:
        uVar12 = uVar12 + 1;
        puVar18 = (undefined8 *)((long)puVar18 + 0x14);
      } while (uVar12 != uVar30);
      goto LAB_00100737;
    }
  }
  else {
    if (uVar30 < param_5) {
      puVar39 = (undefined8 *)(lVar8 + uVar19 * 0x14);
      uVar17 = uVar19;
      do {
        uVar12 = (uint)uVar17;
        if (*(char *)((long)puVar39 + 0x12) == '\x04') {
          if (uVar12 < uVar22) {
            uVar14 = uVar22;
            goto LAB_001004c0;
          }
          break;
        }
        uVar17 = (ulong)(uVar12 + 1);
        puVar39 = (undefined8 *)((long)puVar39 + 0x14);
      } while (param_5 != uVar12 + 1);
      goto LAB_00100550;
    }
    if (param_4 < param_5) goto LAB_00100559;
LAB_00101419:
    uVar40 = *(undefined1 *)((long)puVar25 + 0xf);
    uVar30 = param_5 - param_4;
    if (1 < uVar30) goto LAB_00100660;
LAB_00100737:
    if (param_4 < param_5) {
LAB_00100740:
      pcVar29 = (char *)(lVar8 + 0x13 + lVar16);
      uVar17 = (ulong)param_5;
      uVar19 = (ulong)param_4;
      uVar21 = (ulong)param_5;
      do {
        while( true ) {
          uVar32 = uVar19;
          uVar19 = uVar32;
          uVar12 = (uint)uVar21;
          if (*pcVar29 == '\x04') goto LAB_00100790;
          uVar12 = (uint)uVar32;
          if ((*pcVar29 != '\x02') || (uVar21 = uVar32, param_5 != (uint)uVar17)) break;
          uVar19 = (ulong)(uVar12 + 1);
          pcVar29 = pcVar29 + 0x14;
          uVar17 = uVar32;
          if (param_5 == uVar12 + 1) goto LAB_00100790;
        }
        uVar31 = uVar12 + 1;
        uVar19 = (ulong)uVar31;
        pcVar29 = pcVar29 + 0x14;
        uVar12 = (uint)uVar21;
      } while (param_5 != uVar31);
LAB_00100790:
      local_80 = (uint)uVar17;
      uVar31 = (uint)uVar19;
      if (local_80 < uVar12) {
        uVar26 = uVar12 + 1;
        uVar14 = *(uint *)(param_3 + 0x60);
        if (uVar14 < local_80) {
          uVar37 = uVar14;
          uVar23 = uVar26;
          if (uVar26 <= uVar14) goto LAB_00100ea0;
        }
        else {
          uVar37 = local_80;
          uVar23 = uVar14;
          if (uVar26 <= uVar14) {
            uVar23 = uVar26;
          }
LAB_00100ea0:
          if ((uVar37 + 2 <= uVar23) && (uVar14 = uVar23 - 1, uVar37 < uVar14)) {
            puVar25 = (undefined8 *)(*(long *)(param_3 + 0x70) + (ulong)uVar14 * 0x14);
            puVar18 = (undefined8 *)(*(long *)(param_3 + 0x70) + (ulong)uVar37 * 0x14);
            do {
              local_58 = *puVar25;
              uStack_50 = puVar25[1];
              uVar36 = uVar14 - 1;
              local_48 = *(undefined4 *)(puVar25 + 2);
              uVar9 = puVar18[1];
              *puVar25 = *puVar18;
              puVar25[1] = uVar9;
              *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(puVar18 + 2);
              *puVar18 = local_58;
              puVar18[1] = uStack_50;
              *(undefined4 *)(puVar18 + 2) = local_48;
              uVar38 = (uVar23 + uVar37) - uVar14;
              puVar25 = (undefined8 *)((long)puVar25 + -0x14);
              puVar18 = (undefined8 *)((long)puVar18 + 0x14);
              uVar14 = uVar36;
            } while (uVar38 < uVar36);
          }
        }
        if (param_3[0x5b] != (hb_buffer_t)0x0) {
          uVar14 = *(uint *)(param_3 + 0x60);
          if (uVar14 < local_80) {
            uVar37 = uVar14;
            if (uVar14 < uVar26) goto LAB_00100f68;
          }
          else {
            uVar37 = local_80;
            if (uVar14 < uVar26) {
              uVar26 = uVar14;
            }
          }
          if ((uVar37 + 2 <= uVar26) && (uVar37 < uVar26 - 1)) {
            iVar13 = (uVar26 - 1) + uVar37;
            puVar25 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)(uVar26 - 1) * 0x14);
            puVar18 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar37 * 0x14);
            do {
              local_58 = *puVar25;
              uStack_50 = puVar25[1];
              uVar37 = uVar37 + 1;
              local_48 = *(undefined4 *)(puVar25 + 2);
              uVar9 = puVar18[1];
              *puVar25 = *puVar18;
              puVar25[1] = uVar9;
              *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(puVar18 + 2);
              *puVar18 = local_58;
              puVar18[1] = uStack_50;
              *(undefined4 *)(puVar18 + 2) = local_48;
              puVar25 = (undefined8 *)((long)puVar25 + -0x14);
              puVar18 = (undefined8 *)((long)puVar18 + 0x14);
            } while (uVar37 < iVar13 - uVar37);
          }
        }
LAB_00100f68:
        do {
          while( true ) {
            uVar14 = (int)uVar17 + 1;
            bVar11 = *(byte *)(lVar8 + 0x12 + uVar17 * 0x14);
            uVar17 = (ulong)uVar14;
            if ((0x1f < bVar11) || ((1 << (bVar11 & 0x1f) & 0x2080U) == 0)) break;
            uVar26 = *(uint *)(param_3 + 0x60);
            uVar37 = local_80;
            if (uVar26 <= local_80) {
              uVar37 = uVar26;
            }
            if (uVar14 < uVar26) {
              uVar26 = uVar14;
            }
            if ((uVar37 + 2 <= uVar26) && (uVar23 = uVar26 - 1, uVar37 < uVar23)) {
              puVar25 = (undefined8 *)(*(long *)(param_3 + 0x70) + (ulong)uVar23 * 0x14);
              puVar18 = (undefined8 *)(*(long *)(param_3 + 0x70) + (ulong)uVar37 * 0x14);
              do {
                local_58 = *puVar25;
                uStack_50 = puVar25[1];
                uVar23 = uVar23 - 1;
                local_48 = *(undefined4 *)(puVar25 + 2);
                uVar9 = puVar18[1];
                *puVar25 = *puVar18;
                puVar25[1] = uVar9;
                *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(puVar18 + 2);
                *puVar18 = local_58;
                puVar18[1] = uStack_50;
                *(undefined4 *)(puVar18 + 2) = local_48;
                puVar25 = (undefined8 *)((long)puVar25 + -0x14);
                puVar18 = (undefined8 *)((long)puVar18 + 0x14);
              } while (((uVar26 - 1) + uVar37) - uVar23 < uVar23);
            }
            if (param_3[0x5b] != (hb_buffer_t)0x0) {
              uVar26 = *(uint *)(param_3 + 0x60);
              if (uVar26 <= local_80) {
                local_80 = uVar26;
              }
              if (uVar14 < uVar26) {
                uVar26 = uVar14;
              }
              if ((local_80 + 2 <= uVar26) && (uVar37 = uVar26 - 1, local_80 < uVar37)) {
                puVar25 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar37 * 0x14);
                puVar18 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)local_80 * 0x14);
                do {
                  local_58 = *puVar25;
                  uStack_50 = puVar25[1];
                  uVar37 = uVar37 - 1;
                  local_48 = *(undefined4 *)(puVar25 + 2);
                  uVar9 = puVar18[1];
                  *puVar25 = *puVar18;
                  puVar25[1] = uVar9;
                  *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(puVar18 + 2);
                  *puVar18 = local_58;
                  puVar18[1] = uStack_50;
                  *(undefined4 *)(puVar18 + 2) = local_48;
                  puVar25 = (undefined8 *)((long)puVar25 + -0x14);
                  puVar18 = (undefined8 *)((long)puVar18 + 0x14);
                } while (((local_80 - 1) + uVar26) - uVar37 < uVar37);
              }
            }
            local_80 = uVar14;
            if (uVar12 < uVar14) goto LAB_00100798;
          }
        } while (uVar14 <= uVar12);
      }
LAB_00100798:
      if ((param_1[8] == (hb_ot_shape_plan_t)0x0) && (uVar30 < 0x80)) {
        if (uVar31 < param_5) {
          pbVar27 = (byte *)(lVar8 + 0xf + uVar19 * 0x14);
          do {
            while( true ) {
              bVar11 = *pbVar27;
              uVar14 = (uint)uVar19;
              uVar17 = uVar19;
              uVar30 = uVar14;
              uVar12 = uVar14;
              if (bVar11 != 0xff) break;
LAB_00100d70:
              uVar19 = (ulong)(uVar14 + 1);
              pbVar27 = pbVar27 + 0x14;
              if (param_5 == uVar14 + 1) goto LAB_001007d8;
            }
            while (uVar26 = bVar11 + param_4, uVar26 != uVar14) {
              uVar21 = (ulong)uVar26;
              if (uVar26 < (uint)uVar19) {
                uVar19 = uVar21;
              }
              if ((uint)uVar17 < uVar26) {
                uVar17 = uVar21;
              }
              lVar24 = lVar8 + uVar21 * 0x14;
              bVar11 = *(byte *)(lVar24 + 0xf);
              *(undefined1 *)(lVar24 + 0xf) = 0xff;
              uVar30 = (uint)uVar19;
              uVar12 = (uint)uVar17;
            }
            if (uVar30 < uVar31) {
              uVar30 = uVar31;
            }
            if ((uVar12 + 1) - uVar30 < 2) goto LAB_00100d70;
            uVar19 = (ulong)(uVar14 + 1);
            pbVar27 = pbVar27 + 0x14;
            hb_buffer_t::merge_clusters_impl(uVar34,uVar30);
          } while (param_5 != uVar14 + 1);
        }
      }
      else if (1 < param_5 - uVar31) {
        hb_buffer_t::merge_clusters_impl(uVar34,uVar31);
      }
    }
  }
LAB_001007d8:
  if (param_4 < param_5) {
    puVar28 = (undefined1 *)(lVar8 + 0xf + lVar16);
    lVar24 = ((uVar22 - param_4) + uVar15) * 0x14;
    puVar4 = (undefined1 *)(lVar8 + 0x23 + lVar24);
    if (((int)puVar4 - (int)puVar28 & 4U) == 0) goto LAB_00100820;
    *puVar28 = uVar40;
    for (puVar28 = puVar28 + 0x14; puVar4 != puVar28; puVar28 = puVar28 + 0x28) {
LAB_00100820:
      *puVar28 = uVar40;
      puVar28[0x14] = uVar40;
    }
    puVar20 = (uint *)(lVar8 + 4 + lVar16);
    do {
      if (*(char *)((long)puVar20 + 0xf) != '\x01') break;
      *puVar20 = *puVar20 | *(uint *)(param_1 + 0x90);
      puVar20 = puVar20 + 5;
    } while (puVar20 != (uint *)(lVar8 + 0x18 + lVar24));
  }
  hVar6 = param_1[8];
  uVar34 = *(uint *)(param_1 + 0xa4);
  if ((hVar6 == (hb_ot_shape_plan_t)0x0) && (*(int *)(*(long *)param_1 + 0x14) == 0)) {
    uVar34 = uVar34 | *(uint *)(param_1 + 0x9c);
  }
  if (param_4 < uVar31) {
    puVar20 = (uint *)(lVar8 + 4 + lVar16);
    puVar5 = (uint *)(lVar8 + 0x18 + (((uVar31 - param_4) - 1) + uVar15) * 0x14);
    if (((int)puVar5 - (int)puVar20 & 4U) != 0) {
      *puVar20 = *puVar20 | uVar34;
      puVar20 = puVar20 + 5;
      if (puVar20 == puVar5) goto LAB_001008c6;
    }
    do {
      *puVar20 = *puVar20 | uVar34;
      puVar20[5] = puVar20[5] | uVar34;
      puVar20 = puVar20 + 10;
    } while (puVar20 != puVar5);
  }
LAB_001008c6:
  uVar34 = uVar31 + 1;
  uVar22 = *(uint *)(param_1 + 0x9c) | *(uint *)(param_1 + 0xa0) | *(uint *)(param_1 + 0xa8);
  if (uVar34 < param_5) {
    lVar16 = lVar8 + (ulong)uVar34 * 0x14;
    lVar24 = lVar8 + 0x14 + ((ulong)((param_5 - 2) - uVar31) + (ulong)uVar34) * 0x14;
    if (((int)lVar24 - (int)lVar16 & 4U) != 0) {
      *(uint *)(lVar16 + 4) = *(uint *)(lVar16 + 4) | uVar22;
      lVar16 = lVar16 + 0x14;
      if (lVar16 == lVar24) goto LAB_0010092f;
    }
    do {
      *(uint *)(lVar16 + 4) = *(uint *)(lVar16 + 4) | uVar22;
      *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | uVar22;
      lVar16 = lVar16 + 0x28;
    } while (lVar16 != lVar24);
  }
LAB_0010092f:
  if (((hVar6 != (hb_ot_shape_plan_t)0x0) && (*(int *)(param_3 + 0x3c) == 0x44657661)) &&
     (uVar42 < uVar31)) {
    lVar16 = lVar8 + (ulong)uVar42 * 0x14;
    uVar22 = param_4 + 2;
LAB_001010f0:
    do {
      lVar24 = lVar8 + (ulong)(uVar22 - 2) * 0x14;
      if ((*(char *)(lVar24 + 0x12) == '\x0f') && (*(char *)(lVar16 + 0x12) == '\x04')) {
        if ((uVar31 != uVar22) &&
           (*(char *)(lVar16 + (ulong)uVar42 * -0x14 + 0x12 + (ulong)(param_4 + 2) * 0x14) == '\x06'
           )) {
          lVar16 = lVar16 + 0x14;
          uVar22 = uVar22 + 1;
          goto LAB_001010f0;
        }
        puVar20 = (uint *)(lVar24 + 4);
        *puVar20 = *puVar20 | *(uint *)(param_1 + 0x9c);
        *(uint *)(lVar16 + 4) = *(uint *)(lVar16 + 4) | *(uint *)(param_1 + 0x9c);
      }
      lVar16 = lVar16 + 0x14;
      bVar44 = uVar31 != uVar22;
      uVar22 = uVar22 + 1;
    } while (bVar44);
  }
  if ((*(int *)(param_1 + 0x98) != 0) && (uVar22 = uVar31 + 2, uVar22 < param_5)) {
    puVar43 = (undefined4 *)(lVar8 + (ulong)uVar22 * 0x14);
    do {
      puVar41 = *(undefined2 **)(param_1 + 0x28);
      puVar2 = (undefined4 *)(lVar8 + (ulong)uVar34 * 0x14);
      local_58 = CONCAT44(*puVar43,*puVar2);
      puVar1 = puVar41 + (ulong)*(uint *)(param_1 + 0x30) * 6;
      for (; puVar41 != puVar1; puVar41 = puVar41 + 6) {
        iVar13 = hb_ot_layout_lookup_would_substitute(param_2,*puVar41,&local_58,2,param_1[0x38]);
        if (iVar13 != 0) {
          puVar20 = puVar2 + 1;
          *puVar20 = *puVar20 | *(uint *)(param_1 + 0x98);
          puVar43[1] = puVar43[1] | *(uint *)(param_1 + 0x98);
          goto LAB_0010095d;
        }
      }
      puVar43 = puVar43 + 5;
      uVar34 = uVar34 + 1;
    } while (puVar43 !=
             (undefined4 *)(lVar8 + 0x14 + ((ulong)uVar22 + (ulong)((param_5 - 3) - uVar31)) * 0x14)
            );
  }
LAB_0010095d:
  if (uVar42 < param_5) {
    lVar16 = lVar8 + (ulong)uVar42 * 0x14;
    do {
      bVar11 = *(byte *)(lVar16 + 0x12);
      if ((((*(byte *)(lVar16 + 0xc) & 0x20) == 0) && (bVar11 < 0x20)) &&
         ((1 << (bVar11 & 0x1f) & 0x60U) != 0)) {
        lVar24 = lVar8 + (ulong)(uVar42 - 1) * 0x14;
        uVar34 = uVar42;
        while( true ) {
          uVar34 = uVar34 - 1;
          if (bVar11 == 5) {
            *(uint *)(lVar24 + 4) = *(uint *)(lVar24 + 4) & ~*(uint *)(param_1 + 0xa4);
          }
          if ((uVar34 <= param_4) ||
             ((((*(byte *)(lVar24 + 0xc) & 0x20) == 0 && (*(byte *)(lVar24 + 0x12) < 0x20)) &&
              ((1 << (*(byte *)(lVar24 + 0x12) & 0x1f) & 0x58c06U) != 0)))) break;
          lVar24 = lVar24 + -0x14;
        }
      }
      uVar42 = uVar42 + 1;
      lVar16 = lVar16 + 0x14;
    } while (param_5 != uVar42);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* final_reordering_indic(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8
final_reordering_indic(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  bool bVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  long in_FS_OFFSET;
  bool bVar34;
  undefined8 *local_90;
  uint local_68;
  
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_3 + 0x60) != 0) {
    cVar10 = hb_buffer_t::message(param_3,param_2,"start reordering indic final");
    if (cVar10 != '\0') {
      uVar3 = *(uint *)(param_3 + 0x60);
      if (uVar3 != 0) {
        uVar30 = 0;
        lVar33 = *(long *)(param_3 + 0x70);
        pcVar14 = (char *)(lVar33 + 0x23);
        do {
          uVar30 = uVar30 + 1;
          if (uVar3 == uVar30) break;
          cVar10 = *pcVar14;
          pcVar14 = pcVar14 + 0x14;
        } while (*(char *)(lVar33 + 0xf) == cVar10);
        uVar19 = 0;
LAB_001015c0:
        plVar7 = *(long **)(param_1 + 0x88);
        iVar4 = *(int *)((long)plVar7 + 0xc);
        uVar13 = (uint)uVar19;
        uVar27 = (uint)param_3;
        uVar18 = uVar19;
        if (iVar4 != 0) {
          if (uVar30 <= uVar13) {
            bVar34 = (int)plVar7[0x13] != 0;
            goto LAB_00101f8f;
          }
          piVar1 = (int *)(lVar33 + 0x14 + (((uVar30 - 1) - uVar13) + uVar19) * 0x14);
          piVar16 = (int *)(lVar33 + uVar19 * 0x14);
          do {
            while ((iVar4 == *piVar16 && ((~*(ushort *)(piVar16 + 3) & 0x60) == 0))) {
              *(undefined1 *)((long)piVar16 + 0x12) = 4;
              piVar17 = piVar16 + 5;
              *(ushort *)(piVar16 + 3) = *(ushort *)(piVar16 + 3) & 0xff9f;
              piVar16 = piVar17;
              if (piVar1 == piVar17) goto LAB_00101a10;
            }
            piVar16 = piVar16 + 5;
          } while (piVar1 != piVar16);
LAB_00101a10:
          uVar31 = *(uint *)(plVar7 + 0x13);
          bVar34 = uVar31 != 0;
LAB_001015f0:
          pbVar26 = (byte *)(lVar33 + 0x13 + uVar19 * 0x14);
          do {
            if (3 < *pbVar26) {
              if (!bVar34) goto LAB_001016b8;
              uVar12 = (int)uVar18 + 1;
              if (uVar30 <= uVar12) goto LAB_0010170d;
              lVar25 = lVar33 + (ulong)uVar12 * 0x14;
              goto LAB_0010164f;
            }
            uVar12 = (int)uVar18 + 1;
            uVar18 = (ulong)uVar12;
            pbVar26 = pbVar26 + 0x14;
          } while (uVar12 != uVar30);
          if (uVar12 <= uVar13) goto LAB_00101af5;
          goto LAB_00101b48;
        }
        uVar31 = *(uint *)(plVar7 + 0x13);
        bVar34 = uVar31 != 0;
        if (uVar13 < uVar30) goto LAB_001015f0;
LAB_00101f8f:
        if (uVar30 == uVar13) {
          local_68 = uVar30 + 1;
          uVar18 = (ulong)uVar30;
          uVar19 = (ulong)uVar30;
          goto LAB_00101b08;
        }
        if (uVar13 < uVar30) goto LAB_00101af5;
        local_68 = uVar13 + 1;
        goto LAB_00101a5a;
      }
LAB_0010196d:
      hb_buffer_t::message(param_3,param_2,"end reordering indic final");
    }
    param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0x3f);
  }
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar12 = uVar12 + 1;
    lVar25 = lVar25 + 0x14;
    if (uVar30 <= uVar12) break;
LAB_0010164f:
    if ((uVar31 & *(uint *)(lVar25 + 4)) != 0) {
      if (((~*(ushort *)(lVar25 + 0xc) & 0x30) != 0) || ((*(ushort *)(lVar25 + 0xc) & 0x40) != 0)) {
        if (uVar12 < uVar30) {
          puVar21 = (ushort *)(lVar33 + 0xc + (ulong)uVar12 * 0x14);
          goto LAB_00101680;
        }
        uVar18 = (ulong)uVar12;
        bVar34 = false;
      }
      break;
    }
  }
LAB_00101f2f:
  if ((uint)uVar18 == uVar30) goto LAB_00101b48;
LAB_001016b8:
  if (*(int *)(param_3 + 0x3c) == 0x4d6c796d) {
    uVar31 = (uint)uVar18;
joined_r0x001016cc:
    uVar31 = uVar31 + 1;
    if (uVar31 < uVar30) {
      pbVar26 = (byte *)(lVar33 + 0xc + (ulong)uVar31 * 0x14);
      while( true ) {
        if (((*pbVar26 & 0x20) != 0) || (0x1f < pbVar26[6])) goto LAB_0010170d;
        if ((1 << (pbVar26[6] & 0x1f) & 0x60U) == 0) break;
        uVar31 = uVar31 + 1;
        pbVar26 = pbVar26 + 0x14;
        if (uVar31 == uVar30) goto LAB_0010170d;
      }
      if (((uVar31 == uVar30) ||
          (lVar25 = lVar33 + (ulong)uVar31 * 0x14, (*(byte *)(lVar25 + 0xc) & 0x20) != 0)) ||
         (*(char *)(lVar25 + 0x12) != '\x04')) goto LAB_0010170d;
      uVar31 = uVar31 + 1;
      if (uVar31 < uVar30) {
        lVar25 = lVar33 + (ulong)uVar31 * 0x14;
        uVar12 = uVar31;
        do {
          uVar31 = uVar12 + 1;
          if ((((*(byte *)(lVar25 + 0xc) & 0x20) != 0) || (0x1f < *(byte *)(lVar25 + 0x12))) ||
             ((1 << (*(byte *)(lVar25 + 0x12) & 0x1f) & 0x60U) == 0)) {
            uVar31 = uVar12;
            if (uVar12 < uVar30) {
              lVar25 = lVar33 + (ulong)uVar12 * 0x14;
              if ((((*(byte *)(lVar25 + 0xc) & 0x20) == 0) && (*(byte *)(lVar25 + 0x12) < 0x20)) &&
                 (((1 << (*(byte *)(lVar25 + 0x12) & 0x1f) & 0x58c06U) != 0 &&
                  (*(char *)(lVar25 + 0x13) == '\b')))) {
                *(undefined1 *)(lVar25 + 0x13) = 4;
                uVar18 = (ulong)uVar12;
              }
            }
            break;
          }
          lVar25 = lVar25 + 0x14;
          uVar12 = uVar31;
        } while (uVar31 < uVar30);
      }
      goto joined_r0x001016cc;
    }
  }
LAB_0010170d:
  uVar31 = (uint)uVar18;
  if (uVar13 < uVar31) {
    if (4 < *(byte *)(lVar33 + 0x13 + uVar18 * 0x14)) {
      uVar31 = uVar31 - 1;
      uVar18 = (ulong)uVar31;
      if (uVar31 == uVar30) goto LAB_00101b48;
      if (uVar30 <= uVar31) goto LAB_00101762;
      goto LAB_00101738;
    }
    if (uVar31 == uVar30) goto LAB_00101b48;
    if (uVar30 <= uVar31) {
LAB_00101762:
      local_68 = uVar13 + 1;
      if (local_68 < uVar30) {
        uVar31 = (uint)uVar18;
        if (uVar13 < uVar31) {
          uVar12 = uVar31 - 1;
          if (uVar31 == uVar30) goto LAB_00101b79;
          iVar4 = *(int *)(param_3 + 0x3c);
          goto joined_r0x00101b8a;
        }
        goto LAB_00101868;
      }
      goto LAB_00101a5a;
    }
    goto LAB_00101744;
  }
  if (uVar31 == uVar30) goto LAB_00101b48;
  if (uVar30 <= uVar31) goto LAB_00101762;
LAB_00101af5:
  local_68 = uVar13 + 1;
  if (uVar30 <= local_68) {
LAB_00101b08:
    uVar24 = (ulong)(uVar30 + 1);
    puVar20 = (undefined8 *)(lVar33 + uVar19 * 0x14);
    goto LAB_00101880;
  }
LAB_00101868:
  uVar24 = (ulong)(uVar30 + 1);
  puVar20 = (undefined8 *)(lVar33 + uVar19 * 0x14);
  if (*(char *)((long)puVar20 + 0x13) != '\x01') goto LAB_00101880;
  bVar22 = false;
  if ((*(ushort *)((long)puVar20 + 0xc) & 0x20) != 0) {
    bVar22 = (bool)(((byte)(*(ushort *)((long)puVar20 + 0xc) >> 6) ^ 1) & 1);
  }
  if ((*(char *)((long)puVar20 + 0x12) == '\x0e') != bVar22) {
    iVar4 = *(int *)(*plVar7 + 0xc);
    uVar19 = (ulong)local_68;
    uVar31 = (uint)uVar18;
    if (iVar4 == 0xc) goto LAB_00101dd8;
    if (local_68 < uVar31) {
      pbVar26 = (byte *)(lVar33 + 0xc + uVar19 * 0x14);
      uVar24 = uVar19;
      do {
        uVar12 = (uint)uVar24;
        if (((*pbVar26 & 0x20) == 0) && (pbVar26[6] == 4)) {
          if ((uVar12 < uVar31) &&
             ((puVar15 = (undefined8 *)(lVar33 + uVar24 * 0x14),
              (*(byte *)((long)puVar15 + 0xc) & 0x20) == 0 &&
              (*(char *)((long)puVar15 + 0x12) == '\x04')))) {
            uVar28 = uVar12 + 1;
            if (uVar31 <= uVar28) goto LAB_00101e4c;
            puVar29 = (undefined8 *)(lVar33 + (ulong)uVar28 * 0x14);
            if ((((*(byte *)((long)puVar29 + 0xc) & 0x20) != 0) ||
                (0x1f < *(byte *)((long)puVar29 + 0x12))) ||
               ((1 << (*(byte *)((long)puVar29 + 0x12) & 0x1f) & 0x60U) == 0)) goto LAB_00101e4c;
            uVar23 = uVar12 + 2;
            uVar12 = uVar28;
            goto LAB_00102189;
          }
          break;
        }
        uVar24 = (ulong)(uVar12 + 1);
        pbVar26 = pbVar26 + 0x14;
      } while (uVar12 + 1 != uVar31);
      if (iVar4 != 5) {
        if (iVar4 != 9) {
LAB_00101dd8:
          if (local_68 < uVar31) {
            pbVar26 = (byte *)(lVar33 + 0xc + uVar19 * 0x14);
            uVar12 = local_68;
LAB_00101e09:
            if (((*pbVar26 & 0x20) != 0) || (pbVar26[6] != 4)) goto LAB_00101df8;
            if (((uVar12 < uVar31) &&
                (puVar15 = (undefined8 *)(lVar33 + (ulong)uVar12 * 0x14),
                (*(byte *)((long)puVar15 + 0xc) & 0x20) == 0)) &&
               (*(char *)((long)puVar15 + 0x12) == '\x04')) {
              uVar23 = uVar12 + 1;
              uVar28 = uVar23;
              if (uVar23 < uVar31) {
                puVar29 = (undefined8 *)(lVar33 + (ulong)uVar23 * 0x14);
                if ((((*(byte *)((long)puVar29 + 0xc) & 0x20) == 0) &&
                    (*(byte *)((long)puVar29 + 0x12) < 0x20)) &&
                   ((1 << (*(byte *)((long)puVar29 + 0x12) & 0x1f) & 0x60U) != 0)) {
                  uVar28 = uVar12 + 2;
                  puVar15 = puVar29;
                  uVar12 = uVar23;
                }
              }
LAB_00101e4c:
              puVar29 = puVar15;
              if (1 < uVar28 - uVar13) goto LAB_00101e59;
              uVar5 = *(undefined4 *)(puVar20 + 2);
              uVar8 = *puVar20;
              uVar9 = puVar20[1];
              puVar20 = (undefined8 *)
                        memmove(puVar20,(void *)(lVar33 + uVar19 * 0x14),
                                (ulong)(uVar12 - uVar13) * 0x14);
              *puVar15 = uVar8;
              puVar15[1] = uVar9;
              *(undefined4 *)(puVar15 + 2) = uVar5;
              uVar24 = (ulong)(uVar30 + 1);
              goto LAB_00101880;
            }
          }
          goto LAB_001021fa;
        }
LAB_00101d81:
        uVar12 = uVar31 + 1;
        uVar24 = uVar18;
        if (uVar12 < uVar30) {
          lVar25 = lVar33 + (ulong)uVar12 * 0x14;
          do {
            uVar24 = (ulong)uVar12;
            if ((*(byte *)(lVar25 + 0x13) < 0x20) &&
               ((1 << (*(byte *)(lVar25 + 0x13) & 0x1f) & 0x3800U) != 0)) {
              uVar24 = (ulong)(uVar12 - 1);
              break;
            }
            uVar12 = uVar12 + 1;
            lVar25 = lVar25 + 0x14;
          } while (uVar12 < uVar30);
        }
        if (uVar30 <= (uint)uVar24) goto LAB_00101dd8;
        goto LAB_0010235b;
      }
LAB_00102145:
      lVar25 = lVar33 + (ulong)(uVar31 + 1) * 0x14;
      uVar32 = uVar18;
      do {
        uVar24 = uVar32;
        uVar23 = (uint)uVar24 + 1;
        if (uVar30 <= uVar23) break;
        pbVar26 = (byte *)(lVar25 + 0x13);
        lVar25 = lVar25 + 0x14;
        uVar32 = (ulong)uVar23;
      } while (*pbVar26 < 6);
      if (uVar30 <= (uint)uVar24) goto LAB_00101dd8;
LAB_0010217d:
      puVar29 = (undefined8 *)(lVar33 + uVar24 * 0x14);
      uVar12 = (uint)uVar24;
    }
    else {
      if (iVar4 == 5) goto LAB_00102145;
      if (iVar4 == 9) goto LAB_00101d81;
LAB_001021fa:
      uVar24 = (ulong)(uVar30 - 1);
      puVar29 = (undefined8 *)(lVar33 + uVar24 * 0x14);
      if (uVar13 < uVar30 - 1) {
        do {
          if (*(char *)((long)puVar29 + 0x13) != '\r') goto LAB_0010222c;
          uVar12 = (int)uVar24 - 1;
          uVar24 = (ulong)uVar12;
          puVar29 = (undefined8 *)((long)puVar29 + -0x14);
        } while (uVar13 < uVar12);
        puVar29 = (undefined8 *)(lVar33 + (ulong)uVar12 * 0x14);
      }
LAB_0010222c:
      uVar12 = (uint)uVar24;
      if (((*(char *)((long)plVar7 + 9) == '\0') && ((*(byte *)((long)puVar29 + 0xc) & 0x20) == 0))
         && ((*(char *)((long)puVar29 + 0x12) == '\x04' && (uVar28 = uVar31 + 1, uVar28 < uVar12))))
      {
        lVar25 = lVar33 + (ulong)uVar28 * 0x14;
        do {
          if (*(byte *)(lVar25 + 0x12) < 0x20) {
            uVar24 = (ulong)((int)uVar24 + -1 +
                            (uint)((1 << (*(byte *)(lVar25 + 0x12) & 0x1f) & 0x2080U) == 0));
          }
          uVar28 = uVar28 + 1;
          lVar25 = lVar25 + 0x14;
        } while (uVar28 < (uint)uVar24);
LAB_0010235b:
        uVar23 = (int)uVar24 + 1;
        goto LAB_0010217d;
      }
      uVar23 = uVar12 + 1;
    }
LAB_00102189:
    if (1 < uVar23 - uVar13) {
LAB_00101e59:
      hb_buffer_t::merge_clusters_impl(uVar27,uVar13);
    }
    uVar5 = *(undefined4 *)(puVar20 + 2);
    uVar8 = *puVar20;
    uVar9 = puVar20[1];
    puVar20 = (undefined8 *)
              memmove(puVar20,(void *)(lVar33 + uVar19 * 0x14),(ulong)(uVar12 - uVar13) * 0x14);
    *puVar29 = uVar8;
    puVar29[1] = uVar9;
    *(undefined4 *)(puVar29 + 2) = uVar5;
    if ((uVar13 < uVar31) && (uVar31 <= uVar12)) {
      uVar18 = (ulong)(uVar31 - 1);
    }
    uVar24 = (ulong)(uVar30 + 1);
    goto LAB_00101880;
  }
  uVar24 = (ulong)(uVar30 + 1);
  if (!bVar34) goto LAB_001018eb;
LAB_00101885:
  uVar31 = (uint)uVar18;
  uVar12 = uVar31 + 1;
  if (uVar12 < uVar30) {
    uVar19 = (ulong)uVar12;
    puVar15 = (undefined8 *)(lVar33 + uVar19 * 0x14);
    uVar28 = uVar12;
    do {
      if ((*(uint *)(plVar7 + 0x13) & *(uint *)((long)puVar15 + 4)) != 0) {
        if (((*(ushort *)((long)puVar15 + 0xc) & 0x20) != 0) &&
           ((*(ushort *)((long)puVar15 + 0xc) & 0x40) == 0)) {
          if ((*(int *)(param_3 + 0x3c) != 0x54616d6c) && (*(int *)(param_3 + 0x3c) != 0x4d6c796d))
          goto LAB_001020f0;
          local_90 = (undefined8 *)(lVar33 + uVar18 * 0x14);
          uVar18 = uVar19;
          if (uVar31 <= uVar13) goto LAB_00102043;
          uVar18 = (ulong)(uVar31 - 1);
          goto LAB_00101fec;
        }
        break;
      }
      uVar28 = uVar28 + 1;
      puVar15 = (undefined8 *)((long)puVar15 + 0x14);
    } while (uVar28 < uVar30);
  }
  goto LAB_001018e0;
  while( true ) {
    uVar12 = uVar12 + 1;
    puVar21 = puVar21 + 10;
    if (uVar12 == uVar30) break;
LAB_00101680:
    if (((char)puVar21[3] == '\x04' & ((byte)(*puVar21 >> 5) ^ 1)) == 0) {
      bVar34 = false;
      if (uVar12 < uVar30) {
        uVar18 = (ulong)uVar12;
        *(undefined1 *)(lVar33 + 0x13 + (ulong)uVar12 * 0x14) = 4;
        goto LAB_001016b8;
      }
      uVar18 = (ulong)uVar12;
      goto LAB_00101f2f;
    }
  }
  bVar34 = false;
LAB_00101b48:
  uVar18 = (ulong)(uVar30 - 1);
  lVar25 = lVar33 + uVar18 * 0x14;
  if (((*(byte *)(lVar25 + 0xc) & 0x20) == 0) && (*(char *)(lVar25 + 0x12) == '\x06')) {
LAB_00101738:
    if ((uint)uVar18 <= uVar13) goto LAB_00101af5;
LAB_00101744:
    pbVar26 = (byte *)(lVar33 + 0xc + uVar18 * 0x14);
    do {
      if ((((*pbVar26 & 0x20) != 0) || (0x1f < pbVar26[6])) ||
         ((1 << (pbVar26[6] & 0x1f) & 0x18U) == 0)) goto LAB_00101762;
      local_68 = (uint)uVar18;
      uVar18 = (ulong)(local_68 - 1);
      pbVar26 = pbVar26 + -0x14;
    } while (local_68 - 1 != uVar13);
    if (local_68 < uVar30) goto LAB_00101868;
  }
  else {
    local_68 = uVar13 + 1;
    uVar18 = (ulong)uVar30;
    if (local_68 < uVar30) {
LAB_00101b79:
      uVar12 = (int)uVar18 - 2;
      iVar4 = *(int *)(param_3 + 0x3c);
joined_r0x00101b8a:
      uVar24 = (ulong)uVar12;
      if ((iVar4 != 0x4d6c796d) && (iVar4 != 0x54616d6c)) {
        uVar12 = uVar12 + 1;
        do {
          uVar31 = (uint)uVar24;
          lVar25 = lVar33 + uVar24 * 0x14;
          bVar2 = *(byte *)(lVar25 + 0x12);
          bVar11 = ((byte)(*(ushort *)(lVar25 + 0xc) >> 5) ^ 1) & 1;
          if ((uVar31 <= uVar13) ||
             (((bVar2 < 0x20 && (bVar11 != 0)) && ((1 << (bVar2 & 0x1f) & 0x2090U) != 0)))) {
            if (((bVar2 != 4) || (bVar11 == 0)) || (*(char *)(lVar25 + 0x13) == '\x02'))
            goto LAB_0010180f;
            if ((uVar30 <= uVar12) || (*(char *)(lVar33 + 0x12 + (ulong)uVar12 * 0x14) != '\x06')) {
              if (uVar13 < uVar31) goto LAB_00101baa;
              goto LAB_0010180f;
            }
            if (uVar31 <= uVar13) goto LAB_0010180f;
          }
          uVar24 = (ulong)(uVar31 - 1);
          uVar12 = uVar12 - 1;
        } while( true );
      }
      if ((uVar13 < uVar12) && (*(char *)(lVar33 + 0x13 + uVar24 * 0x14) != '\x02')) {
LAB_00101baa:
        local_68 = uVar13 + 1;
        uVar31 = (int)uVar24 - 1;
        lVar25 = uVar24 - uVar31;
        puVar20 = (undefined8 *)(lVar33 + (ulong)uVar31 * 0x14);
        while( true ) {
          if (*(char *)((long)puVar20 + 0x13) == '\x02') {
            uVar12 = (uint)uVar18;
            uVar28 = (uint)uVar24;
            if ((uVar31 < uVar12) && (uVar12 <= uVar28)) {
              uVar18 = (ulong)(uVar12 - 1);
            }
            else {
              uVar12 = uVar12 + 1;
            }
            uVar5 = *(undefined4 *)(puVar20 + 2);
            uVar8 = *puVar20;
            uVar9 = puVar20[1];
            memmove(puVar20,(void *)((long)puVar20 + lVar25 * 0x14),(ulong)(uVar28 - uVar31) * 0x14)
            ;
            puVar15 = (undefined8 *)(lVar33 + uVar24 * 0x14);
            *(undefined4 *)(puVar15 + 2) = uVar5;
            if (uVar30 <= uVar12) {
              uVar12 = uVar30;
            }
            *puVar15 = uVar8;
            puVar15[1] = uVar9;
            if (1 < uVar12 - uVar28) {
              hb_buffer_t::merge_clusters_impl(uVar27,uVar28);
            }
            uVar24 = (ulong)(uVar28 - 1);
          }
          if (uVar31 == uVar13) break;
          puVar20 = (undefined8 *)((long)puVar20 + -0x14);
          uVar31 = uVar31 - 1;
        }
      }
      else {
LAB_0010180f:
        local_68 = uVar13 + 1;
        pcVar14 = (char *)(lVar33 + 0x13 + uVar19 * 0x14);
        uVar24 = uVar19;
        do {
          uVar31 = (uint)uVar24;
          if (*pcVar14 == '\x02') {
            uVar12 = (uint)uVar18 + 1;
            if (uVar30 < uVar12) {
              uVar12 = uVar30;
            }
            if (1 < uVar12 - uVar31) {
              hb_buffer_t::merge_clusters_impl(uVar27,uVar31);
            }
            break;
          }
          uVar24 = (ulong)(uVar31 + 1);
          pcVar14 = pcVar14 + 0x14;
        } while (uVar31 + 1 != (uint)uVar18);
      }
      goto LAB_00101868;
    }
  }
LAB_00101a5a:
  uVar24 = (ulong)(uVar30 + 1);
  puVar20 = (undefined8 *)(lVar33 + uVar19 * 0x14);
LAB_00101880:
  if (bVar34) goto LAB_00101885;
  goto LAB_001018e0;
LAB_00101df8:
  uVar12 = uVar12 + 1;
  pbVar26 = pbVar26 + 0x14;
  if (uVar12 == uVar31) goto LAB_001021fa;
  goto LAB_00101e09;
  while( true ) {
    uVar18 = (ulong)(uVar31 - 1);
    lVar25 = lVar33 + uVar18 * 0x14;
    if ((((*(byte *)(lVar25 + 0xc) & 0x20) == 0) && (bVar2 = *(byte *)(lVar25 + 0x12), bVar2 < 0x20)
        ) && ((1 << (bVar2 & 0x1f) & 0x2090U) != 0)) break;
LAB_001020f0:
    uVar32 = uVar18;
    uVar31 = (uint)uVar32;
    if (uVar31 <= uVar13) {
      uVar18 = (ulong)(uVar31 + 1);
      local_90 = (undefined8 *)(lVar33 + uVar32 * 0x14);
      goto LAB_00102043;
    }
  }
  uVar12 = uVar31 + 1;
  uVar19 = (ulong)uVar12;
  local_90 = (undefined8 *)(lVar33 + uVar32 * 0x14);
LAB_00101fec:
  lVar25 = lVar33 + uVar18 * 0x14;
  uVar18 = uVar19;
  if (((*(char *)(lVar25 + 0x12) == '\x04' && uVar31 < uVar30) &&
      ((*(byte *)(lVar25 + 0xc) & 0x20) == 0)) &&
     (((*(byte *)((long)local_90 + 0xc) & 0x20) == 0 &&
      ((*(byte *)((long)local_90 + 0x12) < 0x20 &&
       ((1 << (*(byte *)((long)local_90 + 0x12) & 0x1f) & 0x60U) != 0)))))) {
    uVar18 = (ulong)(uVar12 + 1);
    local_90 = (undefined8 *)(lVar33 + uVar19 * 0x14);
    uVar31 = uVar12;
  }
LAB_00102043:
  if (1 < (uVar28 + 1) - uVar31) {
    hb_buffer_t::merge_clusters_impl(uVar27,uVar31);
  }
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar5 = *(undefined4 *)(puVar15 + 2);
  memmove((void *)(lVar33 + uVar18 * 0x14),local_90,(ulong)(uVar28 - uVar31) * 0x14);
  *(undefined4 *)(local_90 + 2) = uVar5;
  *local_90 = uVar8;
  local_90[1] = uVar9;
LAB_001018e0:
  if (*(char *)((long)puVar20 + 0x13) == '\x02') {
    if ((uVar13 == 0) ||
       ((1 << ((byte)*(undefined2 *)(lVar33 + 0x10 + (ulong)(uVar13 - 1) * 0x14) & 0x1f) & 0x1ffeU)
        == 0)) {
      *(uint *)((long)puVar20 + 4) = *(uint *)((long)puVar20 + 4) | *(uint *)((long)plVar7 + 0xb4);
    }
    else {
      hb_buffer_t::_set_glyph_flags(param_3,3,uVar13 - 1,local_68,true,false);
    }
  }
LAB_001018eb:
  if (((*(char *)((long)plVar7 + 9) != '\0') && (*(int *)(param_1 + 4) != 0x54616d6c)) &&
     (1 < uVar30 - uVar13)) {
    hb_buffer_t::merge_clusters_impl(uVar27,uVar13);
  }
  lVar33 = *(long *)(param_3 + 0x70);
  lVar25 = lVar33 + uVar24 * 0x14;
  uVar13 = uVar30;
  do {
    uVar13 = uVar13 + 1;
    if (*(uint *)(param_3 + 0x60) <= uVar13) break;
    pcVar14 = (char *)(lVar25 + 0xf);
    lVar25 = lVar25 + 0x14;
  } while (*(char *)(lVar33 + 0xf + (ulong)uVar30 * 0x14) == *pcVar14);
  uVar19 = (ulong)uVar30;
  bVar34 = uVar3 <= uVar30;
  uVar30 = uVar13;
  if (bVar34) goto LAB_0010196d;
  goto LAB_001015c0;
}



/* initial_reordering_indic(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined4
initial_reordering_indic(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  char *pcVar1;
  undefined2 *puVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  byte bVar17;
  long lVar18;
  undefined2 *puVar19;
  long in_FS_OFFSET;
  int local_54;
  undefined8 local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = hb_buffer_t::message(param_3,param_2,"start reordering indic initial");
  if ((char)uVar7 == '\0') goto LAB_001024c0;
  plVar5 = *(long **)(param_1 + 0x88);
  local_54 = *(int *)((long)plVar5 + 0xc);
  if (local_54 == -1) {
    if (*(int *)(*plVar5 + 8) == 0) {
LAB_001027ff:
      local_54 = 0;
    }
    else {
      local_54 = 0;
      lVar18 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
      if (lVar18 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10);
      }
      iVar9 = (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                        (param_2,*(undefined8 *)(param_2 + 0x98),*(int *)(*plVar5 + 8),&local_54,
                         lVar18);
      if (iVar9 == 0) goto LAB_001027ff;
    }
    *(int *)((long)plVar5 + 0xc) = local_54;
  }
  iVar9 = local_54;
  if (local_54 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    if (*(uint *)(param_3 + 0x60) != 0) {
      pcVar10 = (char *)(*(long *)(param_3 + 0x70) + 0x13);
      pcVar1 = pcVar10 + (ulong)*(uint *)(param_3 + 0x60) * 0x14;
LAB_0010255d:
      if (*pcVar10 == '\x04') {
        puVar19 = (undefined2 *)plVar5[8];
        local_50 = CONCAT44(*(undefined4 *)(pcVar10 + -0x13),iVar9);
        puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 9) * 6;
        local_48 = iVar9;
        if (puVar19 != puVar2) {
          do {
            iVar8 = hb_ot_layout_lookup_would_substitute
                              (uVar6,*puVar19,&local_50,2,(char)plVar5[10]);
            if (iVar8 != 0) goto LAB_001025e4;
            puVar19 = puVar19 + 6;
          } while (puVar2 != puVar19);
          puVar19 = (undefined2 *)plVar5[8];
          puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 9) * 6;
          if (puVar19 != puVar2) {
            do {
              iVar8 = hb_ot_layout_lookup_would_substitute
                                (uVar6,*puVar19,(long)&local_50 + 4,2,(char)plVar5[10]);
              if (iVar8 != 0) goto LAB_001025e4;
              puVar19 = puVar19 + 6;
            } while (puVar2 != puVar19);
          }
        }
        puVar19 = (undefined2 *)plVar5[0xe];
        puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 0xf) * 6;
        if (puVar19 != puVar2) {
          do {
            iVar8 = hb_ot_layout_lookup_would_substitute
                              (uVar6,*puVar19,&local_50,2,(char)plVar5[0x10]);
            if (iVar8 != 0) goto LAB_001025e4;
            puVar19 = puVar19 + 6;
          } while (puVar2 != puVar19);
          puVar19 = (undefined2 *)plVar5[0xe];
          puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 0xf) * 6;
          if (puVar19 != puVar2) {
            do {
              iVar8 = hb_ot_layout_lookup_would_substitute
                                (uVar6,*puVar19,(long)&local_50 + 4,2,(char)plVar5[0x10]);
              if (iVar8 != 0) goto LAB_001025e4;
              puVar19 = puVar19 + 6;
            } while (puVar2 != puVar19);
          }
        }
        puVar19 = (undefined2 *)plVar5[0xb];
        puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 0xc) * 6;
        if (puVar19 != puVar2) {
          do {
            iVar8 = hb_ot_layout_lookup_would_substitute
                              (uVar6,*puVar19,&local_50,2,(char)plVar5[0xd]);
            if (iVar8 != 0) goto LAB_001028e6;
            puVar19 = puVar19 + 6;
          } while (puVar2 != puVar19);
          puVar19 = (undefined2 *)plVar5[0xb];
          puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 0xc) * 6;
          if (puVar19 != puVar2) {
            do {
              iVar8 = hb_ot_layout_lookup_would_substitute
                                (uVar6,*puVar19,(long)&local_50 + 4,2,(char)plVar5[0xd]);
              if (iVar8 != 0) goto LAB_001028e6;
              puVar19 = puVar19 + 6;
            } while (puVar2 != puVar19);
          }
        }
        puVar19 = (undefined2 *)plVar5[5];
        puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 6) * 6;
        cVar16 = '\x04';
        if (puVar19 != puVar2) {
          do {
            iVar8 = hb_ot_layout_lookup_would_substitute(uVar6,*puVar19,&local_50,2,(char)plVar5[7])
            ;
            if (iVar8 != 0) goto LAB_001028e6;
            puVar19 = puVar19 + 6;
          } while (puVar2 != puVar19);
          puVar19 = (undefined2 *)plVar5[5];
          puVar2 = puVar19 + (ulong)*(uint *)(plVar5 + 6) * 6;
          if (puVar19 != puVar2) {
            do {
              iVar8 = hb_ot_layout_lookup_would_substitute
                                (uVar6,*puVar19,(long)&local_50 + 4,2,(char)plVar5[7]);
              if (iVar8 != 0) goto LAB_001028e6;
              puVar19 = puVar19 + 6;
            } while (puVar2 != puVar19);
          }
        }
        goto LAB_001025ed;
      }
      goto joined_r0x00102557;
    }
  }
LAB_0010260c:
  uVar7 = hb_syllabic_insert_dotted_circles(param_2,param_3,4,0xb,0xe,0xe);
  uVar4 = *(uint *)(param_3 + 0x60);
  if (uVar4 != 0) {
    lVar18 = *(long *)(param_3 + 0x70);
    uVar14 = 0;
    bVar17 = *(byte *)(lVar18 + 0xf);
    pbVar11 = (byte *)(lVar18 + 0x23);
    do {
      uVar14 = uVar14 + 1;
      if (uVar4 == uVar14) break;
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 0x14;
    } while (bVar17 == bVar3);
    uVar12 = 0;
    do {
      uVar15 = uVar14;
      bVar17 = bVar17 & 0xf;
      if (bVar17 == 2) {
LAB_001026e6:
        if (((*(hb_ot_shape_plan_t **)(param_1 + 0x88))[9] == (hb_ot_shape_plan_t)0x0) ||
           (*(char *)(lVar18 + 0x12 + (ulong)(uVar15 - 1) * 0x14) != '\v')) {
          initial_reordering_consonant_syllable
                    (*(hb_ot_shape_plan_t **)(param_1 + 0x88),*(hb_face_t **)(param_2 + 0x20),
                     param_3,uVar12,uVar15);
          lVar18 = *(long *)(param_3 + 0x70);
        }
      }
      else if (bVar17 < 3) {
        initial_reordering_consonant_syllable
                  (*(hb_ot_shape_plan_t **)(param_1 + 0x88),*(hb_face_t **)(param_2 + 0x20),param_3,
                   uVar12,uVar15);
        lVar18 = *(long *)(param_3 + 0x70);
      }
      else if (bVar17 == 4) goto LAB_001026e6;
      bVar17 = *(byte *)(lVar18 + 0xf + (ulong)uVar15 * 0x14);
      lVar13 = lVar18 + (ulong)(uVar15 + 1) * 0x14;
      uVar14 = uVar15;
      do {
        uVar14 = uVar14 + 1;
        if (*(uint *)(param_3 + 0x60) <= uVar14) break;
        pbVar11 = (byte *)(lVar13 + 0xf);
        lVar13 = lVar13 + 0x14;
      } while (bVar17 == *pbVar11);
      uVar12 = uVar15;
    } while (uVar15 < uVar4);
  }
  hb_buffer_t::message(param_3,param_2,"end reordering indic initial");
LAB_001024c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001025e4:
  cVar16 = '\b';
  goto LAB_001025ed;
LAB_001028e6:
  cVar16 = '\v';
LAB_001025ed:
  *pcVar10 = cVar16;
joined_r0x00102557:
  pcVar10 = pcVar10 + 0x14;
  if (pcVar1 == pcVar10) goto LAB_0010260c;
  goto LAB_0010255d;
}



/* setup_syllables_indic(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8
setup_syllables_indic(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] | 8);
  find_syllables_indic(param_3);
  uVar2 = *(uint *)(param_3 + 0x60);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_3 + 0x70);
    uVar7 = 0;
    pcVar4 = (char *)(lVar3 + 0x23);
    do {
      uVar7 = uVar7 + 1;
      if (uVar2 == uVar7) break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 0x14;
    } while (*(char *)(lVar3 + 0xf) == cVar1);
    uVar5 = 0;
    do {
      uVar8 = uVar7;
      hb_buffer_t::_set_glyph_flags(param_3,3,uVar5,uVar8,true,false);
      lVar6 = lVar3 + (ulong)(uVar8 + 1) * 0x14;
      uVar7 = uVar8;
      do {
        uVar7 = uVar7 + 1;
        if (*(uint *)(param_3 + 0x60) <= uVar7) break;
        pcVar4 = (char *)(lVar6 + 0xf);
        lVar6 = lVar6 + 0x14;
      } while (*(char *)(lVar3 + 0xf + (ulong)uVar8 * 0x14) == *pcVar4);
      uVar5 = uVar8;
    } while (uVar8 < uVar2);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* data_create_indic(hb_ot_shape_plan_t const*) */

long * data_create_indic(hb_ot_shape_plan_t *param_1)

{
  hb_ot_map_t *phVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  
  plVar7 = (long *)calloc(1,0xd0);
  if (plVar7 != (long *)0x0) {
    iVar9 = *(int *)(param_1 + 4);
    *plVar7 = (long)indic_configs;
    piVar10 = (int *)(indic_configs + 0x18);
    uVar8 = 1;
    do {
      if (iVar9 == *piVar10) {
        cVar3 = indic_configs[uVar8 * 0x18 + 4];
        *plVar7 = (long)(indic_configs + uVar8 * 0x18);
        if (cVar3 != '\0') {
          bVar14 = param_1[0x28] != (hb_ot_shape_plan_t)0x32;
          goto LAB_00102bdf;
        }
        break;
      }
      uVar5 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar5;
      piVar10 = piVar10 + 6;
    } while (uVar5 != 10);
    bVar14 = false;
LAB_00102bdf:
    *(bool *)(plVar7 + 1) = bVar14;
    if (__hb_options == 0) {
      _hb_options_init();
    }
    bVar14 = false;
    *(byte *)((long)plVar7 + 9) = (byte)__hb_options >> 2 & 1;
    *(undefined4 *)((long)plVar7 + 0xc) = 0xffffffff;
    if ((char)plVar7[1] == '\0') {
      bVar14 = *(int *)(param_1 + 4) != 0x4d6c796d;
    }
    phVar1 = (hb_ot_map_t *)(param_1 + 0x28);
    hb_indic_would_substitute_feature_t::init
              ((hb_indic_would_substitute_feature_t *)(plVar7 + 2),phVar1,0x72706866,bVar14);
    hb_indic_would_substitute_feature_t::init
              ((hb_indic_would_substitute_feature_t *)(plVar7 + 5),phVar1,0x70726566,bVar14);
    hb_indic_would_substitute_feature_t::init
              ((hb_indic_would_substitute_feature_t *)(plVar7 + 8),phVar1,0x626c7766,bVar14);
    hb_indic_would_substitute_feature_t::init
              ((hb_indic_would_substitute_feature_t *)(plVar7 + 0xb),phVar1,0x70737466,bVar14);
    puVar13 = (uint *)(plVar7 + 0x11);
    hb_indic_would_substitute_feature_t::init
              ((hb_indic_would_substitute_feature_t *)(plVar7 + 0xe),phVar1,0x76617475,bVar14);
    puVar12 = &DAT_00104044;
    do {
      if ((*puVar12 & 1) == 0) {
        iVar9 = *(int *)(param_1 + 0x3c) + -1;
        uVar5 = 0;
        if (-1 < iVar9) {
          iVar11 = 0;
          do {
            uVar6 = (uint)(iVar11 + iVar9) >> 1;
            puVar2 = (uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar6 * 0x24);
            uVar4 = *puVar2;
            if (puVar12[-1] < uVar4) {
              iVar9 = uVar6 - 1;
            }
            else {
              if (puVar12[-1] <= uVar4) {
                uVar5 = puVar2[7];
                break;
              }
              iVar11 = uVar6 + 1;
            }
          } while (iVar11 <= iVar9);
        }
      }
      else {
        uVar5 = 0;
      }
      puVar12 = puVar12 + 2;
      *puVar13 = uVar5;
      puVar13 = puVar13 + 1;
    } while (puVar12 != (uint *)&DAT_001040cc);
  }
  return plVar7;
}



/* hb_buffer_t::_set_glyph_flags(unsigned int, unsigned int, unsigned int, bool, bool) */

void __thiscall
hb_buffer_t::_set_glyph_flags
          (hb_buffer_t *this,uint param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long in_FS_OFFSET;
  long local_50;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x60) < param_3) {
    param_3 = *(uint *)(this + 0x60);
  }
  if ((param_5) || (!param_4)) {
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
    if ((param_5) && (this[0x5a] != (hb_buffer_t)0x0)) {
      uVar11 = *(uint *)(this + 100);
      if (!param_4) {
        if (param_2 < uVar11) {
          puVar5 = (uint *)(*(long *)(this + 0x78) + 4 + (ulong)param_2 * 0x14);
          do {
            *puVar5 = *puVar5 | param_1;
            param_2 = param_2 + 1;
            puVar5 = puVar5 + 5;
          } while (param_2 < *(uint *)(this + 100));
        }
        uVar11 = *(uint *)(this + 0x5c);
        if (uVar11 < param_3) {
          puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)uVar11 * 0x14);
          puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                           ((ulong)((param_3 - uVar11) - 1) + (ulong)uVar11) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
            *puVar5 = *puVar5 | param_1;
            puVar5 = puVar5 + 5;
            if (puVar1 == puVar5) goto LAB_00102df0;
          }
          do {
            *puVar5 = *puVar5 | param_1;
            puVar5[5] = puVar5[5] | param_1;
            puVar5 = puVar5 + 10;
          } while (puVar1 != puVar5);
        }
        goto LAB_00102df0;
      }
      iVar2 = *(int *)(this + 0x1c);
      uVar13 = *(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x70);
      lVar9 = *(long *)(this + 0x78);
      if (uVar13 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar11) goto LAB_00102df0;
        if (iVar2 != 2) goto LAB_00102f95;
LAB_001031ff:
        uVar7 = (ulong)param_2;
        uVar8 = local_44;
        if (param_2 < uVar11) {
          puVar5 = (uint *)(lVar9 + 8 + uVar7 * 0x14);
          puVar1 = (uint *)(lVar9 + 0x1c + (((uVar11 - param_2) - 1) + uVar7) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00103248;
          if (*puVar5 < local_44) {
            uVar8 = *puVar5;
          }
          for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
LAB_00103248:
            if (*puVar5 < uVar8) {
              uVar8 = *puVar5;
            }
            if (puVar5[5] < uVar8) {
              uVar8 = puVar5[5];
            }
          }
          if (param_2 != uVar11) goto LAB_0010326c;
        }
        else {
LAB_0010326c:
          local_50 = uVar7 * 0x14;
LAB_0010327d:
          if (param_2 < uVar11) {
            puVar5 = (uint *)(lVar9 + 4 + local_50);
            do {
              if (puVar5[1] != uVar8) {
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
              }
              puVar5 = puVar5 + 5;
            } while (puVar5 != (uint *)(lVar9 + 0x18 +
                                       ((ulong)((uVar11 - param_2) - 1) + (ulong)param_2) * 0x14));
            uVar13 = *(uint *)(this + 0x5c);
          }
        }
LAB_001032bd:
        if (param_3 == uVar13) goto LAB_00102df0;
LAB_001032c6:
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
LAB_001032cd:
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        if (iVar2 != 2) goto LAB_00103083;
LAB_001032ee:
        if (uVar13 < param_3) {
          puVar5 = (uint *)(lVar4 + 4 + uVar7 * 0x14);
          do {
            if (puVar5[1] != uVar8) {
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar5 = *puVar5 | param_1;
            }
            puVar5 = puVar5 + 5;
          } while ((uint *)(lVar4 + 0x18 + (((int)uVar10 - uVar13) + uVar7) * 0x14) != puVar5);
        }
      }
      else {
        if (iVar2 == 2) {
          if (uVar13 < param_3) {
            puVar5 = (uint *)(lVar4 + 8 + (ulong)uVar13 * 0x14);
            puVar1 = (uint *)(lVar4 + 0x1c +
                             ((ulong)((param_3 - uVar13) - 1) + (ulong)uVar13) * 0x14);
            local_44 = 0xffffffff;
            if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
              local_44 = 0xffffffff;
              if (*puVar5 != 0xffffffff) {
                local_44 = *puVar5;
              }
              puVar5 = puVar5 + 5;
              if (puVar5 == puVar1) goto LAB_001031f2;
            }
            do {
              if (*puVar5 < local_44) {
                local_44 = *puVar5;
              }
              if (puVar5[5] < local_44) {
                local_44 = puVar5[5];
              }
              puVar5 = puVar5 + 10;
            } while (puVar5 != puVar1);
          }
          else {
            local_44 = 0xffffffff;
          }
LAB_001031f2:
          uVar8 = local_44;
          if (param_2 != uVar11) goto LAB_001031ff;
          goto LAB_001032c6;
        }
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar8 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        if (uVar15 < uVar8) {
          uVar8 = uVar15;
        }
        local_44 = uVar8;
        if (param_2 == uVar11) goto LAB_001032cd;
LAB_00102f95:
        lVar12 = lVar9 + (ulong)(uVar11 - 1) * 0x14;
        uVar7 = (ulong)param_2;
        uVar8 = *(uint *)(lVar12 + 8);
        lVar14 = lVar9 + uVar7 * 0x14;
        uVar15 = *(uint *)(lVar14 + 8);
        if (uVar8 < uVar15) {
          uVar15 = uVar8;
          lVar14 = lVar12;
        }
        puVar5 = (uint *)(lVar14 + 8);
        if (local_44 <= uVar15) {
          puVar5 = &local_44;
        }
        uVar8 = *puVar5;
        if (param_2 == uVar11) goto LAB_001032bd;
        local_50 = uVar7 * 0x14;
        lVar14 = (ulong)(uVar11 - 1) * 0x14;
        uVar15 = *(uint *)(lVar9 + 8 + local_50);
        lVar12 = lVar9 + lVar14;
        uVar3 = *(uint *)(lVar12 + 8);
        if (uVar8 != uVar15) {
          if (uVar8 == uVar3) {
            if (uVar8 == uVar15) goto LAB_0010313d;
            if (param_2 < uVar11) {
              puVar5 = (uint *)(lVar9 + 4 + local_50);
              do {
                if (puVar5[1] == uVar3) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar9 + 0x18 + (((uVar11 - param_2) - 1) + uVar7) * 0x14))
              ;
              goto LAB_00103059;
            }
            goto LAB_0010305d;
          }
          goto LAB_0010327d;
        }
LAB_0010313d:
        if (param_2 < uVar11) {
          do {
            if (*(uint *)(lVar12 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | param_1;
            lVar12 = lVar12 + -0x14;
          } while (lVar12 != lVar9 + -0x14 + lVar14 + (ulong)((uVar11 - param_2) - 1) * -0x14);
LAB_00103059:
          uVar13 = *(uint *)(this + 0x5c);
        }
LAB_0010305d:
        if (uVar13 == param_3) goto LAB_00102df0;
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
LAB_00103083:
        if (uVar11 != uVar8) {
          if (uVar15 != uVar8) goto LAB_001032ee;
          if (uVar11 != uVar8) {
            if (uVar13 < param_3) {
              puVar5 = (uint *)(lVar4 + 4 + uVar7 * 0x14);
              do {
                if (puVar5[1] == uVar15) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar4 + 0x18 + (((int)uVar10 - uVar13) + uVar7) * 0x14));
            }
            goto LAB_00102df0;
          }
        }
        if (uVar13 < param_3) {
          lVar9 = lVar4 + uVar10 * 0x14;
          do {
            if (*(uint *)(lVar9 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | param_1;
            lVar9 = lVar9 + -0x14;
          } while (lVar9 != lVar4 + -0x14 + uVar10 * 0x14 + (ulong)((int)uVar10 - uVar13) * -0x14);
        }
      }
      goto LAB_00102df0;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)param_2 * 0x14);
        puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                         ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14);
        if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
          *puVar5 = *puVar5 | param_1;
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar1) goto LAB_00102df0;
        }
        do {
          *puVar5 = *puVar5 | param_1;
          puVar5[5] = puVar5[5] | param_1;
          puVar6 = puVar5 + 10;
          if (puVar6 == puVar1) break;
          *puVar6 = *puVar6 | param_1;
          puVar5[0xf] = puVar5[0xf] | param_1;
          puVar5 = puVar5 + 0x14;
        } while (puVar5 != puVar1);
      }
      goto LAB_00102df0;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00102df0;
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
  }
  lVar4 = *(long *)(this + 0x70);
  if (param_2 != param_3) {
    if (*(int *)(this + 0x1c) == 2) {
      if (param_2 < param_3) {
        uVar7 = (ulong)param_2;
        puVar5 = (uint *)(lVar4 + 8 + uVar7 * 0x14);
        puVar1 = (uint *)(lVar4 + 0x1c + (((param_3 - param_2) - 1) + uVar7) * 0x14);
        uVar11 = 0xffffffff;
        if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00103390;
        uVar11 = 0xffffffff;
        if (*puVar5 != 0xffffffff) {
          uVar11 = *puVar5;
        }
        for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
LAB_00103390:
          if (*puVar5 < uVar11) {
            uVar11 = *puVar5;
          }
          if (puVar5[5] < uVar11) {
            uVar11 = puVar5[5];
          }
        }
        puVar5 = (uint *)(lVar4 + 4 + uVar7 * 0x14);
        do {
          if (uVar11 != puVar5[1]) {
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar5 = *puVar5 | param_1;
          }
          puVar5 = puVar5 + 5;
        } while (puVar5 != (uint *)(lVar4 + 0x18 + (((param_3 - param_2) - 1) + uVar7) * 0x14));
      }
    }
    else {
      lVar14 = (ulong)(param_3 - 1) * 0x14;
      lVar12 = (ulong)param_2 * 0x14;
      lVar9 = lVar4 + lVar14;
      uVar11 = *(uint *)(lVar4 + 8 + lVar12);
      uVar13 = *(uint *)(lVar9 + 8);
      if (uVar13 < uVar11) {
        if (param_2 < param_3) {
          puVar5 = (uint *)(lVar4 + 4 + lVar12);
          do {
            if (puVar5[1] == uVar13) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar5 = *puVar5 | param_1;
            puVar5 = puVar5 + 5;
          } while ((uint *)(lVar4 + 0x18 +
                           ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14) != puVar5);
        }
      }
      else if (param_2 < param_3) {
        do {
          if (*(uint *)(lVar9 + 8) == uVar11) break;
          *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
          *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | param_1;
          lVar9 = lVar9 + -0x14;
        } while (lVar4 + -0x14 + lVar14 + (ulong)((param_3 - param_2) - 1) * -0x14 != lVar9);
      }
    }
  }
LAB_00102df0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_buffer_t::message(hb_font_t*, char const*, ...) */

undefined8 __thiscall hb_buffer_t::message(hb_buffer_t *this,hb_font_t *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (*(long *)(this + 0xd0) != 0) {
    uVar2 = hb_buffer_t::message_impl((hb_font_t *)this,(char *)param_1,(__va_list_tag *)param_2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* find_syllables_indic(hb_buffer_t*) */

void find_syllables_indic(hb_buffer_t *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte bVar11;
  undefined1 uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint local_3c;
  uint local_38;
  int local_34;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    return;
  }
  cVar5 = '\x12';
  lVar13 = 0xfb;
  iVar17 = 1;
  local_3c = 0;
  lVar4 = *(long *)(param_1 + 0x70);
  uVar14 = 0x1f;
  local_38 = 0;
  local_34 = 0;
  uVar16 = local_3c;
LAB_00103632:
  if ('\0' < cVar5) {
    bVar11 = *(byte *)(lVar4 + 0x12 + (ulong)local_3c * 0x14);
    if (((byte)_indic_syllable_machine_trans_keys[(int)(uVar14 * 2)] <= bVar11) &&
       (bVar11 <= (byte)_indic_syllable_machine_trans_keys[(long)(int)(uVar14 * 2) + 1])) {
      lVar15 = (long)(int)((uint)bVar11 -
                          (uint)(byte)_indic_syllable_machine_trans_keys[(int)(uVar14 * 2)]);
      goto LAB_00103664;
    }
  }
  lVar15 = (long)cVar5;
LAB_00103664:
  uVar6 = (uint)(byte)_indic_syllable_machine_indicies[lVar15 + lVar13];
  do {
    uVar14 = (uint)(byte)_indic_syllable_machine_trans_targs[(int)uVar6];
    switch(_indic_syllable_machine_trans_actions[(int)uVar6]) {
    case 1:
      if (uVar16 < local_38) {
        puVar8 = (undefined1 *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        puVar2 = (undefined1 *)
                 (lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        uVar12 = (undefined1)(iVar17 << 4);
        puVar9 = puVar8;
        if (((int)puVar2 - (int)puVar8 & 4U) != 0) {
          *puVar8 = uVar12;
          puVar9 = puVar8 + 0x14;
          if (puVar2 == puVar8 + 0x14) goto LAB_00103a95;
        }
        do {
          *puVar9 = uVar12;
          puVar8 = puVar9 + 0x28;
          puVar9[0x14] = uVar12;
          puVar9 = puVar8;
        } while (puVar2 != puVar8);
      }
      goto LAB_00103a95;
    case 2:
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 3:
      if (uVar16 < local_38) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 1;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar1 == pbVar7 + 0x14) goto LAB_00103a95;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar1 != pbVar7);
      }
      goto LAB_00103a95;
    case 4:
      if (uVar16 < local_38) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 4;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar1 == pbVar7 + 0x14) goto LAB_00103b09;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar1 != pbVar7);
      }
LAB_00103b09:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      local_3c = local_38;
      break;
    case 5:
      local_34 = 5;
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 6:
      if (local_34 != 5) {
        if (local_34 == 6) {
          uVar6 = local_38;
          if (uVar16 < local_38) {
            bVar11 = (byte)(iVar17 << 4) | 5;
            pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
            pbVar1 = (byte *)(lVar4 + 0x23 +
                             ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
            pbVar10 = pbVar7;
            if (((char)pbVar1 - (char)pbVar7 & 4U) != 0) {
              *pbVar7 = bVar11;
              pbVar10 = pbVar7 + 0x14;
              uVar6 = local_38;
              if (pbVar7 + 0x14 == pbVar1) goto joined_r0x00103858;
            }
            do {
              *pbVar10 = bVar11;
              pbVar7 = pbVar10 + 0x28;
              pbVar10[0x14] = bVar11;
              pbVar10 = pbVar7;
              uVar6 = local_38;
            } while (pbVar7 != pbVar1);
          }
        }
        else {
          if (local_34 != 1) goto switchD_00103699_caseD_9;
          uVar6 = local_38;
          if (uVar16 < local_38) {
            puVar8 = (undefined1 *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
            puVar2 = (undefined1 *)
                     (lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
            uVar12 = (undefined1)(iVar17 << 4);
            puVar9 = puVar8;
            if (((char)puVar2 - (char)puVar8 & 4U) != 0) {
              *puVar8 = uVar12;
              puVar9 = puVar8 + 0x14;
              uVar6 = local_38;
              if (puVar8 + 0x14 == puVar2) goto joined_r0x00103858;
            }
            do {
              *puVar9 = uVar12;
              puVar8 = puVar9 + 0x28;
              puVar9[0x14] = uVar12;
              puVar9 = puVar8;
              uVar6 = local_38;
            } while (puVar8 != puVar2);
          }
        }
        goto joined_r0x00103858;
      }
      if (uVar16 < local_38) {
        bVar11 = (byte)(iVar17 << 4) | 4;
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((char)pbVar1 - (char)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00103e36;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_00103e36:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      goto LAB_00103aa3;
    case 7:
      if (uVar16 < local_38) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 2;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00103a95;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
      goto LAB_00103a95;
    case 8:
      if (uVar16 < local_38) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 3;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00103a95;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_00103a95:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
        local_3c = local_38;
      }
      else {
LAB_00103aa3:
        local_3c = local_38;
      }
      break;
    default:
switchD_00103699_caseD_9:
      local_3c = local_3c + 1;
      break;
    case 0xb:
      uVar6 = local_3c + 1;
      if (uVar16 < uVar6) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 5;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)(local_3c - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto joined_r0x00103858;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
      goto joined_r0x00103858;
    case 0xc:
      local_34 = 6;
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 0xd:
      if (uVar16 < local_3c) {
        puVar8 = (undefined1 *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        puVar2 = (undefined1 *)
                 (lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar16) + (ulong)uVar16) * 0x14);
        uVar12 = (undefined1)(iVar17 << 4);
        puVar9 = puVar8;
        if (((int)puVar2 - (int)puVar8 & 4U) != 0) {
          *puVar8 = uVar12;
          puVar9 = puVar8 + 0x14;
          if (puVar8 + 0x14 == puVar2) goto LAB_00103756;
        }
        do {
          *puVar9 = uVar12;
          puVar8 = puVar9 + 0x28;
          puVar9[0x14] = uVar12;
          puVar9 = puVar8;
        } while (puVar8 != puVar2);
      }
      goto LAB_00103756;
    case 0xe:
      if (uVar16 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 1;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00103756;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
      goto LAB_00103756;
    case 0xf:
      if (uVar16 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 4;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_001038bc;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_001038bc:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      goto LAB_00103764;
    case 0x10:
      uVar6 = local_3c;
      if (uVar16 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 5;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto joined_r0x00103858;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
joined_r0x00103858:
      local_3c = uVar6;
      iVar17 = iVar17 + 1;
      local_38 = local_3c;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      break;
    case 0x11:
      if (uVar16 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 2;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00103756;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
      goto LAB_00103756;
    case 0x12:
      local_34 = 1;
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 0x13:
      if (uVar16 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar11 = (byte)(iVar17 << 4) | 3;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar10 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar10 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00103756;
        }
        do {
          *pbVar10 = bVar11;
          pbVar7 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar11;
          pbVar10 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_00103756:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
        local_38 = local_3c;
      }
      else {
LAB_00103764:
        local_38 = local_3c;
      }
    }
    lVar15 = (long)(int)uVar14;
    if (_indic_syllable_machine_to_state_actions[lVar15] == '\t') {
      uVar16 = 0;
    }
    if (uVar3 != local_3c) break;
    if (*(short *)(_indic_syllable_machine_eof_trans + lVar15 * 2) < 1) {
      return;
    }
    uVar6 = (int)*(short *)(_indic_syllable_machine_eof_trans + lVar15 * 2) - 1;
  } while( true );
  lVar13 = (long)*(short *)(_indic_syllable_machine_index_offsets + lVar15 * 2);
  cVar5 = _indic_syllable_machine_key_spans[lVar15];
  if (_indic_syllable_machine_from_state_actions[lVar15] == '\n') {
    uVar16 = local_3c;
  }
  goto LAB_00103632;
}



/* hb_indic_would_substitute_feature_t::init(hb_ot_map_t const*, unsigned int, bool) */

void __thiscall
hb_indic_would_substitute_feature_t::init
          (hb_indic_would_substitute_feature_t *this,hb_ot_map_t *param_1,uint param_2,bool param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x14);
  this[0x10] = (hb_indic_would_substitute_feature_t)param_3;
  iVar6 = iVar6 + -1;
  if (-1 < iVar6) {
    iVar8 = 0;
    do {
      while( true ) {
        uVar3 = (uint)(iVar8 + iVar6) >> 1;
        puVar1 = (uint *)(lVar9 + (ulong)uVar3 * 0x24);
        uVar4 = *puVar1;
        if (param_2 < uVar4) break;
        if (param_2 <= uVar4) {
          uVar4 = puVar1[3];
          uVar3 = *(uint *)(param_1 + 0x44);
          if (uVar3 < uVar4) goto LAB_00103faa;
          uVar7 = 0;
          lVar9 = 0;
          if (uVar4 == 0) {
            if (uVar3 == 0) goto LAB_00103f79;
          }
          else {
            uVar7 = *(uint *)((ulong)(uVar4 - 1) * 0x10 + *(long *)(param_1 + 0x48));
            lVar9 = (ulong)uVar7 * 0xc;
            if (uVar3 <= uVar4) goto LAB_00103f79;
          }
          uVar3 = *(uint *)(param_1 + 0x24);
          uVar4 = *(uint *)((ulong)uVar4 * 0x10 + *(long *)(param_1 + 0x48));
          goto LAB_00103f23;
        }
        iVar8 = uVar3 + 1;
        if (iVar6 < iVar8) goto LAB_00103f57;
      }
      iVar6 = uVar3 - 1;
    } while (iVar8 <= iVar6);
  }
LAB_00103f57:
  if (*(int *)(param_1 + 0x44) != -1) {
LAB_00103faa:
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined8 *)this = 0;
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  uVar7 = *(uint *)(*(long *)(param_1 + 0x48) + 0xfffffffe0);
  lVar9 = (ulong)uVar7 * 0xc;
LAB_00103f79:
  uVar3 = *(uint *)(param_1 + 0x24);
  uVar4 = uVar3;
LAB_00103f23:
  lVar2 = *(long *)(param_1 + 0x28);
  if (uVar3 < uVar7) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4 - uVar7;
    if (uVar3 - uVar7 < uVar4 - uVar7) {
      uVar5 = uVar3 - uVar7;
    }
  }
  *(uint *)(this + 8) = uVar5;
  *(long *)this = lVar2 + lVar9;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


