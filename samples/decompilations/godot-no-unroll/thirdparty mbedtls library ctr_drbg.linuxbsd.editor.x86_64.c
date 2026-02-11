
undefined8 ctr_drbg_self_test_entropy(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  
  lVar1 = test_offset + param_3;
  memcpy(param_2,(void *)(param_1 + test_offset),param_3);
  test_offset = lVar1;
  return 0;
}



int ctr_drbg_update_internal(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  puVar6 = local_78;
  do {
    uVar2 = *(uint *)((long)param_1 + 0xc);
    iVar4 = 3;
    uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) + 1;
    *(uint *)((long)param_1 + 0xc) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
    if (uVar2 == 0) {
      do {
        iVar4 = iVar4 + -1;
        puVar5 = (uint *)((long)(iVar4 * 4) + (long)param_1);
        uVar2 = *puVar5;
        uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
                1;
        *puVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                  uVar2 * 0x1000000;
        if (uVar2 != 0) break;
      } while (iVar4 != 0);
    }
    iVar4 = mbedtls_aes_crypt_ecb(param_1 + 5,1,param_1,puVar6);
    if (iVar4 != 0) goto LAB_00100112;
    puVar6 = puVar6 + 0x10;
  } while (puVar6 != local_48);
  lVar3 = 0;
  do {
    uVar1 = ((ulong *)(param_2 + lVar3))[1];
    *(ulong *)(local_78 + lVar3) = *(ulong *)(param_2 + lVar3) ^ *(ulong *)(local_78 + lVar3);
    *(ulong *)(local_78 + lVar3 + 8) = uVar1 ^ *(ulong *)(local_78 + lVar3 + 8);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x30);
  iVar4 = mbedtls_aes_setkey_enc(param_1 + 5,local_78,0x100);
  if (iVar4 == 0) {
    *param_1 = local_58._0_8_;
    param_1[1] = local_58._8_8_;
  }
LAB_00100112:
  mbedtls_platform_zeroize(local_78,0x30);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int block_cipher_df(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  ulong *local_388;
  undefined1 local_368 [288];
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  ulong local_218 [6];
  char cStack_1e5;
  ulong uStack_1e0;
  uint local_1d8;
  undefined1 local_1d1;
  undefined1 local_1d0 [400];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0x181) {
    puVar6 = (ulong *)&stack0xfffffffffffffe18;
    for (lVar5 = 0x34; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_1d1 = 0x30;
    uVar2 = (uint)param_3;
    local_1d8 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    memcpy(local_1d0,param_2,param_3);
    local_1d0[param_3] = 0x80;
    local_238 = __LC0;
    uStack_230 = _UNK_001012f8;
    local_228 = __LC1;
    uStack_220 = _UNK_00101308;
    mbedtls_aes_init(local_368);
    iVar3 = mbedtls_aes_setkey_enc(local_368,&local_238,0x100);
    if (iVar3 == 0) {
      puVar6 = local_218;
      do {
        local_248 = (undefined1  [16])0x0;
        uVar7 = param_3 + 0x19;
        puVar8 = (ulong *)&stack0xfffffffffffffe18;
        do {
          uVar4 = *puVar8;
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          local_248._8_8_ = local_248._8_8_ ^ *puVar1;
          local_248._0_8_ = local_248._0_8_ ^ uVar4;
          iVar3 = mbedtls_aes_crypt_ecb(local_368,1,local_248,local_248);
          if (iVar3 != 0) goto LAB_00100388;
          uVar4 = 0x10;
          if (uVar7 < 0x11) {
            uVar4 = uVar7;
          }
          uVar7 = uVar7 - uVar4;
        } while (uVar7 != 0);
        puVar8 = puVar6 + 2;
        cStack_1e5 = cStack_1e5 + '\x01';
        *puVar6 = local_248._0_8_;
        puVar6[1] = local_248._8_8_;
        puVar6 = puVar8;
      } while (puVar8 != (ulong *)&stack0xfffffffffffffe18);
      iVar3 = mbedtls_aes_setkey_enc(local_368,local_218,0x100);
      if (iVar3 == 0) {
        puVar9 = param_1;
        do {
          iVar3 = mbedtls_aes_crypt_ecb(local_368,1,local_218 + 4,local_218 + 4);
          if (iVar3 != 0) goto LAB_00100388;
          puVar10 = puVar9 + 2;
          *puVar9 = local_218[4];
          puVar9[1] = local_218[5];
          puVar9 = puVar10;
        } while (puVar10 != param_1 + 6);
        mbedtls_aes_free(local_368);
        mbedtls_platform_zeroize(&stack0xfffffffffffffe18,0x1a0);
        mbedtls_platform_zeroize(local_218,0x30);
        mbedtls_platform_zeroize(&local_238,0x20);
        mbedtls_platform_zeroize(local_248,0x10);
        iVar3 = 0;
        goto LAB_001003e4;
      }
    }
LAB_00100388:
    local_388 = local_218;
    mbedtls_aes_free(local_368);
    mbedtls_platform_zeroize(&stack0xfffffffffffffe18,0x1a0);
    mbedtls_platform_zeroize(local_388,0x30);
    mbedtls_platform_zeroize(&local_238,0x20);
    mbedtls_platform_zeroize(local_248,0x10);
    mbedtls_platform_zeroize(param_1,0x30);
  }
  else {
    iVar3 = -0x38;
  }
LAB_001003e4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int mbedtls_ctr_drbg_reseed_internal(long param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 auStack_1c8 [49];
  long local_40;
  ulong uVar4;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((0x180 < uVar6) || (0x180 - uVar6 < param_4)) || ((0x180 - param_4) - uVar6 < param_3)) {
    iVar1 = -0x38;
    goto LAB_00100501;
  }
  puVar5 = auStack_1c8;
  for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar1 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x150),auStack_1c8);
  if (iVar1 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    if (param_4 != 0) {
      iVar1 = (**(code **)(param_1 + 0x148))
                        (*(undefined8 *)(param_1 + 0x150),(long)auStack_1c8 + uVar6,param_4);
      if (iVar1 != 0) goto LAB_00100590;
      uVar6 = uVar6 + param_4;
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      lVar2 = (long)auStack_1c8 + uVar6;
      uVar4 = 0x180;
      if (0x17f < uVar6) {
        uVar4 = uVar6;
      }
      lVar3 = uVar4 - uVar6;
      uVar6 = uVar6 + param_3;
      __memcpy_chk(lVar2,param_2,param_3,lVar3);
    }
    iVar1 = block_cipher_df(auStack_1c8,auStack_1c8,uVar6);
    if (iVar1 == 0) {
      iVar1 = ctr_drbg_update_internal(param_1,auStack_1c8);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    mbedtls_platform_zeroize(auStack_1c8,0x180);
  }
  else {
LAB_00100590:
    iVar1 = -0x34;
  }
LAB_00100501:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ctr_drbg_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x2a] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x158U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  mbedtls_aes_init(param_1 + 5);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 10000;
  return;
}



void mbedtls_ctr_drbg_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_aes_free(param_1 + 0x28);
    mbedtls_platform_zeroize(param_1,0x158);
    *(undefined4 *)(param_1 + 0x20) = 10000;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return;
  }
  return;
}



void mbedtls_ctr_drbg_set_prediction_resistance(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



void mbedtls_ctr_drbg_set_entropy_len(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



undefined8 mbedtls_ctr_drbg_set_nonce_len(long param_1,ulong param_2)

{
  if (*(long *)(param_1 + 0x148) != 0) {
    return 0xffffffcc;
  }
  if (param_2 < 0x181) {
    *(int *)(param_1 + 0x10) = (int)param_2;
    return 0;
  }
  return 0xffffffc8;
}



void mbedtls_ctr_drbg_set_reseed_interval(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



int mbedtls_ctr_drbg_update(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  iVar1 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    iVar1 = block_cipher_df(auStack_58);
    if (iVar1 == 0) {
      iVar1 = ctr_drbg_update_internal(param_1,auStack_58);
    }
    mbedtls_platform_zeroize(auStack_58,0x30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ctr_drbg_reseed(void)

{
  mbedtls_ctr_drbg_reseed_internal();
  return;
}



void mbedtls_ctr_drbg_seed
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x150) = param_3;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (uVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0x30;
    if (iVar1 < 0) {
LAB_001007d0:
      uVar2 = 0;
      goto LAB_0010078d;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      if (uVar2 < 0x30) {
        uVar2 = uVar2 + 1 >> 1;
        goto LAB_0010078d;
      }
      goto LAB_001007d0;
    }
  }
  uVar2 = (ulong)iVar1;
LAB_0010078d:
  iVar1 = mbedtls_aes_setkey_enc(param_1 + 0x28,local_58,0x100);
  if (iVar1 == 0) {
    mbedtls_ctr_drbg_reseed_internal(param_1,param_4,param_5,uVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_ctr_drbg_random_with_add
                (long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x400 < param_3) {
    uVar2 = 0xffffffca;
    goto LAB_0010095c;
  }
  if (0x100 < param_5) {
    uVar2 = 0xffffffc8;
    goto LAB_0010095c;
  }
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x14) != 0)) {
    uVar2 = mbedtls_ctr_drbg_reseed_internal(param_1,param_4,param_5,0);
    if ((int)uVar2 != 0) goto LAB_0010095c;
LAB_00100888:
    if (param_3 != 0) {
      do {
        uVar1 = *(uint *)(param_1 + 0xc);
        iVar3 = 3;
        uVar1 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) +
                1;
        *(uint *)(param_1 + 0xc) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 * 0x1000000;
        if (uVar1 == 0) {
          do {
            iVar3 = iVar3 + -1;
            puVar5 = (uint *)(iVar3 * 4 + param_1);
            uVar1 = *puVar5;
            uVar1 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    ) + 1;
            *puVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 * 0x1000000;
            if (uVar1 != 0) break;
          } while (iVar3 != 0);
        }
        uVar1 = mbedtls_aes_crypt_ecb(param_1 + 0x28,1,param_1,&local_58);
        if (uVar1 != 0) goto LAB_00100947;
        uVar2 = 0x10;
        if (param_3 < 0x11) {
          uVar2 = param_3;
        }
        uVar1 = (uint)uVar2;
        if (uVar1 < 8) {
          if ((uVar2 & 4) == 0) {
            if (uVar1 != 0) {
              *(undefined1 *)param_2 = (undefined1)local_58;
              if ((uVar2 & 2) != 0) {
                *(undefined2 *)((long)param_2 + ((uVar2 & 0xffffffff) - 2)) =
                     *(undefined2 *)(local_68 + (uVar2 & 0xffffffff) + 0xe);
              }
            }
          }
          else {
            *(undefined4 *)param_2 = (undefined4)local_58;
            *(undefined4 *)((long)param_2 + ((uVar2 & 0xffffffff) - 4)) =
                 *(undefined4 *)(local_68 + (uVar2 & 0xffffffff) + 0xc);
          }
        }
        else {
          *param_2 = CONCAT44(local_58._4_4_,(undefined4)local_58);
          *(undefined8 *)((long)param_2 + ((uVar2 & 0xffffffff) - 8)) =
               *(undefined8 *)(local_68 + (uVar2 & 0xffffffff) + 8);
          lVar6 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
          uVar1 = (int)lVar6 + uVar1 & 0xfffffff8;
          if (7 < uVar1) {
            uVar4 = 0;
            do {
              uVar7 = (ulong)uVar4;
              uVar4 = uVar4 + 8;
              *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar7) =
                   *(undefined8 *)((long)&local_58 + (uVar7 - lVar6));
            } while (uVar4 < uVar1);
          }
        }
        param_2 = (undefined8 *)((long)param_2 + uVar2);
        param_3 = param_3 - uVar2;
      } while (param_3 != 0);
    }
    uVar1 = ctr_drbg_update_internal(param_1,local_88);
    if (uVar1 == 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  else if ((param_5 == 0) ||
          ((uVar1 = block_cipher_df(local_88,param_4,param_5), uVar1 == 0 &&
           (uVar1 = ctr_drbg_update_internal(param_1,local_88), uVar1 == 0)))) goto LAB_00100888;
LAB_00100947:
  mbedtls_platform_zeroize(local_88,0x40);
  uVar2 = (ulong)uVar1;
LAB_0010095c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void mbedtls_ctr_drbg_random(void)

{
  mbedtls_ctr_drbg_random_with_add();
  return;
}



int mbedtls_ctr_drbg_write_seed_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined1 auStack_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(param_2,"wb");
  if (__stream == (FILE *)0x0) {
    iVar1 = -0x3a;
  }
  else {
    setbuf(__stream,(char *)0x0);
    iVar1 = mbedtls_ctr_drbg_random_with_add(param_1,auStack_128,0x100,0,0);
    if (iVar1 == 0) {
      sVar2 = fwrite(auStack_128,1,0x100,__stream);
      if (sVar2 != 0x100) {
        iVar1 = -0x3a;
      }
    }
    mbedtls_platform_zeroize(auStack_128,0x100);
    fclose(__stream);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ctr_drbg_update_seed_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined1 local_169;
  undefined1 local_168 [48];
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    iVar1 = -0x3a;
  }
  else {
    setbuf(__stream,(char *)0x0);
    sVar2 = fread(local_138,1,0x100,__stream);
    sVar3 = fread(&local_169,1,1,__stream);
    if (sVar3 == 0) {
      if (sVar2 != 0) {
        iVar1 = ferror(__stream);
        if (iVar1 == 0) {
          fclose(__stream);
          iVar1 = block_cipher_df(local_168,local_138,sVar2);
          if (iVar1 == 0) {
            iVar1 = ctr_drbg_update_internal(param_1,local_168);
            mbedtls_platform_zeroize(local_168,0x30);
            mbedtls_platform_zeroize(local_138,0x100);
            if (iVar1 == 0) {
              iVar1 = mbedtls_ctr_drbg_write_seed_file(param_1,param_2);
            }
          }
          else {
            mbedtls_platform_zeroize(local_168,0x30);
            mbedtls_platform_zeroize(local_138,0x100);
          }
          goto LAB_00100bde;
        }
      }
      iVar1 = -0x3a;
      mbedtls_platform_zeroize(local_138,0x100);
    }
    else {
      iVar1 = -0x38;
      mbedtls_platform_zeroize(local_138,0x100);
    }
    fclose(__stream);
  }
LAB_00100bde:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ctr_drbg_self_test(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 auStack_1d8 [2];
  uint local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [288];
  long local_90;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_30;
  
  bVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = auStack_1d8;
  for (lVar2 = 0x2b; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  mbedtls_aes_init(local_1b0);
  local_1c8 = 0xffffffff;
  local_1b8 = 10000;
  if (param_1 != 0) {
    __printf_chk(2,"  CTR_DRBG (PR = TRUE) : ");
  }
  test_offset = 0;
  local_1c0 = 0x20;
  if (local_90 == 0) {
    local_1c8 = 0x10;
  }
  iVar1 = mbedtls_ctr_drbg_seed(auStack_1d8,0x100000,entropy_source_pr,pers_pr,0x20);
  if (iVar1 == 0) {
    local_1c4 = 1;
    iVar1 = mbedtls_ctr_drbg_random_with_add(auStack_1d8,&local_78,0x40,0,0);
    if (iVar1 == 0) {
      iVar1 = mbedtls_ctr_drbg_random_with_add(auStack_1d8,&local_78,0x40,0,0);
      if ((((iVar1 == 0) && (local_78 == -0x7ac648264924d032 && local_70 == 0x1dc631c242c0c504)) &&
          (local_68 == 0x62cc0d7ef8595a9b && local_60 == 0x3d9eeb105511657b)) &&
         ((local_58 == -0x248b3fe795e3045c && local_50 == 0x39d021632302e7dd &&
          (local_48 == 0x40493b8452c4a7f9 && local_40 == 0x43c3db9c6cb02b72)))) {
        mbedtls_aes_free(local_1b0);
        mbedtls_platform_zeroize(auStack_1d8,0x158);
        local_1b8 = 10000;
        local_1c8 = 0xffffffff;
        if (param_1 != 0) {
          puts("passed");
          __printf_chk(2,"  CTR_DRBG (PR = FALSE): ");
        }
        puVar3 = auStack_1d8;
        for (lVar2 = 0x2b; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
        }
        mbedtls_aes_init(local_1b0);
        local_1b8 = 10000;
        test_offset = 0;
        local_1c0 = 0x20;
        local_1c8 = -(uint)(local_90 != 0) | 0x10;
        iVar1 = mbedtls_ctr_drbg_seed(auStack_1d8,0x100000,entropy_source_nopr,pers_nopr,0x20);
        if (iVar1 == 0) {
          iVar1 = mbedtls_ctr_drbg_reseed_internal(auStack_1d8,0,0,0);
          if (iVar1 == 0) {
            iVar1 = mbedtls_ctr_drbg_random_with_add(auStack_1d8,&local_78,0x40,0,0);
            if (iVar1 == 0) {
              iVar1 = mbedtls_ctr_drbg_random_with_add(auStack_1d8,&local_78,0x40,0,0);
              if (((iVar1 == 0) &&
                  (local_78 == -0x520c416f5e7fae5b && local_70 == -0xc0e166a4809d751)) &&
                 ((local_68 == 0x7b46d07db2a1dfd6 && local_60 == 0x14971e93faf5750c &&
                  ((local_58 == 0x5496a203ae7cb275 && local_50 == 0x306433ea6609f4e2 &&
                   (local_48 == 0x3a8777e60f40d140 && local_40 == -0x67fd0f16e083f608)))))) {
                uVar4 = 0;
                mbedtls_aes_free(local_1b0);
                mbedtls_platform_zeroize(auStack_1d8,0x158);
                local_1b8 = 10000;
                local_1c8 = 0xffffffff;
                if (param_1 != 0) {
                  puts("passed");
                  putchar(10);
                }
                goto LAB_00100d9a;
              }
            }
          }
        }
      }
    }
  }
  if (param_1 != 0) {
    puts("failed");
  }
  uVar4 = 1;
LAB_00100d9a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


