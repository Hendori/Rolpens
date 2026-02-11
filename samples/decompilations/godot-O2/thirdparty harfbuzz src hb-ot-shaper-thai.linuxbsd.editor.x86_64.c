
/* thai_pua_shape(unsigned int, thai_action_t, hb_font_t*) */

uint thai_pua_shape(uint param_1,undefined4 param_2,undefined8 param_3)

{
  ushort *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    goto switchD_00100038_caseD_0;
  case 1:
    puVar5 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SD_mappings;
    uVar3 = 0xe48;
    break;
  case 2:
    puVar5 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SL_mappings;
    uVar3 = 0xe48;
    break;
  case 3:
    puVar5 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SDL_mappings;
    uVar3 = 0xe48;
    break;
  case 4:
    puVar5 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::RD_mappings;
    uVar3 = 0xe0d;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  do {
    if (uVar3 == param_1) {
      iVar4 = hb_font_get_glyph(param_3,*(undefined2 *)(puVar5 + 2),0,local_34);
      if (iVar4 != 0) {
        param_1 = (uint)*(ushort *)(puVar5 + 2);
        goto LAB_00100042;
      }
      iVar4 = hb_font_get_glyph(param_3,*(undefined2 *)(puVar5 + 4),0,local_34);
      if (iVar4 != 0) {
        param_1 = (uint)*(ushort *)(puVar5 + 4);
        goto LAB_00100042;
      }
      break;
    }
    puVar1 = (ushort *)(puVar5 + 6);
    uVar3 = (uint)*puVar1;
    puVar5 = puVar5 + 6;
  } while (*puVar1 != 0);
switchD_00100038_caseD_0:
LAB_00100042:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* preprocess_text_thai(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void preprocess_text_thai(hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,hb_font_t *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint *puVar24;
  uint uVar25;
  long in_FS_OFFSET;
  ulong uVar23;
  
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  hb_buffer_t::clear_output();
  uVar4 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  uVar12 = 0;
  if (uVar4 != 0) {
    do {
      uVar25 = *(uint *)(*(long *)(param_2 + 0x70) + (ulong)uVar12 * 0x14);
      uVar16 = (uint)param_2;
      if ((uVar25 & 0xffffff7f) == 0xe33) {
        cVar11 = hb_buffer_t::make_room_for(uVar16,0);
        if (cVar11 == '\0') {
          iVar13 = *(int *)(param_2 + 100);
        }
        else {
          puVar1 = *(undefined8 **)(param_2 + 0x78);
          uVar12 = *(uint *)(param_2 + 100);
          if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
            puVar19 = (undefined8 *)
                      (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
          }
          else {
            puVar19 = puVar1;
            if (uVar12 != 0) {
              puVar19 = (undefined8 *)((long)puVar1 + (ulong)(uVar12 - 1) * 0x14);
            }
          }
          uVar9 = puVar19[1];
          piVar2 = (int *)((long)puVar1 + (ulong)uVar12 * 0x14);
          *(undefined8 *)piVar2 = *puVar19;
          *(undefined8 *)(piVar2 + 2) = uVar9;
          iVar13 = *(int *)(puVar19 + 2);
          *piVar2 = uVar25 + 0x1a;
          piVar2[4] = iVar13;
          iVar13 = *(int *)(param_2 + 100) + 1;
          *(int *)(param_2 + 100) = iVar13;
        }
        lVar21 = *(long *)(param_2 + 0x78);
        if (iVar13 != 0) {
          lVar21 = lVar21 + (ulong)(iVar13 - 1) * 0x14;
        }
        *(ushort *)(lVar21 + 0x10) = *(ushort *)(lVar21 + 0x10) | 0x80;
        cVar11 = hb_buffer_t::make_room_for(uVar16,1);
        if (cVar11 == '\0') break;
        puVar1 = *(undefined8 **)(param_2 + 0x78);
        uVar12 = *(uint *)(param_2 + 100);
        if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
          puVar19 = (undefined8 *)
                    (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
        }
        else {
          puVar19 = puVar1;
          if (uVar12 != 0) {
            puVar19 = (undefined8 *)((long)puVar1 + (ulong)(uVar12 - 1) * 0x14);
          }
        }
        uVar9 = puVar19[1];
        piVar2 = (int *)((long)puVar1 + (ulong)uVar12 * 0x14);
        *(undefined8 *)piVar2 = *puVar19;
        *(undefined8 *)(piVar2 + 2) = uVar9;
        iVar13 = *(int *)(puVar19 + 2);
        *piVar2 = uVar25 - 1;
        piVar2[4] = iVar13;
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
        uVar12 = *(int *)(param_2 + 100) - 1;
        uVar17 = (ulong)uVar12;
        uVar25 = *(int *)(param_2 + 100) + 1;
        *(uint *)(param_2 + 100) = uVar25;
        lVar21 = *(long *)(param_2 + 0x78) + uVar17 * 0x14;
        *(ushort *)(lVar21 + 0x10) = *(ushort *)(lVar21 + 0x10) & 0xe0 | 0xc;
        uVar18 = uVar17;
        do {
          uVar23 = uVar18;
          uVar22 = (uint)uVar23;
          if (uVar22 == 0) {
            if (uVar25 < 3) goto LAB_0010038d;
            goto LAB_00100538;
          }
          uVar14 = uVar22 - 1;
          uVar15 = (*(uint *)(*(long *)(param_2 + 0x78) + (ulong)uVar14 * 0x14) & 0xffffff7f) -
                   0xe31;
        } while ((uVar15 < 0x1e) &&
                (uVar18 = (ulong)uVar14, (0x3fc00479UL >> ((ulong)uVar15 & 0x3f) & 1) != 0));
        if (uVar22 + 2 < uVar25) {
LAB_00100538:
          hb_buffer_t::merge_out_clusters(uVar16,uVar22);
          lVar20 = *(long *)(param_2 + 0x78);
          uVar6 = *(undefined4 *)(lVar20 + 0x10 + uVar17 * 0x14);
          puVar1 = (undefined8 *)(lVar20 + uVar17 * 0x14);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          lVar21 = uVar23 * 0x14;
          memmove((void *)(lVar20 + 0x14 + lVar21),(void *)(lVar20 + lVar21),
                  (ulong)(uVar12 - uVar22) * 0x14);
          lVar20 = *(long *)(param_2 + 0x78);
          puVar1 = (undefined8 *)(lVar20 + uVar23 * 0x14);
          *puVar1 = uVar9;
          puVar1[1] = uVar10;
          *(undefined4 *)(lVar20 + 0x10 + lVar21) = uVar6;
          uVar12 = *(uint *)(param_2 + 0x5c);
        }
        else {
          if (*(int *)(param_2 + 0x1c) == 0) {
            hb_buffer_t::merge_out_clusters(uVar16,uVar14);
          }
LAB_0010038d:
          uVar12 = *(uint *)(param_2 + 0x5c);
        }
      }
      else {
        if (param_2[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(param_2 + 0x70) != *(long *)(param_2 + 0x78)) ||
             (*(uint *)(param_2 + 100) != uVar12)) {
            cVar11 = hb_buffer_t::make_room_for(uVar16,1);
            if (cVar11 == '\0') break;
            puVar1 = (undefined8 *)
                     (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
            uVar9 = puVar1[1];
            puVar19 = (undefined8 *)
                      (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
            *puVar19 = *puVar1;
            puVar19[1] = uVar9;
            *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar1 + 2);
            uVar12 = *(uint *)(param_2 + 100);
          }
          *(uint *)(param_2 + 100) = uVar12 + 1;
        }
        uVar12 = *(int *)(param_2 + 0x5c) + 1;
        *(uint *)(param_2 + 0x5c) = uVar12;
      }
    } while (uVar12 < uVar4);
  }
  hb_buffer_t::sync();
  if ((*(int *)(param_1 + 4) == 0x54686169) && (param_1[0x30] == (hb_ot_shape_plan_t)0x0)) {
    uVar4 = *(uint *)(param_2 + 0x60);
    puVar8 = *(uint **)(param_2 + 0x70);
    if (uVar4 != 0) {
      iVar13 = 2;
      uVar12 = 0;
      lVar21 = 3;
      uVar25 = 0;
      puVar24 = puVar8;
      do {
        uVar16 = *puVar24;
        if (uVar16 - 0xe31 < 0x1e) {
          uVar18 = 1L << ((byte)(uVar16 - 0xe31) & 0x3f);
          if ((uVar18 & 0x30400079) == 0) {
            if ((uVar18 & 0xf800000) == 0) {
              lVar20 = 1;
              if ((uVar18 & 0x380) == 0) {
                iVar13 = 0;
                lVar21 = 1;
                uVar12 = uVar25;
                if ((uVar16 & 0xfffffffb) != 0xe1b) goto LAB_00100639;
                goto LAB_00100412;
              }
            }
            else {
              lVar20 = 2;
            }
          }
          else {
            lVar20 = 0;
          }
          lVar21 = lVar21 * 3 + lVar20;
          iVar5 = *(int *)(thai_above_state_machine + lVar21 * 8);
          lVar20 = (long)iVar13 * 3 + lVar20;
          lVar21 = (long)*(int *)(thai_above_state_machine + lVar21 * 8 + 4);
          iVar13 = *(int *)(thai_below_state_machine + lVar20 * 8 + 4);
          if (iVar5 == 0) {
            iVar5 = *(int *)(thai_below_state_machine + lVar20 * 8);
          }
          hb_buffer_t::_set_glyph_flags(param_2,3,uVar12,uVar25,true,false);
          if (iVar5 == 4) {
            puVar3 = puVar8 + (ulong)uVar12 * 5;
            uVar16 = thai_pua_shape(*puVar3,4,param_3);
            *puVar3 = uVar16;
          }
          else {
            uVar16 = thai_pua_shape(*puVar24,iVar5,param_3);
            *puVar24 = uVar16;
          }
        }
        else if (((uVar16 & 0xfffffffb) == 0xe1b) || (uVar16 == 0xe1d)) {
          iVar13 = 0;
          lVar21 = 1;
          uVar12 = uVar25;
        }
        else if ((uVar16 == 0xe0d) || (uVar16 == 0xe10)) {
          iVar13 = 1;
          lVar21 = 0;
          uVar12 = uVar25;
        }
        else if (uVar16 - 0xe0e < 2) {
          iVar13 = 2;
          lVar21 = 0;
          uVar12 = uVar25;
        }
        else {
LAB_00100639:
          lVar20 = (long)(int)((uint)(0x2d < uVar16 - 0xe01) << 2);
          lVar21 = (long)*(int *)(thai_above_start_state + lVar20 * 4);
          iVar13 = *(int *)(thai_below_start_state + lVar20 * 4);
          uVar12 = uVar25;
        }
LAB_00100412:
        uVar25 = uVar25 + 1;
        puVar24 = puVar24 + 5;
      } while (uVar4 != uVar25);
    }
  }
  if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* thai_pua_shape(unsigned int, thai_action_t, hb_font_t*) [clone .cold] */

void thai_pua_shape(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
            if (puVar1 == puVar5) goto LAB_00100990;
          }
          do {
            *puVar5 = *puVar5 | param_1;
            puVar5[5] = puVar5[5] | param_1;
            puVar5 = puVar5 + 10;
          } while (puVar1 != puVar5);
        }
        goto LAB_00100990;
      }
      iVar2 = *(int *)(this + 0x1c);
      uVar13 = *(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x70);
      lVar9 = *(long *)(this + 0x78);
      if (uVar13 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar11) goto LAB_00100990;
        if (iVar2 != 2) goto LAB_00100b35;
LAB_00100d9f:
        uVar7 = (ulong)param_2;
        uVar8 = local_44;
        if (param_2 < uVar11) {
          puVar5 = (uint *)(lVar9 + 8 + uVar7 * 0x14);
          puVar1 = (uint *)(lVar9 + 0x1c + (((uVar11 - param_2) - 1) + uVar7) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00100de8;
          if (*puVar5 < local_44) {
            uVar8 = *puVar5;
          }
          for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
LAB_00100de8:
            if (*puVar5 < uVar8) {
              uVar8 = *puVar5;
            }
            if (puVar5[5] < uVar8) {
              uVar8 = puVar5[5];
            }
          }
          if (param_2 != uVar11) goto LAB_00100e0c;
        }
        else {
LAB_00100e0c:
          local_50 = uVar7 * 0x14;
LAB_00100e1d:
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
LAB_00100e5d:
        if (param_3 == uVar13) goto LAB_00100990;
LAB_00100e66:
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
LAB_00100e6d:
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        if (iVar2 != 2) goto LAB_00100c23;
LAB_00100e8e:
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
              if (puVar5 == puVar1) goto LAB_00100d92;
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
LAB_00100d92:
          uVar8 = local_44;
          if (param_2 != uVar11) goto LAB_00100d9f;
          goto LAB_00100e66;
        }
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar8 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        if (uVar15 < uVar8) {
          uVar8 = uVar15;
        }
        local_44 = uVar8;
        if (param_2 == uVar11) goto LAB_00100e6d;
LAB_00100b35:
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
        if (param_2 == uVar11) goto LAB_00100e5d;
        local_50 = uVar7 * 0x14;
        lVar14 = (ulong)(uVar11 - 1) * 0x14;
        uVar15 = *(uint *)(lVar9 + 8 + local_50);
        lVar12 = lVar9 + lVar14;
        uVar3 = *(uint *)(lVar12 + 8);
        if (uVar8 != uVar15) {
          if (uVar8 == uVar3) {
            if (uVar8 == uVar15) goto LAB_00100cdd;
            if (param_2 < uVar11) {
              puVar5 = (uint *)(lVar9 + 4 + local_50);
              do {
                if (puVar5[1] == uVar3) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar9 + 0x18 + (((uVar11 - param_2) - 1) + uVar7) * 0x14))
              ;
              goto LAB_00100bf9;
            }
            goto LAB_00100bfd;
          }
          goto LAB_00100e1d;
        }
LAB_00100cdd:
        if (param_2 < uVar11) {
          do {
            if (*(uint *)(lVar12 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | param_1;
            lVar12 = lVar12 + -0x14;
          } while (lVar12 != lVar9 + -0x14 + lVar14 + (ulong)((uVar11 - param_2) - 1) * -0x14);
LAB_00100bf9:
          uVar13 = *(uint *)(this + 0x5c);
        }
LAB_00100bfd:
        if (uVar13 == param_3) goto LAB_00100990;
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
LAB_00100c23:
        if (uVar11 != uVar8) {
          if (uVar15 != uVar8) goto LAB_00100e8e;
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
            goto LAB_00100990;
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
      goto LAB_00100990;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)param_2 * 0x14);
        puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                         ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14);
        if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
          *puVar5 = *puVar5 | param_1;
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar1) goto LAB_00100990;
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
      goto LAB_00100990;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00100990;
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
        if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_00100f30;
        uVar11 = 0xffffffff;
        if (*puVar5 != 0xffffffff) {
          uVar11 = *puVar5;
        }
        for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
LAB_00100f30:
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
LAB_00100990:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


