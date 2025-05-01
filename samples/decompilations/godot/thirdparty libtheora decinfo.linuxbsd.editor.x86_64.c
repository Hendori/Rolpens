
ulong oc_unpack_length(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  ulong local_48 [4];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_48;
  do {
    puVar3 = puVar2 + 1;
    uVar1 = oc_pack_read_c(param_1,8);
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != &local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48[1] << 8 | local_48[2] << 0x10 | local_48[0] | local_48[3] << 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint th_decode_headerin(byte *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined1 *puVar10;
  void *pvVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  long *plVar16;
  long in_FS_OFFSET;
  undefined1 local_68 [34];
  undefined1 local_46 [6];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) goto LAB_001003d0;
  if (param_1 == (byte *)0x0) goto LAB_0010066f;
  oc_pack_readinit(local_68,*param_4,param_4[1]);
  uVar3 = oc_pack_read_c(local_68,8);
  uVar4 = uVar3 & 0x80;
  if ((uVar3 & 0x80) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      if (param_2 == (long *)0x0) {
LAB_0010066f:
        uVar4 = 0xffffffff;
      }
      else {
        if (param_2[3] != 0) {
          if (param_3 == (long *)0x0) goto LAB_0010066f;
          if (*param_3 != 0) goto LAB_00100127;
        }
LAB_001003d0:
        uVar4 = 0xffffffec;
      }
      goto LAB_00100127;
    }
  }
  else {
    plVar15 = (long *)local_46;
    do {
      plVar16 = (long *)((long)plVar15 + 1);
      uVar1 = oc_pack_read_c(local_68,8);
      *(undefined1 *)plVar15 = uVar1;
      plVar15 = plVar16;
    } while (plVar16 != local_40);
    if ((local_46._0_4_ == 0x6f656874) && (local_46._4_2_ == 0x6172)) {
      if (uVar3 != 0x81) {
        if (uVar3 != 0x82) {
          if (((uVar3 == 0x80) && (param_4[2] != 0)) && (*(int *)(param_1 + 4) == 0)) {
            bVar2 = oc_pack_read_c(local_68,8);
            *param_1 = bVar2;
            bVar2 = oc_pack_read_c(local_68,8);
            param_1[1] = bVar2;
            bVar2 = oc_pack_read_c(local_68,8);
            param_1[2] = bVar2;
            if ((*param_1 < 4) && ((*param_1 != 3 || (param_1[1] < 3)))) {
              iVar5 = oc_pack_read_c(local_68,0x10);
              *(int *)(param_1 + 4) = iVar5 << 4;
              iVar5 = oc_pack_read_c(local_68,0x10);
              *(int *)(param_1 + 8) = iVar5 << 4;
              uVar6 = oc_pack_read_c(local_68,0x18);
              *(undefined4 *)(param_1 + 0xc) = uVar6;
              uVar6 = oc_pack_read_c(local_68,0x18);
              *(undefined4 *)(param_1 + 0x10) = uVar6;
              uVar6 = oc_pack_read_c(local_68,8);
              *(undefined4 *)(param_1 + 0x14) = uVar6;
              uVar6 = oc_pack_read_c(local_68,8);
              *(undefined4 *)(param_1 + 0x18) = uVar6;
              uVar6 = oc_pack_read_c(local_68,0x20);
              *(undefined4 *)(param_1 + 0x1c) = uVar6;
              iVar5 = oc_pack_read_c(local_68,0x20);
              *(int *)(param_1 + 0x20) = iVar5;
              if (((*(uint *)(param_1 + 4) != 0) && (uVar3 = *(uint *)(param_1 + 8), uVar3 != 0)) &&
                 (((uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc)) <=
                   *(uint *)(param_1 + 4) &&
                  ((((uint)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10)) <= uVar3 &&
                    (*(int *)(param_1 + 0x1c) != 0)) && (iVar5 != 0)))))) {
                *(uint *)(param_1 + 0x18) =
                     uVar3 - (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10));
                uVar6 = oc_pack_read_c(local_68,0x18);
                *(undefined4 *)(param_1 + 0x24) = uVar6;
                uVar6 = oc_pack_read_c(local_68,0x18);
                *(undefined4 *)(param_1 + 0x28) = uVar6;
                uVar6 = oc_pack_read_c(local_68,8);
                *(undefined4 *)(param_1 + 0x2c) = uVar6;
                uVar6 = oc_pack_read_c(local_68,0x18);
                *(undefined4 *)(param_1 + 0x34) = uVar6;
                uVar6 = oc_pack_read_c(local_68,6);
                *(undefined4 *)(param_1 + 0x38) = uVar6;
                uVar6 = oc_pack_read_c(local_68,5);
                *(undefined4 *)(param_1 + 0x3c) = uVar6;
                iVar5 = oc_pack_read_c(local_68,2);
                *(int *)(param_1 + 0x30) = iVar5;
                if (((iVar5 != 1) && (lVar7 = oc_pack_read_c(local_68,3), lVar7 == 0)) &&
                   (lVar7 = oc_pack_bytes_left(local_68), -1 < lVar7)) {
                  uVar4 = 3;
                  goto LAB_00100127;
                }
              }
              uVar4 = 0xffffffec;
            }
            else {
              uVar4 = 0xffffffea;
            }
            th_info_clear(param_1);
            goto LAB_00100127;
          }
          goto LAB_001003d0;
        }
        if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
          if ((*(int *)(param_1 + 4) == 0) || ((param_2[3] == 0 || (*param_3 != 0))))
          goto LAB_001003d0;
          pvVar8 = calloc(1,0x450);
          if (pvVar8 != (void *)0x0) {
            uVar4 = oc_quant_params_unpack(local_68,(long)pvVar8 + 0x280);
            if (((int)uVar4 < 0) || (uVar4 = oc_huff_trees_unpack(local_68,pvVar8), (int)uVar4 < 0))
            {
              oc_quant_params_clear((long)pvVar8 + 0x280);
              oc_huff_trees_clear(pvVar8);
              free(pvVar8);
            }
            else {
              *param_3 = (long)pvVar8;
              uVar4 = 1;
            }
            goto LAB_00100127;
          }
        }
        goto LAB_0010066f;
      }
      if (param_2 == (long *)0x0) goto LAB_0010066f;
      if ((*(int *)(param_1 + 4) == 0) || (param_2[3] != 0)) goto LAB_001003d0;
      lVar7 = oc_unpack_length(local_68);
      if ((lVar7 < 0) || (lVar9 = oc_pack_bytes_left(local_68), lVar9 < lVar7)) {
LAB_00100634:
        uVar4 = 0xffffffec;
      }
      else {
        puVar10 = (undefined1 *)malloc(lVar7 + 1);
        param_2[3] = (long)puVar10;
        if (puVar10 != (undefined1 *)0x0) {
          if (lVar7 != 0) {
            puVar13 = puVar10;
            do {
              puVar14 = puVar13 + 1;
              uVar1 = oc_pack_read_c(local_68,8);
              *puVar13 = uVar1;
              puVar13 = puVar14;
            } while (puVar14 != puVar10 + lVar7);
            puVar10 = (undefined1 *)param_2[3];
          }
          puVar10[lVar7] = 0;
          iVar5 = oc_unpack_length(local_68);
          *(int *)(param_2 + 2) = iVar5;
          if (((ulong)(long)iVar5 >> 0x3d == 0) &&
             (lVar9 = oc_pack_bytes_left(local_68), lVar7 = (long)iVar5 * 4,
             lVar7 - lVar9 == 0 || lVar7 < lVar9)) {
            iVar5 = (int)param_2[2];
            pvVar8 = malloc((long)iVar5 * 4);
            param_2[1] = (long)pvVar8;
            pvVar11 = malloc((long)iVar5 * 8);
            *param_2 = (long)pvVar11;
            if ((pvVar8 == (void *)0x0) || (pvVar11 == (void *)0x0)) {
              *(undefined4 *)(param_2 + 2) = 0;
              goto LAB_001006aa;
            }
            lVar7 = 0;
            if (0 < iVar5) {
              do {
                lVar9 = oc_unpack_length(local_68);
                if ((lVar9 < 0) || (lVar12 = oc_pack_bytes_left(local_68), lVar12 < lVar9)) {
                  *(int *)(param_2 + 2) = (int)lVar7;
                  goto LAB_00100634;
                }
                lVar12 = *param_2;
                *(int *)(param_2[1] + lVar7 * 4) = (int)lVar9;
                puVar10 = (undefined1 *)malloc(lVar9 + 1);
                *(undefined1 **)(lVar12 + lVar7 * 8) = puVar10;
                if (puVar10 == (undefined1 *)0x0) {
                  *(int *)(param_2 + 2) = (int)lVar7;
                  goto LAB_001006aa;
                }
                puVar13 = puVar10;
                if (lVar9 != 0) {
                  do {
                    puVar14 = puVar13 + 1;
                    uVar1 = oc_pack_read_c(local_68,8);
                    *puVar13 = uVar1;
                    puVar13 = puVar14;
                  } while (puVar14 != puVar10 + lVar9);
                  puVar10 = *(undefined1 **)(*param_2 + lVar7 * 8);
                }
                puVar10[lVar9] = 0;
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < (int)param_2[2]);
            }
            lVar7 = oc_pack_bytes_left(local_68);
            if (-1 < lVar7) {
              uVar4 = 2;
              goto LAB_00100127;
            }
          }
          else {
            *(undefined4 *)(param_2 + 2) = 0;
          }
          goto LAB_00100634;
        }
LAB_001006aa:
        uVar4 = 0xffffffff;
      }
      th_comment_clear(param_2);
      goto LAB_00100127;
    }
  }
  uVar4 = 0xffffffeb;
LAB_00100127:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void th_setup_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    oc_quant_params_clear((long)param_1 + 0x280);
    oc_huff_trees_clear(param_1);
    free(param_1);
    return;
  }
  return;
}


