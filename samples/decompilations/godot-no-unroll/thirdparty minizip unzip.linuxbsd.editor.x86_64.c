
int unz64local_getShort(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  ushort local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,&local_22,2);
  if (iVar1 == 2) {
    *param_3 = (ulong)local_22;
    iVar1 = 0;
  }
  else {
    *param_3 = 0;
    iVar1 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int unz64local_getLong(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,&local_24,4);
  if (iVar1 == 4) {
    *param_3 = (ulong)local_24;
    iVar1 = 0;
  }
  else {
    *param_3 = 0;
    iVar1 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int unz64local_getLong64(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,&local_28,8);
  if (iVar1 == 8) {
    *param_3 = local_28;
    iVar1 = 0;
  }
  else {
    *param_3 = 0;
    iVar1 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int unz64local_GetCurrentFileInfoInternal
              (long param_1,undefined8 *param_2,long *param_3,long param_4,ulong param_5,
              long param_6,ulong param_7,long param_8,ulong param_9)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int local_10c;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  ulong uStack_50;
  int local_48;
  int iStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_10c = -0x66;
    goto LAB_001005fb;
  }
  lVar2 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),
                       *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x98),0);
  if ((lVar2 == 0) &&
     (iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&local_e8), iVar1 == 0)) {
    local_10c = 0;
    if (local_e8 != 0x2014b50) {
      local_10c = -0x67;
    }
  }
  else {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_c8);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_c0);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_b8);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_b0);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&local_a8);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  local_48 = ((uint)(local_a8 >> 0x15) & 0xf) - 1;
  iStack_44 = ((uint)(local_a8 >> 0x19) & 0x7f) + 0x7bc;
  local_58 = CONCAT44((int)(local_a8 >> 5),((uint)local_a8 & 0x1f) * 2) & 0x3fffffffff;
  uStack_50 = CONCAT44((int)(local_a8 >> 0x10),(int)(local_a8 >> 0xb)) & 0x1f0000001f;
  iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_a0);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&local_e0);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  local_98 = local_e0;
  iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&local_e0);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  lStack_90 = local_e0;
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_88);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_80);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_78);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&lStack_70);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_68);
  if (iVar1 != 0) {
    local_10c = -1;
  }
  iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&uStack_60);
  if (iVar1 == 0) {
    iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&local_e0);
    uVar5 = local_88;
    if (iVar1 == 0) {
      local_f0 = local_e0;
      if ((param_4 == 0) || (local_10c != 0)) {
        bVar9 = local_10c == 0 && param_6 != 0;
LAB_001004af:
        uVar3 = uStack_80;
        if (!bVar9) goto LAB_00100837;
        if ((uVar5 != 0) &&
           (lVar2 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),uVar5,1), lVar2 != 0)) {
          if ((uVar3 == 0) || (param_7 == 0)) goto LAB_001005f5;
          local_10c = -1;
LAB_001008a5:
          uVar8 = uVar3;
          if (param_7 <= uVar3) {
            uVar8 = param_7;
          }
          uVar7 = (**(code **)(param_1 + 8))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x70),param_6
                             ,uVar8);
          lVar2 = (uVar3 - uVar8) + uVar5;
          if (uVar8 != uVar7) goto LAB_001005f5;
          goto LAB_0010083b;
        }
LAB_001004c8:
        if (uVar3 != 0) {
          if (param_7 != 0) {
            local_10c = 0;
            uVar5 = 0;
            goto LAB_001008a5;
          }
          goto LAB_001004e0;
        }
        local_10c = 0;
        bVar9 = true;
        lVar2 = 0;
      }
      else {
        if (param_5 <= local_88) {
          if ((param_5 != 0) && (local_88 != 0)) goto LAB_0010047e;
LAB_001004a0:
          bVar9 = param_6 != 0;
          local_10c = 0;
          uVar5 = uVar5 - param_5;
          goto LAB_001004af;
        }
        *(undefined1 *)(param_4 + local_88) = 0;
        param_5 = local_88;
        if (local_88 != 0) {
LAB_0010047e:
          uVar3 = (**(code **)(param_1 + 8))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x70),param_4
                             ,param_5);
          if (uVar3 != param_5) goto LAB_001005f5;
          goto LAB_001004a0;
        }
        local_10c = 0;
        uVar3 = uStack_80;
        if (param_6 != 0) goto LAB_001004c8;
LAB_00100837:
        lVar2 = uVar5 + uStack_80;
LAB_0010083b:
        if (local_10c != 0) goto LAB_001005fb;
        bVar9 = true;
        if (uStack_80 == 0) goto LAB_0010068b;
        lVar2 = lVar2 - uStack_80;
        if (lVar2 == 0) {
LAB_001004e0:
          local_10c = 0;
          lVar2 = 0;
        }
        else {
          if (lVar2 < 0) {
            lVar6 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x70));
            lVar6 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),lVar6 + lVar2,0);
          }
          else {
            lVar6 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),lVar2,1);
          }
          if (lVar6 == 0) goto LAB_001004e0;
          local_10c = -1;
        }
        uVar5 = 0;
        do {
          while( true ) {
            iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_d8);
            if (iVar1 != 0) {
              local_10c = -1;
            }
            iVar1 = unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x70),&local_d0);
            lVar6 = local_d0;
            if (iVar1 != 0) {
              local_10c = -1;
            }
            if (local_d8 == 1) break;
            lVar4 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),local_d0,1);
            if (lVar4 != 0) goto LAB_001005bf;
LAB_00100559:
            uVar5 = uVar5 + 4 + lVar6;
            if (uStack_80 <= uVar5) goto LAB_001005d4;
          }
          if ((lStack_90 == 0xffffffff) &&
             (iVar1 = unz64local_getLong64(param_1,*(undefined8 *)(param_1 + 0x70),&lStack_90),
             iVar1 != 0)) {
            local_10c = -1;
          }
          if ((local_98 == 0xffffffff) &&
             (iVar1 = unz64local_getLong64(param_1,*(undefined8 *)(param_1 + 0x70),&local_98),
             iVar1 != 0)) {
            local_10c = -1;
          }
          if ((local_f0 == 0xffffffff) &&
             (iVar1 = unz64local_getLong64(param_1,*(undefined8 *)(param_1 + 0x70),&local_f0),
             iVar1 != 0)) {
            local_10c = -1;
          }
          if ((lStack_70 != 0xffff) ||
             (iVar1 = unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&lStack_70),
             iVar1 == 0)) goto LAB_00100559;
LAB_001005bf:
          local_10c = -1;
          uVar5 = uVar5 + 4 + lVar6;
        } while (uVar5 < uStack_80);
LAB_001005d4:
        bVar9 = local_10c == 0;
      }
LAB_0010068b:
      uVar5 = local_78;
      bVar11 = (bool)(param_8 != 0 & bVar9);
      if (bVar11) {
        local_10c = 0;
        if (local_78 < param_9) {
          *(undefined1 *)(param_8 + local_78) = 0;
          uVar3 = local_78;
          if (lVar2 == 0) {
            if (local_78 == 0) goto LAB_0010071a;
          }
          else {
LAB_001008eb:
            lVar2 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),lVar2,1);
            if (lVar2 == 0) goto LAB_00100711;
            if ((uVar5 == 0) || (local_10c = -1, param_9 == 0)) goto LAB_001005f5;
          }
        }
        else {
          uVar3 = param_9;
          if (lVar2 != 0) goto LAB_001008eb;
LAB_00100711:
          if ((uVar5 == 0) || (param_9 == 0)) {
LAB_0010071a:
            bVar10 = param_2 != (undefined8 *)0x0;
            bVar9 = bVar11;
            goto LAB_00100720;
          }
        }
        uVar5 = (**(code **)(param_1 + 8))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x70),param_8,
                           uVar3);
        if (uVar5 != uVar3) goto LAB_001005f5;
        bVar10 = param_2 != (undefined8 *)0x0 && local_10c == 0;
        bVar9 = local_10c == 0;
      }
      else {
        bVar10 = (bool)(param_2 != (undefined8 *)0x0 & bVar9);
      }
LAB_00100720:
      bVar11 = param_3 != (long *)0x0;
      if (bVar10) {
        *param_2 = local_c8;
        param_2[1] = uStack_c0;
        param_2[2] = local_b8;
        param_2[3] = uStack_b0;
        param_2[4] = local_a8;
        param_2[5] = uStack_a0;
        param_2[6] = local_98;
        param_2[7] = lStack_90;
        param_2[0x10] = CONCAT44(iStack_44,local_48);
        param_2[8] = local_88;
        param_2[9] = uStack_80;
        param_2[10] = local_78;
        param_2[0xb] = lStack_70;
        param_2[0xc] = local_68;
        param_2[0xd] = uStack_60;
        param_2[0xe] = local_58;
        param_2[0xf] = uStack_50;
      }
      else {
        bVar11 = (bool)(bVar11 & bVar9);
      }
      if (bVar11) {
        *param_3 = local_f0;
      }
      goto LAB_001005fb;
    }
  }
  else {
    unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x70),&local_e0);
  }
LAB_001005f5:
  local_10c = -1;
LAB_001005fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_10c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * unzOpenInternal(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  code *pcStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  code *pcStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  char *local_100;
  long local_f8;
  long local_f0 [19];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    local_1a8 = *param_2;
    pcStack_1a0 = (code *)param_2[1];
    local_198 = param_2[2];
    uStack_190 = param_2[3];
    local_188 = param_2[4];
    pcStack_180 = (code *)param_2[5];
    local_178 = param_2[6];
    uStack_170 = param_2[7];
    local_168 = param_2[8];
    uStack_160 = param_2[9];
    local_158 = param_2[10];
    uStack_150 = param_2[0xb];
    local_148 = param_2[0xc];
    local_140 = param_3;
    lVar3 = call_zopen64(&local_1a8,param_1,5);
    local_138 = lVar3;
    if (lVar3 != 0) {
      lVar4 = call_zseek64(&local_1a8,lVar3,0,2);
      if (lVar4 == 0) {
        uVar5 = call_ztell64(&local_1a8,lVar3);
        uVar10 = 0xffff;
        if (uVar5 < 0x10000) {
          uVar10 = uVar5;
        }
        pvVar6 = malloc(0x404);
        if (pvVar6 != (void *)0x0) {
          uVar14 = 4;
          do {
            if (uVar10 <= uVar14) {
LAB_00100f37:
              free(pvVar6);
              break;
            }
            uVar14 = uVar14 + 0x400;
            if (uVar10 < uVar14) {
              uVar14 = uVar10;
            }
            uVar13 = 0x404;
            if (uVar14 < 0x405) {
              uVar13 = uVar14;
            }
            lVar4 = call_zseek64(&local_1a8,lVar3,uVar5 - uVar14,0);
            if ((lVar4 != 0) ||
               (uVar7 = (*pcStack_1a0)(uStack_170,lVar3,pvVar6,uVar13), uVar13 != uVar7))
            goto LAB_00100f37;
            pcVar8 = (char *)((long)((int)uVar13 + -3) + (long)pvVar6);
            do {
              if ((((pcVar8[-1] == 'P') && (*pcVar8 == 'K')) && (pcVar8[1] == '\x06')) &&
                 (pcVar8[2] == '\a')) {
                if (pcVar8 + (((uVar5 - uVar14) + -1) - (long)pvVar6) != (char *)0xffffffffffffffff)
                {
                  free(pvVar6);
                  lVar4 = call_zseek64(&local_1a8,lVar3,
                                       pcVar8 + (((uVar5 - uVar14) + -1) - (long)pvVar6),0);
                  if (lVar4 != 0) goto LAB_00100f47;
                  iVar1 = unz64local_getLong(&local_1a8,lVar3,&local_1b8);
                  if (((iVar1 != 0) ||
                      (iVar1 = unz64local_getLong(&local_1a8,lVar3,&local_1b8), iVar1 != 0)) ||
                     (local_1b8 != 0)) goto LAB_00100f47;
                  iVar1 = unz64local_getLong64(&local_1a8,lVar3,&local_1b0);
                  if (((iVar1 != 0) ||
                      (iVar1 = unz64local_getLong(&local_1a8,lVar3,&local_1b8), iVar1 != 0)) ||
                     (((local_1b8 != 1 ||
                       (((lVar4 = call_zseek64(&local_1a8,lVar3,local_1b0,0), lVar4 != 0 ||
                         (iVar1 = unz64local_getLong(&local_1a8,lVar3,&local_1b8), iVar1 != 0)) ||
                        (local_1b8 != 0x6064b50)))) || (local_1b0 == (char *)0xffffffffffffffff))))
                  goto LAB_00100f47;
                  local_4c = 1;
                  iVar1 = -1;
                  lVar3 = call_zseek64(&local_1a8,local_138,local_1b0,0);
                  iVar2 = unz64local_getLong(&local_1a8,local_138,&local_1d8);
                  if (iVar2 == 0) {
                    iVar1 = -(uint)(lVar3 != 0);
                  }
                  iVar2 = unz64local_getLong64(&local_1a8,local_138,&local_1b0);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getShort(&local_1a8,local_138,&local_1b8);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getShort(&local_1a8,local_138,&local_1b8);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getLong(&local_1a8,local_138,&local_1d0);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getLong(&local_1a8,local_138,&local_1c8);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getLong64(&local_1a8,local_138,&local_130);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getLong64(&local_1a8,local_138,&local_1c0);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  if (local_130 == local_1c0) {
                    if (local_1c8 != 0 || local_1d0 != 0) {
                      iVar1 = -0x67;
                    }
                  }
                  else {
                    iVar1 = -0x67;
                  }
                  iVar2 = unz64local_getLong64(&local_1a8,local_138,&local_f8);
                  if (iVar2 != 0) {
                    iVar1 = -1;
                  }
                  iVar2 = unz64local_getLong64(&local_1a8,local_138,local_f0);
                  local_128 = 0;
                  lVar3 = local_f0[0];
                  goto joined_r0x001011c7;
                }
                break;
              }
              pcVar8 = pcVar8 + -1;
            } while (pcVar8 != (char *)((long)pvVar6 + ((uVar13 - 4) - (ulong)((int)uVar13 - 4))));
          } while( true );
        }
      }
LAB_00100f47:
      lVar3 = local_138;
      lVar4 = call_zseek64(&local_1a8,local_138,0,2);
      if (lVar4 == 0) {
        uVar5 = call_ztell64(&local_1a8,lVar3);
        uVar10 = 0xffff;
        if (uVar5 < 0x10000) {
          uVar10 = uVar5;
        }
        pvVar6 = malloc(0x404);
        if (pvVar6 != (void *)0x0) {
          uVar14 = 4;
          do {
            if (uVar10 <= uVar14) {
LAB_0010120b:
              iVar1 = -1;
              pcVar8 = (char *)0xffffffffffffffff;
LAB_00101217:
              free(pvVar6);
              goto LAB_0010107e;
            }
            uVar14 = uVar14 + 0x400;
            if (uVar10 < uVar14) {
              uVar14 = uVar10;
            }
            uVar13 = 0x404;
            if (uVar14 < 0x405) {
              uVar13 = uVar14;
            }
            lVar4 = call_zseek64(&local_1a8,lVar3,uVar5 - uVar14,0);
            if ((lVar4 != 0) ||
               (uVar7 = (*pcStack_1a0)(uStack_170,lVar3,pvVar6,uVar13), uVar13 != uVar7))
            goto LAB_0010120b;
            pcVar8 = (char *)((long)((int)uVar13 + -3) + (long)pvVar6);
            do {
              if (((pcVar8[-1] == 'P') && (*pcVar8 == 'K')) &&
                 ((pcVar8[1] == '\x05' && (pcVar8[2] == '\x06')))) {
                pcVar8 = pcVar8 + (((uVar5 - uVar14) + -1) - (long)pvVar6);
                if (pcVar8 != (char *)0xffffffffffffffff) {
                  iVar1 = 0;
                  goto LAB_00101217;
                }
                break;
              }
              pcVar8 = pcVar8 + -1;
            } while ((char *)((long)pvVar6 + ((uVar13 - 4) - (ulong)((int)uVar13 - 4))) != pcVar8);
          } while( true );
        }
      }
      pcVar8 = (char *)0xffffffffffffffff;
      iVar1 = -1;
LAB_0010107e:
      local_4c = 0;
      lVar3 = call_zseek64(&local_1a8,local_138,pcVar8,0);
      if (lVar3 != 0) {
        iVar1 = -1;
      }
      iVar2 = unz64local_getLong(&local_1a8,local_138,&local_1d8);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      iVar2 = unz64local_getShort(&local_1a8,local_138,&local_1d0);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      iVar2 = unz64local_getShort(&local_1a8,local_138,&local_1c8);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      iVar2 = unz64local_getShort(&local_1a8,local_138,&local_1d8);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      local_130 = local_1d8;
      iVar2 = unz64local_getShort(&local_1a8,local_138,&local_1d8);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      local_1c0 = local_1d8;
      if (local_1d8 == local_130) {
        if (local_1c8 != 0 || local_1d0 != 0) {
          iVar1 = -0x67;
        }
      }
      else {
        iVar1 = -0x67;
      }
      iVar2 = unz64local_getLong(&local_1a8,local_138,&local_1d8);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      local_f8 = local_1d8;
      iVar2 = unz64local_getLong(&local_1a8,local_138,&local_1d8);
      if (iVar2 != 0) {
        iVar1 = -1;
      }
      local_f0[0] = local_1d8;
      iVar2 = unz64local_getShort(&local_1a8,local_138,&local_128);
      local_1b0 = pcVar8;
      lVar3 = local_f0[0];
joined_r0x001011c7:
      local_f0[0] = lVar3;
      if (((iVar2 == 0) && (iVar1 == 0)) && ((char *)(local_f8 + lVar3) <= local_1b0)) {
        local_58 = 0;
        local_120 = (long)local_1b0 - (local_f8 + lVar3);
        local_50 = 0;
        local_100 = local_1b0;
        puVar9 = (undefined8 *)malloc(0x160);
        if (puVar9 != (undefined8 *)0x0) {
          puVar11 = &local_1a8;
          puVar12 = puVar9;
          for (lVar4 = 0x2c; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
            puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
          }
          puVar9[0x13] = lVar3;
          puVar9[0x12] = 0;
          iVar1 = unz64local_GetCurrentFileInfoInternal
                            (puVar9,puVar9 + 0x18,puVar9 + 0x29,0,0,0,0,0,0);
          puVar9[0x14] = (ulong)(iVar1 == 0);
        }
        goto LAB_001011e3;
      }
      (*pcStack_180)(uStack_170,local_138);
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_001011e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int unzStringFileNameCompare(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  
  if (param_3 < 2) {
    iVar2 = strcmp(param_1,param_2);
    return iVar2;
  }
  lVar3 = 0;
  do {
    cVar4 = param_1[lVar3];
    cVar1 = param_2[lVar3];
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      cVar4 = cVar4 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) goto LAB_001012c4;
      cVar1 = cVar1 + -0x20;
    }
    else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      cVar1 = cVar1 + -0x20;
      if (cVar4 == '\0') {
LAB_001012b3:
        return -(uint)(cVar1 != '\0');
      }
    }
    else {
      if (cVar4 == '\0') goto LAB_001012b3;
LAB_001012c4:
      if (cVar1 == '\0') {
        return 1;
      }
    }
    if (cVar4 < cVar1) {
      return -1;
    }
    lVar3 = lVar3 + 1;
    if (cVar1 < cVar4) {
      return 1;
    }
  } while( true );
}



undefined8 unzOpen2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_2 != 0) {
    fill_zlib_filefunc64_32_def_from_filefunc32(auStack_88);
    uVar1 = unzOpenInternal(param_1,auStack_88,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 unzOpen2_64(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_2 != (undefined8 *)0x0) {
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = param_2[4];
    uStack_50 = param_2[5];
    local_48 = param_2[6];
    uStack_40 = param_2[7];
    local_20 = (undefined1  [16])0x0;
    local_38 = param_2[8];
    uStack_30 = param_2[9];
    uVar1 = unzOpenInternal(param_1,&local_78,1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unzOpen(undefined8 param_1)

{
  unzOpenInternal(param_1,0,0);
  return;
}



void unzOpen64(undefined8 param_1)

{
  unzOpenInternal(param_1,0,1);
  return;
}



undefined8 unzGetOpaque(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  return 0;
}



undefined8 unzGetGlobalInfo64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *param_2 = *(undefined8 *)(param_1 + 0x78);
    param_2[1] = uVar1;
    return 0;
  }
  return 0xffffff9a;
}



undefined8 unzGetGlobalInfo(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *param_2 = *(undefined8 *)(param_1 + 0x78);
    param_2[1] = uVar1;
    return 0;
  }
  return 0xffffff9a;
}



void unzGetCurrentFileInfo64
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  unz64local_GetCurrentFileInfoInternal
            (param_1,param_2,0,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void unzGetCurrentFileInfo
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = unz64local_GetCurrentFileInfoInternal
                    (param_1,&local_98,0,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((iVar1 == 0) && (param_2 != (undefined8 *)0x0)) {
    *param_2 = local_98;
    param_2[1] = uStack_90;
    param_2[2] = local_88;
    param_2[3] = uStack_80;
    param_2[0x10] = local_18;
    param_2[4] = local_78;
    param_2[5] = uStack_70;
    param_2[8] = local_58;
    param_2[9] = uStack_50;
    param_2[10] = local_48;
    param_2[0xb] = uStack_40;
    param_2[0xc] = local_38;
    param_2[0xd] = uStack_30;
    param_2[0xe] = local_28;
    param_2[0xf] = uStack_20;
    param_2[6] = local_68;
    param_2[7] = uStack_60;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 unzGoToFirstFile(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xb8);
    uVar1 = unz64local_GetCurrentFileInfoInternal
                      (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0xa0) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}



undefined8 unzGoToNextFile(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar1 = *(long *)(param_1 + 0x90) + 1;
    if ((*(long *)(param_1 + 0x78) == 0xffff) || (*(long *)(param_1 + 0x78) != lVar1)) {
      *(long *)(param_1 + 0x90) = lVar1;
      *(long *)(param_1 + 0x98) =
           *(long *)(param_1 + 0x100) + *(long *)(param_1 + 0x98) + 0x2e +
           *(long *)(param_1 + 0x108) + *(long *)(param_1 + 0x110);
      uVar2 = unz64local_GetCurrentFileInfoInternal
                        (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
      *(ulong *)(param_1 + 0xa0) = (ulong)((int)uVar2 == 0);
      return uVar2;
    }
  }
  return 0xffffff9c;
}



undefined8 unzLocateFile(long param_1,char *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  size_t sVar21;
  undefined8 uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (sVar21 = strlen(param_2), 0xff < sVar21)) {
    uVar22 = 0xffffff9a;
  }
  else if (*(long *)(param_1 + 0xa0) == 0) {
    uVar22 = 0xffffff9c;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + 0x90);
    uVar20 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar4 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x90) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    uVar7 = *(undefined8 *)(param_1 + 0xe0);
    uVar8 = *(undefined8 *)(param_1 + 0xe8);
    uVar9 = *(undefined8 *)(param_1 + 0xf0);
    uVar10 = *(undefined8 *)(param_1 + 0xf8);
    uVar11 = *(undefined8 *)(param_1 + 0x100);
    uVar12 = *(undefined8 *)(param_1 + 0x108);
    uVar13 = *(undefined8 *)(param_1 + 0x110);
    uVar14 = *(undefined8 *)(param_1 + 0x118);
    uVar15 = *(undefined8 *)(param_1 + 0x120);
    uVar16 = *(undefined8 *)(param_1 + 0x128);
    uVar17 = *(undefined8 *)(param_1 + 0x130);
    uVar18 = *(undefined8 *)(param_1 + 0x138);
    uVar1 = *(undefined8 *)(param_1 + 0x140);
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xb8);
    uVar22 = unz64local_GetCurrentFileInfoInternal
                       (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
    bVar23 = (int)uVar22 == 0;
    *(ulong *)(param_1 + 0xa0) = (ulong)bVar23;
    if (bVar23) {
      do {
        uVar22 = unz64local_GetCurrentFileInfoInternal(param_1,0,0,local_148,0x100,0,0,0,0);
        if ((int)uVar22 != 0) break;
        uVar22 = unzStringFileNameCompare(local_148,param_2,param_3);
        if ((int)uVar22 == 0) goto LAB_00101873;
        uVar22 = unzGoToNextFile(param_1);
      } while ((int)uVar22 == 0);
    }
    *(undefined8 *)(param_1 + 0x140) = uVar1;
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar19;
    *(undefined8 *)(param_1 + 0x98) = uVar20;
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    *(undefined8 *)(param_1 + 200) = uVar4;
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
    *(undefined8 *)(param_1 + 0xd8) = uVar6;
    *(undefined8 *)(param_1 + 0xe0) = uVar7;
    *(undefined8 *)(param_1 + 0xe8) = uVar8;
    *(undefined8 *)(param_1 + 0xf0) = uVar9;
    *(undefined8 *)(param_1 + 0xf8) = uVar10;
    *(undefined8 *)(param_1 + 0x100) = uVar11;
    *(undefined8 *)(param_1 + 0x108) = uVar12;
    *(undefined8 *)(param_1 + 0x110) = uVar13;
    *(undefined8 *)(param_1 + 0x118) = uVar14;
    *(undefined8 *)(param_1 + 0x120) = uVar15;
    *(undefined8 *)(param_1 + 0x128) = uVar16;
    *(undefined8 *)(param_1 + 0x130) = uVar17;
    *(undefined8 *)(param_1 + 0x138) = uVar18;
  }
LAB_00101873:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
}



undefined8 unzGetFilePos64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      *param_2 = *(undefined8 *)(param_1 + 0x98);
      param_2[1] = uVar1;
      return 0;
    }
    return 0xffffff9c;
  }
  return 0xffffff9a;
}



undefined8 unzGetFilePos(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *param_2 = *(undefined8 *)(param_1 + 0x98);
    param_2[1] = uVar1;
    return 0;
  }
  return 0xffffff9c;
}



undefined8 unzGoToFilePos64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x90) = param_2[1];
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    uVar1 = unz64local_GetCurrentFileInfoInternal
                      (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0xa0) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}



undefined8 unzGoToFilePos(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0xffffff9a;
  }
  uVar1 = *param_2;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = param_2[1];
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    uVar1 = unz64local_GetCurrentFileInfoInternal
                      (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0xa0) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}



long unzGetCurrentFileZStreamPos64(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x150), lVar1 != 0)) {
    return *(long *)(lVar1 + 0x140) + *(long *)(lVar1 + 0x78);
  }
  return 0;
}



int unzReadCurrentFile(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((param_1 == 0) || (plVar1 = *(long **)(param_1 + 0x150), plVar1 == (long *)0x0)) {
    return -0x66;
  }
  if (*plVar1 == 0) {
    return -100;
  }
  if (param_3 == 0) {
    return 0;
  }
  plVar1[4] = param_2;
  uVar4 = plVar1[0x18];
  *(uint *)(plVar1 + 5) = param_3;
  uVar8 = (ulong)param_3;
  uVar6 = (ulong)*(uint *)(plVar1 + 2) + plVar1[0x17];
  if (uVar4 < uVar8) {
    if ((int)plVar1[0x29] != 0) {
      if (uVar8 <= uVar6) goto LAB_00101b15;
      goto LAB_00101b06;
    }
    uVar2 = (uint)uVar4;
  }
  else {
    if ((uVar8 <= uVar6) || ((int)plVar1[0x29] == 0)) goto LAB_00101b15;
LAB_00101b06:
    uVar2 = *(uint *)(plVar1 + 2) + (int)plVar1[0x17];
    uVar4 = (ulong)uVar2;
  }
  *(int *)(plVar1 + 5) = (int)uVar4;
  if (uVar2 == 0) {
    return 0;
  }
LAB_00101b15:
  iVar7 = 0;
  do {
    if ((int)plVar1[2] == 0) {
      uVar4 = plVar1[0x17];
      if (uVar4 != 0) {
        uVar8 = 0x4000;
        if (uVar4 < 0x4001) {
          uVar8 = uVar4;
        }
        lVar5 = call_zseek64(plVar1 + 0x19,plVar1[0x26],plVar1[0x28] + plVar1[0xf],0);
        if ((lVar5 != 0) ||
           (uVar4 = (*(code *)plVar1[0x1a])(plVar1[0x20],plVar1[0x26],*plVar1,uVar8), uVar8 != uVar4
           )) {
          return -1;
        }
        plVar1[0xf] = plVar1[0xf] + uVar8;
        plVar1[0x17] = plVar1[0x17] - uVar8;
        plVar1[1] = *plVar1;
        *(int *)(plVar1 + 2) = (int)uVar8;
        goto LAB_00101be2;
      }
      lVar5 = plVar1[0x27];
      if (lVar5 == 0) {
        return iVar7;
      }
      if ((int)plVar1[0x29] != 0) {
LAB_00101c97:
        if (plVar1[0x17] == 0) {
          return iVar7;
        }
        goto LAB_00101ca5;
      }
LAB_00101cba:
      if (lVar5 != 0xc) {
        lVar5 = plVar1[4];
        uVar4 = plVar1[6];
        iVar3 = inflate(plVar1 + 1,2);
        if ((-1 < iVar3) && (plVar1[7] != 0)) {
          iVar3 = -3;
        }
        uVar8 = plVar1[6];
        if (uVar8 < uVar4) {
          uVar8 = uVar8 + 0x100000000;
        }
        uVar6 = uVar8 - uVar4;
        plVar1[0x14] = plVar1[0x14] + uVar6;
        iVar7 = iVar7 + (int)uVar6;
        lVar5 = crc32(plVar1[0x15],lVar5,uVar6 & 0xffffffff);
        plVar1[0x15] = lVar5;
        plVar1[0x18] = plVar1[0x18] + (uVar4 - uVar8);
        if (iVar3 == 1) {
          return iVar7;
        }
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar3 = (int)plVar1[5];
    }
    else {
LAB_00101be2:
      lVar5 = plVar1[0x27];
      if (lVar5 == 0) {
        uVar2 = *(uint *)(plVar1 + 2);
      }
      else {
        if ((int)plVar1[0x29] == 0) goto LAB_00101cba;
        uVar2 = *(uint *)(plVar1 + 2);
        if (uVar2 == 0) goto LAB_00101c97;
      }
      if (*(uint *)(plVar1 + 5) < uVar2) {
        uVar2 = *(uint *)(plVar1 + 5);
      }
      uVar8 = (ulong)uVar2;
      uVar4 = 0;
      if (uVar2 == 0) {
LAB_00101ca5:
        uVar4 = 0;
        uVar8 = 0;
      }
      else {
        do {
          *(undefined1 *)(plVar1[4] + uVar4) = *(undefined1 *)(plVar1[1] + uVar4);
          uVar4 = uVar4 + 1;
        } while (uVar8 != uVar4);
        iVar7 = iVar7 + uVar2;
      }
      plVar1[0x14] = plVar1[0x14] + uVar4;
      lVar5 = crc32(plVar1[0x15],plVar1[4],uVar8);
      plVar1[0x18] = plVar1[0x18] - uVar4;
      plVar1[0x15] = lVar5;
      *(int *)(plVar1 + 2) = (int)plVar1[2] - (int)uVar8;
      iVar3 = (int)plVar1[5] - (int)uVar8;
      plVar1[4] = plVar1[4] + uVar4;
      plVar1[1] = plVar1[1] + uVar4;
      plVar1[6] = plVar1[6] + uVar4;
      *(int *)(plVar1 + 5) = iVar3;
    }
    if (iVar3 == 0) {
      return iVar7;
    }
  } while( true );
}



ulong unzSeekCurrentFile(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x150), lVar1 == 0)) {
    uVar5 = 0xffffff9a;
  }
  else if (*(long *)(lVar1 + 0x138) == 0xc) {
    uVar5 = 0xffffff98;
  }
  else {
    uVar5 = (ulong)(int)param_2;
    if ((*(long *)(lVar1 + 0x138) == 0) || (*(int *)(lVar1 + 0x148) != 0)) {
      lVar7 = *(long *)(param_1 + 0xf8);
      *(ulong *)(lVar1 + 0xb8) = *(long *)(param_1 + 0xf0) - uVar5;
      *(ulong *)(lVar1 + 0xc0) = lVar7 - uVar5;
      lVar7 = *(long *)(param_1 + 0x148);
      *(ulong *)(lVar1 + 0x30) = uVar5;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      lVar7 = uVar5 + 0x1e + lVar7 + (long)*(int *)(lVar1 + 0x14c);
      *(long *)(lVar1 + 0x78) = lVar7;
      uVar5 = call_zseek64(lVar1 + 200,*(undefined8 *)(lVar1 + 0x130),
                           lVar7 + *(long *)(lVar1 + 0x140),0);
    }
    else {
      uVar4 = *(ulong *)(lVar1 + 0x30);
      if (uVar5 < uVar4) {
        uVar2 = *(undefined8 *)(param_1 + 0xf8);
        *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(lVar1 + 0xc0) = uVar2;
        *(long *)(lVar1 + 0x78) = *(long *)(param_1 + 0x148) + 0x1e + (long)*(int *)(lVar1 + 0x14c);
        inflateReset(lVar1 + 8);
        *(undefined4 *)(lVar1 + 0x10) = 0;
        uVar4 = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      uVar8 = param_2 - (int)uVar4;
      do {
        if (uVar8 == 0) break;
        uVar6 = 0x200;
        if (uVar8 < 0x201) {
          uVar6 = uVar8;
        }
        uVar5 = unzReadCurrentFile(param_1,auStack_238,uVar6);
        iVar3 = (int)uVar5;
        if (iVar3 < 0) goto LAB_00101e36;
        uVar8 = uVar8 - iVar3;
      } while (iVar3 != 0);
      uVar5 = (ulong)param_2;
    }
  }
LAB_00101e36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 unztell(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x150) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x150) + 0x30);
  }
  return 0xffffffffffffff9a;
}



undefined8 unztell64(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x150) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x150) + 0xa0);
  }
  return 0xffffffffffffffff;
}



ulong unzeof(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x150) != 0)) {
    return (ulong)(*(long *)(*(long *)(param_1 + 0x150) + 0xc0) == 0);
  }
  return 0xffffff9a;
}



ulong unzGetLocalExtrafield(long param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  lVar1 = *(long *)(param_1 + 0x150);
  if (lVar1 == 0) {
    uVar2 = 0xffffff9a;
  }
  else {
    uVar2 = (ulong)*(uint *)(lVar1 + 0x90) - *(long *)(lVar1 + 0x98);
    if (param_2 != 0) {
      if (uVar2 < param_3) {
        param_3 = (uint)uVar2;
      }
      uVar2 = 0;
      if (param_3 != 0) {
        lVar3 = call_zseek64(lVar1 + 200,*(undefined8 *)(lVar1 + 0x130),
                             *(long *)(lVar1 + 0x98) + *(long *)(lVar1 + 0x88),0);
        if (lVar3 == 0) {
          uVar2 = (**(code **)(lVar1 + 0xd0))
                            (*(undefined8 *)(lVar1 + 0x100),*(undefined8 *)(lVar1 + 0x130),param_2,
                             (ulong)param_3);
          if (param_3 == uVar2) {
            return (ulong)param_3;
          }
        }
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}



undefined8 unzCloseCurrentFile(long param_1)

{
  undefined8 *__ptr;
  undefined8 uVar1;
  
  if ((param_1 == 0) || (__ptr = *(undefined8 **)(param_1 + 0x150), __ptr == (undefined8 *)0x0)) {
    uVar1 = 0xffffff9a;
  }
  else {
    uVar1 = 0;
    if (((__ptr[0x18] == 0) && (*(int *)(__ptr + 0x29) == 0)) && (__ptr[0x15] != __ptr[0x16])) {
      uVar1 = 0xffffff97;
    }
    free((void *)*__ptr);
    *__ptr = 0;
    if (__ptr[0x10] == 8) {
      inflateEnd(__ptr + 1);
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return uVar1;
}



undefined8 unzClose(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x150) != 0) {
      unzCloseCurrentFile();
    }
    (**(code **)((long)param_1 + 0x28))
              (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x70));
    free(param_1);
    return 0;
  }
  return 0xffffff9a;
}



int unzOpenCurrentFile3(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                       long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  undefined8 *__ptr;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  long local_80;
  long local_68;
  ulong local_60;
  byte local_58 [8];
  long local_50;
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_5 != 0) || (param_1 == (undefined8 *)0x0)) || (param_1[0x14] == 0)) {
    iVar15 = -0x66;
    goto LAB_001023d8;
  }
  if (param_1[0x2a] != 0) {
    unzCloseCurrentFile();
  }
  lVar16 = call_zseek64(param_1,param_1[0xe],param_1[0x11] + param_1[0x29],0);
  if (lVar16 == 0) {
    iVar15 = unz64local_getLong(param_1,param_1[0xe],&local_68);
    if (iVar15 == 0) {
      uVar18 = 0;
      if (local_68 != 0x4034b50) {
        uVar18 = 0xffffff99;
      }
    }
    else {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getShort(param_1,param_1[0xe],&local_60);
    if (iVar15 != 0) {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getShort(param_1,param_1[0xe],local_58);
    if (iVar15 != 0) {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getShort(param_1,param_1[0xe],&local_60);
    if (iVar15 == 0) {
      if (uVar18 == 0) {
        uVar1 = param_1[0x1b];
        if (uVar1 == local_60) {
          if (((uVar1 & 0xfffffffffffffff7) != 0) && (uVar1 != 0xc)) {
            uVar18 = 0xffffff99;
          }
        }
        else {
          uVar18 = 0xffffff99;
        }
      }
    }
    else {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getLong(param_1,param_1[0xe],&local_60);
    if (iVar15 != 0) {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getLong(param_1,param_1[0xe],&local_60);
    if (iVar15 == 0) {
      if (((uVar18 == 0) && (param_1[0x1d] != local_60)) && ((local_58[0] & 8) == 0)) {
        uVar18 = 0xffffff99;
      }
    }
    else {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getLong(param_1,param_1[0xe],&local_60);
    if (iVar15 == 0) {
      if (((local_60 != 0xffffffff) && (uVar18 == 0)) && (local_60 != param_1[0x1e])) {
        uVar18 = -(uint)((local_58[0] & 8) == 0) & 0xffffff99;
      }
    }
    else {
      uVar18 = 0xffffffff;
    }
    iVar15 = unz64local_getLong(param_1,param_1[0xe],&local_60);
    if (iVar15 == 0) {
      if ((local_60 == 0xffffffff) || (uVar18 != 0)) {
        iVar15 = unz64local_getShort(param_1,param_1[0xe],&local_50);
        if (iVar15 != 0) goto LAB_001023b0;
        lVar16 = local_50;
        if (uVar18 == 0) goto LAB_00102387;
      }
      else {
        if ((local_60 != param_1[0x1f]) && ((local_58[0] & 8) == 0)) {
          uVar18 = 0xffffff99;
          goto LAB_001025dd;
        }
        iVar15 = unz64local_getShort(param_1,param_1[0xe],&local_50);
        if (iVar15 != 0) goto LAB_001023b0;
LAB_00102387:
        uVar18 = 0;
        lVar16 = local_50;
        if (param_1[0x20] != local_50) {
          uVar18 = 0xffffff99;
        }
      }
    }
    else {
      uVar18 = 0xffffffff;
LAB_001025dd:
      iVar15 = unz64local_getShort(param_1,param_1[0xe],&local_50);
      lVar16 = local_50;
      if (iVar15 != 0) {
LAB_001023b0:
        uVar18 = 0xffffffff;
        lVar16 = local_50;
      }
    }
    iVar15 = unz64local_getShort(param_1,param_1[0xe],local_48);
    if (iVar15 == 0) {
      local_80 = param_1[0x29];
      uVar19 = (int)lVar16 + local_48[0];
      if (uVar18 == 0) {
        __ptr = (undefined8 *)malloc(0x150);
        if (__ptr != (undefined8 *)0x0) {
          pvVar17 = malloc(0x4000);
          __ptr[0x13] = 0;
          *__ptr = pvVar17;
          __ptr[0x11] = lVar16 + 0x1e + local_80;
          *(int *)(__ptr + 0x29) = param_4;
          *(int *)(__ptr + 0x12) = local_48[0];
          if (pvVar17 != (void *)0x0) {
            lVar16 = param_1[0x1b];
            __ptr[0x10] = 0;
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = (int)lVar16;
            }
            if (param_3 != (undefined4 *)0x0) {
              uVar2 = param_1[0x1a];
              *param_3 = 6;
              uVar18 = (uint)uVar2 & 6;
              if (uVar18 == 4) {
                *param_3 = 2;
              }
              else if (uVar18 == 6) {
                *param_3 = 1;
              }
              else if (uVar18 == 2) {
                *param_3 = 9;
              }
            }
            uVar2 = param_1[0x1d];
            uVar3 = *param_1;
            uVar4 = param_1[1];
            __ptr[0x27] = lVar16;
            uVar5 = param_1[2];
            uVar6 = param_1[3];
            uVar7 = param_1[4];
            uVar8 = param_1[5];
            __ptr[6] = 0;
            __ptr[0x16] = uVar2;
            uVar2 = param_1[0xe];
            uVar9 = param_1[6];
            uVar10 = param_1[7];
            uVar11 = param_1[8];
            uVar12 = param_1[9];
            *(undefined1 (*) [16])(__ptr + 0x14) = (undefined1  [16])0x0;
            __ptr[0x26] = uVar2;
            uVar2 = param_1[0xc];
            uVar13 = param_1[10];
            uVar14 = param_1[0xb];
            __ptr[0x19] = uVar3;
            __ptr[0x1a] = uVar4;
            __ptr[0x25] = uVar2;
            uVar2 = param_1[0x11];
            __ptr[0x1b] = uVar5;
            __ptr[0x1c] = uVar6;
            __ptr[0x28] = uVar2;
            __ptr[0x1d] = uVar7;
            __ptr[0x1e] = uVar8;
            __ptr[0x1f] = uVar9;
            __ptr[0x20] = uVar10;
            __ptr[0x21] = uVar11;
            __ptr[0x22] = uVar12;
            __ptr[0x23] = uVar13;
            __ptr[0x24] = uVar14;
            if (lVar16 == 0xc) {
              if (param_4 == 0) {
                *(undefined4 *)(__ptr + 0x29) = 1;
              }
            }
            else if ((lVar16 == 8) && (param_4 == 0)) {
              uVar2 = param_1[8];
              uVar3 = param_1[9];
              __ptr[0xb] = 0;
              __ptr[1] = 0;
              *(undefined4 *)(__ptr + 2) = 0;
              __ptr[9] = uVar2;
              __ptr[10] = uVar3;
              iVar15 = inflateInit2_(__ptr + 1,0xfffffff1,"1.3.1",0x70);
              if (iVar15 != 0) {
                free((void *)*__ptr);
                free(__ptr);
                goto LAB_001023d8;
              }
              local_80 = param_1[0x29];
              __ptr[0x10] = 8;
            }
            uVar2 = param_1[0x1e];
            uVar3 = param_1[0x1f];
            *(undefined4 *)(__ptr + 2) = 0;
            *(uint *)((long)__ptr + 0x14c) = uVar19;
            param_1[0x2a] = __ptr;
            __ptr[0xf] = local_80 + 0x1e + (ulong)uVar19;
            *(undefined4 *)(param_1 + 0x2b) = 0;
            __ptr[0x17] = uVar2;
            __ptr[0x18] = uVar3;
            iVar15 = 0;
            goto LAB_001023d8;
          }
          free(__ptr);
        }
        iVar15 = -0x68;
        goto LAB_001023d8;
      }
    }
  }
  iVar15 = -0x67;
LAB_001023d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}



void unzOpenCurrentFile(undefined8 param_1)

{
  unzOpenCurrentFile3(param_1,0,0,0,0);
  return;
}



void unzOpenCurrentFilePassword(undefined8 param_1,undefined8 param_2)

{
  unzOpenCurrentFile3(param_1,0,0,0,param_2);
  return;
}



void unzOpenCurrentFile2(void)

{
  unzOpenCurrentFile3();
  return;
}



ulong unzGetGlobalComment(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  uVar3 = *(ulong *)(param_1 + 0x80);
  if (param_3 <= *(ulong *)(param_1 + 0x80)) {
    uVar3 = param_3;
  }
  lVar1 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x70),*(long *)(param_1 + 0xa8) + 0x16,0);
  if (lVar1 != 0) {
    return 0xffffffff;
  }
  if (uVar3 == 0) {
    if (param_2 == (undefined1 *)0x0) goto LAB_00102885;
  }
  else {
    *param_2 = 0;
    uVar2 = (**(code **)(param_1 + 8))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x70),param_2,uVar3
                      );
    if (uVar2 != uVar3) {
      return 0xffffffff;
    }
  }
  if (*(ulong *)(param_1 + 0x80) < param_3) {
    param_2[*(ulong *)(param_1 + 0x80)] = 0;
  }
LAB_00102885:
  return uVar3 & 0xffffffff;
}



long unzGetOffset64(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa0);
    if ((lVar2 != 0) &&
       (((lVar1 = *(long *)(param_1 + 0x78), lVar1 == 0 || (lVar1 == 0xffff)) ||
        (lVar2 = 0, lVar1 != *(long *)(param_1 + 0x90))))) {
      return *(long *)(param_1 + 0x98);
    }
  }
  return lVar2;
}



long unzGetOffset(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa0);
    if ((lVar2 != 0) &&
       (((lVar1 = *(long *)(param_1 + 0x78), lVar1 == 0 || (lVar1 == 0xffff)) ||
        (lVar2 = 0, lVar1 != *(long *)(param_1 + 0x90))))) {
      return *(long *)(param_1 + 0x98);
    }
  }
  return lVar2;
}



undefined8 unzSetOffset64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff9a;
  }
  else {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x98) = param_2;
    uVar1 = unz64local_GetCurrentFileInfoInternal
                      (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0xa0) = (ulong)((int)uVar1 == 0);
  }
  return uVar1;
}



undefined8 unzSetOffset(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff9a;
  }
  else {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x98) = param_2;
    uVar1 = unz64local_GetCurrentFileInfoInternal
                      (param_1,param_1 + 0xc0,param_1 + 0x148,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0xa0) = (ulong)((int)uVar1 == 0);
  }
  return uVar1;
}


