
/* compare_combining_class(hb_glyph_info_t const*, hb_glyph_info_t const*) */

ulong compare_combining_class(hb_glyph_info_t *param_1,hb_glyph_info_t *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  
  bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x10) >> 8);
  if ((0x1c00U >> ((byte)*(undefined2 *)(param_1 + 0x10) & 0x1f) & 1) == 0) {
    bVar1 = 0;
  }
  if ((0x1c00U >> (*(ushort *)(param_2 + 0x10) & 0x1f) & 1) == 0) {
    uVar2 = (ulong)(bVar1 != 0);
  }
  else {
    bVar3 = (byte)(*(ushort *)(param_2 + 0x10) >> 8);
    uVar2 = 0xffffffff;
    if (bVar3 <= bVar1) {
      uVar2 = (ulong)(bVar3 != bVar1);
    }
  }
  return uVar2;
}



/* decompose(hb_ot_shape_normalize_context_t const*, bool, unsigned int) */

int decompose(hb_ot_shape_normalize_context_t *param_1,bool param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  hb_buffer_t *phVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  undefined8 *puVar14;
  uint uVar15;
  hb_glyph_info_t *phVar16;
  long lVar17;
  long in_FS_OFFSET;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  phVar5 = *(hb_buffer_t **)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  cVar9 = (**(code **)(param_1 + 0x20))(param_1,param_3,&local_40,&local_3c);
  if (cVar9 == '\0') {
LAB_00100560:
    iVar11 = 0;
  }
  else {
    lVar12 = *(long *)(lVar6 + 0x90);
    lVar17 = *(long *)(lVar12 + 0x10);
    if (local_3c != 0) {
      local_34 = 0;
      if (lVar17 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10);
      }
      iVar10 = (**(code **)(lVar12 + 0x30))
                         (lVar6,*(undefined8 *)(lVar6 + 0x98),local_3c,&local_34,lVar17);
      if (iVar10 == 0) goto LAB_00100560;
      lVar12 = *(long *)(lVar6 + 0x90);
    }
    lVar17 = *(long *)(lVar12 + 0x10);
    local_38 = 0;
    if (lVar17 != 0) {
      lVar17 = *(long *)(lVar17 + 0x10);
    }
    iVar10 = (**(code **)(lVar12 + 0x30))
                       (lVar6,*(undefined8 *)(lVar6 + 0x98),local_40,&local_38,lVar17);
    uVar3 = local_40;
    uVar15 = (uint)phVar5;
    if ((iVar10 == 0) || (!param_2)) {
      iVar11 = decompose(param_1,param_2,local_40);
      iVar4 = local_3c;
      uVar3 = local_40;
      if (iVar11 != 0) {
        if (local_3c != 0) {
          *(undefined4 *)(*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14 + 0xc) =
               local_34;
          cVar9 = hb_buffer_t::make_room_for(uVar15,0);
          if (cVar9 == '\0') {
            iVar10 = *(int *)(phVar5 + 100);
          }
          else {
            puVar7 = *(undefined8 **)(phVar5 + 0x78);
            uVar3 = *(uint *)(phVar5 + 100);
            if (*(uint *)(phVar5 + 0x5c) < *(uint *)(phVar5 + 0x60)) {
              puVar14 = (undefined8 *)
                        (*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14);
            }
            else {
              puVar14 = puVar7;
              if (uVar3 != 0) {
                puVar14 = (undefined8 *)((long)puVar7 + (ulong)(uVar3 - 1) * 0x14);
              }
            }
            uVar8 = puVar14[1];
            piVar13 = (int *)((long)puVar7 + (ulong)uVar3 * 0x14);
            *(undefined8 *)piVar13 = *puVar14;
            *(undefined8 *)(piVar13 + 2) = uVar8;
            iVar10 = *(int *)(puVar14 + 2);
            *piVar13 = iVar4;
            piVar13[4] = iVar10;
            iVar10 = *(int *)(phVar5 + 100) + 1;
            *(int *)(phVar5 + 100) = iVar10;
          }
          phVar16 = *(hb_glyph_info_t **)(phVar5 + 0x78);
          if (iVar10 != 0) {
            phVar16 = phVar16 + (ulong)(iVar10 - 1) * 0x14;
          }
          iVar11 = iVar11 + 1;
          _hb_glyph_info_set_unicode_props(phVar16,phVar5);
        }
        goto LAB_00100562;
      }
      if (iVar10 == 0) goto LAB_00100560;
      *(undefined4 *)(*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14 + 0xc) =
           local_38;
      cVar9 = hb_buffer_t::make_room_for(uVar15,0);
      if (cVar9 == '\0') {
        iVar10 = *(int *)(phVar5 + 100);
      }
      else {
        puVar7 = *(undefined8 **)(phVar5 + 0x78);
        uVar2 = *(uint *)(phVar5 + 100);
        if (*(uint *)(phVar5 + 0x5c) < *(uint *)(phVar5 + 0x60)) {
          puVar14 = (undefined8 *)
                    (*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14);
        }
        else {
          puVar14 = puVar7;
          if (uVar2 != 0) {
            puVar14 = (undefined8 *)((long)puVar7 + (ulong)(uVar2 - 1) * 0x14);
          }
        }
        uVar8 = puVar14[1];
        puVar1 = (uint *)((long)puVar7 + (ulong)uVar2 * 0x14);
        *(undefined8 *)puVar1 = *puVar14;
        *(undefined8 *)(puVar1 + 2) = uVar8;
        uVar2 = *(uint *)(puVar14 + 2);
        *puVar1 = uVar3;
        puVar1[4] = uVar2;
        iVar10 = *(int *)(phVar5 + 100) + 1;
        *(int *)(phVar5 + 100) = iVar10;
      }
      phVar16 = *(hb_glyph_info_t **)(phVar5 + 0x78);
      if (iVar10 != 0) {
        phVar16 = phVar16 + (ulong)(iVar10 - 1) * 0x14;
      }
      _hb_glyph_info_set_unicode_props(phVar16,phVar5);
      iVar10 = local_3c;
      if (local_3c != 0) {
        *(undefined4 *)(*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14 + 0xc) =
             local_34;
        cVar9 = hb_buffer_t::make_room_for(uVar15,0);
        if (cVar9 == '\0') goto LAB_00100760;
        puVar7 = *(undefined8 **)(phVar5 + 0x78);
        uVar3 = *(uint *)(phVar5 + 100);
        if (*(uint *)(phVar5 + 0x5c) < *(uint *)(phVar5 + 0x60)) {
          puVar14 = (undefined8 *)
                    (*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14);
        }
        else {
          puVar14 = puVar7;
          if (uVar3 != 0) {
            puVar14 = (undefined8 *)((long)puVar7 + (ulong)(uVar3 - 1) * 0x14);
          }
        }
        uVar8 = puVar14[1];
        piVar13 = (int *)((long)puVar7 + (ulong)uVar3 * 0x14);
        *(undefined8 *)piVar13 = *puVar14;
        *(undefined8 *)(piVar13 + 2) = uVar8;
        goto LAB_00100503;
      }
    }
    else {
      *(undefined4 *)(*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14 + 0xc) =
           local_38;
      cVar9 = hb_buffer_t::make_room_for(uVar15,0);
      if (cVar9 == '\0') {
        iVar10 = *(int *)(phVar5 + 100);
      }
      else {
        puVar7 = *(undefined8 **)(phVar5 + 0x78);
        uVar2 = *(uint *)(phVar5 + 100);
        if (*(uint *)(phVar5 + 0x5c) < *(uint *)(phVar5 + 0x60)) {
          puVar14 = (undefined8 *)
                    (*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14);
        }
        else {
          puVar14 = puVar7;
          if (uVar2 != 0) {
            puVar14 = (undefined8 *)((long)puVar7 + (ulong)(uVar2 - 1) * 0x14);
          }
        }
        uVar8 = puVar14[1];
        puVar1 = (uint *)((long)puVar7 + (ulong)uVar2 * 0x14);
        *(undefined8 *)puVar1 = *puVar14;
        *(undefined8 *)(puVar1 + 2) = uVar8;
        uVar2 = *(uint *)(puVar14 + 2);
        *puVar1 = uVar3;
        puVar1[4] = uVar2;
        iVar10 = *(int *)(phVar5 + 100) + 1;
        *(int *)(phVar5 + 100) = iVar10;
      }
      phVar16 = *(hb_glyph_info_t **)(phVar5 + 0x78);
      if (iVar10 != 0) {
        phVar16 = phVar16 + (ulong)(iVar10 - 1) * 0x14;
      }
      _hb_glyph_info_set_unicode_props(phVar16,phVar5);
      iVar10 = local_3c;
      if (local_3c != 0) {
        *(undefined4 *)(*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14 + 0xc) =
             local_34;
        cVar9 = hb_buffer_t::make_room_for(uVar15,0);
        if (cVar9 == '\0') {
LAB_00100760:
          iVar10 = *(int *)(phVar5 + 100);
        }
        else {
          puVar7 = *(undefined8 **)(phVar5 + 0x78);
          uVar3 = *(uint *)(phVar5 + 100);
          if (*(uint *)(phVar5 + 0x5c) < *(uint *)(phVar5 + 0x60)) {
            puVar14 = (undefined8 *)
                      (*(long *)(phVar5 + 0x70) + (ulong)*(uint *)(phVar5 + 0x5c) * 0x14);
          }
          else {
            puVar14 = puVar7;
            if (uVar3 != 0) {
              puVar14 = (undefined8 *)((long)puVar7 + (ulong)(uVar3 - 1) * 0x14);
            }
          }
          uVar8 = puVar14[1];
          piVar13 = (int *)((long)puVar7 + (ulong)uVar3 * 0x14);
          *(undefined8 *)piVar13 = *puVar14;
          *(undefined8 *)(piVar13 + 2) = uVar8;
LAB_00100503:
          iVar4 = *(int *)(puVar14 + 2);
          *piVar13 = iVar10;
          piVar13[4] = iVar4;
          iVar10 = *(int *)(phVar5 + 100) + 1;
          *(int *)(phVar5 + 100) = iVar10;
        }
        phVar16 = *(hb_glyph_info_t **)(phVar5 + 0x78);
        if (iVar10 != 0) {
          phVar16 = phVar16 + (ulong)(iVar10 - 1) * 0x14;
        }
        iVar11 = 2;
        _hb_glyph_info_set_unicode_props(phVar16,phVar5);
        goto LAB_00100562;
      }
    }
    iVar11 = 1;
  }
LAB_00100562:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* decompose_current_character(hb_ot_shape_normalize_context_t const*, bool) */

void decompose_current_character(hb_ot_shape_normalize_context_t *param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  long local_30;
  
  lVar4 = *(long *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14);
  local_38 = 0;
  uVar11 = (uint)lVar4;
  if (param_2) {
    local_38 = *(undefined4 *)(lVar4 + 0x28);
    lVar10 = *(long *)(param_1 + 0x10);
    lVar12 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x10);
    }
    iVar7 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                      (lVar10,*(undefined8 *)(lVar10 + 0x98),uVar3,&local_38,lVar12);
    if (iVar7 == 0) {
      iVar7 = decompose(param_1,true,uVar3);
      if (iVar7 != 0) goto LAB_001009f0;
LAB_00100875:
      uVar9 = (ulong)*(uint *)(lVar4 + 0x5c);
      lVar10 = *(long *)(lVar4 + 0x70);
      if ((*(ushort *)(lVar10 + 0x10 + uVar9 * 0x14) & 0x1f) == 0x1d) {
        if (uVar3 < 0x2060) {
          if (uVar3 < 0x2000) {
            if ((uVar3 & 0xffffff7f) != 0x20) goto LAB_001008a6;
            iVar7 = 0x12;
          }
          else {
            switch(uVar3) {
            case 0x2000:
            case 0x2002:
              iVar7 = 2;
              break;
            case 0x2001:
            case 0x2003:
              goto switchD_00100a79_caseD_2001;
            case 0x2004:
              iVar7 = 3;
              break;
            case 0x2005:
              iVar7 = 4;
              break;
            case 0x2006:
              iVar7 = 6;
              break;
            case 0x2007:
              iVar7 = 0x13;
              break;
            case 0x2008:
              iVar7 = 0x14;
              break;
            case 0x2009:
              iVar7 = 5;
              break;
            case 0x200a:
              iVar7 = 0x10;
              break;
            default:
              goto switchD_00100a79_caseD_200b;
            case 0x202f:
              iVar7 = 0x15;
              break;
            case 0x205f:
              iVar7 = 0x11;
            }
          }
LAB_00100b68:
          lVar10 = *(long *)(param_1 + 0x10);
          local_34 = 0;
          lVar12 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
          if (lVar12 != 0) {
            lVar12 = *(long *)(lVar12 + 0x10);
          }
          iVar8 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                            (lVar10,*(undefined8 *)(lVar10 + 0x98),0x20,&local_34,lVar12);
          if ((iVar8 == 0) && (local_34 = *(int *)(lVar4 + 0x24), local_34 == 0))
          goto switchD_00100a79_caseD_200b;
          lVar10 = *(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14;
          if ((*(ushort *)(lVar10 + 0x10) & 0x1f) == 0x1d) {
            *(ushort *)(lVar10 + 0x10) = (ushort)(iVar7 << 8) | *(ushort *)(lVar10 + 0x10) & 0xff;
            lVar10 = *(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14;
          }
          *(int *)(lVar10 + 0xc) = local_34;
          if (*(char *)(lVar4 + 0x5a) == '\0') {
            iVar7 = *(int *)(lVar4 + 0x5c);
LAB_00100c03:
            *(int *)(lVar4 + 0x5c) = iVar7 + 1;
          }
          else {
            if ((*(long *)(lVar4 + 0x78) == *(long *)(lVar4 + 0x70)) &&
               (iVar7 = *(int *)(lVar4 + 0x5c), iVar8 = iVar7, *(int *)(lVar4 + 100) == iVar7)) {
LAB_00100d9d:
              *(int *)(lVar4 + 100) = iVar8 + 1;
              goto LAB_00100c03;
            }
            cVar6 = hb_buffer_t::make_room_for(uVar11,1);
            if (cVar6 != '\0') {
              puVar1 = (undefined8 *)
                       (*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14);
              uVar5 = puVar1[1];
              puVar2 = (undefined8 *)
                       (*(long *)(lVar4 + 0x78) + (ulong)*(uint *)(lVar4 + 100) * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
              iVar7 = *(int *)(lVar4 + 0x5c);
              iVar8 = *(int *)(lVar4 + 100);
              goto LAB_00100d9d;
            }
          }
          *(uint *)(lVar4 + 0xc0) = *(uint *)(lVar4 + 0xc0) | 4;
          goto LAB_001009f4;
        }
        if (uVar3 == 0x3000) {
switchD_00100a79_caseD_2001:
          iVar7 = 1;
          goto LAB_00100b68;
        }
      }
      else {
switchD_00100a79_caseD_200b:
        if (uVar3 == 0x2011) {
          lVar10 = *(long *)(param_1 + 0x10);
          local_34 = 0;
          lVar12 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
          if (lVar12 != 0) {
            lVar12 = *(long *)(lVar12 + 0x10);
          }
          iVar7 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                            (lVar10,*(undefined8 *)(lVar10 + 0x98),0x2010,&local_34,lVar12);
          uVar9 = (ulong)*(uint *)(lVar4 + 0x5c);
          if (iVar7 != 0) {
            *(int *)(*(long *)(lVar4 + 0x70) + uVar9 * 0x14 + 0xc) = local_34;
            if (*(char *)(lVar4 + 0x5a) != '\0') {
              if ((*(long *)(lVar4 + 0x78) != *(long *)(lVar4 + 0x70)) ||
                 (iVar7 = *(int *)(lVar4 + 0x5c), iVar8 = iVar7, *(int *)(lVar4 + 100) != iVar7)) {
                cVar6 = hb_buffer_t::make_room_for(uVar11,1);
                if (cVar6 == '\0') goto LAB_001009f4;
                puVar1 = (undefined8 *)
                         (*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)
                         (*(long *)(lVar4 + 0x78) + (ulong)*(uint *)(lVar4 + 100) * 0x14);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
                iVar7 = *(int *)(lVar4 + 100);
                iVar8 = *(int *)(lVar4 + 0x5c);
              }
              goto LAB_00100914;
            }
            goto LAB_00100a18;
          }
          lVar10 = *(long *)(lVar4 + 0x70);
        }
        else {
          uVar9 = (ulong)*(uint *)(lVar4 + 0x5c);
          lVar10 = *(long *)(lVar4 + 0x70);
        }
      }
LAB_001008a6:
      *(undefined4 *)(lVar10 + 0xc + uVar9 * 0x14) = local_38;
      if (*(char *)(lVar4 + 0x5a) != '\0') {
        if ((*(long *)(lVar4 + 0x78) != *(long *)(lVar4 + 0x70)) ||
           (iVar7 = *(int *)(lVar4 + 0x5c), iVar8 = iVar7, *(int *)(lVar4 + 100) != iVar7)) {
          cVar6 = hb_buffer_t::make_room_for(uVar11,1);
          if (cVar6 == '\0') goto LAB_001009f4;
          puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x78) + (ulong)*(uint *)(lVar4 + 100) * 0x14);
          puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14);
          uVar5 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
          iVar7 = *(int *)(lVar4 + 100);
          iVar8 = *(int *)(lVar4 + 0x5c);
        }
        goto LAB_00100914;
      }
    }
    else {
      *(undefined4 *)(*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14 + 0xc) =
           local_38;
      if (*(char *)(lVar4 + 0x5a) != '\0') {
        if ((*(long *)(lVar4 + 0x78) != *(long *)(lVar4 + 0x70)) ||
           (iVar7 = *(int *)(lVar4 + 0x5c), iVar8 = iVar7, *(int *)(lVar4 + 100) != iVar7)) {
          cVar6 = hb_buffer_t::make_room_for(uVar11,1);
          if (cVar6 == '\0') goto LAB_001009f4;
          puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x78) + (ulong)*(uint *)(lVar4 + 100) * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
          iVar7 = *(int *)(lVar4 + 100);
          iVar8 = *(int *)(lVar4 + 0x5c);
        }
        goto LAB_00100914;
      }
    }
LAB_00100a18:
    iVar8 = *(int *)(lVar4 + 0x5c);
  }
  else {
    iVar7 = decompose(param_1,false,uVar3);
    if (iVar7 != 0) {
LAB_001009f0:
      *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1;
      goto LAB_001009f4;
    }
    local_38 = *(undefined4 *)(lVar4 + 0x28);
    lVar10 = *(long *)(param_1 + 0x10);
    lVar12 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x10);
    }
    iVar7 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                      (lVar10,*(undefined8 *)(lVar10 + 0x98),uVar3,&local_38,lVar12);
    if (iVar7 == 0) goto LAB_00100875;
    *(undefined4 *)(*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14 + 0xc) =
         local_38;
    if (*(char *)(lVar4 + 0x5a) == '\0') goto LAB_00100a18;
    if ((*(long *)(lVar4 + 0x78) != *(long *)(lVar4 + 0x70)) ||
       (iVar7 = *(int *)(lVar4 + 0x5c), iVar8 = iVar7, *(int *)(lVar4 + 100) != iVar7)) {
      cVar6 = hb_buffer_t::make_room_for(uVar11,1);
      if (cVar6 == '\0') goto LAB_001009f4;
      puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x70) + (ulong)*(uint *)(lVar4 + 0x5c) * 0x14);
      uVar5 = puVar2[1];
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x78) + (ulong)*(uint *)(lVar4 + 100) * 0x14);
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
      iVar7 = *(int *)(lVar4 + 100);
      iVar8 = *(int *)(lVar4 + 0x5c);
    }
LAB_00100914:
    *(int *)(lVar4 + 100) = iVar7 + 1;
  }
  *(int *)(lVar4 + 0x5c) = iVar8 + 1;
LAB_001009f4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_ot_shape_normalize_context_t::decompose_unicode(hb_ot_shape_normalize_context_t const*,
   unsigned int, unsigned int*, unsigned int*) */

bool hb_ot_shape_normalize_context_t::decompose_unicode
               (hb_ot_shape_normalize_context_t *param_1,uint param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
  return iVar2 != 0;
}



/* hb_ot_shape_normalize_context_t::compose_unicode(hb_ot_shape_normalize_context_t const*, unsigned
   int, unsigned int, unsigned int*) */

bool hb_ot_shape_normalize_context_t::compose_unicode
               (hb_ot_shape_normalize_context_t *param_1,uint param_2,uint param_3,uint *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0x40))(lVar1);
    return iVar2 != 0;
  }
  return false;
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


