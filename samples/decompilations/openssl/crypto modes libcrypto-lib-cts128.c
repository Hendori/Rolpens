
ulong CRYPTO_cts128_encrypt_block
                (long param_1,long param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                code *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_3 < 0x11) {
    return 0;
  }
  uVar6 = (ulong)((uint)param_3 & 0xf);
  if ((param_3 & 0xf) == 0) {
    lVar3 = param_3 - 0x10;
    uVar6 = 0x10;
    puVar7 = (undefined8 *)(param_2 + lVar3);
    CRYPTO_cbc128_encrypt(param_1,param_2,lVar3);
    uVar5 = 0xf;
LAB_00100063:
    if (0xe < (ulong)((long)param_5 - (param_1 + 1 + lVar3))) {
      if (uVar5 == 0xf) {
        uVar5 = ((ulong *)(param_1 + lVar3))[1];
        *param_5 = *(ulong *)(param_1 + lVar3) ^ *param_5;
        param_5[1] = uVar5 ^ param_5[1];
      }
      else {
        *param_5 = *(ulong *)(param_1 + lVar3) ^ *param_5;
        if (((((uVar6 != 8) &&
              (*(byte *)(param_5 + 1) = (byte)param_5[1] ^ *(byte *)(param_1 + 8 + lVar3),
              uVar6 != 9)) &&
             (*(byte *)((long)param_5 + 9) =
                   *(byte *)((long)param_5 + 9) ^ *(byte *)(param_1 + 9 + lVar3), uVar6 != 10)) &&
            ((*(byte *)((long)param_5 + 10) =
                   *(byte *)((long)param_5 + 10) ^ *(byte *)(param_1 + 10 + lVar3), uVar6 != 0xb &&
             (*(byte *)((long)param_5 + 0xb) =
                   *(byte *)((long)param_5 + 0xb) ^ *(byte *)(param_1 + 0xb + lVar3), uVar6 != 0xc))
            )) && ((*(byte *)((long)param_5 + 0xc) =
                         *(byte *)((long)param_5 + 0xc) ^ *(byte *)(param_1 + 0xc + lVar3),
                   uVar6 != 0xd &&
                   (*(byte *)((long)param_5 + 0xd) =
                         *(byte *)((long)param_5 + 0xd) ^ *(byte *)(param_1 + 0xd + lVar3),
                   uVar6 != 0xe)))) {
          *(byte *)((long)param_5 + 0xe) =
               *(byte *)((long)param_5 + 0xe) ^ *(byte *)(param_1 + 0xe + lVar3);
        }
      }
      goto LAB_00100180;
    }
    *(byte *)param_5 = (byte)*param_5 ^ *(byte *)(param_1 + lVar3);
  }
  else {
    lVar3 = param_3 - uVar6;
    puVar7 = (undefined8 *)(param_2 + lVar3);
    CRYPTO_cbc128_encrypt(param_1,param_2,lVar3);
    uVar5 = uVar6 - 1;
    if (6 < uVar5) goto LAB_00100063;
    *(byte *)param_5 = (byte)*param_5 ^ *(byte *)(param_1 + lVar3);
    if (uVar6 == 1) goto LAB_00100180;
  }
  *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) ^ *(byte *)(param_1 + 1 + lVar3);
  if ((((uVar6 != 2) &&
       (*(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) ^ *(byte *)(param_1 + 2 + lVar3)
       , uVar6 != 3)) &&
      ((*(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) ^ *(byte *)(param_1 + 3 + lVar3)
       , uVar6 != 4 &&
       (((*(byte *)((long)param_5 + 4) =
               *(byte *)((long)param_5 + 4) ^ *(byte *)(param_1 + 4 + lVar3), uVar6 != 5 &&
         (*(byte *)((long)param_5 + 5) =
               *(byte *)((long)param_5 + 5) ^ *(byte *)(param_1 + 5 + lVar3), uVar6 != 6)) &&
        (*(byte *)((long)param_5 + 6) =
              *(byte *)((long)param_5 + 6) ^ *(byte *)(param_1 + 6 + lVar3), uVar6 != 7)))))) &&
     (((*(byte *)((long)param_5 + 7) = *(byte *)((long)param_5 + 7) ^ *(byte *)(param_1 + 7 + lVar3)
       , uVar6 != 8 &&
       (*(byte *)(param_5 + 1) = (byte)param_5[1] ^ *(byte *)(param_1 + 8 + lVar3), uVar6 != 9)) &&
      ((*(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) ^ *(byte *)(param_1 + 9 + lVar3)
       , uVar6 != 10 &&
       (((*(byte *)((long)param_5 + 10) =
               *(byte *)((long)param_5 + 10) ^ *(byte *)(param_1 + 10 + lVar3), uVar6 != 0xb &&
         (*(byte *)((long)param_5 + 0xb) =
               *(byte *)((long)param_5 + 0xb) ^ *(byte *)(param_1 + 0xb + lVar3), uVar6 != 0xc)) &&
        ((*(byte *)((long)param_5 + 0xc) =
               *(byte *)((long)param_5 + 0xc) ^ *(byte *)(param_1 + 0xc + lVar3), uVar6 != 0xd &&
         (*(byte *)((long)param_5 + 0xd) =
               *(byte *)((long)param_5 + 0xd) ^ *(byte *)(param_1 + 0xd + lVar3), uVar6 != 0xe))))))
      )))) {
    *(byte *)((long)param_5 + 0xe) =
         *(byte *)((long)param_5 + 0xe) ^ *(byte *)(param_1 + 0xe + lVar3);
    if (uVar6 == 0x10) {
      *(byte *)((long)param_5 + 0xf) =
           *(byte *)((long)param_5 + 0xf) ^ *(byte *)(param_1 + 0xf + lVar3);
    }
    else {
      uVar6 = 0xf;
    }
  }
LAB_00100180:
  (*param_6)(param_5,param_5,param_4);
  puVar1 = puVar7 + -2;
  uVar2 = (uint)uVar6;
  if (uVar2 < 8) {
    if ((uVar6 & 4) == 0) {
      if ((uVar2 != 0) && (*(undefined1 *)puVar7 = *(undefined1 *)puVar1, (uVar6 & 2) != 0)) {
        *(undefined2 *)((long)puVar7 + (uVar6 - 2)) = *(undefined2 *)((long)puVar7 + (uVar6 - 0x12))
        ;
      }
    }
    else {
      *(undefined4 *)puVar7 = *(undefined4 *)puVar1;
      *(undefined4 *)((long)puVar7 + (uVar6 - 4)) = *(undefined4 *)((long)puVar7 + (uVar6 - 0x14));
    }
  }
  else {
    *puVar7 = puVar7[-2];
    *(undefined8 *)((long)puVar7 + (uVar6 - 8)) = *(undefined8 *)((long)puVar7 + (uVar6 - 0x18));
    lVar3 = (long)puVar7 - ((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
    uVar2 = (int)lVar3 + uVar2 & 0xfffffff8;
    if (7 < uVar2) {
      uVar4 = 0;
      do {
        uVar6 = (ulong)uVar4;
        uVar4 = uVar4 + 8;
        *(undefined8 *)(((ulong)(puVar7 + 1) & 0xfffffffffffffff8) + uVar6) =
             *(undefined8 *)((long)puVar1 + (uVar6 - lVar3));
      } while (uVar4 < uVar2);
      uVar6 = param_5[1];
      puVar7[-2] = *param_5;
      puVar7[-1] = uVar6;
      return param_3;
    }
  }
  uVar6 = param_5[1];
  puVar7[-2] = *param_5;
  puVar7[-1] = uVar6;
  return param_3;
}



ulong CRYPTO_nistcts128_encrypt_block
                (long param_1,long param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                code *param_6)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 < 0x10) {
    return 0;
  }
  uVar6 = param_3 & 0xfffffffffffffff0;
  uVar2 = (ulong)((uint)param_3 & 0xf);
  CRYPTO_cbc128_encrypt(param_1,param_2,uVar6);
  if (uVar2 == 0) {
    return uVar6;
  }
  if (uVar2 - 1 < 3) {
    *(byte *)param_5 = (byte)*param_5 ^ *(byte *)(param_1 + uVar6);
    if (((param_3 & 0xe) == 0) ||
       (*(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) ^ *(byte *)(param_1 + 1 + uVar6)
       , uVar2 != 3)) goto LAB_001005b2;
  }
  else {
    if (6 < (long)param_5 - (param_1 + 1 + uVar6)) {
      if (uVar2 - 1 < 7) {
        lVar3 = 0;
        uVar5 = uVar2;
LAB_00100556:
        *(uint *)((long)param_5 + lVar3) =
             *(uint *)((long)param_5 + lVar3) ^ *(uint *)(param_1 + lVar3 + uVar6);
        if (uVar5 == 4) goto LAB_001005b2;
        lVar3 = lVar3 + 4;
      }
      else {
        *param_5 = *(ulong *)(param_1 + uVar6) ^ *param_5;
        if (uVar2 == 8) goto LAB_001005b2;
        lVar3 = 8;
        uVar5 = uVar2 - 8;
        if (2 < uVar2 - 9) goto LAB_00100556;
      }
      *(byte *)((long)param_5 + lVar3) =
           *(byte *)((long)param_5 + lVar3) ^ *(byte *)(param_1 + lVar3 + uVar6);
      uVar5 = lVar3 + 1;
      if (uVar5 < uVar2) {
        uVar4 = lVar3 + 2;
        *(byte *)((long)param_5 + uVar5) =
             *(byte *)((long)param_5 + uVar5) ^ *(byte *)(param_1 + uVar5 + uVar6);
        if (uVar4 < uVar2) {
          *(byte *)((long)param_5 + uVar4) =
               *(byte *)((long)param_5 + uVar4) ^ *(byte *)(param_1 + uVar4 + uVar6);
        }
      }
      goto LAB_001005b2;
    }
    *(byte *)param_5 = (byte)*param_5 ^ *(byte *)(param_1 + uVar6);
    if ((param_3 & 0xe) == 0) goto LAB_001005b2;
    *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) ^ *(byte *)(param_1 + 1 + uVar6);
  }
  *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) ^ *(byte *)(param_1 + 2 + uVar6);
  if ((((((param_3 & 0xc) != 0) &&
        (*(byte *)((long)param_5 + 3) =
              *(byte *)((long)param_5 + 3) ^ *(byte *)(param_1 + 3 + uVar6), 4 < uVar2)) &&
       (*(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) ^ *(byte *)(param_1 + 4 + uVar6)
       , uVar2 != 5)) &&
      ((((*(byte *)((long)param_5 + 5) =
               *(byte *)((long)param_5 + 5) ^ *(byte *)(param_1 + 5 + uVar6), uVar2 != 6 &&
         (*(byte *)((long)param_5 + 6) =
               *(byte *)((long)param_5 + 6) ^ *(byte *)(param_1 + 6 + uVar6), (param_3 & 8) != 0))
        && ((*(byte *)((long)param_5 + 7) =
                  *(byte *)((long)param_5 + 7) ^ *(byte *)(param_1 + 7 + uVar6), 8 < uVar2 &&
            ((*(byte *)(param_5 + 1) = (byte)param_5[1] ^ *(byte *)(param_1 + 8 + uVar6), uVar2 != 9
             && (*(byte *)((long)param_5 + 9) =
                      *(byte *)((long)param_5 + 9) ^ *(byte *)(param_1 + 9 + uVar6), uVar2 != 10))))
           )) && (*(byte *)((long)param_5 + 10) =
                       *(byte *)((long)param_5 + 10) ^ *(byte *)(param_1 + 10 + uVar6), uVar2 != 0xb
                 )))) &&
     (((*(byte *)((long)param_5 + 0xb) =
             *(byte *)((long)param_5 + 0xb) ^ *(byte *)(param_1 + 0xb + uVar6), uVar2 != 0xc &&
       (*(byte *)((long)param_5 + 0xc) =
             *(byte *)((long)param_5 + 0xc) ^ *(byte *)(param_1 + 0xc + uVar6), uVar2 != 0xd)) &&
      (*(byte *)((long)param_5 + 0xd) =
            *(byte *)((long)param_5 + 0xd) ^ *(byte *)(param_1 + 0xd + uVar6), uVar2 == 0xf)))) {
    *(byte *)((long)param_5 + 0xe) =
         *(byte *)((long)param_5 + 0xe) ^ *(byte *)(param_1 + 0xe + uVar6);
  }
LAB_001005b2:
  (*param_6)(param_5,param_5,param_4);
  uVar2 = param_5[1];
  puVar1 = (ulong *)(param_2 + -0x10 + param_3);
  *puVar1 = *param_5;
  puVar1[1] = uVar2;
  return param_3;
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
  if (param_3 < 0x11) goto LAB_0010071b;
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
    if ((uVar6 & 4) != 0) goto LAB_001007b0;
LAB_0010069c:
    lVar8 = 0;
    if ((uVar6 & 2) != 0) goto LAB_00100790;
LAB_001006a6:
    if ((uVar6 & 1) != 0) goto LAB_00100770;
LAB_001006af:
    if (uVar3 < 8) goto LAB_00100748;
LAB_001006be:
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
    if ((uVar6 & 4) == 0) goto LAB_0010069c;
LAB_001007b0:
    *puVar7 = *puVar9;
    lVar8 = 4;
    if ((uVar6 & 2) == 0) goto LAB_001006a6;
LAB_00100790:
    *(undefined2 *)((long)puVar7 + lVar8) = *(undefined2 *)((long)puVar9 + lVar8);
    lVar8 = lVar8 + 2;
    if ((uVar6 & 1) == 0) goto LAB_001006af;
LAB_00100770:
    *(undefined1 *)((long)puVar7 + lVar8) = *(undefined1 *)((long)puVar9 + lVar8);
    if (7 < uVar3) goto LAB_001006be;
LAB_00100748:
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
LAB_0010071b:
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
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  long local_40;
  ulong uVar6;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = 0;
  if (param_3 < 0x11) goto LAB_00100bf4;
  uVar2 = (ulong)((uint)param_3 & 0xf);
  uVar9 = uVar2 + 0x10;
  if ((param_3 & 0xf) == 0) {
    uVar2 = 0x10;
    uVar9 = 0x20;
    lVar4 = param_3 - 0x20;
  }
  else {
    lVar4 = (param_3 - 0x10) - uVar2;
  }
  if (lVar4 != 0) {
    CRYPTO_cbc128_decrypt(param_1,param_2,lVar4,param_4,param_5,param_6);
    param_1 = (ulong *)((long)param_1 + lVar4);
    param_2 = (ulong *)((long)param_2 + lVar4);
  }
  (*param_6)(param_1,&local_58,param_4);
  puVar7 = param_1 + 2;
  local_68 = CONCAT17(bStack_51,
                      CONCAT16(bStack_52,
                               CONCAT15(bStack_53,
                                        CONCAT14(bStack_54,
                                                 CONCAT13(bStack_55,
                                                          CONCAT12(bStack_56,
                                                                   CONCAT11(bStack_57,local_58))))))
                     );
  uStack_60 = CONCAT17(bStack_49,
                       CONCAT16(bStack_4a,
                                CONCAT15(bStack_4b,
                                         CONCAT14(bStack_4c,
                                                  CONCAT13(bStack_4d,
                                                           CONCAT12(bStack_4e,
                                                                    CONCAT11(bStack_4f,bStack_50))))
                                        )));
  if ((uint)uVar2 < 8) {
    puVar8 = &local_68;
    if ((uVar2 & 4) == 0) goto LAB_00100a35;
LAB_00100c70:
    *(int *)puVar8 = (int)*puVar7;
    lVar4 = 4;
  }
  else {
    uVar5 = 0;
    do {
      uVar3 = (int)uVar5 + 8;
      uVar6 = (ulong)uVar3;
      *(undefined8 *)((long)&local_68 + uVar5) = *(undefined8 *)((long)puVar7 + uVar5);
      uVar5 = uVar6;
    } while (uVar3 < ((uint)uVar2 & 0xfffffff8));
    puVar8 = (undefined8 *)((long)&local_68 + uVar6);
    puVar7 = (ulong *)(uVar6 + (long)puVar7);
    if ((uVar2 & 4) != 0) goto LAB_00100c70;
LAB_00100a35:
    lVar4 = 0;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined2 *)((long)puVar8 + lVar4) = *(undefined2 *)((long)puVar7 + lVar4);
    lVar4 = lVar4 + 2;
  }
  if ((uVar2 & 1) != 0) {
    *(byte *)((long)puVar8 + lVar4) = *(byte *)((long)puVar7 + lVar4);
  }
  (*param_6)(&local_68,&local_68,param_4);
  if (((ulong)((long)param_2 - ((long)param_1 + 1)) < 0xf ||
       (ulong)((long)param_5 - (long)((long)param_1 + 1)) < 0xf) ||
     ((byte *)((long)param_2 + (0xf - (long)param_5)) < (byte *)0x1f)) {
    uVar2 = *param_1;
    *(byte *)param_2 = (byte)local_68 ^ (byte)*param_5;
    *(byte *)param_5 = (byte)uVar2;
    bVar1 = *(byte *)((long)param_1 + 1);
    *(byte *)((long)param_2 + 1) = local_68._1_1_ ^ *(byte *)((long)param_5 + 1);
    *(byte *)((long)param_5 + 1) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 2);
    *(byte *)((long)param_2 + 2) = local_68._2_1_ ^ *(byte *)((long)param_5 + 2);
    *(byte *)((long)param_5 + 2) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 3);
    *(byte *)((long)param_2 + 3) = local_68._3_1_ ^ *(byte *)((long)param_5 + 3);
    *(byte *)((long)param_5 + 3) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 4);
    *(byte *)((long)param_2 + 4) = local_68._4_1_ ^ *(byte *)((long)param_5 + 4);
    *(byte *)((long)param_5 + 4) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 5);
    *(byte *)((long)param_2 + 5) = local_68._5_1_ ^ *(byte *)((long)param_5 + 5);
    *(byte *)((long)param_5 + 5) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 6);
    *(byte *)((long)param_2 + 6) = local_68._6_1_ ^ *(byte *)((long)param_5 + 6);
    *(byte *)((long)param_5 + 6) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 7);
    *(byte *)((long)param_2 + 7) = local_68._7_1_ ^ *(byte *)((long)param_5 + 7);
    *(byte *)((long)param_5 + 7) = bVar1;
    uVar2 = param_1[1];
    *(byte *)(param_2 + 1) = (byte)uStack_60 ^ (byte)param_5[1];
    *(byte *)(param_5 + 1) = (byte)uVar2;
    bVar1 = *(byte *)((long)param_1 + 9);
    *(byte *)((long)param_2 + 9) = uStack_60._1_1_ ^ *(byte *)((long)param_5 + 9);
    *(byte *)((long)param_5 + 9) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 10);
    *(byte *)((long)param_2 + 10) = uStack_60._2_1_ ^ *(byte *)((long)param_5 + 10);
    *(byte *)((long)param_5 + 10) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 0xb);
    *(byte *)((long)param_2 + 0xb) = uStack_60._3_1_ ^ *(byte *)((long)param_5 + 0xb);
    *(byte *)((long)param_5 + 0xb) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 0xc);
    *(byte *)((long)param_2 + 0xc) = uStack_60._4_1_ ^ *(byte *)((long)param_5 + 0xc);
    *(byte *)((long)param_5 + 0xc) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 0xd);
    *(byte *)((long)param_2 + 0xd) = uStack_60._5_1_ ^ *(byte *)((long)param_5 + 0xd);
    *(byte *)((long)param_5 + 0xd) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 0xe);
    *(byte *)((long)param_2 + 0xe) = uStack_60._6_1_ ^ *(byte *)((long)param_5 + 0xe);
    *(byte *)((long)param_5 + 0xe) = bVar1;
    bVar1 = *(byte *)((long)param_1 + 0xf);
    *(byte *)((long)param_2 + 0xf) = uStack_60._7_1_ ^ *(byte *)((long)param_5 + 0xf);
    *(byte *)((long)param_5 + 0xf) = bVar1;
  }
  else {
    uVar2 = param_5[1];
    uVar5 = *param_1;
    uVar6 = param_1[1];
    *param_2 = *param_5 ^ local_68;
    param_2[1] = uVar2 ^ uStack_60;
    *param_5 = uVar5;
    param_5[1] = uVar6;
  }
  if ((uVar9 - 0x11 < 7) || ((byte *)(~(ulong)param_1 + (long)param_2) < (byte *)0xf)) {
    *(byte *)(param_2 + 2) = local_58 ^ (byte)param_1[2];
    if (((uVar9 != 0x11) &&
        (((*(byte *)((long)param_2 + 0x11) = *(byte *)((long)param_1 + 0x11) ^ bStack_57,
          uVar9 != 0x12 &&
          (*(byte *)((long)param_2 + 0x12) = bStack_56 ^ *(byte *)((long)param_1 + 0x12),
          uVar9 != 0x13)) &&
         (*(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_1 + 0x13) ^ bStack_55,
         uVar9 != 0x14)))) &&
       ((((*(byte *)((long)param_2 + 0x14) = bStack_54 ^ *(byte *)((long)param_1 + 0x14),
          uVar9 != 0x15 &&
          (*(byte *)((long)param_2 + 0x15) = bStack_53 ^ *(byte *)((long)param_1 + 0x15),
          uVar9 != 0x16)) &&
         (*(byte *)((long)param_2 + 0x16) = bStack_52 ^ *(byte *)((long)param_1 + 0x16),
         uVar9 != 0x17)) &&
        (((*(byte *)((long)param_2 + 0x17) = bStack_51 ^ *(byte *)((long)param_1 + 0x17),
          uVar9 != 0x18 && (*(byte *)(param_2 + 3) = bStack_50 ^ (byte)param_1[3], uVar9 != 0x19))
         && (((*(byte *)((long)param_2 + 0x19) = bStack_4f ^ *(byte *)((long)param_1 + 0x19),
              uVar9 != 0x1a &&
              (((*(byte *)((long)param_2 + 0x1a) = bStack_4e ^ *(byte *)((long)param_1 + 0x1a),
                uVar9 != 0x1b &&
                (*(byte *)((long)param_2 + 0x1b) = bStack_4d ^ *(byte *)((long)param_1 + 0x1b),
                uVar9 != 0x1c)) &&
               (*(byte *)((long)param_2 + 0x1c) = bStack_4c ^ *(byte *)((long)param_1 + 0x1c),
               uVar9 != 0x1d)))) &&
             ((*(byte *)((long)param_2 + 0x1d) = bStack_4b ^ *(byte *)((long)param_1 + 0x1d),
              uVar9 != 0x1e &&
              (*(byte *)((long)param_2 + 0x1e) = bStack_4a ^ *(byte *)((long)param_1 + 0x1e),
              uVar9 == 0x20)))))))))) {
      *(byte *)((long)param_2 + 0x1f) = bStack_49 ^ *(byte *)((long)param_1 + 0x1f);
    }
  }
  else {
    if (uVar9 - 0x11 == 0xf) {
      uVar9 = param_1[3];
      lVar4 = param_3 + 0x10;
      param_2[2] = param_1[2] ^
                   CONCAT17(bStack_51,
                            CONCAT16(bStack_52,
                                     CONCAT15(bStack_53,
                                              CONCAT14(bStack_54,
                                                       CONCAT13(bStack_55,
                                                                CONCAT12(bStack_56,
                                                                         CONCAT11(bStack_57,local_58
                                                                                 )))))));
      param_2[3] = uVar9 ^ CONCAT17(bStack_49,
                                    CONCAT16(bStack_4a,
                                             CONCAT15(bStack_4b,
                                                      CONCAT14(bStack_4c,
                                                               CONCAT13(bStack_4d,
                                                                        CONCAT12(bStack_4e,
                                                                                 CONCAT11(bStack_4f,
                                                                                          bStack_50)
                                                                                ))))));
      goto LAB_00100bf4;
    }
    param_2[2] = param_1[2] ^
                 CONCAT17(bStack_51,
                          CONCAT16(bStack_52,
                                   CONCAT15(bStack_53,
                                            CONCAT14(bStack_54,
                                                     CONCAT13(bStack_55,
                                                              CONCAT12(bStack_56,
                                                                       CONCAT11(bStack_57,local_58))
                                                             )))));
    if (((uVar9 != 0x18) && (*(byte *)(param_2 + 3) = bStack_50 ^ (byte)param_1[3], 0x19 < uVar9))
       && ((*(byte *)((long)param_2 + 0x19) = bStack_4f ^ *(byte *)((long)param_1 + 0x19),
           uVar9 != 0x1a &&
           ((((*(byte *)((long)param_2 + 0x1a) = bStack_4e ^ *(byte *)((long)param_1 + 0x1a),
              uVar9 != 0x1b &&
              (*(byte *)((long)param_2 + 0x1b) = bStack_4d ^ *(byte *)((long)param_1 + 0x1b),
              uVar9 != 0x1c)) &&
             (*(byte *)((long)param_2 + 0x1c) = bStack_4c ^ *(byte *)((long)param_1 + 0x1c),
             uVar9 != 0x1d)) &&
            (*(byte *)((long)param_2 + 0x1d) = bStack_4b ^ *(byte *)((long)param_1 + 0x1d),
            uVar9 == 0x1f)))))) {
      *(byte *)((long)param_2 + 0x1e) = bStack_4a ^ *(byte *)((long)param_1 + 0x1e);
      lVar4 = param_3 + 0x10;
      goto LAB_00100bf4;
    }
  }
  lVar4 = param_3 + 0x10;
LAB_00100bf4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CRYPTO_nistcts128_decrypt_block
                (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                code *param_6)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = 0;
  if (param_3 < 0x10) goto LAB_0010115c;
  uVar17 = (uint)param_3 & 0xf;
  uVar18 = (ulong)uVar17;
  if ((param_3 & 0xf) == 0) {
    CRYPTO_cbc128_decrypt();
    uVar18 = param_3;
    goto LAB_0010115c;
  }
  lVar12 = (param_3 - 0x10) - uVar18;
  if (lVar12 != 0) {
    local_78 = param_4;
    CRYPTO_cbc128_decrypt(param_1,param_2,lVar12);
    param_1 = (ulong *)((long)param_1 + lVar12);
    param_2 = (ulong *)((long)param_2 + lVar12);
    param_4 = local_78;
  }
  puVar2 = (ulong *)((long)param_1 + uVar18);
  local_70 = &local_68;
  local_78 = param_4;
  (*param_6)(puVar2,&local_58,param_4);
  local_68 = local_58;
  uStack_60 = uStack_50;
  puVar15 = param_1;
  puVar19 = local_70;
  if (7 < uVar17) {
    uVar13 = 0;
    do {
      uVar17 = (int)uVar13 + 8;
      uVar14 = (ulong)uVar17;
      *(undefined8 *)((long)local_70 + uVar13) = *(undefined8 *)((long)param_1 + uVar13);
      uVar13 = uVar14;
    } while (uVar17 < ((uint)param_3 & 8));
    puVar19 = (undefined8 *)((long)local_70 + uVar14);
    puVar15 = (ulong *)(uVar14 + (long)param_1);
  }
  lVar12 = 0;
  if ((param_3 & 4) != 0) {
    *(int *)puVar19 = (int)*puVar15;
    lVar12 = 4;
  }
  if ((param_3 & 2) != 0) {
    *(undefined2 *)((long)puVar19 + lVar12) = *(undefined2 *)((long)puVar15 + lVar12);
    lVar12 = lVar12 + 2;
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)((long)puVar19 + lVar12) = *(undefined1 *)((long)puVar15 + lVar12);
  }
  (*param_6)(local_70,local_70,local_78);
  uVar10 = uStack_60;
  uVar14 = local_68;
  uVar13 = uVar18 + 0x10;
  pbVar1 = (byte *)((long)param_1 + uVar18 + 1);
  if (((puVar2 < param_2 + 2 && param_2 < (ulong *)((long)param_1 + uVar13) ||
       ((ulong)((long)param_5 - (long)pbVar1) < 0xf ||
       (ulong)((long)param_2 - ((long)param_1 + 1)) < 0xf)) ||
       (ulong)((long)param_5 - (long)((long)param_1 + 1)) < 0xf) ||
     ((byte *)((long)param_2 + (0xf - (long)param_5)) < (byte *)0x1f)) {
    uVar11 = *param_1;
    *(byte *)param_2 = (byte)*param_5 ^ (byte)local_68;
    *(byte *)param_5 = (byte)*puVar2;
    uVar3 = *(undefined1 *)((long)param_1 + 1);
    *(byte *)((long)param_2 + 1) = local_68._1_1_ ^ *(byte *)((long)param_5 + 1);
    *(byte *)((long)param_5 + 1) = *pbVar1;
    local_68._2_1_ = SUB81(uVar14,2);
    uVar4 = *(undefined1 *)((long)param_1 + 2);
    *(byte *)((long)param_2 + 2) = local_68._2_1_ ^ *(byte *)((long)param_5 + 2);
    *(byte *)((long)param_5 + 2) = *(byte *)((long)param_1 + uVar18 + 2);
    local_68._3_1_ = SUB81(uVar14,3);
    uVar5 = *(undefined1 *)((long)param_1 + 3);
    *(byte *)((long)param_2 + 3) = local_68._3_1_ ^ *(byte *)((long)param_5 + 3);
    *(byte *)((long)param_5 + 3) = *(byte *)((long)param_1 + uVar18 + 3);
    local_68._4_1_ = SUB81(uVar14,4);
    uVar6 = *(undefined1 *)((long)param_1 + 4);
    *(byte *)((long)param_2 + 4) = local_68._4_1_ ^ *(byte *)((long)param_5 + 4);
    *(byte *)((long)param_5 + 4) = *(byte *)((long)param_1 + uVar18 + 4);
    local_68._5_1_ = SUB81(uVar14,5);
    uVar7 = *(undefined1 *)((long)param_1 + 5);
    *(byte *)((long)param_2 + 5) = local_68._5_1_ ^ *(byte *)((long)param_5 + 5);
    *(byte *)((long)param_5 + 5) = *(byte *)((long)param_1 + uVar18 + 5);
    local_68._6_1_ = SUB81(uVar14,6);
    uVar8 = *(undefined1 *)((long)param_1 + 6);
    *(byte *)((long)param_2 + 6) = local_68._6_1_ ^ *(byte *)((long)param_5 + 6);
    local_68._7_1_ = SUB81(uVar14,7);
    *(byte *)((long)param_5 + 6) = *(byte *)((long)param_1 + uVar18 + 6);
    uVar9 = *(undefined1 *)((long)param_1 + 7);
    *(byte *)((long)param_2 + 7) = local_68._7_1_ ^ *(byte *)((long)param_5 + 7);
    local_68 = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,(char)uVar11)))))));
    *(byte *)((long)param_5 + 7) = *(byte *)((long)param_1 + uVar18 + 7);
    uVar14 = param_1[1];
    *(byte *)(param_2 + 1) = (byte)uStack_60 ^ (byte)param_5[1];
    *(byte *)(param_5 + 1) = *(byte *)((long)param_1 + uVar18 + 8);
    uVar3 = *(undefined1 *)((long)param_1 + 9);
    *(byte *)((long)param_2 + 9) = uStack_60._1_1_ ^ *(byte *)((long)param_5 + 9);
    *(byte *)((long)param_5 + 9) = *(byte *)((long)param_1 + uVar18 + 9);
    uStack_60._2_1_ = SUB81(uVar10,2);
    uVar4 = *(undefined1 *)((long)param_1 + 10);
    *(byte *)((long)param_2 + 10) = uStack_60._2_1_ ^ *(byte *)((long)param_5 + 10);
    *(byte *)((long)param_5 + 10) = *(byte *)((long)param_1 + uVar18 + 10);
    uStack_60._3_1_ = SUB81(uVar10,3);
    uVar5 = *(undefined1 *)((long)param_1 + 0xb);
    *(byte *)((long)param_2 + 0xb) = uStack_60._3_1_ ^ *(byte *)((long)param_5 + 0xb);
    *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_1 + uVar18 + 0xb);
    uStack_60._4_1_ = SUB81(uVar10,4);
    uVar6 = *(undefined1 *)((long)param_1 + 0xc);
    *(byte *)((long)param_2 + 0xc) = uStack_60._4_1_ ^ *(byte *)((long)param_5 + 0xc);
    *(byte *)((long)param_5 + 0xc) = *(byte *)((long)param_1 + uVar18 + 0xc);
    uStack_60._5_1_ = SUB81(uVar10,5);
    uVar7 = *(undefined1 *)((long)param_1 + 0xd);
    *(byte *)((long)param_2 + 0xd) = uStack_60._5_1_ ^ *(byte *)((long)param_5 + 0xd);
    *(byte *)((long)param_5 + 0xd) = *(byte *)((long)param_1 + uVar18 + 0xd);
    uStack_60._6_1_ = SUB81(uVar10,6);
    uVar8 = *(undefined1 *)((long)param_1 + 0xe);
    *(byte *)((long)param_2 + 0xe) = uStack_60._6_1_ ^ *(byte *)((long)param_5 + 0xe);
    uStack_60._7_1_ = SUB81(uVar10,7);
    *(byte *)((long)param_5 + 0xe) = *(byte *)((long)param_1 + uVar18 + 0xe);
    uVar9 = *(undefined1 *)((long)param_1 + 0xf);
    *(byte *)((long)param_2 + 0xf) = uStack_60._7_1_ ^ *(byte *)((long)param_5 + 0xf);
    uStack_60 = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,(char)uVar14)))))));
    *(byte *)((long)param_5 + 0xf) = *(byte *)((long)param_1 + uVar18 + 0xf);
  }
  else {
    uVar14 = param_5[1];
    uVar10 = *param_1;
    uVar11 = param_1[1];
    *param_2 = *param_5 ^ local_68;
    param_2[1] = uVar14 ^ uStack_60;
    uVar14 = puVar2[1];
    local_68 = uVar10;
    uStack_60 = uVar11;
    *param_5 = *puVar2;
    param_5[1] = uVar14;
  }
  if (uVar18 - 1 < 7) {
    lVar16 = 0;
    lVar12 = 0x10;
LAB_001010ed:
    uVar18 = uVar18 - lVar16;
    if (2 < uVar18 - 1) {
      *(uint *)((long)param_2 + lVar16 + 0x10) =
           *(uint *)((long)&local_58 + lVar16) ^ *(uint *)((long)&local_68 + lVar16);
      if ((uVar18 & 3) == 0) goto LAB_00101158;
      lVar12 = lVar12 + (uVar18 & 0xfffffffffffffffc);
    }
    *(byte *)((long)param_2 + lVar12) =
         *(byte *)((long)&local_78 + lVar12) ^ *(byte *)((long)&local_68 + lVar12);
    if (lVar12 + 1U < uVar13) {
      *(byte *)((long)param_2 + lVar12 + 1) =
           *(byte *)((long)&local_78 + lVar12 + 1) ^ *(byte *)((long)&local_68 + lVar12 + 1);
      if (lVar12 + 2U < uVar13) {
        *(byte *)((long)param_2 + lVar12 + 2) =
             *(byte *)((long)&local_78 + lVar12 + 2) ^ *(byte *)((long)&local_68 + lVar12 + 2);
      }
    }
  }
  else {
    param_2[2] = local_58 ^ local_68;
    if (uVar18 != 8) {
      lVar16 = 8;
      lVar12 = 0x18;
      goto LAB_001010ed;
    }
  }
LAB_00101158:
  uVar18 = param_3 + 0x10;
LAB_0010115c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
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
  if (param_3 < 0x11) goto LAB_0010152f;
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
    if ((local_70 & 4) == 0) goto LAB_001014c8;
LAB_001015a0:
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
    if ((local_70 & 4) != 0) goto LAB_001015a0;
LAB_001014c8:
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
LAB_0010152f:
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


