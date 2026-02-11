
/* compare_myanmar_order(hb_glyph_info_t const*, hb_glyph_info_t const*) */

int compare_myanmar_order(hb_glyph_info_t *param_1,hb_glyph_info_t *param_2)

{
  return (uint)(byte)param_1[0x13] - (uint)(byte)param_2[0x13];
}



/* setup_masks_myanmar(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void setup_masks_myanmar(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 uVar3;
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
      *(undefined1 *)((long)puVar4 + 0x12) = uVar3;
      puVar4 = puVar5;
    } while (puVar5 != puVar2 + (ulong)uVar1 * 5);
  }
  return;
}



/* collect_features_myanmar(hb_ot_shape_planner_t*) */

void collect_features_myanmar(hb_ot_shape_planner_t *param_1)

{
  hb_ot_shape_planner_t *phVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = "fhprferpfwlbftsp";
  phVar1 = param_1 + 0x28;
  uVar4 = (uint)phVar1;
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_feature(phVar1,0x6c6f636c,0x41,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x63636d70,0x41,1);
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    uVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    hb_ot_map_builder_t::add_feature(phVar1,uVar2,0x49,1);
    hb_ot_map_builder_t::add_pause
              (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  } while (pcVar3 != "");
  hb_ot_map_builder_t::add_pause
            (uVar4,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  pcVar3 = "serpsvbaswlbstspfhprferpfwlbftsp";
  do {
    uVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    hb_ot_map_builder_t::add_feature(phVar1,uVar2,9,1);
  } while (pcVar3 != "fhprferpfwlbftsp");
  return;
}



/* reorder_myanmar(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined1 reorder_myanmar(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  char cVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  char cVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  undefined1 local_5a;
  ulong uVar29;
  
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  cVar11 = hb_buffer_t::message(param_3,param_2,"start reordering myanmar");
  local_5a = 0;
  if (cVar11 != '\0') {
    local_5a = hb_syllabic_insert_dotted_circles(param_2,param_3,1,0xb,-1,-1);
    uVar4 = *(uint *)(param_3 + 0x60);
    if (uVar4 != 0) {
      lVar18 = *(long *)(param_3 + 0x70);
      uVar23 = 0;
      bVar3 = *(byte *)(lVar18 + 0xf);
      pbVar19 = (byte *)(lVar18 + 0x23);
      do {
        uVar23 = uVar23 + 1;
        if (uVar4 == uVar23) break;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + 0x14;
      } while (bVar3 == bVar2);
      uVar27 = 0;
      do {
        uVar24 = uVar23;
        if ((bVar3 & 0xe) == 0) {
          uVar23 = uVar27 + 3;
          if ((((uVar24 < uVar23) || (*(char *)(lVar18 + 0x12 + (ulong)uVar27 * 0x14) != '\x0f')) ||
              (*(char *)(lVar18 + 0x12 + (ulong)(uVar27 + 1) * 0x14) != ' ')) ||
             (*(char *)(lVar18 + 0x12 + (ulong)(uVar27 + 2) * 0x14) != '\x04')) {
            uVar23 = uVar27;
            cVar25 = '\0';
            if (uVar27 < uVar24) goto LAB_00100295;
          }
          else {
            cVar25 = cVar11;
            if (uVar23 < uVar24) {
LAB_00100295:
              uVar13 = (ulong)uVar23;
              pbVar19 = (byte *)(lVar18 + 0xc + uVar13 * 0x14);
              do {
                if ((((*pbVar19 & 0x20) == 0) && (pbVar19[6] < 0x20)) &&
                   ((1 << (pbVar19[6] & 0x1f) & 0x48c06U) != 0)) goto LAB_001002de;
                uVar23 = (int)uVar13 + 1;
                uVar13 = (ulong)uVar23;
                pbVar19 = pbVar19 + 0x14;
              } while (uVar24 != uVar23);
            }
            uVar13 = (ulong)uVar27;
LAB_001002de:
            uVar23 = -(uint)(cVar25 != '\0') & 3;
            if (uVar27 < uVar23 + uVar27) {
              puVar20 = (undefined1 *)(lVar18 + 0x13 + (ulong)uVar27 * 0x14);
              puVar1 = (undefined1 *)(lVar18 + 0x27 + ((ulong)(uVar23 - 1) + (ulong)uVar27) * 0x14);
              if (((int)puVar1 - (int)puVar20 & 4U) != 0) {
                *puVar20 = 5;
                puVar20 = puVar20 + 0x14;
                if (puVar20 == puVar1) goto LAB_00100340;
              }
              do {
                *puVar20 = 5;
                puVar21 = puVar20 + 0x28;
                puVar20[0x14] = 5;
                puVar20 = puVar21;
              } while (puVar21 != puVar1);
            }
LAB_00100340:
            if (CARRY4(uVar23,uVar27)) {
              uVar23 = 0;
            }
            uVar23 = uVar23 + uVar27;
            if (uVar23 < (uint)uVar13) {
              puVar20 = (undefined1 *)(lVar18 + 0x13 + (ulong)uVar23 * 0x14);
              puVar1 = (undefined1 *)
                       (lVar18 + 0x27 +
                       ((ulong)(((uint)uVar13 - uVar23) - 1) + (ulong)uVar23) * 0x14);
              if (((int)puVar1 - (int)puVar20 & 4U) != 0) {
                *puVar20 = 3;
                puVar20 = puVar20 + 0x14;
                if (puVar20 == puVar1) goto LAB_001003a0;
              }
              do {
                *puVar20 = 3;
                puVar21 = puVar20 + 0x28;
                puVar20[0x14] = 3;
                puVar20 = puVar21;
              } while (puVar21 != puVar1);
            }
            else {
              uVar13 = (ulong)uVar23;
            }
LAB_001003a0:
            if ((uint)uVar13 < uVar24) {
              uVar23 = (uint)uVar13 + 1;
              *(undefined1 *)(lVar18 + 0x13 + uVar13 * 0x14) = 4;
              if (uVar23 < uVar24) {
                cVar30 = '\x05';
                lVar22 = lVar18 + (ulong)uVar23 * 0x14;
                cVar25 = *(char *)(lVar22 + 0x12);
                if (cVar25 == '$') goto LAB_00100423;
                do {
                  if (cVar25 == '\x16') {
                    cVar12 = '\x02';
                  }
                  else if (cVar25 == '(') {
                    cVar12 = *(char *)(lVar18 + 0x13 + uVar13 * 0x14);
                  }
                  else {
                    cVar12 = cVar30;
                    if (cVar30 == '\x05') {
                      if (cVar25 == '\x15') {
                        cVar30 = '\b';
                        cVar12 = '\b';
                      }
                    }
                    else if (cVar30 == '\b') {
                      if (cVar25 == '\t') {
                        cVar12 = '\a';
                      }
                      else {
                        cVar12 = (cVar25 != '\x15') + '\b';
                        if (cVar25 != '\x15') {
                          cVar30 = '\t';
                        }
                      }
                    }
                  }
                  *(char *)(lVar22 + 0x13) = cVar12;
                  lVar10 = lVar22;
                  while( true ) {
                    if (uVar23 == uVar24 - 1) goto LAB_00100440;
                    uVar13 = (ulong)uVar23;
                    lVar22 = lVar10 + 0x14;
                    cVar25 = *(char *)(lVar10 + 0x26);
                    uVar23 = uVar23 + 1;
                    if (cVar25 != '$') break;
LAB_00100423:
                    *(undefined1 *)(lVar22 + 0x13) = 3;
                    lVar10 = lVar22;
                  }
                } while( true );
              }
            }
          }
LAB_00100440:
          hb_buffer_t::sort((uint)param_3,uVar27,
                            (_func_int_hb_glyph_info_t_ptr_hb_glyph_info_t_ptr *)(ulong)uVar24);
          if (uVar27 < uVar24) {
            uVar13 = (ulong)uVar24;
            pcVar14 = (char *)(lVar18 + 0x13 + (ulong)uVar27 * 0x14);
            uVar23 = uVar24;
            do {
              while ((uVar31 = uVar27, *pcVar14 == '\x02' &&
                     (uVar23 = uVar31, uVar24 == (uint)uVar13))) {
                uVar13 = (ulong)uVar31;
                pcVar14 = pcVar14 + 0x14;
                uVar27 = uVar31 + 1;
                if (uVar24 == uVar31 + 1) goto LAB_00100498;
              }
              uVar27 = uVar31 + 1;
              pcVar14 = pcVar14 + 0x14;
              uVar31 = uVar23;
            } while (uVar24 != uVar27);
LAB_00100498:
            uVar27 = *(uint *)(param_3 + 0x60);
            uVar16 = (ulong)uVar27;
            lVar22 = *(long *)(param_3 + 0x70);
            uVar23 = (uint)uVar13;
            if (uVar23 < uVar31) {
              uVar33 = uVar31 + 1;
              uVar34 = uVar13;
              if (uVar27 < uVar23) {
                uVar29 = uVar16;
                uVar28 = uVar33;
                if (uVar33 <= uVar27) goto LAB_00100571;
              }
              else {
                uVar29 = uVar13;
                uVar28 = uVar27;
                if (uVar33 <= uVar27) {
                  uVar28 = uVar33;
                }
LAB_00100571:
                uVar27 = (uint)uVar29;
                if ((uVar27 + 2 <= uVar28) && (uVar27 < uVar28 - 1)) {
                  puVar15 = (undefined8 *)(lVar22 + uVar29 * 0x14);
                  puVar17 = (undefined8 *)(lVar22 + (ulong)(uVar28 - 1) * 0x14);
                  do {
                    uVar9 = puVar15[1];
                    uVar5 = *(undefined4 *)(puVar17 + 2);
                    uVar26 = (int)uVar29 + 1;
                    uVar29 = (ulong)uVar26;
                    uVar7 = *puVar17;
                    uVar8 = puVar17[1];
                    *puVar17 = *puVar15;
                    puVar17[1] = uVar9;
                    *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar15 + 2);
                    *(undefined4 *)(puVar15 + 2) = uVar5;
                    *puVar15 = uVar7;
                    puVar15[1] = uVar8;
                    puVar15 = (undefined8 *)((long)puVar15 + 0x14);
                    puVar17 = (undefined8 *)((long)puVar17 + -0x14);
                  } while (uVar26 < ((uVar27 - 1) + uVar28) - uVar26);
                  uVar16 = (ulong)*(uint *)(param_3 + 0x60);
                }
                uVar27 = (uint)uVar16;
                if (param_3[0x5b] != (hb_buffer_t)0x0) {
                  if (uVar27 < uVar23) {
                    uVar29 = uVar16;
                    if (uVar27 < uVar33) goto LAB_00100600;
                  }
                  else {
                    uVar29 = uVar13;
                    if (uVar27 < uVar33) {
                      uVar33 = uVar27;
                    }
                  }
                  uVar23 = (uint)uVar29;
                  if ((uVar23 + 2 <= uVar33) && (uVar27 = uVar33 - 1, uVar23 < uVar27)) {
                    puVar15 = (undefined8 *)(*(long *)(param_3 + 0x80) + uVar29 * 0x14);
                    puVar17 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar27 * 0x14);
                    do {
                      uVar9 = puVar15[1];
                      uVar5 = *(undefined4 *)(puVar17 + 2);
                      uVar7 = *puVar17;
                      uVar8 = puVar17[1];
                      *puVar17 = *puVar15;
                      puVar17[1] = uVar9;
                      *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar15 + 2);
                      uVar28 = uVar27 - 1;
                      *(undefined4 *)(puVar15 + 2) = uVar5;
                      uVar26 = (uVar23 + uVar33) - uVar27;
                      *puVar15 = uVar7;
                      puVar15[1] = uVar8;
                      puVar15 = (undefined8 *)((long)puVar15 + 0x14);
                      puVar17 = (undefined8 *)((long)puVar17 + -0x14);
                      uVar27 = uVar28;
                    } while (uVar26 < uVar28);
                    uVar16 = (ulong)*(uint *)(param_3 + 0x60);
                  }
                }
              }
LAB_00100600:
              do {
                while( true ) {
                  uVar23 = (uint)uVar34;
                  uVar27 = (uint)uVar16;
                  uVar33 = (int)uVar13 + 1;
                  if (*(char *)(lVar18 + 0x12 + uVar13 * 0x14) != '\x16') break;
                  uVar13 = uVar16;
                  if (uVar23 <= uVar27) {
                    uVar13 = uVar34;
                  }
                  uVar28 = uVar33;
                  if (uVar27 <= uVar33) {
                    uVar28 = uVar27;
                  }
                  uVar27 = (uint)uVar13;
                  if ((uVar27 + 2 <= uVar28) && (uVar27 < uVar28 - 1)) {
                    puVar15 = (undefined8 *)(*(long *)(param_3 + 0x70) + uVar13 * 0x14);
                    puVar17 = (undefined8 *)(*(long *)(param_3 + 0x70) + (ulong)(uVar28 - 1) * 0x14)
                    ;
                    do {
                      uVar9 = puVar15[1];
                      uVar5 = *(undefined4 *)(puVar17 + 2);
                      uVar26 = (int)uVar13 + 1;
                      uVar13 = (ulong)uVar26;
                      uVar7 = *puVar17;
                      uVar8 = puVar17[1];
                      *puVar17 = *puVar15;
                      puVar17[1] = uVar9;
                      *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar15 + 2);
                      *(undefined4 *)(puVar15 + 2) = uVar5;
                      *puVar15 = uVar7;
                      puVar15[1] = uVar8;
                      puVar15 = (undefined8 *)((long)puVar15 + 0x14);
                      puVar17 = (undefined8 *)((long)puVar17 + -0x14);
                    } while (uVar26 < ((uVar28 - 1) + uVar27) - uVar26);
                    uVar16 = (ulong)*(uint *)(param_3 + 0x60);
                  }
                  uVar27 = (uint)uVar16;
                  if (param_3[0x5b] != (hb_buffer_t)0x0) {
                    if (uVar27 < uVar23) {
                      uVar23 = uVar27;
                    }
                    uVar28 = uVar33;
                    if (uVar27 <= uVar33) {
                      uVar28 = uVar27;
                    }
                    if ((uVar23 + 2 <= uVar28) && (uVar27 = uVar28 - 1, uVar23 < uVar27)) {
                      puVar15 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar23 * 0x14);
                      puVar17 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar27 * 0x14);
                      do {
                        uVar9 = puVar15[1];
                        uVar5 = *(undefined4 *)(puVar17 + 2);
                        uVar7 = *puVar17;
                        uVar8 = puVar17[1];
                        *puVar17 = *puVar15;
                        puVar17[1] = uVar9;
                        *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar15 + 2);
                        uVar26 = uVar27 - 1;
                        *(undefined4 *)(puVar15 + 2) = uVar5;
                        uVar32 = (uVar23 + uVar28) - uVar27;
                        *puVar15 = uVar7;
                        puVar15[1] = uVar8;
                        puVar15 = (undefined8 *)((long)puVar15 + 0x14);
                        puVar17 = (undefined8 *)((long)puVar17 + -0x14);
                        uVar27 = uVar26;
                      } while (uVar32 < uVar26);
                      uVar16 = (ulong)*(uint *)(param_3 + 0x60);
                    }
                  }
                  uVar13 = (ulong)uVar33;
                  uVar34 = (ulong)uVar33;
                  if (uVar31 < uVar33) goto LAB_001006a7;
                }
                uVar13 = (ulong)uVar33;
              } while (uVar33 <= uVar31);
LAB_001006a7:
              uVar27 = (uint)uVar16;
              lVar22 = *(long *)(param_3 + 0x70);
            }
          }
          else {
            uVar27 = *(uint *)(param_3 + 0x60);
            lVar22 = *(long *)(param_3 + 0x70);
          }
        }
        else {
          uVar27 = *(uint *)(param_3 + 0x60);
          lVar22 = lVar18;
        }
        bVar3 = *(byte *)(lVar22 + 0xf + (ulong)uVar24 * 0x14);
        lVar18 = lVar22 + (ulong)(uVar24 + 1) * 0x14;
        uVar23 = uVar24;
        do {
          uVar23 = uVar23 + 1;
          if (uVar27 <= uVar23) break;
          pbVar19 = (byte *)(lVar18 + 0xf);
          lVar18 = lVar18 + 0x14;
        } while (bVar3 == *pbVar19);
        lVar18 = lVar22;
        uVar27 = uVar24;
      } while (uVar24 < uVar4);
    }
    hb_buffer_t::message(param_3,param_2,"end reordering myanmar");
  }
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0x3f);
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_5a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* setup_syllables_myanmar(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8
setup_syllables_myanmar(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

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
  find_syllables_myanmar(param_3);
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
            if (puVar1 == puVar5) goto LAB_001009b0;
          }
          do {
            *puVar5 = *puVar5 | param_1;
            puVar5[5] = puVar5[5] | param_1;
            puVar5 = puVar5 + 10;
          } while (puVar1 != puVar5);
        }
        goto LAB_001009b0;
      }
      iVar2 = *(int *)(this + 0x1c);
      uVar13 = *(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x70);
      lVar9 = *(long *)(this + 0x78);
      if (uVar13 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar11) goto LAB_001009b0;
        if (iVar2 != 2) goto LAB_00100b55;
LAB_00100dbf:
        uVar7 = (ulong)param_2;
        uVar8 = local_44;
        if (param_2 < uVar11) {
          puVar5 = (uint *)(lVar9 + 8 + uVar7 * 0x14);
          puVar1 = (uint *)(lVar9 + 0x1c + (((uVar11 - param_2) - 1) + uVar7) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00100e08;
          if (*puVar5 < local_44) {
            uVar8 = *puVar5;
          }
          for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
LAB_00100e08:
            if (*puVar5 < uVar8) {
              uVar8 = *puVar5;
            }
            if (puVar5[5] < uVar8) {
              uVar8 = puVar5[5];
            }
          }
          if (param_2 != uVar11) goto LAB_00100e2c;
        }
        else {
LAB_00100e2c:
          local_50 = uVar7 * 0x14;
LAB_00100e3d:
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
LAB_00100e7d:
        if (param_3 == uVar13) goto LAB_001009b0;
LAB_00100e86:
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
LAB_00100e8d:
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        if (iVar2 != 2) goto LAB_00100c43;
LAB_00100eae:
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
              if (puVar5 == puVar1) goto LAB_00100db2;
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
LAB_00100db2:
          uVar8 = local_44;
          if (param_2 != uVar11) goto LAB_00100dbf;
          goto LAB_00100e86;
        }
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar8 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        if (uVar15 < uVar8) {
          uVar8 = uVar15;
        }
        local_44 = uVar8;
        if (param_2 == uVar11) goto LAB_00100e8d;
LAB_00100b55:
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
        if (param_2 == uVar11) goto LAB_00100e7d;
        local_50 = uVar7 * 0x14;
        lVar14 = (ulong)(uVar11 - 1) * 0x14;
        uVar15 = *(uint *)(lVar9 + 8 + local_50);
        lVar12 = lVar9 + lVar14;
        uVar3 = *(uint *)(lVar12 + 8);
        if (uVar8 != uVar15) {
          if (uVar8 == uVar3) {
            if (uVar8 == uVar15) goto LAB_00100cfd;
            if (param_2 < uVar11) {
              puVar5 = (uint *)(lVar9 + 4 + local_50);
              do {
                if (puVar5[1] == uVar3) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar9 + 0x18 + (((uVar11 - param_2) - 1) + uVar7) * 0x14))
              ;
              goto LAB_00100c19;
            }
            goto LAB_00100c1d;
          }
          goto LAB_00100e3d;
        }
LAB_00100cfd:
        if (param_2 < uVar11) {
          do {
            if (*(uint *)(lVar12 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | param_1;
            lVar12 = lVar12 + -0x14;
          } while (lVar12 != lVar9 + -0x14 + lVar14 + (ulong)((uVar11 - param_2) - 1) * -0x14);
LAB_00100c19:
          uVar13 = *(uint *)(this + 0x5c);
        }
LAB_00100c1d:
        if (uVar13 == param_3) goto LAB_001009b0;
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
LAB_00100c43:
        if (uVar11 != uVar8) {
          if (uVar15 != uVar8) goto LAB_00100eae;
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
            goto LAB_001009b0;
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
      goto LAB_001009b0;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)param_2 * 0x14);
        puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                         ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14);
        if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
          *puVar5 = *puVar5 | param_1;
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar1) goto LAB_001009b0;
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
      goto LAB_001009b0;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_001009b0;
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
        if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00100f50;
        uVar11 = 0xffffffff;
        if (*puVar5 != 0xffffffff) {
          uVar11 = *puVar5;
        }
        for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
LAB_00100f50:
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
LAB_001009b0:
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



/* find_syllables_myanmar(hb_buffer_t*) */

void find_syllables_myanmar(hb_buffer_t *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  char cVar12;
  byte bVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  int local_34;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    return;
  }
  lVar6 = 0x29;
  lVar14 = 0;
  iVar11 = 0;
  uVar15 = 0;
  lVar4 = *(long *)(param_1 + 0x70);
  local_34 = 1;
  uVar16 = uVar15;
LAB_0010119c:
  if ('\0' < (char)lVar6) {
    bVar13 = *(byte *)(lVar4 + 0x12 + (ulong)uVar15 * 0x14);
    if (((byte)(&_myanmar_syllable_machine_trans_keys)[iVar11 * 2] <= bVar13) &&
       (bVar13 <= (byte)(&DAT_00102081)[iVar11 * 2])) {
      lVar6 = (long)(int)((uint)bVar13 -
                         (uint)(byte)(&_myanmar_syllable_machine_trans_keys)[iVar11 * 2]);
    }
  }
  iVar5 = (int)(char)_myanmar_syllable_machine_indicies[lVar6 + lVar14];
  do {
    iVar11 = (int)(char)_myanmar_syllable_machine_trans_targs[iVar5];
    if (_myanmar_syllable_machine_trans_actions[iVar5] == '\0') {
switchD_00101203_default:
      uVar15 = uVar15 + 1;
      goto LAB_0010122b;
    }
    switch(_myanmar_syllable_machine_trans_actions[iVar5]) {
    case 3:
      if (uVar16 < uVar15 + 1) {
        pbVar10 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        pbVar2 = (byte *)(lVar4 + 0x23 + ((ulong)(uVar15 - uVar16) + (ulong)uVar16) * 0x14);
        bVar13 = (char)local_34 << 4 | 2;
        pbVar9 = pbVar10;
        if (((int)pbVar2 - (int)pbVar10 & 4U) != 0) {
          *pbVar10 = bVar13;
          pbVar9 = pbVar10 + 0x14;
          if (pbVar2 == pbVar10 + 0x14) break;
        }
        do {
          *pbVar9 = bVar13;
          pbVar10 = pbVar9 + 0x28;
          pbVar9[0x14] = bVar13;
          pbVar9 = pbVar10;
        } while (pbVar2 != pbVar10);
      }
      break;
    case 4:
      if (uVar16 < uVar15 + 1) {
        pbVar10 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        pbVar2 = (byte *)(lVar4 + 0x23 + ((ulong)(uVar15 - uVar16) + (ulong)uVar16) * 0x14);
        bVar13 = (char)local_34 << 4 | 2;
        if (((int)pbVar2 - (int)pbVar10 & 4U) != 0) {
          *pbVar10 = bVar13;
          pbVar10 = pbVar10 + 0x14;
          if (pbVar2 == pbVar10) break;
        }
        do {
          *pbVar10 = bVar13;
          pbVar9 = pbVar10 + 0x28;
          pbVar10[0x14] = bVar13;
          pbVar10 = pbVar9;
        } while (pbVar2 != pbVar9);
      }
      break;
    case 5:
      if (uVar16 < uVar15) {
        pcVar7 = (char *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        cVar12 = (char)local_34 << 4;
        pcVar1 = (char *)(lVar4 + 0x23 + ((ulong)((uVar15 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        if (((int)pcVar1 - (int)pcVar7 & 4U) != 0) {
          *pcVar7 = cVar12;
          pcVar7 = pcVar7 + 0x14;
          if (pcVar7 == pcVar1) goto LAB_00101440;
        }
        do {
          *pcVar7 = cVar12;
          pcVar8 = pcVar7 + 0x28;
          pcVar7[0x14] = cVar12;
          pcVar7 = pcVar8;
        } while (pcVar8 != pcVar1);
      }
      goto LAB_00101440;
    case 6:
      if (uVar16 < uVar15 + 1) {
        pcVar7 = (char *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        cVar12 = (char)local_34 << 4;
        pcVar1 = (char *)(lVar4 + 0x23 + ((ulong)(uVar15 - uVar16) + (ulong)uVar16) * 0x14);
        if (((int)pcVar1 - (int)pcVar7 & 4U) != 0) {
          *pcVar7 = cVar12;
          pcVar7 = pcVar7 + 0x14;
          if (pcVar7 == pcVar1) break;
        }
        do {
          *pcVar7 = cVar12;
          pcVar8 = pcVar7 + 0x28;
          pcVar7[0x14] = cVar12;
          pcVar7 = pcVar8;
        } while (pcVar8 != pcVar1);
      }
      break;
    case 7:
      if (uVar16 < uVar15) {
        pbVar10 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar13 = (char)local_34 << 4 | 1;
        pbVar2 = (byte *)(lVar4 + 0x23 + ((ulong)((uVar15 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar9 = pbVar10;
        if (((int)pbVar2 - (int)pbVar10 & 4U) != 0) {
          *pbVar10 = bVar13;
          pbVar9 = pbVar10 + 0x14;
          if (pbVar10 + 0x14 == pbVar2) goto LAB_00101340;
        }
        do {
          *pbVar9 = bVar13;
          pbVar10 = pbVar9 + 0x28;
          pbVar9[0x14] = bVar13;
          pbVar9 = pbVar10;
        } while (pbVar10 != pbVar2);
      }
LAB_00101340:
      iVar5 = local_34 + 1;
      local_34 = 1;
      if (iVar5 != 0x10) {
        local_34 = iVar5;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      goto LAB_0010122b;
    case 8:
      if (uVar16 < uVar15 + 1) {
        pbVar10 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        pbVar2 = (byte *)(lVar4 + 0x23 + ((ulong)(uVar15 - uVar16) + (ulong)uVar16) * 0x14);
        bVar13 = (char)local_34 << 4 | 1;
        pbVar9 = pbVar10;
        if (((int)pbVar2 - (int)pbVar10 & 4U) != 0) {
          *pbVar10 = bVar13;
          pbVar9 = pbVar10 + 0x14;
          if (pbVar10 + 0x14 == pbVar2) goto LAB_001012c0;
        }
        do {
          *pbVar9 = bVar13;
          pbVar10 = pbVar9 + 0x28;
          pbVar9[0x14] = bVar13;
          pbVar9 = pbVar10;
        } while (pbVar10 != pbVar2);
      }
LAB_001012c0:
      iVar5 = local_34 + 1;
      local_34 = 1;
      if (iVar5 != 0x10) {
        local_34 = iVar5;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      uVar15 = uVar15 + 1;
      goto LAB_0010122b;
    case 9:
      if (uVar16 < uVar15) {
        pbVar10 = (byte *)(lVar4 + 0xf + (ulong)uVar16 * 0x14);
        bVar13 = (char)local_34 << 4 | 2;
        pbVar2 = (byte *)(lVar4 + 0x23 + ((ulong)((uVar15 - 1) - uVar16) + (ulong)uVar16) * 0x14);
        pbVar9 = pbVar10;
        if (((int)pbVar2 - (int)pbVar10 & 4U) != 0) {
          *pbVar10 = bVar13;
          pbVar9 = pbVar10 + 0x14;
          if (pbVar10 + 0x14 == pbVar2) goto LAB_00101440;
        }
        do {
          *pbVar9 = bVar13;
          pbVar10 = pbVar9 + 0x28;
          pbVar9[0x14] = bVar13;
          pbVar9 = pbVar10;
        } while (pbVar10 != pbVar2);
      }
LAB_00101440:
      local_34 = local_34 + 1;
      if (local_34 != 0x10) goto LAB_0010122b;
      goto LAB_001013d5;
    default:
      goto switchD_00101203_default;
    }
    uVar15 = uVar15 + 1;
    local_34 = local_34 + 1;
    if (local_34 == 0x10) {
LAB_001013d5:
      local_34 = 1;
    }
LAB_0010122b:
    lVar17 = (long)iVar11;
    if (_myanmar_syllable_machine_to_state_actions[lVar17] == '\x01') {
      uVar16 = 0;
    }
    if (uVar3 != uVar15) break;
    if (*(short *)("serpsvbaswlbstspfhprferpfwlbftsp" + lVar17 * 2 + 0x20) < 1) {
      return;
    }
    iVar5 = *(short *)("serpsvbaswlbstspfhprferpfwlbftsp" + lVar17 * 2 + 0x20) + -1;
  } while( true );
  lVar14 = (long)*(short *)(_myanmar_syllable_machine_index_offsets + lVar17 * 2);
  lVar6 = (long)(char)_myanmar_syllable_machine_key_spans[lVar17];
  if (_myanmar_syllable_machine_from_state_actions[lVar17] == '\x02') {
    uVar16 = uVar15;
  }
  goto LAB_0010119c;
}


