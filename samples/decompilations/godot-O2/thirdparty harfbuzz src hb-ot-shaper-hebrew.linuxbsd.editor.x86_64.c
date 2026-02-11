
/* reorder_marks_hebrew(hb_ot_shape_plan_t const*, hb_buffer_t*, unsigned int, unsigned int) */

void reorder_marks_hebrew
               (hb_ot_shape_plan_t *param_1,hb_buffer_t *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar10;
  uint uVar9;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long in_FS_OFFSET;
  
  uVar11 = param_3 + 2;
  lVar4 = *(long *)(param_2 + 0x70);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar11 < param_4) {
    puVar12 = (undefined8 *)(lVar4 + (ulong)uVar11 * 0x14);
    do {
      uVar13 = 0xffffffec;
      uVar2 = *(ushort *)(lVar4 + 0x10 + (ulong)(uVar11 - 2) * 0x14);
      if ((0x1c00U >> (uVar2 & 0x1f) & 1) != 0) {
        uVar13 = (byte)(uVar2 >> 8) - 0x14;
      }
      puVar1 = (undefined8 *)(lVar4 + (ulong)(uVar11 - 1) * 0x14);
      uVar9 = (uint)(byte)((ushort)*(undefined2 *)(puVar1 + 2) >> 8);
      if ((0x1c00U >> ((byte)*(undefined2 *)(puVar1 + 2) & 0x1f) & 1) == 0) {
        uVar9 = 0;
      }
      cVar10 = (char)((ushort)*(undefined2 *)(puVar12 + 2) >> 8);
      if ((0x1c00U >> ((byte)*(undefined2 *)(puVar12 + 2) & 0x1f) & 1) == 0) {
        cVar10 = '\0';
      }
      if (((uVar13 < 2) && (uVar9 - 0x16 < 2)) && ((cVar10 == '\x19' || (cVar10 == -0x24)))) {
        hb_buffer_t::merge_clusters_impl((uint)param_2,uVar11 - 1);
        uVar6 = puVar12[1];
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar3 = *(undefined4 *)(puVar1 + 2);
        *puVar1 = *puVar12;
        puVar1[1] = uVar6;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar12 + 2);
        *(undefined4 *)(puVar12 + 2) = uVar3;
        *puVar12 = uVar7;
        puVar12[1] = uVar8;
        break;
      }
      uVar11 = uVar11 + 1;
      puVar12 = (undefined8 *)((long)puVar12 + 0x14);
    } while (uVar11 < param_4);
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* compose_hebrew(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int, unsigned int*)
    */

uint compose_hebrew(hb_ot_shape_normalize_context_t *param_1,uint param_2,uint param_3,uint *param_4
                   )

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if (((param_2 == 0) || (param_3 == 0)) || (iVar3 = (**(code **)(lVar1 + 0x40))(lVar1), iVar3 == 0)
     ) {
    if (*(long *)param_1 == 0) {
      return 0;
    }
    bVar2 = *(byte *)(*(long *)param_1 + 0xa8) >> 4;
    uVar4 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      return 0;
    }
    switch(param_3) {
    case 0x5b4:
      if (param_2 != 0x5d9) {
        return uVar4;
      }
      *param_4 = 0xfb1d;
      break;
    default:
      goto switchD_001001c1_caseD_5b5;
    case 0x5b7:
      if (param_2 == 0x5f2) {
        *param_4 = 0xfb1f;
      }
      else {
        if (param_2 != 0x5d0) {
          return uVar4;
        }
        *param_4 = 0xfb2e;
      }
      break;
    case 0x5b8:
      if (param_2 != 0x5d0) {
        return uVar4;
      }
      *param_4 = 0xfb2f;
      break;
    case 0x5b9:
      if (param_2 != 0x5d5) {
        return uVar4;
      }
      *param_4 = 0xfb4b;
      break;
    case 0x5bc:
      if (param_2 - 0x5d0 < 0x1b) {
        uVar4 = *(uint *)(compose_hebrew(hb_ot_shape_normalize_context_t_const*,unsigned_int,unsigned_int,unsigned_int*)
                          ::sDageshForms + (ulong)(param_2 - 0x5d0) * 4);
        *param_4 = uVar4;
        return CONCAT31((int3)(uVar4 >> 8),uVar4 != 0);
      }
      if (param_2 == 0xfb2a) {
LAB_00100218:
        *param_4 = 0xfb2c;
      }
      else {
        if (param_2 != 0xfb2b) {
          return uVar4;
        }
LAB_001001ec:
        *param_4 = 0xfb2d;
      }
      break;
    case 0x5bf:
      if (param_2 == 0x5db) {
        *param_4 = 0xfb4d;
      }
      else if (param_2 == 0x5e4) {
        *param_4 = 0xfb4e;
      }
      else {
        if (param_2 != 0x5d1) {
          return uVar4;
        }
        *param_4 = 0xfb4c;
      }
      break;
    case 0x5c1:
      if (param_2 != 0x5e9) {
        if (param_2 != 0xfb49) {
          return uVar4;
        }
        goto LAB_00100218;
      }
      *param_4 = 0xfb2a;
      break;
    case 0x5c2:
      if (param_2 != 0x5e9) {
        if (param_2 != 0xfb49) {
          return uVar4;
        }
        goto LAB_001001ec;
      }
      *param_4 = 0xfb2b;
    }
  }
  uVar4 = 1;
switchD_001001c1_caseD_5b5:
  return uVar4;
}


