
long getndelim2(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4,uint param_5,
               uint param_6,_IO_FILE *param_7)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  size_t sVar10;
  ulong uVar11;
  bool bVar12;
  long in_FS_OFFSET;
  uint local_8c;
  undefined1 *local_70;
  ulong local_48;
  long local_40;
  
  local_70 = (undefined1 *)*param_1;
  uVar11 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_70 == (undefined1 *)0x0) {
    uVar11 = 0x40;
    if (param_4 < 0x41) {
      uVar11 = param_4;
    }
    local_70 = (undefined1 *)malloc(uVar11);
    if (local_70 != (undefined1 *)0x0) goto LAB_0010004b;
    goto LAB_00100160;
  }
LAB_0010004b:
  if ((param_3 <= uVar11) && (uVar8 = uVar11 - param_3, uVar8 != 0 || uVar11 < param_4)) {
    if (param_5 == 0xffffffff) {
      param_5 = param_6;
      if (param_6 == 0xffffffff) {
        puVar7 = local_70 + param_3;
LAB_001000c8:
        do {
          pvVar4 = (void *)freadptr(param_7,&local_48);
          if (pvVar4 == (void *)0x0) {
            pbVar1 = (byte *)param_7->_IO_read_ptr;
            if (pbVar1 < param_7->_IO_read_end) {
              param_7->_IO_read_ptr = (char *)(pbVar1 + 1);
              local_8c = (uint)*pbVar1;
            }
            else {
              local_8c = __uflow(param_7);
              uVar3 = uVar11;
              if (local_8c == 0xffffffff) goto LAB_001004af;
            }
            local_48 = 1;
            uVar3 = 2;
          }
          else {
            uVar3 = local_48 + 1;
          }
          uVar6 = uVar11;
          puVar9 = local_70;
          if ((uVar11 < param_4) && (uVar8 < uVar3)) {
            uVar6 = uVar11 + 0x40;
            if (0x3f < uVar11) {
              uVar6 = uVar11 * 2;
            }
            lVar5 = (long)puVar7 - (long)local_70;
            if (uVar6 - lVar5 < uVar3) {
              uVar6 = uVar3 + lVar5;
            }
            if ((uVar6 <= uVar11) || (param_4 < uVar6)) {
              uVar6 = param_4;
            }
            if (((long)(uVar6 - param_3) < 0) &&
               (uVar6 = param_3 + 0x8000000000000000, uVar11 == uVar6)) goto LAB_00100521;
            uVar8 = uVar6 - lVar5;
            sVar10 = 1;
            if (uVar6 != 0) {
              sVar10 = uVar6;
            }
            puVar9 = (undefined1 *)realloc(local_70,sVar10);
            if (puVar9 == (undefined1 *)0x0) break;
            puVar7 = puVar9 + lVar5;
          }
          uVar11 = uVar6;
          local_70 = puVar9;
          if (uVar8 < 2) {
            if (pvVar4 == (void *)0x0) goto LAB_001000c8;
          }
          else {
            uVar3 = uVar8 - 1;
            if (local_48 < uVar8 - 1) {
              uVar3 = local_48;
            }
            uVar8 = uVar8 - uVar3;
            if (pvVar4 == (void *)0x0) {
              *puVar7 = (undefined1)local_8c;
              puVar7 = puVar7 + uVar3;
              goto LAB_001000c8;
            }
            memcpy(puVar7,pvVar4,uVar3);
            puVar7 = puVar7 + uVar3;
          }
          iVar2 = freadseek(param_7,local_48);
        } while (iVar2 == 0);
        goto LAB_00100150;
      }
    }
    else if (param_6 == 0xffffffff) {
      param_6 = param_5;
    }
    puVar9 = local_70 + param_3;
    do {
      pvVar4 = (void *)freadptr(param_7,&local_48);
      uVar6 = local_48;
      uVar3 = uVar11;
      if (pvVar4 == (void *)0x0) {
        pbVar1 = (byte *)param_7->_IO_read_ptr;
        if (pbVar1 < param_7->_IO_read_end) {
          param_7->_IO_read_ptr = (char *)(pbVar1 + 1);
          local_8c = (uint)*pbVar1;
        }
        else {
          local_8c = __uflow(param_7);
          puVar7 = puVar9;
          if (local_8c == 0xffffffff) goto LAB_001004af;
        }
        local_48 = 1;
        bVar12 = local_8c == param_5 || local_8c == param_6;
        uVar6 = 2;
      }
      else {
        lVar5 = memchr2(pvVar4,param_5,param_6,local_48);
        if (lVar5 == 0) {
          uVar6 = uVar6 + 1;
          bVar12 = false;
        }
        else {
          bVar12 = true;
          local_48 = (lVar5 - (long)pvVar4) + 1;
          uVar6 = (lVar5 - (long)pvVar4) + 2;
        }
      }
      if ((uVar8 < uVar6) && (uVar11 < param_4)) {
        uVar3 = uVar11 * 2;
        if (uVar11 < 0x40) {
          uVar3 = uVar11 + 0x40;
        }
        lVar5 = (long)puVar9 - (long)local_70;
        if (uVar3 - lVar5 < uVar6) {
          uVar3 = lVar5 + uVar6;
        }
        if ((uVar3 <= uVar11) || (param_4 < uVar3)) {
          uVar3 = param_4;
        }
        if (((long)(uVar3 - param_3) < 0) && (uVar3 = param_3 + 0x8000000000000000, uVar11 == uVar3)
           ) goto LAB_00100521;
        uVar8 = uVar3 - lVar5;
        sVar10 = 1;
        if (uVar3 != 0) {
          sVar10 = uVar3;
        }
        puVar7 = (undefined1 *)realloc(local_70,sVar10);
        if (puVar7 == (undefined1 *)0x0) goto LAB_00100150;
        puVar9 = puVar7 + lVar5;
        local_70 = puVar7;
      }
      uVar11 = uVar3;
      if (uVar8 < 2) {
        puVar7 = puVar9;
        if (pvVar4 != (void *)0x0) {
LAB_001001c6:
          iVar2 = freadseek(param_7,local_48);
          if (iVar2 != 0) goto LAB_00100150;
        }
      }
      else {
        uVar6 = uVar8 - 1;
        if (local_48 < uVar8 - 1) {
          uVar6 = local_48;
        }
        puVar7 = puVar9 + uVar6;
        uVar8 = uVar8 - uVar6;
        if (pvVar4 != (void *)0x0) {
          memcpy(puVar9,pvVar4,uVar6);
          goto LAB_001001c6;
        }
        *puVar9 = (undefined1)local_8c;
      }
      puVar9 = puVar7;
    } while (!bVar12);
    goto LAB_001004e5;
  }
  goto LAB_00100150;
LAB_001004af:
  uVar11 = uVar3;
  if (local_70 == puVar7) goto LAB_00100150;
LAB_001004e5:
  *puVar7 = 0;
  *param_1 = local_70;
  *param_2 = uVar3;
  lVar5 = (long)puVar7 - (long)(local_70 + param_3);
  if (lVar5 != 0) goto LAB_00100167;
  goto LAB_00100160;
LAB_00100521:
  uVar11 = param_3 + 0x8000000000000000;
LAB_00100150:
  *param_1 = local_70;
  *param_2 = uVar11;
LAB_00100160:
  lVar5 = -1;
LAB_00100167:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


