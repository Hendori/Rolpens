
ulong cts128_cs3_encrypt(long param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  puVar4 = (undefined4 *)local_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xf < param_4) {
    pcVar1 = *(code **)(*(long *)(param_1 + 0xa8) + 8);
    if (param_4 == 0x10) {
      iVar2 = (*pcVar1)(param_1,param_3,param_2,0x10);
      param_4 = (ulong)(iVar2 != 0) << 4;
      goto LAB_0010006c;
    }
    uVar11 = (ulong)((uint)param_4 & 0xf);
    if ((param_4 & 0xf) == 0) {
      uVar11 = 0x10;
    }
    lVar10 = param_4 - uVar11;
    iVar2 = (*pcVar1)(param_1,param_3,param_2,lVar10);
    if (iVar2 == 0) goto LAB_0010006a;
    puVar8 = (undefined4 *)(param_2 + lVar10);
    puVar9 = (undefined8 *)(param_3 + lVar10);
    local_58 = (undefined1  [16])0x0;
    uVar3 = (uint)uVar11;
    if (7 < uVar3) {
      uVar6 = 0;
      do {
        uVar5 = (int)uVar6 + 8;
        uVar7 = (ulong)uVar5;
        *(undefined8 *)(local_58 + uVar6) = *(undefined8 *)((long)puVar8 + uVar6);
        uVar6 = uVar7;
      } while (uVar5 < (uVar3 & 0xfffffff8));
      puVar4 = (undefined4 *)(local_58 + uVar7);
      puVar8 = (undefined4 *)(uVar7 + (long)puVar8);
    }
    lVar10 = 0;
    if ((uVar11 & 4) == 0) {
      if ((uVar11 & 2) != 0) goto LAB_001001a0;
LAB_001000cb:
      if ((uVar11 & 1) != 0) goto LAB_00100180;
LAB_001000d4:
      if (uVar3 < 8) goto LAB_00100158;
LAB_001000e1:
      *puVar9 = puVar9[-2];
      *(undefined8 *)((long)puVar9 + (uVar11 - 8)) = *(undefined8 *)((long)puVar9 + (uVar11 - 0x18))
      ;
      lVar10 = (long)puVar9 - ((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
      uVar3 = uVar3 + (int)lVar10 & 0xfffffff8;
      if (7 < uVar3) {
        uVar11 = 0;
        do {
          uVar5 = (int)uVar11 + 8;
          *(undefined8 *)(((ulong)(puVar9 + 1) & 0xfffffffffffffff8) + uVar11) =
               *(undefined8 *)((long)(puVar9 + -2) + (uVar11 - lVar10));
          uVar11 = (ulong)uVar5;
        } while (uVar5 < uVar3);
      }
    }
    else {
      *puVar4 = *puVar8;
      lVar10 = 4;
      if ((uVar11 & 2) == 0) goto LAB_001000cb;
LAB_001001a0:
      *(undefined2 *)((long)puVar4 + lVar10) = *(undefined2 *)((long)puVar8 + lVar10);
      lVar10 = lVar10 + 2;
      if ((uVar11 & 1) == 0) goto LAB_001000d4;
LAB_00100180:
      *(undefined1 *)((long)puVar4 + lVar10) = *(undefined1 *)((long)puVar8 + lVar10);
      if (7 < uVar3) goto LAB_001000e1;
LAB_00100158:
      if ((uVar11 & 4) == 0) {
        if ((uVar3 != 0) &&
           (*(undefined1 *)puVar9 = *(undefined1 *)(puVar9 + -2), (uVar11 & 2) != 0)) {
          *(undefined2 *)((long)puVar9 + (uVar11 - 2)) =
               *(undefined2 *)((long)puVar9 + (uVar11 - 0x12));
        }
      }
      else {
        *(undefined4 *)puVar9 = *(undefined4 *)(puVar9 + -2);
        *(undefined4 *)((long)puVar9 + (uVar11 - 4)) =
             *(undefined4 *)((long)puVar9 + (uVar11 - 0x14));
      }
    }
    iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,puVar9 + -2,local_58,0x10);
    if (iVar2 != 0) goto LAB_0010006c;
  }
LAB_0010006a:
  param_4 = 0;
LAB_0010006c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



ulong cts128_cs3_decrypt(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  byte local_68 [16];
  byte local_58 [24];
  long local_40;
  ulong uVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xf < param_4) {
    if (param_4 == 0x10) {
      iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,0x10);
      param_4 = (ulong)(iVar5 != 0) << 4;
      goto LAB_001002fb;
    }
    uVar11 = (ulong)((uint)param_4 & 0xf);
    if ((param_4 & 0xf) == 0) {
      uVar11 = 0x10;
    }
    lVar7 = (param_4 - 0x10) - uVar11;
    if (lVar7 != 0) {
      iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,lVar7);
      if (iVar5 == 0) goto LAB_001002f9;
      param_2 = (undefined8 *)((long)param_2 + lVar7);
      param_3 = param_3 + lVar7;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *param_2;
    uVar4 = param_2[1];
    *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
    iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_58,param_2,0x10);
    if (iVar5 != 0) {
      param_2 = param_2 + 2;
      pbVar10 = local_68;
      if (7 < (uint)uVar11) {
        uVar9 = 0;
        do {
          uVar6 = (int)uVar9 + 8;
          uVar8 = (ulong)uVar6;
          *(undefined8 *)(local_68 + uVar9) = *(undefined8 *)((long)param_2 + uVar9);
          uVar9 = uVar8;
        } while (uVar6 < ((uint)uVar11 & 0xfffffff8));
        pbVar10 = local_68 + uVar8;
        param_2 = (undefined8 *)(uVar8 + (long)param_2);
      }
      lVar7 = 0;
      if ((uVar11 & 4) != 0) {
        *(undefined4 *)pbVar10 = *(undefined4 *)param_2;
        lVar7 = 4;
      }
      if ((uVar11 & 2) != 0) {
        *(undefined2 *)(pbVar10 + lVar7) = *(undefined2 *)((long)param_2 + lVar7);
        lVar7 = lVar7 + 2;
      }
      if ((uVar11 & 1) != 0) {
        pbVar10[lVar7] = *(byte *)((long)param_2 + lVar7);
      }
      if (uVar11 != 0x10) {
        __memcpy_chk(local_68 + uVar11,local_58 + uVar11,0x10 - uVar11,0x10 - uVar11);
      }
      uVar9 = 0;
      do {
        *(byte *)(param_3 + 0x10 + uVar9) = local_68[uVar9] ^ local_58[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,local_68,0x10);
      if (iVar5 != 0) {
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        goto LAB_001002fb;
      }
    }
  }
LAB_001002f9:
  param_4 = 0;
LAB_001002fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined * ossl_cipher_cbc_cts_mode_id2name(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &_LC1;
  if (((param_1 != 0) && (puVar1 = &_LC2, param_1 != 1)) && (puVar1 = &_LC0, param_1 != 2)) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



undefined4 ossl_cipher_cbc_cts_mode_name2id(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_strcasecmp(param_1,&_LC1);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_1,&_LC2);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_1,&_LC0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      lVar2 = 2;
    }
  }
  return (&cts_modes)[lVar2 * 4];
}



undefined8
ossl_cipher_cbc_cts_block_update
          (long param_1,long param_2,ulong *param_3,ulong param_4,undefined4 *param_5,ulong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  long in_FS_OFFSET;
  byte local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  ulong uVar10;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_6 <= param_4) && (0xf < param_6)) {
    uVar7 = param_6;
    if (param_2 == 0) {
LAB_001005e7:
      *param_3 = uVar7;
      uVar8 = 1;
      goto LAB_0010056a;
    }
    if ((*(byte *)(param_1 + 0x6c) & 0x10) == 0) {
      iVar5 = *(int *)(param_1 + 0x68);
      uVar15 = (uint)param_6;
      if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
        if (iVar5 != 0) {
          if (iVar5 == 1) {
            if ((param_6 & 0xf) == 0) goto LAB_0010080a;
          }
          else if (iVar5 != 2) goto LAB_00100568;
          uVar7 = cts128_cs3_encrypt(param_1,param_5,param_2,param_6);
          goto LAB_001005de;
        }
        uVar7 = param_6 & 0xfffffffffffffff0;
        iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,uVar7);
        if (iVar5 == 0) goto LAB_00100568;
        if ((param_6 & 0xf) != 0) {
          local_58 = (undefined1  [16])0x0;
          param_5 = (undefined4 *)(uVar7 + (long)param_5);
          puVar12 = (undefined4 *)local_58;
          if (7 < (uVar15 & 0xf)) {
            uVar7 = 0;
            do {
              uVar6 = (int)uVar7 + 8;
              uVar10 = (ulong)uVar6;
              *(undefined8 *)((long)local_58 + uVar7) = *(undefined8 *)((long)param_5 + uVar7);
              uVar7 = uVar10;
            } while (uVar6 < (uVar15 & 8));
            puVar12 = (undefined4 *)((long)local_58 + uVar10);
            param_5 = (undefined4 *)(uVar10 + (long)param_5);
          }
          lVar14 = 0;
          if ((param_6 & 4) != 0) {
            *puVar12 = *param_5;
            lVar14 = 4;
          }
          if ((param_6 & 2) != 0) {
            *(undefined2 *)((long)puVar12 + lVar14) = *(undefined2 *)((long)param_5 + lVar14);
            lVar14 = lVar14 + 2;
          }
          if ((param_6 & 1) != 0) {
            *(undefined1 *)((long)puVar12 + lVar14) = *(undefined1 *)((long)param_5 + lVar14);
          }
          iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))
                            (param_1,param_2 + -0x10 + param_6,local_58,0x10);
          uVar7 = param_6;
          if (iVar5 == 0) goto LAB_00100568;
        }
LAB_001005e3:
        *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x10;
        goto LAB_001005e7;
      }
      if (iVar5 == 0) {
        uVar10 = (ulong)(uVar15 & 0xf);
        if ((param_6 & 0xf) == 0) {
LAB_0010080a:
          iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
          if (iVar5 != 0) goto LAB_001005e3;
        }
        else {
          lVar14 = (param_6 - 0x10) - uVar10;
          if (lVar14 != 0) {
            iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,lVar14);
            if (iVar5 == 0) goto LAB_00100568;
            param_2 = param_2 + lVar14;
            param_5 = (undefined4 *)((long)param_5 + lVar14);
          }
          puVar1 = (undefined8 *)((long)param_5 + uVar10);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
          iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_58,puVar1,0x10);
          if (iVar5 != 0) {
            pbVar13 = local_68;
            if (7 < (uVar15 & 0xf)) {
              uVar9 = 0;
              do {
                uVar6 = (int)uVar9 + 8;
                uVar11 = (ulong)uVar6;
                *(undefined8 *)(local_68 + uVar9) = *(undefined8 *)((long)param_5 + uVar9);
                uVar9 = uVar11;
              } while (uVar6 < (uVar15 & 8));
              pbVar13 = local_68 + uVar11;
              param_5 = (undefined4 *)(uVar11 + (long)param_5);
            }
            lVar14 = 0;
            if ((param_6 & 4) != 0) {
              *(undefined4 *)pbVar13 = *param_5;
              lVar14 = 4;
            }
            if ((param_6 & 2) != 0) {
              *(undefined2 *)(pbVar13 + lVar14) = *(undefined2 *)((long)param_5 + lVar14);
              lVar14 = lVar14 + 2;
            }
            if ((param_6 & 1) != 0) {
              pbVar13[lVar14] = *(byte *)((long)param_5 + lVar14);
            }
            __memcpy_chk(local_68 + uVar10,local_58 + uVar10,0x10 - uVar10,0x10 - uVar10);
            uVar9 = 0;
            do {
              *(byte *)(param_2 + 0x10 + uVar9) = local_68[uVar9] ^ local_58[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar10 != uVar9);
            *(undefined8 *)(param_1 + 0x20) = uVar8;
            *(undefined8 *)(param_1 + 0x28) = uVar2;
            iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,local_68,0x10);
            if (iVar5 != 0) {
              *(undefined8 *)(param_1 + 0x20) = uVar3;
              *(undefined8 *)(param_1 + 0x28) = uVar4;
              goto LAB_001005e3;
            }
          }
        }
      }
      else {
        if (iVar5 == 1) {
          if ((param_6 & 0xf) == 0) goto LAB_0010080a;
        }
        else if (iVar5 != 2) goto LAB_00100568;
        uVar7 = cts128_cs3_decrypt(param_1,param_5,param_2,param_6);
LAB_001005de:
        if (uVar7 != 0) goto LAB_001005e3;
      }
    }
  }
LAB_00100568:
  uVar8 = 0;
LAB_0010056a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8
ossl_cipher_cbc_cts_block_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  return 1;
}


