
bool kdf_derive(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9,
               undefined8 param_10)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8 [15];
  long local_40;
  
  puVar3 = &local_e0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10c = param_4;
  OSSL_PARAM_construct_int(&local_148,&_LC0,&local_10c);
  local_108 = local_148;
  uStack_100 = uStack_140;
  local_e8 = local_128;
  local_f8 = local_138;
  uStack_f0 = uStack_130;
  if (param_5 != 0) {
    puVar3 = local_b8;
    OSSL_PARAM_construct_octet_string(&local_148,&_LC1,param_5,param_6);
    local_c0 = local_128;
    local_e0 = local_148;
    uStack_d8 = uStack_140;
    local_d0 = local_138;
    uStack_c8 = uStack_130;
  }
  puVar2 = puVar3;
  if (param_7 != 0) {
    puVar2 = puVar3 + 5;
    OSSL_PARAM_construct_octet_string(&local_148,&_LC2,param_7,param_8);
    *puVar3 = local_148;
    puVar3[1] = uStack_140;
    puVar3[2] = local_138;
    puVar3[3] = uStack_130;
    puVar3[4] = local_128;
  }
  puVar3 = puVar2;
  if (param_9 != 0) {
    puVar3 = puVar2 + 5;
    OSSL_PARAM_construct_octet_string(&local_148,&_LC3,param_9,param_10);
    *puVar2 = local_148;
    puVar2[1] = uStack_140;
    puVar2[2] = local_138;
    puVar2[3] = uStack_130;
    puVar2[4] = local_128;
  }
  OSSL_PARAM_construct_end(&local_148);
  *puVar3 = local_148;
  puVar3[1] = uStack_140;
  puVar3[2] = local_138;
  puVar3[3] = uStack_130;
  puVar3[4] = local_128;
  iVar1 = EVP_KDF_derive(param_1,param_2,param_3,&local_108);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("crypto/hpke/hpke_util.c",0x10d,"kdf_derive");
    ERR_set_error(0x39,0xa4,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * ossl_HPKE_KEM_INFO_find_curve(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = hpke_kem_tab;
  while( true ) {
    if (*(long *)(puVar2 + 0x10) == 0) {
      iVar1 = OPENSSL_strcasecmp(param_1,*(undefined8 *)(puVar2 + 8));
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_1);
    }
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x48;
    if (iVar3 == 5) {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke_util.c",0xa8,"ossl_HPKE_KEM_INFO_find_curve");
      ERR_set_error(0x39,0xb0,0);
      return (undefined1 *)0x0;
    }
  }
  return hpke_kem_tab + (long)iVar3 * 0x48;
}



undefined1 * ossl_HPKE_KEM_INFO_find_id(short param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_new();
    uVar1 = 0xb5;
  }
  else {
    if (param_1 == 0x10) {
      return hpke_kem_tab;
    }
    if (param_1 == 0x11) {
      return (undefined1 *)0x1014a8;
    }
    if (param_1 == 0x12) {
      return (undefined1 *)0x1014f0;
    }
    if (param_1 == 0x20) {
      return (undefined1 *)0x101538;
    }
    if (param_1 == 0x21) {
      return (undefined1 *)0x101580;
    }
    ERR_new();
    uVar1 = 0xbc;
  }
  ERR_set_debug("crypto/hpke/hpke_util.c",uVar1,"ossl_HPKE_KEM_INFO_find_id");
  ERR_set_error(0x39,0xb0,0);
  return (undefined1 *)0x0;
}



undefined1 * ossl_HPKE_KEM_INFO_find_random(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = ossl_rand_uniform_uint32(param_1,5,&local_14);
  if (local_14 == 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = hpke_kem_tab + (ulong)uVar1 * 0x48;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * ossl_HPKE_KDF_INFO_find_id(short param_1)

{
  undefined1 *puVar1;
  
  puVar1 = hpke_kdf_tab;
  if (((param_1 != 1) && (puVar1 = (undefined1 *)0x101378, param_1 != 2)) &&
     (puVar1 = (undefined1 *)0x101390, param_1 != 3)) {
    ERR_new();
    ERR_set_debug("crypto/hpke/hpke_util.c",0xd2,"ossl_HPKE_KDF_INFO_find_id");
    ERR_set_error(0x39,0xe8,0);
    return (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * ossl_HPKE_KDF_INFO_find_random(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = ossl_rand_uniform_uint32(param_1,3,&local_14);
  if (local_14 == 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = hpke_kdf_tab + (ulong)uVar1 * 0x18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * ossl_HPKE_AEAD_INFO_find_id(short param_1)

{
  undefined1 *puVar1;
  
  puVar1 = hpke_aead_tab;
  if ((((param_1 != 1) && (puVar1 = (undefined1 *)0x1013e8, param_1 != 2)) &&
      (puVar1 = (undefined1 *)0x101410, param_1 != 3)) &&
     (puVar1 = (undefined1 *)0x101438, param_1 != -1)) {
    ERR_new();
    ERR_set_debug("crypto/hpke/hpke_util.c",0xe8,"ossl_HPKE_AEAD_INFO_find_id");
    ERR_set_error(0x39,0xe7,0);
    return (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * ossl_HPKE_AEAD_INFO_find_random(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = ossl_rand_uniform_uint32(param_1,3,&local_14);
  if (local_14 == 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = hpke_aead_tab + (ulong)uVar1 * 0x28;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_hpke_kdf_extract(void)

{
  kdf_derive();
  return;
}



void ossl_hpke_kdf_expand(void)

{
  kdf_derive();
  return;
}



undefined4
ossl_hpke_labeled_extract
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,char *param_6,undefined8 param_7,long param_8,char *param_9,
          undefined8 param_10,long param_11)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  void *ptr;
  long in_FS_OFFSET;
  size_t local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = strlen(param_6);
  sVar4 = strlen(param_9);
  local_80 = param_8 + 7 + param_11 + sVar3 + sVar4;
  ptr = CRYPTO_malloc((int)local_80,"crypto/hpke/hpke_util.c",0x13c);
  if (ptr == (void *)0x0) {
    uVar2 = 0;
    goto LAB_0010075a;
  }
  iVar1 = WPACKET_init_static_len(local_78,ptr,local_80,0);
  if (iVar1 == 0) {
LAB_00100707:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/hpke/hpke_util.c",0x149,"ossl_hpke_labeled_extract");
    ERR_set_error(0x39,0x6a,0);
  }
  else {
    iVar1 = WPACKET_memcpy(local_78,"HPKE-v1",7);
    if (iVar1 == 0) goto LAB_00100707;
    iVar1 = WPACKET_memcpy(local_78,param_6,sVar3);
    if (iVar1 == 0) goto LAB_00100707;
    iVar1 = WPACKET_memcpy(local_78,param_7,param_8);
    if (iVar1 == 0) goto LAB_00100707;
    iVar1 = WPACKET_memcpy(local_78,param_9,sVar4);
    if (iVar1 == 0) goto LAB_00100707;
    iVar1 = WPACKET_memcpy(local_78,param_10,param_11);
    if (iVar1 == 0) goto LAB_00100707;
    iVar1 = WPACKET_get_total_written(local_78,&local_80);
    if (iVar1 == 0) goto LAB_00100707;
    iVar1 = WPACKET_finish(local_78);
    if (iVar1 == 0) goto LAB_00100707;
    uVar2 = ossl_hpke_kdf_extract(param_1,param_2,param_3,param_4,param_5,ptr,local_80);
  }
  WPACKET_cleanup(local_78);
  OPENSSL_cleanse(ptr,local_80);
  CRYPTO_free(ptr);
LAB_0010075a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ossl_hpke_labeled_expand
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
          char *param_6,undefined8 param_7,long param_8,char *param_9,undefined8 param_10,
          long param_11)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  void *ptr;
  long in_FS_OFFSET;
  long local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = strlen(param_6);
  sVar4 = strlen(param_9);
  local_80 = param_8 + 9 + param_11 + param_5 + param_3 + sVar3 + sVar4;
  ptr = CRYPTO_malloc((int)local_80,"crypto/hpke/hpke_util.c",0x16e);
  if (ptr == (void *)0x0) {
    uVar2 = 0;
    goto LAB_0010099e;
  }
  iVar1 = WPACKET_init_static_len(local_78,ptr,local_80,0);
  if (iVar1 == 0) {
LAB_00100958:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("crypto/hpke/hpke_util.c",0x17c,"ossl_hpke_labeled_expand");
    ERR_set_error(0x39,0x6a,0);
  }
  else {
    iVar1 = WPACKET_put_bytes__(local_78,param_3,2);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_memcpy(local_78,"HPKE-v1",7);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_memcpy(local_78,param_6,sVar3);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_memcpy(local_78,param_7,param_8);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_memcpy(local_78,param_9,sVar4);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_memcpy(local_78,param_10,param_11);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_get_total_written(local_78,&local_80);
    if (iVar1 == 0) goto LAB_00100958;
    iVar1 = WPACKET_finish(local_78);
    if (iVar1 == 0) goto LAB_00100958;
    uVar2 = ossl_hpke_kdf_expand(param_1,param_2,param_3,param_4,param_5,ptr,local_80);
  }
  WPACKET_cleanup(local_78);
  CRYPTO_free(ptr);
LAB_0010099e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ossl_kdf_ctx_create(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_KDF_fetch(param_3,param_1,param_4);
  if (lVar2 == 0) {
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("crypto/hpke/hpke_util.c",0x191,"ossl_kdf_ctx_create");
    ERR_set_error(0xf,0x8010d,0);
  }
  else {
    lVar3 = EVP_KDF_CTX_new(lVar2);
    EVP_KDF_free(lVar2);
    lVar2 = lVar3;
    if ((lVar3 != 0) && (param_2 != 0)) {
      puVar4 = &local_80;
      OSSL_PARAM_construct_utf8_string(&local_d8,"digest",param_2,0);
      local_a8 = local_d8;
      uStack_a0 = uStack_d0;
      local_88 = local_b8;
      local_98 = local_c8;
      uStack_90 = uStack_c0;
      if (param_4 != 0) {
        OSSL_PARAM_construct_utf8_string(&local_d8,"properties",param_4,0);
        puVar4 = local_58;
        local_60 = local_b8;
        local_80 = local_d8;
        uStack_78 = uStack_d0;
        local_70 = local_c8;
        uStack_68 = uStack_c0;
      }
      OSSL_PARAM_construct_end(&local_d8);
      *puVar4 = local_d8;
      puVar4[1] = uStack_d0;
      puVar4[2] = local_c8;
      puVar4[3] = uStack_c0;
      puVar4[4] = local_b8;
      iVar1 = EVP_KDF_CTX_set_params(lVar3,&local_a8);
      if (iVar1 < 1) {
        lVar2 = 0;
        EVP_KDF_CTX_free(lVar3);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_hpke_str2suite(char *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *__s;
  int iVar9;
  short *psVar10;
  long lVar11;
  short local_42;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_2 == (short *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/hpke/hpke_util.c",0x1cc,"ossl_hpke_str2suite");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    uVar5 = OPENSSL_strnlen();
    if (uVar5 < 0x26) {
      if ((param_1[uVar5 - 1] != ',') && (cVar8 = *param_1, cVar8 != '\0')) {
        iVar9 = 0;
        pcVar7 = param_1;
        do {
          pcVar7 = pcVar7 + 1;
          iVar9 = iVar9 + (uint)(cVar8 == ',');
          cVar8 = *pcVar7;
        } while (cVar8 != '\0');
        if (iVar9 == 2) {
          pcVar7 = (char *)CRYPTO_memdup(param_1,uVar5 + 1,"crypto/hpke/hpke_util.c",0x1e4);
          if (pcVar7 != (char *)0x0) {
            iVar9 = 0;
            local_42 = 0;
            sVar1 = 0;
            __s = pcVar7;
            while( true ) {
              pcVar6 = strchr(__s,0x2c);
              if (pcVar6 != (char *)0x0) {
                *pcVar6 = '\0';
              }
              psVar10 = &kemstrtab;
              if (iVar9 == 0) break;
              if (iVar9 != 1) {
                psVar10 = &aeadstrtab;
                do {
                  lVar11 = 0;
                  do {
                    iVar9 = OPENSSL_strcasecmp(__s,*(undefined8 *)(psVar10 + lVar11 * 4 + 4));
                    if (iVar9 == 0) {
                      if ((*psVar10 == 0) || (pcVar6 != (char *)0x0)) goto LAB_00100dc0;
                      param_2[2] = *psVar10;
                      uVar3 = 1;
                      *param_2 = sVar1;
                      param_2[1] = local_42;
                      goto LAB_00100dc2;
                    }
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 4);
                  psVar10 = psVar10 + 0x14;
                } while (psVar10 != &kdfstrtab);
                goto LAB_00100dc0;
              }
              psVar10 = &kdfstrtab;
LAB_00100e47:
              lVar11 = 0;
LAB_00100e4a:
              iVar4 = OPENSSL_strcasecmp(__s,*(undefined8 *)(psVar10 + lVar11 * 4 + 4));
              if (iVar4 != 0) goto code_r0x00100e5b;
              local_42 = *psVar10;
              sVar2 = local_42;
joined_r0x00100e2b:
              if ((sVar2 == 0) || (iVar9 = iVar9 + 1, pcVar6 == (char *)0x0)) goto LAB_00100dc0;
              __s = pcVar6 + 1;
            }
            do {
              lVar11 = 0;
              do {
                iVar4 = OPENSSL_strcasecmp(__s,*(undefined8 *)(psVar10 + lVar11 * 4 + 4));
                if (iVar4 == 0) {
                  sVar1 = *psVar10;
                  sVar2 = sVar1;
                  goto joined_r0x00100e2b;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 != 4);
              psVar10 = psVar10 + 0x14;
            } while (psVar10 != (short *)&DAT_00101348);
          }
LAB_00100dc0:
          uVar3 = 0;
LAB_00100dc2:
          CRYPTO_free(pcVar7);
          return uVar3;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke_util.c",0x1d1,"ossl_hpke_str2suite");
      ERR_set_error(0xf,0x80106,0);
    }
  }
  return 0;
code_r0x00100e5b:
  lVar11 = lVar11 + 1;
  if (lVar11 == 4) goto code_r0x00100e65;
  goto LAB_00100e4a;
code_r0x00100e65:
  psVar10 = psVar10 + 0x14;
  if (psVar10 == (short *)&DAT_00101278) goto LAB_00100dc0;
  goto LAB_00100e47;
}


