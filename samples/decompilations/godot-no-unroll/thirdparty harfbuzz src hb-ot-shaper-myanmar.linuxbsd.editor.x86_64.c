
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
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char cVar10;
  char cVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  undefined1 local_5a;
  ulong uVar27;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  cVar10 = hb_buffer_t::message(param_3,param_2,"start reordering myanmar");
  local_5a = 0;
  if (cVar10 != '\0') {
    local_5a = hb_syllabic_insert_dotted_circles(param_2,param_3,1,0xb,-1,-1);
    uVar3 = *(uint *)(param_3 + 0x60);
    if (uVar3 != 0) {
      lVar17 = *(long *)(param_3 + 0x70);
      uVar21 = 0;
      bVar2 = *(byte *)(lVar17 + 0xf);
      pbVar18 = (byte *)(lVar17 + 0x23);
      do {
        uVar21 = uVar21 + 1;
        if (uVar3 == uVar21) break;
        bVar1 = *pbVar18;
        pbVar18 = pbVar18 + 0x14;
      } while (bVar2 == bVar1);
      uVar25 = 0;
      do {
        uVar22 = uVar21;
        if ((bVar2 & 0xe) == 0) {
          uVar21 = uVar25 + 3;
          if ((((uVar22 < uVar21) || (*(char *)(lVar17 + 0x12 + (ulong)uVar25 * 0x14) != '\x0f')) ||
              (*(char *)(lVar17 + 0x12 + (ulong)(uVar25 + 1) * 0x14) != ' ')) ||
             (*(char *)(lVar17 + 0x12 + (ulong)(uVar25 + 2) * 0x14) != '\x04')) {
            uVar21 = uVar25;
            cVar23 = '\0';
            if (uVar25 < uVar22) goto LAB_00100295;
          }
          else {
            cVar23 = cVar10;
            if (uVar21 < uVar22) {
LAB_00100295:
              uVar12 = (ulong)uVar21;
              pbVar18 = (byte *)(lVar17 + 0xc + uVar12 * 0x14);
              do {
                if ((((*pbVar18 & 0x20) == 0) && (pbVar18[6] < 0x20)) &&
                   ((1 << (pbVar18[6] & 0x1f) & 0x48c06U) != 0)) goto LAB_001002de;
                uVar21 = (int)uVar12 + 1;
                uVar12 = (ulong)uVar21;
                pbVar18 = pbVar18 + 0x14;
              } while (uVar22 != uVar21);
            }
            uVar12 = (ulong)uVar25;
LAB_001002de:
            uVar21 = -(uint)(cVar23 != '\0') & 3;
            if (uVar25 < uVar21 + uVar25) {
              puVar19 = (undefined1 *)(lVar17 + 0x13 + (ulong)uVar25 * 0x14);
              do {
                *puVar19 = 5;
                puVar19 = puVar19 + 0x14;
              } while (puVar19 !=
                       (undefined1 *)(lVar17 + 0x27 + ((ulong)(uVar21 - 1) + (ulong)uVar25) * 0x14))
              ;
            }
            if (CARRY4(uVar21,uVar25)) {
              uVar21 = 0;
            }
            uVar21 = uVar21 + uVar25;
            if (uVar21 < (uint)uVar12) {
              puVar19 = (undefined1 *)(lVar17 + 0x13 + (ulong)uVar21 * 0x14);
              do {
                *puVar19 = 3;
                puVar19 = puVar19 + 0x14;
              } while (puVar19 !=
                       (undefined1 *)
                       (lVar17 + 0x27 +
                       ((ulong)(((uint)uVar12 - uVar21) - 1) + (ulong)uVar21) * 0x14));
            }
            else {
              uVar12 = (ulong)uVar21;
            }
            if ((uint)uVar12 < uVar22) {
              uVar21 = (uint)uVar12 + 1;
              *(undefined1 *)(lVar17 + 0x13 + uVar12 * 0x14) = 4;
              if (uVar21 < uVar22) {
                cVar28 = '\x05';
                lVar20 = lVar17 + (ulong)uVar21 * 0x14;
                cVar23 = *(char *)(lVar20 + 0x12);
                if (cVar23 == '$') goto LAB_001003db;
                do {
                  if (cVar23 == '\x16') {
                    cVar11 = '\x02';
                  }
                  else if (cVar23 == '(') {
                    cVar11 = *(char *)(lVar17 + 0x13 + uVar12 * 0x14);
                  }
                  else {
                    cVar11 = cVar28;
                    if (cVar28 == '\x05') {
                      if (cVar23 == '\x15') {
                        cVar28 = '\b';
                        cVar11 = '\b';
                      }
                    }
                    else if (cVar28 == '\b') {
                      if (cVar23 == '\t') {
                        cVar11 = '\a';
                      }
                      else {
                        cVar11 = (cVar23 != '\x15') + '\b';
                        if (cVar23 != '\x15') {
                          cVar28 = '\t';
                        }
                      }
                    }
                  }
                  *(char *)(lVar20 + 0x13) = cVar11;
                  lVar9 = lVar20;
                  while( true ) {
                    if (uVar21 == uVar22 - 1) goto LAB_001003f0;
                    uVar12 = (ulong)uVar21;
                    lVar20 = lVar9 + 0x14;
                    cVar23 = *(char *)(lVar9 + 0x26);
                    uVar21 = uVar21 + 1;
                    if (cVar23 != '$') break;
LAB_001003db:
                    *(undefined1 *)(lVar20 + 0x13) = 3;
                    lVar9 = lVar20;
                  }
                } while( true );
              }
            }
          }
LAB_001003f0:
          hb_buffer_t::sort((uint)param_3,uVar25,
                            (_func_int_hb_glyph_info_t_ptr_hb_glyph_info_t_ptr *)(ulong)uVar22);
          if (uVar25 < uVar22) {
            uVar12 = (ulong)uVar22;
            pcVar13 = (char *)(lVar17 + 0x13 + (ulong)uVar25 * 0x14);
            uVar21 = uVar22;
            do {
              while ((uVar29 = uVar25, *pcVar13 == '\x02' &&
                     (uVar21 = uVar29, uVar22 == (uint)uVar12))) {
                uVar12 = (ulong)uVar29;
                pcVar13 = pcVar13 + 0x14;
                uVar25 = uVar29 + 1;
                if (uVar22 == uVar29 + 1) goto LAB_00100448;
              }
              uVar25 = uVar29 + 1;
              pcVar13 = pcVar13 + 0x14;
              uVar29 = uVar21;
            } while (uVar22 != uVar25);
LAB_00100448:
            uVar25 = *(uint *)(param_3 + 0x60);
            uVar15 = (ulong)uVar25;
            lVar20 = *(long *)(param_3 + 0x70);
            uVar21 = (uint)uVar12;
            if (uVar21 < uVar29) {
              uVar31 = uVar29 + 1;
              uVar32 = uVar12;
              if (uVar25 < uVar21) {
                uVar27 = uVar15;
                uVar26 = uVar31;
                if (uVar31 <= uVar25) goto LAB_00100521;
              }
              else {
                uVar27 = uVar12;
                uVar26 = uVar25;
                if (uVar31 <= uVar25) {
                  uVar26 = uVar31;
                }
LAB_00100521:
                uVar25 = (uint)uVar27;
                if ((uVar25 + 2 <= uVar26) && (uVar25 < uVar26 - 1)) {
                  puVar14 = (undefined8 *)(lVar20 + uVar27 * 0x14);
                  puVar16 = (undefined8 *)(lVar20 + (ulong)(uVar26 - 1) * 0x14);
                  do {
                    uVar8 = puVar14[1];
                    uVar4 = *(undefined4 *)(puVar16 + 2);
                    uVar24 = (int)uVar27 + 1;
                    uVar27 = (ulong)uVar24;
                    uVar6 = *puVar16;
                    uVar7 = puVar16[1];
                    *puVar16 = *puVar14;
                    puVar16[1] = uVar8;
                    *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar14 + 2);
                    *(undefined4 *)(puVar14 + 2) = uVar4;
                    *puVar14 = uVar6;
                    puVar14[1] = uVar7;
                    puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                    puVar16 = (undefined8 *)((long)puVar16 + -0x14);
                  } while (uVar24 < ((uVar25 - 1) + uVar26) - uVar24);
                  uVar15 = (ulong)*(uint *)(param_3 + 0x60);
                }
                uVar25 = (uint)uVar15;
                if (param_3[0x5b] != (hb_buffer_t)0x0) {
                  if (uVar25 < uVar21) {
                    uVar27 = uVar15;
                    if (uVar25 < uVar31) goto LAB_001005b0;
                  }
                  else {
                    uVar27 = uVar12;
                    if (uVar25 < uVar31) {
                      uVar31 = uVar25;
                    }
                  }
                  uVar21 = (uint)uVar27;
                  if ((uVar21 + 2 <= uVar31) && (uVar25 = uVar31 - 1, uVar21 < uVar25)) {
                    puVar14 = (undefined8 *)(*(long *)(param_3 + 0x80) + uVar27 * 0x14);
                    puVar16 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar25 * 0x14);
                    do {
                      uVar8 = puVar14[1];
                      uVar4 = *(undefined4 *)(puVar16 + 2);
                      uVar6 = *puVar16;
                      uVar7 = puVar16[1];
                      *puVar16 = *puVar14;
                      puVar16[1] = uVar8;
                      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar14 + 2);
                      uVar26 = uVar25 - 1;
                      *(undefined4 *)(puVar14 + 2) = uVar4;
                      uVar24 = (uVar21 + uVar31) - uVar25;
                      *puVar14 = uVar6;
                      puVar14[1] = uVar7;
                      puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                      puVar16 = (undefined8 *)((long)puVar16 + -0x14);
                      uVar25 = uVar26;
                    } while (uVar24 < uVar26);
                    uVar15 = (ulong)*(uint *)(param_3 + 0x60);
                  }
                }
              }
LAB_001005b0:
              do {
                while( true ) {
                  uVar21 = (uint)uVar32;
                  uVar25 = (uint)uVar15;
                  uVar31 = (int)uVar12 + 1;
                  if (*(char *)(lVar17 + 0x12 + uVar12 * 0x14) != '\x16') break;
                  uVar12 = uVar15;
                  if (uVar21 <= uVar25) {
                    uVar12 = uVar32;
                  }
                  uVar26 = uVar31;
                  if (uVar25 <= uVar31) {
                    uVar26 = uVar25;
                  }
                  uVar25 = (uint)uVar12;
                  if ((uVar25 + 2 <= uVar26) && (uVar25 < uVar26 - 1)) {
                    puVar14 = (undefined8 *)(*(long *)(param_3 + 0x70) + uVar12 * 0x14);
                    puVar16 = (undefined8 *)(*(long *)(param_3 + 0x70) + (ulong)(uVar26 - 1) * 0x14)
                    ;
                    do {
                      uVar8 = puVar14[1];
                      uVar4 = *(undefined4 *)(puVar16 + 2);
                      uVar24 = (int)uVar12 + 1;
                      uVar12 = (ulong)uVar24;
                      uVar6 = *puVar16;
                      uVar7 = puVar16[1];
                      *puVar16 = *puVar14;
                      puVar16[1] = uVar8;
                      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar14 + 2);
                      *(undefined4 *)(puVar14 + 2) = uVar4;
                      *puVar14 = uVar6;
                      puVar14[1] = uVar7;
                      puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                      puVar16 = (undefined8 *)((long)puVar16 + -0x14);
                    } while (uVar24 < ((uVar26 - 1) + uVar25) - uVar24);
                    uVar15 = (ulong)*(uint *)(param_3 + 0x60);
                  }
                  uVar25 = (uint)uVar15;
                  if (param_3[0x5b] != (hb_buffer_t)0x0) {
                    if (uVar25 < uVar21) {
                      uVar21 = uVar25;
                    }
                    uVar26 = uVar31;
                    if (uVar25 <= uVar31) {
                      uVar26 = uVar25;
                    }
                    if ((uVar21 + 2 <= uVar26) && (uVar25 = uVar26 - 1, uVar21 < uVar25)) {
                      puVar14 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar21 * 0x14);
                      puVar16 = (undefined8 *)(*(long *)(param_3 + 0x80) + (ulong)uVar25 * 0x14);
                      do {
                        uVar8 = puVar14[1];
                        uVar4 = *(undefined4 *)(puVar16 + 2);
                        uVar6 = *puVar16;
                        uVar7 = puVar16[1];
                        *puVar16 = *puVar14;
                        puVar16[1] = uVar8;
                        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar14 + 2);
                        uVar24 = uVar25 - 1;
                        *(undefined4 *)(puVar14 + 2) = uVar4;
                        uVar30 = (uVar21 + uVar26) - uVar25;
                        *puVar14 = uVar6;
                        puVar14[1] = uVar7;
                        puVar14 = (undefined8 *)((long)puVar14 + 0x14);
                        puVar16 = (undefined8 *)((long)puVar16 + -0x14);
                        uVar25 = uVar24;
                      } while (uVar30 < uVar24);
                      uVar15 = (ulong)*(uint *)(param_3 + 0x60);
                    }
                  }
                  uVar12 = (ulong)uVar31;
                  uVar32 = (ulong)uVar31;
                  if (uVar29 < uVar31) goto LAB_00100657;
                }
                uVar12 = (ulong)uVar31;
              } while (uVar31 <= uVar29);
LAB_00100657:
              uVar25 = (uint)uVar15;
              lVar20 = *(long *)(param_3 + 0x70);
            }
          }
          else {
            uVar25 = *(uint *)(param_3 + 0x60);
            lVar20 = *(long *)(param_3 + 0x70);
          }
        }
        else {
          uVar25 = *(uint *)(param_3 + 0x60);
          lVar20 = lVar17;
        }
        bVar2 = *(byte *)(lVar20 + 0xf + (ulong)uVar22 * 0x14);
        lVar17 = lVar20 + (ulong)(uVar22 + 1) * 0x14;
        uVar21 = uVar22;
        do {
          uVar21 = uVar21 + 1;
          if (uVar25 <= uVar21) break;
          pbVar18 = (byte *)(lVar17 + 0xf);
          lVar17 = lVar17 + 0x14;
        } while (bVar2 == *pbVar18);
        lVar17 = lVar20;
        uVar25 = uVar22;
      } while (uVar22 < uVar3);
    }
    hb_buffer_t::message(param_3,param_2,"end reordering myanmar");
  }
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0x3f);
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
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
      uVar5 = *(uint *)(this + 100);
      if (!param_4) {
        if (param_2 < uVar5) {
          puVar4 = (uint *)(*(long *)(this + 0x78) + 4 + (ulong)param_2 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 5;
          } while (param_2 < *(uint *)(this + 100));
        }
        uVar5 = *(uint *)(this + 0x5c);
        if (uVar5 < param_3) {
          lVar3 = *(long *)(this + 0x70);
          puVar4 = (uint *)(lVar3 + 4 + (ulong)uVar5 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + ((ulong)((param_3 - uVar5) - 1) + (ulong)uVar5) * 0x14)
                   != puVar4);
        }
        goto LAB_00100960;
      }
      iVar1 = *(int *)(this + 0x1c);
      uVar11 = *(uint *)(this + 0x5c);
      lVar3 = *(long *)(this + 0x70);
      lVar8 = *(long *)(this + 0x78);
      if (uVar11 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar5) goto LAB_00100960;
        if (iVar1 == 2) goto LAB_00100cfe;
LAB_00100ab5:
        lVar10 = lVar8 + (ulong)(uVar5 - 1) * 0x14;
        uVar6 = (ulong)param_2;
        uVar7 = *(uint *)(lVar10 + 8);
        lVar12 = lVar8 + uVar6 * 0x14;
        uVar13 = *(uint *)(lVar12 + 8);
        if (uVar7 < uVar13) {
          uVar13 = uVar7;
          lVar12 = lVar10;
        }
        puVar4 = (uint *)(lVar12 + 8);
        if (local_44 <= uVar13) {
          puVar4 = &local_44;
        }
        uVar7 = *puVar4;
        if (param_2 == uVar5) {
LAB_00100d95:
          if (param_3 == uVar11) goto LAB_00100960;
LAB_00100d9e:
          uVar9 = (ulong)(param_3 - 1);
          uVar6 = (ulong)uVar11;
          goto LAB_00100da5;
        }
        local_50 = uVar6 * 0x14;
        lVar12 = (ulong)(uVar5 - 1) * 0x14;
        uVar13 = *(uint *)(lVar8 + 8 + local_50);
        lVar10 = lVar8 + lVar12;
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar7 == uVar13) {
LAB_00100c5d:
          if (param_2 < uVar5) {
            do {
              if (*(uint *)(lVar10 + 8) == uVar7) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_1;
              lVar10 = lVar10 + -0x14;
            } while (lVar10 != lVar8 + -0x14 + lVar12 + (ulong)((uVar5 - param_2) - 1) * -0x14);
LAB_00100b79:
            uVar11 = *(uint *)(this + 0x5c);
          }
        }
        else {
          if (uVar7 != uVar2) goto LAB_00100d52;
          if (uVar7 == uVar13) goto LAB_00100c5d;
          if (param_2 < uVar5) {
            puVar4 = (uint *)(lVar8 + 4 + local_50);
            do {
              if (puVar4[1] == uVar2) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar8 + 0x18 + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
            goto LAB_00100b79;
          }
        }
        if (uVar11 == param_3) goto LAB_00100960;
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
LAB_00100ba3:
        if (uVar5 != uVar7) {
          if (uVar13 != uVar7) goto LAB_00100dc6;
          if (uVar5 != uVar7) {
            if (uVar11 < param_3) {
              puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
              do {
                if (puVar4[1] == uVar13) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar4 = *puVar4 | param_1;
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14));
            }
            goto LAB_00100960;
          }
        }
        if (uVar11 < param_3) {
          lVar8 = lVar3 + uVar9 * 0x14;
          do {
            if (*(uint *)(lVar8 + 8) == uVar7) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
            lVar8 = lVar8 + -0x14;
          } while (lVar8 != lVar3 + -0x14 + uVar9 * 0x14 + (ulong)((int)uVar9 - uVar11) * -0x14);
        }
      }
      else {
        if (iVar1 == 2) {
          if (uVar11 < param_3) {
            puVar4 = (uint *)(lVar3 + 8 + (ulong)uVar11 * 0x14);
            local_44 = 0xffffffff;
            do {
              if (*puVar4 < local_44) {
                local_44 = *puVar4;
              }
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar3 + 0x1c +
                                       ((ulong)((param_3 - uVar11) - 1) + (ulong)uVar11) * 0x14));
          }
          else {
            local_44 = 0xffffffff;
          }
          uVar7 = local_44;
          if (param_2 != uVar5) {
LAB_00100cfe:
            uVar6 = (ulong)param_2;
            uVar7 = local_44;
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 8 + uVar6 * 0x14);
              do {
                if (*puVar4 < uVar7) {
                  uVar7 = *puVar4;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x1c + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
              if (param_2 == uVar5) goto LAB_00100d95;
            }
            local_50 = uVar6 * 0x14;
LAB_00100d52:
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 4 + local_50);
              do {
                if (puVar4[1] != uVar7) {
                  *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                  *puVar4 = *puVar4 | param_1;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x18 +
                                         ((ulong)((uVar5 - param_2) - 1) + (ulong)param_2) * 0x14));
              uVar11 = *(uint *)(this + 0x5c);
            }
            goto LAB_00100d95;
          }
          goto LAB_00100d9e;
        }
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar7 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        if (uVar13 < uVar7) {
          uVar7 = uVar13;
        }
        local_44 = uVar7;
        if (param_2 != uVar5) goto LAB_00100ab5;
LAB_00100da5:
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        if (iVar1 != 2) goto LAB_00100ba3;
LAB_00100dc6:
        if (uVar11 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
          do {
            if (puVar4[1] != uVar7) {
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
            }
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14) != puVar4);
        }
      }
      goto LAB_00100960;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        lVar3 = *(long *)(this + 0x70);
        puVar4 = (uint *)(lVar3 + 4 + (ulong)param_2 * 0x14);
        do {
          *puVar4 = *puVar4 | param_1;
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 +
                                   ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14));
      }
      goto LAB_00100960;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00100960;
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
  }
  lVar3 = *(long *)(this + 0x70);
  if (param_2 != param_3) {
    if (*(int *)(this + 0x1c) == 2) {
      if (param_2 < param_3) {
        uVar6 = (ulong)param_2;
        puVar4 = (uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar5 = 0xffffffff;
        do {
          if (*puVar4 < uVar5) {
            uVar5 = *puVar4;
          }
          puVar4 = puVar4 + 5;
        } while ((uint *)(lVar3 + 0x1c + (((param_3 - param_2) - 1) + uVar6) * 0x14) != puVar4);
        puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
        do {
          if (uVar5 != puVar4[1]) {
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
          }
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 + (((param_3 - param_2) - 1) + uVar6) * 0x14));
      }
    }
    else {
      lVar12 = (ulong)(param_3 - 1) * 0x14;
      lVar10 = (ulong)param_2 * 0x14;
      lVar8 = lVar3 + lVar12;
      uVar5 = *(uint *)(lVar3 + 8 + lVar10);
      uVar11 = *(uint *)(lVar8 + 8);
      if (uVar11 < uVar5) {
        if (param_2 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + lVar10);
          do {
            if (puVar4[1] == uVar11) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 +
                           ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14) != puVar4);
        }
      }
      else if (param_2 < param_3) {
        do {
          if (*(uint *)(lVar8 + 8) == uVar5) break;
          *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
          *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
          lVar8 = lVar8 + -0x14;
        } while (lVar3 + -0x14 + lVar12 + (ulong)((param_3 - param_2) - 1) * -0x14 != lVar8);
      }
    }
  }
LAB_00100960:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int local_34;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    return;
  }
  lVar6 = 0x29;
  lVar10 = 0;
  iVar9 = 0;
  uVar11 = 0;
  lVar4 = *(long *)(param_1 + 0x70);
  local_34 = 1;
  uVar12 = uVar11;
LAB_0010107c:
  if ('\0' < (char)lVar6) {
    bVar2 = *(byte *)(lVar4 + 0x12 + (ulong)uVar11 * 0x14);
    if (((byte)(&_myanmar_syllable_machine_trans_keys)[iVar9 * 2] <= bVar2) &&
       (bVar2 <= (byte)(&DAT_00101ea1)[iVar9 * 2])) {
      lVar6 = (long)(int)((uint)bVar2 -
                         (uint)(byte)(&_myanmar_syllable_machine_trans_keys)[iVar9 * 2]);
    }
  }
  iVar5 = (int)(char)_myanmar_syllable_machine_indicies[lVar6 + lVar10];
  do {
    iVar9 = (int)(char)_myanmar_syllable_machine_trans_targs[iVar5];
    if (_myanmar_syllable_machine_trans_actions[iVar5] == '\0') {
switchD_001010e3_default:
      uVar11 = uVar11 + 1;
      goto LAB_0010110b;
    }
    uVar1 = uVar11;
    switch(_myanmar_syllable_machine_trans_actions[iVar5]) {
    case 3:
      if (uVar12 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pbVar8 = (char)local_34 << 4 | 2;
          pbVar8 = pbVar8 + 0x14;
        } while ((byte *)(lVar4 + 0x23 + ((ulong)(uVar11 - uVar12) + (ulong)uVar12) * 0x14) !=
                 pbVar8);
      }
      goto LAB_00101304;
    case 4:
      if (uVar12 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pbVar8 = (char)local_34 << 4 | 2;
          pbVar8 = pbVar8 + 0x14;
        } while ((byte *)(lVar4 + 0x23 + ((ulong)(uVar11 - uVar12) + (ulong)uVar12) * 0x14) !=
                 pbVar8);
      }
LAB_00101304:
      uVar11 = uVar11 + 1;
      local_34 = local_34 + 1;
      if (local_34 != 0x10) goto LAB_0010110b;
      goto LAB_00101319;
    case 5:
      if (uVar12 < uVar11) {
        pcVar7 = (char *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pcVar7 = (char)local_34 << 4;
          pcVar7 = pcVar7 + 0x14;
        } while (pcVar7 != (char *)(lVar4 + 0x23 +
                                   ((ulong)((uVar11 - 1) - uVar12) + (ulong)uVar12) * 0x14));
      }
      break;
    case 6:
      uVar1 = uVar11 + 1;
      if (uVar12 < uVar1) {
        pcVar7 = (char *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pcVar7 = (char)local_34 << 4;
          pcVar7 = pcVar7 + 0x14;
        } while (pcVar7 != (char *)(lVar4 + 0x23 + ((ulong)uVar12 + (ulong)(uVar11 - uVar12)) * 0x14
                                   ));
      }
      break;
    case 7:
      if (uVar12 < uVar11) {
        pbVar8 = (byte *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pbVar8 = (char)local_34 << 4 | 1;
          pbVar8 = pbVar8 + 0x14;
        } while (pbVar8 != (byte *)(lVar4 + 0x23 +
                                   ((ulong)((uVar11 - 1) - uVar12) + (ulong)uVar12) * 0x14));
      }
      iVar5 = local_34 + 1;
      local_34 = 1;
      if (iVar5 != 0x10) {
        local_34 = iVar5;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      goto LAB_0010110b;
    case 8:
      if (uVar12 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pbVar8 = (char)local_34 << 4 | 1;
          pbVar8 = pbVar8 + 0x14;
        } while (pbVar8 != (byte *)(lVar4 + 0x23 + ((ulong)(uVar11 - uVar12) + (ulong)uVar12) * 0x14
                                   ));
      }
      iVar5 = local_34 + 1;
      local_34 = 1;
      if (iVar5 != 0x10) {
        local_34 = iVar5;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      uVar11 = uVar11 + 1;
      goto LAB_0010110b;
    case 9:
      if (uVar12 < uVar11) {
        pbVar8 = (byte *)(lVar4 + 0xf + (ulong)uVar12 * 0x14);
        do {
          *pbVar8 = (char)local_34 << 4 | 2;
          pbVar8 = pbVar8 + 0x14;
        } while (pbVar8 != (byte *)(lVar4 + 0x23 +
                                   ((ulong)((uVar11 - 1) - uVar12) + (ulong)uVar12) * 0x14));
      }
      break;
    default:
      goto switchD_001010e3_default;
    }
    uVar11 = uVar1;
    local_34 = local_34 + 1;
    if (local_34 == 0x10) {
LAB_00101319:
      local_34 = 1;
    }
LAB_0010110b:
    lVar13 = (long)iVar9;
    if (_myanmar_syllable_machine_to_state_actions[lVar13] == '\x01') {
      uVar12 = 0;
    }
    if (uVar3 != uVar11) break;
    if (*(short *)("serpsvbaswlbstspfhprferpfwlbftsp" + lVar13 * 2 + 0x20) < 1) {
      return;
    }
    iVar5 = *(short *)("serpsvbaswlbstspfhprferpfwlbftsp" + lVar13 * 2 + 0x20) + -1;
  } while( true );
  lVar10 = (long)*(short *)(_myanmar_syllable_machine_index_offsets + lVar13 * 2);
  lVar6 = (long)(char)_myanmar_syllable_machine_key_spans[lVar13];
  if (_myanmar_syllable_machine_from_state_actions[lVar13] == '\x02') {
    uVar12 = uVar11;
  }
  goto LAB_0010107c;
}


