
undefined1 * kdf_scrypt_settable_ctx_params(void)

{
  return known_settable_ctx_params_2;
}



undefined1 * kdf_scrypt_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_4;
}



undefined8 kdf_scrypt_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar1 != 0) {
    uVar2 = OSSL_PARAM_set_size_t(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}



bool scrypt_set_membuf(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  CRYPTO_clear_free(*param_1,*param_2,"providers/implementations/kdfs/scrypt.c",0x94);
  *param_1 = 0;
  *param_2 = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    bVar3 = true;
    if (*(long *)(param_3 + 0x10) != 0) {
      iVar1 = OSSL_PARAM_get_octet_string(param_3,param_1,0,param_2);
      bVar3 = iVar1 != 0;
    }
    return bVar3;
  }
  pvVar2 = CRYPTO_malloc(1,"providers/implementations/kdfs/scrypt.c",0x99);
  *param_1 = pvVar2;
  return pvVar2 != (void *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kdf_scrypt_reset(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  CRYPTO_free(*(void **)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                    "providers/implementations/kdfs/scrypt.c",0x60);
  uVar2 = _UNK_001014c8;
  uVar1 = __LC2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar1 = _UNK_001014d8;
  *(undefined8 *)(param_1 + 0x40) = __LC3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



bool set_digest(undefined8 *param_1)

{
  long lVar1;
  
  EVP_MD_free(param_1[10]);
  lVar1 = EVP_MD_fetch(*param_1,"sha256",param_1[1]);
  param_1[10] = lVar1;
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kdfs/scrypt.c",0xa7,"set_digest");
    ERR_set_error(0x39,0x93,0);
  }
  return lVar1 != 0;
}



bool kdf_scrypt_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_001003e0:
    bVar4 = true;
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar2 == 0) {
LAB_00100251:
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC6);
      if (lVar2 != 0) {
        iVar1 = scrypt_set_membuf(param_1 + 0x20,param_1 + 0x28,lVar2);
        if (iVar1 == 0) goto LAB_00100400;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC7);
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint64(lVar2,&local_28);
        if (((iVar1 == 0) || (local_28 < 2)) || ((local_28 - 1 & local_28) != 0)) goto LAB_00100400;
        *(ulong *)(param_1 + 0x30) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC8);
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint64(lVar2,&local_28);
        if ((iVar1 == 0) || (local_28 == 0)) goto LAB_00100400;
        *(ulong *)(param_1 + 0x38) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC9);
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint64(lVar2,&local_28);
        if ((iVar1 == 0) || (local_28 == 0)) goto LAB_00100400;
        *(ulong *)(param_1 + 0x40) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"maxmem_bytes");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_uint64(lVar2,&local_28);
        if ((iVar1 == 0) || (local_28 == 0)) goto LAB_00100400;
        *(ulong *)(param_1 + 0x48) = local_28;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 == 0) goto LAB_001003e0;
      if (*(int *)(lVar2 + 8) == 4) {
        pcVar3 = *(char **)(lVar2 + 0x10);
        CRYPTO_free(*(void **)(param_1 + 8));
        *(undefined8 *)(param_1 + 8) = 0;
        if (pcVar3 != (char *)0x0) {
          pcVar3 = CRYPTO_strdup(pcVar3,"providers/implementations/kdfs/scrypt.c",0xb2);
          *(char **)(param_1 + 8) = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_00100400;
        }
        iVar1 = set_digest(param_1);
        bVar4 = iVar1 != 0;
        goto LAB_001003e5;
      }
    }
    else {
      iVar1 = scrypt_set_membuf(param_1 + 0x10,param_1 + 0x18,lVar2);
      if (iVar1 != 0) goto LAB_00100251;
    }
LAB_00100400:
    bVar4 = false;
  }
LAB_001003e5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void scryptBlockMix(long param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  uint local_138;
  uint local_128;
  uint local_120;
  int local_10c;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = param_2 + param_3 * 0x10 + -8;
  local_c8 = *puVar6;
  uStack_c0 = puVar6[1];
  local_b8 = puVar6[2];
  uStack_b0 = puVar6[3];
  local_a8 = puVar6[4];
  uStack_a0 = puVar6[5];
  local_98 = puVar6[6];
  uStack_90 = puVar6[7];
  if (param_3 * 2 != 0) {
    uVar10 = 0;
    puVar6 = &local_c8;
    puVar7 = param_2;
    do {
      do {
        uVar8 = *param_2;
        uVar4 = param_2[1];
        puVar5 = puVar6 + 2;
        param_2 = param_2 + 2;
        *puVar6 = uVar8 ^ *puVar6;
        puVar6[1] = uVar4 ^ puVar6[1];
        puVar6 = puVar5;
      } while (puVar5 != (ulong *)&local_88);
      param_2 = puVar7 + 8;
      local_10c = 4;
      uStack_80 = (uint)uStack_c0;
      local_138 = uStack_80;
      uStack_7c = (uint)(uStack_c0 >> 0x20);
      uStack_64 = (uint)(local_a8 >> 0x20);
      uStack_60 = (uint)uStack_a0;
      local_128 = uStack_7c;
      uStack_4c = (uint)(uStack_90 >> 0x20);
      uStack_50 = (uint)uStack_90;
      uStack_5c = (uint)(uStack_a0 >> 0x20);
      uStack_74 = (uint)(local_b8 >> 0x20);
      uStack_6c = (uint)(uStack_b0 >> 0x20);
      uStack_84 = (uint)(local_c8 >> 0x20);
      uStack_54 = (uint)(local_98 >> 0x20);
      local_120 = uStack_6c;
      uStack_70 = (uint)uStack_b0;
      uVar13 = (uint)local_c8;
      uVar12 = (uint)local_98;
      uVar9 = (uint)local_b8;
      uVar11 = (uint)local_a8;
      do {
        uVar9 = ((uVar13 + uVar12) * 0x80 | uVar13 + uVar12 >> 0x19) ^ uVar9;
        uVar11 = ((uVar13 + uVar9) * 0x200 | uVar13 + uVar9 >> 0x17) ^ uVar11;
        uVar12 = ((uVar9 + uVar11) * 0x2000 | uVar9 + uVar11 >> 0x13) ^ uVar12;
        uVar1 = uVar11 + uVar12;
        uStack_64 = ((uStack_84 + uStack_74) * 0x80 | uStack_84 + uStack_74 >> 0x19) ^ uStack_64;
        uVar13 = (uVar1 >> 0xe | uVar1 * 0x40000) ^ uVar13;
        uStack_54 = ((uStack_64 + uStack_74) * 0x200 | uStack_64 + uStack_74 >> 0x17) ^ uStack_54;
        uStack_84 = ((uStack_64 + uStack_54) * 0x2000 | uStack_64 + uStack_54 >> 0x13) ^ uStack_84;
        uVar1 = uStack_54 + uStack_84;
        uStack_74 = (uVar1 >> 0xe | uVar1 * 0x40000) ^ uStack_74;
        uStack_50 = uStack_50 ^ ((uStack_70 + uStack_60) * 0x80 | uStack_70 + uStack_60 >> 0x19);
        local_138 = ((uStack_60 + uStack_50) * 0x200 | uStack_60 + uStack_50 >> 0x17) ^ local_138;
        uStack_70 = uStack_70 ^ ((uStack_50 + local_138) * 0x2000 | uStack_50 + local_138 >> 0x13);
        uVar1 = local_138 + uStack_70;
        local_128 = ((uStack_5c + uStack_4c) * 0x80 | uStack_5c + uStack_4c >> 0x19) ^ local_128;
        uStack_60 = (uVar1 >> 0xe | uVar1 * 0x40000) ^ uStack_60;
        local_120 = ((local_128 + uStack_4c) * 0x200 | local_128 + uStack_4c >> 0x17) ^ local_120;
        uStack_5c = ((local_128 + local_120) * 0x2000 | local_128 + local_120 >> 0x13) ^ uStack_5c;
        uVar1 = local_120 + uStack_5c;
        uStack_4c = uStack_4c ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_84 = ((uVar13 + local_128) * 0x80 | uVar13 + local_128 >> 0x19) ^ uStack_84;
        local_138 = ((uVar13 + uStack_84) * 0x200 | uVar13 + uStack_84 >> 0x17) ^ local_138;
        local_128 = ((uStack_84 + local_138) * 0x2000 | uStack_84 + local_138 >> 0x13) ^ local_128;
        uStack_70 = uStack_70 ^ ((uVar9 + uStack_74) * 0x80 | uVar9 + uStack_74 >> 0x19);
        uVar13 = (local_138 + local_128 >> 0xe | (local_138 + local_128) * 0x40000) ^ uVar13;
        local_120 = ((uStack_74 + uStack_70) * 0x200 | uStack_74 + uStack_70 >> 0x17) ^ local_120;
        uVar9 = ((uStack_70 + local_120) * 0x2000 | uStack_70 + local_120 >> 0x13) ^ uVar9;
        uStack_5c = ((uStack_64 + uStack_60) * 0x80 | uStack_64 + uStack_60 >> 0x19) ^ uStack_5c;
        uStack_74 = (local_120 + uVar9 >> 0xe | (local_120 + uVar9) * 0x40000) ^ uStack_74;
        uVar11 = ((uStack_60 + uStack_5c) * 0x200 | uStack_60 + uStack_5c >> 0x17) ^ uVar11;
        uStack_64 = ((uStack_5c + uVar11) * 0x2000 | uStack_5c + uVar11 >> 0x13) ^ uStack_64;
        uStack_60 = (uVar11 + uStack_64 >> 0xe | (uVar11 + uStack_64) * 0x40000) ^ uStack_60;
        uVar12 = ((uStack_50 + uStack_4c) * 0x80 | uStack_50 + uStack_4c >> 0x19) ^ uVar12;
        uStack_54 = ((uStack_4c + uVar12) * 0x200 | uStack_4c + uVar12 >> 0x17) ^ uStack_54;
        uStack_50 = uStack_50 ^ ((uVar12 + uStack_54) * 0x2000 | uVar12 + uStack_54 >> 0x13);
        uStack_4c = uStack_4c ^ (uStack_54 + uStack_50 >> 0xe | (uStack_54 + uStack_50) * 0x40000);
        local_10c = local_10c + -1;
      } while (local_10c != 0);
      _uStack_80 = CONCAT44(local_128,local_138);
      _local_88 = CONCAT44(uStack_84,uVar13);
      _uStack_70 = CONCAT44(local_120,uStack_70);
      _local_78 = CONCAT44(uStack_74,uVar9);
      _local_68 = CONCAT44(uStack_64,uVar11);
      _local_58 = CONCAT44(uStack_54,uVar12);
      puVar6 = (ulong *)&local_88;
      puVar7 = &local_c8;
      do {
        uVar8 = *puVar6;
        iVar2 = *(int *)((long)puVar6 + 4);
        uVar4 = puVar6[1];
        iVar3 = *(int *)((long)puVar6 + 0xc);
        puVar5 = puVar7 + 2;
        puVar6 = puVar6 + 2;
        *(int *)puVar7 = (int)*puVar7 + (int)uVar8;
        *(int *)((long)puVar7 + 4) = *(int *)((long)puVar7 + 4) + iVar2;
        *(int *)(puVar7 + 1) = (int)puVar7[1] + (int)uVar4;
        *(int *)((long)puVar7 + 0xc) = *(int *)((long)puVar7 + 0xc) + iVar3;
        puVar7 = puVar5;
      } while (puVar5 != (ulong *)&local_88);
      OPENSSL_cleanse(&local_88,0x40);
      uVar13 = (uint)uVar10;
      uVar8 = uVar10 >> 1;
      uVar10 = uVar10 + 1;
      puVar6 = (ulong *)(((-(ulong)(uVar13 & 1) & param_3) + uVar8) * 0x40 + param_1);
      *puVar6 = local_c8;
      puVar6[1] = uStack_c0;
      puVar6[2] = local_b8;
      puVar6[3] = uStack_b0;
      puVar6[4] = local_a8;
      puVar6[5] = uStack_a0;
      puVar6[6] = local_98;
      puVar6[7] = uStack_90;
      puVar6 = &local_c8;
      puVar7 = param_2;
    } while (uVar10 != param_3 * 2);
  }
  OPENSSL_cleanse(&local_c8,0x40);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined4 kdf_scrypt_derive(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ushort uVar14;
  uint3 uVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  long lVar21;
  undefined8 uVar22;
  void *pvVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  void *pvVar30;
  long local_b0;
  ulong local_98;
  void *local_90;
  void *local_80;
  
  iVar16 = ossl_prov_is_running();
  if ((iVar16 != 0) && (iVar16 = kdf_scrypt_set_ctx_params(param_1,param_4), iVar16 != 0)) {
    lVar28 = param_1[2];
    if (lVar28 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/scrypt.c",0xc2,"kdf_scrypt_derive");
      ERR_set_error(0x39,0x82,0);
      return 0;
    }
    lVar27 = param_1[4];
    if (lVar27 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/scrypt.c",199,"kdf_scrypt_derive");
      ERR_set_error(0x39,0x83,0);
      return 0;
    }
    local_b0 = param_1[10];
    if (local_b0 == 0) {
      iVar16 = set_digest(param_1);
      if (iVar16 == 0) {
        return 0;
      }
      local_b0 = param_1[10];
      lVar27 = param_1[4];
      lVar28 = param_1[2];
    }
    uVar25 = param_1[1];
    uVar6 = param_1[7];
    uVar7 = param_1[8];
    uVar24 = param_1[9];
    uVar8 = *param_1;
    uVar9 = param_1[6];
    uVar10 = param_1[5];
    uVar11 = param_1[3];
    if (uVar6 == 0 || uVar7 == 0) {
      return 0;
    }
    if (uVar9 < 2) {
      return 0;
    }
    if ((uVar9 - 1 & uVar9) != 0) {
      return 0;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar6;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x3fffffff)) / auVar12,0) < uVar7) {
      ERR_new();
      uVar25 = 0x1cd;
    }
    else if ((uVar6 << 4 < 0x40) && ((ulong)(1L << ((byte)((int)uVar6 << 4) & 0x3f)) <= uVar9)) {
      ERR_new();
      uVar25 = 0x1d8;
    }
    else {
      uVar18 = uVar7 * uVar6 * 0x80;
      if (uVar18 < 0x80000000) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar6;
        auVar12 = ZEXT816(0) << 0x40 | ZEXT816(0x1ffffffffffffff);
        uVar22 = SUB168(auVar12 % auVar13,0);
        if (SUB168(auVar12 / auVar13,0) < uVar9 + 2) {
          ERR_new(uVar7,uVar24,uVar22);
          uVar25 = 500;
        }
        else {
          lVar29 = uVar6 * 0x80;
          uVar19 = (uVar9 + 2) * lVar29;
          uVar26 = uVar18 + uVar19;
          if (CARRY8(uVar18,uVar19)) {
            ERR_new(uVar26,uVar24,uVar22);
            uVar25 = 0x1fb;
          }
          else {
            if (uVar26 <= uVar24) {
              if (param_2 == 0) {
                return 1;
              }
              pvVar20 = CRYPTO_malloc((int)uVar26,"providers/implementations/kdfs/scrypt.c",0x20c);
              if (pvVar20 == (void *)0x0) {
                return 0;
              }
              iVar16 = ossl_pkcs5_pbkdf2_hmac_ex
                                 (lVar28,uVar11 & 0xffffffff,lVar27,uVar10 & 0xffffffff,1,local_b0,
                                  uVar18,pvVar20,uVar8,uVar25);
              if (iVar16 != 0) {
                local_98 = 0;
                pvVar30 = (void *)(uVar18 + (long)pvVar20);
                pvVar3 = (void *)((long)pvVar30 + lVar29);
                pvVar1 = (void *)((long)pvVar3 + lVar29);
                lVar27 = uVar6 << 5;
                pvVar2 = (void *)((long)pvVar1 + lVar29);
                local_90 = pvVar20;
                local_80 = pvVar20;
                pvVar23 = pvVar1;
                if (lVar27 == 0) goto LAB_00100c52;
                do {
                  lVar21 = 0;
                  do {
                    bVar4 = *(byte *)((long)local_90 + lVar21 * 4);
                    *(uint *)((long)pvVar1 + lVar21 * 4) = (uint)bVar4;
                    uVar14 = CONCAT11(*(undefined1 *)((long)local_90 + lVar21 * 4 + 1),bVar4);
                    *(uint *)((long)pvVar1 + lVar21 * 4) = (uint)uVar14;
                    uVar15 = CONCAT12(*(undefined1 *)((long)local_90 + lVar21 * 4 + 2),uVar14);
                    *(uint *)((long)pvVar1 + lVar21 * 4) = (uint)uVar15;
                    *(uint *)((long)pvVar1 + lVar21 * 4) =
                         CONCAT13(*(undefined1 *)((long)local_90 + lVar21 * 4 + 3),uVar15);
                    lVar21 = lVar21 + 1;
                    local_80 = local_90;
                    pvVar23 = pvVar2;
                  } while (lVar21 != lVar27);
LAB_00100c52:
                  while( true ) {
                    pvVar2 = pvVar23;
                    uVar24 = 1;
                    pvVar23 = pvVar2;
                    do {
                      uVar24 = uVar24 + 1;
                      scryptBlockMix(pvVar23,(void *)((long)pvVar23 + uVar6 * -0x80),uVar6);
                      pvVar23 = (void *)((long)pvVar23 + lVar29);
                    } while (uVar24 < uVar9);
                    scryptBlockMix(pvVar30,(void *)((uVar9 - 1) * lVar29 + (long)pvVar1),uVar6);
                    uVar24 = 0;
                    do {
                      uVar5 = *(uint *)((long)pvVar30 + lVar29 + -0x40);
                      lVar21 = 0;
                      if (lVar27 != 0) {
                        do {
                          *(uint *)((long)pvVar3 + lVar21 * 4) =
                               *(uint *)((long)pvVar30 + lVar21 * 4) ^
                               *(uint *)((long)pvVar1 + lVar21 * 4 + ((ulong)uVar5 % uVar9) * lVar29
                                        );
                          lVar21 = lVar21 + 1;
                        } while (lVar21 != lVar27);
                      }
                      uVar24 = uVar24 + 1;
                      scryptBlockMix(pvVar30,pvVar3,uVar6);
                    } while (uVar24 < uVar9);
                    if (lVar27 != 0) break;
                    local_98 = local_98 + 1;
                    local_80 = (void *)((long)local_80 + lVar29);
                    pvVar23 = pvVar2;
                    if (uVar7 <= local_98) goto LAB_00100d84;
                  }
                  lVar21 = 0;
                  do {
                    *(undefined4 *)((long)local_80 + lVar21 * 4) =
                         *(undefined4 *)((long)pvVar30 + lVar21 * 4);
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != lVar27);
                  local_98 = local_98 + 1;
                  local_90 = (void *)((long)local_80 + lVar29);
                } while (local_98 < uVar7);
LAB_00100d84:
                iVar16 = ossl_pkcs5_pbkdf2_hmac_ex
                                   (lVar28,(int)uVar11,pvVar20,(int)uVar18,1,local_b0,param_3,
                                    param_2,uVar8,uVar25);
                if (iVar16 != 0) {
                  uVar17 = 1;
                  goto LAB_00100dc8;
                }
              }
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/scrypt.c",0x21f,"scrypt_alg");
              ERR_set_error(6,0xb5,0);
              uVar17 = 0;
LAB_00100dc8:
              CRYPTO_clear_free(pvVar20,uVar26,"providers/implementations/kdfs/scrypt.c",0x221);
              return uVar17;
            }
            ERR_new(uVar26,uVar24,uVar22);
            uVar25 = 0x204;
          }
        }
      }
      else {
        ERR_new();
        uVar25 = 0x1ea;
      }
    }
    ERR_set_debug("providers/implementations/kdfs/scrypt.c",uVar25,"scrypt_alg");
    ERR_set_error(6,0xac,0);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * kdf_scrypt_new(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = ossl_prov_ctx_get0_libctx();
  iVar3 = ossl_prov_is_running();
  puVar5 = (undefined8 *)0x0;
  if (iVar3 != 0) {
    puVar5 = (undefined8 *)CRYPTO_zalloc(0x58,"providers/implementations/kdfs/scrypt.c",0x41);
    uVar2 = _UNK_001014c8;
    uVar1 = __LC2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = uVar4;
      puVar5[6] = uVar1;
      puVar5[7] = uVar2;
      uVar4 = _UNK_001014d8;
      puVar5[8] = __LC3;
      puVar5[9] = uVar4;
    }
  }
  return puVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * kdf_scrypt_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *ptr;
  char *pcVar8;
  
  uVar1 = *param_1;
  iVar7 = ossl_prov_is_running();
  if (iVar7 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x58,"providers/implementations/kdfs/scrypt.c",0x41);
  uVar6 = _UNK_001014d8;
  uVar5 = __LC3;
  uVar4 = _UNK_001014c8;
  uVar3 = __LC2;
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *ptr = uVar1;
  lVar2 = param_1[10];
  ptr[6] = uVar3;
  ptr[7] = uVar4;
  ptr[8] = uVar5;
  ptr[9] = uVar6;
  if ((lVar2 == 0) || (iVar7 = EVP_MD_up_ref(), iVar7 != 0)) {
    if ((char *)param_1[1] != (char *)0x0) {
      pcVar8 = CRYPTO_strdup((char *)param_1[1],"providers/implementations/kdfs/scrypt.c",0x6f);
      ptr[1] = pcVar8;
      if (pcVar8 == (char *)0x0) goto LAB_001010a0;
    }
    iVar7 = ossl_prov_memdup(param_1[4],param_1[5],ptr + 4,ptr + 5);
    if ((iVar7 != 0) &&
       (iVar7 = ossl_prov_memdup(param_1[2],param_1[3],ptr + 2,ptr + 3), iVar7 != 0)) {
      uVar1 = param_1[6];
      uVar3 = param_1[7];
      uVar4 = param_1[8];
      uVar5 = param_1[9];
      ptr[10] = param_1[10];
      ptr[6] = uVar1;
      ptr[7] = uVar3;
      ptr[8] = uVar4;
      ptr[9] = uVar5;
      return ptr;
    }
  }
LAB_001010a0:
  CRYPTO_free((void *)ptr[1]);
  EVP_MD_free(ptr[10]);
  CRYPTO_free((void *)ptr[4]);
  ptr[4] = 0;
  CRYPTO_clear_free(ptr[2],ptr[3],"providers/implementations/kdfs/scrypt.c",0x60);
  uVar5 = _UNK_001014d8;
  uVar4 = __LC3;
  uVar3 = _UNK_001014c8;
  uVar1 = __LC2;
  ptr[2] = 0;
  ptr[6] = uVar1;
  ptr[7] = uVar3;
  ptr[8] = uVar4;
  ptr[9] = uVar5;
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kdf_scrypt_free(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    EVP_MD_free(*(undefined8 *)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x20));
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x10),*(undefined8 *)((long)param_1 + 0x18),
                      "providers/implementations/kdfs/scrypt.c",0x60);
    uVar2 = _UNK_001014c8;
    uVar1 = __LC2;
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = uVar1;
    *(undefined8 *)((long)param_1 + 0x38) = uVar2;
    uVar1 = _UNK_001014d8;
    *(undefined8 *)((long)param_1 + 0x40) = __LC3;
    *(undefined8 *)((long)param_1 + 0x48) = uVar1;
    CRYPTO_free(param_1);
    return;
  }
  return;
}


