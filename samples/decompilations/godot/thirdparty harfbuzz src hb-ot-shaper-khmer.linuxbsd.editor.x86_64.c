
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
  } while (puVar6 != &DAT_001008e8);
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
    puVar9 = &DAT_001008c4;
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
    } while (puVar9 != (uint *)&DAT_0010090c);
  }
  return puVar4;
}



/* reorder_khmer(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

uint reorder_khmer(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  undefined8 *__dest;
  undefined8 *__dest_00;
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *__src;
  uint uVar15;
  byte *pbVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  uint local_cc;
  
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = hb_buffer_t::message(param_3,param_2,"start reordering khmer");
  if ((char)uVar13 != '\0') {
    uVar13 = hb_syllabic_insert_dotted_circles(param_2,param_3,1,0xb,-1,-1);
    uVar4 = *(uint *)(param_3 + 0x60);
    if (uVar4 != 0) {
      lVar21 = *(long *)(param_3 + 0x70);
      uVar18 = 0;
      bVar3 = *(byte *)(lVar21 + 0xf);
      pbVar16 = (byte *)(lVar21 + 0x23);
      do {
        uVar18 = uVar18 + 1;
        if (uVar4 == uVar18) break;
        bVar2 = *pbVar16;
        pbVar16 = pbVar16 + 0x14;
      } while (bVar3 == bVar2);
      uVar24 = 0;
      do {
        if ((bVar3 & 0xe) == 0) {
          uVar15 = (uint)uVar24;
          puVar8 = *(uint **)(param_1 + 0x88);
          uVar20 = puVar8[1] | puVar8[2] | puVar8[3];
          if (uVar15 + 1 < uVar18) {
            uVar22 = (ulong)((uVar18 - 2) - uVar15);
            puVar23 = (uint *)(lVar21 + 0x18 + uVar24 * 0x14);
            puVar1 = (uint *)(lVar21 + 0x2c + (uVar24 + uVar22) * 0x14);
            puVar17 = puVar23;
            if (((int)puVar1 - (int)puVar23 & 4U) == 0) goto LAB_00100550;
            *puVar23 = *puVar23 | uVar20;
            for (puVar17 = puVar23 + 5; puVar17 != puVar1; puVar17 = puVar17 + 10) {
LAB_00100550:
              *puVar17 = *puVar17 | uVar20;
              puVar17[5] = puVar17[5] | uVar20;
            }
            __src = (undefined8 *)(uVar24 * 0x14 + lVar21);
            __dest = (undefined8 *)(lVar21 + (ulong)(uVar15 + 1) * 0x14);
            __dest_00 = (undefined8 *)(lVar21 + (ulong)(uVar15 + 2) * 0x14);
            uVar20 = uVar15 + 4;
            uVar19 = 1;
            local_cc = 0;
            puVar25 = __dest_00;
            do {
              if (*(char *)((long)puVar23 + 0xe) == '\x04') {
                if (local_cc < 3) {
                  if (uVar18 <= uVar20 - 2) break;
                  local_cc = local_cc + 1;
                  if (*(char *)((long)puVar25 + 0x12) == '\x0f') {
                    *puVar23 = *puVar23 | *puVar8;
                    *(uint *)((long)puVar25 + 4) = *(uint *)((long)puVar25 + 4) | *puVar8;
                    if (1 < uVar19 + 2) {
                      hb_buffer_t::merge_clusters_impl((uint)param_3,uVar15);
                    }
                    uVar5 = puVar23[3];
                    uVar9 = *(undefined8 *)(puVar23 + -1);
                    uVar10 = *(undefined8 *)(puVar23 + 1);
                    uVar11 = *puVar25;
                    uVar12 = puVar25[1];
                    uVar6 = *(undefined4 *)(puVar25 + 2);
                    memmove(__dest_00,__src,(ulong)uVar19 * 0x14);
                    *(uint *)(__src + 2) = uVar5;
                    *__src = uVar9;
                    __src[1] = uVar10;
                    *(undefined4 *)(__dest + 2) = uVar6;
                    *__dest = uVar11;
                    __dest[1] = uVar12;
                    if (((puVar8[4] != 0) && (uVar20 - 1 < uVar18)) &&
                       (puVar17 = (uint *)(lVar21 + 4 + (ulong)(uVar20 - 1) * 0x14),
                       *puVar17 = *puVar17 | puVar8[4], uVar20 < uVar18)) {
                      lVar14 = lVar21 + (ulong)uVar20 * 0x14;
                      do {
                        *(uint *)(lVar14 + 4) = *(uint *)(lVar14 + 4) | puVar8[4];
                        lVar14 = lVar14 + 0x14;
                      } while (lVar14 != lVar21 + 0x14 +
                                         ((ulong)((uVar18 - 1) - uVar20) + (ulong)uVar20) * 0x14);
                    }
                    local_cc = 2;
                  }
                }
              }
              else if (*(char *)((long)puVar23 + 0xe) == '\x16') {
                if (1 < uVar19 + 1) {
                  hb_buffer_t::merge_clusters_impl((uint)param_3,uVar15);
                }
                uVar9 = *(undefined8 *)(puVar23 + -1);
                uVar10 = *(undefined8 *)(puVar23 + 1);
                uVar5 = puVar23[3];
                memmove(__dest,__src,(ulong)uVar19 * 0x14);
                *(uint *)(__src + 2) = uVar5;
                *__src = uVar9;
                __src[1] = uVar10;
              }
              uVar19 = uVar19 + 1;
              puVar25 = (undefined8 *)((long)puVar25 + 0x14);
              puVar23 = puVar23 + 5;
              uVar20 = uVar20 + 1;
            } while (puVar25 != (undefined8 *)(lVar21 + 0x14 + ((uVar15 + 2) + uVar22) * 0x14));
            uVar13 = uVar13 & 0xff;
            lVar21 = *(long *)(param_3 + 0x70);
          }
        }
        bVar3 = *(byte *)(lVar21 + 0xf + (ulong)uVar18 * 0x14);
        lVar14 = lVar21 + (ulong)(uVar18 + 1) * 0x14;
        uVar15 = uVar18;
        do {
          uVar15 = uVar15 + 1;
          if (*(uint *)(param_3 + 0x60) <= uVar15) break;
          pbVar16 = (byte *)(lVar14 + 0xf);
          lVar14 = lVar14 + 0x14;
        } while (bVar3 == *pbVar16);
        uVar24 = (ulong)uVar18;
        bVar26 = uVar18 < uVar4;
        uVar18 = uVar15;
      } while (bVar26);
    }
    hb_buffer_t::message(param_3,param_2,"end reordering khmer");
  }
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0xbf);
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            if (puVar1 == puVar5) goto LAB_00101010;
          }
          do {
            *puVar5 = *puVar5 | param_1;
            puVar5[5] = puVar5[5] | param_1;
            puVar5 = puVar5 + 10;
          } while (puVar1 != puVar5);
        }
        goto LAB_00101010;
      }
      iVar2 = *(int *)(this + 0x1c);
      uVar13 = *(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x70);
      lVar9 = *(long *)(this + 0x78);
      if (uVar13 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar11) goto LAB_00101010;
        if (iVar2 != 2) goto LAB_001011b5;
LAB_0010141f:
        uVar7 = (ulong)param_2;
        uVar8 = local_44;
        if (param_2 < uVar11) {
          puVar5 = (uint *)(lVar9 + 8 + uVar7 * 0x14);
          puVar1 = (uint *)(lVar9 + 0x1c + (((uVar11 - param_2) - 1) + uVar7) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00101468;
          if (*puVar5 < local_44) {
            uVar8 = *puVar5;
          }
          for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
LAB_00101468:
            if (*puVar5 < uVar8) {
              uVar8 = *puVar5;
            }
            if (puVar5[5] < uVar8) {
              uVar8 = puVar5[5];
            }
          }
          if (param_2 != uVar11) goto LAB_0010148c;
        }
        else {
LAB_0010148c:
          local_50 = uVar7 * 0x14;
LAB_0010149d:
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
LAB_001014dd:
        if (param_3 == uVar13) goto LAB_00101010;
LAB_001014e6:
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
LAB_001014ed:
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        if (iVar2 != 2) goto LAB_001012a3;
LAB_0010150e:
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
              if (puVar5 == puVar1) goto LAB_00101412;
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
LAB_00101412:
          uVar8 = local_44;
          if (param_2 != uVar11) goto LAB_0010141f;
          goto LAB_001014e6;
        }
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar8 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        if (uVar15 < uVar8) {
          uVar8 = uVar15;
        }
        local_44 = uVar8;
        if (param_2 == uVar11) goto LAB_001014ed;
LAB_001011b5:
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
        if (param_2 == uVar11) goto LAB_001014dd;
        local_50 = uVar7 * 0x14;
        lVar14 = (ulong)(uVar11 - 1) * 0x14;
        uVar15 = *(uint *)(lVar9 + 8 + local_50);
        lVar12 = lVar9 + lVar14;
        uVar3 = *(uint *)(lVar12 + 8);
        if (uVar8 != uVar15) {
          if (uVar8 == uVar3) {
            if (uVar8 == uVar15) goto LAB_0010135d;
            if (param_2 < uVar11) {
              puVar5 = (uint *)(lVar9 + 4 + local_50);
              do {
                if (puVar5[1] == uVar3) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar9 + 0x18 + (((uVar11 - param_2) - 1) + uVar7) * 0x14))
              ;
              goto LAB_00101279;
            }
            goto LAB_0010127d;
          }
          goto LAB_0010149d;
        }
LAB_0010135d:
        if (param_2 < uVar11) {
          do {
            if (*(uint *)(lVar12 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | param_1;
            lVar12 = lVar12 + -0x14;
          } while (lVar12 != lVar9 + -0x14 + lVar14 + (ulong)((uVar11 - param_2) - 1) * -0x14);
LAB_00101279:
          uVar13 = *(uint *)(this + 0x5c);
        }
LAB_0010127d:
        if (uVar13 == param_3) goto LAB_00101010;
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
LAB_001012a3:
        if (uVar11 != uVar8) {
          if (uVar15 != uVar8) goto LAB_0010150e;
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
            goto LAB_00101010;
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
      goto LAB_00101010;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)param_2 * 0x14);
        puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                         ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14);
        if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
          *puVar5 = *puVar5 | param_1;
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar1) goto LAB_00101010;
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
      goto LAB_00101010;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00101010;
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
        if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_001015b0;
        uVar11 = 0xffffffff;
        if (*puVar5 != 0xffffffff) {
          uVar11 = *puVar5;
        }
        for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
LAB_001015b0:
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
LAB_00101010:
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



/* find_syllables_khmer(hb_buffer_t*) */

void find_syllables_khmer(hb_buffer_t *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined1 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint local_3c;
  uint local_38;
  int local_34;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    return;
  }
  cVar5 = '\x1b';
  lVar13 = 0x1d5;
  local_3c = 0;
  iVar16 = 1;
  lVar4 = *(long *)(param_1 + 0x70);
  iVar14 = 0x15;
  local_34 = 0;
  local_38 = 0;
  uVar17 = local_3c;
LAB_00101812:
  if ('\0' < cVar5) {
    bVar11 = *(byte *)(lVar4 + 0x12 + (ulong)local_3c * 0x14);
    if (((byte)_khmer_syllable_machine_trans_keys[iVar14 * 2] <= bVar11) &&
       (bVar11 <= (byte)_khmer_syllable_machine_trans_keys[(long)(iVar14 * 2) + 1])) {
      lVar15 = (long)(int)((uint)bVar11 - (uint)(byte)_khmer_syllable_machine_trans_keys[iVar14 * 2]
                          );
      goto LAB_00101844;
    }
  }
  lVar15 = (long)cVar5;
LAB_00101844:
  iVar6 = (int)(char)_khmer_syllable_machine_indicies[lVar15 + lVar13];
  do {
    iVar14 = (int)(char)_khmer_syllable_machine_trans_targs[iVar6];
    switch(_khmer_syllable_machine_trans_actions[iVar6]) {
    case 1:
      if (uVar17 < local_38) {
        puVar9 = (undefined1 *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        puVar2 = (undefined1 *)
                 (lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar17) + (ulong)uVar17) * 0x14);
        uVar12 = (undefined1)(iVar16 << 4);
        if (((int)puVar2 - (int)puVar9 & 4U) != 0) {
          *puVar9 = uVar12;
          puVar9 = puVar9 + 0x14;
          if (puVar2 == puVar9) goto LAB_00101abe;
        }
        do {
          *puVar9 = uVar12;
          puVar10 = puVar9 + 0x28;
          puVar9[0x14] = uVar12;
          puVar9 = puVar10;
        } while (puVar2 != puVar10);
      }
      goto LAB_00101abe;
    case 2:
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 3:
      if (uVar17 < local_38) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        bVar11 = (byte)(iVar16 << 4) | 1;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar17) + (ulong)uVar17) * 0x14);
        pbVar8 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar8 = pbVar7 + 0x14;
          if (pbVar1 == pbVar7 + 0x14) goto LAB_00101bce;
        }
        do {
          *pbVar8 = bVar11;
          pbVar7 = pbVar8 + 0x28;
          pbVar8[0x14] = bVar11;
          pbVar8 = pbVar7;
        } while (pbVar1 != pbVar7);
      }
LAB_00101bce:
      iVar16 = iVar16 + 1;
      if (iVar16 == 0x10) {
        iVar16 = 1;
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
        if (local_34 == 3) {
          if (uVar17 < local_38) {
            bVar11 = (byte)(iVar16 << 4) | 2;
            pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
            pbVar1 = (byte *)(lVar4 + 0x23 +
                             ((ulong)((local_38 - 1) - uVar17) + (ulong)uVar17) * 0x14);
            pbVar8 = pbVar7;
            if (((char)pbVar1 - (char)pbVar7 & 4U) != 0) {
              *pbVar7 = bVar11;
              pbVar8 = pbVar7 + 0x14;
              if (pbVar7 + 0x14 == pbVar1) goto LAB_00101abe;
            }
            do {
              *pbVar8 = bVar11;
              pbVar7 = pbVar8 + 0x28;
              pbVar8[0x14] = bVar11;
              pbVar8 = pbVar7;
            } while (pbVar7 != pbVar1);
          }
          goto LAB_00101abe;
        }
        goto switchD_00101879_caseD_6;
      }
      if (uVar17 < local_38) {
        bVar11 = (byte)(iVar16 << 4) | 1;
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_38 - 1) - uVar17) + (ulong)uVar17) * 0x14);
        pbVar8 = pbVar7;
        if (((char)pbVar1 - (char)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar8 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00101d04;
        }
        do {
          *pbVar8 = bVar11;
          pbVar7 = pbVar8 + 0x28;
          pbVar8[0x14] = bVar11;
          pbVar8 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_00101d04:
      iVar16 = iVar16 + 1;
      if (iVar16 == 0x10) {
        iVar16 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      local_3c = local_38;
      break;
    default:
switchD_00101879_caseD_6:
      local_3c = local_3c + 1;
      break;
    case 8:
      local_38 = local_3c + 1;
      if (uVar17 < local_38) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        bVar11 = (byte)(iVar16 << 4) | 2;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)(local_3c - uVar17) + (ulong)uVar17) * 0x14);
        pbVar8 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar8 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_00101abe;
        }
        do {
          *pbVar8 = bVar11;
          pbVar7 = pbVar8 + 0x28;
          pbVar8[0x14] = bVar11;
          pbVar8 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_00101abe:
      iVar16 = iVar16 + 1;
      local_3c = local_38;
      if (iVar16 == 0x10) {
LAB_00101ad4:
        iVar16 = 1;
        local_3c = local_38;
      }
      break;
    case 9:
      local_34 = 3;
      local_3c = local_3c + 1;
      local_38 = local_3c;
      break;
    case 10:
      if (uVar17 < local_3c) {
        puVar9 = (undefined1 *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        puVar2 = (undefined1 *)
                 (lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar17) + (ulong)uVar17) * 0x14);
        uVar12 = (undefined1)(iVar16 << 4);
        if (((int)puVar2 - (int)puVar9 & 4U) != 0) {
          *puVar9 = uVar12;
          puVar9 = puVar9 + 0x14;
          if (puVar9 == puVar2) goto LAB_0010193e;
        }
        do {
          *puVar9 = uVar12;
          puVar10 = puVar9 + 0x28;
          puVar9[0x14] = uVar12;
          puVar9 = puVar10;
        } while (puVar10 != puVar2);
      }
      goto LAB_0010193e;
    case 0xb:
      if (uVar17 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        bVar11 = (byte)(iVar16 << 4) | 1;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar17) + (ulong)uVar17) * 0x14);
        pbVar8 = pbVar7;
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar8 = pbVar7 + 0x14;
          if (pbVar7 + 0x14 == pbVar1) goto LAB_001019b6;
        }
        do {
          *pbVar8 = bVar11;
          pbVar7 = pbVar8 + 0x28;
          pbVar8[0x14] = bVar11;
          pbVar8 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
LAB_001019b6:
      iVar16 = iVar16 + 1;
      if (iVar16 == 0x10) {
        iVar16 = 1;
      }
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40;
      local_38 = local_3c;
      break;
    case 0xc:
      if (uVar17 < local_3c) {
        pbVar7 = (byte *)(lVar4 + 0xf + (ulong)uVar17 * 0x14);
        bVar11 = (byte)(iVar16 << 4) | 2;
        pbVar1 = (byte *)(lVar4 + 0x23 + ((ulong)((local_3c - 1) - uVar17) + (ulong)uVar17) * 0x14);
        if (((int)pbVar1 - (int)pbVar7 & 4U) != 0) {
          *pbVar7 = bVar11;
          pbVar7 = pbVar7 + 0x14;
          if (pbVar7 == pbVar1) goto LAB_0010193e;
        }
        do {
          *pbVar7 = bVar11;
          pbVar8 = pbVar7 + 0x28;
          pbVar7[0x14] = bVar11;
          pbVar7 = pbVar8;
        } while (pbVar8 != pbVar1);
      }
LAB_0010193e:
      local_38 = local_3c;
      iVar16 = iVar16 + 1;
      if (iVar16 != 0x10) break;
      goto LAB_00101ad4;
    }
    lVar15 = (long)iVar14;
    if (_khmer_syllable_machine_to_state_actions[lVar15] == '\x06') {
      uVar17 = 0;
    }
    if (uVar3 != local_3c) break;
    if (*(short *)(_khmer_syllable_machine_eof_trans + lVar15 * 2) < 1) {
      return;
    }
    iVar6 = *(short *)(_khmer_syllable_machine_eof_trans + lVar15 * 2) + -1;
  } while( true );
  lVar13 = (long)*(short *)(_khmer_syllable_machine_index_offsets + lVar15 * 2);
  cVar5 = _khmer_syllable_machine_key_spans[lVar15];
  if (_khmer_syllable_machine_from_state_actions[lVar15] == '\a') {
    uVar17 = local_3c;
  }
  goto LAB_00101812;
}


