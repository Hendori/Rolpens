
/* decompose_khmer(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int*, unsigned
   int*) */

bool decompose_khmer(hb_ot_shape_normalize_context_t *param_1,uint param_2,uint *param_3,
                    uint *param_4)

{
  long lVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x17be:
    *param_3 = 0x17c1;
    *param_4 = 0x17be;
    break;
  case 0x17bf:
    *param_3 = 0x17c1;
    *param_4 = 0x17bf;
    return true;
  case 0x17c0:
    *param_3 = 0x17c1;
    *param_4 = 0x17c0;
    break;
  default:
    lVar1 = *(long *)(param_1 + 0x18);
    *param_3 = param_2;
    *param_4 = 0;
    iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
    return iVar2 != 0;
  case 0x17c4:
    *param_3 = 0x17c1;
    *param_4 = 0x17c4;
    break;
  case 0x17c5:
    *param_3 = 0x17c1;
    *param_4 = 0x17c5;
  }
  return true;
}



/* setup_masks_khmer(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void setup_masks_khmer(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0x40);
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



/* compose_khmer(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int, unsigned int*)
    */

bool compose_khmer(hb_ot_shape_normalize_context_t *param_1,uint param_2,uint param_3,uint *param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000034;
  bool bVar5;
  
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
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    bVar5 = false;
  }
  else {
    iVar4 = (**(code **)(lVar1 + 0x40))(lVar1,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0x80))
    ;
    bVar5 = iVar4 != 0;
  }
  return bVar5;
}



/* data_destroy_khmer(void*) */

void data_destroy_khmer(void *param_1)

{
  free(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* override_features_khmer(hb_ot_shape_planner_t*) */

void override_features_khmer(hb_ot_shape_planner_t *param_1)

{
  hb_ot_shape_planner_t *phVar1;
  
  phVar1 = param_1 + 0x28;
  hb_ot_map_builder_t::add_feature(phVar1,0x636c6967,1,1);
  if (__hb_options == 0) {
    _hb_options_init();
  }
  if ((__hb_options & 4) != 0) {
    hb_ot_map_builder_t::add_feature(phVar1,0x6b65726e,1,0);
  }
  hb_ot_map_builder_t::add_feature(phVar1,0x6c696761,1,0);
  return;
}



/* collect_features_khmer(hb_ot_shape_planner_t*) */

void collect_features_khmer(hb_ot_shape_planner_t *param_1)

{
  hb_ot_shape_planner_t *phVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  
  phVar1 = param_1 + 0x28;
  pcVar7 = "ferpL";
  puVar6 = &khmer_features;
  uVar8 = (uint)phVar1;
  hb_ot_map_builder_t::add_pause
            (uVar8,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_pause
            (uVar8,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  hb_ot_map_builder_t::add_feature(phVar1,0x6c6f636c,0x41,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x63636d70,0x41,1);
  do {
    puVar2 = puVar6 + 1;
    uVar5 = *puVar6;
    puVar6 = puVar6 + 2;
    hb_ot_map_builder_t::add_feature(phVar1,uVar5,*puVar2,1);
  } while (puVar6 != &DAT_001008c8);
  hb_ot_map_builder_t::add_pause
            (uVar8,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  do {
    pcVar3 = pcVar7 + 0x2c;
    pcVar4 = pcVar7 + 0x28;
    pcVar7 = pcVar7 + 8;
    hb_ot_map_builder_t::add_feature(phVar1,*(undefined4 *)pcVar4,*(undefined4 *)pcVar3,1);
  } while (pcVar7 != "rafcL");
  return;
}



/* data_create_khmer(hb_ot_shape_plan_t const*) */

uint * data_create_khmer(hb_ot_shape_plan_t *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar4 = (uint *)calloc(1,0x24);
  if (puVar4 != (uint *)0x0) {
    puVar9 = &DAT_001008a4;
    puVar6 = puVar4;
    do {
      if ((*puVar9 & 1) == 0) {
        iVar5 = *(int *)(param_1 + 0x3c) + -1;
        uVar8 = 0;
        if (-1 < iVar5) {
          iVar7 = 0;
          do {
            uVar3 = (uint)(iVar7 + iVar5) >> 1;
            puVar1 = (uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar3 * 0x24);
            uVar2 = *puVar1;
            if (puVar9[-1] < uVar2) {
              iVar5 = uVar3 - 1;
            }
            else {
              if (puVar9[-1] <= uVar2) {
                uVar8 = puVar1[7];
                break;
              }
              iVar7 = uVar3 + 1;
            }
          } while (iVar7 <= iVar5);
        }
      }
      else {
        uVar8 = 0;
      }
      puVar9 = puVar9 + 2;
      *puVar6 = uVar8;
      puVar6 = puVar6 + 1;
    } while (puVar9 != (uint *)&DAT_001008ec);
  }
  return puVar4;
}



/* reorder_khmer(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

uint reorder_khmer(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  undefined8 *__src;
  undefined8 *__dest;
  undefined8 *__dest_00;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long in_FS_OFFSET;
  bool bVar25;
  uint local_cc;
  
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = hb_buffer_t::message(param_3,param_2,"start reordering khmer");
  if ((char)uVar13 != '\0') {
    uVar13 = hb_syllabic_insert_dotted_circles(param_2,param_3,1,0xb,-1,-1);
    uVar3 = *(uint *)(param_3 + 0x60);
    if (uVar3 != 0) {
      lVar21 = *(long *)(param_3 + 0x70);
      uVar18 = 0;
      bVar2 = *(byte *)(lVar21 + 0xf);
      pbVar16 = (byte *)(lVar21 + 0x23);
      do {
        uVar18 = uVar18 + 1;
        if (uVar3 == uVar18) break;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + 0x14;
      } while (bVar2 == bVar1);
      uVar23 = 0;
      do {
        if ((bVar2 & 0xe) == 0) {
          uVar8 = (uint)uVar23;
          puVar7 = *(uint **)(param_1 + 0x88);
          uVar15 = puVar7[1];
          uVar19 = puVar7[2];
          uVar4 = puVar7[3];
          if (uVar8 + 1 < uVar18) {
            uVar20 = (ulong)((uVar18 - 2) - uVar8);
            puVar22 = (uint *)(lVar21 + 0x18 + uVar23 * 0x14);
            puVar17 = puVar22;
            do {
              *puVar17 = *puVar17 | uVar15 | uVar19 | uVar4;
              puVar17 = puVar17 + 5;
            } while (puVar17 != (uint *)(lVar21 + 0x2c + (uVar23 + uVar20) * 0x14));
            __src = (undefined8 *)(lVar21 + uVar23 * 0x14);
            __dest = (undefined8 *)(lVar21 + (ulong)(uVar8 + 1) * 0x14);
            __dest_00 = (undefined8 *)(lVar21 + (ulong)(uVar8 + 2) * 0x14);
            uVar15 = uVar8 + 4;
            uVar19 = 1;
            local_cc = 0;
            puVar24 = __dest_00;
            do {
              if (*(char *)((long)puVar22 + 0xe) == '\x04') {
                if (local_cc < 3) {
                  if (uVar18 <= uVar15 - 2) break;
                  local_cc = local_cc + 1;
                  if (*(char *)((long)puVar24 + 0x12) == '\x0f') {
                    *puVar22 = *puVar22 | *puVar7;
                    *(uint *)((long)puVar24 + 4) = *(uint *)((long)puVar24 + 4) | *puVar7;
                    if (1 < uVar19 + 2) {
                      hb_buffer_t::merge_clusters_impl((uint)param_3,uVar8);
                    }
                    uVar4 = puVar22[3];
                    uVar9 = *(undefined8 *)(puVar22 + -1);
                    uVar10 = *(undefined8 *)(puVar22 + 1);
                    uVar11 = *puVar24;
                    uVar12 = puVar24[1];
                    uVar5 = *(undefined4 *)(puVar24 + 2);
                    memmove(__dest_00,__src,(ulong)uVar19 * 0x14);
                    *(uint *)(__src + 2) = uVar4;
                    *__src = uVar9;
                    __src[1] = uVar10;
                    *(undefined4 *)(__dest + 2) = uVar5;
                    *__dest = uVar11;
                    __dest[1] = uVar12;
                    if (((puVar7[4] != 0) && (uVar15 - 1 < uVar18)) &&
                       (puVar17 = (uint *)(lVar21 + 4 + (ulong)(uVar15 - 1) * 0x14),
                       *puVar17 = *puVar17 | puVar7[4], uVar15 < uVar18)) {
                      lVar14 = lVar21 + (ulong)uVar15 * 0x14;
                      do {
                        *(uint *)(lVar14 + 4) = *(uint *)(lVar14 + 4) | puVar7[4];
                        lVar14 = lVar14 + 0x14;
                      } while (lVar14 != lVar21 + 0x14 +
                                         ((ulong)((uVar18 - 1) - uVar15) + (ulong)uVar15) * 0x14);
                    }
                    local_cc = 2;
                  }
                }
              }
              else if (*(char *)((long)puVar22 + 0xe) == '\x16') {
                if (1 < uVar19 + 1) {
                  hb_buffer_t::merge_clusters_impl((uint)param_3,uVar8);
                }
                uVar9 = *(undefined8 *)(puVar22 + -1);
                uVar10 = *(undefined8 *)(puVar22 + 1);
                uVar4 = puVar22[3];
                memmove(__dest,__src,(ulong)uVar19 * 0x14);
                *(uint *)(__src + 2) = uVar4;
                *__src = uVar9;
                __src[1] = uVar10;
              }
              uVar19 = uVar19 + 1;
              puVar24 = (undefined8 *)((long)puVar24 + 0x14);
              puVar22 = puVar22 + 5;
              uVar15 = uVar15 + 1;
            } while (puVar24 != (undefined8 *)(lVar21 + 0x14 + ((uVar8 + 2) + uVar20) * 0x14));
            uVar13 = uVar13 & 0xff;
            lVar21 = *(long *)(param_3 + 0x70);
          }
        }
        bVar2 = *(byte *)(lVar21 + 0xf + (ulong)uVar18 * 0x14);
        lVar14 = lVar21 + (ulong)(uVar18 + 1) * 0x14;
        uVar15 = uVar18;
        do {
          uVar15 = uVar15 + 1;
          if (*(uint *)(param_3 + 0x60) <= uVar15) break;
          pbVar16 = (byte *)(lVar14 + 0xf);
          lVar14 = lVar14 + 0x14;
        } while (bVar2 == *pbVar16);
        uVar23 = (ulong)uVar18;
        bVar25 = uVar18 < uVar3;
        uVar18 = uVar15;
      } while (bVar25);
    }
    hb_buffer_t::message(param_3,param_2,"end reordering khmer");
  }
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0xbf);
  if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* setup_syllables_khmer(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8
setup_syllables_khmer(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

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
  find_syllables_khmer(param_3);
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
        goto LAB_00100ff0;
      }
      iVar1 = *(int *)(this + 0x1c);
      uVar11 = *(uint *)(this + 0x5c);
      lVar3 = *(long *)(this + 0x70);
      lVar8 = *(long *)(this + 0x78);
      if (uVar11 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar5) goto LAB_00100ff0;
        if (iVar1 == 2) goto LAB_0010138e;
LAB_00101145:
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
LAB_00101425:
          if (param_3 == uVar11) goto LAB_00100ff0;
LAB_0010142e:
          uVar9 = (ulong)(param_3 - 1);
          uVar6 = (ulong)uVar11;
          goto LAB_00101435;
        }
        local_50 = uVar6 * 0x14;
        lVar12 = (ulong)(uVar5 - 1) * 0x14;
        uVar13 = *(uint *)(lVar8 + 8 + local_50);
        lVar10 = lVar8 + lVar12;
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar7 == uVar13) {
LAB_001012ed:
          if (param_2 < uVar5) {
            do {
              if (*(uint *)(lVar10 + 8) == uVar7) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_1;
              lVar10 = lVar10 + -0x14;
            } while (lVar10 != lVar8 + -0x14 + lVar12 + (ulong)((uVar5 - param_2) - 1) * -0x14);
LAB_00101209:
            uVar11 = *(uint *)(this + 0x5c);
          }
        }
        else {
          if (uVar7 != uVar2) goto LAB_001013e2;
          if (uVar7 == uVar13) goto LAB_001012ed;
          if (param_2 < uVar5) {
            puVar4 = (uint *)(lVar8 + 4 + local_50);
            do {
              if (puVar4[1] == uVar2) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar8 + 0x18 + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
            goto LAB_00101209;
          }
        }
        if (uVar11 == param_3) goto LAB_00100ff0;
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
LAB_00101233:
        if (uVar5 != uVar7) {
          if (uVar13 != uVar7) goto LAB_00101456;
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
            goto LAB_00100ff0;
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
LAB_0010138e:
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
              if (param_2 == uVar5) goto LAB_00101425;
            }
            local_50 = uVar6 * 0x14;
LAB_001013e2:
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
            goto LAB_00101425;
          }
          goto LAB_0010142e;
        }
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar7 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        if (uVar13 < uVar7) {
          uVar7 = uVar13;
        }
        local_44 = uVar7;
        if (param_2 != uVar5) goto LAB_00101145;
LAB_00101435:
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        if (iVar1 != 2) goto LAB_00101233;
LAB_00101456:
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
      goto LAB_00100ff0;
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
      goto LAB_00100ff0;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00100ff0;
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
LAB_00100ff0:
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



/* find_syllables_khmer(hb_buffer_t*) */

void find_syllables_khmer(hb_buffer_t *param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint local_3c;
  uint local_38;
  int local_34;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 == 0) {
    return;
  }
  cVar4 = '\x1b';
  lVar8 = 0x1d5;
  iVar12 = 1;
  local_3c = 0;
  lVar3 = *(long *)(param_1 + 0x70);
  iVar9 = 0x15;
  local_34 = 0;
  local_38 = 0;
  uVar11 = local_3c;
LAB_00101722:
  if ('\0' < cVar4) {
    bVar1 = *(byte *)(lVar3 + 0x12 + (ulong)local_3c * 0x14);
    if (((byte)_khmer_syllable_machine_trans_keys[iVar9 * 2] <= bVar1) &&
       (bVar1 <= (byte)_khmer_syllable_machine_trans_keys[(long)(iVar9 * 2) + 1])) {
      lVar10 = (long)(int)((uint)bVar1 - (uint)(byte)_khmer_syllable_machine_trans_keys[iVar9 * 2]);
      goto LAB_00101754;
    }
  }
  lVar10 = (long)cVar4;
LAB_00101754:
  iVar5 = (int)(char)_khmer_syllable_machine_indicies[lVar10 + lVar8];
  do {
    iVar9 = (int)(char)_khmer_syllable_machine_trans_targs[iVar5];
    switch(_khmer_syllable_machine_trans_actions[iVar5]) {
    case 1:
      if (uVar11 < local_38) {
        puVar7 = (undefined1 *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *puVar7 = (char)(iVar12 << 4);
          puVar7 = puVar7 + 0x14;
        } while ((undefined1 *)
                 (lVar3 + 0x23 + ((ulong)((local_38 - 1) - uVar11) + (ulong)uVar11) * 0x14) !=
                 puVar7);
      }
      goto LAB_001019e3;
    case 2:
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 3:
      if (uVar11 < local_38) {
        pbVar6 = (byte *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *pbVar6 = (byte)(iVar12 << 4) | 1;
          pbVar6 = pbVar6 + 0x14;
        } while ((byte *)(lVar3 + 0x23 + ((ulong)((local_38 - 1) - uVar11) + (ulong)uVar11) * 0x14)
                 != pbVar6);
      }
      iVar12 = iVar12 + 1;
      if (iVar12 == 0x10) {
        iVar12 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      local_3c = local_38;
      break;
    case 4:
      local_34 = 2;
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 5:
      if (local_34 != 2) {
        if (local_34 != 3) goto switchD_00101789_caseD_6;
        if (uVar11 < local_38) {
          pbVar6 = (byte *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
          do {
            *pbVar6 = (byte)(iVar12 << 4) | 2;
            pbVar6 = pbVar6 + 0x14;
          } while (pbVar6 != (byte *)(lVar3 + 0x23 +
                                     ((ulong)((local_38 - 1) - uVar11) + (ulong)uVar11) * 0x14));
        }
        goto LAB_001019e3;
      }
      if (uVar11 < local_38) {
        pbVar6 = (byte *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *pbVar6 = (byte)(iVar12 << 4) | 1;
          pbVar6 = pbVar6 + 0x14;
        } while (pbVar6 != (byte *)(lVar3 + 0x23 +
                                   ((ulong)((local_38 - 1) - uVar11) + (ulong)uVar11) * 0x14));
      }
      iVar12 = iVar12 + 1;
      if (iVar12 == 0x10) {
        iVar12 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      local_3c = local_38;
      break;
    default:
switchD_00101789_caseD_6:
      local_3c = local_3c + 1;
      break;
    case 8:
      local_38 = local_3c + 1;
      if (uVar11 < local_38) {
        pbVar6 = (byte *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *pbVar6 = (byte)(iVar12 << 4) | 2;
          pbVar6 = pbVar6 + 0x14;
        } while (pbVar6 != (byte *)(lVar3 + 0x23 +
                                   ((ulong)(local_3c - uVar11) + (ulong)uVar11) * 0x14));
      }
LAB_001019e3:
      iVar12 = iVar12 + 1;
      local_3c = local_38;
      if (iVar12 == 0x10) {
LAB_001019f9:
        iVar12 = 1;
        local_3c = local_38;
      }
      break;
    case 9:
      local_34 = 3;
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 10:
      if (uVar11 < local_3c) {
        puVar7 = (undefined1 *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *puVar7 = (char)(iVar12 << 4);
          puVar7 = puVar7 + 0x14;
        } while (puVar7 != (undefined1 *)
                           (lVar3 + 0x23 + ((ulong)((local_3c - 1) - uVar11) + (ulong)uVar11) * 0x14
                           ));
      }
      goto LAB_00101833;
    case 0xb:
      if (uVar11 < local_3c) {
        pbVar6 = (byte *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *pbVar6 = (byte)(iVar12 << 4) | 1;
          pbVar6 = pbVar6 + 0x14;
        } while (pbVar6 != (byte *)(lVar3 + 0x23 +
                                   ((ulong)((local_3c - 1) - uVar11) + (ulong)uVar11) * 0x14));
      }
      iVar12 = iVar12 + 1;
      if (iVar12 == 0x10) {
        iVar12 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      local_38 = local_3c;
      break;
    case 0xc:
      if (uVar11 < local_3c) {
        pbVar6 = (byte *)(lVar3 + 0xf + (ulong)uVar11 * 0x14);
        do {
          *pbVar6 = (byte)(iVar12 << 4) | 2;
          pbVar6 = pbVar6 + 0x14;
        } while (pbVar6 != (byte *)(lVar3 + 0x23 +
                                   ((ulong)((local_3c - 1) - uVar11) + (ulong)uVar11) * 0x14));
      }
LAB_00101833:
      local_38 = local_3c;
      iVar12 = iVar12 + 1;
      if (iVar12 != 0x10) break;
      goto LAB_001019f9;
    }
    lVar10 = (long)iVar9;
    if (_khmer_syllable_machine_to_state_actions[lVar10] == '\x06') {
      uVar11 = 0;
    }
    if (uVar2 != local_3c) break;
    if (*(short *)(_khmer_syllable_machine_eof_trans + lVar10 * 2) < 1) {
      return;
    }
    iVar5 = *(short *)(_khmer_syllable_machine_eof_trans + lVar10 * 2) + -1;
  } while( true );
  lVar8 = (long)*(short *)(_khmer_syllable_machine_index_offsets + lVar10 * 2);
  cVar4 = _khmer_syllable_machine_key_spans[lVar10];
  if (_khmer_syllable_machine_from_state_actions[lVar10] == '\a') {
    uVar11 = local_3c;
  }
  goto LAB_00101722;
}


