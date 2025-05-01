
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_ot_shape_planner_t::hb_ot_shape_planner_t(hb_face_t*, hb_segment_properties_t const&) */

void __thiscall
hb_ot_shape_planner_t::hb_ot_shape_planner_t
          (hb_ot_shape_planner_t *this,hb_face_t *param_1,hb_segment_properties_t *param_2)

{
  hb_ot_shape_planner_t hVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(hb_face_t **)this = param_1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined8 *)(this + 0x20) = uVar5;
  hb_ot_map_builder_t::hb_ot_map_builder_t((hb_ot_map_builder_t *)(this + 0x28),param_1,param_2);
  iVar8 = hb_aat_layout_has_substitution(param_1);
  uVar10 = *(uint *)param_2;
  if (iVar8 == 0) {
    hVar1 = this[0xa8];
    iVar8 = *(int *)(this + 0x54);
    this[0xa8] = (hb_ot_shape_planner_t)((byte)hVar1 & 0xfe);
    cVar7 = DAT_001060b4;
    uVar9 = *(uint *)(param_2 + 4);
    if (uVar9 == 0x4c616f6f) {
      *(undefined **)(this + 0xb0) = &_hb_ot_shaper_thai;
      this[0xa8] = (hb_ot_shape_planner_t)
                   ((_hb_ot_layout_has_glyph_classes != 0) * '\x02' | cVar7 * '\x04' & 6U |
                   (byte)hVar1 & 0xf8);
      return;
    }
    bVar12 = false;
  }
  else {
    bVar12 = true;
    if ((uVar10 & 0xfffffffe) != 4) {
      iVar8 = hb_ot_layout_has_substitution(param_1);
      uVar10 = *(uint *)param_2;
      bVar12 = iVar8 == 0;
    }
    iVar8 = *(int *)(this + 0x54);
    this[0xa8] = (hb_ot_shape_planner_t)((byte)this[0xa8] & 0xfe | bVar12);
    uVar9 = *(uint *)(param_2 + 4);
    if (uVar9 == 0x4c616f6f) {
      puVar11 = &_hb_ot_shaper_thai;
      goto LAB_001004d8;
    }
  }
  cVar7 = DAT_001060a4;
  iVar6 = __hb_ot_shaper_arabic;
  if (uVar9 < 0x4c616f70) {
    if (uVar9 == 0x48656272) {
      puVar11 = &_hb_ot_shaper_hebrew;
      goto LAB_001004d8;
    }
    if (uVar9 < 0x48656273) {
      if (uVar9 == 0x47757275) goto LAB_001005c8;
      if (uVar9 < 0x47757276) {
        if (uVar9 != 0x4261746b) {
          if (uVar9 < 0x4261746c) {
            if (uVar9 == 0x41726162) goto LAB_00100390;
            if (uVar9 < 0x41726163) {
              if ((uVar9 != 0x41646c6d) && (uVar9 != 0x41686f6d)) goto LAB_0010039c;
            }
            else if (uVar9 != 0x42616c69) goto LAB_0010039c;
          }
          else {
            if (uVar9 == 0x44657661) goto LAB_001005c8;
            if (uVar9 < 0x44657662) {
              if (uVar9 == 0x42656e67) goto LAB_001005c8;
              if (uVar9 < 0x42656e67) goto LAB_0010039c;
              if (uVar9 != 0x43616b6d) {
                if (uVar9 < 0x43616b6e) {
                  if (uVar9 != 0x42756769) {
                    if (uVar9 < 0x4275676a) {
                      if ((uVar9 != 0x42686b73) && (uVar9 != 0x42726168)) goto LAB_0010039c;
                    }
                    else if (uVar9 != 0x42756864) goto LAB_0010039c;
                  }
                }
                else if (((uVar9 != 0x43687273) && (uVar9 != 0x43706d6e)) && (uVar9 != 0x4368616d))
                goto LAB_0010039c;
              }
            }
            else {
              if (uVar9 == 0x47756a72) goto LAB_001005c8;
              if (uVar9 < 0x47756a73) {
                if (uVar9 != 0x456c796d) {
                  if (uVar9 < 0x456c796e) {
                    if (uVar9 != 0x4475706c) {
                      if (uVar9 < 0x4475706d) {
                        if ((uVar9 != 0x4469616b) && (uVar9 != 0x446f6772)) goto LAB_0010039c;
                      }
                      else if (uVar9 != 0x45677970) goto LAB_0010039c;
                    }
                  }
                  else if (uVar9 != 0x476f6e6d) {
                    if (uVar9 < 0x476f6e6e) {
                      if ((uVar9 != 0x47617261) && (uVar9 != 0x476f6e67)) goto LAB_0010039c;
                    }
                    else if (uVar9 != 0x4772616e) goto LAB_0010039c;
                  }
                }
              }
              else if (uVar9 != 0x47756b68) goto LAB_0010039c;
            }
          }
        }
      }
      else {
        puVar11 = &_hb_ot_shaper_hangul;
        if (uVar9 == 0x48616e67) goto LAB_001004d8;
        if (uVar9 != 0x48616e6f) goto LAB_0010039c;
      }
    }
    else {
      puVar11 = &_hb_ot_shaper_khmer;
      if (uVar9 == 0x4b686d72) goto LAB_001004d8;
      if (uVar9 < 0x4b686d73) {
        if (uVar9 != 0x4b616c69) {
          if (uVar9 < 0x4b616c6a) {
            if ((uVar9 != 0x486d6e70) && ((uVar9 != 0x4a617661 && (uVar9 != 0x486d6e67))))
            goto LAB_0010039c;
          }
          else if ((uVar9 != 0x4b617769) && (uVar9 != 0x4b686172)) goto LAB_0010039c;
        }
      }
      else {
        if (uVar9 == 0x4b6e6461) goto LAB_001005c8;
        if (uVar9 < 0x4b6e6462) {
          if ((uVar9 != 0x4b686f6a) && (uVar9 != 0x4b697473)) goto LAB_0010039c;
        }
        else if ((uVar9 != 0x4b746869) && ((uVar9 != 0x4c616e61 && (uVar9 != 0x4b726169))))
        goto LAB_0010039c;
      }
    }
    goto LAB_00100570;
  }
  if (uVar9 == 0x51616167) {
    puVar11 = &_hb_ot_shaper_myanmar_zawgyi;
    goto LAB_001004d8;
  }
  if (0x51616167 < uVar9) {
    if (uVar9 == 0x54616d6c) goto LAB_001005c8;
    if (uVar9 < 0x54616d6d) {
      if (uVar9 == 0x53797263) {
        if (iVar8 == 0x44464c54) goto LAB_0010039c;
LAB_00100390:
        if ((uVar10 & 0xfffffffe) != 4) goto LAB_0010039c;
        puVar11 = &_hb_ot_shaper_arabic;
        goto LAB_001004d8;
      }
      if (uVar9 < 0x53797264) {
        if (uVar9 != 0x53696e68) {
          if (uVar9 < 0x53696e69) {
            if (uVar9 != 0x53687264) {
              if (uVar9 < 0x53687265) {
                if ((uVar9 != 0x526f6867) && ((uVar9 != 0x53617572 && (uVar9 != 0x526a6e67))))
                goto LAB_0010039c;
              }
              else if ((uVar9 != 0x53696464) && (uVar9 != 0x53696e64)) goto LAB_0010039c;
            }
          }
          else if (uVar9 != 0x53756e64) {
            if (uVar9 < 0x53756e65) {
              if ((uVar9 != 0x536f676f) && ((uVar9 != 0x536f796f && (uVar9 != 0x536f6764))))
              goto LAB_0010039c;
            }
            else if ((uVar9 != 0x53756e75) && (uVar9 != 0x53796c6f)) goto LAB_0010039c;
          }
        }
      }
      else if (((uVar9 != 0x54616b72) && (uVar9 != 0x54616c65)) && (uVar9 != 0x54616762))
      goto LAB_0010039c;
    }
    else {
      puVar11 = &_hb_ot_shaper_thai;
      if (uVar9 == 0x54686169) goto LAB_001004d8;
      if (uVar9 < 0x5468616a) {
        if (uVar9 == 0x54656c75) goto LAB_001005c8;
        if (uVar9 < 0x54656c76) {
          if (uVar9 != 0x54617674) goto LAB_0010039c;
        }
        else if ((uVar9 != 0x54666e67) && (uVar9 != 0x54676c67)) goto LAB_0010039c;
      }
      else if (uVar9 != 0x54757467) {
        if (uVar9 < 0x54757468) {
          if (uVar9 != 0x546e7361) {
            if (uVar9 < 0x546e7362) {
              if ((uVar9 != 0x54696274) && (uVar9 != 0x54697268)) goto LAB_0010039c;
            }
            else if ((uVar9 != 0x546f6472) && (uVar9 != 0x546f746f)) goto LAB_0010039c;
          }
        }
        else if (uVar9 != 0x59657a69) {
          if (uVar9 < 0x59657a6a) {
            if ((uVar9 != 0x56697468) && (uVar9 != 0x5763686f)) goto LAB_0010039c;
          }
          else if (uVar9 != 0x5a616e62) goto LAB_0010039c;
        }
      }
    }
    goto LAB_00100570;
  }
  if (uVar9 == 0x4d796d72) {
    if ((iVar8 == 0x44464c54 || iVar8 == 0x6c61746e) ||
       (puVar11 = &_hb_ot_shaper_myanmar, iVar8 == 0x6d796d72)) goto LAB_0010039c;
    goto LAB_001004d8;
  }
  if (uVar9 < 0x4d796d73) {
    if (uVar9 == 0x4d6c796d) {
LAB_001005c8:
      if ((iVar8 == 0x44464c54) || (iVar8 == 0x6c61746e)) goto LAB_0010039c;
      puVar11 = &_hb_ot_shaper_use;
      if ((char)iVar8 != '3') {
        puVar11 = &_hb_ot_shaper_indic;
      }
      goto LAB_001004d8;
    }
    if (uVar9 < 0x4d6c796e) {
      if (uVar9 != 0x4d616e64) {
        if (uVar9 < 0x4d616e65) {
          if (uVar9 != 0x4d61686a) {
            if (uVar9 < 0x4d61686b) {
              if ((uVar9 != 0x4c657063) && (uVar9 != 0x4c696d62)) goto LAB_0010039c;
            }
            else if (uVar9 != 0x4d616b61) goto LAB_0010039c;
          }
        }
        else if (((uVar9 != 0x4d617263) && (uVar9 != 0x4d656466)) && (uVar9 != 0x4d616e69))
        goto LAB_0010039c;
      }
    }
    else if (uVar9 != 0x4d746569) {
      if (uVar9 < 0x4d74656a) {
        if ((uVar9 != 0x4d6f6469) && (uVar9 != 0x4d6f6e67)) goto LAB_0010039c;
      }
      else if (uVar9 != 0x4d756c74) goto LAB_0010039c;
    }
  }
  else {
    if (uVar9 == 0x4f727961) goto LAB_001005c8;
    if (uVar9 < 0x4f727962) {
      if (uVar9 != 0x4e657761) {
        if (uVar9 < 0x4e657762) {
          if ((uVar9 != 0x4e61676d) && (uVar9 != 0x4e616e64)) goto LAB_0010039c;
        }
        else if ((uVar9 != 0x4e6b6f6f) && (uVar9 != 0x4f6e616f)) goto LAB_0010039c;
      }
    }
    else if (uVar9 != 0x50686c70) {
      if (uVar9 < 0x50686c71) {
        if ((uVar9 != 0x4f756772) && (uVar9 != 0x50686167)) goto LAB_0010039c;
      }
      else if (uVar9 != 0x506c7264) goto LAB_0010039c;
    }
  }
LAB_00100570:
  if ((iVar8 == 0x44464c54) || (puVar11 = &_hb_ot_shaper_use, iVar8 == 0x6c61746e)) {
LAB_0010039c:
    *(undefined **)(this + 0xb0) = &_hb_ot_shaper_default;
    this[0xa8] = (hb_ot_shape_planner_t)
                 ((iVar6 != 0) * '\x02' | cVar7 * '\x04' & 6U | (byte)this[0xa8] & 0xf9);
    return;
  }
LAB_001004d8:
  iVar8 = *(int *)(puVar11 + 0x58);
  *(undefined **)(this + 0xb0) = puVar11;
  this[0xa8] = (hb_ot_shape_planner_t)
               ((iVar8 != 0) * '\x02' | (puVar11[0x5c] & 1) << 2 | (byte)this[0xa8] & 0xf9);
  if ((puVar11 != &_hb_ot_shaper_default) && (bVar12 != false)) {
    *(undefined **)(this + 0xb0) = &_hb_ot_shaper_dumber;
  }
  return;
}



/* hb_ot_shape_planner_t::compile(hb_ot_shape_plan_t&, hb_ot_shape_plan_key_t const&) */

void hb_ot_shape_planner_t::compile(hb_ot_shape_plan_t *param_1,hb_ot_shape_plan_key_t *param_2)

{
  uint *puVar1;
  hb_ot_shape_plan_key_t hVar2;
  hb_ot_shape_plan_t hVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  hb_ot_shape_plan_key_t hVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)param_2 = uVar5;
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  *(undefined8 *)(param_2 + 0x18) = uVar8;
  hb_ot_map_builder_t::compile((hb_ot_map_t *)(param_1 + 0x28),param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x40);
  iVar12 = *(int *)(param_2 + 0x3c) + -1;
  if (iVar12 < 0) {
    param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xf0);
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
  else {
    iVar16 = 0;
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar13 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar13 * 0x24);
        uVar11 = *puVar1;
        if (0x66726163 < uVar11) break;
        if (uVar11 == 0x66726163) {
          uVar11 = puVar1[7];
          goto LAB_00100c0f;
        }
        iVar16 = uVar13 + 1;
        if (iVar18 < iVar16) goto LAB_001010d4;
      }
      iVar18 = uVar13 - 1;
    } while (iVar16 <= iVar18);
LAB_001010d4:
    uVar11 = 0;
LAB_00100c0f:
    *(uint *)(param_2 + 0x90) = uVar11;
    iVar16 = 0;
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar14 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar14 * 0x24);
        uVar13 = *puVar1;
        if (0x6e756d72 < uVar13) break;
        if (uVar13 == 0x6e756d72) {
          uVar13 = puVar1[7];
          goto LAB_00100c4f;
        }
        iVar16 = uVar14 + 1;
        if (iVar18 < iVar16) goto LAB_001010bc;
      }
      iVar18 = uVar14 - 1;
    } while (iVar16 <= iVar18);
LAB_001010bc:
    uVar13 = 0;
LAB_00100c4f:
    *(uint *)(param_2 + 0x94) = uVar13;
    iVar16 = 0;
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar15 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar15 * 0x24);
        uVar14 = *puVar1;
        if (0x646e6f6d < uVar14) break;
        if (uVar14 == 0x646e6f6d) {
          uVar14 = puVar1[7];
          bVar19 = true;
          if (uVar11 == 0) {
            bVar19 = uVar14 != 0 && uVar13 != 0;
          }
          goto LAB_00100c9c;
        }
        iVar16 = uVar15 + 1;
        if (iVar18 < iVar16) goto LAB_0010109c;
      }
      iVar18 = uVar15 - 1;
    } while (iVar16 <= iVar18);
LAB_0010109c:
    bVar19 = uVar11 != 0;
    uVar14 = 0;
LAB_00100c9c:
    *(uint *)(param_2 + 0x98) = uVar14;
    iVar16 = 0;
    param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xfb | bVar19 * '\x04');
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar13 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar13 * 0x24);
        uVar11 = *puVar1;
        if (0x72746c6d < uVar11) break;
        if (uVar11 == 0x72746c6d) {
          uVar11 = puVar1[7];
          goto LAB_00100cf6;
        }
        iVar16 = uVar13 + 1;
        if (iVar18 < iVar16) goto LAB_00101084;
      }
      iVar18 = uVar13 - 1;
    } while (iVar16 <= iVar18);
LAB_00101084:
    uVar11 = 0;
LAB_00100cf6:
    *(uint *)(param_2 + 0x9c) = uVar11;
    iVar16 = 0;
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar13 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar13 * 0x24);
        uVar11 = *puVar1;
        if (0x76657274 < uVar11) break;
        if (uVar11 == 0x76657274) {
          bVar19 = puVar1[7] != 0;
          goto LAB_00100d3b;
        }
        iVar16 = uVar13 + 1;
        if (iVar18 < iVar16) goto LAB_0010106c;
      }
      iVar18 = uVar13 - 1;
    } while (iVar16 <= iVar18);
LAB_0010106c:
    bVar19 = false;
LAB_00100d3b:
    param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xf7 | bVar19 * '\b');
    uVar11 = 0x6b65726e;
    if ((*(uint *)(param_1 + 8) & 0xfffffffe) != 4) {
      uVar11 = 0x766b726e;
    }
    iVar16 = 0;
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar14 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar14 * 0x24);
        uVar13 = *puVar1;
        if (uVar11 < uVar13) break;
        if (uVar11 <= uVar13) {
          uVar13 = puVar1[6];
          bVar19 = uVar13 != 0;
          goto LAB_00100dae;
        }
        iVar16 = uVar14 + 1;
        if (iVar18 < iVar16) goto LAB_0010104d;
      }
      iVar18 = uVar14 - 1;
    } while (iVar16 <= iVar18);
LAB_0010104d:
    bVar19 = false;
    uVar13 = 0;
LAB_00100dae:
    *(uint *)(param_2 + 0xa0) = uVar13;
    iVar16 = 0;
    param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xfe | bVar19);
    iVar18 = iVar12;
    do {
      while( true ) {
        uVar14 = (uint)(iVar16 + iVar18) >> 1;
        puVar1 = (uint *)(lVar4 + (ulong)uVar14 * 0x24);
        uVar13 = *puVar1;
        if (0x7472616b < uVar13) break;
        if (uVar13 == 0x7472616b) {
          uVar13 = puVar1[6];
          bVar19 = uVar13 != 0;
          goto LAB_00100e03;
        }
        iVar16 = uVar14 + 1;
        if (iVar18 < iVar16) goto LAB_0010102d;
      }
      iVar18 = uVar14 - 1;
    } while (iVar16 <= iVar18);
LAB_0010102d:
    bVar19 = false;
    uVar13 = 0;
LAB_00100e03:
    *(uint *)(param_2 + 0xa4) = uVar13;
    iVar16 = 0;
    param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xfd | bVar19 * '\x02');
    do {
      uVar14 = (uint)(iVar16 + iVar12) >> 1;
      puVar1 = (uint *)(lVar4 + (ulong)uVar14 * 0x24);
      uVar13 = *puVar1;
      if (uVar11 < uVar13) {
        iVar12 = uVar14 - 1;
      }
      else {
        if (uVar11 <= uVar13) {
          uVar11 = puVar1[2];
          goto LAB_00100e57;
        }
        iVar16 = uVar14 + 1;
      }
    } while (iVar16 <= iVar12);
  }
  uVar11 = 0xffff;
LAB_00100e57:
  bVar19 = false;
  if (*(int *)(*(long *)(param_2 + 0x20) + 0x50) != 0) {
    bVar19 = *(int *)(param_2 + 0x2c) != *(int *)(*(long *)(param_2 + 0x20) + 0x50);
  }
  iVar12 = hb_ot_layout_has_glyph_classes(*(undefined8 *)param_1);
  if (iVar12 == 0) {
    param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] | 0x40);
  }
  bVar20 = false;
  param_2[0xa9] =
       (hb_ot_shape_plan_key_t)((byte)param_2[0xa9] & 0xdf | (byte)(((byte)param_1[0xa8] & 1) << 5))
  ;
  iVar12 = hb_aat_layout_has_positioning(*(undefined8 *)param_1);
  if (((byte)param_1[0xa8] & 1) == 0) {
    iVar16 = hb_ot_layout_has_substitution(*(undefined8 *)param_1);
    bVar20 = iVar16 != 0;
  }
  if ((bVar19) || (iVar16 = hb_ot_layout_has_positioning(*(undefined8 *)param_1), iVar16 == 0)) {
    if (iVar12 == 0) {
      hVar10 = param_2[0xa9];
      if (((byte)hVar10 & 0x10) == 0) {
        if ((uVar11 == 0xffff) || (((byte)hVar10 & 2) == 0)) goto LAB_00101269;
        goto LAB_00101110;
      }
      bVar17 = (byte)hVar10 >> 1 & 1;
    }
    else {
LAB_00100eca:
      hVar2 = param_2[0xa9];
      hVar10 = (hb_ot_shape_plan_key_t)((byte)hVar2 | 0x10);
      param_2[0xa9] = hVar10;
      bVar17 = (byte)hVar2 & 2;
    }
    if (bVar17 == 0) {
LAB_00100ee9:
      param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)hVar10 & 0xf7);
LAB_00100ef2:
      bVar17 = 0;
      uVar11 = 0;
      goto LAB_00100f00;
    }
LAB_00101110:
    param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)hVar10 & 0xf7);
    if ((((byte)param_1[0xa8] & 2) == 0) || (((byte)hVar10 & 0x10) != 0)) {
      uVar11 = 0;
      bVar17 = (byte)param_2[0xa9] >> 1 & 1;
      goto LAB_00100f00;
    }
    bVar17 = ((byte)hVar10 & 0xf7) >> 2 & 1;
  }
  else {
    if (iVar12 != 0) {
      if (!bVar20) goto LAB_00100eca;
      hVar2 = param_2[0xa9];
      hVar10 = (hb_ot_shape_plan_key_t)((byte)hVar2 | 2);
      param_2[0xa9] = hVar10;
      if ((((byte)hVar2 & 0x10) == 0) && (uVar11 == 0xffff)) {
        hVar10 = (hb_ot_shape_plan_key_t)((byte)hVar2 | 0x12);
        param_2[0xa9] = hVar10;
      }
      goto LAB_00101110;
    }
    hVar2 = param_2[0xa9];
    hVar10 = (hb_ot_shape_plan_key_t)((byte)hVar2 | 2);
    param_2[0xa9] = hVar10;
    if ((((byte)hVar2 & 0x10) != 0) || (uVar11 != 0xffff)) goto LAB_00101110;
LAB_00101269:
    cVar9 = hb_ot_layout_has_kerning(*(hb_face_t **)param_1);
    hVar10 = param_2[0xa9];
    if (cVar9 != '\0') {
      hVar10 = (hb_ot_shape_plan_key_t)((byte)hVar10 | 4);
      param_2[0xa9] = hVar10;
    }
    hVar3 = param_1[0xa8];
    if (((byte)hVar10 >> 1 & 1) != 0) {
      hVar10 = param_2[0xa9];
      goto LAB_00101110;
    }
    hVar10 = param_2[0xa9];
    if (((byte)hVar10 & 0x10) != 0) goto LAB_00100ee9;
    uVar11 = (byte)hVar10 >> 2 & 1;
    bVar17 = (byte)uVar11;
    param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)hVar10 & 0xf7 | (byte)((uVar11 ^ 1) << 3));
    if (((byte)hVar3 >> 1 & 1) == 0) goto LAB_00100ef2;
  }
  if (bVar17 == 0) {
    uVar11 = 1;
    bVar17 = (byte)param_2[0xa9] >> 1 & 1;
  }
  else {
    uVar11 = hb_ot_layout_has_machine_kerning(*(hb_face_t **)param_1);
    uVar11 = uVar11 ^ 1;
    bVar17 = (byte)param_2[0xa9] >> 1 & 1;
  }
LAB_00100f00:
  param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xdf | (byte)((uVar11 & 1) << 5));
  iVar12 = *(int *)(param_2 + 0x3c) + -1;
  if (-1 < iVar12) {
    iVar16 = 0;
    do {
      while( true ) {
        uVar13 = (uint)(iVar16 + iVar12) >> 1;
        puVar1 = (uint *)(*(long *)(param_2 + 0x40) + (ulong)uVar13 * 0x24);
        uVar11 = *puVar1;
        if (0x6d61726b < uVar11) break;
        if (uVar11 == 0x6d61726b) {
          uVar11 = (uint)(puVar1[7] != 0);
          goto LAB_00100f60;
        }
        iVar16 = uVar13 + 1;
        if (iVar12 < iVar16) goto LAB_00101173;
      }
      iVar12 = uVar13 - 1;
    } while (iVar16 <= iVar12);
  }
LAB_00101173:
  uVar11 = 0;
LAB_00100f60:
  param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa8] & 0xef | (byte)(uVar11 << 4));
  if (((bVar17 == 0) && (((byte)param_2[0xa9] & 0x10) == 0)) &&
     ((((byte)param_2[0xa9] & 4) == 0 ||
      (cVar9 = hb_ot_layout_has_cross_kerning(*(hb_face_t **)param_1), cVar9 == '\0')))) {
    param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa9] | 1);
    uVar11 = (byte)param_1[0xa8] >> 2 & 1;
  }
  else {
    param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa9] & 0xfe);
    uVar11 = 0;
  }
  param_2[0xa8] = (hb_ot_shape_plan_key_t)((byte)(uVar11 << 7) | (byte)param_2[0xa8] & 0x7f);
  if (((byte)param_2[0xa9] & 0x20) != 0) {
    param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)param_2[0xa9] & 0xfe);
  }
  uVar11 = (byte)param_2[0xa8] >> 1 & 1;
  if (((byte)param_2[0xa8] >> 1 & 1) != 0) {
    iVar12 = hb_aat_layout_has_tracking(*(undefined8 *)param_1);
    uVar11 = (uint)(iVar12 != 0);
  }
  param_2[0xa9] = (hb_ot_shape_plan_key_t)((byte)(uVar11 << 6) | (byte)param_2[0xa9] & 0xbf);
  return;
}



/* hb_ot_shape_plan_t::init0(hb_face_t*, hb_shape_plan_key_t const*) */

undefined8 __thiscall
hb_ot_shape_plan_t::init0(hb_ot_shape_plan_t *this,hb_face_t *param_1,hb_shape_plan_key_t *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  hb_ot_shape_plan_t *phVar8;
  hb_ot_shape_plan_t *phVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  hb_ot_shape_planner_t local_f8 [8];
  uint local_f0;
  hb_ot_map_builder_t local_d0 [40];
  undefined1 local_a8;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  puVar10 = (undefined8 *)((ulong)(this + 0x30) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x30) & 0xfffffffffffffff8))
                       + 0x88U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  hb_ot_shape_planner_t::hb_ot_shape_planner_t(local_f8,param_1,(hb_segment_properties_t *)param_2);
  uVar2 = *(uint *)(param_2 + 0x28);
  local_a8 = 1;
  puVar11 = *(undefined4 **)(param_2 + 0x20);
  hb_ot_map_builder_t::add_feature(local_d0,0x7276726e,1,1);
  hb_ot_map_builder_t::add_pause
            ((uint)local_d0,(_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr *)0x0);
  if (local_f0 == 4) {
    hb_ot_map_builder_t::add_feature(local_d0,0x6c747261,1,1);
    hb_ot_map_builder_t::add_feature(local_d0,0x6c74726d,1,1);
  }
  else if (local_f0 == 5) {
    hb_ot_map_builder_t::add_feature(local_d0,0x72746c61,1,1);
    hb_ot_map_builder_t::add_feature(local_d0,0x72746c6d,0,1);
  }
  hb_ot_map_builder_t::add_feature(local_d0,0x66726163,0,1);
  hb_ot_map_builder_t::add_feature(local_d0,0x6e756d72,0,1);
  hb_ot_map_builder_t::add_feature(local_d0,0x646e6f6d,0,1);
  hb_ot_map_builder_t::add_feature(local_d0,0x72616e64,0x21,0xff);
  hb_ot_map_builder_t::add_feature(local_d0,0x7472616b,3,1);
  hb_ot_map_builder_t::add_feature(local_d0,0x48617266,1,1);
  hb_ot_map_builder_t::add_feature(local_d0,0x48415246,1,1);
  if ((code *)*local_48 != (code *)0x0) {
    local_a8 = 0;
    (*(code *)*local_48)(local_f8);
  }
  hb_ot_map_builder_t::add_feature(local_d0,0x42757a7a,1,1);
  puVar6 = &common_features;
  hb_ot_map_builder_t::add_feature(local_d0,0x42555a5a,1,1);
  do {
    puVar1 = puVar6 + 1;
    uVar3 = *puVar6;
    puVar6 = puVar6 + 2;
    hb_ot_map_builder_t::add_feature(local_d0,uVar3,*puVar1,1);
  } while (puVar6 != (undefined4 *)0x103f78);
  if ((local_f0 & 0xfffffffe) == 4) {
    puVar6 = &horizontal_features;
    do {
      puVar1 = puVar6 + 1;
      uVar3 = *puVar6;
      puVar6 = puVar6 + 2;
      hb_ot_map_builder_t::add_feature(local_d0,uVar3,*puVar1,1);
    } while (puVar6 != (undefined4 *)&DAT_00103f38);
  }
  else {
    hb_ot_map_builder_t::add_feature(local_d0,0x76657274,0x11,1);
  }
  if (uVar2 != 0) {
    local_a8 = 0;
    puVar6 = puVar11 + (ulong)uVar2 * 4;
    do {
      puVar1 = puVar11 + 1;
      bVar12 = false;
      if (puVar11[2] == 0) {
        bVar12 = puVar11[3] == -1;
      }
      uVar3 = *puVar11;
      puVar11 = puVar11 + 4;
      hb_ot_map_builder_t::add_feature(local_d0,uVar3,bVar12,*puVar1);
    } while (puVar11 != puVar6);
  }
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_f8);
  }
  hb_ot_shape_planner_t::compile((hb_ot_shape_plan_t *)local_f8,(hb_ot_shape_plan_key_t *)this);
  if (*(code **)(*(long *)(this + 0x20) + 0x10) != (code *)0x0) {
    lVar4 = (**(code **)(*(long *)(this + 0x20) + 0x10))(this);
    *(long *)(this + 0x88) = lVar4;
    if (lVar4 == 0) {
      if (*(int *)(this + 0x38) != 0) {
        free(*(void **)(this + 0x40));
      }
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      phVar8 = this + 0x48;
      do {
        if (*(int *)phVar8 != 0) {
          free(*(void **)(phVar8 + 8));
        }
        *(int *)(phVar8 + 4) = 0;
        *(int *)phVar8 = 0;
        *(undefined8 *)(phVar8 + 8) = 0;
        if (*(int *)(phVar8 + 0x20) != 0) {
          free(*(void **)(phVar8 + 0x28));
        }
        *(int *)(phVar8 + 0x24) = 0;
        phVar9 = phVar8 + 0x10;
        *(int *)(phVar8 + 0x20) = 0;
        *(undefined8 *)(phVar8 + 0x28) = 0;
        phVar8 = phVar9;
      } while (phVar9 != this + 0x68);
      uVar7 = 0;
      goto LAB_001015fa;
    }
  }
  uVar7 = 1;
LAB_001015fa:
  hb_ot_map_builder_t::~hb_ot_map_builder_t(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_ot_shape_plan_t::fini() */

void __thiscall hb_ot_shape_plan_t::fini(hb_ot_shape_plan_t *this)

{
  hb_ot_shape_plan_t *phVar1;
  hb_ot_shape_plan_t *phVar2;
  
  if (*(code **)(*(long *)(this + 0x20) + 0x18) != (code *)0x0) {
    (**(code **)(*(long *)(this + 0x20) + 0x18))(*(undefined8 *)(this + 0x88));
  }
  if (*(int *)(this + 0x38) != 0) {
    free(*(void **)(this + 0x40));
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  phVar1 = this + 0x48;
  do {
    if (*(int *)phVar1 != 0) {
      free(*(void **)(phVar1 + 8));
    }
    *(int *)(phVar1 + 4) = 0;
    *(int *)phVar1 = 0;
    *(undefined8 *)(phVar1 + 8) = 0;
    if (*(int *)(phVar1 + 0x20) != 0) {
      free(*(void **)(phVar1 + 0x28));
    }
    *(int *)(phVar1 + 0x24) = 0;
    phVar2 = phVar1 + 0x10;
    *(int *)(phVar1 + 0x20) = 0;
    *(undefined8 *)(phVar1 + 0x28) = 0;
    phVar1 = phVar2;
  } while (phVar2 != this + 0x68);
  return;
}



/* hb_ot_shape_plan_t::substitute(hb_font_t*, hb_buffer_t*) const */

void hb_ot_shape_plan_t::substitute(hb_font_t *param_1,hb_buffer_t *param_2)

{
  hb_ot_map_t::substitute((hb_ot_shape_plan_t *)(param_1 + 0x28),param_1,param_2);
  return;
}



/* hb_ot_shape_plan_t::position(hb_font_t*, hb_buffer_t*) const */

void __thiscall
hb_ot_shape_plan_t::position(hb_ot_shape_plan_t *this,hb_font_t *param_1,hb_buffer_t *param_2)

{
  hb_ot_shape_plan_t hVar1;
  
  hVar1 = this[0xa9];
  if (((byte)hVar1 & 2) == 0) {
    if (((byte)hVar1 & 0x10) != 0) {
      hb_aat_layout_position(this,param_1,param_2);
      hVar1 = this[0xa9];
    }
  }
  else {
    hb_ot_map_t::position(this + 0x28,(hb_font_t *)this,(hb_buffer_t *)param_1);
    hVar1 = this[0xa9];
  }
  if (((byte)hVar1 & 4) == 0) {
    if (((byte)hVar1 & 8) != 0) {
      _hb_ot_shape_fallback_kern(this,param_1,param_2);
      hVar1 = this[0xa9];
    }
  }
  else {
    hb_ot_layout_kern(this,param_1,param_2);
    hVar1 = this[0xa9];
  }
  if (((byte)hVar1 & 0x40) != 0) {
    hb_aat_layout_track(this,param_1,param_2);
    return;
  }
  return;
}



void hb_ot_shape_plan_collect_lookups(int param_1,int param_2)

{
  if (param_2 == 0x47504f53) {
    hb_ot_map_t::collect_lookups(param_1 + 0x88,(hb_set_t *)0x1);
    return;
  }
  if (param_2 == 0x47535542) {
    hb_ot_map_t::collect_lookups(param_1 + 0x88,(hb_set_t *)0x0);
    return;
  }
  return;
}



void hb_ot_shape_glyphs_closure
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  uint local_5c;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = &_LC8;
  uVar6 = hb_shape_plan_create_cached(*(undefined8 *)(param_1 + 0x20));
  iVar3 = hb_script_get_horizontal_direction(*(undefined4 *)(param_2 + 0x3c));
  piVar10 = *(int **)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x60) != 0) {
    piVar1 = piVar10 + (ulong)*(uint *)(param_2 + 0x60) * 5;
    do {
      iVar4 = *piVar10;
      local_5c = 0;
      lVar11 = *(long *)(param_2 + 0x10);
      lVar12 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar12 != 0) {
        lVar12 = *(long *)(lVar12 + 0x10);
      }
      iVar5 = (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
                        (param_1,*(undefined8 *)(param_1 + 0x98),iVar4,&local_5c,lVar12);
      uVar2 = local_5c;
      if (iVar5 != 0) {
        bVar9 = (byte)local_5c;
        if (*(char *)(param_5 + 0x40) == '\0') {
          if ((local_5c != 0xffffffff) && (*(char *)(param_5 + 0x10) == '\x01')) {
            *(undefined4 *)(param_5 + 0x14) = 0xffffffff;
            puVar7 = (undefined4 *)
                     hb_bit_set_t::page_for((hb_bit_set_t *)(param_5 + 0x10),local_5c,true);
            if (puVar7 != (undefined4 *)0x0) {
              *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) =
                   *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) | 1L << (bVar9 & 0x3f);
              *puVar7 = 0xffffffff;
            }
          }
        }
        else if ((*(char *)(param_5 + 0x10) != '\0') &&
                (puVar7 = (undefined4 *)
                          hb_bit_set_t::page_for((hb_bit_set_t *)(param_5 + 0x10),local_5c,false),
                puVar7 != (undefined4 *)0x0)) {
          *(undefined4 *)(param_5 + 0x14) = 0xffffffff;
          bVar9 = bVar9 & 0x3f;
          *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) =
               *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) &
               (-2L << bVar9 | 0xfffffffffffffffeU >> 0x40 - bVar9);
          *puVar7 = 0xffffffff;
        }
      }
      if ((iVar3 == 5) &&
         (iVar5 = (**(code **)(lVar11 + 0x30))(lVar11,iVar4,*(undefined8 *)(lVar11 + 0x70)),
         iVar4 != iVar5)) {
        local_5c = 0;
        lVar11 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
        if (lVar11 != 0) {
          lVar11 = *(long *)(lVar11 + 0x10);
        }
        iVar4 = (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
                          (param_1,*(undefined8 *)(param_1 + 0x98),iVar5,&local_5c,lVar11);
        uVar2 = local_5c;
        if (iVar4 != 0) {
          bVar9 = (byte)local_5c;
          if (*(char *)(param_5 + 0x40) == '\0') {
            if ((local_5c != 0xffffffff) && (*(char *)(param_5 + 0x10) == '\x01')) {
              *(undefined4 *)(param_5 + 0x14) = 0xffffffff;
              puVar7 = (undefined4 *)
                       hb_bit_set_t::page_for((hb_bit_set_t *)(param_5 + 0x10),local_5c,true);
              if (puVar7 != (undefined4 *)0x0) {
                *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) =
                     *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) | 1L << (bVar9 & 0x3f);
                *puVar7 = 0xffffffff;
              }
            }
          }
          else if ((*(char *)(param_5 + 0x10) != '\0') &&
                  (puVar7 = (undefined4 *)
                            hb_bit_set_t::page_for((hb_bit_set_t *)(param_5 + 0x10),local_5c,false),
                  puVar7 != (undefined4 *)0x0)) {
            *(undefined4 *)(param_5 + 0x14) = 0xffffffff;
            bVar9 = bVar9 & 0x3f;
            *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) =
                 *(ulong *)(puVar7 + (ulong)(uVar2 >> 6 & 7) * 2 + 2) &
                 (-2L << bVar9 | 0xfffffffffffffffeU >> 0x40 - bVar9);
            *puVar7 = 0xffffffff;
          }
        }
      }
      piVar10 = piVar10 + 5;
    } while (piVar1 != piVar10);
  }
  uVar8 = hb_set_create();
  hb_ot_map_t::collect_lookups((int)uVar6 + 0x88,(hb_set_t *)0x0);
  hb_ot_layout_lookups_substitute_closure(*(undefined8 *)(param_1 + 0x20),uVar8,param_5);
  hb_set_destroy(uVar8);
  hb_shape_plan_destroy(uVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
            if (puVar1 == puVar5) goto LAB_00104050;
          }
          do {
            *puVar5 = *puVar5 | param_1;
            puVar5[5] = puVar5[5] | param_1;
            puVar5 = puVar5 + 10;
          } while (puVar1 != puVar5);
        }
        goto LAB_00104050;
      }
      iVar2 = *(int *)(this + 0x1c);
      uVar13 = *(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x70);
      lVar9 = *(long *)(this + 0x78);
      if (uVar13 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar11) goto LAB_00104050;
        if (iVar2 != 2) goto LAB_001041f5;
LAB_0010445f:
        uVar7 = (ulong)param_2;
        uVar8 = local_44;
        if (param_2 < uVar11) {
          puVar5 = (uint *)(lVar9 + 8 + uVar7 * 0x14);
          puVar1 = (uint *)(lVar9 + 0x1c + (((uVar11 - param_2) - 1) + uVar7) * 0x14);
          if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_001044a8;
          if (*puVar5 < local_44) {
            uVar8 = *puVar5;
          }
          for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
LAB_001044a8:
            if (*puVar5 < uVar8) {
              uVar8 = *puVar5;
            }
            if (puVar5[5] < uVar8) {
              uVar8 = puVar5[5];
            }
          }
          if (param_2 != uVar11) goto LAB_001044cc;
        }
        else {
LAB_001044cc:
          local_50 = uVar7 * 0x14;
LAB_001044dd:
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
LAB_0010451d:
        if (param_3 == uVar13) goto LAB_00104050;
LAB_00104526:
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
LAB_0010452d:
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        if (iVar2 != 2) goto LAB_001042e3;
LAB_0010454e:
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
              if (puVar5 == puVar1) goto LAB_00104452;
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
LAB_00104452:
          uVar8 = local_44;
          if (param_2 != uVar11) goto LAB_0010445f;
          goto LAB_00104526;
        }
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar8 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        if (uVar15 < uVar8) {
          uVar8 = uVar15;
        }
        local_44 = uVar8;
        if (param_2 == uVar11) goto LAB_0010452d;
LAB_001041f5:
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
        if (param_2 == uVar11) goto LAB_0010451d;
        local_50 = uVar7 * 0x14;
        lVar14 = (ulong)(uVar11 - 1) * 0x14;
        uVar15 = *(uint *)(lVar9 + 8 + local_50);
        lVar12 = lVar9 + lVar14;
        uVar3 = *(uint *)(lVar12 + 8);
        if (uVar8 != uVar15) {
          if (uVar8 == uVar3) {
            if (uVar8 == uVar15) goto LAB_0010439d;
            if (param_2 < uVar11) {
              puVar5 = (uint *)(lVar9 + 4 + local_50);
              do {
                if (puVar5[1] == uVar3) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar5 = *puVar5 | param_1;
                puVar5 = puVar5 + 5;
              } while (puVar5 != (uint *)(lVar9 + 0x18 + (((uVar11 - param_2) - 1) + uVar7) * 0x14))
              ;
              goto LAB_001042b9;
            }
            goto LAB_001042bd;
          }
          goto LAB_001044dd;
        }
LAB_0010439d:
        if (param_2 < uVar11) {
          do {
            if (*(uint *)(lVar12 + 8) == uVar8) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | param_1;
            lVar12 = lVar12 + -0x14;
          } while (lVar12 != lVar9 + -0x14 + lVar14 + (ulong)((uVar11 - param_2) - 1) * -0x14);
LAB_001042b9:
          uVar13 = *(uint *)(this + 0x5c);
        }
LAB_001042bd:
        if (uVar13 == param_3) goto LAB_00104050;
        uVar10 = (ulong)(param_3 - 1);
        uVar7 = (ulong)uVar13;
        uVar11 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
        uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0x14);
LAB_001042e3:
        if (uVar11 != uVar8) {
          if (uVar15 != uVar8) goto LAB_0010454e;
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
            goto LAB_00104050;
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
      goto LAB_00104050;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        puVar5 = (uint *)(*(long *)(this + 0x70) + 4 + (ulong)param_2 * 0x14);
        puVar1 = (uint *)(*(long *)(this + 0x70) + 0x18 +
                         ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14);
        if (((int)puVar1 - (int)puVar5 & 4U) != 0) {
          *puVar5 = *puVar5 | param_1;
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar1) goto LAB_00104050;
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
      goto LAB_00104050;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00104050;
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
        if (((int)puVar1 - (int)puVar5 & 4U) == 0) goto LAB_001045f0;
        uVar11 = 0xffffffff;
        if (*puVar5 != 0xffffffff) {
          uVar11 = *puVar5;
        }
        for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
LAB_001045f0:
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
LAB_00104050:
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



/* hb_bit_set_t::resize(unsigned int, bool, bool) */

hb_bit_set_t __thiscall
hb_bit_set_t::resize(hb_bit_set_t *this,uint param_1,bool param_2,bool param_3)

{
  hb_bit_set_t hVar1;
  void *pvVar2;
  hb_bit_set_t hVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  hVar1 = *this;
  if (hVar1 == (hb_bit_set_t)0x0) {
    return (hb_bit_set_t)0x0;
  }
  uVar4 = *(uint *)(this + 0x24);
  uVar7 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  hVar3 = (hb_bit_set_t)(param_1 == 1 && uVar4 == 0);
  if (param_1 != 1 || uVar4 != 0) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if ((int)uVar5 < 0) goto LAB_001048cc;
    hVar3 = (hb_bit_set_t)param_3;
    if (param_3) {
      uVar8 = param_1;
      if (param_1 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar5 < uVar8) {
        if (uVar8 < 0x38e38e4) goto LAB_00104a59;
      }
      else {
        if (uVar5 >> 2 <= uVar8) goto LAB_00104813;
        if (uVar8 < 0x38e38e4) {
          pvVar2 = *(void **)(this + 0x28);
          if (uVar8 != 0) goto LAB_00104a60;
          free(pvVar2);
          uVar8 = 0;
          pvVar2 = (void *)0x0;
          goto LAB_00104a7c;
        }
      }
    }
    else {
      uVar8 = uVar5;
      if (param_1 <= uVar5) goto LAB_00104813;
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < param_1);
      if (uVar8 < 0x38e38e4) {
        pvVar2 = *(void **)(this + 0x28);
        goto LAB_00104a60;
      }
    }
LAB_001048c7:
    *(uint *)(this + 0x20) = ~uVar5;
    goto LAB_001048cc;
  }
  if ((int)uVar5 < 0) goto LAB_001048cc;
  if (uVar5 == 0) {
    param_1 = 1;
    uVar8 = 1;
LAB_00104a59:
    pvVar2 = *(void **)(this + 0x28);
    param_3 = (bool)hVar1;
LAB_00104a60:
    pvVar2 = realloc(pvVar2,(ulong)uVar8 * 0x48);
    if (pvVar2 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      if (uVar5 < uVar8) goto LAB_001048c7;
    }
    else {
LAB_00104a7c:
      *(void **)(this + 0x28) = pvVar2;
      *(uint *)(this + 0x20) = uVar8;
    }
    uVar7 = (ulong)*(uint *)(this + 0x24);
    hVar3 = (hb_bit_set_t)param_3;
  }
  else {
    if (7 < uVar5) {
      pvVar2 = *(void **)(this + 0x28);
      uVar8 = 1;
      param_1 = 1;
      param_3 = (bool)hVar3;
      goto LAB_00104a60;
    }
    uVar7 = 0;
    param_1 = 1;
  }
LAB_00104813:
  if (((uint)uVar7 < param_1) && (param_2)) {
    uVar4 = (param_1 - (uint)uVar7) * 0x48;
    if (uVar4 != 0) {
      memset((void *)(*(long *)(this + 0x28) + uVar7 * 0x48),0,(ulong)uVar4);
    }
  }
  uVar4 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x24) = param_1;
  if (-1 < (int)uVar4) {
    if (hVar3 == (hb_bit_set_t)0x0) {
      uVar5 = uVar4;
      if (uVar4 < param_1) {
        do {
          uVar5 = (uVar5 >> 1) + 8 + uVar5;
        } while (uVar5 < param_1);
        if (uVar5 < 0x20000000) {
          pvVar2 = *(void **)(this + 0x18);
          uVar7 = (ulong)uVar5;
          goto LAB_00104ac4;
        }
        *(uint *)(this + 0x10) = ~uVar4;
        uVar5 = *(uint *)(this + 0x20);
        if ((int)uVar5 < 0) goto LAB_001048cc;
        uVar7 = (ulong)uVar5;
        uVar4 = 0;
        if (-1 < (int)*(uint *)(this + 0x14)) {
          uVar4 = *(uint *)(this + 0x14);
        }
        goto LAB_0010493b;
      }
    }
    else {
      uVar8 = *(uint *)(this + 0x14);
      uVar6 = (ulong)uVar8;
      uVar5 = param_1;
      if (param_1 <= uVar8) {
        uVar5 = uVar8;
      }
      uVar7 = (ulong)uVar5;
      if (uVar4 < uVar5) {
        if (0x1fffffff < uVar5) {
          *(uint *)(this + 0x10) = ~uVar4;
          uVar5 = *(uint *)(this + 0x20);
          if ((int)uVar5 < 0) goto LAB_001048cc;
          uVar6 = 0;
          if (-1 < (int)uVar8) {
            uVar6 = (ulong)uVar8;
          }
          goto LAB_001049c6;
        }
        pvVar2 = *(void **)(this + 0x18);
LAB_00104ac4:
        uVar4 = (uint)uVar7;
        pvVar2 = realloc(pvVar2,uVar7 << 3);
        if (pvVar2 == (void *)0x0) {
          uVar5 = *(uint *)(this + 0x14);
          uVar6 = (ulong)uVar5;
          if (uVar4 <= *(uint *)(this + 0x10)) goto LAB_001048df;
          *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
          goto LAB_00104b23;
        }
      }
      else {
        if (uVar4 >> 2 <= uVar5) goto LAB_001048df;
        pvVar2 = *(void **)(this + 0x18);
        if (uVar5 != 0) goto LAB_00104ac4;
        free(pvVar2);
        uVar4 = 0;
        pvVar2 = (void *)0x0;
      }
      *(void **)(this + 0x18) = pvVar2;
      *(uint *)(this + 0x10) = uVar4;
    }
    uVar6 = (ulong)*(uint *)(this + 0x14);
LAB_001048df:
    if (((uint)uVar6 < param_1) && (param_2)) {
      uVar4 = (param_1 - (uint)uVar6) * 8;
      if (uVar4 != 0) {
        memset((void *)(*(long *)(this + 0x18) + uVar6 * 8),0,(ulong)uVar4);
      }
    }
    *(uint *)(this + 0x14) = param_1;
    return hVar1;
  }
  uVar5 = *(uint *)(this + 0x14);
LAB_00104b23:
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  if ((int)uVar5 < 0) goto LAB_001048cc;
  uVar7 = (ulong)uVar5;
  if (hVar3 == (hb_bit_set_t)0x0) {
LAB_0010493b:
    uVar6 = uVar7;
    if (uVar5 < uVar4) {
      do {
        uVar8 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar4);
      goto LAB_00104950;
    }
LAB_00104984:
    uVar8 = *(uint *)(this + 0x24);
  }
  else {
LAB_001049c6:
    uVar8 = *(uint *)(this + 0x24);
    uVar4 = (uint)uVar6;
    if (uVar4 <= uVar8) {
      uVar6 = (ulong)uVar8;
    }
    uVar9 = (uint)uVar6;
    if (uVar5 < uVar9) {
LAB_00104950:
      if (0x38e38e3 < (uint)uVar6) goto LAB_001048c7;
      pvVar2 = *(void **)(this + 0x28);
LAB_00104961:
      uVar8 = (uint)uVar6;
      pvVar2 = realloc(pvVar2,uVar6 * 0x48);
      if (pvVar2 == (void *)0x0) {
        uVar5 = *(uint *)(this + 0x20);
        if (uVar5 < uVar8) goto LAB_001048c7;
      }
      else {
LAB_0010497d:
        *(void **)(this + 0x28) = pvVar2;
        *(uint *)(this + 0x20) = uVar8;
      }
      goto LAB_00104984;
    }
    if (uVar9 < uVar5 >> 2) {
      if (0x38e38e3 < uVar9) goto LAB_001048c7;
      pvVar2 = *(void **)(this + 0x28);
      if (uVar9 != 0) goto LAB_00104961;
      free(pvVar2);
      uVar8 = 0;
      pvVar2 = (void *)0x0;
      goto LAB_0010497d;
    }
  }
  if ((uVar8 < uVar4) && (param_2)) {
    uVar5 = (uVar4 - uVar8) * 0x48;
    if (uVar5 != 0) {
      memset((void *)(*(long *)(this + 0x28) + (ulong)uVar8 * 0x48),0,(ulong)uVar5);
    }
  }
  *(uint *)(this + 0x24) = uVar4;
LAB_001048cc:
  *this = (hb_bit_set_t)0x0;
  return (hb_bit_set_t)0x0;
}



/* hb_bit_set_t::page_for(unsigned int, bool) */

long __thiscall hb_bit_set_t::page_for(hb_bit_set_t *this,uint param_1,bool param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  uVar9 = param_1 >> 9;
  if ((*(uint *)(this + 8) < *(uint *)(this + 0x14)) &&
     (puVar1 = (uint *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 8) * 8), *puVar1 == uVar9))
  {
    return *(long *)(this + 0x28) + (ulong)puVar1[1] * 0x48;
  }
  uVar4 = *(uint *)(this + 0x24);
  iVar10 = *(uint *)(this + 0x14) - 1;
  if (iVar10 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      while( true ) {
        uVar7 = iVar10 + uVar8 >> 1;
        lVar11 = (ulong)uVar7 * 8;
        uVar3 = *(uint *)(*(long *)(this + 0x18) + (ulong)uVar7 * 8);
        if (-1 < (int)(uVar9 - uVar3)) break;
        iVar10 = uVar7 - 1;
        if (iVar10 < (int)uVar8) goto LAB_00104c5c;
      }
      if (uVar9 == uVar3) goto LAB_00104cf5;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 <= iVar10);
  }
LAB_00104c5c:
  if (param_2) {
    cVar6 = resize(this,uVar4 + 1,true,false);
    if (cVar6 != '\0') {
      lVar11 = (ulong)uVar8 * 8;
      puVar2 = (undefined4 *)(*(long *)(this + 0x28) + (ulong)uVar4 * 0x48);
      *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
      lVar5 = *(long *)(this + 0x18);
      *puVar2 = 0;
      memmove((void *)(lVar5 + 8 + lVar11),(void *)(lVar5 + lVar11),
              (ulong)((~uVar8 + *(int *)(this + 0x14)) * 8));
      *(ulong *)(*(long *)(this + 0x18) + (ulong)uVar8 * 8) = CONCAT44(uVar4,uVar9);
      uVar7 = uVar8;
LAB_00104cf5:
      *(uint *)(this + 8) = uVar7;
      return *(long *)(this + 0x28) + (ulong)*(uint *)(*(long *)(this + 0x18) + 4 + lVar11) * 0x48;
    }
  }
  return 0;
}


