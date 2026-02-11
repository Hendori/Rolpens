
ulong CRYPTO_cts128_encrypt_block
                (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 *param_5,
                code *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (0x10 < param_3) {
    uVar6 = (ulong)((uint)param_3 & 0xf);
    if ((param_3 & 0xf) == 0) {
      uVar6 = 0x10;
    }
    CRYPTO_cbc128_encrypt();
    uVar3 = 0;
    puVar7 = (undefined8 *)(param_2 + (param_3 - uVar6));
    do {
      *(byte *)((long)param_5 + uVar3) =
           *(byte *)((long)param_5 + uVar3) ^ *(byte *)(param_1 + (param_3 - uVar6) + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    (*param_6)(param_5,param_5,param_4);
    uVar2 = (uint)uVar6;
    if (uVar2 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar2 != 0) && (*(undefined1 *)puVar7 = *(undefined1 *)(puVar7 + -2), (uVar6 & 2) != 0)
           ) {
          *(undefined2 *)((long)puVar7 + (uVar6 - 2)) =
               *(undefined2 *)((long)puVar7 + (uVar6 - 0x12));
        }
      }
      else {
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar7 + -2);
        *(undefined4 *)((long)puVar7 + (uVar6 - 4)) = *(undefined4 *)((long)puVar7 + (uVar6 - 0x14))
        ;
      }
    }
    else {
      *puVar7 = puVar7[-2];
      *(undefined8 *)((long)puVar7 + (uVar6 - 8)) = *(undefined8 *)((long)puVar7 + (uVar6 - 0x18));
      lVar4 = (long)puVar7 - ((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
      uVar2 = (int)lVar4 + uVar2 & 0xfffffff8;
      if (7 < uVar2) {
        uVar5 = 0;
        do {
          uVar6 = (ulong)uVar5;
          uVar5 = uVar5 + 8;
          *(undefined8 *)(((ulong)(puVar7 + 1) & 0xfffffffffffffff8) + uVar6) =
               *(undefined8 *)((long)puVar7 + uVar6 + (-0x10 - lVar4));
        } while (uVar5 < uVar2);
      }
    }
    uVar1 = param_5[1];
    puVar7[-2] = *param_5;
    puVar7[-1] = uVar1;
    return param_3;
  }
  return 0;
}



ulong CRYPTO_nistcts128_encrypt_block
                (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 *param_5,
                code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (0xf < param_3) {
    uVar4 = (ulong)((uint)param_3 & 0xf);
    CRYPTO_cbc128_encrypt();
    uVar3 = param_3 & 0xfffffffffffffff0;
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        *(byte *)((long)param_5 + uVar3) =
             *(byte *)((long)param_5 + uVar3) ^
             *(byte *)(param_1 + (param_3 & 0xfffffffffffffff0) + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
      (*param_6)(param_5,param_5,param_4);
      uVar2 = param_5[1];
      puVar1 = (undefined8 *)(param_2 + -0x10 + param_3);
      *puVar1 = *param_5;
      puVar1[1] = uVar2;
      uVar3 = param_3;
    }
  }
  return uVar3;
}



ulong CRYPTO_cts128_encrypt
                (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                code *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if (param_3 < 0x11) goto LAB_001002eb;
  uVar6 = (ulong)((uint)param_3 & 0xf);
  if ((param_3 & 0xf) == 0) {
    uVar6 = 0x10;
  }
  lVar8 = param_3 - uVar6;
  (*param_6)(param_1,param_2,lVar8,param_4,param_5,1);
  local_58 = (undefined1  [16])0x0;
  uVar3 = (uint)uVar6;
  puVar2 = (undefined8 *)(param_2 + lVar8);
  puVar9 = (undefined4 *)(lVar8 + param_1);
  if (uVar3 < 8) {
    puVar7 = (undefined4 *)local_58;
    if ((uVar6 & 4) != 0) goto LAB_00100380;
LAB_0010026c:
    lVar8 = 0;
    if ((uVar6 & 2) != 0) goto LAB_00100360;
LAB_00100276:
    if ((uVar6 & 1) != 0) goto LAB_00100340;
LAB_0010027f:
    if (uVar3 < 8) goto LAB_00100318;
LAB_0010028e:
    *puVar2 = puVar2[-2];
    *(undefined8 *)((long)puVar2 + (uVar6 - 8)) = *(undefined8 *)((long)puVar2 + (uVar6 - 0x18));
    lVar8 = (long)puVar2 - ((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    uVar3 = uVar3 + (int)lVar8 & 0xfffffff8;
    if (7 < uVar3) {
      uVar1 = 0;
      do {
        uVar6 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(puVar2 + 1) & 0xfffffffffffffff8) + uVar6) =
             *(undefined8 *)((long)(puVar2 + -2) + (uVar6 - lVar8));
      } while (uVar1 < uVar3);
    }
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = (int)uVar4 + 8;
      uVar5 = (ulong)uVar1;
      *(undefined8 *)((long)local_58 + uVar4) = *(undefined8 *)((long)puVar9 + uVar4);
      uVar4 = uVar5;
    } while (uVar1 < (uVar3 & 0xfffffff8));
    puVar7 = (undefined4 *)((long)local_58 + uVar5);
    puVar9 = (undefined4 *)(uVar5 + (long)puVar9);
    if ((uVar6 & 4) == 0) goto LAB_0010026c;
LAB_00100380:
    *puVar7 = *puVar9;
    lVar8 = 4;
    if ((uVar6 & 2) == 0) goto LAB_00100276;
LAB_00100360:
    *(undefined2 *)((long)puVar7 + lVar8) = *(undefined2 *)((long)puVar9 + lVar8);
    lVar8 = lVar8 + 2;
    if ((uVar6 & 1) == 0) goto LAB_0010027f;
LAB_00100340:
    *(undefined1 *)((long)puVar7 + lVar8) = *(undefined1 *)((long)puVar9 + lVar8);
    if (7 < uVar3) goto LAB_0010028e;
LAB_00100318:
    if ((uVar6 & 4) == 0) {
      if ((uVar3 != 0) && (*(undefined1 *)puVar2 = *(undefined1 *)(puVar2 + -2), (uVar6 & 2) != 0))
      {
        *(undefined2 *)((long)puVar2 + (uVar6 - 2)) = *(undefined2 *)((long)puVar2 + (uVar6 - 0x12))
        ;
      }
    }
    else {
      *(undefined4 *)puVar2 = *(undefined4 *)(puVar2 + -2);
      *(undefined4 *)((long)puVar2 + (uVar6 - 4)) = *(undefined4 *)((long)puVar2 + (uVar6 - 0x14));
    }
  }
  (*param_6)(local_58,puVar2 + -2,0x10,param_4,param_5,1);
  uVar6 = param_3;
LAB_001002eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



ulong CRYPTO_nistcts128_encrypt
                (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                code *param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if (0xf < param_3) {
    uVar6 = param_3 & 0xfffffffffffffff0;
    (*param_6)(param_1,param_2,uVar6,param_4,param_5,1);
    if ((param_3 & 0xf) != 0) {
      puVar4 = (undefined4 *)(param_1 + uVar6);
      local_58 = (undefined1  [16])0x0;
      puVar5 = (undefined4 *)local_58;
      if (7 < ((uint)param_3 & 0xf)) {
        uVar6 = 0;
        do {
          uVar2 = (int)uVar6 + 8;
          uVar3 = (ulong)uVar2;
          *(undefined8 *)((long)local_58 + uVar6) = *(undefined8 *)((long)puVar4 + uVar6);
          uVar6 = uVar3;
        } while (uVar2 < ((uint)param_3 & 8));
        puVar5 = (undefined4 *)((long)local_58 + uVar3);
        puVar4 = (undefined4 *)(uVar3 + (long)puVar4);
      }
      lVar1 = 0;
      if ((param_3 & 4) != 0) {
        *puVar5 = *puVar4;
        lVar1 = 4;
      }
      if ((param_3 & 2) != 0) {
        *(undefined2 *)((long)puVar5 + lVar1) = *(undefined2 *)((long)puVar4 + lVar1);
        lVar1 = lVar1 + 2;
      }
      if ((param_3 & 1) != 0) {
        *(undefined1 *)((long)puVar5 + lVar1) = *(undefined1 *)((long)puVar4 + lVar1);
      }
      (*param_6)(local_58,param_2 + -0x10 + param_3,0x10,param_4,param_5,1);
      uVar6 = param_3;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



long CRYPTO_cts128_decrypt_block
               (long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
               code *param_6)

{
  undefined1 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined8 local_68 [5];
  long local_40;
  ulong uVar6;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = 0;
  if (param_3 < 0x11) goto LAB_0010066a;
  uVar2 = (ulong)((uint)param_3 & 0xf);
  uVar11 = uVar2 + 0x10;
  if ((param_3 & 0xf) == 0) {
    uVar2 = 0x10;
    uVar11 = 0x20;
    lVar4 = param_3 - 0x20;
  }
  else {
    lVar4 = (param_3 - 0x10) - uVar2;
  }
  lVar8 = param_1;
  lVar10 = param_2;
  if (lVar4 != 0) {
    lVar8 = param_1 + lVar4;
    lVar10 = param_2 + lVar4;
    CRYPTO_cbc128_decrypt(param_1,param_2,lVar4,param_4,param_5);
  }
  (*param_6)(lVar8,local_68 + 2,param_4);
  puVar7 = (undefined4 *)(lVar8 + 0x10);
  local_68[0] = local_68[2];
  local_68[1] = local_68[3];
  if ((uint)uVar2 < 8) {
    puVar9 = local_68;
    if ((uVar2 & 4) == 0) goto LAB_00100605;
LAB_001006e0:
    *(undefined4 *)puVar9 = *puVar7;
    lVar4 = 4;
  }
  else {
    uVar5 = 0;
    do {
      uVar3 = (int)uVar5 + 8;
      uVar6 = (ulong)uVar3;
      *(undefined8 *)((long)local_68 + uVar5) = *(undefined8 *)((long)puVar7 + uVar5);
      uVar5 = uVar6;
    } while (uVar3 < ((uint)uVar2 & 0xfffffff8));
    puVar9 = (undefined8 *)((long)local_68 + uVar6);
    puVar7 = (undefined4 *)(uVar6 + (long)puVar7);
    if ((uVar2 & 4) != 0) goto LAB_001006e0;
LAB_00100605:
    lVar4 = 0;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined2 *)((long)puVar9 + lVar4) = *(undefined2 *)((long)puVar7 + lVar4);
    lVar4 = lVar4 + 2;
  }
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)puVar9 + lVar4) = *(undefined1 *)((long)puVar7 + lVar4);
  }
  (*param_6)(local_68,local_68,param_4);
  uVar2 = 0;
  do {
    uVar1 = *(undefined1 *)(lVar8 + uVar2);
    *(byte *)(lVar10 + uVar2) = *(byte *)((long)local_68 + uVar2) ^ *(byte *)(param_5 + uVar2);
    *(undefined1 *)(param_5 + uVar2) = uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x10);
  do {
    *(byte *)(lVar10 + uVar2) = *(byte *)((long)local_68 + uVar2) ^ *(byte *)(lVar8 + uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < uVar11);
  lVar4 = param_3 + 0x10;
LAB_0010066a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CRYPTO_nistcts128_decrypt_block
                (undefined4 *param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                code *param_6)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 0;
  if (0xf < param_3) {
    uVar14 = (uint)param_3 & 0xf;
    uVar8 = (ulong)uVar14;
    if ((param_3 & 0xf) == 0) {
      CRYPTO_cbc128_decrypt(param_1,param_2,param_3);
      uVar8 = param_3;
    }
    else {
      lVar7 = (param_3 - 0x10) - uVar8;
      if (lVar7 != 0) {
        param_1 = (undefined4 *)((long)param_1 + lVar7);
        param_2 = param_2 + lVar7;
        CRYPTO_cbc128_decrypt();
      }
      pbVar12 = (byte *)&local_58;
      (*param_6)((long)param_1 + uVar8,pbVar12,param_4);
      local_68[0] = local_58;
      local_68[1] = uStack_50;
      puVar11 = param_1;
      puVar13 = local_68;
      if (7 < uVar14) {
        uVar9 = 0;
        do {
          uVar14 = (int)uVar9 + 8;
          uVar10 = (ulong)uVar14;
          *(undefined8 *)((long)local_68 + uVar9) = *(undefined8 *)((long)param_1 + uVar9);
          uVar9 = uVar10;
        } while (uVar14 < ((uint)param_3 & 8));
        puVar13 = (undefined8 *)((long)local_68 + uVar10);
        puVar11 = (undefined4 *)(uVar10 + (long)param_1);
      }
      lVar7 = 0;
      if ((param_3 & 4) != 0) {
        *(undefined4 *)puVar13 = *puVar11;
        lVar7 = 4;
      }
      if ((param_3 & 2) != 0) {
        *(undefined2 *)((long)puVar13 + lVar7) = *(undefined2 *)((long)puVar11 + lVar7);
        lVar7 = lVar7 + 2;
      }
      if ((param_3 & 1) != 0) {
        *(undefined1 *)((long)puVar13 + lVar7) = *(undefined1 *)((long)puVar11 + lVar7);
      }
      (*param_6)(local_68,local_68,param_4);
      lVar7 = 0;
      do {
        uVar2 = *(undefined1 *)((long)param_1 + lVar7);
        *(byte *)(param_2 + lVar7) = *(byte *)((long)local_68 + lVar7) ^ *(byte *)(param_5 + lVar7);
        uVar3 = *(undefined1 *)((long)param_1 + uVar8 + lVar7);
        *(undefined1 *)((long)local_68 + lVar7) = uVar2;
        *(undefined1 *)(param_5 + lVar7) = uVar3;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x10);
      pbVar5 = (byte *)(param_2 + 0x10);
      do {
        bVar4 = *pbVar12;
        pbVar1 = pbVar12 + -0x10;
        pbVar6 = pbVar5 + 1;
        pbVar12 = pbVar12 + 1;
        *pbVar5 = bVar4 ^ *pbVar1;
        pbVar5 = pbVar6;
      } while (pbVar6 != (byte *)(param_2 + 0x10 + uVar8));
      uVar8 = param_3 + 0x10;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CRYPTO_cts128_decrypt
                (long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,code *param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (param_3 < 0x11) goto LAB_00100a9f;
  local_70 = (ulong)((uint)param_3 & 0xf);
  lVar8 = local_70 + 0x10;
  if ((param_3 & 0xf) == 0) {
    local_70 = 0x10;
    lVar8 = 0x20;
    lVar2 = param_3 - 0x20;
  }
  else {
    lVar2 = (param_3 - 0x10) - local_70;
  }
  lVar5 = param_1;
  if (lVar2 != 0) {
    lVar5 = param_1 + lVar2;
    (*param_6)(param_1,param_2,lVar2,param_4,param_5,0);
    param_2 = (undefined8 *)((long)param_2 + lVar2);
  }
  puVar6 = (undefined4 *)(lVar5 + 0x10);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  (*param_6)(lVar5,local_68,0x10,param_4,local_58,0);
  if ((uint)local_70 < 8) {
    puVar7 = (undefined4 *)local_68;
    if ((local_70 & 4) == 0) goto LAB_00100a38;
LAB_00100b10:
    *puVar7 = *puVar6;
    lVar2 = 4;
  }
  else {
    uVar3 = 0;
    do {
      uVar1 = (int)uVar3 + 8;
      uVar4 = (ulong)uVar1;
      *(undefined8 *)((long)local_68 + uVar3) = *(undefined8 *)((long)puVar6 + uVar3);
      uVar3 = uVar4;
    } while (uVar1 < ((uint)local_70 & 0xfffffff8));
    puVar7 = (undefined4 *)((long)local_68 + uVar4);
    puVar6 = (undefined4 *)(uVar4 + (long)puVar6);
    if ((local_70 & 4) != 0) goto LAB_00100b10;
LAB_00100a38:
    lVar2 = 0;
  }
  if ((local_70 & 2) != 0) {
    *(undefined2 *)((long)puVar7 + lVar2) = *(undefined2 *)((long)puVar6 + lVar2);
    lVar2 = lVar2 + 2;
  }
  if ((local_70 & 1) != 0) {
    *(undefined1 *)((long)puVar7 + lVar2) = *(undefined1 *)((long)puVar6 + lVar2);
  }
  (*param_6)(local_68,local_68,0x20,param_4,param_5,0);
  *param_2 = local_68._0_8_;
  *(undefined8 *)((long)param_2 + lVar8 + -8) = *(undefined8 *)(local_68 + lVar8 + -8);
  lVar2 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
  uVar1 = 0;
  do {
    uVar3 = (ulong)uVar1;
    uVar1 = uVar1 + 8;
    *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar3) =
         *(undefined8 *)((long)local_68 + (uVar3 - lVar2));
    uVar3 = param_3;
  } while (uVar1 < ((int)lVar8 + (int)lVar2 & 0xfffffff8U));
LAB_00100a9f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CRYPTO_nistcts128_decrypt
                (undefined4 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,code *param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (0xf < param_3) {
    uVar8 = (uint)param_3 & 0xf;
    uVar3 = (ulong)uVar8;
    uVar4 = param_3;
    if ((param_3 & 0xf) == 0) {
      (*param_6)(param_1,param_2,param_3,param_4,param_5,0);
    }
    else {
      lVar2 = (param_3 - 0x10) - uVar3;
      if (lVar2 != 0) {
        param_1 = (undefined4 *)((long)param_1 + lVar2);
        param_2 = (undefined8 *)((long)param_2 + lVar2);
        (*param_6)();
      }
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      (*param_6)((long)param_1 + uVar3,local_68,0x10,param_4,local_58,0);
      puVar7 = (undefined4 *)local_68;
      if (7 < uVar8) {
        uVar5 = 0;
        do {
          uVar1 = (int)uVar5 + 8;
          uVar6 = (ulong)uVar1;
          *(undefined8 *)((long)local_68 + uVar5) = *(undefined8 *)((long)param_1 + uVar5);
          uVar5 = uVar6;
        } while (uVar1 < ((uint)param_3 & 8));
        puVar7 = (undefined4 *)((long)local_68 + uVar6);
        param_1 = (undefined4 *)(uVar6 + (long)param_1);
      }
      lVar2 = 0;
      if ((param_3 & 4) != 0) {
        *puVar7 = *param_1;
        lVar2 = 4;
      }
      if ((param_3 & 2) != 0) {
        *(undefined2 *)((long)puVar7 + lVar2) = *(undefined2 *)((long)param_1 + lVar2);
        lVar2 = lVar2 + 2;
      }
      if ((param_3 & 1) != 0) {
        *(undefined1 *)((long)puVar7 + lVar2) = *(undefined1 *)((long)param_1 + lVar2);
      }
      (*param_6)(local_68,local_68,0x20,param_4,param_5,0);
      *param_2 = local_68._0_8_;
      *(undefined8 *)((long)param_2 + uVar3 + 8) = *(undefined8 *)(local_68 + uVar3 + 8);
      lVar2 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
      uVar1 = 0;
      do {
        uVar3 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar3) =
             *(undefined8 *)((long)local_68 + (uVar3 - lVar2));
      } while (uVar1 < (uVar8 + 0x10 + (int)lVar2 & 0xfffffff8));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


