
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
  ulong uVar8;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  long local_40;
  ulong uVar9;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xf < param_4) {
    if (param_4 == 0x10) {
      iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,0x10);
      param_4 = (ulong)(iVar5 != 0) << 4;
      goto LAB_001002f7;
    }
    uVar11 = (ulong)((uint)param_4 & 0xf);
    if ((param_4 & 0xf) == 0) {
      uVar11 = 0x10;
    }
    lVar7 = (param_4 - 0x10) - uVar11;
    if (lVar7 != 0) {
      iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,lVar7);
      if (iVar5 == 0) goto LAB_001002f5;
      param_2 = (undefined8 *)((long)param_2 + lVar7);
      param_3 = param_3 + lVar7;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *param_2;
    uVar4 = param_2[1];
    *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
    iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,&local_58,param_2,0x10);
    if (iVar5 != 0) {
      param_2 = param_2 + 2;
      puVar10 = &local_68;
      if (7 < (uint)uVar11) {
        uVar8 = 0;
        do {
          uVar6 = (int)uVar8 + 8;
          uVar9 = (ulong)uVar6;
          *(undefined8 *)((long)&local_68 + uVar8) = *(undefined8 *)((long)param_2 + uVar8);
          uVar8 = uVar9;
        } while (uVar6 < ((uint)uVar11 & 0xfffffff8));
        puVar10 = (undefined8 *)((long)&local_68 + uVar9);
        param_2 = (undefined8 *)(uVar9 + (long)param_2);
      }
      lVar7 = 0;
      if ((uVar11 & 4) != 0) {
        *(undefined4 *)puVar10 = *(undefined4 *)param_2;
        lVar7 = 4;
      }
      if ((uVar11 & 2) != 0) {
        *(undefined2 *)((long)puVar10 + lVar7) = *(undefined2 *)((long)param_2 + lVar7);
        lVar7 = lVar7 + 2;
      }
      if ((uVar11 & 1) != 0) {
        *(undefined1 *)((long)puVar10 + lVar7) = *(undefined1 *)((long)param_2 + lVar7);
      }
      if (uVar11 == 0x10) {
        *(ulong *)(param_3 + 0x10) = local_68 ^ local_58;
        *(ulong *)(param_3 + 0x18) = uStack_60 ^ uStack_50;
      }
      else {
        __memcpy_chk((long)&local_68 + uVar11,(long)&local_58 + uVar11,0x10 - uVar11,0x10 - uVar11);
        if (uVar11 - 1 < 7) {
          lVar7 = 0;
        }
        else {
          *(ulong *)(param_3 + 0x10) = local_68 ^ local_58;
          if (uVar11 == 8) goto LAB_00100464;
          lVar7 = 8;
        }
        *(byte *)(param_3 + 0x10 + lVar7) =
             *(byte *)((long)&local_58 + lVar7) ^ *(byte *)((long)&local_68 + lVar7);
        if ((((lVar7 + 1U < uVar11) &&
             (*(byte *)(param_3 + 0x11 + lVar7) =
                   *(byte *)((long)&local_58 + lVar7 + 1) ^ *(byte *)((long)&local_68 + lVar7 + 1),
             lVar7 + 2U < uVar11)) &&
            (*(byte *)(param_3 + 0x12 + lVar7) =
                  *(byte *)((long)&local_68 + lVar7 + 2) ^ *(byte *)((long)&local_58 + lVar7 + 2),
            lVar7 + 3U < uVar11)) &&
           (((*(byte *)(param_3 + 0x13 + lVar7) =
                   *(byte *)((long)&local_68 + lVar7 + 3) ^ *(byte *)((long)&local_58 + lVar7 + 3),
             lVar7 + 4U < uVar11 &&
             (*(byte *)(param_3 + 0x14 + lVar7) =
                   *(byte *)((long)&local_68 + lVar7 + 4) ^ *(byte *)((long)&local_58 + lVar7 + 4),
             lVar7 + 5U < uVar11)) &&
            (*(byte *)(param_3 + 0x15 + lVar7) =
                  *(byte *)((long)&local_68 + lVar7 + 5) ^ *(byte *)((long)&local_58 + lVar7 + 5),
            lVar7 + 6U < uVar11)))) {
          *(byte *)(param_3 + 0x16 + lVar7) =
               *(byte *)((long)&local_68 + lVar7 + 6) ^ *(byte *)((long)&local_58 + lVar7 + 6);
        }
      }
LAB_00100464:
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      iVar5 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,&local_68,0x10);
      if (iVar5 != 0) {
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        goto LAB_001002f7;
      }
    }
  }
LAB_001002f5:
  param_4 = 0;
LAB_001002f7:
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
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 local_58 [16];
  long local_40;
  ulong uVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 < param_6) || (param_6 < 0x10)) {
LAB_00100630:
    uVar7 = 0;
  }
  else {
    uVar6 = param_6;
    if (param_2 != 0) {
      if ((*(byte *)(param_1 + 0x6c) & 0x10) != 0) goto LAB_00100630;
      iVar4 = *(int *)(param_1 + 0x68);
      uVar14 = (uint)param_6;
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        if (iVar4 != 0) {
          if (iVar4 == 1) {
            if ((param_6 & 0xf) == 0) goto LAB_0010097a;
          }
          else if (iVar4 != 2) goto LAB_00100630;
          uVar6 = cts128_cs3_decrypt(param_1,param_5,param_2,param_6);
          goto LAB_001006a6;
        }
        uVar8 = (ulong)(uVar14 & 0xf);
        if ((param_6 & 0xf) == 0) {
LAB_0010097a:
          iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
          if (iVar4 != 0) goto LAB_001006ab;
          goto LAB_00100630;
        }
        lVar12 = (param_6 - 0x10) - uVar8;
        if (lVar12 != 0) {
          iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,lVar12);
          if (iVar4 == 0) goto LAB_00100630;
          param_2 = param_2 + lVar12;
          param_5 = (undefined4 *)((long)param_5 + lVar12);
        }
        puVar11 = (undefined8 *)((long)param_5 + uVar8);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = *puVar11;
        uVar3 = puVar11[1];
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
        iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_58,puVar11,0x10);
        if (iVar4 == 0) goto LAB_00100630;
        puVar11 = &local_68;
        if (7 < (uVar14 & 0xf)) {
          uVar13 = 0;
          do {
            uVar5 = (int)uVar13 + 8;
            uVar9 = (ulong)uVar5;
            *(undefined8 *)((long)&local_68 + uVar13) = *(undefined8 *)((long)param_5 + uVar13);
            uVar13 = uVar9;
          } while (uVar5 < (uVar14 & 8));
          puVar11 = (undefined8 *)((long)&local_68 + uVar9);
          param_5 = (undefined4 *)(uVar9 + (long)param_5);
        }
        lVar12 = 0;
        if ((param_6 & 4) != 0) {
          *(undefined4 *)puVar11 = *param_5;
          lVar12 = 4;
        }
        if ((param_6 & 2) != 0) {
          *(undefined2 *)((long)puVar11 + lVar12) = *(undefined2 *)((long)param_5 + lVar12);
          lVar12 = lVar12 + 2;
        }
        if ((param_6 & 1) != 0) {
          *(undefined1 *)((long)puVar11 + lVar12) = *(undefined1 *)((long)param_5 + lVar12);
        }
        __memcpy_chk((long)&local_68 + uVar8,local_58 + uVar8,0x10 - uVar8,0x10 - uVar8);
        if (uVar8 - 1 < 7) {
          lVar12 = 0;
LAB_001008b4:
          uVar13 = uVar8 - lVar12;
          if (2 < uVar13 - 1) {
            *(uint *)(param_2 + 0x10 + lVar12) =
                 *(uint *)((long)&local_68 + lVar12) ^ *(uint *)(local_58 + lVar12);
            lVar12 = lVar12 + (uVar13 & 0xfffffffffffffffc);
            if ((uVar13 & 3) == 0) goto LAB_00100926;
          }
          *(byte *)(param_2 + 0x10 + lVar12) =
               *(byte *)((long)&local_68 + lVar12) ^ local_58[lVar12];
          if ((lVar12 + 1U < uVar8) &&
             (*(byte *)(param_2 + 0x11 + lVar12) =
                   *(byte *)((long)&local_68 + lVar12 + 1) ^ local_58[lVar12 + 1],
             lVar12 + 2U < uVar8)) {
            *(byte *)(param_2 + 0x12 + lVar12) =
                 local_58[lVar12 + 2] ^ *(byte *)((long)&local_68 + lVar12 + 2);
          }
        }
        else {
          *(ulong *)(param_2 + 0x10) = local_68 ^ local_58._0_8_;
          if (uVar8 != 8) {
            lVar12 = 8;
            goto LAB_001008b4;
          }
        }
LAB_00100926:
        *(undefined8 *)(param_1 + 0x20) = uVar7;
        *(undefined8 *)(param_1 + 0x28) = uVar1;
        iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,&local_68,0x10);
        if (iVar4 == 0) goto LAB_00100630;
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        *(undefined8 *)(param_1 + 0x28) = uVar3;
      }
      else if (iVar4 == 0) {
        uVar6 = param_6 & 0xfffffffffffffff0;
        iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,uVar6);
        if (iVar4 == 0) goto LAB_00100630;
        if ((param_6 & 0xf) != 0) {
          local_58 = (undefined1  [16])0x0;
          param_5 = (undefined4 *)(uVar6 + (long)param_5);
          puVar10 = (undefined4 *)local_58;
          if (7 < (uVar14 & 0xf)) {
            uVar6 = 0;
            do {
              uVar5 = (int)uVar6 + 8;
              uVar8 = (ulong)uVar5;
              *(undefined8 *)((long)local_58 + uVar6) = *(undefined8 *)((long)param_5 + uVar6);
              uVar6 = uVar8;
            } while (uVar5 < (uVar14 & 8));
            puVar10 = (undefined4 *)((long)local_58 + uVar8);
            param_5 = (undefined4 *)(uVar8 + (long)param_5);
          }
          lVar12 = 0;
          if ((param_6 & 4) != 0) {
            *puVar10 = *param_5;
            lVar12 = 4;
          }
          if ((param_6 & 2) != 0) {
            *(undefined2 *)((long)puVar10 + lVar12) = *(undefined2 *)((long)param_5 + lVar12);
            lVar12 = lVar12 + 2;
          }
          if ((param_6 & 1) != 0) {
            *(undefined1 *)((long)puVar10 + lVar12) = *(undefined1 *)((long)param_5 + lVar12);
          }
          iVar4 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))
                            (param_1,param_2 + -0x10 + param_6,local_58,0x10);
          uVar6 = param_6;
          if (iVar4 == 0) goto LAB_00100630;
        }
      }
      else {
        if (iVar4 == 1) {
          if ((param_6 & 0xf) == 0) goto LAB_0010097a;
        }
        else if (iVar4 != 2) goto LAB_00100630;
        uVar6 = cts128_cs3_encrypt(param_1,param_5,param_2,param_6);
LAB_001006a6:
        if (uVar6 == 0) goto LAB_00100630;
      }
LAB_001006ab:
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x10;
    }
    *param_3 = uVar6;
    uVar7 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8
ossl_cipher_cbc_cts_block_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  return 1;
}


