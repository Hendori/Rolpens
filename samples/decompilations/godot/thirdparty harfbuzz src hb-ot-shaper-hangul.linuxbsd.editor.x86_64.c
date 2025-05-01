
/* setup_masks_hangul(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void setup_masks_hangul(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_2 + 0x70);
    if (*(uint *)(param_2 + 0x60) != 0) {
      lVar1 = lVar3 + (ulong)*(uint *)(param_2 + 0x60) * 0x14;
      do {
        *(uint *)(lVar3 + 4) =
             *(uint *)(lVar3 + 4) | *(uint *)(lVar2 + (ulong)*(byte *)(lVar3 + 0x13) * 4);
        lVar3 = lVar3 + 0x14;
      } while (lVar3 != lVar1);
    }
  }
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] & 0x7f);
  return;
}



/* data_destroy_hangul(void*) */

void data_destroy_hangul(void *param_1)

{
  free(param_1);
  return;
}



/* collect_features_hangul(hb_ot_shape_planner_t*) */

void collect_features_hangul(hb_ot_shape_planner_t *param_1)

{
  hb_ot_shape_planner_t *phVar1;
  
  phVar1 = param_1 + 0x28;
  hb_ot_map_builder_t::add_feature(phVar1,0x6c6a6d6f,0,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x766a6d6f,0,1);
  hb_ot_map_builder_t::add_feature(phVar1,0x746a6d6f,0,1);
  return;
}



/* override_features_hangul(hb_ot_shape_planner_t*) */

void override_features_hangul(hb_ot_shape_planner_t *param_1)

{
  hb_ot_map_builder_t::add_feature(param_1 + 0x28,0x63616c74,1,0);
  return;
}



/* data_create_hangul(hb_ot_shape_plan_t const*) */

void * data_create_hangul(hb_ot_shape_plan_t *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  
  pvVar6 = calloc(1,0x10);
  if (pvVar6 != (void *)0x0) {
    lVar4 = *(long *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x3c);
    lVar10 = 0;
    do {
      uVar9 = *(uint *)((long)&hangul_features + lVar10);
      if (-1 < iVar2 + -1) {
        do {
          iVar7 = 0;
          iVar8 = iVar2 + -1;
          do {
            while( true ) {
              uVar5 = (uint)(iVar7 + iVar8) >> 1;
              puVar1 = (uint *)(lVar4 + (ulong)uVar5 * 0x24);
              uVar3 = *puVar1;
              if (uVar9 < uVar3) break;
              if (uVar9 <= uVar3) {
                *(uint *)((long)pvVar6 + lVar10) = puVar1[7];
                goto joined_r0x00100151;
              }
              iVar7 = uVar5 + 1;
              if (iVar8 < iVar7) goto LAB_00100167;
            }
            iVar8 = uVar5 - 1;
          } while (iVar7 <= iVar8);
LAB_00100167:
          *(undefined4 *)((long)pvVar6 + lVar10) = 0;
joined_r0x00100151:
          if (lVar10 == 0xc) {
            return pvVar6;
          }
          uVar9 = *(uint *)((long)&DAT_00101884 + lVar10);
          lVar10 = lVar10 + 4;
        } while( true );
      }
      *(undefined4 *)((long)pvVar6 + lVar10) = 0;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x10);
  }
  return pvVar6;
}



/* preprocess_text_hangul(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void preprocess_text_hangul(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long in_FS_OFFSET;
  int local_84;
  uint local_6c;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0x80);
  hb_buffer_t::clear_output();
  uVar2 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (uVar2 != 0) {
    uVar8 = 0;
    uVar18 = 0;
    uVar17 = 0;
    do {
      while( true ) {
        if (param_2[0x58] == (hb_buffer_t)0x0) goto LAB_001003a0;
        lVar11 = *(long *)(param_2 + 0x70);
        uVar16 = (uint)uVar8;
        iVar6 = *(int *)(lVar11 + uVar8 * 0x14);
        uVar15 = (uint)param_2;
        if (1 < iVar6 - 0x302eU) break;
        if ((uVar17 < uVar18) && (*(uint *)(param_2 + 100) == uVar18)) {
          hb_buffer_t::_set_glyph_flags(param_2,3,uVar17,uVar16,true,true);
          if (param_2[0x5a] == (hb_buffer_t)0x0) {
            iVar5 = *(int *)(param_2 + 0x5c);
          }
          else {
            if ((lVar11 != *(long *)(param_2 + 0x78)) ||
               (iVar5 = *(int *)(param_2 + 0x5c), iVar19 = iVar5, *(int *)(param_2 + 100) != iVar5))
            {
              cVar4 = hb_buffer_t::make_room_for(uVar15,1);
              if (cVar4 == '\0') goto LAB_001003a0;
              puVar7 = (undefined8 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
              uVar3 = puVar7[1];
              puVar9 = (undefined8 *)
                       (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
              *puVar9 = *puVar7;
              puVar9[1] = uVar3;
              *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar7 + 2);
              iVar5 = *(int *)(param_2 + 0x5c);
              iVar19 = *(int *)(param_2 + 100);
            }
            *(int *)(param_2 + 100) = iVar19 + 1;
          }
          *(int *)(param_2 + 0x5c) = iVar5 + 1;
          iVar6 = hb_font_get_glyph(param_3,iVar6,0,&local_5c);
          if ((iVar6 == 0) || (iVar6 = hb_font_get_glyph_h_advance(param_3,local_5c), iVar6 != 0)) {
            hb_buffer_t::merge_out_clusters(uVar15,uVar17);
            lVar11 = *(long *)(param_2 + 0x78);
            puVar7 = (undefined8 *)(lVar11 + (ulong)uVar18 * 0x14);
            local_58 = *puVar7;
            uStack_50 = puVar7[1];
            local_48 = *(undefined4 *)(puVar7 + 2);
            puVar7 = (undefined8 *)(lVar11 + (ulong)uVar17 * 0x14);
            memmove((void *)(lVar11 + (ulong)(uVar17 + 1) * 0x14),puVar7,
                    (ulong)(uVar18 - uVar17) * 0x14);
            *puVar7 = local_58;
            puVar7[1] = uStack_50;
            *(undefined4 *)(puVar7 + 2) = local_48;
            uVar18 = *(uint *)(param_2 + 100);
            uVar8 = (ulong)*(uint *)(param_2 + 0x5c);
          }
          else {
LAB_00100c3e:
            uVar18 = *(uint *)(param_2 + 100);
            uVar8 = (ulong)*(uint *)(param_2 + 0x5c);
          }
        }
        else {
          if (((byte)param_2[0x18] & 0x10) == 0) {
            local_5c = 0;
            lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar11 != 0) {
              lVar11 = *(long *)(lVar11 + 0x10);
            }
            iVar5 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                              (param_3,*(undefined8 *)(param_3 + 0x98),0x25cc,&local_5c,lVar11);
            if (iVar5 != 0) {
              iVar5 = hb_font_get_glyph(param_3,iVar6,0,&local_5c);
              if ((iVar5 == 0) ||
                 (iVar5 = hb_font_get_glyph_h_advance(param_3,local_5c), iVar5 != 0)) {
                iVar5 = iVar6;
                iVar6 = 0x25cc;
              }
              else {
                iVar5 = 0x25cc;
              }
              cVar4 = hb_buffer_t::make_room_for(uVar15,1);
              if (cVar4 == '\0') goto LAB_00100c3e;
              puVar7 = *(undefined8 **)(param_2 + 0x78);
              uVar18 = *(uint *)(param_2 + 100);
              if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
                puVar9 = (undefined8 *)
                         (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
              }
              else {
                puVar9 = puVar7;
                if (uVar18 != 0) {
                  puVar9 = (undefined8 *)((long)puVar7 + (ulong)(uVar18 - 1) * 0x14);
                }
              }
              uVar3 = puVar9[1];
              piVar1 = (int *)((long)puVar7 + (ulong)uVar18 * 0x14);
              *(undefined8 *)piVar1 = *puVar9;
              *(undefined8 *)(piVar1 + 2) = uVar3;
              iVar19 = *(int *)(puVar9 + 2);
              *piVar1 = iVar5;
              piVar1[4] = iVar19;
              uVar3 = puVar9[1];
              *(undefined8 *)(piVar1 + 5) = *puVar9;
              *(undefined8 *)(piVar1 + 7) = uVar3;
              iVar5 = *(int *)(puVar9 + 2);
              piVar1[5] = iVar6;
              piVar1[9] = iVar5;
              uVar8 = (ulong)(*(int *)(param_2 + 0x5c) + 1U);
              *(uint *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1U;
              uVar18 = *(int *)(param_2 + 100) + 2;
              *(uint *)(param_2 + 100) = uVar18;
              goto LAB_00100392;
            }
          }
          if (param_2[0x5a] == (hb_buffer_t)0x0) {
            iVar6 = *(int *)(param_2 + 0x5c);
            uVar18 = *(uint *)(param_2 + 100);
          }
          else {
            if ((*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70)) ||
               (iVar6 = *(int *)(param_2 + 0x5c), iVar5 = iVar6, *(int *)(param_2 + 100) != iVar6))
            {
              cVar4 = hb_buffer_t::make_room_for(uVar15,1);
              if (cVar4 == '\0') goto LAB_00100c3e;
              puVar7 = (undefined8 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
              uVar3 = puVar7[1];
              puVar9 = (undefined8 *)
                       (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
              *puVar9 = *puVar7;
              puVar9[1] = uVar3;
              *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar7 + 2);
              iVar6 = *(int *)(param_2 + 0x5c);
              iVar5 = *(int *)(param_2 + 100);
            }
            uVar18 = iVar5 + 1;
            *(uint *)(param_2 + 100) = uVar18;
          }
          uVar8 = (ulong)(iVar6 + 1U);
          *(uint *)(param_2 + 0x5c) = iVar6 + 1U;
        }
LAB_00100392:
        uVar17 = uVar18;
        if (uVar2 <= (uint)uVar8) goto LAB_001003a0;
      }
      uVar17 = *(uint *)(param_2 + 100);
      if ((iVar6 - 0x1100U < 0x60) || (iVar6 - 0xa960U < 0x1d)) {
        if ((uVar2 <= uVar16 + 1) ||
           ((iVar5 = *(int *)(lVar11 + (ulong)(uVar16 + 1) * 0x14), 0x47 < iVar5 - 0x1160U &&
            (0x16 < iVar5 - 0xd7b0U)))) goto LAB_001002e0;
        uVar18 = uVar16 + 2;
        if ((uVar18 < uVar2) &&
           ((local_84 = *(int *)(lVar11 + (ulong)uVar18 * 0x14), local_84 - 0x11a8U < 0x58 ||
            (local_84 - 0xd7cbU < 0x31)))) {
          local_6c = 3;
          uVar18 = uVar16 + 3;
          iVar19 = local_84 + -0x11a7;
        }
        else {
          iVar19 = 0;
          local_84 = 0;
          local_6c = 2;
        }
        hb_buffer_t::_set_glyph_flags(param_2,3,uVar16,uVar18,true,false);
        if (((iVar6 - 0x1100U < 0x13) && (iVar5 - 0x1161U < 0x15)) &&
           ((local_84 == 0 || (local_84 - 0x11a8U < 0x1b)))) {
          local_5c = 0;
          iVar19 = iVar6 * 0x24c + -0x28469c + iVar5 * 0x1c + iVar19;
          lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
          if (lVar11 != 0) {
            lVar11 = *(long *)(lVar11 + 0x10);
          }
          iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                            (param_3,*(undefined8 *)(param_3 + 0x98),iVar19,&local_5c,lVar11);
          if (iVar6 == 0) {
            lVar11 = *(long *)(param_2 + 0x70);
            goto LAB_001004a8;
          }
          cVar4 = hb_buffer_t::make_room_for(uVar15,local_6c);
          if (cVar4 == '\0') {
LAB_001010a4:
            uVar8 = (ulong)*(uint *)(param_2 + 0x5c);
          }
          else {
            hb_buffer_t::merge_clusters_impl(uVar15,*(uint *)(param_2 + 0x5c));
            if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
              puVar9 = *(undefined8 **)(param_2 + 0x78);
              puVar7 = (undefined8 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
              uVar8 = (ulong)*(uint *)(param_2 + 100);
            }
            else {
              puVar9 = *(undefined8 **)(param_2 + 0x78);
              uVar18 = *(uint *)(param_2 + 100);
              uVar8 = (ulong)uVar18;
              puVar7 = puVar9;
              if (uVar18 != 0) {
                puVar7 = (undefined8 *)((long)puVar9 + (ulong)(uVar18 - 1) * 0x14);
              }
            }
            uVar3 = puVar7[1];
            piVar1 = (int *)((long)puVar9 + uVar8 * 0x14);
            *(undefined8 *)piVar1 = *puVar7;
            *(undefined8 *)(piVar1 + 2) = uVar3;
            iVar6 = *(int *)(puVar7 + 2);
            *piVar1 = iVar19;
            piVar1[4] = iVar6;
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
            uVar8 = (ulong)(local_6c + *(int *)(param_2 + 0x5c));
            *(uint *)(param_2 + 0x5c) = local_6c + *(int *)(param_2 + 0x5c);
          }
LAB_00100e53:
          uVar18 = uVar17 + 1;
        }
        else {
LAB_001004a8:
          *(undefined1 *)(lVar11 + 0x13 + (ulong)*(uint *)(param_2 + 0x5c) * 0x14) = 1;
          if (param_2[0x5a] == (hb_buffer_t)0x0) {
            iVar6 = *(int *)(param_2 + 0x5c);
            lVar11 = *(long *)(param_2 + 0x70);
LAB_001004c6:
            uVar18 = iVar6 + 1;
            *(uint *)(param_2 + 0x5c) = uVar18;
          }
          else {
            lVar11 = *(long *)(param_2 + 0x70);
            if ((*(long *)(param_2 + 0x78) == lVar11) &&
               (iVar6 = *(int *)(param_2 + 0x5c), iVar5 = iVar6, *(int *)(param_2 + 100) == iVar6))
            {
LAB_0010083d:
              *(int *)(param_2 + 100) = iVar5 + 1;
              goto LAB_001004c6;
            }
            cVar4 = hb_buffer_t::make_room_for(uVar15,1);
            if (cVar4 != '\0') {
              puVar7 = (undefined8 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
              uVar3 = puVar7[1];
              puVar9 = (undefined8 *)
                       (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
              *puVar9 = *puVar7;
              puVar9[1] = uVar3;
              *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar7 + 2);
              iVar6 = *(int *)(param_2 + 0x5c);
              lVar11 = *(long *)(param_2 + 0x70);
              iVar5 = *(int *)(param_2 + 100);
              goto LAB_0010083d;
            }
            lVar11 = *(long *)(param_2 + 0x70);
            uVar18 = *(uint *)(param_2 + 0x5c);
          }
          *(undefined1 *)(lVar11 + 0x13 + (ulong)uVar18 * 0x14) = 2;
          if (param_2[0x5a] == (hb_buffer_t)0x0) {
            iVar6 = *(int *)(param_2 + 0x5c);
LAB_001004e2:
            *(int *)(param_2 + 0x5c) = iVar6 + 1;
          }
          else {
            if ((*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70)) &&
               (iVar6 = *(int *)(param_2 + 0x5c), iVar5 = iVar6, *(int *)(param_2 + 100) == iVar6))
            {
LAB_001007d1:
              *(int *)(param_2 + 100) = iVar5 + 1;
              goto LAB_001004e2;
            }
            cVar4 = hb_buffer_t::make_room_for(uVar15,1);
            if (cVar4 != '\0') {
              puVar7 = (undefined8 *)
                       (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
              puVar9 = (undefined8 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
              uVar3 = puVar9[1];
              *puVar7 = *puVar9;
              puVar7[1] = uVar3;
              *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar9 + 2);
              iVar6 = *(int *)(param_2 + 0x5c);
              iVar5 = *(int *)(param_2 + 100);
              goto LAB_001007d1;
            }
          }
          uVar18 = uVar17 + 2;
          if (local_84 != 0) {
            *(undefined1 *)
             (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14 + 0x13) = 3;
            if (param_2[0x5a] == (hb_buffer_t)0x0) {
              iVar6 = *(int *)(param_2 + 0x5c);
LAB_001009c9:
              *(int *)(param_2 + 0x5c) = iVar6 + 1;
            }
            else {
              if ((*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70)) &&
                 (iVar6 = *(int *)(param_2 + 0x5c), iVar5 = iVar6, *(int *)(param_2 + 100) == iVar6)
                 ) {
LAB_00100bb1:
                *(int *)(param_2 + 100) = iVar5 + 1;
                goto LAB_001009c9;
              }
              cVar4 = hb_buffer_t::make_room_for(uVar15,1);
              if (cVar4 != '\0') {
                puVar7 = (undefined8 *)
                         (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
                uVar3 = puVar7[1];
                puVar9 = (undefined8 *)
                         (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
                *puVar9 = *puVar7;
                puVar9[1] = uVar3;
                *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar7 + 2);
                iVar6 = *(int *)(param_2 + 0x5c);
                iVar5 = *(int *)(param_2 + 100);
                goto LAB_00100bb1;
              }
            }
            uVar18 = uVar17 + 3;
          }
          if (param_2[0x58] == (hb_buffer_t)0x0) break;
          if (*(int *)(param_2 + 0x1c) != 0) goto LAB_00100512;
          hb_buffer_t::merge_out_clusters(uVar15,uVar17);
          uVar8 = (ulong)*(uint *)(param_2 + 0x5c);
        }
      }
      else {
        uVar16 = iVar6 - 0xac00;
        if (uVar16 < 0x2ba4) {
          local_5c = 0;
          lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
          if (lVar11 != 0) {
            lVar11 = *(long *)(lVar11 + 0x10);
          }
          iVar5 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                            (param_3,*(undefined8 *)(param_3 + 0x98),iVar6,&local_5c,lVar11);
          uVar14 = (uVar16 % 0x24c) % 0x1c;
          if (uVar14 == 0) {
            if (*(int *)(param_2 + 0x5c) + 1U < uVar2) {
              iVar19 = *(int *)(*(long *)(param_2 + 0x70) +
                               (ulong)(*(int *)(param_2 + 0x5c) + 1U) * 0x14);
              uVar10 = iVar19 - 0x11a8;
              if (uVar10 < 0x1b) {
                iVar6 = iVar19 + -0x11a7 + iVar6;
                local_5c = 0;
                lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar11 != 0) {
                  lVar11 = *(long *)(lVar11 + 0x10);
                }
                iVar19 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                   (param_3,*(undefined8 *)(param_3 + 0x98),iVar6,&local_5c,lVar11);
                if (iVar19 != 0) {
                  cVar4 = hb_buffer_t::make_room_for(uVar15,2);
                  if (cVar4 == '\0') goto LAB_001010a4;
                  hb_buffer_t::merge_clusters_impl(uVar15,*(uint *)(param_2 + 0x5c));
                  if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
                    puVar9 = *(undefined8 **)(param_2 + 0x78);
                    uVar8 = (ulong)*(uint *)(param_2 + 100);
                    puVar7 = (undefined8 *)
                             (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
                  }
                  else {
                    puVar9 = *(undefined8 **)(param_2 + 0x78);
                    uVar18 = *(uint *)(param_2 + 100);
                    uVar8 = (ulong)uVar18;
                    puVar7 = puVar9;
                    if (uVar18 != 0) {
                      puVar7 = (undefined8 *)((long)puVar9 + (ulong)(uVar18 - 1) * 0x14);
                    }
                  }
                  uVar3 = puVar7[1];
                  piVar1 = (int *)((long)puVar9 + uVar8 * 0x14);
                  *(undefined8 *)piVar1 = *puVar7;
                  *(undefined8 *)(piVar1 + 2) = uVar3;
                  iVar5 = *(int *)(puVar7 + 2);
                  *piVar1 = iVar6;
                  piVar1[4] = iVar5;
                  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                  uVar8 = (ulong)(*(int *)(param_2 + 0x5c) + 2U);
                  *(uint *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 2U;
                  goto LAB_00100e53;
                }
                hb_buffer_t::_set_glyph_flags
                          (param_2,3,*(uint *)(param_2 + 0x5c),*(uint *)(param_2 + 0x5c) + 2,true,
                           false);
                if (iVar5 != 0) {
                  if (uVar2 <= *(int *)(param_2 + 0x5c) + 1U) goto LAB_001002d4;
                  iVar19 = *(int *)(*(long *)(param_2 + 0x70) +
                                   (ulong)(*(int *)(param_2 + 0x5c) + 1U) * 0x14);
                  uVar10 = iVar19 - 0x11a8;
                  goto LAB_001008a4;
                }
              }
              else if (iVar5 != 0) {
LAB_001008a4:
                if ((0x57 < uVar10) && (0x30 < iVar19 - 0xd7cbU)) goto LAB_001002d4;
              }
            }
            else if (iVar5 != 0) goto LAB_001002d4;
LAB_001008b0:
            local_5c = 0;
            lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar14 + 0x11a7);
            iVar6 = uVar16 / 0x24c + 0x1100;
            iVar19 = (uVar16 % 0x24c) / 0x1c + 0x1161;
            local_58 = CONCAT44(iVar19,iVar6);
            if (lVar11 != 0) {
              lVar11 = *(long *)(lVar11 + 0x10);
            }
            iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                              (param_3,*(undefined8 *)(param_3 + 0x98),iVar6,&local_5c,lVar11);
            if (iVar6 == 0) {
LAB_00100933:
              if (uVar14 == 0) {
                uVar16 = *(uint *)(param_2 + 0x5c);
                if ((uVar16 + 1 < uVar2) &&
                   ((iVar6 = *(int *)(*(long *)(param_2 + 0x70) + (ulong)(uVar16 + 1) * 0x14),
                    iVar6 - 0x11a8U < 0x58 || (iVar6 - 0xd7cbU < 0x31)))) {
                  hb_buffer_t::_set_glyph_flags(param_2,3,uVar16,uVar16 + 2,true,false);
                }
              }
            }
            else {
              local_5c = 0;
              lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar11 != 0) {
                lVar11 = *(long *)(lVar11 + 0x10);
              }
              iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                (param_3,*(undefined8 *)(param_3 + 0x98),iVar19,&local_5c,lVar11);
              if (iVar6 == 0) goto LAB_00100933;
              if (uVar14 == 0) {
                uVar18 = 2;
                cVar4 = hb_buffer_t::make_room_for(uVar15,1);
                if (cVar4 != '\0') {
LAB_00100cbd:
                  uVar16 = *(uint *)(param_2 + 100);
                  puVar9 = *(undefined8 **)(param_2 + 0x78);
                  puVar7 = (undefined8 *)((long)puVar9 + (ulong)uVar16 * 0x14);
                  if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
                    puVar9 = (undefined8 *)
                             (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
                  }
                  else if (uVar16 != 0) {
                    puVar9 = (undefined8 *)((long)puVar9 + (ulong)(uVar16 - 1) * 0x14);
                  }
                  puVar12 = &local_58;
                  do {
                    uVar3 = puVar9[1];
                    puVar13 = (undefined8 *)((long)puVar12 + 4);
                    *puVar7 = *puVar9;
                    puVar7[1] = uVar3;
                    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar9 + 2);
                    *(undefined4 *)puVar7 = *(undefined4 *)puVar12;
                    puVar7 = (undefined8 *)((long)puVar7 + 0x14);
                    puVar12 = puVar13;
                  } while (puVar13 != (undefined8 *)((long)&local_58 + (ulong)uVar18 * 4));
                  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
                  *(uint *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar18;
                }
                if ((uVar14 == 0) && (iVar5 != 0)) {
                  if (param_2[0x5a] == (hb_buffer_t)0x0) {
                    iVar6 = *(int *)(param_2 + 0x5c);
LAB_00100d41:
                    *(int *)(param_2 + 0x5c) = iVar6 + 1;
                  }
                  else {
                    if ((*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70)) &&
                       (iVar6 = *(int *)(param_2 + 0x5c), iVar5 = iVar6,
                       *(int *)(param_2 + 100) == iVar6)) {
LAB_00101099:
                      *(int *)(param_2 + 100) = iVar5 + 1;
                      goto LAB_00100d41;
                    }
                    cVar4 = hb_buffer_t::make_room_for(uVar15,1);
                    if (cVar4 != '\0') {
                      puVar7 = (undefined8 *)
                               (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14)
                      ;
                      uVar3 = puVar7[1];
                      puVar9 = (undefined8 *)
                               (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
                      *puVar9 = *puVar7;
                      puVar9[1] = uVar3;
                      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar7 + 2);
                      iVar6 = *(int *)(param_2 + 0x5c);
                      iVar5 = *(int *)(param_2 + 100);
                      goto LAB_00101099;
                    }
                  }
                  uVar18 = uVar18 + 1;
                }
LAB_00100d4a:
                if (param_2[0x58] != (hb_buffer_t)0x0) {
                  lVar11 = *(long *)(param_2 + 0x78);
                  uVar18 = uVar18 + uVar17;
                  *(undefined1 *)(lVar11 + 0x13 + (ulong)uVar17 * 0x14) = 1;
                  *(undefined1 *)(lVar11 + 0x13 + (ulong)(uVar17 + 1) * 0x14) = 2;
                  if (uVar17 + 2 < uVar18) {
                    *(undefined1 *)(lVar11 + 0x13 + (ulong)(uVar17 + 2) * 0x14) = 3;
                  }
                  if (*(int *)(param_2 + 0x1c) == 0) {
                    hb_buffer_t::merge_out_clusters(uVar15,uVar17);
                  }
                  goto LAB_00100512;
                }
                break;
              }
              local_5c = 0;
              lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar11 != 0) {
                lVar11 = *(long *)(lVar11 + 0x10);
              }
              iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                (param_3,*(undefined8 *)(param_3 + 0x98),uVar14 + 0x11a7,&local_5c,
                                 lVar11);
              if (iVar6 != 0) {
                uVar18 = 3;
                cVar4 = hb_buffer_t::make_room_for(uVar15,1);
                if (cVar4 != '\0') goto LAB_00100cbd;
                goto LAB_00100d4a;
              }
            }
            if (iVar5 == 0) goto LAB_001002e0;
          }
          else if (iVar5 == 0) goto LAB_001008b0;
LAB_001002d4:
          uVar18 = uVar17 + 1;
        }
LAB_001002e0:
        if (param_2[0x5a] == (hb_buffer_t)0x0) {
          iVar6 = *(int *)(param_2 + 0x5c);
        }
        else {
          if ((*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70)) ||
             (iVar6 = *(int *)(param_2 + 0x5c), iVar5 = iVar6, *(int *)(param_2 + 100) != iVar6)) {
            cVar4 = hb_buffer_t::make_room_for(uVar15,1);
            if (cVar4 == '\0') {
LAB_00100512:
              uVar8 = (ulong)*(uint *)(param_2 + 0x5c);
              goto LAB_001002f3;
            }
            puVar7 = (undefined8 *)
                     (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
            puVar9 = (undefined8 *)
                     (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
            uVar3 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar3;
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar9 + 2);
            iVar6 = *(int *)(param_2 + 0x5c);
            iVar5 = *(int *)(param_2 + 100);
          }
          *(int *)(param_2 + 100) = iVar5 + 1;
        }
        uVar8 = (ulong)(iVar6 + 1U);
        *(uint *)(param_2 + 0x5c) = iVar6 + 1U;
      }
LAB_001002f3:
    } while ((uint)uVar8 < uVar2);
  }
LAB_001003a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  hb_buffer_t::sync();
  return;
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
            if (puVar1 == puVar5) goto LAB_00101190;
          }
          do {
            *puVar5 = *puVar5 | param_1;
            puVar5[5] = puVar5[5] | param_1;
            puVar5 = puVar5 + 10;
          } while (puVar1 != puVar5);
        }
        goto LAB_00101190;
      }
      iVar2 = *(int *)(this + 0x1c);
      uVar13 = *(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x70);
      lVar9 = *(long *)(this + 0x78);
      if (uVar13 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar11) goto LAB_00101190;
        if (iVar2 != 2) goto LAB_00101335;
LAB_0010159f:
        uVar7 = (ulong)param_2;
        uVar8 = local_44;
        if (param_2 < uVar11) {
          puVar5 = (uint *)(lVar9 + 8 + uVar7 * 0x14);
          puVar1 = (uint *)(lVar9 + 0x1c + (((uVar11 - param_2) - 1) + uVar7) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_001015e8;
          if (*puVar5 < local_44) {
            uVar8 = *puVar5;
          }
          for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
LAB_001015e8:
            if (*puVar5 < uVar8) {
              uVar8 = *puVar5;
            }
            if (puVar5[5] < uVar8) {
              uVar8 = puVar5[5];
            }
          }
          if (param_2 != uVar11) goto LAB_0010160c;
        }
        else {
LAB_0010160c:
          local_50 = uVar7 * 0x14;
LAB_0010161d:
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
LAB_0010165d:
        if (param_3 == uVar13) goto LAB_00101190;
LAB_00101666:
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
LAB_0010166d:
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        if (iVar2 != 2) goto LAB_00101423;
LAB_0010168e:
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
              if (puVar5 == puVar1) goto LAB_00101592;
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
LAB_00101592:
          uVar8 = local_44;
          if (param_2 != uVar11) goto LAB_0010159f;
          goto LAB_00101666;
        }
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar8 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        if (uVar15 < uVar8) {
          uVar8 = uVar15;
        }
        local_44 = uVar8;
        if (param_2 == uVar11) goto LAB_0010166d;
LAB_00101335:
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
        if (param_2 == uVar11) goto LAB_0010165d;
        local_50 = uVar7 * 0x14;
        lVar14 = (ulong)(uVar11 - 1) * 0x14;
        uVar15 = *(uint *)(lVar9 + 8 + local_50);
        lVar12 = lVar9 + lVar14;
        uVar3 = *(uint *)(lVar12 + 8);
        if (uVar8 != uVar15) {
          if (uVar8 == uVar3) {
            if (uVar8 == uVar15) goto LAB_001014dd;
            if (param_2 < uVar11) {
              puVar5 = (uint *)(lVar9 + 4 + local_50);
              do {
                if (puVar5[1] == uVar3) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar9 + 0x18 + (((uVar11 - param_2) - 1) + uVar7) * 0x14))
              ;
              goto LAB_001013f9;
            }
            goto LAB_001013fd;
          }
          goto LAB_0010161d;
        }
LAB_001014dd:
        if (param_2 < uVar11) {
          do {
            if (*(uint *)(lVar12 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | param_1;
            lVar12 = lVar12 + -0x14;
          } while (lVar12 != lVar9 + -0x14 + lVar14 + (ulong)((uVar11 - param_2) - 1) * -0x14);
LAB_001013f9:
          uVar13 = *(uint *)(this + 0x5c);
        }
LAB_001013fd:
        if (uVar13 == param_3) goto LAB_00101190;
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
LAB_00101423:
        if (uVar11 != uVar8) {
          if (uVar15 != uVar8) goto LAB_0010168e;
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
            goto LAB_00101190;
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
      goto LAB_00101190;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)param_2 * 0x14);
        puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                         ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14);
        if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
          *puVar5 = *puVar5 | param_1;
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar1) goto LAB_00101190;
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
      goto LAB_00101190;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00101190;
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
        if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00101730;
        uVar11 = 0xffffffff;
        if (*puVar5 != 0xffffffff) {
          uVar11 = *puVar5;
        }
        for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
LAB_00101730:
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
LAB_00101190:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


