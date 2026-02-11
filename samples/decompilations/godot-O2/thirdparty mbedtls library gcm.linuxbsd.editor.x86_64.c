
void gcm_mult_smalltable(ulong *param_1,byte *param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  bool bVar8;
  
  puVar2 = (ulong *)((ulong)(param_2[0xf] & 0xf) * 0x10 + param_3);
  puVar1 = (ulong *)((ulong)(param_2[0xf] >> 4) * 0x10 + param_3);
  uVar6 = puVar2[1];
  uVar3 = *puVar2;
  uVar4 = (uVar6 >> 4 | uVar3 << 0x3c) ^ puVar1[1];
  uVar6 = (ulong)*(ushort *)(last4 + (ulong)((uint)uVar6 & 0xf) * 2) << 0x30 ^ uVar3 >> 4 ^ *puVar1;
  pbVar7 = param_2 + 0xe;
  do {
    puVar1 = (ulong *)((ulong)(*pbVar7 & 0xf) * 0x10 + param_3);
    uVar5 = (uVar4 >> 4 | uVar6 << 0x3c) ^ puVar1[1];
    uVar6 = (ulong)*(ushort *)(last4 + (ulong)((uint)uVar4 & 0xf) * 2) << 0x30 ^ uVar6 >> 4 ^
            *puVar1;
    puVar1 = (ulong *)((ulong)(*pbVar7 >> 4) * 0x10 + param_3);
    uVar4 = (uVar5 >> 4 | uVar6 << 0x3c) ^ puVar1[1];
    uVar3 = uVar6 >> 4 ^ *puVar1;
    uVar6 = (ulong)*(ushort *)(last4 + (ulong)((uint)uVar5 & 0xf) * 2) << 0x30 ^ uVar3;
    bVar8 = param_2 != pbVar7;
    pbVar7 = pbVar7 + -1;
  } while (bVar8);
  *param_1 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
             (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
             (uVar6 & 0xff00) << 0x28 | uVar3 << 0x38;
  param_1[1] = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
               | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 |
               (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  return;
}



int gcm_mask(long param_1,long param_2,long param_3,ulong param_4,ulong *param_5,ulong *param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iVar1 = mbedtls_cipher_update(param_1,param_1 + 0x180,0x10,param_2,&local_48);
  if (iVar1 != 0) {
    mbedtls_platform_zeroize(param_2,0x10);
    goto LAB_00100226;
  }
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    puVar4 = (ulong *)(param_1 + 400 + param_3);
    if (param_4 < 8) {
      uVar2 = 0;
      if (param_4 == 0) goto LAB_00100226;
    }
    else {
      *puVar4 = *puVar4 ^ *param_5;
      if (param_4 == 0x10) {
        puVar4[1] = puVar4[1] ^ param_5[1];
        uVar2 = 0x10;
      }
      else {
        uVar2 = 8;
      }
      if (param_4 <= uVar2) goto LAB_001001ce;
      uVar2 = 8;
    }
    do {
      *(byte *)((long)puVar4 + uVar2) =
           *(byte *)((long)puVar4 + uVar2) ^ *(byte *)((long)param_5 + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
    uVar2 = 0;
    if (param_4 < 8) goto LAB_00100208;
LAB_001001ce:
    *param_6 = *(ulong *)(param_2 + param_3) ^ *param_5;
    if (param_4 == 0x10) {
      uVar3 = 0x10;
      param_6[1] = param_5[1] ^ ((ulong *)(param_2 + param_3))[1];
    }
    else {
      uVar3 = 8;
    }
    uVar2 = 8;
    if (uVar3 < param_4) goto LAB_00100208;
    if (*(char *)(param_1 + 0x1a0) != '\x01') goto LAB_00100226;
    puVar4 = (ulong *)(param_1 + 400 + param_3);
LAB_00100262:
    *puVar4 = *puVar4 ^ *param_6;
    if (param_4 == 0x10) {
      puVar4[1] = puVar4[1] ^ param_6[1];
      uVar2 = 0x10;
    }
    else {
      uVar2 = 8;
    }
    if (param_4 <= uVar2) goto LAB_00100226;
    uVar2 = 8;
  }
  else {
    if (7 < param_4) goto LAB_001001ce;
    uVar2 = 0;
    if (param_4 == 0) goto LAB_00100226;
LAB_00100208:
    do {
      *(byte *)((long)param_6 + uVar2) =
           *(byte *)(param_2 + param_3 + uVar2) ^ *(byte *)((long)param_5 + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
    if (*(char *)(param_1 + 0x1a0) != '\x01') goto LAB_00100226;
    puVar4 = (ulong *)(param_1 + 400 + param_3);
    if (7 < param_4) goto LAB_00100262;
    uVar2 = 0;
  }
  do {
    *(byte *)((long)puVar4 + uVar2) =
         *(byte *)((long)puVar4 + uVar2) ^ *(byte *)((long)param_6 + uVar2);
    uVar2 = uVar2 + 1;
  } while (param_4 != uVar2);
LAB_00100226:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void mbedtls_gcm_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x34] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x1a8U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



int mbedtls_gcm_setkey(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((param_4 & 0xffffffbf) == 0x80) || (param_4 == 0x100)) &&
      (lVar12 = mbedtls_cipher_info_from_values(param_2,param_4,1), lVar12 != 0)) &&
     ((*(byte *)(lVar12 + 8) & 0x1f) == 0x10)) {
    mbedtls_cipher_free(param_1);
    iVar10 = mbedtls_cipher_setup(param_1,lVar12);
    if ((iVar10 == 0) && (iVar10 = mbedtls_cipher_setkey(param_1,param_3,param_4,1), iVar10 == 0)) {
      local_48 = (undefined1  [16])0x0;
      local_50 = 0;
      iVar10 = mbedtls_cipher_update(param_1,local_48,0x10,local_48,&local_50);
      if (iVar10 == 0) {
        *(undefined1 *)(param_1 + 0x1a1) = 0;
        iVar11 = mbedtls_aesni_has_support(2);
        if (iVar11 == 0) {
          *(undefined8 *)(param_1 + 0xe0) = local_48._0_8_;
          *(undefined8 *)(param_1 + 0xe8) = local_48._8_8_;
          if (*(char *)(param_1 + 0x1a1) != '\x02') {
            iVar16 = 3;
            iVar11 = 4;
            *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
            do {
              iVar9 = iVar11 * 2;
              iVar1 = iVar11 + 6;
              iVar11 = iVar11 >> 1;
              puVar15 = (ulong *)((long)(iVar9 + 6) * 0x10 + param_1);
              puVar13 = (ulong *)((long)iVar1 * 0x10 + param_1);
              uVar2 = puVar15[1];
              uVar3 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28;
              uVar4 = uVar3 | (uVar2 & 0xff0000000000) >> 0x18;
              uVar5 = uVar4 | (uVar2 & 0xff00000000) >> 8;
              uVar6 = uVar5 | (uVar2 & 0xff000000) << 8;
              uVar7 = uVar6 | (uVar2 & 0xff0000) << 0x18;
              uVar8 = uVar7 | (uVar2 & 0xff00) << 0x28;
              puVar13[1] = (uVar2 << 0x38) >> 0x39 |
                           ((uVar8 | uVar2 << 0x38) >> 1 & 0xff000000000000) >> 0x28 |
                           (uVar8 & 0x1fe0000000000) >> 0x19 | (uVar7 & 0x1fe00000000) >> 9 |
                           ((uVar6 & 0x1fe000000) >> 1) << 8 | ((uVar5 & 0x1fe0000) >> 1) << 0x18 |
                           ((uVar4 & 0x1fe00) >> 1) << 0x28 | ((uVar3 & 0x1fe) >> 1) << 0x38;
              *(byte *)(puVar13 + 1) = (byte)uVar2 >> 1 | *(char *)((long)puVar15 + 7) << 7;
              uVar2 = *puVar15;
              uVar3 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28;
              uVar4 = uVar3 | (uVar2 & 0xff0000000000) >> 0x18;
              uVar5 = uVar4 | (uVar2 & 0xff00000000) >> 8;
              uVar6 = uVar5 | (uVar2 & 0xff000000) << 8;
              uVar7 = uVar6 | (uVar2 & 0xff0000) << 0x18;
              uVar8 = uVar7 | (uVar2 & 0xff00) << 0x28;
              *puVar13 = (uVar2 << 0x38) >> 0x39 |
                         ((uVar8 | uVar2 << 0x38) >> 1 & 0xff000000000000) >> 0x28 |
                         (uVar8 & 0x1fe0000000000) >> 0x19 | (uVar7 & 0x1fe00000000) >> 9 |
                         ((uVar6 & 0x1fe000000) >> 1) << 8 | ((uVar5 & 0x1fe0000) >> 1) << 0x18 |
                         ((uVar4 & 0x1fe00) >> 1) << 0x28 | ((uVar3 & 0x1fe) >> 1) << 0x38;
              *(byte *)puVar13 = -(*(byte *)((long)puVar15 + 0xf) & 1) & 0xe1 ^ (byte)uVar2 >> 1;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            iVar16 = 4;
            iVar11 = 8;
            do {
              lVar12 = (long)iVar11;
              iVar11 = iVar11 >> 1;
              lVar12 = lVar12 * 0x10 + param_1;
              uVar2 = *(ulong *)(lVar12 + 0x60);
              *(ulong *)(lVar12 + 0x60) =
                   uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                   (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                   (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                   | uVar2 << 0x38;
              uVar2 = *(ulong *)(lVar12 + 0x68);
              *(ulong *)(lVar12 + 0x68) =
                   uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                   (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                   (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                   | uVar2 << 0x38;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            iVar16 = 3;
            iVar11 = 2;
            do {
              if (1 < iVar11) {
                lVar12 = (long)(iVar11 + 6);
                puVar13 = (ulong *)(param_1 + lVar12 * 0x10);
                puVar15 = (ulong *)(param_1 + 0x70);
                do {
                  puVar14 = puVar15 + 2;
                  puVar15[lVar12 * 2 + -0xc] = *puVar15 ^ *puVar13;
                  puVar15[lVar12 * 2 + -0xb] = puVar13[1] ^ puVar15[1];
                  puVar15 = puVar14;
                } while ((ulong *)((ulong)(iVar11 - 2) * 0x10 + param_1 + 0x80) != puVar14);
              }
              iVar11 = iVar11 * 2;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x1a1) = 2;
          *(undefined8 *)(param_1 + 0xe0) = local_48._0_8_;
          *(undefined8 *)(param_1 + 0xe8) = local_48._8_8_;
        }
      }
    }
  }
  else {
    iVar10 = -0x14;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



undefined8 mbedtls_gcm_starts(long param_1,undefined1 param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if ((param_4 == 0) || (param_4 >> 0x3d != 0)) {
    uVar4 = 0xffffffec;
  }
  else {
    *(undefined1 *)(param_1 + 0x1a0) = param_2;
    *(undefined1 (*) [16])(param_1 + 0x180) = (undefined1  [16])0x0;
    lVar1 = param_1 + 0x180;
    *(undefined1 (*) [16])(param_1 + 400) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
    if (param_4 == 0xc) {
      *(ulong *)(param_1 + 0x180) = *param_3;
      *(int *)(param_1 + 0x188) = (int)param_3[1];
      *(undefined1 *)(param_1 + 399) = 1;
    }
    else {
      uVar6 = param_4 * 8;
      local_58 = 0;
      uVar6 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
              | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18
              | (uVar6 & 0xff00) << 0x28 | param_4 << 0x3b;
      local_50 = uVar6;
      do {
        uVar5 = 0x10;
        if (param_4 < 0x11) {
          uVar5 = param_4;
        }
        if (param_4 < 8) {
          uVar3 = 0;
LAB_001006d0:
          do {
            pbVar2 = (byte *)(param_1 + 0x180 + uVar3);
            *pbVar2 = *pbVar2 ^ *(byte *)((long)param_3 + uVar3);
            uVar3 = uVar3 + 1;
          } while (uVar5 != uVar3);
        }
        else {
          *(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0x180) ^ *param_3;
          if (param_4 < 0x10) {
            uVar3 = 8;
          }
          else {
            *(ulong *)(param_1 + 0x188) = *(ulong *)(param_1 + 0x188) ^ param_3[1];
            uVar3 = 0x10;
          }
          if (uVar3 < uVar5) {
            uVar3 = 8;
            goto LAB_001006d0;
          }
        }
        if (*(char *)(param_1 + 0x1a1) == '\0') {
          gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
        }
        else if (*(char *)(param_1 + 0x1a1) == '\x02') {
          mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
        }
        param_3 = (ulong *)((long)param_3 + uVar5);
        param_4 = param_4 - uVar5;
      } while (param_4 != 0);
      *(ulong *)(param_1 + 0x188) = *(ulong *)(param_1 + 0x188) ^ uVar6;
      if (*(char *)(param_1 + 0x1a1) == '\0') {
        gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
      }
      else if (*(char *)(param_1 + 0x1a1) == '\x02') {
        mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
      }
    }
    uVar4 = mbedtls_cipher_update(param_1,lVar1,0x10,param_1 + 0x170,&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_gcm_update_ad(long param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x168);
  uVar6 = uVar7 + param_3;
  if ((CARRY8(uVar7,param_3)) || (uVar6 >> 0x3d != 0)) {
    return 0xffffffec;
  }
  uVar4 = (ulong)((uint)uVar7 & 0xf);
  if ((uVar7 & 0xf) == 0) {
    *(ulong *)(param_1 + 0x168) = uVar6;
    if (param_3 < 0x10) goto LAB_001008bd;
  }
  else {
    lVar1 = param_1 + 400;
    uVar7 = 0x10 - uVar4;
    if (param_3 < 0x10 - uVar4) {
      uVar7 = param_3;
    }
    puVar2 = (ulong *)(lVar1 + uVar4);
    if (uVar7 < 8) {
      uVar5 = 0;
      if (uVar7 != 0) goto LAB_00100956;
    }
    else {
      *puVar2 = *puVar2 ^ *param_2;
      uVar5 = 8;
      if (uVar7 != 8) {
LAB_00100956:
        do {
          *(byte *)((long)puVar2 + uVar5) =
               *(byte *)((long)puVar2 + uVar5) ^ *(byte *)((long)param_2 + uVar5);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      if (uVar7 + uVar4 == 0x10) {
        if (*(char *)(param_1 + 0x1a1) == '\0') {
          gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
        }
        else if (*(char *)(param_1 + 0x1a1) == '\x02') {
          mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
          uVar6 = *(long *)(param_1 + 0x168) + param_3;
          goto LAB_0010097c;
        }
      }
      uVar6 = *(long *)(param_1 + 0x168) + param_3;
    }
LAB_0010097c:
    param_3 = param_3 - uVar7;
    *(ulong *)(param_1 + 0x168) = uVar6;
    param_2 = (ulong *)((long)param_2 + uVar7);
    if (param_3 < 0x10) goto LAB_001008bd;
  }
  lVar1 = param_1 + 400;
  puVar2 = (ulong *)((long)param_2 + (param_3 - 0x10 & 0xfffffffffffffff0) + 0x10);
  do {
    *(ulong *)(param_1 + 400) = *(ulong *)(param_1 + 400) ^ *param_2;
    *(ulong *)(param_1 + 0x198) = *(ulong *)(param_1 + 0x198) ^ param_2[1];
    if (*(char *)(param_1 + 0x1a1) == '\0') {
      gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
    }
    else if (*(char *)(param_1 + 0x1a1) == '\x02') {
      mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
    }
    param_2 = param_2 + 2;
  } while (param_2 != puVar2);
  param_3 = (ulong)((uint)param_3 & 0xf);
  param_2 = puVar2;
LAB_001008bd:
  if (param_3 != 0) {
    uVar7 = 0;
    if (7 < param_3) {
      *(ulong *)(param_1 + 400) = *(ulong *)(param_1 + 400) ^ *param_2;
      if (param_3 == 8) {
        return 0;
      }
      uVar7 = 8;
    }
    do {
      pbVar3 = (byte *)(param_1 + 400 + uVar7);
      *pbVar3 = *pbVar3 ^ *(byte *)((long)param_2 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  return 0;
}



undefined8
mbedtls_gcm_update(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong *param_6)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  if (param_5 < param_3) {
    uVar3 = 0xffffffea;
    goto LAB_00100b48;
  }
  *param_6 = param_3;
  if (param_3 == 0) {
LAB_00100c5d:
    uVar3 = 0;
  }
  else {
    if ((param_4 <= param_2) || (param_3 <= param_4 - param_2)) {
      uVar4 = *(ulong *)(param_1 + 0x160);
      if ((uVar4 + param_3 < 0xfffffffe1) && (!CARRY8(uVar4,param_3))) {
        if (uVar4 == 0) {
          uVar5 = param_3;
          if ((*(byte *)(param_1 + 0x168) & 0xf) != 0) {
            lVar1 = param_1 + 400;
            if (*(char *)(param_1 + 0x1a1) == '\0') {
              gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
            }
            else {
              uVar5 = uVar4 + param_3;
              if (*(char *)(param_1 + 0x1a1) == '\x02') {
                mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
                uVar4 = *(ulong *)(param_1 + 0x160);
                goto LAB_00100ba8;
              }
            }
          }
        }
        else {
LAB_00100ba8:
          uVar6 = (ulong)((uint)uVar4 & 0xf);
          uVar5 = uVar4 + param_3;
          if ((uVar4 & 0xf) != 0) {
            uVar4 = 0x10 - uVar6;
            if (param_3 < 0x10 - uVar6) {
              uVar4 = param_3;
            }
            uVar3 = gcm_mask(param_1,local_58,uVar6,uVar4,param_2,param_4);
            if ((int)uVar3 != 0) goto LAB_00100b48;
            if (uVar6 + uVar4 == 0x10) {
              lVar1 = param_1 + 400;
              if (*(char *)(param_1 + 0x1a1) == '\0') {
                gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
              }
              else if (*(char *)(param_1 + 0x1a1) == '\x02') {
                mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
              }
            }
            param_2 = param_2 + uVar4;
            param_4 = param_4 + uVar4;
            uVar5 = *(long *)(param_1 + 0x160) + param_3;
            param_3 = param_3 - uVar4;
          }
        }
        *(ulong *)(param_1 + 0x160) = uVar5;
        if (0xf < param_3) {
          lVar1 = param_1 + 400;
          do {
            uVar2 = *(uint *)(param_1 + 0x18c);
            uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    ) + 1;
            *(uint *)(param_1 + 0x18c) =
                 uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000
            ;
            uVar3 = gcm_mask(param_1,local_58,0,0x10,param_2,param_4);
            if ((int)uVar3 != 0) goto LAB_00100b48;
            if (*(char *)(param_1 + 0x1a1) == '\0') {
              gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
            }
            else if (*(char *)(param_1 + 0x1a1) == '\x02') {
              mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
            }
            param_3 = param_3 - 0x10;
            param_2 = param_2 + 0x10;
            param_4 = param_4 + 0x10;
          } while (0xf < param_3);
        }
        if (param_3 != 0) {
          uVar2 = *(uint *)(param_1 + 0x18c);
          uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  + 1;
          *(uint *)(param_1 + 0x18c) =
               uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
          uVar3 = gcm_mask(param_1,local_58,0,param_3,param_2,param_4);
          if ((int)uVar3 != 0) goto LAB_00100b48;
        }
        mbedtls_platform_zeroize(local_58,0x10);
        goto LAB_00100c5d;
      }
    }
    uVar3 = 0xffffffec;
  }
LAB_00100b48:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
mbedtls_gcm_finish(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  void *param_5,ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  *param_4 = 0;
  lVar2 = *(long *)(param_1 + 0x160) * 8;
  lVar3 = *(ulong *)(param_1 + 0x168) * 8;
  if (*(long *)(param_1 + 0x160) == 0) {
    if ((*(ulong *)(param_1 + 0x168) & 0xf) != 0) {
      lVar1 = param_1 + 400;
      if (*(char *)(param_1 + 0x1a1) == '\0') {
        gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
      }
      else if (*(char *)(param_1 + 0x1a1) == '\x02') {
        mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
        goto LAB_00100e60;
      }
    }
    if (0xc < param_6 - 4) {
      return 0xffffffec;
    }
  }
  else {
LAB_00100e60:
    if (0xc < param_6 - 4) {
      return 0xffffffec;
    }
    if ((*(byte *)(param_1 + 0x160) & 0xf) != 0) {
      lVar1 = param_1 + 400;
      if (*(char *)(param_1 + 0x1a1) == '\0') {
        gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
      }
      else if (*(char *)(param_1 + 0x1a1) == '\x02') {
        mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
      }
    }
  }
  memcpy(param_5,(void *)(param_1 + 0x170),param_6);
  if (lVar2 != 0 || lVar3 != 0) {
    uVar9 = (uint)lVar3;
    lVar1 = param_1 + 400;
    uVar5 = (uint)((ulong)lVar3 >> 0x20);
    uVar8 = (uint)lVar2;
    uVar6 = (uint)((ulong)lVar2 >> 0x20);
    *(ulong *)(param_1 + 400) =
         CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18,
                  uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ^
         *(ulong *)(param_1 + 400);
    *(ulong *)(param_1 + 0x198) =
         CONCAT44(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18,
                  uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ^
         *(ulong *)(param_1 + 0x198);
    if (*(char *)(param_1 + 0x1a1) == '\0') {
      gcm_mult_smalltable(lVar1,lVar1,param_1 + 0x60);
    }
    else if (*(char *)(param_1 + 0x1a1) == '\x02') {
      mbedtls_aesni_gcm_mult(lVar1,lVar1,param_1 + 0xe0);
    }
    uVar7 = 8;
    if (param_6 < 8) {
      uVar7 = 0;
    }
    else {
      do {
        puVar4 = (ulong *)((long)param_5 + (uVar7 - 8));
        *puVar4 = *puVar4 ^ *(ulong *)(param_1 + 0x188 + uVar7);
        uVar7 = uVar7 + 8;
      } while (uVar7 <= param_6);
      uVar7 = (param_6 - 8 & 0xfffffffffffffff8) + 8;
    }
    if (uVar7 < param_6) {
      do {
        *(byte *)((long)param_5 + uVar7) =
             *(byte *)((long)param_5 + uVar7) ^ *(byte *)(param_1 + 400 + uVar7);
        uVar7 = uVar7 + 1;
      } while (param_6 != uVar7);
    }
  }
  return 0;
}



void mbedtls_gcm_crypt_and_tag
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_gcm_starts(param_1,param_2,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = mbedtls_gcm_update_ad(param_1,param_6,param_7);
    if (iVar1 == 0) {
      iVar1 = mbedtls_gcm_update(param_1,param_8,param_3,param_9,param_3,auStack_48);
      if (iVar1 == 0) {
        mbedtls_gcm_finish(param_1,0,0,auStack_48,param_11,param_10);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_gcm_auth_decrypt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = mbedtls_gcm_starts(param_1,0);
  if ((int)uVar1 == 0) {
    uVar1 = mbedtls_gcm_update_ad(param_1,param_5,param_6);
    if ((int)uVar1 == 0) {
      uVar1 = mbedtls_gcm_update(param_1,param_9,param_2,param_10,param_2,local_60);
      if ((int)uVar1 == 0) {
        uVar1 = mbedtls_gcm_finish(param_1,0,0,local_60,local_58,param_8);
        if ((int)uVar1 == 0) {
          uVar1 = mbedtls_ct_memcmp(param_7,local_58,param_8);
          if ((int)uVar1 != 0) {
            mbedtls_platform_zeroize(param_10,param_2);
            uVar1 = 0xffffffee;
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_gcm_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_cipher_free();
    mbedtls_platform_zeroize(param_1,0x1a8);
    return;
  }
  return;
}



int mbedtls_gcm_self_test(int param_1)

{
  undefined1 *__s2;
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong __n;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  long in_FS_OFFSET;
  byte bVar17;
  int local_2cc;
  undefined1 *local_2c8;
  ulong *local_2b8;
  ulong local_250;
  undefined8 local_248 [54];
  long local_98;
  long local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar9 = mbedtls_aesni_has_support(2);
    if (iVar9 == 0) {
      puts("  GCM note: built-in implementation.");
    }
    else {
      puts("  GCM note: using AESNI.");
    }
  }
  local_2cc = 0x80;
  puVar11 = ct_test_data;
  iVar9 = 0;
  plVar16 = &tag_test_data;
LAB_0010116f:
  uVar15 = 0;
  plVar12 = plVar16;
  local_2c8 = puVar11;
LAB_00101190:
  uVar14 = (undefined4)uVar15;
  if (param_1 != 0) {
    __printf_chk(2,"  AES-GCM-%3d #%d (%s): ",local_2cc,uVar15 & 0xffffffff,&_LC2);
  }
  puVar13 = local_248;
  for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
  }
  puVar8 = key_test_data + (long)(int)(&pt_index_test_data)[uVar15] * 0x20;
  iVar6 = mbedtls_gcm_setkey(local_248,2,puVar8,local_2cc);
  if ((iVar6 == -0x72) && (iVar9 == 1)) {
    plVar16 = plVar16 + 0xc;
    puts("skipped");
    local_2cc = local_2cc + 0x40;
    puVar11 = puVar11 + 0x180;
    iVar9 = 2;
    goto LAB_0010116f;
  }
  if (iVar6 == 0) {
    iVar3 = (&pt_index_test_data)[uVar15];
    __s2 = pt_test_data + (long)iVar3 * 0x40;
    uVar4 = (&add_len_test_data)[uVar15];
    puVar1 = additional_test_data + (long)(int)(&add_index_test_data)[uVar15] * 0x40;
    uVar5 = (&iv_len_test_data)[uVar15];
    puVar2 = iv_test_data + (long)(int)(&iv_index_test_data)[uVar15] * 0x40;
    __n = (&pt_len_test_data)[uVar15];
    iVar6 = mbedtls_gcm_crypt_and_tag(local_248,1,__n);
    if (iVar6 != 0) goto joined_r0x0010194c;
    iVar6 = memcmp(local_88,local_2c8,__n);
    if ((iVar6 != 0) || (local_98 != *plVar12 || local_90 != plVar12[1])) {
LAB_001012fa:
      iVar6 = 1;
      goto joined_r0x0010194c;
    }
    mbedtls_cipher_free(local_248);
    mbedtls_platform_zeroize(local_248,0x1a8);
    if (param_1 == 0) {
      puVar13 = local_248;
      for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
      }
    }
    else {
      puts("passed");
      puVar13 = local_248;
      for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
      }
      __printf_chk(2,"  AES-GCM-%3d #%d (%s): ",local_2cc,uVar14,&_LC6);
    }
    iVar6 = mbedtls_gcm_setkey(local_248,2,puVar8,local_2cc);
    if ((iVar6 != 0) ||
       (iVar6 = mbedtls_gcm_crypt_and_tag
                          (local_248,0,__n,puVar2,uVar5,puVar1,uVar4,local_2c8,local_88,0x10,
                           &local_98), iVar6 != 0)) goto joined_r0x0010194c;
    iVar6 = memcmp(local_88,__s2,__n);
    if ((iVar6 != 0) || (local_98 != *plVar12 || local_90 != plVar12[1])) goto LAB_001012fa;
    mbedtls_cipher_free(local_248);
    mbedtls_platform_zeroize(local_248,0x1a8);
    if (param_1 == 0) {
      puVar13 = local_248;
      for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
      }
    }
    else {
      puts("passed");
      puVar13 = local_248;
      for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
      }
      __printf_chk(2,"  AES-GCM-%3d #%d split (%s): ",local_2cc,uVar14,&_LC2);
    }
    iVar6 = mbedtls_gcm_setkey(local_248,2,puVar8,local_2cc);
    if (((iVar6 != 0) || (iVar6 = mbedtls_gcm_starts(local_248,1,puVar2,uVar5), iVar6 != 0)) ||
       (iVar7 = mbedtls_gcm_update_ad(local_248,puVar1,uVar4), iVar6 = iVar7, iVar7 != 0))
    goto joined_r0x0010194c;
    if (__n < 0x21) {
      iVar6 = mbedtls_gcm_update(local_248,__s2,__n,local_88,0x40,&local_250);
      if (iVar6 != 0) goto joined_r0x0010194c;
      if (__n != local_250) goto LAB_00101324;
LAB_00101570:
      local_2b8 = &local_250;
      iVar6 = mbedtls_gcm_finish(local_248,0,0,local_2b8,&local_98,0x10);
      if (iVar6 != 0) goto joined_r0x0010194c;
      iVar6 = memcmp(local_88,local_2c8,__n);
      if ((iVar6 != 0) || (local_98 != *plVar12 || local_90 != plVar12[1])) goto LAB_001012fa;
      mbedtls_cipher_free(local_248);
      mbedtls_platform_zeroize(local_248,0x1a8);
      if (param_1 == 0) {
        puVar13 = local_248;
        for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
        }
      }
      else {
        puts("passed");
        puVar13 = local_248;
        for (lVar10 = 0x35; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
        }
        __printf_chk(2,"  AES-GCM-%3d #%d split (%s): ",local_2cc,uVar14,&_LC6);
      }
      iVar6 = mbedtls_gcm_setkey(local_248,2,puVar8,local_2cc);
      if (((iVar6 != 0) || (iVar6 = mbedtls_gcm_starts(local_248,0,puVar2,uVar5), iVar6 != 0)) ||
         (iVar6 = mbedtls_gcm_update_ad(local_248,puVar1,uVar4), iVar6 != 0))
      goto joined_r0x0010194c;
      if (__n < 0x21) {
        iVar6 = mbedtls_gcm_update(local_248,local_2c8,__n,local_88,0x40,local_2b8);
        if (iVar6 != 0) goto joined_r0x0010194c;
        if (__n != local_250) goto LAB_00101324;
LAB_001016dd:
        iVar6 = mbedtls_gcm_finish(local_248,0,0,local_2b8,&local_98,0x10);
        if (iVar6 != 0) goto joined_r0x0010194c;
        iVar6 = memcmp(local_88,__s2,__n);
        if ((iVar6 != 0) || (local_98 != *plVar12 || local_90 != plVar12[1])) goto LAB_001012fa;
        mbedtls_cipher_free(local_248);
        mbedtls_platform_zeroize(local_248,0x1a8);
        if (param_1 != 0) {
          puts("passed");
        }
        uVar15 = uVar15 + 1;
        local_2c8 = local_2c8 + 0x40;
        plVar12 = plVar12 + 2;
        if (uVar15 == 6) goto code_r0x0010177b;
        goto LAB_00101190;
      }
      iVar6 = mbedtls_gcm_update(local_248,local_2c8,0x20,local_88,0x40,local_2b8);
      if (iVar6 != 0) goto joined_r0x0010194c;
      if (local_250 != 0x20) goto LAB_00101324;
      iVar6 = mbedtls_gcm_update(local_248,local_2c8 + 0x20,__n - 0x20,local_68,0x20,local_2b8);
      if (iVar6 == 0) {
        if (local_250 == __n - 0x20) goto LAB_001016dd;
        goto LAB_00101324;
      }
    }
    else {
      iVar6 = mbedtls_gcm_update(local_248,__s2,0x20,local_88,0x40,&local_250);
      if (iVar6 == 0) {
        if (local_250 == 0x20) {
          iVar6 = mbedtls_gcm_update(local_248,(long)iVar3 * 0x40 + 0x102040,__n - 0x20,local_68,
                                     0x20,&local_250);
          if (iVar6 != 0) goto joined_r0x0010194c;
          if (local_250 == __n - 0x20) goto LAB_00101570;
        }
        goto LAB_00101324;
      }
    }
  }
joined_r0x0010194c:
  iVar7 = iVar6;
  if (param_1 != 0) {
    puts("failed");
  }
  mbedtls_cipher_free(local_248);
  mbedtls_platform_zeroize(local_248,0x1a8);
  goto LAB_00101324;
code_r0x0010177b:
  iVar9 = iVar9 + 1;
  if (iVar9 == 3) {
    if (param_1 != 0) {
      putchar(10);
    }
LAB_00101324:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_2cc = local_2cc + 0x40;
  plVar16 = plVar16 + 0xc;
  puVar11 = puVar11 + 0x180;
  goto LAB_0010116f;
}


