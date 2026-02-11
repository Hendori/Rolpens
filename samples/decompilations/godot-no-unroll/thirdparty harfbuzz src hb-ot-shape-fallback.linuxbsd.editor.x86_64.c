
/* position_around_base(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*, unsigned int, unsigned
   int, bool) */

void position_around_base
               (hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3,uint param_4,
               uint param_5,bool param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long in_FS_OFFSET;
  int iVar23;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  hb_buffer_t::_set_glyph_flags(param_3,3,param_4,param_5,true,false);
  lVar16 = (ulong)param_4 * 0x14;
  local_68 = (undefined1  [16])0x0;
  lVar15 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x68);
  }
  iVar9 = (**(code **)(*(long *)(param_2 + 0x90) + 0x88))
                    (param_2,*(undefined8 *)(param_2 + 0x98),
                     *(undefined4 *)(*(long *)(param_3 + 0x70) + lVar16),local_68,lVar15);
  uVar1 = param_4 + 1;
  if (iVar9 == 0) {
    lVar15 = *(long *)(param_3 + 0x70);
    auVar7 = local_68;
    if (uVar1 < param_5) {
      lVar16 = (ulong)uVar1 * 0x14;
      do {
        if ((*(ushort *)(lVar15 + 0x10 + lVar16) & 0x1f) == 0xc) {
          puVar11 = (undefined8 *)(*(long *)(param_3 + 0x80) + lVar16);
          if (param_6) {
            puVar11[1] = CONCAT44((int)((ulong)puVar11[1] >> 0x20) - (int)((ulong)*puVar11 >> 0x20),
                                  (int)puVar11[1] - (int)*puVar11);
          }
          *puVar11 = 0;
        }
        lVar16 = lVar16 + 0x14;
      } while (lVar16 != ((ulong)uVar1 + 1 + (ulong)((param_5 - 2) - param_4)) * 0x14);
    }
  }
  else {
    auVar7._4_8_ = local_68._8_8_;
    auVar7._0_4_ = local_68._4_4_ + *(int *)(*(long *)(param_3 + 0x80) + 0xc + lVar16);
    auVar7._12_4_ = 0;
    local_68 = auVar7 << 0x20;
    lVar15 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x28);
    }
    local_94 = (**(code **)(*(long *)(param_2 + 0x90) + 0x48))
                         (param_2,*(undefined8 *)(param_2 + 0x98),
                          *(undefined4 *)(*(long *)(param_3 + 0x70) + lVar16),lVar15);
    auVar5 = local_68;
    lVar15 = *(long *)(param_3 + 0x70);
    local_68._8_4_ = local_94;
    auVar7 = local_68;
    bVar2 = *(byte *)(lVar15 + lVar16 + 0xe);
    if (((*(byte *)(lVar15 + lVar16 + 0xc) & 4) == 0) || ((bVar2 & 0x10) == 0)) {
      local_80 = 1;
    }
    else {
      local_80 = bVar2 & 0xf;
    }
    iVar9 = 0;
    iVar23 = 0;
    if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
      iVar9 = -(int)*(undefined8 *)(*(long *)(param_3 + 0x80) + lVar16);
      iVar23 = -(int)((ulong)*(undefined8 *)(*(long *)(param_3 + 0x80) + lVar16) >> 0x20);
    }
    local_68._0_4_ = auVar5._0_4_;
    local_68._4_4_ = auVar5._4_4_;
    local_90 = local_68._0_4_;
    local_84 = local_68._4_4_;
    local_88 = local_68._12_4_;
    if (uVar1 < param_5) {
      local_98 = local_68._0_4_;
      lVar16 = (ulong)uVar1 * 0x14;
      uVar22 = 0xff;
      local_9c = -1;
      local_78 = 0;
      iVar21 = local_68._4_4_;
      local_7c = local_94;
      local_68 = auVar7;
      iVar20 = local_68._12_4_;
      do {
        uVar17 = *(ushort *)(lVar15 + 0x10 + lVar16);
        uVar13 = 0x1c00U >> ((byte)uVar17 & 0x1f) & 1;
        bVar12 = (byte)uVar13;
        if ((uVar13 == 0) || (uVar8 = uVar17 >> 8, uVar8 == 0)) {
          iVar10 = (int)*(undefined8 *)(*(long *)(param_3 + 0x80) + lVar16);
          iVar14 = (int)((ulong)*(undefined8 *)(*(long *)(param_3 + 0x80) + lVar16) >> 0x20);
          if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
            iVar9 = iVar9 - iVar10;
            iVar23 = iVar23 - iVar14;
          }
          else {
            iVar9 = iVar9 + iVar10;
            iVar23 = iVar23 + iVar14;
          }
        }
        else {
          if (local_80 < 2) {
LAB_0010044e:
            uVar13 = (uint)uVar8;
            if (uVar13 != uVar22) goto LAB_00100299;
          }
          else {
            bVar3 = *(byte *)(lVar15 + 0xe + lVar16);
            if ((bVar3 & 0x10) == 0) {
              iVar10 = (bVar3 & 0xf) - 1;
              if (iVar10 < (int)local_80) goto joined_r0x00100433;
LAB_00100439:
              iVar10 = local_80 - 1;
            }
            else {
              iVar10 = -1;
joined_r0x00100433:
              if (bVar2 >> 5 == 0 || bVar3 >> 5 != bVar2 >> 5) goto LAB_00100439;
            }
            if (iVar10 == local_9c) goto LAB_0010044e;
            uVar4 = local_68._0_4_;
            uVar6 = local_68._8_4_;
            local_84 = local_68._4_4_;
            local_88 = local_68._12_4_;
            if ((local_78 == 0) && (local_78 = *(uint *)param_1, (local_78 & 0xfffffffe) != 4)) {
              local_78 = hb_script_get_horizontal_direction(*(undefined4 *)(param_1 + 4));
              uVar17 = *(ushort *)(lVar15 + 0x10 + lVar16);
              bVar12 = (byte)(0x1c00 >> ((byte)uVar17 & 0x1f)) & 1;
            }
            iVar14 = iVar10;
            if (local_78 != 4) {
              iVar14 = (local_80 - 1) - iVar10;
            }
            local_90 = (iVar14 * uVar6) / (int)local_80 + uVar4;
            local_7c = (int)uVar6 / (int)local_80;
            local_9c = iVar10;
            if (bVar12 != 0) {
              uVar22 = 0xff;
              uVar8 = uVar17 >> 8;
              goto LAB_0010044e;
            }
            uVar13 = 0;
LAB_00100299:
            local_94 = local_7c;
            local_98 = local_90;
            uVar22 = uVar13;
            iVar21 = local_84;
            iVar20 = local_88;
          }
          lVar19 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
          local_58 = (undefined1  [16])0x0;
          if (lVar19 != 0) {
            lVar19 = *(long *)(lVar19 + 0x68);
          }
          iVar10 = (**(code **)(*(long *)(param_2 + 0x90) + 0x88))
                             (param_2,*(undefined8 *)(param_2 + 0x98),
                              *(undefined4 *)(*(long *)(param_3 + 0x70) + lVar16),local_58,lVar19);
          if (iVar10 == 0) {
            puVar11 = (undefined8 *)(*(long *)(param_3 + 0x80) + lVar16);
          }
          else {
            iVar10 = *(int *)(param_2 + 0x2c);
            puVar11 = (undefined8 *)(*(long *)(param_3 + 0x80) + lVar16);
            puVar11[1] = 0;
            if (uVar22 - 200 < 0x23) {
              uVar18 = 1L << ((byte)(uVar22 - 200) & 0x3f);
              if ((uVar18 & 0x100410000) != 0) {
                iVar14 = ((local_94 + local_98) - local_58._8_4_) - local_58._0_4_;
LAB_00100578:
                *(int *)(puVar11 + 1) = iVar14;
                goto LAB_0010057b;
              }
              if ((uVar18 & 0x10040001) != 0) {
                iVar14 = local_98 - local_58._0_4_;
                goto LAB_00100578;
              }
              if ((uVar18 & 0x600000000) != 0) {
                if (*(int *)(param_3 + 0x38) == 4) {
                  iVar14 = ((local_98 + local_94) - (int)local_58._8_4_ / 2) - local_58._0_4_;
                }
                else {
                  if (*(int *)(param_3 + 0x38) != 5) goto LAB_0010039b;
                  iVar14 = (local_98 - (int)local_58._8_4_ / 2) - local_58._0_4_;
                }
                goto LAB_00100578;
              }
LAB_0010039b:
              *(int *)(puVar11 + 1) = ((local_94 - local_58._8_4_) / 2 + local_98) - local_58._0_4_;
              if (0xd5 < uVar22) goto LAB_00100588;
LAB_001003c4:
              if ((uVar22 & 0xfffffffd) != 200) goto LAB_001004da;
            }
            else {
              *(int *)(puVar11 + 1) = ((local_94 - local_58._8_4_) / 2 + local_98) - local_58._0_4_;
              if (0xea < uVar22) goto LAB_001004da;
LAB_0010057b:
              if (uVar22 < 0xd6) goto LAB_001003c4;
LAB_00100588:
              iVar14 = iVar10 + 0xf;
              if (-1 < iVar10) {
                iVar14 = iVar10;
              }
              uVar18 = 1L << ((char)uVar22 + 0x2aU & 0x3f);
              iVar14 = iVar14 >> 4;
              if ((uVar18 & 0x154000) != 0) {
                iVar21 = iVar21 + iVar14;
                iVar20 = iVar20 - iVar14;
LAB_001005c6:
                iVar14 = (iVar21 - local_58._12_4_) - local_58._4_4_;
                if (0xf < iVar10 != 0 < iVar14) {
                  iVar10 = -(iVar14 / 2);
                  iVar21 = iVar21 + iVar10;
                  iVar20 = iVar20 + iVar14 / 2;
                  iVar14 = iVar14 + iVar10;
                }
                *(int *)((long)puVar11 + 0xc) = iVar14;
                iVar21 = iVar21 - local_58._12_4_;
                iVar20 = iVar20 + local_58._12_4_;
                goto LAB_001004da;
              }
              if ((uVar18 & 0x80150) == 0) {
                if ((uVar18 & 5) == 0) goto LAB_001004da;
                goto LAB_001005c6;
              }
              iVar20 = iVar20 - iVar14;
            }
            iVar14 = (iVar21 + iVar20) - local_58._4_4_;
            if (0xf < iVar10 == 0 < iVar14) {
              iVar20 = iVar20 - iVar14;
              iVar14 = 0;
            }
            *(int *)((long)puVar11 + 0xc) = iVar14;
            iVar20 = iVar20 + local_58._12_4_;
          }
LAB_001004da:
          *puVar11 = 0;
          puVar11[1] = CONCAT44((int)((ulong)puVar11[1] >> 0x20) + iVar23,(int)puVar11[1] + iVar9);
        }
        lVar16 = lVar16 + 0x14;
        auVar7 = local_68;
      } while (((ulong)uVar1 + 1 + (ulong)((param_5 - 2) - param_4)) * 0x14 != lVar16);
    }
  }
  local_68 = auVar7;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        goto LAB_00101200;
      }
      iVar1 = *(int *)(this + 0x1c);
      uVar11 = *(uint *)(this + 0x5c);
      lVar3 = *(long *)(this + 0x70);
      lVar8 = *(long *)(this + 0x78);
      if (uVar11 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar5) goto LAB_00101200;
        if (iVar1 == 2) goto LAB_0010159e;
LAB_00101355:
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
LAB_00101635:
          if (param_3 == uVar11) goto LAB_00101200;
LAB_0010163e:
          uVar9 = (ulong)(param_3 - 1);
          uVar6 = (ulong)uVar11;
          goto LAB_00101645;
        }
        local_50 = uVar6 * 0x14;
        lVar12 = (ulong)(uVar5 - 1) * 0x14;
        uVar13 = *(uint *)(lVar8 + 8 + local_50);
        lVar10 = lVar8 + lVar12;
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar7 == uVar13) {
LAB_001014fd:
          if (param_2 < uVar5) {
            do {
              if (*(uint *)(lVar10 + 8) == uVar7) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_1;
              lVar10 = lVar10 + -0x14;
            } while (lVar10 != lVar8 + -0x14 + lVar12 + (ulong)((uVar5 - param_2) - 1) * -0x14);
LAB_00101419:
            uVar11 = *(uint *)(this + 0x5c);
          }
        }
        else {
          if (uVar7 != uVar2) goto LAB_001015f2;
          if (uVar7 == uVar13) goto LAB_001014fd;
          if (param_2 < uVar5) {
            puVar4 = (uint *)(lVar8 + 4 + local_50);
            do {
              if (puVar4[1] == uVar2) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar8 + 0x18 + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
            goto LAB_00101419;
          }
        }
        if (uVar11 == param_3) goto LAB_00101200;
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
LAB_00101443:
        if (uVar5 != uVar7) {
          if (uVar13 != uVar7) goto LAB_00101666;
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
            goto LAB_00101200;
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
LAB_0010159e:
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
              if (param_2 == uVar5) goto LAB_00101635;
            }
            local_50 = uVar6 * 0x14;
LAB_001015f2:
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
            goto LAB_00101635;
          }
          goto LAB_0010163e;
        }
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar7 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        if (uVar13 < uVar7) {
          uVar7 = uVar13;
        }
        local_44 = uVar7;
        if (param_2 != uVar5) goto LAB_00101355;
LAB_00101645:
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        if (iVar1 != 2) goto LAB_00101443;
LAB_00101666:
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
      goto LAB_00101200;
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
      goto LAB_00101200;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00101200;
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
LAB_00101200:
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



/* OT::ItemVariationStore::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::ItemVariationStore::sanitize(ItemVariationStore *this,hb_sanitize_context_t *param_1)

{
  ItemVariationStore *pIVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ItemVariationStore *pIVar7;
  long lVar8;
  ItemVariationStore *pIVar9;
  ushort uVar10;
  
  pIVar7 = this + 8;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(short *)this != 0x100) {
    return 0;
  }
  if ((ItemVariationStore *)(ulong)*(uint *)(param_1 + 0x18) < this + (6 - *(long *)(param_1 + 8)))
  {
    return 0;
  }
  uVar3 = *(uint *)(this + 2);
  if (uVar3 != 0) {
    pIVar9 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
    pIVar1 = pIVar9 + 4;
    if (((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       (lVar8 = (ulong)((uint)(ushort)(*(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8) *
                       (uint)(ushort)(*(ushort *)(pIVar9 + 2) << 8 | *(ushort *)(pIVar9 + 2) >> 8))
                * 6, uVar3 = (uint)lVar8, (int)((ulong)lVar8 >> 0x20) == 0)) {
      lVar8 = *(long *)(param_1 + 8);
      uVar6 = (ulong)*(uint *)(param_1 + 0x18);
      if (((ulong)((long)pIVar1 - lVar8) <= uVar6) &&
         ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar1) &&
          (iVar5 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5))))
      goto LAB_001018da;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 2) = 0;
  }
  lVar8 = *(long *)(param_1 + 8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
LAB_001018da:
  if ((((uVar6 < (ulong)((long)pIVar7 - lVar8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8)))) ||
      (uVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar7) < uVar3 * 4)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -4, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
  if (uVar2 != 0) {
    pIVar7 = this + 0xc;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar3 = *(uint *)(pIVar7 + -4);
      if (uVar3 != 0) {
        pIVar9 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        pIVar1 = pIVar9 + 6;
        if ((((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
            ((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
           ((uVar3 = (uint)(ushort)(*(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8),
            uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar1) &&
            (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar5,
            0 < iVar5)))) {
          uVar4 = *(ushort *)(pIVar9 + 2) << 8 | *(ushort *)(pIVar9 + 2) >> 8;
          uVar10 = *(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8;
          uVar3 = uVar4 & 0x7fff;
          if (uVar3 <= uVar10) {
            uVar3 = uVar3 + uVar10;
            if ((short)uVar4 < 0) {
              uVar3 = uVar3 * 2;
            }
            lVar8 = (ulong)uVar3 * (ulong)(ushort)(*(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8);
            uVar3 = (uint)lVar8;
            if ((((int)((ulong)lVar8 >> 0x20) == 0) &&
                ((ulong)((long)(pIVar9 + (ulong)(uVar10 + 2 + (uint)uVar10) + 4) -
                        *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
               ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                                (int)(pIVar9 + (ulong)(uVar10 + 2 + (uint)uVar10) + 4)) &&
                (iVar5 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar5,
                0 < iVar5)))) goto LAB_00101940;
          }
        }
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(pIVar7 + -4) = 0;
      }
LAB_00101940:
      pIVar7 = pIVar7 + 4;
    } while (this + (ulong)(uVar2 - 1) * 4 + 0x10 != pIVar7);
  }
  return 1;
}



/* OT::AttachList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::AttachList::sanitize(AttachList *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  AttachList *pAVar2;
  AttachList *pAVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  if ((AttachList *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(ushort *)this;
  if (uVar4 != 0) {
    pAVar3 = this + (ushort)(uVar4 << 8 | uVar4 >> 8);
    if (pAVar3 + (2 - *(long *)(param_1 + 8)) <= (AttachList *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pAVar3 == 0x100) {
        if (pAVar3 + (4 - *(long *)(param_1 + 8)) <= (AttachList *)(ulong)*(uint *)(param_1 + 0x18))
        {
          lVar7 = *(long *)(param_1 + 8);
          pAVar2 = (AttachList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pAVar3 + (4 - lVar7) <= pAVar2) {
            uVar6 = (uint)(ushort)(*(ushort *)(pAVar3 + 2) << 8 | *(ushort *)(pAVar3 + 2) >> 8);
LAB_00101cbe:
            if ((uVar6 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pAVar3 + 4))) &&
               (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5,
               0 < iVar5)) goto LAB_00101b51;
          }
        }
      }
      else {
        if (*(short *)pAVar3 != 0x200) goto LAB_00101b4a;
        if (pAVar3 + (4 - *(long *)(param_1 + 8)) <= (AttachList *)(ulong)*(uint *)(param_1 + 0x18))
        {
          lVar7 = *(long *)(param_1 + 8);
          pAVar2 = (AttachList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pAVar3 + (4 - lVar7) <= pAVar2) {
            uVar4 = *(ushort *)(pAVar3 + 2) << 8 | *(ushort *)(pAVar3 + 2) >> 8;
            uVar6 = (uint)uVar4 + (uint)uVar4 * 2;
            goto LAB_00101cbe;
          }
        }
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)this = 0;
  }
LAB_00101b4a:
  lVar7 = *(long *)(param_1 + 8);
  pAVar2 = (AttachList *)(ulong)*(uint *)(param_1 + 0x18);
LAB_00101b51:
  pAVar3 = this + 4;
  if ((((pAVar2 < pAVar3 + -lVar7) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar3 - *(long *)(param_1 + 8)))) ||
      (uVar6 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pAVar3) < uVar6 * 2)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar4 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar4 != 0) {
    pAVar3 = this + 6;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar3 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(ushort *)(pAVar3 + -2);
      if (uVar1 != 0) {
        pAVar2 = this + (ushort)(uVar1 << 8 | uVar1 >> 8) + 2;
        if ((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar2 - *(long *)(param_1 + 8))) ||
            (uVar1 = *(ushort *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),
            (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar2 - *(long *)(param_1 + 8)))) ||
           ((uVar6 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8),
            (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pAVar2) < uVar6 * 2 ||
            (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5,
            iVar5 < 1)))) {
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
          }
          *(undefined2 *)(pAVar3 + -2) = 0;
        }
      }
      pAVar3 = pAVar3 + 2;
    } while (this + (ulong)(uVar4 - 1) * 2 + 8 != pAVar3);
  }
  return 1;
}



/* OT::LigGlyph::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::LigGlyph::sanitize(LigGlyph *this,hb_sanitize_context_t *param_1)

{
  short sVar1;
  LigGlyph *pLVar2;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  LigGlyph *pLVar8;
  LigGlyph *pLVar9;
  uint uVar10;
  LigGlyph *pLVar3;
  
  pLVar2 = this + 2;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8))) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8)))) ||
      (uVar7 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar2) < uVar7 * 2)) ||
     (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -2, *(int *)(param_1 + 0x1c) = iVar6, iVar6 < 1)) {
    return 0;
  }
  uVar4 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar4 != 0) {
    pLVar2 = this + 4;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar5 = *(ushort *)(pLVar2 + -2);
      if (uVar5 != 0) goto LAB_00101e29;
      pLVar2 = pLVar2 + 2;
    } while (this + (ulong)(uVar4 - 1) * 2 + 6 != pLVar2);
  }
  return 1;
LAB_00101e29:
  pLVar8 = this + (ushort)(uVar5 << 8 | uVar5 >> 8);
  pLVar3 = pLVar2;
  if ((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar8 + (2 - *(long *)(param_1 + 8))) {
LAB_00101ea8:
    uVar7 = *(uint *)(param_1 + 0x2c);
LAB_00101eab:
    if (0x1f < uVar7) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar7 + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(ushort *)(pLVar2 + -2) = 0;
  }
  else {
    sVar1 = *(short *)pLVar8;
    if (sVar1 != 0x200) {
      if (sVar1 != 0x300) {
        if (sVar1 != 0x100) goto LAB_00101e60;
        goto LAB_00101e98;
      }
      if ((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar8 + (6 - *(long *)(param_1 + 8)))
      goto LAB_00101ea8;
      uVar5 = *(ushort *)(pLVar8 + 4);
      if (uVar5 == 0) goto LAB_00101e60;
      pLVar9 = pLVar8 + (ushort)(uVar5 << 8 | uVar5 >> 8);
      if (pLVar9 + (6 - *(long *)(param_1 + 8)) <= (LigGlyph *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar5 = *(ushort *)(pLVar9 + 4);
        if ((ushort)((uVar5 << 8 | uVar5 >> 8) - 1) < 3) {
          uVar7 = (uint)(ushort)(*(ushort *)(pLVar9 + 2) << 8 | *(ushort *)(pLVar9 + 2) >> 8);
          uVar10 = (uint)(ushort)(*(ushort *)pLVar9 << 8 | *(ushort *)pLVar9 >> 8);
          if (uVar7 < uVar10) {
            uVar7 = 6;
          }
          else {
            uVar7 = (uVar7 - uVar10 >> (4U - (char)(uVar5 >> 8) & 0x1f)) * 2 + 8;
          }
          if ((((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar9 + -*(long *)(param_1 + 8)) ||
              ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar9) < uVar7)) ||
             (iVar6 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar6 - uVar7,
             (int)(iVar6 - uVar7) < 1)) goto LAB_00101f90;
        }
        goto LAB_00101e60;
      }
LAB_00101f90:
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      uVar7 = *(uint *)(param_1 + 0x2c) + 1;
      *(uint *)(param_1 + 0x2c) = uVar7;
      if (param_1[0x28] != (hb_sanitize_context_t)0x0) {
        *(short *)(pLVar8 + 4) = 0;
        goto LAB_00101e60;
      }
      goto LAB_00101eab;
    }
LAB_00101e98:
    if ((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar8 + (4 - *(long *)(param_1 + 8)))
    goto LAB_00101ea8;
  }
LAB_00101e60:
  do {
    pLVar2 = pLVar3 + 2;
    if (this + (ulong)(uVar4 - 1) * 2 + 6 == pLVar2) {
      return 1;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar5 = *(ushort *)pLVar3;
    pLVar3 = pLVar2;
  } while (uVar5 == 0);
  goto LAB_00101e29;
}



/* OT::LigCaretList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::LigCaretList::sanitize(LigCaretList *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  LigCaretList *pLVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  LigCaretList *pLVar8;
  
  if ((LigCaretList *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar3 = *(ushort *)this;
  if (uVar3 != 0) {
    pLVar8 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
    if (pLVar8 + (2 - *(long *)(param_1 + 8)) <= (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pLVar8 == 0x100) {
        if (pLVar8 + (4 - *(long *)(param_1 + 8)) <=
            (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar5 = *(long *)(param_1 + 8);
          pLVar4 = (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pLVar8 + (4 - lVar5) <= pLVar4) {
            uVar7 = (uint)(ushort)(*(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8);
LAB_00102166:
            if ((uVar7 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pLVar8 + 4))) &&
               (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -2, *(int *)(param_1 + 0x1c) = iVar6,
               0 < iVar6)) goto LAB_0010201b;
          }
        }
      }
      else {
        if (*(short *)pLVar8 != 0x200) goto LAB_00102014;
        if (pLVar8 + (4 - *(long *)(param_1 + 8)) <=
            (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar5 = *(long *)(param_1 + 8);
          pLVar4 = (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pLVar8 + (4 - lVar5) <= pLVar4) {
            uVar3 = *(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8;
            uVar7 = (uint)uVar3 + (uint)uVar3 * 2;
            goto LAB_00102166;
          }
        }
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)this = 0;
  }
LAB_00102014:
  lVar5 = *(long *)(param_1 + 8);
  pLVar4 = (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18);
LAB_0010201b:
  pLVar8 = this + 4;
  if ((((pLVar4 < pLVar8 + -lVar5) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar8 - *(long *)(param_1 + 8)))) ||
      (uVar7 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar8) < uVar7 * 2)) ||
     (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -2, *(int *)(param_1 + 0x1c) = iVar6, iVar6 < 1)) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar3 != 0) {
    pLVar8 = this + 6;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar8 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(ushort *)(pLVar8 + -2);
      if ((uVar1 != 0) &&
         (cVar2 = LigGlyph::sanitize((LigGlyph *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1)
         , cVar2 == '\0')) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined2 *)(pLVar8 + -2) = 0;
      }
      pLVar8 = pLVar8 + 2;
    } while (this + (ulong)(uVar3 - 1) * 2 + 8 != pLVar8);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::MarkGlyphSetsFormat1::covers(unsigned int, unsigned int) const */

undefined4 __thiscall
OT::MarkGlyphSetsFormat1::covers(MarkGlyphSetsFormat1 *this,uint param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  MarkGlyphSetsFormat1 *pMVar5;
  MarkGlyphSetsFormat1 *pMVar6;
  int iVar7;
  
  pMVar5 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
  if (param_1 < (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)) {
    pMVar5 = this + (ulong)param_1 * 4 + 4;
  }
  uVar3 = *(uint *)pMVar5;
  pMVar5 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
  if (uVar3 != 0) {
    pMVar5 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
  }
  if (*(short *)pMVar5 == 0x100) {
    uVar2 = *(ushort *)(pMVar5 + 2) << 8 | *(ushort *)(pMVar5 + 2) >> 8;
    iVar7 = uVar2 - 1;
    if (uVar2 != 0) {
      iVar1 = 0;
      do {
        uVar4 = (uint)(iVar1 + iVar7) >> 1;
        uVar3 = (uint)(ushort)(*(ushort *)(pMVar5 + (ulong)uVar4 * 2 + 4) << 8 |
                              *(ushort *)(pMVar5 + (ulong)uVar4 * 2 + 4) >> 8);
        if (param_2 < uVar3) {
          iVar7 = uVar4 - 1;
        }
        else {
          if (param_2 == uVar3) {
            return 1;
          }
          iVar1 = uVar4 + 1;
        }
      } while (iVar1 <= iVar7);
    }
  }
  else if (*(short *)pMVar5 == 0x200) {
    uVar2 = *(ushort *)(pMVar5 + 2) << 8 | *(ushort *)(pMVar5 + 2) >> 8;
    iVar7 = uVar2 - 1;
    if (uVar2 != 0) {
      iVar1 = 0;
      do {
        while( true ) {
          uVar3 = (uint)(iVar1 + iVar7) >> 1;
          pMVar6 = pMVar5 + (ulong)uVar3 * 6 + 4;
          uVar2 = *(ushort *)pMVar6 << 8 | *(ushort *)pMVar6 >> 8;
          if (param_2 < uVar2) break;
          if (param_2 <= (ushort)(*(ushort *)(pMVar6 + 2) << 8 | *(ushort *)(pMVar6 + 2) >> 8))
          goto LAB_001022e3;
          iVar1 = uVar3 + 1;
          if (iVar7 < iVar1) goto LAB_001022be;
        }
        iVar7 = uVar3 - 1;
      } while (iVar1 <= iVar7);
    }
LAB_001022be:
    uVar2 = __hb_Null_OT_RangeRecord << 8 | __hb_Null_OT_RangeRecord >> 8;
    if (uVar2 <= (ushort)(_DAT_00105022 << 8 | _DAT_00105022 >> 8)) {
      pMVar6 = (MarkGlyphSetsFormat1 *)&_hb_Null_OT_RangeRecord;
LAB_001022e3:
      iVar7 = ((uint)(ushort)(*(ushort *)(pMVar6 + 4) << 8 | *(ushort *)(pMVar6 + 4) >> 8) -
              (uint)uVar2) + param_2;
      return CONCAT31((int3)((uint)iVar7 >> 8),iVar7 != -1);
    }
  }
  return 0;
}



/* OT::MarkGlyphSets::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::MarkGlyphSets::sanitize(MarkGlyphSets *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  MarkGlyphSets *pMVar5;
  MarkGlyphSets *pMVar6;
  
  if ((MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(short *)this == 0x100) {
    pMVar6 = this + 4;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar4 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar6) < uVar4 * 4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x1c) + uVar4 * -4;
    *(int *)(param_1 + 0x1c) = iVar3;
    if (iVar3 < 1) {
      return 0;
    }
    uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar1 != 0) {
      pMVar6 = this + 8;
      do {
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar4 = *(uint *)(pMVar6 + -4);
        if (uVar4 != 0) {
          pMVar5 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18);
          if (pMVar5 + (2 - *(long *)(param_1 + 8)) <=
              (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18)) {
            if (*(short *)pMVar5 == 0x100) {
              if ((pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                   (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18)) &&
                 (pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                  (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18))) {
                uVar4 = (uint)(ushort)(*(ushort *)(pMVar5 + 2) << 8 | *(ushort *)(pMVar5 + 2) >> 8);
LAB_00102482:
                if ((uVar4 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pMVar5 + 4)))
                   && (iVar3 = *(int *)(param_1 + 0x1c) + uVar4 * -2,
                      *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)) goto LAB_00102400;
              }
            }
            else {
              if (*(short *)pMVar5 != 0x200) goto LAB_00102400;
              if ((pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                   (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18)) &&
                 (pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                  (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18))) {
                uVar2 = *(ushort *)(pMVar5 + 2) << 8 | *(ushort *)(pMVar5 + 2) >> 8;
                uVar4 = (uint)uVar2 + (uint)uVar2 * 2;
                goto LAB_00102482;
              }
            }
          }
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
          }
          *(undefined4 *)(pMVar6 + -4) = 0;
        }
LAB_00102400:
        pMVar6 = pMVar6 + 4;
      } while (this + (ulong)(uVar1 - 1) * 4 + 0xc != pMVar6);
    }
  }
  return 1;
}



/* OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
          (GDEFVersion1_2<OT::Layout::SmallTypes> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar4;
  long lVar5;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar6;
  int iVar7;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar8;
  
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4);
  if (uVar2 == 0) {
LAB_001025f0:
    lVar5 = *(long *)(param_1 + 8);
    pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18);
  }
  else {
    pGVar4 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
        pGVar4 + (2 - *(long *)(param_1 + 8))) {
LAB_00102738:
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined2 *)(this + 4) = 0;
      goto LAB_001025f0;
    }
    if (*(short *)pGVar4 != 0x100) {
      if (*(short *)pGVar4 != 0x200) goto LAB_001025f0;
      pGVar8 = pGVar4 + 4;
      if ((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        lVar5 = *(long *)(param_1 + 8);
        pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18);
        if (pGVar8 + -lVar5 <= pGVar6) {
          uVar2 = *(ushort *)(pGVar4 + 2) << 8 | *(ushort *)(pGVar4 + 2) >> 8;
          uVar3 = (uint)uVar2 + (uint)uVar2 * 2;
          goto LAB_00102716;
        }
      }
      goto LAB_00102738;
    }
    pGVar8 = pGVar4 + 6;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pGVar8 - *(long *)(param_1 + 8)))
    goto LAB_00102738;
    lVar5 = *(long *)(param_1 + 8);
    pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18);
    if (pGVar6 < pGVar8 + -lVar5) goto LAB_00102738;
    uVar3 = (uint)(ushort)(*(ushort *)(pGVar4 + 4) << 8 | *(ushort *)(pGVar4 + 4) >> 8);
LAB_00102716:
    if (((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pGVar8) < uVar3 * 2) ||
       (iVar7 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1))
    goto LAB_00102738;
  }
  if (pGVar6 < this + (8 - lVar5)) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 6);
  if ((uVar2 != 0) &&
     (cVar1 = AttachList::sanitize((AttachList *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1)
     , cVar1 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)(this + 6) = 0;
  }
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (10 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 8);
  if ((uVar2 != 0) &&
     (cVar1 = LigCaretList::sanitize
                        ((LigCaretList *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1),
     cVar1 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)(this + 8) = 0;
  }
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (0xc - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 10);
  if (uVar2 == 0) goto LAB_00102656;
  pGVar4 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  if (pGVar4 + (2 - *(long *)(param_1 + 8)) <=
      (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (*(short *)pGVar4 == 0x100) {
      pGVar8 = pGVar4 + 6;
      if ((((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          ((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar3 = (uint)(ushort)(*(ushort *)(pGVar4 + 4) << 8 | *(ushort *)(pGVar4 + 4) >> 8) * 2,
         uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pGVar8))) {
LAB_001029f9:
        iVar7 = *(int *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x1c) = iVar7 - uVar3;
        if (0 < (int)(iVar7 - uVar3)) goto LAB_00102656;
      }
    }
    else {
      if (*(short *)pGVar4 != 0x200) goto LAB_00102656;
      pGVar8 = pGVar4 + 4;
      if ((((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          ((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar3 = (uint)(ushort)(*(ushort *)(pGVar4 + 2) << 8 | *(ushort *)(pGVar4 + 2) >> 8) * 6,
         uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pGVar8))) goto LAB_001029f9;
    }
  }
  if (0x1f < *(uint *)(param_1 + 0x2c)) {
    return 0;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
  if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
    return 0;
  }
  *(undefined2 *)(this + 10) = 0;
LAB_00102656:
  if (0x10001 < (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) * 0x10000 +
                (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)) {
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xe - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 0xc);
    if ((uVar2 != 0) &&
       (cVar1 = MarkGlyphSets::sanitize
                          ((MarkGlyphSets *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1),
       cVar1 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined2 *)(this + 0xc) = 0;
    }
  }
  if (0x10002 < (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) * 0x10000 +
                (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)) {
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0x12 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0xe);
    if ((uVar3 != 0) &&
       (cVar1 = ItemVariationStore::sanitize
                          ((ItemVariationStore *)
                           (this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                   | uVar3 << 0x18)),param_1), cVar1 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined4 *)(this + 0xe) = 0;
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   OT::MarkGlyphSetsFormat1::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned
   long, 4u>, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >, false>&) const */

void __thiscall
OT::MarkGlyphSetsFormat1::
collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
          (MarkGlyphSetsFormat1 *this,hb_vector_t *param_1)

{
  MarkGlyphSetsFormat1 *pMVar1;
  MarkGlyphSetsFormat1 *pMVar2;
  MarkGlyphSetsFormat1 MVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined1 (*pauVar11) [16];
  void *pvVar12;
  ulong *puVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  byte bVar17;
  short sVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  MarkGlyphSetsFormat1 *pMVar22;
  ushort uVar23;
  MarkGlyphSetsFormat1 *pMVar24;
  MarkGlyphSetsFormat1 *pMVar25;
  ushort uVar26;
  ulong uVar27;
  ulong uVar28;
  MarkGlyphSetsFormat1 *pMVar29;
  ulong uVar30;
  
  pMVar22 = this + 4;
  uVar28 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
  pMVar2 = pMVar22 + uVar28 * 4;
  if (uVar28 != 0) {
    do {
      while( true ) {
        uVar10 = *(uint *)pMVar22;
        pMVar29 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
        if (uVar10 != 0) {
          pMVar29 = this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                           uVar10 << 0x18);
        }
        uVar10 = *(uint *)param_1;
        uVar16 = *(uint *)(param_1 + 4);
        if (-1 < (int)uVar10) break;
LAB_00102d56:
        __hb_CrapPool = __hb_NullPool;
        _hb_face_get_glyph_count = __hb_Null_OT_RangeRecord;
        _hb_face_reference_table = _realloc;
        sVar18 = *(short *)pMVar29;
        puVar13 = (ulong *)&_hb_CrapPool;
        if (sVar18 == 0x100) goto LAB_00102d93;
LAB_00102af3:
        if (sVar18 == 0x200) {
          pMVar25 = pMVar29 + 4;
          lVar5 = (ulong)(ushort)(*(ushort *)(pMVar29 + 2) << 8 | *(ushort *)(pMVar29 + 2) >> 8) * 6
          ;
          pMVar29 = pMVar25 + lVar5;
          if (lVar5 != 0) {
            do {
              uVar15 = *(ushort *)(pMVar25 + 2);
              uVar4 = *(ushort *)pMVar25;
              uVar23 = uVar15 << 8 | uVar15 >> 8;
              uVar26 = uVar4 << 8 | uVar4 >> 8;
              if (*puVar13 == 0xffffffffffffffff) {
LAB_00102bfa:
                uVar28 = puVar13[1];
                uVar30 = puVar13[2];
                bVar8 = false;
                if (uVar28 == 0xffffffffffffffff) {
                  if (uVar30 == 0xffffffffffffffff) break;
LAB_00102c2d:
                  bVar14 = 0;
LAB_00102b7d:
                  bVar17 = (byte)uVar15 >> 1;
                  bVar20 = (byte)uVar4 >> 1;
                  if ((uint)bVar17 - (uint)bVar20 < 0x3f) {
                    bVar17 = bVar17 & 0x3f;
                    uVar28 = 1L << (bVar20 & 0x3f);
                    puVar13[2] = ((2L << bVar17) - uVar28) - (ulong)((ulong)(1L << bVar17) < uVar28)
                                 | uVar30;
                    goto LAB_00102ba6;
                  }
                  puVar13[2] = 0xffffffffffffffff;
                  bVar8 = (bool)(bVar8 | bVar14);
                }
                else {
LAB_00102c0f:
                  if ((uint)uVar23 - (uint)uVar26 < 0x3f) {
                    uVar27 = 1L << ((byte)(uVar4 >> 8) & 0x3f);
                    bVar17 = (byte)(uVar15 >> 8);
                    bVar14 = 1;
                    puVar13[1] = ((2L << (bVar17 & 0x3f)) - uVar27) -
                                 (ulong)((ulong)(1L << (bVar17 & 0x3f)) < uVar27) | uVar28;
                    if (uVar30 == 0xffffffffffffffff) goto LAB_00102ba6;
                    goto LAB_00102b7d;
                  }
                  puVar13[1] = 0xffffffffffffffff;
                  if (uVar30 != 0xffffffffffffffff) goto LAB_00102c2d;
                }
                if (!bVar8) break;
              }
              else {
                uVar6 = uVar23 >> 4;
                uVar7 = uVar26 >> 4;
                if (0x3e < (uint)uVar6 - (uint)uVar7) {
                  *puVar13 = 0xffffffffffffffff;
                  goto LAB_00102bfa;
                }
                uVar30 = 1L << ((byte)uVar7 & 0x3f);
                uVar28 = puVar13[1];
                bVar14 = (byte)uVar6;
                bVar8 = true;
                *puVar13 = ((2L << (bVar14 & 0x3f)) - uVar30) -
                           (ulong)((ulong)(1L << (bVar14 & 0x3f)) < uVar30) | *puVar13;
                uVar30 = puVar13[2];
                if (uVar28 != 0xffffffffffffffff) goto LAB_00102c0f;
                if (uVar30 != 0xffffffffffffffff) goto LAB_00102c2d;
              }
LAB_00102ba6:
              pMVar25 = pMVar25 + 6;
            } while (pMVar29 != pMVar25);
          }
        }
LAB_00102cb3:
        pMVar22 = pMVar22 + 4;
        if (pMVar2 == pMVar22) {
          return;
        }
      }
      uVar21 = uVar16 + 1;
      if ((int)uVar21 < 0) {
        uVar21 = 0;
      }
      uVar19 = uVar10;
      if (uVar10 < uVar21) {
        do {
          uVar19 = (uVar19 >> 1) + 8 + uVar19;
        } while (uVar19 < uVar21);
        if (0xaaaaaaa < uVar19) {
LAB_00102d50:
          *(uint *)param_1 = ~uVar10;
          goto LAB_00102d56;
        }
        pvVar12 = realloc(*(void **)(param_1 + 8),(ulong)uVar19 * 0x18);
        if (pvVar12 == (void *)0x0) {
          uVar10 = *(uint *)param_1;
          if (uVar10 < uVar19) goto LAB_00102d50;
          pvVar12 = *(void **)(param_1 + 8);
          uVar16 = *(uint *)(param_1 + 4);
        }
        else {
          *(void **)(param_1 + 8) = pvVar12;
          uVar16 = *(uint *)(param_1 + 4);
          *(uint *)param_1 = uVar19;
        }
      }
      else {
        pvVar12 = *(void **)(param_1 + 8);
      }
      if (uVar16 < uVar21) {
        pauVar11 = (undefined1 (*) [16])((long)pvVar12 + (ulong)uVar16 * 0x18);
        do {
          *(undefined8 *)pauVar11[1] = 0;
          pauVar9 = pauVar11 + 1;
          *pauVar11 = (undefined1  [16])0x0;
          pauVar11 = (undefined1 (*) [16])(*pauVar9 + 8);
        } while ((undefined1 (*) [16])
                 ((long)pvVar12 + ((ulong)((uVar21 - 1) - uVar16) + (ulong)uVar16) * 0x18 + 0x18) !=
                 (undefined1 (*) [16])(*pauVar9 + 8));
      }
      sVar18 = *(short *)pMVar29;
      *(uint *)(param_1 + 4) = uVar21;
      puVar13 = (ulong *)((long)pvVar12 + (ulong)(uVar21 - 1) * 0x18);
      if (sVar18 != 0x100) goto LAB_00102af3;
LAB_00102d93:
      pMVar25 = pMVar29 + 4;
      uVar15 = *(ushort *)(pMVar29 + 2) << 8 | *(ushort *)(pMVar29 + 2) >> 8;
      if (uVar15 == 0) goto LAB_00102cb3;
      uVar28 = *puVar13;
      pMVar29 = pMVar29 + (ulong)(uVar15 + 2) * 2;
      pMVar24 = pMVar25;
      do {
        uVar15 = *(ushort *)pMVar24;
        pMVar24 = pMVar24 + 2;
        uVar28 = uVar28 | 1L << ((byte)((ushort)(uVar15 << 8 | uVar15 >> 8) >> 4) & 0x3f);
      } while (pMVar24 != pMVar29);
      *puVar13 = uVar28;
      uVar28 = puVar13[1];
      pMVar24 = pMVar25;
      do {
        pMVar1 = pMVar24 + 1;
        pMVar24 = pMVar24 + 2;
        uVar28 = uVar28 | 1L << ((byte)*pMVar1 & 0x3f);
      } while (pMVar24 != pMVar29);
      uVar30 = puVar13[2];
      puVar13[1] = uVar28;
      do {
        MVar3 = *pMVar25;
        pMVar25 = pMVar25 + 2;
        uVar30 = uVar30 | 1L << ((byte)MVar3 >> 1 & 0x3f);
      } while (pMVar25 != pMVar29);
      pMVar22 = pMVar22 + 4;
      puVar13[2] = uVar30;
    } while (pMVar2 != pMVar22);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::GDEF::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  ushort uVar1;
  short sVar2;
  GDEFVersion1_2<OT::Layout::SmallTypes> *this_00;
  char cVar3;
  accelerator_t *paVar4;
  hb_face_t *phVar5;
  long lVar6;
  hb_face_t *phVar7;
  short *psVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  hb_blob_t *phVar12;
  MarkGlyphSetsFormat1 *this_01;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  int local_4c;
  long local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  puVar11 = (undefined8 *)((ulong)(this + 0x20) & 0xfffffffffffffff8);
  for (uVar9 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x20) & 0xfffffffffffffff8))
                       + 0x218U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (paVar4 = this + 0x18; paVar4 != this + 0x218; paVar4 = paVar4 + 2) {
    *(undefined2 *)paVar4 = 0xffff;
  }
  local_58 = 0;
  local_50 = '\0';
  local_3b = 0;
  local_40 = hb_face_get_glyph_count(param_1);
  local_3c = 1;
  phVar5 = (hb_face_t *)hb_face_reference_table(param_1,0x47444546);
  lVar6 = hb_blob_reference(phVar5);
  local_48 = lVar6;
  while( true ) {
    local_60 = *(uint *)(lVar6 + 0x18);
    this_00 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(lVar6 + 0x10);
    local_5c = local_60 * 0x40;
    if (local_60 >> 0x1a == 0) {
      if (0x3fffffff < local_5c) {
        local_5c = 0x3fffffff;
      }
      if (local_5c < 0x4000) {
        local_5c = 0x4000;
      }
    }
    else {
      local_5c = 0x3fffffff;
    }
    local_70._8_8_ = this_00 + local_60;
    local_70._0_8_ = this_00;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (this_00 == (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
      hb_blob_destroy(lVar6);
      goto LAB_00102fd3;
    }
    if ((ulong)local_60 < 4) goto LAB_00103132;
    if ((*(short *)this_00 != 0x100) ||
       (cVar3 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
                          (this_00,(hb_sanitize_context_t *)local_78), lVar6 = local_48,
       cVar3 != '\0')) break;
    if ((local_4c == 0) || (local_50 != '\0')) goto LAB_00103132;
    local_70._0_8_ = hb_blob_get_data_writable(phVar5,0);
    local_70._8_8_ = (ulong)*(uint *)(phVar5 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_00103132;
    local_50 = '\x01';
  }
  if (local_4c == 0) {
LAB_00102fc6:
    hb_blob_destroy(local_48);
  }
  else {
    local_4c = 0;
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)local_60 < this_00 + (4 - local_70._0_8_))
    {
      hb_blob_destroy(local_48);
      goto LAB_00103137;
    }
    if (*(short *)this_00 != 0x100) goto LAB_00102fc6;
    cVar3 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
                      (this_00,(hb_sanitize_context_t *)local_78);
    lVar6 = local_48;
    if (local_4c != 0) {
LAB_00103132:
      hb_blob_destroy(lVar6);
LAB_00103137:
      hb_blob_destroy(phVar5);
      phVar5 = (hb_face_t *)hb_blob_get_empty();
LAB_00102fd3:
      *(hb_face_t **)this = phVar5;
      phVar7 = (hb_face_t *)&_hb_NullPool;
      if (phVar5 != (hb_face_t *)0x0) {
        phVar7 = phVar5;
      }
      phVar12 = (hb_blob_t *)&_hb_NullPool;
      if (3 < *(uint *)(phVar7 + 0x18)) {
        phVar12 = *(hb_blob_t **)(phVar7 + 0x10);
      }
      cVar3 = OT::GDEF::is_blocklisted(phVar12,phVar5);
      if (cVar3 == '\0') {
        puVar10 = *(undefined **)this;
      }
      else {
        hb_blob_destroy(*(undefined8 *)this);
        puVar10 = (undefined *)hb_blob_get_empty();
        *(undefined **)this = puVar10;
      }
      if (puVar10 == (undefined *)0x0) {
        puVar10 = &_hb_NullPool;
      }
      psVar8 = (short *)&_hb_NullPool;
      if (3 < *(uint *)(puVar10 + 0x18)) {
        psVar8 = *(short **)(puVar10 + 0x10);
      }
      if (((*psVar8 == 0x100) &&
          (0x10001 < (ushort)(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) + 0x10000)) &&
         (uVar1 = psVar8[6], uVar1 != 0)) {
        this_01 = (MarkGlyphSetsFormat1 *)((long)psVar8 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
        sVar2 = *(short *)this_01;
      }
      else {
        this_01 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
        sVar2 = __hb_NullPool;
      }
      if (sVar2 == 0x100) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          MarkGlyphSetsFormat1::
          collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                    (this_01,(hb_vector_t *)(this + 8));
          return;
        }
      }
      else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    hb_blob_destroy(local_48);
    local_48 = 0;
    local_60 = 0;
    local_70 = (undefined1  [16])0x0;
    if (cVar3 == '\0') goto LAB_00103137;
  }
  hb_blob_make_immutable(phVar5);
  goto LAB_00102fd3;
}



/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */

void __thiscall
OT::hb_ot_apply_context_t::hb_ot_apply_context_t
          (hb_ot_apply_context_t *this,uint param_1,hb_font_t *param_2,hb_buffer_t *param_3,
          hb_blob_t *param_4)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  short *psVar8;
  hb_face_t *phVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  undefined *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  accelerator_t *paVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  hb_ot_apply_context_t hVar22;
  
  this[0x24] = (hb_ot_apply_context_t)0x0;
  uVar10 = _LC2;
  this[100] = (hb_ot_apply_context_t)0x0;
  *(uint *)(this + 0x88) = param_1;
  *(hb_buffer_t **)(this + 0xa0) = param_3;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)this = 0;
  *(hb_font_t **)(this + 0x90) = param_2;
  *(undefined8 *)(this + 0x98) = uVar3;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x18) = uVar10;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xd0] = (hb_ot_apply_context_t)0x0;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xdc) = 0x1000000000000;
  *(undefined2 *)(this + 0xe4) = 0;
  lVar13 = hb_blob_reference();
  this[0xd0] = (hb_ot_apply_context_t)0x0;
  *(long *)(this + 0xd8) = lVar13;
  if (lVar13 != 0) {
    lVar7 = *(long *)(lVar13 + 0x10);
    uVar4 = *(uint *)(lVar13 + 0x18);
    *(long *)(this + 0xb0) = lVar7;
    uVar12 = uVar4 * 0x40;
    if (uVar4 >> 0x1a == 0) {
      if (0x3fffffff < uVar12) {
        uVar12 = 0x3fffffff;
      }
      if (uVar12 < 0x4000) {
        uVar12 = 0x4000;
      }
    }
    else {
      uVar12 = 0x3fffffff;
    }
    *(ulong *)(this + 0xb8) = lVar7 + (ulong)uVar4;
    *(uint *)(this + 0xc0) = uVar4;
    *(uint *)(this + 0xc4) = uVar12;
    *(undefined4 *)(this + 0xd4) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xcc) = 0;
  }
  lVar13 = *(long *)(this + 0x98);
  *(undefined8 *)(this + 0xe8) = 0;
  plVar1 = (long *)(lVar13 + 0x130);
  do {
    while( true ) {
      paVar17 = (accelerator_t *)*plVar1;
      if (paVar17 != (accelerator_t *)0x0) goto LAB_00103393;
      phVar9 = *(hb_face_t **)(lVar13 + 0x70);
      if (phVar9 == (hb_face_t *)0x0) goto LAB_001037c2;
      paVar17 = (accelerator_t *)calloc(1,0x218);
      if (paVar17 == (accelerator_t *)0x0) break;
      GDEF::accelerator_t::accelerator_t(paVar17,phVar9);
      LOCK();
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)paVar17;
      }
      UNLOCK();
      if (lVar7 == 0) goto LAB_00103393;
      if (paVar17 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)paVar17);
        if (*(int *)(paVar17 + 8) != 0) {
          free(*(void **)(paVar17 + 0x10));
        }
        free(paVar17);
      }
    }
    LOCK();
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar7 != 0);
LAB_001037c2:
  paVar17 = (accelerator_t *)&_hb_NullPool;
LAB_00103393:
  puVar14 = *(undefined **)paVar17;
  if (puVar14 == (undefined *)0x0) {
    puVar14 = &_hb_NullPool;
  }
  puVar18 = &_hb_NullPool;
  if (3 < *(uint *)(puVar14 + 0x18)) {
    puVar18 = *(undefined **)(puVar14 + 0x10);
  }
  *(undefined **)(this + 0xf0) = puVar18;
  lVar13 = *(long *)(this + 0x98);
  plVar1 = (long *)(lVar13 + 0x130);
  do {
    while( true ) {
      paVar17 = (accelerator_t *)*plVar1;
      if (paVar17 != (accelerator_t *)0x0) goto LAB_001033d1;
      phVar9 = *(hb_face_t **)(lVar13 + 0x70);
      if (phVar9 == (hb_face_t *)0x0) goto LAB_001037a4;
      paVar17 = (accelerator_t *)calloc(1,0x218);
      if (paVar17 == (accelerator_t *)0x0) break;
      GDEF::accelerator_t::accelerator_t(paVar17,phVar9);
      LOCK();
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)paVar17;
      }
      UNLOCK();
      if (lVar7 == 0) goto LAB_001033d1;
      if (paVar17 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)paVar17);
        if (*(int *)(paVar17 + 8) != 0) {
          free(*(void **)(paVar17 + 0x10));
        }
        free(paVar17);
      }
    }
    LOCK();
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar7 != 0);
LAB_001037a4:
  paVar17 = (accelerator_t *)&_hb_NullPool;
LAB_001033d1:
  psVar8 = *(short **)(this + 0xf0);
  *(accelerator_t **)(this + 0xf8) = paVar17;
  if (((*psVar8 == 0x100) && (0x10002 < (ushort)(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) + 0x10000)
      ) && (uVar4 = *(uint *)(psVar8 + 7), uVar4 != 0)) {
    puVar14 = (undefined *)
              ((long)psVar8 +
              (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18));
  }
  else {
    puVar14 = &_hb_NullPool;
  }
  iVar5 = *(int *)(this + 0x88);
  *(undefined **)(this + 0x100) = puVar14;
  if ((iVar5 == 1) && (*(int *)(*(long *)(this + 0x90) + 0x78) != 0)) {
    uVar4 = *(uint *)(puVar14 + 2);
    puVar18 = &_hb_NullPool;
    if (uVar4 != 0) {
      puVar18 = puVar14 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18);
    }
    uVar11 = *(ushort *)(puVar18 + 2) << 8 | *(ushort *)(puVar18 + 2) >> 8;
    puVar16 = (undefined4 *)malloc((ulong)uVar11 * 4);
    uVar6 = _LC3;
    if (puVar16 != (undefined4 *)0x0) {
      if (uVar11 != 0) {
        puVar20 = puVar16;
        do {
          *puVar20 = uVar6;
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar16 + (ulong)(uVar11 - 1) + 1);
      }
      goto LAB_0010340b;
    }
  }
  puVar16 = (undefined4 *)0x0;
LAB_0010340b:
  *(undefined4 **)(this + 0x108) = puVar16;
  uVar4 = *(uint *)(param_3 + 0x60);
  puVar19 = *(uint **)(param_3 + 0x70);
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x120) = 0;
  if (uVar4 != 0) {
    uVar21 = 0;
    puVar2 = puVar19 + (ulong)uVar4 * 5;
    puVar15 = puVar19;
    do {
      uVar4 = *puVar15;
      puVar15 = puVar15 + 5;
      uVar21 = uVar21 | 1L << ((byte)(uVar4 >> 4) & 0x3f);
    } while (puVar2 != puVar15);
    *(ulong *)(this + 0x110) = uVar21;
    uVar21 = 0;
    puVar15 = puVar19;
    do {
      uVar4 = *puVar15;
      puVar15 = puVar15 + 5;
      uVar21 = uVar21 | 1L << ((byte)uVar4 & 0x3f);
    } while (puVar2 != puVar15);
    *(ulong *)(this + 0x118) = uVar21;
    uVar21 = 0;
    do {
      uVar4 = *puVar19;
      puVar19 = puVar19 + 5;
      uVar21 = uVar21 | 1L << ((byte)(uVar4 >> 9) & 0x3f);
    } while (puVar2 != puVar19);
    *(ulong *)(this + 0x120) = uVar21;
  }
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_3 + 0x38);
  *(undefined8 *)(this + 300) = 0xffffffff00000001;
  *(undefined8 *)(this + 0x134) = 0x4000000000;
  hVar22 = (hb_ot_apply_context_t)0x0;
  if (**(short **)(this + 0xf0) == 0x100) {
    hVar22 = (hb_ot_apply_context_t)((*(short **)(this + 0xf0))[2] != 0);
  }
  this[0x13c] = hVar22;
  uVar3 = _LC4;
  hVar22 = (hb_ot_apply_context_t)(iVar5 == 1);
  *(undefined8 *)(this + 0x148) = 0xffffffff;
  *(hb_ot_apply_context_t **)(this + 0x10) = this;
  *(undefined4 *)(this + 0x13d) = 0x101;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  uVar6 = *(undefined4 *)(*(long *)(this + 0xa0) + 0x60);
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x20] = hVar22;
  this[0x21] = (hb_ot_apply_context_t)0x1;
  this[0x22] = hVar22;
  *(undefined2 *)(this + 0x23) = 0;
  *(hb_ot_apply_context_t **)(this + 0x50) = this;
  *(undefined4 *)(this + 0x80) = uVar6;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x60) = 0x101;
  this[0x62] = hVar22;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined2 *)(this + 99) = 0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  return;
}



/* OT::hb_kern_machine_t<hb_ot_shape_fallback_kern_driver_t>::kern(hb_font_t*, hb_buffer_t*,
   unsigned int, bool) const */

void __thiscall
OT::hb_kern_machine_t<hb_ot_shape_fallback_kern_driver_t>::kern
          (hb_kern_machine_t<hb_ot_shape_fallback_kern_driver_t> *this,hb_font_t *param_1,
          hb_buffer_t *param_2,uint param_3,bool param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  hb_blob_t *phVar14;
  ulong uVar15;
  code *pcVar16;
  undefined *puVar17;
  short sVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  short *psVar24;
  MarkGlyphSetsFormat1 *this_00;
  ushort uVar25;
  long lVar26;
  long lVar27;
  long in_FS_OFFSET;
  ulong *local_1d8;
  hb_ot_apply_context_t local_198 [8];
  uint local_190;
  hb_ot_apply_context_t *local_188;
  uint local_180;
  uint local_17c;
  char local_178;
  char local_177;
  undefined1 local_176 [2];
  char cStack_174;
  code *local_170;
  undefined1 local_168 [16];
  int local_158;
  hb_ot_apply_context_t *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined2 uStack_137;
  byte local_135;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128 [16];
  int local_118;
  int local_110;
  long local_f8;
  long local_c0;
  void *local_90;
  uint local_6c;
  undefined4 local_64;
  undefined1 local_5b;
  char local_5a;
  byte local_59;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar11 = hb_buffer_t::message(param_2,param_1,"start kern");
  if (cVar11 == '\0') goto LAB_00103bf8;
  if (((byte)param_2[0x18] & 0x40) != 0) {
    hb_buffer_t::_set_glyph_flags(param_2,2,0,0xffffffff,false,false);
  }
  phVar14 = (hb_blob_t *)hb_blob_get_empty();
  hb_ot_apply_context_t::hb_ot_apply_context_t(local_198,1,param_1,param_2,phVar14);
  local_50 = 0xffffffff;
  local_158 = *(int *)(local_f8 + 0x60);
  local_170 = (code *)0x0;
  local_168 = (undefined1  [16])0x0;
  if (local_110 == 1) {
    local_178 = '\x01';
    _local_176 = 1;
    _local_138 = 0x101;
LAB_00103c7d:
    _local_138 = CONCAT12(cVar11,_local_138);
    local_59 = 0;
  }
  else {
    local_178 = '\0';
    if (local_110 != 0) {
      cVar11 = '\0';
      _local_176 = 0;
      _local_138 = CONCAT11(1,local_5b);
      goto LAB_00103c7d;
    }
    _local_176 = (uint3)local_59 << 8;
    _local_138 = CONCAT21(1,local_5b);
  }
  local_177 = local_5a;
  local_128 = (undefined1  [16])0x0;
  local_130 = 0;
  local_13c = 0xffffffff;
  uVar3 = *(uint *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x60);
  uVar22 = 0;
  local_134 = 0;
  lVar6 = *(long *)(param_2 + 0x70);
  local_64 = 8;
  lVar7 = *(long *)(param_2 + 0x80);
  local_180 = 8;
  local_140 = 8;
  local_188 = local_198;
  local_17c = param_3;
  local_148 = local_198;
  local_135 = local_59;
  local_118 = local_158;
  local_6c = param_3;
  if (uVar4 != 0) {
    do {
      lVar27 = (ulong)uVar22 * 0x14;
      puVar1 = (undefined4 *)(lVar6 + lVar27);
      if ((param_3 & puVar1[1]) != 0) {
        lVar20 = *(long *)(local_188 + 0xa0);
        uVar12 = 0;
        local_158 = *(int *)(lVar20 + 0x60);
        if (*(uint *)(lVar20 + 0x5c) == uVar22) {
          uVar12 = *(undefined1 *)(*(long *)(lVar20 + 0x70) + 0xf + lVar27);
        }
        if (local_176[1] == '\0') {
          uVar12 = 0;
        }
        iVar23 = local_158 + -1;
        _local_176 = CONCAT12(uVar12,local_176);
        uVar15 = (ulong)uVar22;
        local_190 = uVar22;
LAB_00103a34:
        do {
          if (iVar23 <= (int)uVar15) break;
          local_190 = (int)uVar15 + 1;
          uVar15 = (ulong)local_190;
          puVar2 = (uint *)(*(long *)(*(long *)(local_188 + 0xa0) + 0x70) + uVar15 * 0x14);
          uVar25 = (ushort)puVar2[3];
          if ((local_180 & uVar25 & 0xe) == 0) {
            if ((uVar25 & 8) == 0) {
LAB_00103a7a:
              uVar25 = (ushort)puVar2[4];
              sVar18 = 0;
              if (((uVar25 & 0x20) != 0) && ((puVar2[3] & 0x10) == 0)) {
                if (local_178 == '\0') {
                  if ((uVar25 & 0x1f) == 1) {
                    sVar18 = 0;
                    if ((uVar25 & 0x200) != 0) goto LAB_00103ac0;
                    if (local_177 == '\0') goto LAB_00103dec;
                  }
                }
                else if ((local_177 == '\0') && ((uVar25 & 0x1f) == 1)) {
LAB_00103dec:
                  sVar18 = 0;
                  if ((uVar25 & 0x100) != 0) goto LAB_00103ac0;
                }
                if (local_176[0] == '\0') {
                  sVar18 = ((uVar25 >> 6 ^ 1) & 1) * 2;
                }
                else {
                  sVar18 = 2;
                }
              }
LAB_00103ac0:
              uVar25 = 0;
              if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
                uVar25 = *(ushort *)local_168._8_8_ << 8 | *(ushort *)local_168._8_8_ >> 8;
              }
              if (((puVar2[1] & local_17c) != 0) &&
                 ((cStack_174 == '\0' || (cStack_174 == *(char *)((long)puVar2 + 0xf))))) {
                if (local_170 == (code *)0x0) {
                  if (sVar18 != 0) goto LAB_00103ca8;
                }
                else {
                  cVar11 = (*local_170)(puVar2,uVar25,local_168._0_8_);
                  if (cVar11 == '\0') goto LAB_00103ca0;
                }
                uVar5 = local_190;
                if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
                  local_168._8_8_ = (ushort *)(local_168._8_8_ + 2);
                }
                lVar20 = (ulong)local_190 * 0x14;
                lVar8 = **(long **)this;
                lVar9 = *(long *)(lVar8 + 0x90);
                lVar26 = *(long *)(lVar9 + 0x10);
                if ((*(uint *)(*(long **)this + 1) & 0xfffffffe) == 4) {
                  pcVar16 = *(code **)(lVar9 + 0x78);
                  if (lVar26 != 0) {
                    lVar26 = *(long *)(lVar26 + 0x58);
                  }
                }
                else {
                  pcVar16 = *(code **)(lVar9 + 0x80);
                  if (lVar26 != 0) {
                    lVar26 = *(long *)(lVar26 + 0x60);
                  }
                }
                iVar23 = (*pcVar16)(lVar8,*(undefined8 *)(lVar8 + 0x98),*puVar1,
                                    *(undefined4 *)(lVar6 + (ulong)local_190 * 0x14),lVar26);
                uVar19 = local_190;
                if (iVar23 != 0) {
                  if ((uVar3 & 0xfffffffe) == 4) {
                    if (param_4) {
                      iVar23 = (int)((ulong)((long)(short)iVar23 * *(long *)(param_1 + 0x58) +
                                            0x8000) >> 0x10);
                    }
                    piVar21 = (int *)(lVar20 + lVar7);
                    if (this[8] == (hb_kern_machine_t<hb_ot_shape_fallback_kern_driver_t>)0x0) {
                      iVar13 = iVar23 - (iVar23 >> 1);
                      *(int *)(lVar7 + lVar27) = *(int *)(lVar7 + lVar27) + (iVar23 >> 1);
                      *piVar21 = *piVar21 + iVar13;
                      piVar21[2] = piVar21[2] + iVar13;
                    }
                    else {
                      piVar21[3] = iVar23;
                      *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
                    }
                  }
                  else {
                    if (param_4) {
                      iVar23 = (int)((ulong)((long)(short)iVar23 * *(long *)(param_1 + 0x60) +
                                            0x8000) >> 0x10);
                    }
                    lVar20 = lVar20 + lVar7;
                    if (this[8] == (hb_kern_machine_t<hb_ot_shape_fallback_kern_driver_t>)0x0) {
                      iVar13 = iVar23 - (iVar23 >> 1);
                      piVar21 = (int *)(lVar7 + 4 + lVar27);
                      *piVar21 = *piVar21 + (iVar23 >> 1);
                      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + iVar13;
                      *(int *)(lVar20 + 0xc) = *(int *)(lVar20 + 0xc) + iVar13;
                    }
                    else {
                      *(int *)(lVar20 + 8) = iVar23;
                      *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
                    }
                  }
                  hb_buffer_t::_set_glyph_flags(param_2,3,uVar22,uVar5 + 1,true,false);
                  uVar19 = local_190;
                }
                goto joined_r0x00103bb8;
              }
LAB_00103ca0:
              if (sVar18 == 0) break;
            }
            else {
              uVar5 = *puVar2;
              puVar10 = *(undefined8 **)(local_188 + 0xf8);
              if ((local_180 & 0x10) == 0) {
                cVar11 = (char)(local_180 >> 8);
                if ((cVar11 == '\0') || (cVar11 == (char)(uVar25 >> 8))) goto LAB_00103a7a;
                goto LAB_00103a34;
              }
              uVar19 = local_180 >> 0x10;
              local_1d8 = (ulong *)&_hb_NullPool;
              if (uVar19 < *(uint *)((long)puVar10 + 0xc)) {
                local_1d8 = (ulong *)(puVar10[2] + (ulong)uVar19 * 0x18);
              }
              if ((((1L << ((byte)(uVar5 >> 4) & 0x3f) & *local_1d8) == 0) ||
                  ((1L << ((byte)uVar5 & 0x3f) & local_1d8[1]) == 0)) ||
                 ((1L << ((byte)(uVar5 >> 9) & 0x3f) & local_1d8[2]) == 0)) goto LAB_00103a34;
              puVar17 = (undefined *)*puVar10;
              if (puVar17 == (undefined *)0x0) {
                puVar17 = &_hb_NullPool;
              }
              psVar24 = (short *)&_hb_NullPool;
              if (3 < *(uint *)(puVar17 + 0x18)) {
                psVar24 = *(short **)(puVar17 + 0x10);
              }
              if (((*psVar24 == 0x100) &&
                  (0x10001 < (ushort)(psVar24[1] << 8 | (ushort)psVar24[1] >> 8) + 0x10000)) &&
                 (uVar25 = psVar24[6], uVar25 != 0)) {
                this_00 = (MarkGlyphSetsFormat1 *)
                          ((long)psVar24 + (ulong)(ushort)(uVar25 << 8 | uVar25 >> 8));
              }
              else {
                this_00 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
              }
              if ((*(short *)this_00 == 0x100) &&
                 (cVar11 = MarkGlyphSetsFormat1::covers(this_00,uVar19,uVar5), cVar11 != '\0'))
              goto LAB_00103a7a;
            }
LAB_00103ca8:
            uVar15 = (ulong)local_190;
          }
        } while( true );
      }
      uVar19 = uVar22 + 1;
joined_r0x00103bb8:
      uVar22 = uVar19;
    } while (uVar22 < uVar4);
  }
  hb_buffer_t::message(param_2,param_1,"end kern");
  free(local_90);
  if (local_c0 != 0) {
    hb_blob_destroy();
  }
LAB_00103bf8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */

void __thiscall
OT::hb_ot_apply_context_t::hb_ot_apply_context_t
          (hb_ot_apply_context_t *this,uint param_1,hb_font_t *param_2,hb_buffer_t *param_3,
          hb_blob_t *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::GDEF::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


