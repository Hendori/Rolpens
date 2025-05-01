
uint otv_Coverage_get_count(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar4 = param_1[1] << 8 | param_1[1] >> 8;
  uVar5 = (uint)uVar4;
  if (uVar2 != 0x100) {
    if ((ushort)(uVar2 << 8 | uVar2 >> 8) != 2) {
      return 0;
    }
    if (uVar4 != 0) {
      puVar3 = param_1 + 2;
      uVar5 = 0;
      do {
        uVar2 = *puVar3;
        puVar1 = puVar3 + 1;
        puVar3 = puVar3 + 3;
        uVar5 = ((uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8) -
                (uint)(ushort)(uVar2 << 8 | uVar2 >> 8)) + 1 + uVar5;
      } while (param_1 + (ulong)(uVar4 - 1) * 3 + 5 != puVar3);
    }
  }
  return uVar5;
}



undefined2 otv_GSUBGPOS_have_MarkAttachmentType_flag(long param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  if (param_1 != 0) {
    puVar5 = (ushort *)
             (param_1 +
             (ulong)(ushort)(*(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8));
    puVar4 = puVar5 + 1;
    uVar3 = *puVar5 << 8 | *puVar5 >> 8;
    if (uVar3 == 0) {
      return 0;
    }
    do {
      uVar2 = *puVar4;
      puVar1 = (undefined1 *)((long)puVar4 + 1);
      puVar4 = puVar4 + 1;
      uVar2 = *(ushort *)((long)puVar5 + (ulong)CONCAT11((char)uVar2,*puVar1) + 2);
      if (0xff < (ushort)(uVar2 << 8 | uVar2 >> 8)) {
        return 1;
      }
    } while (puVar5 + (uVar3 + 1) != puVar4);
  }
  return 0;
}



void otvalid_get_service(void)

{
  ft_service_list_lookup(otvalid_services);
  return;
}



ulong otv_load_table(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FT_Load_Sfnt_Table(param_1,param_2,0,0,param_4);
  local_34 = (uint)uVar1;
  if ((char)uVar1 == -0x72) {
    uVar1 = 0;
  }
  else if (local_34 == 0) {
    uVar2 = ft_mem_qalloc(uVar2,*param_4,&local_34);
    *param_3 = uVar2;
    uVar1 = (ulong)local_34;
    if (local_34 == 0) {
      uVar1 = FT_Load_Sfnt_Table(param_1,param_2,0,*param_3,param_4);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void otv_Device_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 3) {
    ft_validator_error(*param_2,8);
  }
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = uVar1 << 8 | uVar1 >> 8;
  if (uVar4 != 0x8000) {
    if (2 < uVar4 - 1) {
      ft_validator_error(*param_2,8);
    }
    uVar5 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
    uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
    if (uVar5 < uVar6) {
      ft_validator_error(*param_2,8);
    }
    if (*(ulong *)(*param_2 + 0xd0) <
        (long)param_1 + (ulong)((((uVar5 + 1) - uVar6 << ((byte)(uVar1 >> 8) & 0x1f)) >> 3) + 6)) {
      ft_validator_error(*param_2,8);
      return;
    }
  }
  return;
}



void otv_BaseCoord_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 2) {
    ft_validator_error(*param_2,8);
  }
  uVar1 = *param_1;
  uVar2 = uVar1 << 8 | uVar1 >> 8;
  if (uVar1 == 0x200) {
    lVar3 = *param_2;
    if (param_1 + 4 <= *(ushort **)(lVar3 + 0xd0)) {
      return;
    }
  }
  else {
    if (uVar2 == 3) {
      if (*(ushort **)(*param_2 + 0xd0) < param_1 + 3) {
        ft_validator_error(*param_2,8);
      }
      otv_Device_validate((long)param_1 + (ulong)(ushort)(param_1[2] << 8 | param_1[2] >> 8),param_2
                         );
      return;
    }
    if (uVar2 == 1) {
      return;
    }
    lVar3 = *param_2;
  }
  ft_validator_error(lVar3,8);
  return;
}



void otv_MinMax_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  
  puVar4 = param_1 + 3;
  if (*(ushort **)(*param_2 + 0xd0) < puVar4) {
    ft_validator_error();
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2] << 8 | param_1[2] >> 8;
  uVar7 = (uint)uVar6 * 8 + 6;
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < uVar7) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        *param_1 = 0;
        goto LAB_001003fb;
      }
      ft_validator_error(*param_2,9);
    }
    otv_BaseCoord_validate((long)param_1 + (ulong)uVar2);
  }
LAB_001003fb:
  if (uVar1 != 0) {
    uVar2 = uVar1 << 8 | uVar1 >> 8;
    if (uVar2 < uVar7) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[1] = 0;
        goto LAB_0010042a;
      }
      ft_validator_error(*param_2,9);
    }
    otv_BaseCoord_validate((long)param_1 + (ulong)uVar2,param_2);
  }
LAB_0010042a:
  if (*(ulong *)(*param_2 + 0xd0) < (ulong)((uint)uVar6 * 8) + (long)puVar4) {
    ft_validator_error(*param_2,8);
  }
  if (uVar6 == 0) {
    return;
  }
LAB_00100474:
  do {
    uVar2 = puVar4[2];
    puVar5 = puVar4 + 4;
    uVar1 = puVar4[3];
    if (uVar2 != 0) {
      uVar3 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if (uVar3 < uVar7) {
        if (*(int *)(*param_2 + 0xd8) != 2) {
          puVar4[2] = 0;
          goto LAB_001004b0;
        }
        ft_validator_error(*param_2,9);
      }
      otv_BaseCoord_validate((ulong)uVar3 + (long)param_1,param_2);
    }
LAB_001004b0:
    if (uVar1 != 0) {
      uVar2 = uVar1 << 8 | uVar1 >> 8;
      if (uVar2 < uVar7) {
        if (*(int *)(*param_2 + 0xd8) != 2) {
          puVar4[3] = 0;
          puVar4 = puVar5;
          if (param_1 + (ulong)(uVar6 - 1) * 4 + 7 == puVar5) {
            return;
          }
          goto LAB_00100474;
        }
        ft_validator_error(*param_2,9);
      }
      otv_BaseCoord_validate((long)param_1 + (ulong)uVar2,param_2);
    }
    puVar4 = puVar5;
    if (param_1 + (ulong)(uVar6 - 1) * 4 + 7 == puVar5) {
      return;
    }
  } while( true );
}



void otv_Axis_validate(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort *puVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  lVar8 = *param_2;
  if (*(ushort **)(lVar8 + 0xd0) < param_1 + 2) {
    ft_validator_error();
    lVar8 = *param_2;
  }
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar5 = uVar5 << 8 | uVar5 >> 8;
    if (uVar5 < 4) {
      if (*(int *)(lVar8 + 0xd8) != 2) {
        *param_1 = 0;
        lVar8 = *param_2;
        goto LAB_00100639;
      }
      ft_validator_error(lVar8,9);
      lVar8 = *param_2;
    }
    puVar13 = (ushort *)((long)param_1 + (ulong)uVar5);
    if (*(ushort **)(lVar8 + 0xd0) < puVar13 + 1) {
      ft_validator_error(lVar8,8);
      lVar8 = *param_2;
    }
    if (*(ushort **)(lVar8 + 0xd0) <
        puVar13 + (ulong)(ushort)(*puVar13 << 8 | *puVar13 >> 8) * 2 + 1) {
      ft_validator_error(lVar8,8);
      lVar8 = *param_2;
    }
  }
LAB_00100639:
  param_1 = (ushort *)((ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + (long)param_1);
  puVar13 = param_1 + 1;
  if (*(ushort **)(lVar8 + 0xd0) < puVar13) {
    ft_validator_error(lVar8,8);
    lVar8 = *param_2;
  }
  uVar5 = *param_1 << 8 | *param_1 >> 8;
  if (*(ulong *)(lVar8 + 0xd0) < (ulong)(((uint)uVar5 + (uint)uVar5 * 2) * 2) + (long)puVar13) {
    ft_validator_error(lVar8,8);
  }
  if (uVar5 != 0) {
    do {
      puVar14 = puVar13 + 2;
      puVar13 = puVar13 + 3;
      puVar7 = (ushort *)((ulong)(ushort)(*puVar14 << 8 | *puVar14 >> 8) + (long)param_1);
      puVar14 = puVar7 + 3;
      if (*(ushort **)(*param_2 + 0xd0) < puVar14) {
        ft_validator_error(*param_2,8);
      }
      uVar11 = puVar7[1];
      uVar10 = *puVar7;
      uVar6 = puVar7[2] << 8 | puVar7[2] >> 8;
      uVar4 = ((uint)uVar6 * 3 + 3) * 2;
      if (uVar10 != 0) {
        uVar10 = uVar10 << 8 | uVar10 >> 8;
        lVar8 = *param_2;
        if (uVar10 < uVar4) {
          if (*(int *)(lVar8 + 0xd8) != 2) {
            *puVar7 = 0;
            goto LAB_001007c8;
          }
          ft_validator_error(lVar8,9);
          lVar8 = *param_2;
        }
        puVar12 = (undefined1 *)((long)puVar7 + (ulong)uVar10 + 4);
        if (*(undefined1 **)(lVar8 + 0xd0) < puVar12) {
          ft_validator_error(lVar8,8);
          lVar8 = *param_2;
        }
        uVar9 = *(ushort *)((long)puVar7 + (ulong)uVar10 + 2);
        uVar9 = uVar9 << 8 | uVar9 >> 8;
        if (*(undefined1 **)(lVar8 + 0xd0) < puVar12 + ((uint)uVar9 + (uint)uVar9)) {
          ft_validator_error(lVar8,8);
        }
        if (uVar9 != 0) {
          do {
            uVar3 = *puVar12;
            puVar1 = puVar12 + 1;
            puVar12 = puVar12 + 2;
            otv_BaseCoord_validate
                      ((long)puVar7 + (ulong)CONCAT11(uVar3,*puVar1) + (ulong)uVar10,param_2);
          } while ((undefined1 *)((long)puVar7 + (ulong)(uVar9 + 2) * 2 + (ulong)uVar10) != puVar12)
          ;
        }
      }
LAB_001007c8:
      if (uVar11 != 0) {
        uVar11 = uVar11 << 8 | uVar11 >> 8;
        if (uVar11 < uVar4) {
          if (*(int *)(*param_2 + 0xd8) != 2) {
            puVar7[1] = 0;
            goto LAB_00100800;
          }
          ft_validator_error(*param_2,9);
        }
        otv_MinMax_validate((long)puVar7 + (ulong)uVar11,param_2);
      }
LAB_00100800:
      if (*(ulong *)(*param_2 + 0xd0) < (ulong)(uVar4 - 6) + (long)puVar14) {
        ft_validator_error(*param_2,8);
      }
      if (uVar6 != 0) {
        do {
          puVar2 = puVar14 + 2;
          puVar14 = puVar14 + 3;
          otv_MinMax_validate((ulong)(ushort)(*puVar2 << 8 | *puVar2 >> 8) + (long)puVar7,param_2);
        } while (puVar7 + (ulong)(uVar6 - 1) * 3 + 6 != puVar14);
      }
    } while (param_1 + (ulong)(uVar5 - 1) * 3 + 4 != puVar13);
  }
  return;
}



void otv_Coverage_validate(ushort *param_1,long *param_2,uint param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar4 = param_1 + 2;
  lVar8 = *param_2;
  if (*(ushort **)(lVar8 + 0xd0) < puVar4) {
    ft_validator_error(lVar8,8);
    lVar8 = *param_2;
  }
  uVar5 = *param_1;
  if (uVar5 == 0x100) {
    uVar5 = param_1[1] << 8 | param_1[1] >> 8;
    uVar3 = (uint)uVar5;
    if (*(undefined1 **)(lVar8 + 0xd0) <
        (undefined1 *)((ulong)((uint)uVar5 + (uint)uVar5) + (long)puVar4)) {
      ft_validator_error(lVar8,8);
    }
    if (uVar5 != 0) {
      do {
        uVar2 = *puVar4;
        puVar1 = (undefined1 *)((long)puVar4 + 1);
        puVar4 = puVar4 + 1;
        if (*(uint *)((long)param_2 + 0x1c) <= (uint)CONCAT11((char)uVar2,*puVar1)) {
          ft_validator_error(*param_2,0x10);
        }
      } while (puVar4 != param_1 + (uVar5 + 2));
      goto LAB_00100b2c;
    }
  }
  else if ((ushort)(uVar5 << 8 | uVar5 >> 8) == 2) {
    uVar10 = (uint)(ushort)(param_1[1] << 8 | param_1[1] >> 8);
    if (*(undefined1 **)(lVar8 + 0xd0) < (undefined1 *)((ulong)(uVar10 * 6) + (long)puVar4)) {
      ft_validator_error(lVar8,8);
    }
    if (uVar10 != 0) {
      uVar11 = 0;
      uVar3 = 0;
      uVar6 = 0;
      do {
        uVar7 = (uint)(ushort)(puVar4[1] << 8 | puVar4[1] >> 8);
        uVar9 = (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8);
        if (((ushort)(puVar4[2] << 8 | puVar4[2] >> 8) != uVar3) || (uVar7 < uVar9)) {
          ft_validator_error(*param_2,8);
        }
        if (*(uint *)((long)param_2 + 0x1c) <= uVar7) {
          ft_validator_error(*param_2,0x10);
        }
        if ((uVar11 != 0) && (uVar9 <= uVar6)) {
          ft_validator_error(*param_2,8);
        }
        uVar11 = uVar11 + 1;
        uVar3 = (uVar7 + 1 + uVar3) - uVar9;
        puVar4 = puVar4 + 3;
        uVar6 = uVar7;
      } while (uVar10 != uVar11);
      goto LAB_00100b2c;
    }
  }
  else {
    ft_validator_error(lVar8,8);
  }
  uVar3 = 0;
LAB_00100b2c:
  if ((param_3 != 0xffffffff) && (param_3 != uVar3)) {
    ft_validator_error(*param_2,8);
    return;
  }
  return;
}



void otv_u_x_Ox_y_Oy_z_Oz_p_sp(long param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort *puVar3;
  long lVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort uVar8;
  
  puVar5 = (ushort *)(param_1 + 4);
  lVar4 = *param_2;
  if (*(ushort **)(lVar4 + 0xd0) < puVar5) {
    ft_validator_error(lVar4,8);
    lVar4 = *param_2;
  }
  uVar6 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  if (*(undefined1 **)(lVar4 + 0xd0) <
      (undefined1 *)((ulong)(uVar6 + 2 + (uint)uVar6) + (long)puVar5)) {
    ft_validator_error(lVar4,8);
  }
  if (uVar6 != 0) {
    puVar3 = puVar5;
    do {
      uVar8 = *puVar3;
      puVar1 = (undefined1 *)((long)puVar3 + 1);
      puVar3 = puVar3 + 1;
      otv_Coverage_validate((ulong)CONCAT11((char)uVar8,*puVar1) + param_1,param_2,0xffffffff);
    } while (puVar3 != (ushort *)(param_1 + 6 + (ulong)(uVar6 - 1) * 2));
    puVar5 = puVar5 + uVar6;
  }
  puVar3 = puVar5 + 1;
  uVar6 = *puVar5 << 8 | *puVar5 >> 8;
  if (*(undefined1 **)(*param_2 + 0xd0) < (undefined1 *)((ulong)((uVar6 + 1) * 2) + (long)puVar3)) {
    ft_validator_error(*param_2,8);
  }
  if (uVar6 != 0) {
    puVar7 = puVar3;
    do {
      uVar8 = *puVar7;
      puVar1 = (undefined1 *)((long)puVar7 + 1);
      puVar7 = puVar7 + 1;
      otv_Coverage_validate((ulong)CONCAT11((char)uVar8,*puVar1) + param_1,param_2,0xffffffff);
      puVar3 = puVar5 + (uVar6 + 1);
    } while (puVar7 != puVar5 + (uVar6 + 1));
  }
  puVar5 = puVar3 + 1;
  uVar8 = *puVar3 << 8 | *puVar3 >> 8;
  uVar2 = uVar8 + 1;
  if (*(undefined1 **)(*param_2 + 0xd0) < (undefined1 *)((ulong)(uVar2 * 2) + (long)puVar5)) {
    ft_validator_error(*param_2,8);
  }
  if (uVar8 != 0) {
    puVar7 = puVar5;
    do {
      uVar8 = *puVar7;
      puVar1 = (undefined1 *)((long)puVar7 + 1);
      puVar7 = puVar7 + 1;
      otv_Coverage_validate((ulong)CONCAT11((char)uVar8,*puVar1) + param_1,param_2,0xffffffff);
      puVar5 = puVar3 + uVar2;
    } while (puVar3 + uVar2 != puVar7);
  }
  puVar3 = puVar5 + 1;
  uVar8 = *puVar5 << 8 | *puVar5 >> 8;
  if (*(undefined1 **)(*param_2 + 0xd0) < (undefined1 *)((ulong)((uint)uVar8 * 4) + (long)puVar3)) {
    ft_validator_error(*param_2,8);
  }
  if (uVar8 != 0) {
    do {
      while( true ) {
        if (uVar6 <= (ushort)(*puVar3 << 8 | *puVar3 >> 8)) {
          ft_validator_error(*param_2,8);
        }
        puVar7 = puVar3 + 1;
        puVar3 = puVar3 + 2;
        if (*(uint *)(param_2 + 3) <= (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8)) break;
        if (puVar5 + (ulong)(uVar8 - 1) * 2 + 3 == puVar3) {
          return;
        }
      }
      ft_validator_error(*param_2,8);
    } while (puVar5 + (ulong)(uVar8 - 1) * 2 + 3 != puVar3);
  }
  return;
}



void otv_ClassDef_validate(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  long lVar7;
  ushort uVar8;
  uint uVar9;
  
  puVar6 = param_1 + 2;
  lVar7 = *param_2;
  if (*(ushort **)(lVar7 + 0xd0) < puVar6) {
    ft_validator_error(lVar7,8);
    lVar7 = *param_2;
  }
  uVar8 = *param_1;
  if (uVar8 == 0x100) {
    if (*(ushort **)(lVar7 + 0xd0) < param_1 + 3) {
      ft_validator_error(lVar7,8);
      lVar7 = *param_2;
    }
    uVar8 = param_1[1];
    uVar5 = param_1[2] << 8 | param_1[2] >> 8;
    if (*(ulong *)(lVar7 + 0xd0) < (ulong)(uVar5 + 6 + (uint)uVar5) + (long)param_1) {
      ft_validator_error(lVar7,8);
    }
    if (*(uint *)((long)param_2 + 0x1c) <= ((ushort)(uVar8 << 8 | uVar8 >> 8) - 1) + (uint)uVar5) {
      ft_validator_error(*param_2,0x10);
      return;
    }
  }
  else {
    if ((ushort)(uVar8 << 8 | uVar8 >> 8) != 2) {
      ft_validator_error(lVar7,8);
      return;
    }
    uVar8 = param_1[1] << 8 | param_1[1] >> 8;
    if (*(ulong *)(lVar7 + 0xd0) < (ulong)(((uint)uVar8 + (uint)uVar8 * 2) * 2) + (long)puVar6) {
      ft_validator_error(lVar7,8);
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      uVar4 = 0;
      do {
        while( true ) {
          uVar5 = *puVar6;
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 3;
          uVar3 = *puVar1 << 8 | *puVar1 >> 8;
          uVar2 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
          if ((uVar3 < uVar2) || ((uVar9 != 0 && (uVar2 <= uVar4)))) {
            ft_validator_error(*param_2,8);
          }
          uVar4 = (uint)uVar3;
          if ((uint)uVar3 < *(uint *)((long)param_2 + 0x1c)) break;
          uVar9 = uVar9 + 1;
          ft_validator_error(*param_2,0x10);
          if (uVar8 == uVar9) {
            return;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
  }
  return;
}



void otv_u_O_O_O_O_x_Onx(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  ushort uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  puVar9 = (undefined1 *)(param_1 + 0xc);
  if (*(undefined1 **)(*param_2 + 0xd0) < puVar9) {
    ft_validator_error(*param_2,8);
  }
  uVar3 = *(ushort *)(param_1 + 4);
  uVar4 = *(ushort *)(param_1 + 8);
  uVar5 = *(ushort *)(param_1 + 6);
  uVar7 = *(ushort *)(param_1 + 10) << 8 | *(ushort *)(param_1 + 10) >> 8;
  otv_Coverage_validate
            ((ulong)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8) +
             param_1,param_2,0xffffffff);
  otv_ClassDef_validate((ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + param_1,param_2);
  otv_ClassDef_validate((ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) + param_1,param_2);
  otv_ClassDef_validate((ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + param_1,param_2);
  if (*(undefined1 **)(*param_2 + 0xd0) < puVar9 + ((uint)uVar7 + (uint)uVar7)) {
    ft_validator_error(*param_2,8);
  }
  iVar8 = (int)param_2[4];
  pcVar6 = (code *)param_2[(ulong)(iVar8 + 1U) + 5];
  *(uint *)(param_2 + 4) = iVar8 + 1U;
  *(int *)(param_2 + 8) = (int)param_2[3];
  if (uVar7 != 0) {
    do {
      uVar2 = *puVar9;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 2;
      if (CONCAT11(uVar2,*puVar1) != 0) {
        (*pcVar6)((ulong)CONCAT11(uVar2,*puVar1) + param_1,param_2);
      }
    } while ((undefined1 *)(param_1 + (ulong)(uVar7 + 6) * 2) != puVar9);
    iVar8 = (int)param_2[4] + -1;
  }
  *(int *)(param_2 + 4) = iVar8;
  return;
}



void otv_x_ux_y_uy_z_uz_p_sp(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  
  lVar6 = *param_2;
  if (*(ushort **)(lVar6 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  uVar2 = *param_1 << 8 | *param_1 >> 8;
  uVar4 = uVar2 + 2 + (uint)uVar2;
  uVar7 = (long)(param_1 + 1) + (ulong)uVar4;
  if (*(ulong *)(lVar6 + 0xd0) < uVar7) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  uVar2 = *(ushort *)((long)param_1 + (ulong)(uVar4 - 2) + 2);
  uVar2 = uVar2 << 8 | uVar2 >> 8;
  if (uVar2 == 0) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  if (*(ulong *)(lVar6 + 0xd0) < ((uint)uVar2 + (uint)uVar2) + uVar7) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  puVar8 = (ushort *)(uVar7 + ((uVar2 - 2) + (uint)uVar2));
  uVar3 = *puVar8 << 8 | *puVar8 >> 8;
  uVar4 = uVar3 + 2 + (uint)uVar3;
  puVar5 = (ushort *)((long)puVar8 + (ulong)uVar4 + 2);
  if (*(ushort **)(lVar6 + 0xd0) < puVar5) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  uVar3 = *(ushort *)((long)puVar8 + (ulong)(uVar4 - 2) + 2);
  uVar3 = uVar3 << 8 | uVar3 >> 8;
  if (*(ulong *)(lVar6 + 0xd0) < (ulong)((uint)uVar3 * 4) + (long)puVar5) {
    ft_validator_error(lVar6,8);
  }
  puVar8 = puVar5 + (ulong)uVar3 * 2;
  if (uVar3 != 0) {
    do {
      while( true ) {
        if (uVar2 <= (ushort)(*puVar5 << 8 | *puVar5 >> 8)) {
          ft_validator_error(*param_2,8);
        }
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        if (*(uint *)(param_2 + 8) <= (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8)) break;
        if (puVar8 == puVar5) {
          return;
        }
      }
      ft_validator_error(*param_2,8);
    } while (puVar8 != puVar5);
  }
  return;
}



void otv_x_Ox(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  
  puVar7 = param_1 + 1;
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < puVar7) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar6 = *param_1 << 8 | *param_1 >> 8;
  if (*(undefined1 **)(lVar5 + 0xd0) <
      (undefined1 *)((ulong)((uint)uVar6 + (uint)uVar6) + (long)puVar7)) {
    ft_validator_error(lVar5,8);
  }
  iVar4 = (int)param_2[4];
  *(uint *)(param_2 + 4) = iVar4 + 1U;
  pcVar2 = (code *)param_2[(ulong)(iVar4 + 1U) + 5];
  if (uVar6 != 0) {
    do {
      uVar3 = *puVar7;
      puVar1 = (undefined1 *)((long)puVar7 + 1);
      puVar7 = puVar7 + 1;
      (*pcVar2)((ulong)CONCAT11((char)uVar3,*puVar1) + (long)param_1,param_2);
    } while (puVar7 != param_1 + (uVar6 + 1));
    iVar4 = (int)param_2[4] + -1;
  }
  *(int *)(param_2 + 4) = iVar4;
  return;
}



void otv_u_C_x_Ox(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  ushort uVar5;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)(param_1 + 6);
  if (*(undefined1 **)(*param_2 + 0xd0) < puVar6) {
    ft_validator_error(*param_2,8);
  }
  uVar5 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
  otv_Coverage_validate
            ((ulong)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8) +
             param_1,param_2,uVar5);
  if (*(undefined1 **)(*param_2 + 0xd0) < puVar6 + ((uint)uVar5 + (uint)uVar5)) {
    ft_validator_error(*param_2,8);
  }
  iVar4 = (int)param_2[4];
  *(uint *)(param_2 + 4) = iVar4 + 1U;
  pcVar3 = (code *)param_2[(ulong)(iVar4 + 1U) + 5];
  if (uVar5 != 0) {
    do {
      uVar2 = *puVar6;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      (*pcVar3)((ulong)CONCAT11(uVar2,*puVar1) + param_1,param_2);
    } while ((undefined1 *)(param_1 + (ulong)(uVar5 + 3) * 2) != puVar6);
    iVar4 = (int)param_2[4] + -1;
  }
  *(int *)(param_2 + 4) = iVar4;
  return;
}



void otv_ChainContextPos_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
    uVar1 = *param_1;
    uVar2 = uVar1 << 8 | uVar1 >> 8;
  }
  else {
    uVar1 = *param_1;
    uVar2 = uVar1 << 8 | uVar1 >> 8;
  }
  if (uVar1 == 0x200) {
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[7] = (long)otv_x_ux_y_uy_z_uz_p_sp;
    param_2[5] = (long)otv_u_O_O_O_O_x_Onx;
    param_2[6] = (long)otv_x_Ox;
    otv_u_O_O_O_O_x_Onx(param_1,param_2);
    return;
  }
  if (uVar2 == 3) {
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = (long)otv_u_x_Ox_y_Oy_z_Oz_p_sp;
    otv_u_x_Ox_y_Oy_z_Oz_p_sp(param_1,param_2);
    return;
  }
  if (uVar2 != 1) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(int *)(param_2 + 8) = (int)param_2[3];
  param_2[7] = (long)otv_x_ux_y_uy_z_uz_p_sp;
  param_2[5] = (long)otv_u_C_x_Ox;
  param_2[6] = (long)otv_x_Ox;
  otv_u_C_x_Ox(param_1,param_2);
  return;
}



void otv_ChainContextSubst_validate(void)

{
  otv_ChainContextPos_validate();
  return;
}



void otv_u_x_y_Ox_sy(long param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  puVar8 = (ushort *)(param_1 + 6);
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < puVar8) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar4 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
  uVar6 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  if (*(undefined1 **)(lVar5 + 0xd0) <
      (undefined1 *)((ulong)(((uint)uVar6 + (uint)uVar4 * 2) * 2) + (long)puVar8)) {
    ft_validator_error(lVar5,8);
  }
  if (uVar6 != 0) {
    puVar7 = puVar8;
    do {
      uVar3 = *puVar7;
      puVar1 = (undefined1 *)((long)puVar7 + 1);
      puVar7 = puVar7 + 1;
      otv_Coverage_validate((ulong)CONCAT11((char)uVar3,*puVar1) + param_1,param_2,0xffffffff);
    } while (puVar7 != (ushort *)(param_1 + 8 + (ulong)(uVar6 - 1) * 2));
    puVar8 = puVar8 + uVar6;
  }
  puVar7 = puVar8 + (ulong)uVar4 * 2;
  if (uVar4 != 0) {
    do {
      while( true ) {
        if (uVar6 <= (ushort)(*puVar8 << 8 | *puVar8 >> 8)) {
          ft_validator_error(*param_2,8);
        }
        puVar2 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        if (*(uint *)(param_2 + 3) <= (uint)(ushort)(*puVar2 << 8 | *puVar2 >> 8)) break;
        if (puVar8 == puVar7) {
          return;
        }
      }
      ft_validator_error(*param_2,8);
    } while (puVar8 != puVar7);
  }
  return;
}



void otv_u_O_O_x_Onx(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  code *pcVar4;
  int iVar5;
  ushort uVar6;
  undefined1 *puVar7;
  
  puVar7 = (undefined1 *)(param_1 + 8);
  if (*(undefined1 **)(*param_2 + 0xd0) < puVar7) {
    ft_validator_error(*param_2,8);
  }
  uVar3 = *(ushort *)(param_1 + 4);
  uVar6 = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
  otv_Coverage_validate
            ((ulong)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8) +
             param_1,param_2,0xffffffff);
  otv_ClassDef_validate((ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + param_1,param_2);
  if (*(undefined1 **)(*param_2 + 0xd0) < puVar7 + ((uint)uVar6 + (uint)uVar6)) {
    ft_validator_error(*param_2,8);
  }
  iVar5 = (int)param_2[4];
  pcVar4 = (code *)param_2[(ulong)(iVar5 + 1U) + 5];
  *(uint *)(param_2 + 4) = iVar5 + 1U;
  *(int *)(param_2 + 8) = (int)param_2[3];
  if (uVar6 != 0) {
    do {
      uVar2 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      if (CONCAT11(uVar2,*puVar1) != 0) {
        (*pcVar4)((ulong)CONCAT11(uVar2,*puVar1) + param_1,param_2);
      }
    } while ((undefined1 *)(param_1 + (ulong)(uVar6 + 4) * 2) != puVar7);
    iVar5 = (int)param_2[4] + -1;
  }
  *(int *)(param_2 + 4) = iVar5;
  return;
}



void otv_ContextPos_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
    uVar1 = *param_1;
    uVar2 = uVar1 << 8 | uVar1 >> 8;
  }
  else {
    uVar1 = *param_1;
    uVar2 = uVar1 << 8 | uVar1 >> 8;
  }
  if (uVar1 == 0x200) {
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[7] = (long)otv_x_y_ux_sy;
    param_2[5] = (long)otv_u_O_O_x_Onx;
    param_2[6] = (long)otv_x_Ox;
    otv_u_O_O_x_Onx(param_1,param_2);
    return;
  }
  if (uVar2 == 3) {
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = (long)otv_u_x_y_Ox_sy;
    otv_u_x_y_Ox_sy(param_1,param_2);
    return;
  }
  if (uVar2 != 1) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(int *)(param_2 + 8) = (int)param_2[3];
  param_2[7] = (long)otv_x_y_ux_sy;
  param_2[5] = (long)otv_u_C_x_Ox;
  param_2[6] = (long)otv_x_Ox;
  otv_u_C_x_Ox(param_1,param_2);
  return;
}



void otv_ContextSubst_validate(void)

{
  otv_ContextPos_validate();
  return;
}



void otv_x_y_ux_sy(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  
  puVar3 = param_1 + 2;
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < puVar3) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar4 = *param_1 << 8 | *param_1 >> 8;
  uVar6 = param_1[1] << 8 | param_1[1] >> 8;
  if (uVar4 == 0) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  if (*(ulong *)(lVar5 + 0xd0) < (ulong)(((uVar4 - 1) + (uint)uVar6 * 2) * 2) + (long)puVar3) {
    ft_validator_error(lVar5,8);
  }
  puVar3 = (ushort *)((long)puVar3 + (ulong)((uVar4 - 1) * 2));
  puVar2 = puVar3 + (ulong)uVar6 * 2;
  if (uVar6 != 0) {
    do {
      while( true ) {
        if (uVar4 <= (ushort)(*puVar3 << 8 | *puVar3 >> 8)) {
          ft_validator_error(*param_2,8);
        }
        puVar1 = puVar3 + 1;
        puVar3 = puVar3 + 2;
        if (*(uint *)(param_2 + 8) <= (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8)) break;
        if (puVar3 == puVar2) {
          return;
        }
      }
      ft_validator_error(*param_2,8);
    } while (puVar3 != puVar2);
  }
  return;
}



void otv_Anchor_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 3) {
    ft_validator_error(*param_2,8);
    uVar2 = *param_1;
    uVar1 = uVar2 << 8 | uVar2 >> 8;
  }
  else {
    uVar2 = *param_1;
    uVar1 = uVar2 << 8 | uVar2 >> 8;
  }
  if (uVar2 == 0x200) {
    lVar3 = *param_2;
    if (param_1 + 4 <= *(ushort **)(lVar3 + 0xd0)) {
      return;
    }
  }
  else {
    if (uVar1 == 3) {
      if (*(ushort **)(*param_2 + 0xd0) < param_1 + 5) {
        ft_validator_error(*param_2,8);
      }
      uVar2 = param_1[3];
      uVar1 = param_1[4];
      if (uVar2 != 0) {
        uVar2 = uVar2 << 8 | uVar2 >> 8;
        if (uVar2 < 10) {
          if (*(int *)(*param_2 + 0xd8) != 2) {
            param_1[3] = 0;
            goto LAB_00101c58;
          }
          ft_validator_error(*param_2,9);
        }
        otv_Device_validate((ulong)uVar2 + (long)param_1,param_2);
      }
LAB_00101c58:
      if (uVar1 == 0) {
        return;
      }
      uVar2 = uVar1 << 8 | uVar1 >> 8;
      if (uVar2 < 10) {
        if (*(int *)(*param_2 + 0xd8) != 2) {
          param_1[4] = 0;
          return;
        }
        ft_validator_error(*param_2,9);
      }
      otv_Device_validate((long)param_1 + (ulong)uVar2,param_2);
      return;
    }
    if (uVar1 == 1) {
      return;
    }
    lVar3 = *param_2;
  }
  ft_validator_error(lVar3,8);
  return;
}



void otv_x_sxy(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  puVar5 = param_1 + 1;
  lVar8 = *param_2;
  if (*(ushort **)(lVar8 + 0xd0) < puVar5) {
    ft_validator_error(lVar8,8);
    lVar8 = *param_2;
  }
  uVar4 = *(uint *)(param_2 + 8);
  uVar6 = (uint)(ushort)(*param_1 << 8 | *param_1 >> 8);
  iVar7 = uVar6 * uVar4;
  if (*(ulong *)(lVar8 + 0xd0) < (ulong)(uint)(iVar7 * 2) + (long)puVar5) {
    ft_validator_error(lVar8,8);
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = uVar6 * uVar4;
  }
  if (uVar6 == 0) {
    return;
  }
  do {
    if (uVar4 != 0) {
      puVar1 = puVar5 + uVar4;
      puVar9 = puVar5;
      do {
        while( true ) {
          uVar2 = (undefined1)*puVar9;
          uVar3 = *(undefined1 *)((long)puVar9 + 1);
          puVar10 = puVar9 + 1;
          puVar5 = puVar1;
          if (*(int *)((long)param_2 + 0x44) != 0) break;
LAB_00101df1:
          otv_Anchor_validate((ulong)CONCAT11(uVar2,uVar3) + (long)param_1,param_2);
LAB_00101dff:
          puVar9 = puVar10;
          if (puVar10 == puVar1) goto joined_r0x00101e1e;
        }
        if (CONCAT11(uVar2,uVar3) != 0) {
          if (iVar7 * 2 + 2U <= (uint)CONCAT11(uVar2,uVar3)) goto LAB_00101df1;
          if (*(int *)(*param_2 + 0xd8) != 2) {
            *puVar9 = 0;
            goto LAB_00101dd2;
          }
          ft_validator_error(*param_2,9);
          otv_Anchor_validate((ulong)CONCAT11(uVar2,uVar3) + (long)param_1,param_2);
          goto LAB_00101dff;
        }
LAB_00101dd2:
        puVar9 = puVar10;
      } while (puVar10 != puVar1);
    }
joined_r0x00101e1e:
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return;
    }
    uVar4 = *(uint *)(param_2 + 8);
  } while( true );
}



void otv_u_O_O_u_O_O(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  uint uVar6;
  ushort *puVar7;
  long lVar8;
  ushort uVar9;
  ushort *puVar10;
  
  if (*(ulong *)(*param_2 + 0xd0) < param_1 + 0xcU) {
    ft_validator_error(*param_2,8);
  }
  uVar9 = *(ushort *)(param_1 + 4);
  uVar2 = *(ushort *)(param_1 + 10);
  uVar3 = *(ushort *)(param_1 + 6);
  uVar4 = *(ushort *)(param_1 + 8);
  otv_Coverage_validate
            ((ulong)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8) +
             param_1,param_2,0xffffffff);
  puVar7 = (ushort *)((ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + param_1);
  otv_Coverage_validate((ulong)(ushort)(uVar9 << 8 | uVar9 >> 8) + param_1,param_2,0xffffffff);
  lVar8 = *param_2;
  puVar10 = puVar7 + 1;
  if (*(ushort **)(lVar8 + 0xd0) < puVar10) {
    ft_validator_error(lVar8,8);
    lVar8 = *param_2;
  }
  uVar9 = *puVar7 << 8 | *puVar7 >> 8;
  if (*(ulong *)(lVar8 + 0xd0) < (ulong)((uint)uVar9 * 4) + (long)puVar10) {
    ft_validator_error(lVar8,8);
  }
  if (uVar9 != 0) {
    do {
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      otv_Anchor_validate((ulong)(ushort)(*puVar1 << 8 | *puVar1 >> 8) + (long)puVar7,param_2);
    } while (puVar7 + (ulong)(uVar9 - 1) * 2 + 3 != puVar10);
  }
  uVar6 = (int)param_2[4] + 1;
  *(uint *)(param_2 + 4) = uVar6;
  pcVar5 = (code *)param_2[(ulong)uVar6 + 5];
  *(uint *)(param_2 + 8) = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
  (*pcVar5)((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + param_1,param_2);
  *(int *)(param_2 + 4) = (int)param_2[4] + -1;
  return;
}



void otv_ValueRecord_validate(ushort *param_1,uint param_2,long *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  
  if (0xff < param_2) {
    ft_validator_error(*param_3,8);
  }
  iVar4 = 4;
  do {
    if ((param_2 & 1) != 0) {
      param_1 = param_1 + 1;
      if (*(ushort **)(*param_3 + 0xd0) < param_1) {
        ft_validator_error(*param_3,8);
      }
    }
    param_2 = param_2 >> 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 4;
  do {
    puVar2 = param_1;
    if ((param_2 & 1) != 0) {
      puVar2 = param_1 + 1;
      if (*(ushort **)(*param_3 + 0xd0) < puVar2) {
        ft_validator_error(*param_3,8);
      }
      uVar1 = *param_1;
      if (uVar1 != 0) {
        lVar3 = param_3[9];
        uVar5 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
        if ((long)uVar5 < (long)puVar2 - lVar3) {
          if (*(int *)(*param_3 + 0xd8) != 2) {
            *param_1 = 0;
            goto LAB_00102080;
          }
          ft_validator_error(*param_3,9);
          lVar3 = param_3[9];
        }
        otv_Device_validate(lVar3 + uVar5,param_3);
      }
    }
LAB_00102080:
    param_2 = param_2 >> 1;
    iVar4 = iVar4 + -1;
    param_1 = puVar2;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}



void otv_Lookup_validate(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  code *pcVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  puVar7 = param_1 + 3;
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < puVar7) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar2 = param_1[1];
  uVar6 = *param_1 << 8 | *param_1 >> 8;
  uVar4 = param_1[2] << 8 | param_1[2] >> 8;
  if ((uVar6 == 0) || (*(uint *)(param_2 + 1) < (uint)uVar6)) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  pcVar3 = *(code **)(param_2[2] + (ulong)(uVar6 - 1) * 8);
  if (*(undefined1 **)(lVar5 + 0xd0) <
      (undefined1 *)((ulong)((uint)uVar4 + (uint)uVar4) + (long)puVar7)) {
    ft_validator_error(lVar5,8);
  }
  if (uVar4 != 0) {
    puVar8 = puVar7;
    do {
      uVar6 = *puVar8;
      puVar1 = (undefined1 *)((long)puVar8 + 1);
      puVar8 = puVar8 + 1;
      (*pcVar3)((ulong)CONCAT11((char)uVar6,*puVar1) + (long)param_1,param_2);
    } while (param_1 + (ulong)(uVar4 - 1) + 4 != puVar8);
    puVar7 = puVar7 + uVar4;
  }
  if (((uVar2 >> 8 & 0x10) != 0) && (*(ushort **)(*param_2 + 0xd0) < puVar7 + 1)) {
    ft_validator_error(*param_2,8);
    return;
  }
  return;
}



void otv_GPOS_subtable_validate(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = 9;
  *(undefined1 **)(param_2 + 0x10) = otv_gpos_validate_funcs;
  otv_Lookup_validate();
  return;
}



void otv_LookupList_validate(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  
  puVar5 = param_1 + 1;
  lVar3 = *param_2;
  if (*(ushort **)(lVar3 + 0xd0) < puVar5) {
    ft_validator_error(lVar3,8);
    lVar3 = *param_2;
  }
  uVar4 = *param_1 << 8 | *param_1 >> 8;
  if (*(undefined1 **)(lVar3 + 0xd0) <
      (undefined1 *)((ulong)((uint)uVar4 + (uint)uVar4) + (long)puVar5)) {
    ft_validator_error(lVar3,8);
  }
  *(uint *)(param_2 + 3) = (uint)uVar4;
  if (uVar4 != 0) {
    do {
      uVar2 = *puVar5;
      puVar1 = (undefined1 *)((long)puVar5 + 1);
      puVar5 = puVar5 + 1;
      otv_Lookup_validate((ulong)CONCAT11((char)uVar2,*puVar1) + (long)param_1,param_2);
    } while (puVar5 != param_1 + (uVar4 + 1));
  }
  return;
}



void otv_FeatureList_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort *puVar6;
  long lVar7;
  ushort uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  
  puVar6 = param_1 + 1;
  lVar7 = *param_3;
  if (*(ushort **)(lVar7 + 0xd0) < puVar6) {
    ft_validator_error(lVar7,8);
    lVar7 = *param_3;
  }
  uVar8 = *param_1 << 8 | *param_1 >> 8;
  if (*(ulong *)(lVar7 + 0xd0) < (ulong)((uint)uVar8 + (uint)uVar8) + (long)puVar6) {
    ft_validator_error(lVar7,8);
  }
  *(uint *)(param_3 + 3) = (uint)(ushort)(*param_2 << 8 | *param_2 >> 8);
  if (uVar8 != 0) {
    do {
      puVar1 = puVar6 + 2;
      lVar7 = *param_3;
      puVar6 = puVar6 + 3;
      uVar5 = *puVar1 << 8 | *puVar1 >> 8;
      puVar9 = (undefined1 *)((long)param_1 + (ulong)uVar5 + 4);
      if (*(undefined1 **)(lVar7 + 0xd0) < puVar9) {
        ft_validator_error(lVar7,8);
        lVar7 = *param_3;
      }
      uVar10 = *(ushort *)((long)param_1 + (ulong)uVar5 + 2);
      uVar10 = uVar10 << 8 | uVar10 >> 8;
      if (*(undefined1 **)(lVar7 + 0xd0) < puVar9 + ((uint)uVar10 + (uint)uVar10)) {
        ft_validator_error(lVar7,8);
      }
      if (uVar10 != 0) {
        puVar3 = (undefined1 *)((long)param_1 + (ulong)(uVar10 + 2) * 2 + (ulong)uVar5);
        do {
          while( true ) {
            uVar4 = *puVar9;
            puVar2 = puVar9 + 1;
            puVar9 = puVar9 + 2;
            if ((uint)CONCAT11(uVar4,*puVar2) < *(uint *)(param_3 + 3)) break;
            ft_validator_error(*param_3,8);
            if (puVar3 == puVar9) goto LAB_00102473;
          }
        } while (puVar3 != puVar9);
      }
LAB_00102473:
    } while (param_1 + (ulong)(uVar8 - 1) * 3 + 4 != puVar6);
  }
  return;
}



void otv_LangSys_validate(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  ushort uVar7;
  
  puVar5 = (undefined1 *)(param_1 + 6);
  lVar6 = *param_2;
  if (*(undefined1 **)(lVar6 + 0xd0) < puVar5) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  uVar7 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
  uVar4 = (uint)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8);
  if ((uVar4 != 0xffff) && (*(uint *)(param_2 + 8) <= uVar4)) {
    ft_validator_error(lVar6,8);
    lVar6 = *param_2;
  }
  if (*(undefined1 **)(lVar6 + 0xd0) < puVar5 + ((uint)uVar7 + (uint)uVar7)) {
    ft_validator_error(lVar6,8);
  }
  if (uVar7 != 0) {
    puVar2 = (undefined1 *)(param_1 + (ulong)(uVar7 + 3) * 2);
    do {
      while (uVar3 = *puVar5, puVar1 = puVar5 + 1, puVar5 = puVar5 + 2,
            *(uint *)(param_2 + 8) <= (uint)CONCAT11(uVar3,*puVar1)) {
        ft_validator_error(*param_2,8);
        if (puVar2 == puVar5) {
          return;
        }
      }
    } while (puVar2 != puVar5);
  }
  return;
}



void otv_ScriptList_validate(ushort *param_1,ushort *param_2,long *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  puVar7 = param_1 + 1;
  lVar5 = *param_3;
  if (*(ushort **)(lVar5 + 0xd0) < puVar7) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_3;
  }
  uVar3 = *param_1 << 8 | *param_1 >> 8;
  if (*(ulong *)(lVar5 + 0xd0) < (ulong)(((uint)uVar3 + (uint)uVar3 * 2) * 2) + (long)puVar7) {
    ft_validator_error(lVar5,8);
  }
  *(uint *)(param_3 + 8) = (uint)(ushort)(*param_2 << 8 | *param_2 >> 8);
  if (uVar3 != 0) {
    do {
      puVar8 = puVar7 + 2;
      puVar7 = puVar7 + 3;
      puVar4 = (ushort *)((ulong)(ushort)(*puVar8 << 8 | *puVar8 >> 8) + (long)param_1);
      puVar8 = puVar4 + 2;
      if (*(ushort **)(*param_3 + 0xd0) < puVar8) {
        ft_validator_error(*param_3,8);
      }
      uVar2 = *puVar4;
      uVar6 = puVar4[1] << 8 | puVar4[1] >> 8;
      if (uVar2 != 0) {
        otv_LangSys_validate((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + (long)puVar4,param_3);
      }
      if (*(ulong *)(*param_3 + 0xd0) < (ulong)(((uint)uVar6 + (uint)uVar6 * 2) * 2) + (long)puVar8)
      {
        ft_validator_error(*param_3,8);
      }
      if (uVar6 != 0) {
        do {
          puVar1 = puVar8 + 2;
          puVar8 = puVar8 + 3;
          otv_LangSys_validate((ulong)(ushort)(*puVar1 << 8 | *puVar1 >> 8) + (long)puVar4,param_3);
        } while (puVar4 + (ulong)(uVar6 - 1) * 3 + 5 != puVar8);
      }
    } while (param_1 + (ulong)(uVar3 - 1) * 3 + 4 != puVar7);
  }
  return;
}



void otv_Ligature_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (*(ushort **)(lVar2 + 0xd0) < param_1 + 2) {
    ft_validator_error(lVar2,8);
    lVar2 = *param_2;
  }
  if (*(uint *)((long)param_2 + 0x1c) <= (uint)(ushort)(*param_1 << 8 | *param_1 >> 8)) {
    ft_validator_error(lVar2,8);
    lVar2 = *param_2;
  }
  uVar1 = param_1[1] << 8 | param_1[1] >> 8;
  if (uVar1 == 0) {
    ft_validator_error(lVar2,8);
    lVar2 = *param_2;
  }
  if ((long)param_1 + (ulong)((uVar1 - 2) + (uint)uVar1) + 4 <= *(ulong *)(lVar2 + 0xd0)) {
    return;
  }
  ft_validator_error(lVar2,8);
  return;
}



void otv_x_ux(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  ushort uVar6;
  
  puVar4 = param_1 + 1;
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < puVar4) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar6 = *param_1 << 8 | *param_1 >> 8;
  if (*(undefined1 **)(lVar5 + 0xd0) <
      (undefined1 *)((ulong)((uint)uVar6 + (uint)uVar6) + (long)puVar4)) {
    ft_validator_error(lVar5,8);
  }
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 != 0) && (uVar6 != 0)) {
    while( true ) {
      uVar3 = *puVar4;
      puVar1 = (undefined1 *)((long)puVar4 + 1);
      puVar4 = puVar4 + 1;
      if (uVar2 <= CONCAT11((char)uVar3,*puVar1)) {
        ft_validator_error(*param_2,8);
      }
      if (param_1 + (uVar6 + 1) == puVar4) break;
      uVar2 = *(uint *)(param_2 + 8);
    }
  }
  return;
}



void otv_SingleSubst_validate(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar7 = *param_1;
  if (uVar7 == 0x100) {
    if (*(ushort **)(lVar5 + 0xd0) < param_1 + 3) {
      ft_validator_error(lVar5,8);
    }
    puVar4 = (ushort *)((ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + (long)param_1);
    uVar7 = param_1[2];
    otv_Coverage_validate(puVar4,param_2,0xffffffff);
    uVar6 = uVar7 << 8 | uVar7 >> 8;
    uVar7 = *puVar4;
    uVar2 = puVar4[1] << 8 | puVar4[1] >> 8;
    uVar3 = uVar6;
    if (uVar2 != 0) {
      if (uVar7 == 0x100) {
        uVar7 = *(ushort *)((long)puVar4 + (ulong)((uVar2 - 2) + (uint)uVar2) + 4);
        uVar3 = (uVar7 << 8 | uVar7 >> 8) + uVar6;
      }
      else if ((ushort)(uVar7 << 8 | uVar7 >> 8) == 2) {
        uVar7 = *(ushort *)((long)puVar4 + (ulong)(((uint)uVar2 + (uint)uVar2 * 2) * 2 - 4) + 4);
        uVar3 = (uVar7 << 8 | uVar7 >> 8) + uVar6;
      }
    }
    if (uVar3 < (ushort)((puVar4[2] << 8 | puVar4[2] >> 8) + uVar6)) {
      ft_validator_error(*param_2,8);
    }
    if (*(uint *)((long)param_2 + 0x1c) <= (uint)uVar3) {
      lVar5 = *param_2;
      goto LAB_00102a7b;
    }
  }
  else {
    if ((ushort)(uVar7 << 8 | uVar7 >> 8) != 2) {
LAB_00102a7b:
      ft_validator_error(lVar5,8);
      return;
    }
    puVar4 = param_1 + 3;
    if (*(ushort **)(lVar5 + 0xd0) < puVar4) {
      ft_validator_error(lVar5,8);
    }
    uVar7 = param_1[2] << 8 | param_1[2] >> 8;
    otv_Coverage_validate
              ((ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + (long)param_1,param_2,uVar7);
    if (*(undefined1 **)(*param_2 + 0xd0) <
        (undefined1 *)((ulong)((uint)uVar7 + (uint)uVar7) + (long)puVar4)) {
      ft_validator_error(*param_2,8);
    }
    if (uVar7 != 0) {
      do {
        while (uVar3 = *puVar4, puVar1 = (undefined1 *)((long)puVar4 + 1), puVar4 = puVar4 + 1,
              *(uint *)((long)param_2 + 0x1c) <= (uint)CONCAT11((char)uVar3,*puVar1)) {
          ft_validator_error(*param_2,0x10);
          if (puVar4 == param_1 + (uVar7 + 3)) {
            return;
          }
        }
      } while (puVar4 != param_1 + (uVar7 + 3));
    }
  }
  return;
}



void otv_CaretValue_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 2) {
    ft_validator_error(*param_2,8);
  }
  uVar1 = *param_1 << 8 | *param_1 >> 8;
  if ((short)uVar1 < 3) {
    if (0 < (short)uVar1) {
      return;
    }
  }
  else if (uVar1 == 3) {
    if (*(ushort **)(*param_2 + 0xd0) < param_1 + 3) {
      ft_validator_error(*param_2,8);
    }
    otv_Device_validate((long)param_1 + (ulong)(ushort)(param_1[2] << 8 | param_1[2] >> 8),param_2);
    return;
  }
  ft_validator_error(*param_2,8);
  return;
}



void otv_O_x_Ox(ushort *param_1,long *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  
  puVar8 = param_1 + 2;
  if (*(ushort **)(*param_2 + 0xd0) < puVar8) {
    ft_validator_error(*param_2,8);
  }
  uVar7 = param_1[1] << 8 | param_1[1] >> 8;
  lVar6 = (ulong)(ushort)(*param_1 << 8 | *param_1 >> 8) + (long)param_1;
  otv_Coverage_validate(lVar6,param_2,uVar7);
  uVar4 = otv_Coverage_get_count(lVar6);
  if (uVar4 != uVar7) {
    ft_validator_error(*param_2,8);
  }
  if (*(undefined1 **)(*param_2 + 0xd0) <
      (undefined1 *)((ulong)((uint)uVar7 + (uint)uVar7) + (long)puVar8)) {
    ft_validator_error(*param_2,8);
  }
  iVar5 = (int)param_2[4];
  pcVar2 = (code *)param_2[(ulong)(iVar5 + 1U) + 5];
  *(uint *)(param_2 + 4) = iVar5 + 1U;
  *(undefined4 *)(param_2 + 8) = 0;
  if (uVar7 != 0) {
    do {
      uVar3 = *puVar8;
      puVar1 = (undefined1 *)((long)puVar8 + 1);
      puVar8 = puVar8 + 1;
      (*pcVar2)((ulong)CONCAT11((char)uVar3,*puVar1) + (long)param_1,param_2);
    } while (param_1 + (uVar7 + 2) != puVar8);
    iVar5 = (int)param_2[4] + -1;
  }
  *(int *)(param_2 + 4) = iVar5;
  return;
}



void otv_JstfPriority_validate(ushort *param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  if (*(ushort **)(*param_2 + 0xd0) < param_1 + 10) {
    ft_validator_error();
  }
  lVar1 = param_2[8];
  uVar2 = *param_1;
  uVar3 = (undefined4)((ulong)lVar1 >> 0x20);
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        *param_1 = 0;
        goto LAB_00102d6b;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1);
  }
LAB_00102d6b:
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[1] = 0;
        goto LAB_00102da0;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1);
  }
LAB_00102da0:
  *(undefined4 *)(param_2 + 8) = uVar3;
  uVar2 = param_1[2];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[2] = 0;
        goto LAB_00102dd9;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1);
  }
LAB_00102dd9:
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[3] = 0;
        goto LAB_00102e0e;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1);
  }
LAB_00102e0e:
  uVar2 = param_1[4];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[4] = 0;
        goto LAB_00102e43;
      }
      ft_validator_error(*param_2,9);
    }
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = (long)otv_x_Ox;
    param_2[6] = (long)otv_GPOS_subtable_validate;
    otv_x_Ox((ulong)uVar2 + (long)param_1);
  }
LAB_00102e43:
  *(int *)(param_2 + 8) = (int)lVar1;
  uVar2 = param_1[5];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[5] = 0;
        goto LAB_00102e7a;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1);
  }
LAB_00102e7a:
  uVar2 = param_1[6];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[6] = 0;
        goto LAB_00102ead;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1,param_2);
  }
LAB_00102ead:
  *(undefined4 *)(param_2 + 8) = uVar3;
  uVar2 = param_1[7];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[7] = 0;
        goto LAB_00102ee4;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1,param_2);
  }
LAB_00102ee4:
  uVar2 = param_1[8];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[8] = 0;
        goto LAB_00102f17;
      }
      ft_validator_error(*param_2,9);
    }
    otv_x_ux((ulong)uVar2 + (long)param_1,param_2);
  }
LAB_00102f17:
  uVar2 = param_1[9];
  if (uVar2 != 0) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 < 0x14) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        param_1[9] = 0;
        goto LAB_00102f3f;
      }
      ft_validator_error(*param_2,9);
    }
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = (long)otv_x_Ox;
    param_2[6] = (long)otv_GPOS_subtable_validate;
    otv_x_Ox((long)param_1 + (ulong)uVar2,param_2);
  }
LAB_00102f3f:
  param_2[8] = lVar1;
  return;
}



void otv_MathGlyphConstruction_validate(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  puVar1 = param_1 + 2;
  lVar2 = *param_2;
  if (*(ushort **)(lVar2 + 0xd0) < puVar1) {
    ft_validator_error(lVar2,8);
    lVar2 = *param_2;
  }
  uVar3 = *param_1;
  uVar5 = param_1[1] << 8 | param_1[1] >> 8;
  if (*(ulong *)(lVar2 + 0xd0) < (ulong)((uint)uVar5 * 4) + (long)puVar1) {
    ft_validator_error(lVar2,8);
  }
  if (uVar5 != 0) {
    do {
      while ((uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8) < *(uint *)((long)param_2 + 0x1c)) {
        puVar1 = puVar1 + 2;
        if (param_1 + (ulong)(uVar5 + 1) * 2 == puVar1) goto LAB_0010317f;
      }
      puVar1 = puVar1 + 2;
      ft_validator_error(*param_2,0x10);
    } while (param_1 + (ulong)(uVar5 + 1) * 2 != puVar1);
  }
LAB_0010317f:
  if (uVar3 == 0) {
    return;
  }
  uVar3 = uVar3 << 8 | uVar3 >> 8;
  lVar2 = *param_2;
  if ((uint)uVar3 < (uint)uVar5 * 4 + 4) {
    if (*(int *)(lVar2 + 0xd8) != 2) {
      *param_1 = 0;
      return;
    }
    ft_validator_error(lVar2,9);
    lVar2 = *param_2;
  }
  puVar1 = (ushort *)((long)param_1 + (ulong)uVar3 + 6);
  if (*(ushort **)(lVar2 + 0xd0) < puVar1) {
    ft_validator_error(lVar2,8);
    lVar2 = *param_2;
  }
  uVar5 = *(ushort *)((long)param_1 + (ulong)uVar3 + 4);
  uVar4 = *(ushort *)((long)param_1 + (ulong)uVar3 + 2);
  uVar5 = uVar5 << 8 | uVar5 >> 8;
  if (*(ulong *)(lVar2 + 0xd0) < (ulong)((uint)uVar5 * 8) + (long)puVar1) {
    ft_validator_error(lVar2,8);
  }
  if (uVar4 != 0) {
    uVar4 = uVar4 << 8 | uVar4 >> 8;
    if ((uint)uVar4 < (uint)uVar5 * 8 + 6) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        *(undefined2 *)((long)param_1 + (ulong)uVar3 + 2) = 0;
        goto LAB_00103224;
      }
      ft_validator_error(*param_2,9);
    }
    otv_Device_validate((long)param_1 + (ulong)uVar4 + (ulong)uVar3,param_2);
  }
LAB_00103224:
  if (uVar5 != 0) {
    param_1 = (ushort *)((long)param_1 + (ulong)(uVar5 - 1) * 10 + (ulong)uVar3 + 0x10);
    do {
      while (*(uint *)((long)param_2 + 0x1c) <= (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8)) {
        puVar1 = puVar1 + 5;
        ft_validator_error(*param_2,0x10);
        if (param_1 == puVar1) {
          return;
        }
      }
      puVar1 = puVar1 + 5;
    } while (param_1 != puVar1);
  }
  return;
}



void otv_ExtensionPos_validate(short *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*(short **)(lVar3 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar3,8);
    lVar3 = *param_2;
  }
  if (*param_1 == 0x100) {
    if (*(short **)(lVar3 + 0xd0) < param_1 + 4) {
      ft_validator_error(lVar3,8);
    }
    uVar1 = *(uint *)(param_1 + 2);
    uVar2 = (ushort)(param_1[1] << 8 | (ushort)param_1[1] >> 8) - 1;
    if (7 < uVar2) {
      ft_validator_error(*param_2,8);
    }
                    /* WARNING: Could not recover jumptable at 0x00103398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[2] + (ulong)uVar2 * 8))
              ((long)param_1 +
               (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18),param_2);
    return;
  }
  ft_validator_error(lVar3,8);
  return;
}



void otv_MarkMarkPos_validate(short *param_1,long *param_2)

{
  if (*(short **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
  }
  if (*param_1 != 0x100) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)((long)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = (long)otv_u_O_O_u_O_O;
  param_2[6] = (long)otv_x_sxy;
  otv_u_O_O_u_O_O(param_1,param_2);
  return;
}



void otv_MarkLigPos_validate(short *param_1,long *param_2)

{
  if (*(short **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
  }
  if (*param_1 != 0x100) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)((long)param_2 + 0x44) = 1;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[7] = (long)otv_x_sxy;
  param_2[5] = (long)otv_u_O_O_u_O_O;
  param_2[6] = (long)otv_x_Ox;
  otv_u_O_O_u_O_O(param_1,param_2);
  return;
}



void otv_MarkBasePos_validate(short *param_1,long *param_2)

{
  if (*(short **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
  }
  if (*param_1 != 0x100) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)((long)param_2 + 0x44) = 1;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = (long)otv_u_O_O_u_O_O;
  param_2[6] = (long)otv_x_sxy;
  otv_u_O_O_u_O_O(param_1,param_2);
  return;
}



void otv_CursivePos_validate(short *param_1,long *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *param_2;
  if (*(short **)(lVar7 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar7,8);
    lVar7 = *param_2;
  }
  if (*param_1 != 0x100) {
    ft_validator_error(lVar7,8);
    return;
  }
  puVar3 = (ushort *)(param_1 + 3);
  if (*(ushort **)(lVar7 + 0xd0) < puVar3) {
    ft_validator_error(lVar7,8);
  }
  uVar5 = param_1[2] << 8 | (ushort)param_1[2] >> 8;
  otv_Coverage_validate
            ((ulong)(ushort)(param_1[1] << 8 | (ushort)param_1[1] >> 8) + (long)param_1,param_2,
             uVar5);
  if (*(ulong *)(*param_2 + 0xd0) < (ulong)((uint)uVar5 * 4) + (long)puVar3) {
    ft_validator_error(*param_2,8);
  }
  if (uVar5 != 0) {
    uVar8 = (uint)uVar5 * 4 + 4;
    do {
      uVar6 = *puVar3;
      puVar4 = puVar3 + 2;
      uVar1 = puVar3[1];
      if (uVar6 != 0) {
        uVar2 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
        if (uVar2 < uVar8) {
          if (*(int *)(*param_2 + 0xd8) != 2) {
            *puVar3 = 0;
            goto LAB_00103680;
          }
          ft_validator_error(*param_2,9);
        }
        otv_Anchor_validate((ulong)uVar2 + (long)param_1,param_2);
      }
LAB_00103680:
      if (uVar1 != 0) {
        uVar6 = uVar1 << 8 | uVar1 >> 8;
        if (uVar6 < uVar8) {
          if (*(int *)(*param_2 + 0xd8) != 2) {
            puVar3[1] = 0;
            goto LAB_001036b0;
          }
          ft_validator_error(*param_2,9);
        }
        otv_Anchor_validate((long)param_1 + (ulong)uVar6,param_2);
      }
LAB_001036b0:
      puVar3 = puVar4;
    } while ((ushort *)(param_1 + (ulong)(uVar5 - 1) * 2 + 5) != puVar4);
  }
  return;
}



void otv_ReverseChainSingleSubst_validate(short *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  long lVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  
  lVar5 = *param_2;
  if (*(short **)(lVar5 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  if (*param_1 == 0x100) {
    puVar4 = (ushort *)(param_1 + 3);
    if (*(ushort **)(lVar5 + 0xd0) < puVar4) {
      ft_validator_error(lVar5,8);
    }
    uVar7 = param_1[2] << 8 | (ushort)param_1[2] >> 8;
    lVar5 = (long)param_1 + (ulong)(ushort)(param_1[1] << 8 | (ushort)param_1[1] >> 8);
    otv_Coverage_validate(lVar5,param_2,0xffffffff);
    if (*(undefined1 **)(*param_2 + 0xd0) <
        (undefined1 *)((ulong)(uVar7 + 2 + (uint)uVar7) + (long)puVar4)) {
      ft_validator_error(*param_2,8);
    }
    if (uVar7 != 0) {
      puVar6 = puVar4;
      do {
        uVar2 = *puVar6;
        puVar1 = (undefined1 *)((long)puVar6 + 1);
        puVar6 = puVar6 + 1;
        otv_Coverage_validate
                  ((ulong)CONCAT11((char)uVar2,*puVar1) + (long)param_1,param_2,0xffffffff);
      } while (puVar6 != (ushort *)(param_1 + (ulong)(uVar7 - 1) + 4));
      puVar4 = puVar4 + uVar7;
    }
    puVar6 = puVar4 + 1;
    uVar7 = *puVar4 << 8 | *puVar4 >> 8;
    uVar3 = uVar7 + 1;
    if (*(undefined1 **)(*param_2 + 0xd0) < (undefined1 *)((ulong)(uVar3 * 2) + (long)puVar6)) {
      ft_validator_error(*param_2,8);
    }
    if (uVar7 != 0) {
      puVar8 = puVar6;
      do {
        uVar7 = *puVar8;
        puVar1 = (undefined1 *)((long)puVar8 + 1);
        puVar8 = puVar8 + 1;
        otv_Coverage_validate
                  ((ulong)CONCAT11((char)uVar7,*puVar1) + (long)param_1,param_2,0xffffffff);
        puVar6 = puVar4 + uVar3;
      } while (puVar8 != puVar4 + uVar3);
    }
    puVar4 = puVar6 + 1;
    uVar7 = *puVar6 << 8 | *puVar6 >> 8;
    uVar3 = otv_Coverage_get_count(lVar5);
    if (uVar7 != uVar3) {
      ft_validator_error(*param_2,8);
    }
    if (*(undefined1 **)(*param_2 + 0xd0) <
        (undefined1 *)((ulong)((uint)uVar7 + (uint)uVar7) + (long)puVar4)) {
      ft_validator_error(*param_2,8);
    }
    if (uVar7 != 0) {
      do {
        while (uVar2 = *puVar4, puVar1 = (undefined1 *)((long)puVar4 + 1), puVar4 = puVar4 + 1,
              (uint)CONCAT11((char)uVar2,*puVar1) < *(uint *)((long)param_2 + 0x1c)) {
          if (puVar6 + (uVar7 + 1) == puVar4) {
            return;
          }
        }
        ft_validator_error(*param_2,8);
      } while (puVar6 + (uVar7 + 1) != puVar4);
    }
    return;
  }
  ft_validator_error(lVar5,8);
  return;
}



void otv_ExtensionSubst_validate(short *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*(short **)(lVar3 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar3,8);
    lVar3 = *param_2;
  }
  if (*param_1 == 0x100) {
    if (*(short **)(lVar3 + 0xd0) < param_1 + 4) {
      ft_validator_error(lVar3,8);
    }
    uVar1 = *(uint *)(param_1 + 2);
    uVar2 = param_1[1] << 8 | (ushort)param_1[1] >> 8;
    if ((7 < (ushort)(uVar2 - 1)) || (uVar2 == 7)) {
      ft_validator_error(*param_2,8);
    }
                    /* WARNING: Could not recover jumptable at 0x00103ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[2] + (ulong)(uVar2 - 1) * 8))
              ((long)param_1 +
               (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18),param_2);
    return;
  }
  ft_validator_error(lVar3,8);
  return;
}



void otv_LigatureSubst_validate(short *param_1,long *param_2)

{
  if (*(short **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
  }
  if (*param_1 != 0x100) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[7] = (long)otv_Ligature_validate;
  param_2[5] = (long)otv_u_C_x_Ox;
  param_2[6] = (long)otv_x_Ox;
  otv_u_C_x_Ox(param_1,param_2);
  return;
}



void otv_MultipleSubst_validate(short *param_1,long *param_2)

{
  if (*(short **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
  }
  if (*param_1 != 0x100) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[5] = (long)otv_u_C_x_Ox;
  param_2[6] = (long)otv_x_ux;
  otv_u_C_x_Ox(param_1,param_2);
  return;
}



void otv_MathItalicsCorrectionInfo_validate_isra_0(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  
  puVar1 = param_1 + 2;
  lVar4 = *param_2;
  if (*(ushort **)(lVar4 + 0xd0) < puVar1) {
    ft_validator_error(lVar4,8);
    lVar4 = *param_2;
  }
  uVar3 = *param_1;
  uVar2 = param_1[1] << 8 | param_1[1] >> 8;
  if (*(ulong *)(lVar4 + 0xd0) < (ulong)((uint)uVar2 * 4) + (long)puVar1) {
    ft_validator_error(lVar4,8);
  }
  uVar6 = (uint)uVar2 * 4 + 4;
  puVar5 = param_1;
  if (uVar3 != 0) {
    uVar3 = uVar3 << 8 | uVar3 >> 8;
    if (uVar3 < uVar6) {
      if (*(int *)(*param_2 + 0xd8) != 2) {
        *param_1 = 0;
        goto LAB_00103cd5;
      }
      ft_validator_error(*param_2,9);
    }
    puVar5 = (ushort *)((long)param_1 + (ulong)uVar3);
  }
LAB_00103cd5:
  otv_Coverage_validate(puVar5,param_2,uVar2);
  if (uVar2 != 0) {
    do {
      while( true ) {
        uVar3 = puVar1[1];
        puVar5 = puVar1 + 2;
        if (uVar3 != 0) break;
LAB_00103cfe:
        puVar1 = puVar5;
        if (param_1 + (ulong)(uVar2 + 1) * 2 == puVar5) {
          return;
        }
      }
      uVar3 = uVar3 << 8 | uVar3 >> 8;
      if (uVar6 <= uVar3) {
LAB_00103cf0:
        otv_Device_validate((ulong)uVar3 + (long)param_1,param_2);
        goto LAB_00103cfe;
      }
      if (*(int *)(*param_2 + 0xd8) == 2) {
        ft_validator_error(*param_2,9);
        goto LAB_00103cf0;
      }
      puVar1[1] = 0;
      puVar1 = puVar5;
    } while (param_1 + (ulong)(uVar2 + 1) * 2 != puVar5);
  }
  return;
}



int otv_validate(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  long lVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort uVar20;
  __jmp_buf_tag *p_Var21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ushort *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  ushort uVar28;
  ushort *puVar29;
  long in_FS_OFFSET;
  uint local_478;
  uint local_46c;
  short *local_368;
  short *local_360;
  short *local_358;
  short *local_350;
  int *local_348;
  int *local_340;
  long local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  __jmp_buf_tag *local_308 [10];
  __jmp_buf_tag *local_2b8;
  undefined4 local_2b0;
  undefined1 *local_2a8;
  uint local_29c;
  __jmp_buf_tag *local_268;
  undefined4 local_260;
  undefined1 *local_258;
  uint local_24c;
  __jmp_buf_tag *local_218 [3];
  uint local_1fc;
  undefined4 local_1f8;
  code *local_1f0;
  code *pcStack_1e8;
  code *local_1e0;
  __jmp_buf_tag *local_1c8 [3];
  uint local_1ac;
  undefined4 local_1a8;
  code *local_1a0;
  code *pcStack_198;
  uint local_188;
  uint local_184;
  __jmp_buf_tag *local_178 [3];
  uint local_15c;
  __jmp_buf_tag local_128;
  ushort *local_58;
  int local_50;
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_310 = 0;
  local_318 = 0;
  local_340 = (int *)0x0;
  local_348 = (int *)0x0;
  local_350 = (short *)0x0;
  local_358 = (short *)0x0;
  local_360 = (short *)0x0;
  local_368 = (short *)0x0;
  local_320 = 0;
  local_328 = 0;
  uVar14 = 0xffff;
  if (*(long *)(param_1 + 0x20) < 0x10000) {
    uVar14 = (uint)*(undefined8 *)(param_1 + 0x20);
  }
  local_330 = 0;
  local_338 = 0;
  if (((((((param_2 & 0x100) == 0) ||
         (iVar10 = otv_load_table(param_1,0x42415345,&local_368), iVar10 == 0)) &&
        (((param_2 & 0x200) == 0 ||
         (iVar10 = otv_load_table(param_1,0x47444546,&local_360), iVar10 == 0)))) &&
       (((param_2 & 0x400) == 0 ||
        (iVar10 = otv_load_table(param_1,0x47504f53,&local_358), iVar10 == 0)))) &&
      (((param_2 & 0x800) == 0 ||
       (iVar10 = otv_load_table(param_1,0x47535542,&local_350), iVar10 == 0)))) &&
     ((((param_2 & 0x1000) == 0 ||
       (iVar10 = otv_load_table(param_1,0x4a535446,&local_348), iVar10 == 0)) &&
      (((param_2 & 0x2000) == 0 ||
       (iVar10 = otv_load_table(param_1,0x4d415448,&local_340), iVar10 == 0)))))) {
    if (local_368 != (short *)0x0) {
      ft_validator_init(&local_128,local_368,(long)local_368 + local_338);
      iVar10 = _setjmp(&local_128);
      psVar6 = local_368;
      if (iVar10 == 0) {
        local_308[0] = &local_128;
        if (local_58 < local_368 + 2) {
          ft_validator_error();
        }
        if (*psVar6 != 0x100) {
          ft_validator_error();
        }
        uVar13 = psVar6[1] << 8 | (ushort)psVar6[1] >> 8;
        if (uVar13 == 0) {
          if (local_58 < psVar6 + 4) goto LAB_00104444;
LAB_00104456:
          uVar12 = psVar6[2];
          uVar24 = 8;
          if (uVar12 != 0) {
LAB_00104465:
            uVar12 = uVar12 << 8 | uVar12 >> 8;
            if (uVar12 < uVar24) {
              if (local_50 != 2) {
                psVar6[2] = 0;
                goto LAB_0010448b;
              }
              ft_validator_error(&local_128,9);
            }
            otv_Axis_validate((long)psVar6 + (ulong)uVar12);
          }
LAB_0010448b:
          uVar12 = psVar6[3];
          if (uVar12 != 0) {
LAB_00104494:
            uVar12 = uVar12 << 8 | uVar12 >> 8;
            if (uVar12 < uVar24) {
              if (local_50 != 2) {
                psVar6[3] = 0;
                goto LAB_001044ba;
              }
              ft_validator_error(&local_128,9);
            }
            otv_Axis_validate((long)psVar6 + (ulong)uVar12,local_308);
          }
LAB_001044ba:
          if (uVar13 == 0) goto LAB_00103f7b;
        }
        else {
          if (uVar13 != 1) {
LAB_00104444:
            ft_validator_error();
            goto LAB_00104456;
          }
          if (local_58 < psVar6 + 6) {
            ft_validator_error();
          }
          uVar12 = psVar6[2];
          if (uVar12 != 0) {
            uVar24 = 0xc;
            goto LAB_00104465;
          }
          uVar12 = psVar6[3];
          uVar24 = 0xc;
          if (uVar12 != 0) goto LAB_00104494;
        }
        uVar22 = *(uint *)(psVar6 + 4);
        if ((uVar22 != 0) &&
           ((uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18) <
            uVar24)) {
          if (local_50 == 2) {
            ft_validator_error(&local_128,9);
          }
          else {
            psVar6[4] = 0;
            psVar6[5] = 0;
          }
        }
      }
LAB_00103f7b:
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_001041d8;
    }
    if (local_358 != (short *)0x0) {
      ft_validator_init(&local_128,local_358,(long)local_358 + local_328);
      iVar10 = _setjmp(&local_128);
      psVar6 = local_358;
      if (iVar10 == 0) {
        local_2b8 = &local_128;
        if (local_58 < local_358 + 2) {
          ft_validator_error(local_2b8,8);
        }
        if (*psVar6 != 0x100) {
          ft_validator_error(local_2b8,8);
        }
        uVar13 = psVar6[1] << 8 | (ushort)psVar6[1] >> 8;
        if (uVar13 == 0) {
          if ((short *)local_2b8[1].__jmpbuf[1] < psVar6 + 5) goto LAB_001051a8;
LAB_00104818:
          local_478 = 10;
        }
        else {
          if (uVar13 != 1) {
LAB_001051a8:
            ft_validator_error(local_2b8,8);
            goto LAB_00104818;
          }
          if ((short *)local_2b8[1].__jmpbuf[1] < psVar6 + 7) {
            ft_validator_error(local_2b8,8);
          }
          local_478 = 0xe;
        }
        uVar12 = psVar6[2];
        local_2a8 = otv_gpos_validate_funcs;
        local_2b0 = 9;
        lVar23 = (ulong)(ushort)(psVar6[4] << 8 | (ushort)psVar6[4] >> 8) + (long)psVar6;
        lVar16 = (ulong)(ushort)(psVar6[3] << 8 | (ushort)psVar6[3] >> 8) + (long)psVar6;
        local_29c = uVar14;
        otv_LookupList_validate(lVar23,&local_2b8);
        otv_FeatureList_validate(lVar16,lVar23,&local_2b8);
        otv_ScriptList_validate
                  ((ulong)(ushort)(uVar12 << 8 | uVar12 >> 8) + (long)psVar6,lVar16,&local_2b8);
        if (((uVar13 != 0) &&
            (uVar24 = *(uint *)(psVar6 + 5),
            (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18) <
            local_478)) && (uVar24 != 0)) {
          if ((int)local_2b8[1].__jmpbuf[2] == 2) {
            ft_validator_error(local_2b8,9);
          }
          else {
            psVar6[5] = 0;
            psVar6[6] = 0;
          }
        }
      }
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_001041d8;
    }
    if (local_350 != (short *)0x0) {
      ft_validator_init(&local_128,local_350,(long)local_350 + local_320);
      iVar10 = _setjmp(&local_128);
      psVar6 = local_350;
      if (iVar10 == 0) {
        local_268 = &local_128;
        if (local_58 < local_350 + 2) {
          ft_validator_error(local_268,8);
        }
        if (*psVar6 != 0x100) {
          ft_validator_error(local_268,8);
        }
        uVar13 = psVar6[1] << 8 | (ushort)psVar6[1] >> 8;
        if (uVar13 == 0) {
          if ((short *)local_268[1].__jmpbuf[1] < psVar6 + 5) goto LAB_0010525d;
LAB_00104850:
          local_46c = 10;
        }
        else {
          if (uVar13 != 1) {
LAB_0010525d:
            ft_validator_error(local_268,8);
            goto LAB_00104850;
          }
          if ((short *)local_268[1].__jmpbuf[1] < psVar6 + 7) {
            ft_validator_error(local_268,8);
          }
          local_46c = 0xe;
        }
        uVar12 = psVar6[2];
        local_258 = otv_gsub_validate_funcs;
        local_260 = 8;
        lVar23 = (ulong)(ushort)(psVar6[4] << 8 | (ushort)psVar6[4] >> 8) + (long)psVar6;
        lVar16 = (ulong)(ushort)(psVar6[3] << 8 | (ushort)psVar6[3] >> 8) + (long)psVar6;
        local_24c = uVar14;
        otv_LookupList_validate(lVar23,&local_268);
        otv_FeatureList_validate(lVar16,lVar23,&local_268);
        otv_ScriptList_validate
                  ((ulong)(ushort)(uVar12 << 8 | uVar12 >> 8) + (long)psVar6,lVar16,&local_268);
        if (((uVar13 != 0) &&
            (uVar24 = *(uint *)(psVar6 + 5),
            (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18) <
            local_46c)) && (uVar24 != 0)) {
          if ((int)local_268[1].__jmpbuf[2] == 2) {
            ft_validator_error(local_268,9);
          }
          else {
            psVar6[5] = 0;
            psVar6[6] = 0;
          }
        }
      }
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_001041d8;
    }
    if (local_360 != (short *)0x0) {
      ft_validator_init(&local_128,local_360,(long)local_360 + local_330);
      iVar10 = _setjmp(&local_128);
      psVar8 = local_350;
      psVar7 = local_358;
      psVar6 = local_360;
      if (iVar10 == 0) {
        local_218[0] = &local_128;
        if (local_58 < local_360 + 2) {
          ft_validator_error(local_218[0],8);
        }
        if (*psVar6 != 0x100) {
          ft_validator_error(local_218[0],8);
        }
        uVar13 = psVar6[1];
        uVar12 = uVar13 << 8 | uVar13 >> 8;
        if (uVar13 == 0x200) {
          if ((short *)local_218[0][1].__jmpbuf[1] < psVar6 + 7) {
            ft_validator_error(local_218[0],8);
          }
          bVar4 = true;
          uVar24 = 0xe;
        }
        else if (uVar12 == 3) {
          if ((short *)local_218[0][1].__jmpbuf[1] < psVar6 + 9) {
            ft_validator_error(local_218[0],8);
          }
          bVar4 = true;
          uVar24 = 0x12;
        }
        else if (uVar12 == 0) {
          p_Var21 = local_218[0];
          iVar10 = otv_GSUBGPOS_have_MarkAttachmentType_flag(psVar8);
          if ((iVar10 == 0) &&
             (iVar10 = otv_GSUBGPOS_have_MarkAttachmentType_flag(psVar7), iVar10 == 0)) {
            if ((short *)p_Var21[1].__jmpbuf[1] < psVar6 + 5) {
              ft_validator_error(p_Var21,8);
            }
            bVar4 = false;
            uVar24 = 10;
          }
          else {
            if ((short *)p_Var21[1].__jmpbuf[1] < psVar6 + 6) {
              ft_validator_error(p_Var21,8);
            }
            bVar4 = true;
            uVar24 = 0xc;
          }
        }
        else {
          bVar4 = true;
          uVar24 = 10;
          ft_validator_error(local_218[0],8);
        }
        uVar28 = psVar6[2];
        local_1fc = uVar14;
        if (uVar28 != 0) {
          uVar28 = uVar28 << 8 | uVar28 >> 8;
          if (uVar28 < uVar24) {
            if ((int)local_218[0][1].__jmpbuf[2] != 2) {
              psVar6[2] = 0;
              goto LAB_00104988;
            }
            ft_validator_error(local_218[0],9);
          }
          otv_ClassDef_validate((long)psVar6 + (ulong)uVar28,local_218);
        }
LAB_00104988:
        uVar28 = psVar6[3];
        if (uVar28 != 0) {
          uVar28 = uVar28 << 8 | uVar28 >> 8;
          if (uVar28 < uVar24) {
            if ((int)local_218[0][1].__jmpbuf[2] != 2) {
              psVar6[3] = 0;
              goto LAB_001049c8;
            }
            ft_validator_error(local_218[0],9);
          }
          local_1f8 = 0;
          local_1f0 = otv_O_x_Ox;
          pcStack_1e8 = otv_x_ux;
          otv_O_x_Ox((long)psVar6 + (ulong)uVar28,local_218);
        }
LAB_001049c8:
        uVar28 = psVar6[4];
        if (uVar28 != 0) {
          uVar28 = uVar28 << 8 | uVar28 >> 8;
          if (uVar28 < uVar24) {
            if ((int)local_218[0][1].__jmpbuf[2] != 2) {
              psVar6[4] = 0;
              goto LAB_00104a00;
            }
            ft_validator_error(local_218[0],9);
          }
          local_1f8 = 0;
          local_1e0 = otv_CaretValue_validate;
          local_1f0 = otv_O_x_Ox;
          pcStack_1e8 = otv_x_Ox;
          otv_O_x_Ox((long)psVar6 + (ulong)uVar28,local_218);
        }
LAB_00104a00:
        if (bVar4) {
          uVar28 = psVar6[5];
          if (uVar28 != 0) {
            uVar28 = uVar28 << 8 | uVar28 >> 8;
            if (uVar28 < uVar24) {
              if ((int)local_218[0][1].__jmpbuf[2] != 2) {
                psVar6[5] = 0;
                goto LAB_00105279;
              }
              ft_validator_error(local_218[0],9);
            }
            otv_ClassDef_validate((long)psVar6 + (ulong)uVar28,local_218);
          }
LAB_00105279:
          puVar17 = (ushort *)(psVar6 + 6);
        }
        else {
          puVar17 = (ushort *)(psVar6 + 5);
        }
        if (uVar13 != 0) {
          uVar13 = *puVar17;
          if (uVar13 != 0) {
            uVar13 = uVar13 << 8 | uVar13 >> 8;
            if (uVar13 < uVar24) {
              if ((int)local_218[0][1].__jmpbuf[2] != 2) {
                *puVar17 = 0;
                goto LAB_00104a50;
              }
              ft_validator_error(local_218[0],9);
            }
            pbVar26 = (byte *)((long)psVar6 + (ulong)uVar13 + 4);
            if ((byte *)local_218[0][1].__jmpbuf[1] < pbVar26) {
              ft_validator_error(local_218[0],8);
            }
            uVar28 = *(ushort *)((long)psVar6 + (ulong)uVar13 + 2);
            uVar28 = uVar28 << 8 | uVar28 >> 8;
            if ((byte *)local_218[0][1].__jmpbuf[1] < pbVar26 + (uint)uVar28 * 4) {
              ft_validator_error(local_218[0],8);
            }
            if (uVar28 != 0) {
              do {
                pbVar27 = pbVar26 + 4;
                otv_Coverage_validate
                          ((long)psVar6 +
                           (ulong)((uint)*pbVar26 << 0x18 | (uint)pbVar26[1] << 0x10 |
                                   (uint)pbVar26[3] | (uint)pbVar26[2] << 8) + (ulong)uVar13,
                           local_218,0xffffffff);
                pbVar26 = pbVar27;
              } while ((byte *)((long)psVar6 + (ulong)(uVar28 + 1) * 4 + (ulong)uVar13) != pbVar27);
            }
          }
LAB_00104a50:
          if (((2 < uVar12) &&
              (uVar22 = *(uint *)(puVar17 + 1),
              (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18)
              < uVar24)) && (uVar22 != 0)) {
            if ((int)local_218[0][1].__jmpbuf[2] == 2) {
              ft_validator_error(local_218[0],9);
            }
            else {
              puVar17[1] = 0;
              puVar17[2] = 0;
            }
          }
        }
      }
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_001041d8;
    }
    if (local_348 != (int *)0x0) {
      ft_validator_init(&local_128,local_348,(long)local_348 + local_318,0);
      iVar10 = _setjmp(&local_128);
      piVar9 = local_348;
      psVar7 = local_350;
      psVar6 = local_358;
      if (iVar10 == 0) {
        local_1c8[0] = &local_128;
        puVar17 = (ushort *)((long)local_348 + 6);
        if (local_58 < puVar17) {
          ft_validator_error(local_1c8[0],8);
        }
        if (*piVar9 != 0x100) {
          ft_validator_error(local_1c8[0],8);
        }
        uVar13 = *(ushort *)(piVar9 + 1) << 8 | *(ushort *)(piVar9 + 1) >> 8;
        if ((ulong)local_1c8[0][1].__jmpbuf[1] <
            (ulong)(((uint)uVar13 + (uint)uVar13 * 2) * 2) + (long)puVar17) {
          ft_validator_error(local_1c8[0],8);
        }
        puVar5 = PTR_otv_x_Ox_00106568;
        local_188 = 0;
        if (psVar7 != (short *)0x0) {
          uVar12 = *(ushort *)
                    ((long)psVar7 + (ulong)(ushort)(psVar7[4] << 8 | (ushort)psVar7[4] >> 8));
          local_188 = (uint)(ushort)(uVar12 << 8 | uVar12 >> 8);
        }
        local_184 = 0;
        if (psVar6 != (short *)0x0) {
          uVar12 = *(ushort *)
                    ((long)psVar6 + (ulong)(ushort)(psVar6[4] << 8 | (ushort)psVar6[4] >> 8));
          local_184 = (uint)(ushort)(uVar12 << 8 | uVar12 >> 8);
        }
        local_1ac = uVar14;
        if (uVar13 != 0) {
          do {
            puVar15 = puVar17 + 2;
            puVar17 = puVar17 + 3;
            puVar25 = (ushort *)((ulong)(ushort)(*puVar15 << 8 | *puVar15 >> 8) + (long)piVar9);
            puVar15 = puVar25 + 3;
            if ((ushort *)local_1c8[0][1].__jmpbuf[1] < puVar15) {
              ft_validator_error(local_1c8[0],8);
            }
            uVar12 = *puVar25;
            uVar28 = puVar25[1];
            uVar20 = puVar25[2] << 8 | puVar25[2] >> 8;
            uVar24 = ((uint)uVar20 * 3 + 3) * 2;
            if (uVar12 != 0) {
              uVar22 = (uint)(ushort)(uVar12 << 8 | uVar12 >> 8);
              if (uVar22 < uVar24) {
                if ((int)local_1c8[0][1].__jmpbuf[2] != 2) {
                  *puVar25 = 0;
                  goto LAB_00104c60;
                }
                ft_validator_error(local_1c8[0],9);
              }
              local_1a0 = otv_x_ux;
              local_188 = local_1ac;
              local_1a8 = 0;
              otv_x_ux((ulong)uVar22 + (long)puVar25,local_1c8);
            }
LAB_00104c60:
            if (uVar28 != 0) {
              uVar12 = uVar28 << 8 | uVar28 >> 8;
              if (uVar12 < uVar24) {
                if ((int)local_1c8[0][1].__jmpbuf[2] != 2) {
                  puVar25[1] = 0;
                  goto LAB_00104c98;
                }
                ft_validator_error(local_1c8[0],9);
              }
              local_1a8 = 0;
              local_1a0 = (code *)puVar5;
              pcStack_198 = otv_JstfPriority_validate;
              otv_x_Ox((long)puVar25 + (ulong)uVar12,local_1c8);
            }
LAB_00104c98:
            if ((ulong)local_1c8[0][1].__jmpbuf[1] < (ulong)(uVar24 - 6) + (long)puVar15) {
              ft_validator_error(local_1c8[0],8);
            }
            local_1a8 = 0;
            local_1a0 = (code *)puVar5;
            pcStack_198 = otv_JstfPriority_validate;
            if (uVar20 != 0) {
              pcVar11 = otv_x_Ox;
              do {
                puVar18 = puVar15 + 2;
                puVar15 = puVar15 + 3;
                (*pcVar11)((ulong)(ushort)(*puVar18 << 8 | *puVar18 >> 8) + (long)puVar25,local_1c8)
                ;
                pcVar11 = local_1a0;
              } while (puVar25 + (ulong)(uVar20 - 1) * 3 + 6 != puVar15);
            }
          } while ((ushort *)((long)piVar9 + (ulong)(uVar13 - 1) * 6 + 0xc) != puVar17);
        }
      }
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_001041d8;
    }
    if (local_340 != (int *)0x0) {
      ft_validator_init(&local_128,local_340,(long)local_340 + local_310,0);
      iVar10 = _setjmp(&local_128);
      piVar9 = local_340;
      if (iVar10 == 0) {
        local_178[0] = &local_128;
        if (local_58 < (ushort *)((long)local_340 + 10)) {
          ft_validator_error(local_178[0],8);
        }
        if (*piVar9 != 0x100) {
          ft_validator_error(&local_128,8);
        }
        uVar13 = *(ushort *)((long)piVar9 + 6);
        uVar12 = *(ushort *)(piVar9 + 2);
        uVar28 = *(ushort *)(piVar9 + 1) << 8 | *(ushort *)(piVar9 + 1) >> 8;
        local_15c = uVar14;
        if (local_58 < (ushort *)((long)piVar9 + (ulong)uVar28 + 0xd6)) {
          ft_validator_error(&local_128,8);
        }
        lVar16 = (long)piVar9 + (ulong)uVar28 + 8;
        do {
          uVar20 = *(ushort *)(lVar16 + 2);
          lVar23 = lVar16 + 4;
          if (uVar20 != 0) {
            uVar20 = uVar20 << 8 | uVar20 >> 8;
            if (uVar20 < 0xd6) {
              if (local_50 == 2) {
                ft_validator_error(&local_128,9);
                otv_Device_validate((long)piVar9 + (ulong)uVar20 + (ulong)uVar28,local_178);
              }
              else {
                *(undefined2 *)(lVar16 + 2) = 0;
              }
            }
            else {
              otv_Device_validate((long)piVar9 + (ulong)uVar20 + (ulong)uVar28,local_178);
            }
          }
          lVar16 = lVar23;
        } while ((long)piVar9 + (ulong)uVar28 + 0xd4 != lVar23);
        puVar17 = (ushort *)((ulong)(ushort)(uVar13 << 8 | uVar13 >> 8) + (long)piVar9);
        if (local_58 < puVar17 + 4) {
          ft_validator_error(&local_128,8);
        }
        uVar13 = *puVar17;
        uVar28 = puVar17[1];
        uVar20 = puVar17[2];
        uVar2 = puVar17[3];
        if (uVar13 != 0) {
          otv_MathItalicsCorrectionInfo_validate_isra_0
                    ((ulong)(ushort)(uVar13 << 8 | uVar13 >> 8) + (long)puVar17,local_178);
        }
        if (uVar28 != 0) {
          otv_MathItalicsCorrectionInfo_validate_isra_0
                    ((ulong)(ushort)(uVar28 << 8 | uVar28 >> 8) + (long)puVar17,local_178);
        }
        if (uVar20 != 0) {
          otv_Coverage_validate
                    ((ulong)(ushort)(uVar20 << 8 | uVar20 >> 8) + (long)puVar17,local_178,0xffffffff
                    );
        }
        if (uVar2 != 0) {
          puVar17 = (ushort *)((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + (long)puVar17);
          puVar15 = puVar17 + 2;
          if (local_58 < puVar15) {
            ft_validator_error(&local_128,8);
          }
          uVar13 = *puVar17;
          uVar28 = puVar17[1] << 8 | puVar17[1] >> 8;
          if (local_58 < (ushort *)((ulong)((uint)uVar28 * 8) + (long)puVar15)) {
            ft_validator_error(&local_128,8);
          }
          uVar14 = (uint)uVar28 * 8 + 4;
          puVar25 = puVar17;
          if (uVar13 != 0) {
            uVar13 = uVar13 << 8 | uVar13 >> 8;
            if (uVar13 < uVar14) {
              if (local_50 == 2) {
                ft_validator_error(&local_128,9);
                puVar25 = (ushort *)((long)puVar17 + (ulong)uVar13);
              }
              else {
                *puVar17 = 0;
              }
            }
            else {
              puVar25 = (ushort *)((long)puVar17 + (ulong)uVar13);
            }
          }
          uVar24 = 0;
          otv_Coverage_validate(puVar25,local_178,uVar28);
          if (uVar28 != 0) {
            do {
              puVar25 = puVar15 + 4;
              puVar18 = puVar15;
              do {
                puVar15 = puVar18 + 1;
                uVar13 = CONCAT11((char)*puVar18,*(undefined1 *)((long)puVar18 + 1));
                if (uVar13 != 0) {
                  if (uVar13 < uVar14) {
                    if (local_50 != 2) {
                      *puVar18 = 0;
                      goto LAB_001056fc;
                    }
                    ft_validator_error(&local_128,9);
                  }
                  puVar1 = (ushort *)((long)puVar17 + (ulong)uVar13);
                  puVar18 = puVar1 + 1;
                  if (local_58 < puVar18) {
                    ft_validator_error(&local_128,8);
                  }
                  uVar13 = *puVar1 << 8 | *puVar1 >> 8;
                  if (local_58 < (ushort *)((ulong)((uint)uVar13 * 4 + 2) + (long)puVar18)) {
                    ft_validator_error(&local_128,8);
                  }
                  uVar22 = (uint)uVar13 * 4 + 4;
                  puVar29 = puVar18;
                  if (uVar13 != 0) {
                    puVar29 = puVar1 + (ulong)(uVar13 - 1) * 2 + 3;
                    do {
                      uVar20 = puVar18[1];
                      puVar19 = puVar18 + 2;
                      if (uVar20 != 0) {
                        uVar20 = uVar20 << 8 | uVar20 >> 8;
                        if (uVar20 < uVar22) {
                          if (local_50 != 2) {
                            puVar18[1] = 0;
                            goto LAB_001057f0;
                          }
                          ft_validator_error(&local_128,9);
                        }
                        otv_Device_validate((long)puVar1 + (ulong)uVar20,local_178);
                      }
LAB_001057f0:
                      puVar18 = puVar19;
                    } while (puVar29 != puVar19);
                  }
                  puVar18 = puVar29;
                  do {
                    uVar20 = puVar18[1];
                    puVar19 = puVar18 + 2;
                    if (uVar20 != 0) {
                      uVar20 = uVar20 << 8 | uVar20 >> 8;
                      if (uVar20 < uVar22) {
                        if (local_50 != 2) {
                          puVar18[1] = 0;
                          goto LAB_00105858;
                        }
                        ft_validator_error(&local_128,9);
                      }
                      otv_Device_validate((long)puVar1 + (ulong)uVar20,local_178);
                    }
LAB_00105858:
                    puVar18 = puVar19;
                  } while (puVar29 + (ulong)uVar13 * 2 + 2 != puVar19);
                }
LAB_001056fc:
                puVar18 = puVar15;
              } while (puVar25 != puVar15);
              uVar24 = uVar24 + 1;
            } while (uVar28 != uVar24);
          }
        }
        lVar16 = (long)piVar9 + (ulong)(ushort)(uVar12 << 8 | uVar12 >> 8);
        puVar17 = (ushort *)(lVar16 + 10);
        if (local_58 < puVar17) {
          ft_validator_error(&local_128,8);
        }
        uVar13 = *(ushort *)(lVar16 + 2);
        uVar20 = *(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8;
        uVar28 = *(ushort *)(lVar16 + 8) << 8 | *(ushort *)(lVar16 + 8) >> 8;
        uVar12 = *(ushort *)(lVar16 + 4);
        uVar14 = ((uint)uVar20 + (uint)uVar28) * 2;
        if (local_58 < (ushort *)((ulong)uVar14 + (long)puVar17)) {
          ft_validator_error(&local_128,8);
        }
        uVar14 = uVar14 + 10;
        if (uVar13 != 0) {
          uVar13 = uVar13 << 8 | uVar13 >> 8;
          if (uVar13 < uVar14) {
            if (local_50 != 2) {
              *(undefined2 *)(lVar16 + 2) = 0;
              goto LAB_00105050;
            }
            ft_validator_error(&local_128,9);
          }
          otv_Coverage_validate(lVar16 + (ulong)uVar13,local_178,uVar20);
        }
LAB_00105050:
        if (uVar12 != 0) {
          uVar24 = (uint)(ushort)(uVar12 << 8 | uVar12 >> 8);
          if (uVar24 < uVar14) {
            if (local_50 != 2) {
              *(undefined2 *)(lVar16 + 4) = 0;
              goto LAB_00105080;
            }
            ft_validator_error(&local_128,9);
          }
          otv_Coverage_validate((ulong)uVar24 + lVar16,local_178,uVar28);
        }
LAB_00105080:
        puVar15 = puVar17;
        if (uVar20 != 0) {
          puVar15 = (ushort *)(lVar16 + (ulong)(uVar20 + 5) * 2);
          do {
            puVar25 = puVar17 + 1;
            uVar13 = CONCAT11((char)*puVar17,*(undefined1 *)((long)puVar17 + 1));
            lVar23 = lVar16;
            if (uVar13 != 0) {
              if (uVar13 < uVar14) {
                if (local_50 != 2) {
                  *puVar17 = 0;
                  goto LAB_0010509b;
                }
                ft_validator_error(&local_128,9);
              }
              lVar23 = lVar16 + (ulong)uVar13;
            }
LAB_0010509b:
            otv_MathGlyphConstruction_validate(lVar23,local_178);
            puVar17 = puVar25;
          } while (puVar15 != puVar25);
        }
        puVar17 = puVar15;
        if (uVar28 != 0) {
          do {
            puVar25 = puVar17 + 1;
            uVar13 = CONCAT11((char)*puVar17,*(undefined1 *)((long)puVar17 + 1));
            lVar23 = lVar16;
            if (uVar13 != 0) {
              if (uVar13 < uVar14) {
                if (local_50 != 2) {
                  *puVar17 = 0;
                  goto LAB_0010512b;
                }
                ft_validator_error(&local_128,9);
              }
              lVar23 = lVar16 + (ulong)uVar13;
            }
LAB_0010512b:
            otv_MathGlyphConstruction_validate(lVar23,local_178);
            puVar17 = puVar25;
          } while (puVar25 != puVar15 + uVar28);
        }
      }
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_001041d8;
    }
    iVar10 = 0;
    *param_3 = local_368;
    *param_4 = local_360;
    *param_5 = local_358;
    *param_6 = local_350;
    *param_7 = local_348;
  }
  else {
LAB_001041d8:
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    ft_mem_free(uVar3,local_368);
    local_368 = (short *)0x0;
    ft_mem_free(uVar3,local_360);
    local_360 = (short *)0x0;
    ft_mem_free(uVar3,local_358);
    local_358 = (short *)0x0;
    ft_mem_free(uVar3,local_350);
    local_350 = (short *)0x0;
    ft_mem_free(uVar3,local_348);
    local_348 = (int *)0x0;
  }
  ft_mem_free(*(undefined8 *)(param_1 + 0xb8),local_340);
  local_340 = (int *)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void otv_AlternateSubst_validate(short *param_1,long *param_2)

{
  if (*(short **)(*param_2 + 0xd0) < param_1 + 1) {
    ft_validator_error(*param_2,8);
  }
  if (*param_1 != 0x100) {
    ft_validator_error(*param_2,8);
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[5] = (long)otv_u_C_x_Ox;
  param_2[6] = (long)otv_x_ux;
  otv_u_C_x_Ox(param_1,param_2);
  return;
}



void otv_SinglePos_validate(ushort *param_1,long *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  
  lVar5 = *param_2;
  if (*(ushort **)(lVar5 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar5,8);
    lVar5 = *param_2;
  }
  uVar1 = *param_1;
  param_2[9] = (long)param_1;
  if (uVar1 == 0x100) {
    if (*(ushort **)(lVar5 + 0xd0) < param_1 + 3) {
      ft_validator_error(lVar5,8);
    }
    uVar1 = param_1[2];
    otv_Coverage_validate
              ((ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + (long)param_1,param_2,0xffffffff
              );
    otv_ValueRecord_validate(param_1 + 3,uVar1 << 8 | uVar1 >> 8,param_2);
    return;
  }
  if ((ushort)(uVar1 << 8 | uVar1 >> 8) != 2) {
    ft_validator_error(lVar5,8);
    return;
  }
  puVar6 = param_1 + 4;
  if (*(ushort **)(lVar5 + 0xd0) < puVar6) {
    ft_validator_error(lVar5,8);
  }
  uVar1 = param_1[2] << 8 | param_1[2] >> 8;
  uVar3 = param_1[3] << 8 | param_1[3] >> 8;
  uVar4 = (uint)uVar3;
  uVar2 = (uVar1 >> 1 & 0x55) + (uVar1 & 0x55);
  uVar2 = (uVar2 >> 2 & 0x33) + (uVar2 & 0x33);
  uVar2 = ((uVar2 >> 4) + (uVar2 & 0xf)) * 2;
  otv_Coverage_validate
            ((long)param_1 + (ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8),param_2,uVar4);
  if (*(ulong *)(*param_2 + 0xd0) < (ulong)(uVar3 * uVar2) + (long)puVar6) {
    ft_validator_error(*param_2,8);
  }
  if (uVar3 != 0) {
    do {
      otv_ValueRecord_validate(puVar6,uVar1,param_2);
      uVar4 = uVar4 - 1;
      puVar6 = (ushort *)((long)puVar6 + (ulong)uVar2);
    } while (uVar4 != 0);
  }
  return;
}



void otv_PairPos_validate(ushort *param_1,long *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *local_70;
  ushort *local_68;
  uint local_58;
  
  lVar9 = *param_2;
  if (*(ushort **)(lVar9 + 0xd0) < param_1 + 1) {
    ft_validator_error(lVar9,8);
    lVar9 = *param_2;
  }
  uVar4 = *param_1;
  if (uVar4 == 0x100) {
    local_70 = param_1 + 5;
    if (*(ushort **)(lVar9 + 0xd0) < local_70) {
      ft_validator_error(lVar9,8);
    }
    uVar4 = param_1[3] << 8 | param_1[3] >> 8;
    uVar11 = param_1[2] << 8 | param_1[2] >> 8;
    uVar7 = (uint)(ushort)(param_1[4] << 8 | param_1[4] >> 8);
    otv_Coverage_validate
              ((ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + (long)param_1,param_2,0xffffffff
              );
    if (*(undefined1 **)(*param_2 + 0xd0) < (undefined1 *)((ulong)(uVar7 * 2) + (long)local_70)) {
      ft_validator_error(*param_2,8);
    }
    if (uVar7 != 0) {
      uVar8 = (uVar11 >> 1 & 0x55) + (uVar11 & 0x55);
      uVar8 = (uVar8 >> 2 & 0x33) + (uVar8 & 0x33);
      uVar8 = ((uVar8 >> 4) + (uVar8 & 0xf)) * 2;
      uVar5 = (uVar4 >> 1 & 0x55) + (uVar4 & 0x55);
      uVar5 = (uVar5 >> 2 & 0x33) + (uVar5 & 0x33);
      uVar5 = ((uVar5 >> 4) + (uVar5 & 0xf)) * 2;
      lVar9 = (ulong)uVar8 + 2 + (ulong)uVar5;
      do {
        puVar1 = local_70 + 1;
        lVar10 = *param_2;
        puVar2 = *(ushort **)(lVar10 + 0xd0);
        puVar14 = (ushort *)
                  ((long)param_1 +
                  (ulong)CONCAT11((char)*local_70,*(undefined1 *)((long)local_70 + 1)));
        param_2[9] = (long)puVar14;
        if (puVar2 < puVar14 + 1) {
          ft_validator_error(lVar10,8);
          lVar10 = *param_2;
        }
        uVar13 = (uint)(ushort)(*puVar14 << 8 | *puVar14 >> 8);
        if (*(ulong *)(lVar10 + 0xd0) < (long)(puVar14 + 1) + (ulong)((uVar5 + 2 + uVar8) * uVar13))
        {
          ft_validator_error(lVar10,8);
        }
        puVar14 = puVar14 + 2;
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          while( true ) {
            if (uVar11 != 0) {
              otv_ValueRecord_validate(puVar14,(uint)uVar11,param_2);
            }
            if (uVar4 != 0) break;
            puVar14 = (ushort *)((long)puVar14 + lVar9);
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_00106378;
          }
          lVar10 = (long)puVar14 + (ulong)uVar8;
          puVar14 = (ushort *)((long)puVar14 + lVar9);
          otv_ValueRecord_validate(lVar10,uVar4,param_2);
        }
LAB_00106378:
        local_70 = puVar1;
      } while (puVar1 != param_1 + (uVar7 + 5));
    }
  }
  else {
    if ((ushort)(uVar4 << 8 | uVar4 >> 8) != 2) {
      ft_validator_error(lVar9,8);
      return;
    }
    puVar14 = param_1 + 8;
    if (*(ushort **)(lVar9 + 0xd0) < puVar14) {
      ft_validator_error(lVar9,8);
    }
    uVar4 = param_1[4];
    uVar3 = param_1[2] << 8 | param_1[2] >> 8;
    uVar11 = param_1[5];
    uVar6 = param_1[3] << 8 | param_1[3] >> 8;
    uVar13 = (uint)(ushort)(param_1[7] << 8 | param_1[7] >> 8);
    uVar7 = (uVar3 >> 1 & 0x55) + (uVar3 & 0x55);
    local_58 = (uint)(ushort)(param_1[6] << 8 | param_1[6] >> 8);
    uVar7 = (uVar7 >> 2 & 0x33) + (uVar7 & 0x33);
    uVar7 = ((uVar7 & 0xf) + (uVar7 >> 4)) * 2;
    uVar12 = (ulong)uVar7;
    uVar8 = (uVar6 >> 1 & 0x55) + (uVar6 & 0x55);
    uVar8 = (uVar8 >> 2 & 0x33) + (uVar8 & 0x33);
    uVar5 = (uVar8 & 0xf) + (uVar8 >> 4);
    uVar8 = uVar5 * 2;
    otv_Coverage_validate
              ((ulong)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + (long)param_1,param_2,0xffffffff
              );
    otv_ClassDef_validate((ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) + (long)param_1,param_2);
    otv_ClassDef_validate((ulong)(ushort)(uVar11 << 8 | uVar11 >> 8) + (long)param_1,param_2);
    if (*(ulong *)(*param_2 + 0xd0) < (ulong)(local_58 * uVar13 * (uVar8 + uVar7)) + (long)puVar14)
    {
      ft_validator_error(*param_2,8);
    }
    param_2[9] = (long)param_1;
    if (local_58 != 0) {
      uVar7 = uVar13;
      local_68 = puVar14;
      if (uVar13 == 0) {
        do {
          if (local_58 == 1) {
            return;
          }
          local_58 = local_58 - 2;
        } while (local_58 != 0);
      }
      else {
        do {
          do {
            if (uVar3 != 0) {
              otv_ValueRecord_validate(puVar14,uVar3,param_2);
            }
            if (uVar6 != 0) {
              otv_ValueRecord_validate((long)puVar14 + uVar12,uVar6,param_2);
            }
            uVar7 = uVar7 - 1;
            puVar14 = (ushort *)((long)puVar14 + uVar12 + (ulong)uVar5 * 2);
          } while (uVar7 != 0);
          puVar14 = (ushort *)((long)local_68 + ((ulong)(uVar13 - 1) + 1) * (uVar8 + uVar12));
          local_58 = local_58 - 1;
          uVar7 = uVar13;
          local_68 = puVar14;
        } while (local_58 != 0);
      }
    }
  }
  return;
}


