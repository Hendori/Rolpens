
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kdf_scrypt_reset(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  CRYPTO_free(*(void **)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                    "providers/implementations/kdfs/scrypt.c",0x60);
  uVar2 = _UNK_00101a48;
  uVar1 = __LC2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar1 = _UNK_00101a58;
  *(undefined8 *)(param_1 + 0x40) = __LC3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void scryptBlockMix(long param_1,uint *param_2,ulong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_120;
  uint local_11c;
  uint local_118;
  int local_108;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = param_2 + param_3 * 0x20 + -0x10;
  local_c8 = *(undefined8 *)puVar1;
  uStack_c0 = *(undefined8 *)(puVar1 + 2);
  local_b8 = *(undefined8 *)(puVar1 + 4);
  uStack_b0 = *(undefined8 *)(puVar1 + 6);
  local_a8 = *(undefined8 *)(puVar1 + 8);
  uStack_a0 = *(undefined8 *)(puVar1 + 10);
  local_98 = *(undefined8 *)(puVar1 + 0xc);
  uStack_90 = *(undefined8 *)(puVar1 + 0xe);
  if (param_3 * 2 != 0) {
    uVar4 = 0;
    do {
      local_108 = 4;
      local_78 = param_2[4] ^ (uint)local_b8;
      local_70 = param_2[6] ^ (uint)uStack_b0;
      local_60 = param_2[10] ^ (uint)uStack_a0;
      local_58 = param_2[0xc] ^ (uint)local_98;
      local_88 = *param_2 ^ (uint)local_c8;
      local_54 = param_2[0xd] ^ local_98._4_4_;
      local_50 = param_2[0xe] ^ (uint)uStack_90;
      local_84 = param_2[1] ^ local_c8._4_4_;
      local_74 = param_2[5] ^ local_b8._4_4_;
      local_5c = param_2[0xb] ^ uStack_a0._4_4_;
      local_4c = param_2[0xf] ^ uStack_90._4_4_;
      local_68 = param_2[8] ^ (uint)local_a8;
      local_64 = param_2[9] ^ local_a8._4_4_;
      local_120 = param_2[2] ^ (uint)uStack_c0;
      local_11c = param_2[3] ^ uStack_c0._4_4_;
      local_118 = param_2[7] ^ uStack_b0._4_4_;
      do {
        local_78 = ((local_88 + local_58) * 0x80 | local_88 + local_58 >> 0x19) ^ local_78;
        local_68 = ((local_78 + local_88) * 0x200 | local_78 + local_88 >> 0x17) ^ local_68;
        local_58 = ((local_78 + local_68) * 0x2000 | local_78 + local_68 >> 0x13) ^ local_58;
        uVar3 = local_68 + local_58;
        local_64 = ((local_74 + local_84) * 0x80 | local_74 + local_84 >> 0x19) ^ local_64;
        local_88 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ local_88;
        local_54 = ((local_64 + local_74) * 0x200 | local_64 + local_74 >> 0x17) ^ local_54;
        local_84 = ((local_64 + local_54) * 0x2000 | local_64 + local_54 >> 0x13) ^ local_84;
        uVar3 = local_54 + local_84;
        local_50 = ((local_60 + local_70) * 0x80 | local_60 + local_70 >> 0x19) ^ local_50;
        local_74 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ local_74;
        local_120 = ((local_50 + local_60) * 0x200 | local_50 + local_60 >> 0x17) ^ local_120;
        local_70 = local_70 ^ ((local_50 + local_120) * 0x2000 | local_50 + local_120 >> 0x13);
        uVar3 = local_120 + local_70;
        local_11c = ((local_4c + local_5c) * 0x80 | local_4c + local_5c >> 0x19) ^ local_11c;
        local_60 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ local_60;
        local_118 = ((local_11c + local_4c) * 0x200 | local_11c + local_4c >> 0x17) ^ local_118;
        local_5c = ((local_11c + local_118) * 0x2000 | local_11c + local_118 >> 0x13) ^ local_5c;
        uVar3 = local_118 + local_5c;
        local_4c = local_4c ^ (uVar3 >> 0xe | uVar3 * 0x40000);
        local_84 = ((local_88 + local_11c) * 0x80 | local_88 + local_11c >> 0x19) ^ local_84;
        local_120 = ((local_88 + local_84) * 0x200 | local_88 + local_84 >> 0x17) ^ local_120;
        local_11c = ((local_84 + local_120) * 0x2000 | local_84 + local_120 >> 0x13) ^ local_11c;
        local_70 = local_70 ^ ((local_78 + local_74) * 0x80 | local_78 + local_74 >> 0x19);
        local_88 = (local_120 + local_11c >> 0xe | (local_120 + local_11c) * 0x40000) ^ local_88;
        local_5c = ((local_64 + local_60) * 0x80 | local_64 + local_60 >> 0x19) ^ local_5c;
        local_118 = ((local_74 + local_70) * 0x200 | local_74 + local_70 >> 0x17) ^ local_118;
        local_78 = ((local_70 + local_118) * 0x2000 | local_70 + local_118 >> 0x13) ^ local_78;
        local_74 = (local_118 + local_78 >> 0xe | (local_118 + local_78) * 0x40000) ^ local_74;
        local_68 = ((local_60 + local_5c) * 0x200 | local_60 + local_5c >> 0x17) ^ local_68;
        local_64 = ((local_5c + local_68) * 0x2000 | local_5c + local_68 >> 0x13) ^ local_64;
        local_60 = (local_68 + local_64 >> 0xe | (local_68 + local_64) * 0x40000) ^ local_60;
        local_58 = ((local_50 + local_4c) * 0x80 | local_50 + local_4c >> 0x19) ^ local_58;
        local_54 = ((local_4c + local_58) * 0x200 | local_4c + local_58 >> 0x17) ^ local_54;
        local_50 = ((local_58 + local_54) * 0x2000 | local_58 + local_54 >> 0x13) ^ local_50;
        local_4c = local_4c ^ (local_54 + local_50 >> 0xe | (local_54 + local_50) * 0x40000);
        local_108 = local_108 + -1;
      } while (local_108 != 0);
      local_c8 = CONCAT44((param_2[1] ^ local_c8._4_4_) + local_84,
                          (*param_2 ^ (uint)local_c8) + local_88);
      uStack_c0 = CONCAT44((param_2[3] ^ uStack_c0._4_4_) + local_11c,
                           (param_2[2] ^ (uint)uStack_c0) + local_120);
      local_b8 = CONCAT44((param_2[5] ^ local_b8._4_4_) + local_74,
                          (param_2[4] ^ (uint)local_b8) + local_78);
      uStack_b0 = CONCAT44((param_2[7] ^ uStack_b0._4_4_) + local_118,
                           (param_2[6] ^ (uint)uStack_b0) + local_70);
      local_a8 = CONCAT44(local_64 + (param_2[9] ^ local_a8._4_4_),
                          local_68 + (param_2[8] ^ (uint)local_a8));
      uStack_a0 = CONCAT44(local_5c + (param_2[0xb] ^ uStack_a0._4_4_),
                           local_60 + (param_2[10] ^ (uint)uStack_a0));
      local_98 = CONCAT44(local_54 + (param_2[0xd] ^ local_98._4_4_),
                          local_58 + (param_2[0xc] ^ (uint)local_98));
      uStack_90 = CONCAT44(local_4c + (param_2[0xf] ^ uStack_90._4_4_),
                           local_50 + (param_2[0xe] ^ (uint)uStack_90));
      local_80 = local_120;
      local_7c = local_11c;
      local_6c = local_118;
      OPENSSL_cleanse(&local_88,0x40);
      uVar5 = uVar4 + 1;
      puVar2 = (undefined8 *)
               (((-(ulong)((uint)uVar4 & 1) & param_3) + (uVar4 >> 1)) * 0x40 + param_1);
      *puVar2 = local_c8;
      puVar2[1] = uStack_c0;
      puVar2[2] = local_b8;
      puVar2[3] = uStack_b0;
      puVar2[4] = local_a8;
      puVar2[5] = uStack_a0;
      puVar2[6] = local_98;
      puVar2[7] = uStack_90;
      uVar4 = uVar5;
      param_2 = param_2 + 0x10;
    } while (uVar5 != param_3 * 2);
  }
  OPENSSL_cleanse(&local_c8,0x40);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    uVar2 = _UNK_00101a48;
    uVar1 = __LC2;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = uVar4;
      puVar5[6] = uVar1;
      puVar5[7] = uVar2;
      uVar4 = _UNK_00101a58;
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
  uVar6 = _UNK_00101a58;
  uVar5 = __LC3;
  uVar4 = _UNK_00101a48;
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
      if (pcVar8 == (char *)0x0) goto LAB_00100760;
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
LAB_00100760:
  CRYPTO_free((void *)ptr[1]);
  EVP_MD_free(ptr[10]);
  CRYPTO_free((void *)ptr[4]);
  ptr[4] = 0;
  CRYPTO_clear_free(ptr[2],ptr[3],"providers/implementations/kdfs/scrypt.c",0x60);
  uVar5 = _UNK_00101a58;
  uVar4 = __LC3;
  uVar3 = _UNK_00101a48;
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
    uVar2 = _UNK_00101a48;
    uVar1 = __LC2;
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = uVar1;
    *(undefined8 *)((long)param_1 + 0x38) = uVar2;
    uVar1 = _UNK_00101a58;
    *(undefined8 *)((long)param_1 + 0x40) = __LC3;
    *(undefined8 *)((long)param_1 + 0x48) = uVar1;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 kdf_scrypt_set_ctx_params(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100b78:
    uVar5 = 1;
  }
  else {
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC4);
    if (lVar3 == 0) {
LAB_00100950:
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC5);
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/scrypt.c",0x94);
        param_1[5] = 0;
        lVar1 = *(long *)(lVar3 + 0x18);
        param_1[4] = 0;
        if (lVar1 == 0) {
          pvVar6 = CRYPTO_malloc(1,"providers/implementations/kdfs/scrypt.c",0x99);
          param_1[4] = pvVar6;
          if (pvVar6 == (void *)0x0) {
            uVar5 = 0;
            goto LAB_00100b7d;
          }
        }
        else if ((*(long *)(lVar3 + 0x10) != 0) &&
                (iVar2 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5), iVar2 == 0))
        goto LAB_00100b70;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC6);
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_uint64(lVar3,&local_38);
        if (((iVar2 == 0) || (local_38 < 2)) || ((local_38 - 1 & local_38) != 0)) goto LAB_00100b70;
        param_1[6] = local_38;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC7);
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_uint64(lVar3,&local_38);
        if ((iVar2 == 0) || (local_38 == 0)) goto LAB_00100b70;
        param_1[7] = local_38;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC8);
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_uint64(lVar3,&local_38);
        if ((iVar2 == 0) || (local_38 == 0)) goto LAB_00100b70;
        param_1[8] = local_38;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"maxmem_bytes");
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_uint64(lVar3,&local_38);
        if ((iVar2 == 0) || (local_38 == 0)) goto LAB_00100b70;
        param_1[9] = local_38;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar3 == 0) goto LAB_00100b78;
      if (*(int *)(lVar3 + 8) == 4) {
        pcVar4 = *(char **)(lVar3 + 0x10);
        CRYPTO_free((void *)param_1[1]);
        param_1[1] = 0;
        if (pcVar4 != (char *)0x0) {
          pcVar4 = CRYPTO_strdup(pcVar4,"providers/implementations/kdfs/scrypt.c",0xb2);
          param_1[1] = pcVar4;
          if (pcVar4 == (char *)0x0) goto LAB_00100b70;
        }
        EVP_MD_free(param_1[10]);
        lVar3 = EVP_MD_fetch(*param_1,"sha256",param_1[1]);
        param_1[10] = lVar3;
        if (lVar3 != 0) goto LAB_00100b78;
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/scrypt.c",0xa7,"set_digest");
        ERR_set_error(0x39,0x93,0);
      }
    }
    else {
      CRYPTO_clear_free(param_1[2],param_1[3],"providers/implementations/kdfs/scrypt.c",0x94);
      param_1[3] = 0;
      lVar1 = *(long *)(lVar3 + 0x18);
      param_1[2] = 0;
      if (lVar1 == 0) {
        pvVar6 = CRYPTO_malloc(1,"providers/implementations/kdfs/scrypt.c",0x99);
        param_1[2] = pvVar6;
        if (pvVar6 == (void *)0x0) {
          uVar5 = 0;
          goto LAB_00100b7d;
        }
        goto LAB_00100950;
      }
      if ((*(long *)(lVar3 + 0x10) == 0) ||
         (iVar2 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 2,0,param_1 + 3), iVar2 != 0))
      goto LAB_00100950;
    }
LAB_00100b70:
    uVar5 = 0;
  }
LAB_00100b7d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 kdf_scrypt_derive(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  byte bVar17;
  byte bVar25;
  byte bVar33;
  char cVar41;
  char cVar47;
  byte bVar50;
  byte bVar53;
  char cVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  uint3 uVar103;
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [14];
  undefined1 auVar108 [14];
  undefined1 auVar109 [14];
  undefined1 auVar110 [14];
  undefined1 auVar111 [15];
  undefined1 auVar112 [14];
  undefined1 auVar113 [14];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  uint uVar120;
  undefined1 auVar121 [14];
  undefined1 auVar122 [14];
  undefined1 auVar123 [14];
  undefined1 auVar124 [14];
  undefined1 auVar125 [13];
  undefined1 auVar126 [13];
  undefined1 auVar127 [13];
  undefined1 auVar128 [13];
  undefined1 auVar129 [13];
  undefined1 auVar130 [13];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  ulong uVar145;
  ulong uVar146;
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  unkuint9 Var150;
  undefined1 auVar151 [11];
  undefined1 auVar152 [15];
  undefined1 auVar153 [13];
  undefined1 auVar154 [15];
  unkuint9 Var155;
  undefined1 auVar156 [11];
  undefined1 auVar157 [13];
  undefined1 auVar158 [14];
  undefined1 auVar159 [14];
  undefined1 auVar160 [14];
  undefined1 auVar161 [14];
  undefined1 auVar162 [13];
  undefined1 auVar163 [13];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined3 uVar168;
  undefined3 uVar169;
  undefined3 uVar170;
  undefined1 auVar171 [15];
  undefined1 auVar172 [15];
  undefined1 auVar173 [15];
  undefined1 auVar174 [15];
  undefined1 auVar175 [15];
  undefined1 auVar176 [15];
  undefined1 auVar177 [15];
  undefined5 uVar178;
  undefined5 uVar179;
  undefined5 uVar180;
  undefined1 auVar181 [12];
  undefined1 auVar182 [12];
  undefined1 auVar183 [12];
  undefined1 auVar184 [12];
  undefined8 uVar185;
  undefined1 auVar186 [14];
  undefined1 auVar187 [14];
  undefined1 auVar188 [14];
  undefined1 auVar189 [14];
  uint6 uVar190;
  int iVar191;
  long lVar192;
  long lVar193;
  ulong uVar194;
  ulong uVar195;
  undefined1 (*pauVar196) [16];
  undefined1 (*pauVar197) [16];
  long lVar198;
  undefined1 (*pauVar199) [16];
  undefined1 (*pauVar200) [16];
  ulong uVar201;
  long lVar202;
  undefined1 (*pauVar203) [16];
  undefined8 uVar204;
  ulong uVar205;
  long lVar206;
  long lVar207;
  ushort uVar208;
  undefined4 uVar209;
  ushort uVar220;
  ushort uVar221;
  ushort uVar222;
  ushort uVar223;
  ushort uVar224;
  undefined1 auVar215 [16];
  ushort uVar219;
  uint uVar210;
  ushort uVar225;
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  ushort uVar226;
  uint uVar227;
  ushort uVar243;
  ushort uVar244;
  ushort uVar245;
  ushort uVar246;
  ushort uVar247;
  undefined1 auVar228 [12];
  ushort uVar248;
  ushort uVar249;
  undefined1 auVar230 [16];
  undefined1 auVar234 [16];
  undefined1 auVar238 [16];
  undefined1 auVar242 [16];
  ushort uVar250;
  undefined4 uVar251;
  ushort uVar260;
  ushort uVar261;
  ushort uVar262;
  ushort uVar263;
  ushort uVar264;
  ushort uVar265;
  ushort uVar266;
  undefined1 auVar256 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar267 [16];
  undefined1 auVar271 [16];
  undefined1 auVar275 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar282 [16];
  undefined4 uVar283;
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  ushort uVar297;
  ushort uVar304;
  undefined2 uVar305;
  ushort uVar306;
  ushort uVar307;
  ushort uVar308;
  ushort uVar309;
  ushort uVar310;
  ushort uVar311;
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined2 uVar314;
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 (*local_f0) [16];
  ulong local_d8;
  undefined1 (*local_c0) [16];
  long local_b8;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  byte bVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  byte bVar48;
  byte bVar49;
  char cVar51;
  char cVar52;
  byte bVar54;
  undefined6 uVar211;
  undefined8 uVar212;
  undefined1 auVar213 [12];
  undefined1 auVar214 [14];
  undefined1 auVar216 [16];
  undefined1 auVar231 [16];
  undefined1 auVar235 [16];
  undefined1 auVar239 [16];
  undefined1 auVar232 [16];
  undefined1 auVar236 [16];
  undefined1 auVar240 [16];
  undefined1 auVar229 [14];
  undefined1 auVar233 [16];
  undefined1 auVar237 [16];
  undefined1 auVar241 [16];
  undefined6 uVar252;
  undefined8 uVar253;
  undefined1 auVar254 [12];
  undefined1 auVar255 [14];
  undefined1 auVar257 [16];
  undefined1 auVar268 [16];
  undefined1 auVar272 [16];
  undefined1 auVar276 [16];
  undefined1 auVar269 [16];
  undefined1 auVar273 [16];
  undefined1 auVar277 [16];
  undefined1 auVar270 [16];
  undefined1 auVar274 [16];
  undefined1 auVar278 [16];
  undefined1 auVar281 [16];
  undefined6 uVar284;
  undefined8 uVar285;
  undefined1 auVar286 [12];
  undefined1 auVar287 [14];
  undefined1 auVar294 [16];
  undefined1 auVar288 [16];
  
  iVar191 = ossl_prov_is_running();
  if ((iVar191 != 0) && (iVar191 = kdf_scrypt_set_ctx_params(param_1,param_4), iVar191 != 0)) {
    lVar206 = param_1[2];
    if (lVar206 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/scrypt.c",0xc2,"kdf_scrypt_derive");
      ERR_set_error(0x39,0x82,0);
      return 0;
    }
    lVar202 = param_1[4];
    if (lVar202 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/scrypt.c",199,"kdf_scrypt_derive");
      ERR_set_error(0x39,0x83,0);
      return 0;
    }
    lVar192 = param_1[10];
    if (lVar192 == 0) {
      EVP_MD_free(0);
      lVar192 = EVP_MD_fetch(*param_1,"sha256",param_1[1]);
      param_1[10] = lVar192;
      if (lVar192 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/scrypt.c",0xa7,"set_digest");
        ERR_set_error(0x39,0x93,0);
        return 0;
      }
      lVar202 = param_1[4];
      lVar206 = param_1[2];
    }
    uVar204 = param_1[1];
    uVar5 = param_1[7];
    uVar6 = param_1[8];
    uVar7 = *param_1;
    uVar8 = param_1[6];
    uVar205 = param_1[5];
    uVar9 = param_1[3];
    if (uVar5 == 0 || uVar6 == 0) {
      return 0;
    }
    if (uVar8 < 2) {
      return 0;
    }
    if ((uVar8 - 1 & uVar8) != 0) {
      return 0;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar5;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x3fffffff)) / auVar10,0) < uVar6) {
      ERR_new();
      uVar204 = 0x1cd;
    }
    else if ((uVar5 << 4 < 0x40) && ((ulong)(1L << ((byte)((int)uVar5 << 4) & 0x3f)) <= uVar8)) {
      ERR_new();
      uVar204 = 0x1d8;
    }
    else {
      lVar193 = uVar6 * uVar5;
      uVar194 = lVar193 * 0x80;
      if (uVar194 < 0x80000000) {
        auVar256._8_8_ = 0;
        auVar256._0_8_ = uVar5;
        if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ffffffffffffff)) / auVar256,0) < uVar8 + 2) {
          ERR_new();
          uVar204 = 500;
        }
        else {
          lVar207 = uVar5 * 0x80;
          uVar195 = (uVar8 + 2) * lVar207;
          uVar201 = uVar194 + uVar195;
          if (CARRY8(uVar194,uVar195)) {
            ERR_new();
            uVar204 = 0x1fb;
          }
          else {
            if (uVar201 <= (ulong)param_1[9]) {
              if (param_2 == 0) {
                return 1;
              }
              pauVar196 = (undefined1 (*) [16])
                          CRYPTO_malloc((int)uVar201,"providers/implementations/kdfs/scrypt.c",0x20c
                                       );
              if (pauVar196 == (undefined1 (*) [16])0x0) {
                return 0;
              }
              iVar191 = ossl_pkcs5_pbkdf2_hmac_ex
                                  (lVar206,uVar9 & 0xffffffff,lVar202,uVar205 & 0xffffffff,1,lVar192
                                   ,uVar194,pauVar196,uVar7,uVar204);
              if (iVar191 != 0) {
                uVar205 = uVar5 << 5;
                pauVar1 = pauVar196 + lVar193 * 8;
                pauVar2 = pauVar1 + uVar5 * 8 + uVar5 * 8;
                lVar202 = lVar193 + uVar5;
                pauVar197 = pauVar2 + uVar5 * 8;
                if (uVar205 == 0) {
                  pauVar197 = pauVar2;
                }
                if (uVar205 == 0) {
                  local_d8 = 0;
                  local_b8 = 0x40;
                  local_c0 = pauVar196;
                  goto LAB_0010102f;
                }
                local_d8 = 0;
                local_b8 = 0x40;
                local_f0 = pauVar196;
                do {
                  auVar10 = __LC12;
                  if ((local_b8 + -0x40 < lVar202 * 0x80 + 0x40 + lVar207) &&
                     (uVar195 = 0, lVar202 * 0x80 + lVar207 < local_b8)) {
                    do {
                      bVar3 = (*local_f0)[uVar195 * 4];
                      *(uint *)(*pauVar2 + uVar195 * 4) = (uint)bVar3;
                      uVar226 = CONCAT11((*local_f0)[uVar195 * 4 + 1],bVar3);
                      *(uint *)(*pauVar2 + uVar195 * 4) = (uint)uVar226;
                      uVar103 = CONCAT12((*local_f0)[uVar195 * 4 + 2],uVar226);
                      *(uint *)(*pauVar2 + uVar195 * 4) = (uint)uVar103;
                      *(uint *)(*pauVar2 + uVar195 * 4) =
                           CONCAT13((*local_f0)[uVar195 * 4 + 3],uVar103);
                      uVar195 = uVar195 + 1;
                      local_c0 = local_f0;
                    } while (uVar205 != uVar195);
                  }
                  else {
                    uVar195 = 0;
                    pauVar199 = local_f0;
                    pauVar203 = pauVar196 + uVar5 * 8 + lVar202 * 8;
                    do {
                      uVar195 = uVar195 + 1;
                      auVar256 = pauVar199[1];
                      auVar292 = pauVar199[1] & auVar10;
                      auVar215 = *pauVar199 & auVar10;
                      auVar298 = pauVar199[3];
                      sVar56 = auVar215._0_2_;
                      sVar57 = auVar215._2_2_;
                      bVar3 = (0 < sVar57) * (sVar57 < 0x100) * auVar215[2] - (0xff < sVar57);
                      sVar57 = auVar215._4_2_;
                      sVar58 = auVar215._6_2_;
                      cVar11 = (0 < sVar58) * (sVar58 < 0x100) * auVar215[6] - (0xff < sVar58);
                      uVar209 = CONCAT13(cVar11,CONCAT12((0 < sVar57) * (sVar57 < 0x100) *
                                                         auVar215[4] - (0xff < sVar57),
                                                         CONCAT11(bVar3,(0 < sVar56) *
                                                                        (sVar56 < 0x100) *
                                                                        auVar215[0] -
                                                                        (0xff < sVar56))));
                      sVar56 = auVar215._8_2_;
                      sVar57 = auVar215._10_2_;
                      cVar55 = (0 < sVar57) * (sVar57 < 0x100) * auVar215[10] - (0xff < sVar57);
                      uVar211 = CONCAT15(cVar55,CONCAT14((0 < sVar56) * (sVar56 < 0x100) *
                                                         auVar215[8] - (0xff < sVar56),uVar209));
                      sVar56 = auVar215._12_2_;
                      sVar57 = auVar215._14_2_;
                      cVar12 = (0 < sVar57) * (sVar57 < 0x100) * auVar215[0xe] - (0xff < sVar57);
                      uVar212 = CONCAT17(cVar12,CONCAT16((0 < sVar56) * (sVar56 < 0x100) *
                                                         auVar215[0xc] - (0xff < sVar56),uVar211));
                      sVar56 = auVar292._0_2_;
                      sVar57 = auVar292._2_2_;
                      cVar13 = (0 < sVar57) * (sVar57 < 0x100) * auVar292[2] - (0xff < sVar57);
                      auVar213._0_10_ =
                           CONCAT19(cVar13,CONCAT18((0 < sVar56) * (sVar56 < 0x100) * auVar292[0] -
                                                    (0xff < sVar56),uVar212));
                      sVar56 = auVar292._4_2_;
                      auVar213[10] = (0 < sVar56) * (sVar56 < 0x100) * auVar292[4] - (0xff < sVar56)
                      ;
                      sVar56 = auVar292._6_2_;
                      cVar14 = (0 < sVar56) * (sVar56 < 0x100) * auVar292[6] - (0xff < sVar56);
                      auVar213[0xb] = cVar14;
                      sVar56 = auVar292._8_2_;
                      auVar214[0xc] =
                           (0 < sVar56) * (sVar56 < 0x100) * auVar292[8] - (0xff < sVar56);
                      auVar214._0_12_ = auVar213;
                      sVar56 = auVar292._10_2_;
                      cVar15 = (0 < sVar56) * (sVar56 < 0x100) * auVar292[10] - (0xff < sVar56);
                      auVar214[0xd] = cVar15;
                      sVar56 = auVar292._12_2_;
                      auVar216[0xe] =
                           (0 < sVar56) * (sVar56 < 0x100) * auVar292[0xc] - (0xff < sVar56);
                      auVar216._0_14_ = auVar214;
                      sVar56 = auVar292._14_2_;
                      cVar16 = (0 < sVar56) * (sVar56 < 0x100) * auVar292[0xe] - (0xff < sVar56);
                      auVar216[0xf] = cVar16;
                      auVar215 = *pauVar199;
                      uVar250 = auVar256._0_2_ >> 8;
                      uVar260 = auVar256._2_2_ >> 8;
                      uVar261 = auVar256._4_2_ >> 8;
                      uVar262 = auVar256._6_2_ >> 8;
                      uVar263 = auVar256._8_2_ >> 8;
                      uVar264 = auVar256._10_2_ >> 8;
                      uVar265 = auVar256._12_2_ >> 8;
                      uVar266 = auVar256._14_2_ >> 8;
                      auVar292 = pauVar199[3] & auVar10;
                      uVar297 = auVar298._0_2_ >> 8;
                      uVar304 = auVar298._2_2_ >> 8;
                      uVar306 = auVar298._4_2_ >> 8;
                      uVar307 = auVar298._6_2_ >> 8;
                      uVar308 = auVar298._8_2_ >> 8;
                      uVar309 = auVar298._10_2_ >> 8;
                      uVar310 = auVar298._12_2_ >> 8;
                      uVar311 = auVar298._14_2_ >> 8;
                      auVar312 = auVar10 & auVar216;
                      uVar226 = auVar215._0_2_ >> 8;
                      uVar243 = auVar215._2_2_ >> 8;
                      uVar244 = auVar215._4_2_ >> 8;
                      uVar245 = auVar215._6_2_ >> 8;
                      uVar246 = auVar215._8_2_ >> 8;
                      uVar247 = auVar215._10_2_ >> 8;
                      uVar248 = auVar215._12_2_ >> 8;
                      uVar249 = auVar215._14_2_ >> 8;
                      uVar208 = (ushort)bVar3;
                      uVar219 = (ushort)((uint)uVar209 >> 0x18);
                      uVar220 = (ushort)((uint6)uVar211 >> 0x28);
                      uVar221 = (ushort)((ulong)uVar212 >> 0x38);
                      uVar222 = (ushort)((unkuint10)auVar213._0_10_ >> 0x48);
                      uVar223 = auVar213._10_2_ >> 8;
                      uVar224 = auVar214._12_2_ >> 8;
                      uVar225 = auVar216._14_2_ >> 8;
                      bVar17 = (uVar243 != 0) * (uVar243 < 0x100) * auVar215[3] - (0xff < uVar243);
                      cVar18 = (uVar245 != 0) * (uVar245 < 0x100) * auVar215[7] - (0xff < uVar245);
                      uVar209 = CONCAT13(cVar18,CONCAT12((uVar244 != 0) * (uVar244 < 0x100) *
                                                         auVar215[5] - (0xff < uVar244),
                                                         CONCAT11(bVar17,(uVar226 != 0) *
                                                                         (uVar226 < 0x100) *
                                                                         auVar215[1] -
                                                                         (0xff < uVar226))));
                      cVar19 = (uVar247 != 0) * (uVar247 < 0x100) * auVar215[0xb] - (0xff < uVar247)
                      ;
                      uVar211 = CONCAT15(cVar19,CONCAT14((uVar246 != 0) * (uVar246 < 0x100) *
                                                         auVar215[9] - (0xff < uVar246),uVar209));
                      cVar20 = (uVar249 != 0) * (uVar249 < 0x100) * auVar215[0xf] - (0xff < uVar249)
                      ;
                      uVar212 = CONCAT17(cVar20,CONCAT16((uVar248 != 0) * (uVar248 < 0x100) *
                                                         auVar215[0xd] - (0xff < uVar248),uVar211));
                      cVar21 = (uVar260 != 0) * (uVar260 < 0x100) * auVar256[3] - (0xff < uVar260);
                      auVar228._0_10_ =
                           CONCAT19(cVar21,CONCAT18((uVar250 != 0) * (uVar250 < 0x100) * auVar256[1]
                                                    - (0xff < uVar250),uVar212));
                      auVar228[10] = (uVar261 != 0) * (uVar261 < 0x100) * auVar256[5] -
                                     (0xff < uVar261);
                      cVar22 = (uVar262 != 0) * (uVar262 < 0x100) * auVar256[7] - (0xff < uVar262);
                      auVar228[0xb] = cVar22;
                      auVar229[0xc] =
                           (uVar263 != 0) * (uVar263 < 0x100) * auVar256[9] - (0xff < uVar263);
                      auVar229._0_12_ = auVar228;
                      cVar23 = (uVar264 != 0) * (uVar264 < 0x100) * auVar256[0xb] - (0xff < uVar264)
                      ;
                      auVar229[0xd] = cVar23;
                      auVar296[0xe] =
                           (uVar265 != 0) * (uVar265 < 0x100) * auVar256[0xd] - (0xff < uVar265);
                      auVar296._0_14_ = auVar229;
                      cVar24 = (uVar266 != 0) * (uVar266 < 0x100) * auVar256[0xf] - (0xff < uVar266)
                      ;
                      auVar296[0xf] = cVar24;
                      auVar256 = pauVar199[2] & auVar10;
                      sVar56 = auVar256._0_2_;
                      sVar57 = auVar256._2_2_;
                      bVar25 = (0 < sVar57) * (sVar57 < 0x100) * auVar256[2] - (0xff < sVar57);
                      sVar57 = auVar256._4_2_;
                      sVar58 = auVar256._6_2_;
                      cVar26 = (0 < sVar58) * (sVar58 < 0x100) * auVar256[6] - (0xff < sVar58);
                      uVar251 = CONCAT13(cVar26,CONCAT12((0 < sVar57) * (sVar57 < 0x100) *
                                                         auVar256[4] - (0xff < sVar57),
                                                         CONCAT11(bVar25,(0 < sVar56) *
                                                                         (sVar56 < 0x100) *
                                                                         auVar256[0] -
                                                                         (0xff < sVar56))));
                      sVar56 = auVar256._8_2_;
                      sVar57 = auVar256._10_2_;
                      cVar27 = (0 < sVar57) * (sVar57 < 0x100) * auVar256[10] - (0xff < sVar57);
                      uVar252 = CONCAT15(cVar27,CONCAT14((0 < sVar56) * (sVar56 < 0x100) *
                                                         auVar256[8] - (0xff < sVar56),uVar251));
                      sVar56 = auVar256._12_2_;
                      sVar57 = auVar256._14_2_;
                      cVar28 = (0 < sVar57) * (sVar57 < 0x100) * auVar256[0xe] - (0xff < sVar57);
                      uVar253 = CONCAT17(cVar28,CONCAT16((0 < sVar56) * (sVar56 < 0x100) *
                                                         auVar256[0xc] - (0xff < sVar56),uVar252));
                      sVar56 = auVar292._0_2_;
                      sVar57 = auVar292._2_2_;
                      cVar29 = (0 < sVar57) * (sVar57 < 0x100) * auVar292[2] - (0xff < sVar57);
                      auVar254._0_10_ =
                           CONCAT19(cVar29,CONCAT18((0 < sVar56) * (sVar56 < 0x100) * auVar292[0] -
                                                    (0xff < sVar56),uVar253));
                      sVar56 = auVar292._4_2_;
                      auVar254[10] = (0 < sVar56) * (sVar56 < 0x100) * auVar292[4] - (0xff < sVar56)
                      ;
                      sVar56 = auVar292._6_2_;
                      cVar30 = (0 < sVar56) * (sVar56 < 0x100) * auVar292[6] - (0xff < sVar56);
                      auVar254[0xb] = cVar30;
                      sVar56 = auVar292._8_2_;
                      auVar255[0xc] =
                           (0 < sVar56) * (sVar56 < 0x100) * auVar292[8] - (0xff < sVar56);
                      auVar255._0_12_ = auVar254;
                      sVar56 = auVar292._10_2_;
                      cVar31 = (0 < sVar56) * (sVar56 < 0x100) * auVar292[10] - (0xff < sVar56);
                      auVar255[0xd] = cVar31;
                      sVar56 = auVar292._12_2_;
                      auVar257[0xe] =
                           (0 < sVar56) * (sVar56 < 0x100) * auVar292[0xc] - (0xff < sVar56);
                      auVar257._0_14_ = auVar255;
                      sVar56 = auVar292._14_2_;
                      cVar32 = (0 < sVar56) * (sVar56 < 0x100) * auVar292[0xe] - (0xff < sVar56);
                      auVar257[0xf] = cVar32;
                      auVar256 = pauVar199[2];
                      uVar226 = auVar256._0_2_ >> 8;
                      uVar243 = auVar256._2_2_ >> 8;
                      uVar244 = auVar256._4_2_ >> 8;
                      uVar245 = auVar256._6_2_ >> 8;
                      uVar246 = auVar256._8_2_ >> 8;
                      uVar247 = auVar256._10_2_ >> 8;
                      uVar248 = auVar256._12_2_ >> 8;
                      uVar249 = auVar256._14_2_ >> 8;
                      bVar33 = (uVar243 != 0) * (uVar243 < 0x100) * auVar256[3] - (0xff < uVar243);
                      cVar34 = (uVar245 != 0) * (uVar245 < 0x100) * auVar256[7] - (0xff < uVar245);
                      uVar283 = CONCAT13(cVar34,CONCAT12((uVar244 != 0) * (uVar244 < 0x100) *
                                                         auVar256[5] - (0xff < uVar244),
                                                         CONCAT11(bVar33,(uVar226 != 0) *
                                                                         (uVar226 < 0x100) *
                                                                         auVar256[1] -
                                                                         (0xff < uVar226))));
                      cVar35 = (uVar247 != 0) * (uVar247 < 0x100) * auVar256[0xb] - (0xff < uVar247)
                      ;
                      uVar284 = CONCAT15(cVar35,CONCAT14((uVar246 != 0) * (uVar246 < 0x100) *
                                                         auVar256[9] - (0xff < uVar246),uVar283));
                      cVar36 = (uVar249 != 0) * (uVar249 < 0x100) * auVar256[0xf] - (0xff < uVar249)
                      ;
                      uVar285 = CONCAT17(cVar36,CONCAT16((uVar248 != 0) * (uVar248 < 0x100) *
                                                         auVar256[0xd] - (0xff < uVar248),uVar284));
                      cVar37 = (uVar304 != 0) * (uVar304 < 0x100) * auVar298[3] - (0xff < uVar304);
                      auVar286._0_10_ =
                           CONCAT19(cVar37,CONCAT18((uVar297 != 0) * (uVar297 < 0x100) * auVar298[1]
                                                    - (0xff < uVar297),uVar285));
                      auVar286[10] = (uVar306 != 0) * (uVar306 < 0x100) * auVar298[5] -
                                     (0xff < uVar306);
                      cVar38 = (uVar307 != 0) * (uVar307 < 0x100) * auVar298[7] - (0xff < uVar307);
                      auVar286[0xb] = cVar38;
                      auVar287[0xc] =
                           (uVar308 != 0) * (uVar308 < 0x100) * auVar298[9] - (0xff < uVar308);
                      auVar287._0_12_ = auVar286;
                      cVar39 = (uVar309 != 0) * (uVar309 < 0x100) * auVar298[0xb] - (0xff < uVar309)
                      ;
                      auVar287[0xd] = cVar39;
                      auVar288[0xe] =
                           (uVar310 != 0) * (uVar310 < 0x100) * auVar298[0xd] - (0xff < uVar310);
                      auVar288._0_14_ = auVar287;
                      cVar40 = (uVar311 != 0) * (uVar311 < 0x100) * auVar298[0xf] - (0xff < uVar311)
                      ;
                      auVar288[0xf] = cVar40;
                      auVar298 = auVar10 & auVar257;
                      uVar243 = (ushort)bVar25;
                      uVar244 = (ushort)((uint)uVar251 >> 0x18);
                      uVar245 = (ushort)((uint6)uVar252 >> 0x28);
                      uVar246 = (ushort)((ulong)uVar253 >> 0x38);
                      uVar247 = (ushort)((unkuint10)auVar254._0_10_ >> 0x48);
                      uVar261 = auVar254._10_2_ >> 8;
                      uVar262 = auVar255._12_2_ >> 8;
                      uVar263 = auVar257._14_2_ >> 8;
                      sVar56 = auVar312._0_2_;
                      sVar58 = auVar312._2_2_;
                      sVar60 = auVar312._4_2_;
                      sVar62 = auVar312._6_2_;
                      sVar64 = auVar312._8_2_;
                      sVar66 = auVar312._10_2_;
                      sVar67 = auVar312._12_2_;
                      sVar57 = auVar312._14_2_;
                      cVar41 = (0 < sVar57) * (sVar57 < 0x100) * auVar312[0xe] - (0xff < sVar57);
                      sVar57 = auVar298._0_2_;
                      bVar42 = (0 < sVar57) * (sVar57 < 0x100) * auVar298[0] - (0xff < sVar57);
                      uVar226 = CONCAT11(bVar42,cVar41);
                      sVar57 = auVar298._2_2_;
                      cVar43 = (0 < sVar57) * (sVar57 < 0x100) * auVar298[2] - (0xff < sVar57);
                      uVar168 = CONCAT12(cVar43,uVar226);
                      sVar57 = auVar298._4_2_;
                      cVar44 = (0 < sVar57) * (sVar57 < 0x100) * auVar298[4] - (0xff < sVar57);
                      uVar4 = CONCAT13(cVar44,uVar168);
                      sVar57 = auVar298._6_2_;
                      cVar45 = (0 < sVar57) * (sVar57 < 0x100) * auVar298[6] - (0xff < sVar57);
                      uVar178 = CONCAT14(cVar45,uVar4);
                      sVar57 = auVar298._8_2_;
                      cVar46 = (0 < sVar57) * (sVar57 < 0x100) * auVar298[8] - (0xff < sVar57);
                      auVar186[5] = cVar46;
                      auVar186._0_5_ = uVar178;
                      sVar70 = auVar298._10_2_;
                      sVar71 = auVar298._12_2_;
                      sVar73 = auVar298._14_2_;
                      cVar47 = (uVar225 != 0) * (uVar225 < 0x100) * cVar16 - (0xff < uVar225);
                      bVar25 = (uVar243 != 0) * (uVar243 < 0x100) * bVar25 - (0xff < uVar243);
                      uVar225 = CONCAT11(bVar25,cVar47);
                      cVar26 = (uVar244 != 0) * (uVar244 < 0x100) * cVar26 - (0xff < uVar244);
                      uVar169 = CONCAT12(cVar26,uVar225);
                      bVar48 = (uVar245 != 0) * (uVar245 < 0x100) * cVar27 - (0xff < uVar245);
                      uVar120 = CONCAT13(bVar48,uVar169);
                      cVar16 = (uVar246 != 0) * (uVar246 < 0x100) * cVar28 - (0xff < uVar246);
                      uVar179 = CONCAT14(cVar16,uVar120);
                      bVar49 = (uVar247 != 0) * (uVar247 < 0x100) * cVar29 - (0xff < uVar247);
                      auVar189[5] = bVar49;
                      auVar189._0_5_ = uVar179;
                      auVar215 = auVar10 & auVar288;
                      auVar256 = auVar10 & auVar296;
                      uVar244 = (ushort)bVar17;
                      uVar245 = (ushort)((uint)uVar209 >> 0x18);
                      uVar246 = (ushort)((uint6)uVar211 >> 0x28);
                      uVar247 = (ushort)((ulong)uVar212 >> 0x38);
                      uVar248 = (ushort)((unkuint10)auVar228._0_10_ >> 0x48);
                      uVar249 = auVar228._10_2_ >> 8;
                      uVar250 = auVar229._12_2_ >> 8;
                      uVar260 = auVar296._14_2_ >> 8;
                      sVar57 = auVar256._0_2_;
                      sVar59 = auVar256._2_2_;
                      sVar61 = auVar256._4_2_;
                      sVar63 = auVar256._6_2_;
                      sVar65 = auVar256._8_2_;
                      sVar86 = auVar256._10_2_;
                      sVar68 = auVar256._12_2_;
                      sVar69 = auVar256._14_2_;
                      cVar27 = (0 < sVar69) * (sVar69 < 0x100) * auVar256[0xe] - (0xff < sVar69);
                      sVar69 = auVar215._0_2_;
                      bVar50 = (0 < sVar69) * (sVar69 < 0x100) * auVar215[0] - (0xff < sVar69);
                      uVar243 = CONCAT11(bVar50,cVar27);
                      sVar69 = auVar215._2_2_;
                      cVar28 = (0 < sVar69) * (sVar69 < 0x100) * auVar215[2] - (0xff < sVar69);
                      uVar170 = CONCAT12(cVar28,uVar243);
                      sVar69 = auVar215._4_2_;
                      cVar29 = (0 < sVar69) * (sVar69 < 0x100) * auVar215[4] - (0xff < sVar69);
                      uVar210 = CONCAT13(cVar29,uVar170);
                      sVar69 = auVar215._6_2_;
                      cVar51 = (0 < sVar69) * (sVar69 < 0x100) * auVar215[6] - (0xff < sVar69);
                      uVar180 = CONCAT14(cVar51,uVar210);
                      sVar69 = auVar215._8_2_;
                      cVar52 = (0 < sVar69) * (sVar69 < 0x100) * auVar215[8] - (0xff < sVar69);
                      auVar187[5] = cVar52;
                      auVar187._0_5_ = uVar180;
                      sVar69 = auVar215._10_2_;
                      sVar72 = auVar215._12_2_;
                      sVar74 = auVar215._14_2_;
                      uVar264 = (ushort)bVar33;
                      uVar265 = (ushort)((uint)uVar283 >> 0x18);
                      uVar266 = (ushort)((uint6)uVar284 >> 0x28);
                      uVar297 = (ushort)((ulong)uVar285 >> 0x38);
                      uVar304 = (ushort)((unkuint10)auVar286._0_10_ >> 0x48);
                      uVar306 = auVar286._10_2_ >> 8;
                      uVar307 = auVar287._12_2_ >> 8;
                      uVar308 = auVar288._14_2_ >> 8;
                      auVar186._6_8_ = 0;
                      auVar111[0xe] = cVar41;
                      auVar111._0_14_ = auVar186 << 0x38;
                      auVar181._4_8_ = 0;
                      auVar181._0_4_ = uVar4;
                      auVar119._12_3_ =
                           (int3)(CONCAT26(auVar111._13_2_,
                                           CONCAT15((0 < sVar67) * (sVar67 < 0x100) * auVar312[0xc]
                                                    - (0xff < sVar67),uVar178)) >> 0x28);
                      auVar119._0_12_ = auVar181 << 0x38;
                      auVar138._10_5_ =
                           (int5)(CONCAT44(auVar119._11_4_,
                                           CONCAT13((0 < sVar66) * (sVar66 < 0x100) * auVar312[10] -
                                                    (0xff < sVar66),uVar168)) >> 0x18);
                      auVar138._0_10_ = (unkuint10)uVar226 << 0x38;
                      auVar147._7_8_ = 0;
                      auVar147._0_7_ =
                           (uint7)(CONCAT62(auVar138._9_6_,
                                            CONCAT11((0 < sVar64) * (sVar64 < 0x100) * auVar312[8] -
                                                     (0xff < sVar64),cVar41)) >> 8);
                      auVar171._1_8_ = SUB158(auVar147 << 0x40,7);
                      auVar171[0] = (0 < sVar62) * (sVar62 < 0x100) * auVar312[6] - (0xff < sVar62);
                      auVar171._9_6_ = 0;
                      auVar172._1_10_ = SUB1510(auVar171 << 0x30,5);
                      auVar172[0] = (0 < sVar60) * (sVar60 < 0x100) * auVar312[4] - (0xff < sVar60);
                      auVar172._11_4_ = 0;
                      auVar289._3_12_ = SUB1512(auVar172 << 0x20,3);
                      auVar289[2] = (0 < sVar58) * (sVar58 < 0x100) * auVar312[2] - (0xff < sVar58);
                      auVar289[1] = 0;
                      auVar289[0] = (0 < sVar56) * (sVar56 < 0x100) * auVar312[0] - (0xff < sVar56);
                      auVar289[0xf] = 0;
                      cVar24 = (uVar260 != 0) * (uVar260 < 0x100) * cVar24 - (0xff < uVar260);
                      bVar33 = (uVar264 != 0) * (uVar264 < 0x100) * bVar33 - (0xff < uVar264);
                      uVar226 = CONCAT11(bVar33,cVar24);
                      cVar34 = (uVar265 != 0) * (uVar265 < 0x100) * cVar34 - (0xff < uVar265);
                      uVar168 = CONCAT12(cVar34,uVar226);
                      bVar53 = (uVar266 != 0) * (uVar266 < 0x100) * cVar35 - (0xff < uVar266);
                      uVar4 = CONCAT13(bVar53,uVar168);
                      cVar35 = (uVar297 != 0) * (uVar297 < 0x100) * cVar36 - (0xff < uVar297);
                      uVar178 = CONCAT14(cVar35,uVar4);
                      bVar54 = (uVar304 != 0) * (uVar304 < 0x100) * cVar37 - (0xff < uVar304);
                      auVar188[5] = bVar54;
                      auVar188._0_5_ = uVar178;
                      auVar312[1] = 0;
                      auVar312[0] = bVar50;
                      auVar312[2] = cVar28;
                      auVar312[3] = 0;
                      auVar312[4] = cVar29;
                      auVar312[5] = 0;
                      auVar312[6] = cVar51;
                      auVar312[7] = 0;
                      auVar312[8] = cVar52;
                      auVar312[9] = 0;
                      auVar312[10] = (0 < sVar69) * (sVar69 < 0x100) * auVar215[10] -
                                     (0xff < sVar69);
                      auVar312[0xb] = 0;
                      auVar312[0xc] =
                           (0 < sVar72) * (sVar72 < 0x100) * auVar215[0xc] - (0xff < sVar72);
                      auVar312[0xd] = 0;
                      auVar312[0xe] =
                           (0 < sVar74) * (sVar74 < 0x100) * auVar215[0xe] - (0xff < sVar74);
                      auVar312[0xf] = 0;
                      auVar187._6_8_ = 0;
                      auVar104[0xe] = cVar27;
                      auVar104._0_14_ = auVar187 << 0x38;
                      auVar182._4_8_ = 0;
                      auVar182._0_4_ = uVar210;
                      auVar114._12_3_ =
                           (int3)(CONCAT26(auVar104._13_2_,
                                           CONCAT15((0 < sVar68) * (sVar68 < 0x100) * auVar256[0xc]
                                                    - (0xff < sVar68),uVar180)) >> 0x28);
                      auVar114._0_12_ = auVar182 << 0x38;
                      auVar133._10_5_ =
                           (int5)(CONCAT44(auVar114._11_4_,
                                           CONCAT13((0 < sVar86) * (sVar86 < 0x100) * auVar256[10] -
                                                    (0xff < sVar86),uVar170)) >> 0x18);
                      auVar133._0_10_ = (unkuint10)uVar243 << 0x38;
                      auVar148._7_8_ = 0;
                      auVar148._0_7_ =
                           (uint7)(CONCAT62(auVar133._9_6_,
                                            CONCAT11((0 < sVar65) * (sVar65 < 0x100) * auVar256[8] -
                                                     (0xff < sVar65),cVar27)) >> 8);
                      auVar173._1_8_ = SUB158(auVar148 << 0x40,7);
                      auVar173[0] = (0 < sVar63) * (sVar63 < 0x100) * auVar256[6] - (0xff < sVar63);
                      auVar173._9_6_ = 0;
                      auVar174._1_10_ = SUB1510(auVar173 << 0x30,5);
                      auVar174[0] = (0 < sVar61) * (sVar61 < 0x100) * auVar256[4] - (0xff < sVar61);
                      auVar174._11_4_ = 0;
                      auVar299._3_12_ = SUB1512(auVar174 << 0x20,3);
                      auVar299[2] = (0 < sVar59) * (sVar59 < 0x100) * auVar256[2] - (0xff < sVar59);
                      auVar299[1] = 0;
                      auVar299[0] = (0 < sVar57) * (sVar57 < 0x100) * auVar256[0] - (0xff < sVar57);
                      auVar299[0xf] = 0;
                      auVar256 = psllw(auVar312,8);
                      auVar215 = psllw(auVar299,8);
                      auVar188._6_8_ = 0;
                      auVar105[0xe] = cVar24;
                      auVar105._0_14_ = auVar188 << 0x38;
                      auVar183._4_8_ = 0;
                      auVar183._0_4_ = uVar4;
                      auVar115._12_3_ =
                           (int3)(CONCAT26(auVar105._13_2_,
                                           CONCAT15((uVar250 != 0) * (uVar250 < 0x100) * cVar23 -
                                                    (0xff < uVar250),uVar178)) >> 0x28);
                      auVar115._0_12_ = auVar183 << 0x38;
                      uVar4 = auVar115._11_4_;
                      uVar285 = CONCAT44(uVar4,CONCAT13((uVar249 != 0) * (uVar249 < 0x100) * cVar22
                                                        - (0xff < uVar249),uVar168));
                      auVar134._10_5_ = (int5)((ulong)uVar285 >> 0x18);
                      auVar134._0_10_ = (unkuint10)uVar226 << 0x38;
                      uVar212 = CONCAT62(auVar134._9_6_,
                                         CONCAT11((uVar248 != 0) * (uVar248 < 0x100) * cVar21 -
                                                  (0xff < uVar248),cVar24));
                      auVar149._7_8_ = 0;
                      auVar149._0_7_ = (uint7)((ulong)uVar212 >> 8);
                      Var150 = CONCAT81(SUB158(auVar149 << 0x40,7),
                                        (uVar247 != 0) * (uVar247 < 0x100) * cVar20 -
                                        (0xff < uVar247));
                      auVar175._9_6_ = 0;
                      auVar175._0_9_ = Var150;
                      auVar151._1_10_ = SUB1510(auVar175 << 0x30,5);
                      auVar151[0] = (uVar246 != 0) * (uVar246 < 0x100) * cVar19 - (0xff < uVar246);
                      auVar152._11_4_ = 0;
                      auVar152._0_11_ = auVar151;
                      auVar153._1_12_ = SUB1512(auVar152 << 0x20,3);
                      auVar153[0] = (uVar245 != 0) * (uVar245 < 0x100) * cVar18 - (0xff < uVar245);
                      auVar143[1] = 0;
                      auVar143[0] = (uVar244 != 0) * (uVar244 < 0x100) * bVar17 - (0xff < uVar244);
                      auVar143._2_13_ = auVar153;
                      uVar227 = CONCAT13(0,CONCAT12(cVar34,(ushort)bVar33));
                      auVar215 = auVar215 | auVar289;
                      auVar290[1] = 0;
                      auVar290[0] = bVar42;
                      auVar290[2] = cVar43;
                      auVar290[3] = 0;
                      auVar290[4] = cVar44;
                      auVar290[5] = 0;
                      auVar290[6] = cVar45;
                      auVar290[7] = 0;
                      auVar290[8] = cVar46;
                      auVar290[9] = 0;
                      auVar290[10] = (0 < sVar70) * (sVar70 < 0x100) * auVar298[10] -
                                     (0xff < sVar70);
                      auVar290[0xb] = 0;
                      auVar290[0xc] =
                           (0 < sVar71) * (sVar71 < 0x100) * auVar298[0xc] - (0xff < sVar71);
                      auVar290[0xd] = 0;
                      auVar290[0xe] =
                           (0 < sVar73) * (sVar73 < 0x100) * auVar298[0xe] - (0xff < sVar73);
                      auVar290[0xf] = 0;
                      auVar300._2_2_ = 0;
                      auVar300._0_2_ = auVar215._8_2_;
                      auVar300._4_2_ = auVar215._10_2_;
                      auVar300._6_2_ = 0;
                      auVar300._8_2_ = auVar215._12_2_;
                      auVar300._10_2_ = 0;
                      auVar300._12_2_ = auVar215._14_2_;
                      auVar300._14_2_ = 0;
                      auVar256 = auVar256 | auVar290;
                      uVar210 = CONCAT13(0,CONCAT12(cVar26,(ushort)bVar25));
                      auVar189._6_8_ = 0;
                      auVar106[0xe] = cVar47;
                      auVar106._0_14_ = auVar189 << 0x38;
                      auVar184._4_8_ = 0;
                      auVar184._0_4_ = uVar120;
                      auVar116._12_3_ =
                           (int3)(CONCAT26(auVar106._13_2_,
                                           CONCAT15((uVar224 != 0) * (uVar224 < 0x100) * cVar15 -
                                                    (0xff < uVar224),uVar179)) >> 0x28);
                      auVar116._0_12_ = auVar184 << 0x38;
                      uVar120 = auVar116._11_4_;
                      uVar185 = CONCAT44(uVar120,CONCAT13((uVar223 != 0) * (uVar223 < 0x100) *
                                                          cVar14 - (0xff < uVar223),uVar169));
                      auVar135._10_5_ = (int5)((ulong)uVar185 >> 0x18);
                      auVar135._0_10_ = (unkuint10)uVar225 << 0x38;
                      uVar253 = CONCAT62(auVar135._9_6_,
                                         CONCAT11((uVar222 != 0) * (uVar222 < 0x100) * cVar13 -
                                                  (0xff < uVar222),cVar47));
                      auVar154._7_8_ = 0;
                      auVar154._0_7_ = (uint7)((ulong)uVar253 >> 8);
                      Var155 = CONCAT81(SUB158(auVar154 << 0x40,7),
                                        (uVar221 != 0) * (uVar221 < 0x100) * cVar12 -
                                        (0xff < uVar221));
                      auVar176._9_6_ = 0;
                      auVar176._0_9_ = Var155;
                      auVar156._1_10_ = SUB1510(auVar176 << 0x30,5);
                      auVar156[0] = (uVar220 != 0) * (uVar220 < 0x100) * cVar55 - (0xff < uVar220);
                      auVar177._11_4_ = 0;
                      auVar177._0_11_ = auVar156;
                      auVar157._1_12_ = SUB1512(auVar177 << 0x20,3);
                      auVar157[0] = (uVar219 != 0) * (uVar219 < 0x100) * cVar11 - (0xff < uVar219);
                      auVar144[1] = 0;
                      auVar144[0] = (uVar208 != 0) * (uVar208 < 0x100) * bVar3 - (0xff < uVar208);
                      auVar144._2_13_ = auVar157;
                      auVar107._10_2_ = 0;
                      auVar107._0_10_ = auVar215._0_10_;
                      auVar107._12_2_ = auVar215._6_2_;
                      auVar112._8_2_ = auVar215._4_2_;
                      auVar112._0_8_ = auVar215._0_8_;
                      auVar112._10_4_ = auVar107._10_4_;
                      auVar158._6_8_ = 0;
                      auVar158._0_6_ = auVar112._8_6_;
                      auVar121._4_2_ = auVar215._2_2_;
                      auVar121._0_4_ = auVar215._0_4_;
                      auVar121._6_8_ = SUB148(auVar158 << 0x40,6);
                      auVar315._0_4_ = auVar215._0_4_ & 0xffff;
                      auVar315._4_10_ = auVar121._4_10_;
                      auVar315._14_2_ = 0;
                      auVar298._2_4_ = (uint)(ushort)((ulong)uVar185 >> 0x18) << 0x10;
                      auVar298._0_2_ = (short)((ulong)uVar253 >> 8);
                      auVar298._6_4_ = (uVar120 >> 8) << 0x10;
                      auVar298._10_4_ = (uVar120 >> 0x18) << 0x10;
                      auVar298._14_2_ = 0;
                      auVar108._10_2_ = 0;
                      auVar108._0_10_ = auVar144._0_10_;
                      auVar108._12_2_ = (short)Var155;
                      uVar190 = CONCAT42(auVar108._10_4_,auVar156._0_2_);
                      auVar159._6_8_ = 0;
                      auVar159._0_6_ = uVar190;
                      auVar122._4_2_ = auVar157._0_2_;
                      auVar122._0_4_ = auVar144._0_4_;
                      auVar122._6_8_ = SUB148(auVar159 << 0x40,6);
                      auVar313._0_4_ = auVar144._0_4_ << 0x10;
                      auVar313._4_4_ = auVar122._4_4_ << 0x10;
                      auVar313._8_4_ = (int)uVar190 << 0x10;
                      auVar313._12_4_ = auVar108._10_4_ & 0xffff0000;
                      auVar301._0_4_ = (uint)(ushort)((ulong)uVar212 >> 8) << 0x18;
                      auVar301._4_4_ = (uint)(ushort)((ulong)uVar285 >> 0x18) << 0x18;
                      auVar301._8_4_ = (uVar4 >> 8) << 0x18;
                      auVar301._12_4_ = uVar4 & 0xff000000;
                      auVar109._10_2_ = 0;
                      auVar109._0_10_ = auVar143._0_10_;
                      auVar109._12_2_ = (short)Var150;
                      uVar190 = CONCAT42(auVar109._10_4_,auVar151._0_2_);
                      auVar160._6_8_ = 0;
                      auVar160._0_6_ = uVar190;
                      auVar123._4_2_ = auVar153._0_2_;
                      auVar123._0_4_ = auVar143._0_4_;
                      auVar123._6_8_ = SUB148(auVar160 << 0x40,6);
                      auVar316._0_4_ = auVar143._0_4_ << 0x18;
                      auVar316._4_4_ = auVar123._4_4_ << 0x18;
                      auVar316._8_4_ = (int)uVar190 << 0x18;
                      auVar316._12_4_ = (auVar109._10_4_ >> 0x10) << 0x18;
                      pauVar203[1] = auVar298 << 0x10 | auVar300 | auVar301;
                      auVar110._10_2_ = 0;
                      auVar110._0_10_ = auVar256._0_10_;
                      auVar110._12_2_ = auVar256._6_2_;
                      auVar113._8_2_ = auVar256._4_2_;
                      auVar113._0_8_ = auVar256._0_8_;
                      auVar113._10_4_ = auVar110._10_4_;
                      auVar161._6_8_ = 0;
                      auVar161._0_6_ = auVar113._8_6_;
                      auVar124._4_2_ = auVar256._2_2_;
                      auVar124._0_4_ = auVar256._0_4_;
                      auVar124._6_8_ = SUB148(auVar161 << 0x40,6);
                      auVar302._0_4_ = auVar256._0_4_ & 0xffff;
                      auVar302._4_10_ = auVar124._4_10_;
                      auVar302._14_2_ = 0;
                      auVar125[0xc] = cVar16;
                      auVar125._0_12_ = ZEXT112(bVar49) << 0x40;
                      auVar126._10_3_ = auVar125._10_3_;
                      auVar126._0_10_ = (unkuint10)bVar48 << 0x40;
                      auVar162._5_8_ = 0;
                      auVar162._0_5_ = auVar126._8_5_;
                      auVar127[4] = cVar26;
                      auVar127._0_4_ = uVar210;
                      auVar127[5] = 0;
                      auVar127._6_7_ = SUB137(auVar162 << 0x40,6);
                      auVar292._0_4_ = (uint)bVar49 << 0x10;
                      auVar292._4_4_ =
                           (uint)(byte)((uVar261 != 0) * (uVar261 < 0x100) * cVar30 -
                                       (0xff < uVar261)) << 0x10;
                      auVar292._8_4_ =
                           (uint)(byte)((uVar262 != 0) * (uVar262 < 0x100) * cVar31 -
                                       (0xff < uVar262)) << 0x10;
                      auVar292._12_4_ =
                           (uint)(byte)((uVar263 != 0) * (uVar263 < 0x100) * cVar32 -
                                       (0xff < uVar263)) << 0x10;
                      auVar258._2_2_ = 0;
                      auVar258._0_2_ = auVar256._8_2_;
                      auVar258._4_2_ = auVar256._10_2_;
                      auVar258._6_2_ = 0;
                      auVar258._8_2_ = auVar256._12_2_;
                      auVar258._10_2_ = 0;
                      auVar258._12_2_ = auVar256._14_2_;
                      auVar258._14_2_ = 0;
                      auVar291._0_4_ = uVar210 << 0x10;
                      auVar291._4_4_ = auVar127._4_4_ << 0x10;
                      auVar291._8_4_ = auVar126._8_4_ << 0x10;
                      auVar291._12_4_ = (uint)(uint3)(auVar125._10_3_ >> 0x10) << 0x10;
                      *pauVar203 = auVar313 | auVar315 | auVar316;
                      auVar128[0xc] = cVar35;
                      auVar128._0_12_ = ZEXT112(bVar54) << 0x40;
                      auVar129._10_3_ = auVar128._10_3_;
                      auVar129._0_10_ = (unkuint10)bVar53 << 0x40;
                      auVar163._5_8_ = 0;
                      auVar163._0_5_ = auVar129._8_5_;
                      auVar130[4] = cVar34;
                      auVar130._0_4_ = uVar227;
                      auVar130[5] = 0;
                      auVar130._6_7_ = SUB137(auVar163 << 0x40,6);
                      auVar215._1_4_ =
                           (uint)(byte)((uVar306 != 0) * (uVar306 < 0x100) * cVar38 -
                                       (0xff < uVar306)) << 0x18;
                      auVar215[0] = bVar54;
                      auVar215._5_4_ =
                           (uint)(byte)((uVar307 != 0) * (uVar307 < 0x100) * cVar39 -
                                       (0xff < uVar307)) << 0x18;
                      auVar215._9_4_ =
                           (uint)(byte)((uVar308 != 0) * (uVar308 < 0x100) * cVar40 -
                                       (0xff < uVar308)) << 0x18;
                      auVar215._13_3_ = 0;
                      auVar303._0_4_ = uVar227 << 0x18;
                      auVar303._4_4_ = auVar130._4_4_ << 0x18;
                      auVar303._8_4_ = auVar129._8_4_ << 0x18;
                      auVar303._12_4_ = (uint)(uint3)(auVar128._10_3_ >> 0x10) << 0x18;
                      pauVar203[3] = auVar292 | auVar258 | auVar215 << 0x18;
                      pauVar203[2] = auVar291 | auVar302 | auVar303;
                      pauVar199 = pauVar199 + 4;
                      pauVar203 = pauVar203 + 4;
                      local_c0 = local_f0;
                    } while (uVar195 != uVar205 >> 4);
                  }
LAB_0010102f:
                  while( true ) {
                    uVar195 = 1;
                    pauVar199 = pauVar197;
                    do {
                      uVar195 = uVar195 + 1;
                      scryptBlockMix(pauVar199,pauVar199 + uVar5 * -8,uVar5);
                      pauVar199 = pauVar199 + uVar5 * 8;
                    } while (uVar195 < uVar8);
                    scryptBlockMix(pauVar1,*pauVar2 + (uVar8 - 1) * lVar207,uVar5);
                    uVar195 = 0;
                    do {
                      uVar4 = *(uint *)pauVar1[uVar5 * 8 + -4];
                      if (uVar205 != 0) {
                        lVar198 = 0;
                        do {
                          uVar146 = *(ulong *)((long)(*pauVar1 + lVar198) + 8);
                          uVar145 = *(ulong *)((long)(pauVar196[uVar5 * 8 +
                                                                (((ulong)uVar4 % uVar8) * uVar5 +
                                                                lVar202) * 8] + lVar198) + 8);
                          *(ulong *)(pauVar196[lVar202 * 8] + lVar198) =
                               *(ulong *)(*pauVar1 + lVar198) ^
                               *(ulong *)(pauVar196[uVar5 * 8 +
                                                    (((ulong)uVar4 % uVar8) * uVar5 + lVar202) * 8]
                                         + lVar198);
                          *(ulong *)((long)(pauVar196[lVar202 * 8] + lVar198) + 8) =
                               uVar146 ^ uVar145;
                          lVar198 = lVar198 + 0x10;
                        } while (lVar198 != uVar5 << 7);
                      }
                      uVar195 = uVar195 + 1;
                      scryptBlockMix(pauVar1,pauVar1 + uVar5 * 8,uVar5);
                      auVar10 = __LC12;
                    } while (uVar195 < uVar8);
                    if (uVar205 != 0) break;
                    local_d8 = local_d8 + 1;
                    local_c0 = local_c0 + uVar5 * 8;
                    local_b8 = local_b8 + lVar207;
                    if (uVar6 <= local_d8) goto LAB_00101197;
                  }
                  uVar195 = 0;
                  if ((ulong)((long)local_c0 + (lVar193 * -0x80 - (long)pauVar196) + -1) < 0x3f) {
                    do {
                      *(undefined4 *)(*local_c0 + uVar195 * 4) =
                           *(undefined4 *)(*pauVar1 + uVar195 * 4);
                      uVar195 = uVar195 + 1;
                    } while (uVar205 != uVar195);
                  }
                  else {
                    pauVar199 = local_c0;
                    pauVar203 = pauVar1;
                    do {
                      auVar256 = *pauVar203;
                      auVar298 = pauVar203[1];
                      pauVar200 = pauVar199 + 4;
                      auVar215 = pauVar203[2];
                      auVar216 = pauVar203[3];
                      auVar233._0_12_ = auVar256._0_12_;
                      auVar233._12_2_ = auVar256._6_2_;
                      auVar233._14_2_ = auVar298._6_2_;
                      auVar232._12_4_ = auVar233._12_4_;
                      auVar232._0_10_ = auVar256._0_10_;
                      uVar219 = auVar298._4_2_;
                      auVar232._10_2_ = uVar219;
                      uVar226 = auVar256._4_2_;
                      auVar231._10_6_ = auVar232._10_6_;
                      auVar231._0_8_ = auVar256._0_8_;
                      auVar231._8_2_ = uVar226;
                      uVar314 = auVar298._2_2_;
                      auVar164._2_8_ = auVar231._8_8_;
                      auVar164._0_2_ = uVar314;
                      auVar164._10_6_ = 0;
                      auVar238._0_2_ = auVar256._0_2_;
                      auVar230._12_4_ = 0;
                      auVar230._0_12_ = SUB1612(auVar164 << 0x30,4);
                      auVar230 = auVar230 << 0x20;
                      uVar221 = auVar298._8_2_;
                      uVar222 = auVar298._10_2_;
                      auVar237._0_12_ = auVar230._0_12_;
                      auVar237._12_2_ = uVar314;
                      auVar237._14_2_ = uVar222;
                      auVar236._12_4_ = auVar237._12_4_;
                      auVar236._0_10_ = auVar230._0_10_;
                      auVar236._10_2_ = auVar256._10_2_;
                      auVar235._10_6_ = auVar236._10_6_;
                      auVar235._0_8_ = auVar230._0_8_;
                      auVar235._8_2_ = auVar256._2_2_;
                      auVar165._2_8_ = auVar235._8_8_;
                      auVar165._0_2_ = uVar221;
                      auVar165._10_6_ = 0;
                      auVar234._12_4_ = 0;
                      auVar234._0_12_ = SUB1612(auVar165 << 0x30,4);
                      auVar234 = auVar234 << 0x20;
                      auVar241._0_12_ = auVar234._0_12_;
                      auVar241._12_2_ = uVar221;
                      auVar241._14_2_ = auVar298._12_2_;
                      auVar240._12_4_ = auVar241._12_4_;
                      auVar240._0_10_ = auVar234._0_10_;
                      auVar240._10_2_ = uVar219;
                      auVar239._10_6_ = auVar240._10_6_;
                      auVar239._0_8_ = auVar234._0_8_;
                      auVar239._8_2_ = auVar298._0_2_;
                      auVar238._8_8_ = auVar239._8_8_;
                      auVar238._6_2_ = auVar256._12_2_;
                      auVar238._4_2_ = auVar256._8_2_;
                      auVar238._2_2_ = uVar226;
                      auVar270._0_12_ = auVar215._0_12_;
                      auVar270._12_2_ = auVar215._6_2_;
                      auVar270._14_2_ = auVar216._6_2_;
                      auVar269._12_4_ = auVar270._12_4_;
                      auVar269._0_10_ = auVar215._0_10_;
                      uVar243 = auVar216._4_2_;
                      auVar269._10_2_ = uVar243;
                      uVar225 = auVar215._4_2_;
                      auVar268._10_6_ = auVar269._10_6_;
                      auVar268._0_8_ = auVar215._0_8_;
                      auVar268._8_2_ = uVar225;
                      uVar305 = auVar216._2_2_;
                      auVar166._2_8_ = auVar268._8_8_;
                      auVar166._0_2_ = uVar305;
                      auVar166._10_6_ = 0;
                      auVar275._0_2_ = auVar215._0_2_;
                      auVar267._12_4_ = 0;
                      auVar267._0_12_ = SUB1612(auVar166 << 0x30,4);
                      auVar267 = auVar267 << 0x20;
                      uVar208 = auVar216._8_2_;
                      uVar220 = auVar216._10_2_;
                      auVar274._0_12_ = auVar267._0_12_;
                      auVar274._12_2_ = uVar305;
                      auVar274._14_2_ = uVar220;
                      auVar273._12_4_ = auVar274._12_4_;
                      auVar273._0_10_ = auVar267._0_10_;
                      auVar273._10_2_ = auVar215._10_2_;
                      auVar272._10_6_ = auVar273._10_6_;
                      auVar272._0_8_ = auVar267._0_8_;
                      auVar272._8_2_ = auVar215._2_2_;
                      auVar167._2_8_ = auVar272._8_8_;
                      auVar167._0_2_ = uVar208;
                      auVar167._10_6_ = 0;
                      auVar271._12_4_ = 0;
                      auVar271._0_12_ = SUB1612(auVar167 << 0x30,4);
                      auVar271 = auVar271 << 0x20;
                      auVar278._0_12_ = auVar271._0_12_;
                      auVar278._12_2_ = uVar208;
                      auVar278._14_2_ = auVar216._12_2_;
                      auVar277._12_4_ = auVar278._12_4_;
                      auVar277._0_10_ = auVar271._0_10_;
                      auVar277._10_2_ = uVar243;
                      auVar276._10_6_ = auVar277._10_6_;
                      auVar276._0_8_ = auVar271._0_8_;
                      auVar276._8_2_ = auVar216._0_2_;
                      auVar275._8_8_ = auVar276._8_8_;
                      auVar275._6_2_ = auVar215._12_2_;
                      auVar275._4_2_ = auVar215._8_2_;
                      auVar275._2_2_ = uVar225;
                      auVar292 = auVar10 & auVar275;
                      auVar279._0_2_ = auVar275._0_2_ >> 8;
                      auVar279._2_2_ = uVar225 >> 8;
                      auVar279._4_2_ = auVar215._8_2_ >> 8;
                      auVar279._6_2_ = auVar215._12_2_ >> 8;
                      auVar279._8_2_ = auVar216._0_2_ >> 8;
                      auVar279._10_2_ = uVar243 >> 8;
                      auVar279._12_2_ = uVar208 >> 8;
                      auVar279._14_2_ = auVar216._12_2_ >> 8;
                      auVar296 = auVar10 & auVar238;
                      sVar56 = auVar296._0_2_;
                      sVar58 = auVar296._2_2_;
                      sVar60 = auVar296._4_2_;
                      sVar62 = auVar296._6_2_;
                      sVar64 = auVar296._8_2_;
                      sVar67 = auVar296._10_2_;
                      sVar71 = auVar296._12_2_;
                      sVar75 = auVar296._14_2_;
                      sVar79 = auVar292._0_2_;
                      sVar81 = auVar292._2_2_;
                      sVar83 = auVar292._4_2_;
                      sVar85 = auVar292._6_2_;
                      sVar87 = auVar292._8_2_;
                      sVar91 = auVar292._10_2_;
                      sVar95 = auVar292._12_2_;
                      sVar99 = auVar292._14_2_;
                      auVar242._0_2_ = auVar238._0_2_ >> 8;
                      auVar242._2_2_ = uVar226 >> 8;
                      auVar242._4_2_ = auVar256._8_2_ >> 8;
                      auVar242._6_2_ = auVar256._12_2_ >> 8;
                      auVar242._8_2_ = auVar298._0_2_ >> 8;
                      auVar242._10_2_ = uVar219 >> 8;
                      auVar242._12_2_ = uVar221 >> 8;
                      auVar242._14_2_ = auVar298._12_2_ >> 8;
                      auVar279 = auVar279 & auVar10;
                      auVar242 = auVar242 & auVar10;
                      uVar226 = auVar242._0_2_;
                      uVar243 = auVar242._2_2_;
                      uVar219 = auVar242._4_2_;
                      uVar221 = auVar242._6_2_;
                      sVar65 = auVar242._8_2_;
                      sVar68 = auVar242._10_2_;
                      sVar72 = auVar242._12_2_;
                      sVar76 = auVar242._14_2_;
                      uVar223 = auVar279._0_2_;
                      uVar244 = auVar279._2_2_;
                      uVar246 = auVar279._4_2_;
                      uVar248 = auVar279._6_2_;
                      sVar88 = auVar279._8_2_;
                      sVar92 = auVar279._10_2_;
                      sVar96 = auVar279._12_2_;
                      sVar100 = auVar279._14_2_;
                      auVar294._0_12_ = ZEXT212(uVar222) << 0x30;
                      auVar294._12_2_ = uVar222;
                      auVar294._14_2_ = auVar298._14_2_;
                      auVar293._12_4_ = auVar294._12_4_;
                      auVar293._0_10_ = (unkuint10)uVar222 << 0x30;
                      auVar293._10_2_ = auVar298._6_2_;
                      auVar295._8_8_ =
                           (undefined8)(CONCAT64(auVar293._10_6_,CONCAT22(uVar314,uVar222)) >> 0x10)
                      ;
                      auVar295._6_2_ = auVar256._14_2_;
                      auVar295._4_2_ = auVar256._10_2_;
                      auVar295._2_2_ = auVar256._6_2_;
                      auVar295._0_2_ = auVar256._2_2_;
                      auVar295 = auVar295 & auVar10;
                      auVar281._0_12_ = ZEXT212(uVar220) << 0x30;
                      auVar281._12_2_ = uVar220;
                      auVar281._14_2_ = auVar216._14_2_;
                      auVar280._12_4_ = auVar281._12_4_;
                      auVar280._0_10_ = (unkuint10)uVar220 << 0x30;
                      auVar280._10_2_ = auVar216._6_2_;
                      auVar282._8_8_ =
                           (undefined8)(CONCAT64(auVar280._10_6_,CONCAT22(uVar305,uVar220)) >> 0x10)
                      ;
                      auVar282._6_2_ = auVar215._14_2_;
                      auVar282._4_2_ = auVar215._10_2_;
                      auVar282._2_2_ = auVar215._6_2_;
                      auVar282._0_2_ = auVar215._2_2_;
                      auVar282 = auVar282 & auVar10;
                      sVar57 = auVar295._0_2_;
                      sVar59 = auVar295._2_2_;
                      sVar61 = auVar295._4_2_;
                      sVar63 = auVar295._6_2_;
                      sVar66 = auVar295._8_2_;
                      sVar69 = auVar295._10_2_;
                      sVar73 = auVar295._12_2_;
                      sVar77 = auVar295._14_2_;
                      sVar80 = auVar282._0_2_;
                      sVar82 = auVar282._2_2_;
                      sVar84 = auVar282._4_2_;
                      sVar86 = auVar282._6_2_;
                      cVar55 = (0 < sVar86) * (sVar86 < 0x100) * auVar282[6] - (0xff < sVar86);
                      sVar89 = auVar282._8_2_;
                      sVar93 = auVar282._10_2_;
                      sVar97 = auVar282._12_2_;
                      sVar101 = auVar282._14_2_;
                      auVar217[1] = 0;
                      auVar217[0] = auVar256[3];
                      auVar259[1] = 0;
                      auVar259[0] = auVar215[3];
                      auVar117[0xc] = auVar298[0xb];
                      auVar117._0_12_ = ZEXT712(0);
                      auVar117[0xd] = 0;
                      auVar117[0xe] = auVar298[0xf];
                      auVar131[10] = auVar298[7];
                      auVar131._0_10_ = (unkuint10)0;
                      auVar131[0xb] = 0;
                      auVar131._12_3_ = auVar117._12_3_;
                      auVar136._10_5_ = auVar131._10_5_;
                      auVar136._0_10_ = (unkuint10)auVar298[3] << 0x40;
                      auVar139._8_7_ = auVar136._8_7_;
                      auVar139._0_8_ = (ulong)auVar256[0xf] << 0x30;
                      auVar141._6_9_ = auVar139._6_9_;
                      auVar141._0_6_ = (uint6)auVar256[0xb] << 0x20;
                      auVar217[2] = auVar256[7];
                      auVar217[3] = 0;
                      auVar217._4_11_ = auVar141._4_11_;
                      auVar217[0xf] = 0;
                      auVar217 = auVar217 & auVar10;
                      auVar118[0xc] = auVar216[0xb];
                      auVar118._0_12_ = ZEXT712(0);
                      auVar118[0xd] = 0;
                      auVar118[0xe] = auVar216[0xf];
                      auVar132[10] = auVar216[7];
                      auVar132._0_10_ = (unkuint10)0;
                      auVar132[0xb] = 0;
                      auVar132._12_3_ = auVar118._12_3_;
                      auVar137._10_5_ = auVar132._10_5_;
                      auVar137._0_10_ = (unkuint10)auVar216[3] << 0x40;
                      auVar140._8_7_ = auVar137._8_7_;
                      auVar140._0_8_ = (ulong)auVar215[0xf] << 0x30;
                      auVar142._6_9_ = auVar140._6_9_;
                      auVar142._0_6_ = (uint6)auVar215[0xb] << 0x20;
                      auVar259[2] = auVar215[7];
                      auVar259[3] = 0;
                      auVar259._4_11_ = auVar142._4_11_;
                      auVar259[0xf] = 0;
                      auVar259 = auVar259 & auVar10;
                      uVar225 = auVar217._0_2_;
                      uVar208 = auVar217._2_2_;
                      uVar220 = auVar217._4_2_;
                      uVar222 = auVar217._6_2_;
                      sVar86 = auVar217._8_2_;
                      sVar70 = auVar217._10_2_;
                      sVar74 = auVar217._12_2_;
                      sVar78 = auVar217._14_2_;
                      uVar224 = auVar259._0_2_;
                      uVar245 = auVar259._2_2_;
                      uVar247 = auVar259._4_2_;
                      uVar249 = auVar259._6_2_;
                      sVar90 = auVar259._8_2_;
                      sVar94 = auVar259._10_2_;
                      sVar98 = auVar259._12_2_;
                      sVar102 = auVar259._14_2_;
                      pauVar199[1][0] =
                           (0 < sVar64) * (sVar64 < 0x100) * auVar296[8] - (0xff < sVar64);
                      pauVar199[1][1] =
                           (0 < sVar65) * (sVar65 < 0x100) * auVar242[8] - (0xff < sVar65);
                      pauVar199[1][2] =
                           (0 < sVar66) * (sVar66 < 0x100) * auVar295[8] - (0xff < sVar66);
                      pauVar199[1][3] =
                           (0 < sVar86) * (sVar86 < 0x100) * auVar217[8] - (0xff < sVar86);
                      pauVar199[1][4] =
                           (0 < sVar67) * (sVar67 < 0x100) * auVar296[10] - (0xff < sVar67);
                      pauVar199[1][5] =
                           (0 < sVar68) * (sVar68 < 0x100) * auVar242[10] - (0xff < sVar68);
                      pauVar199[1][6] =
                           (0 < sVar69) * (sVar69 < 0x100) * auVar295[10] - (0xff < sVar69);
                      pauVar199[1][7] =
                           (0 < sVar70) * (sVar70 < 0x100) * auVar217[10] - (0xff < sVar70);
                      pauVar199[1][8] =
                           (0 < sVar71) * (sVar71 < 0x100) * auVar296[0xc] - (0xff < sVar71);
                      pauVar199[1][9] =
                           (0 < sVar72) * (sVar72 < 0x100) * auVar242[0xc] - (0xff < sVar72);
                      pauVar199[1][10] =
                           (0 < sVar73) * (sVar73 < 0x100) * auVar295[0xc] - (0xff < sVar73);
                      pauVar199[1][0xb] =
                           (0 < sVar74) * (sVar74 < 0x100) * auVar217[0xc] - (0xff < sVar74);
                      pauVar199[1][0xc] =
                           (0 < sVar75) * (sVar75 < 0x100) * auVar296[0xe] - (0xff < sVar75);
                      pauVar199[1][0xd] =
                           (0 < sVar76) * (sVar76 < 0x100) * auVar242[0xe] - (0xff < sVar76);
                      pauVar199[1][0xe] =
                           (0 < sVar77) * (sVar77 < 0x100) * auVar295[0xe] - (0xff < sVar77);
                      pauVar199[1][0xf] =
                           (0 < sVar78) * (sVar78 < 0x100) * auVar217[0xe] - (0xff < sVar78);
                      (*pauVar199)[0] =
                           (0 < sVar56) * (sVar56 < 0x100) * auVar296[0] - (0xff < sVar56);
                      (*pauVar199)[1] =
                           (uVar226 != 0) * (uVar226 < 0x100) * auVar242[0] - (0xff < uVar226);
                      (*pauVar199)[2] =
                           (0 < sVar57) * (sVar57 < 0x100) * auVar295[0] - (0xff < sVar57);
                      (*pauVar199)[3] =
                           (uVar225 != 0) * (uVar225 < 0x100) * auVar217[0] - (0xff < uVar225);
                      (*pauVar199)[4] =
                           (0 < sVar58) * (sVar58 < 0x100) * auVar296[2] - (0xff < sVar58);
                      (*pauVar199)[5] =
                           (uVar243 != 0) * (uVar243 < 0x100) * auVar242[2] - (0xff < uVar243);
                      (*pauVar199)[6] =
                           (0 < sVar59) * (sVar59 < 0x100) * auVar295[2] - (0xff < sVar59);
                      (*pauVar199)[7] =
                           (uVar208 != 0) * (uVar208 < 0x100) * auVar217[2] - (0xff < uVar208);
                      (*pauVar199)[8] =
                           (0 < sVar60) * (sVar60 < 0x100) * auVar296[4] - (0xff < sVar60);
                      (*pauVar199)[9] =
                           (uVar219 != 0) * (uVar219 < 0x100) * auVar242[4] - (0xff < uVar219);
                      (*pauVar199)[10] =
                           (0 < sVar61) * (sVar61 < 0x100) * auVar295[4] - (0xff < sVar61);
                      (*pauVar199)[0xb] =
                           (uVar220 != 0) * (uVar220 < 0x100) * auVar217[4] - (0xff < uVar220);
                      (*pauVar199)[0xc] =
                           (0 < sVar62) * (sVar62 < 0x100) * auVar296[6] - (0xff < sVar62);
                      (*pauVar199)[0xd] =
                           (uVar221 != 0) * (uVar221 < 0x100) * auVar242[6] - (0xff < uVar221);
                      (*pauVar199)[0xe] =
                           (0 < sVar63) * (sVar63 < 0x100) * auVar295[6] - (0xff < sVar63);
                      (*pauVar199)[0xf] =
                           (uVar222 != 0) * (uVar222 < 0x100) * auVar217[6] - (0xff < uVar222);
                      auVar218._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((uVar249 
                                                  != 0) * (uVar249 < 0x100) * auVar259[6] -
                                                  (0xff < uVar249),cVar55),
                                                  (uVar248 != 0) * (uVar248 < 0x100) * auVar279[6] -
                                                  (0xff < uVar248)),
                                                  (0 < sVar85) * (sVar85 < 0x100) * auVar292[6] -
                                                  (0xff < sVar85)),
                                                  (uVar247 != 0) * (uVar247 < 0x100) * auVar259[4] -
                                                  (0xff < uVar247)),
                                                  (0 < sVar84) * (sVar84 < 0x100) * auVar282[4] -
                                                  (0xff < sVar84)),
                                              (uVar246 != 0) * (uVar246 < 0x100) * auVar279[4] -
                                              (0xff < uVar246)),
                                     CONCAT11((0 < sVar83) * (sVar83 < 0x100) * auVar292[4] -
                                              (0xff < sVar83),cVar55)) >> 8);
                      auVar218[7] = (uVar245 != 0) * (uVar245 < 0x100) * auVar259[2] -
                                    (0xff < uVar245);
                      auVar218[6] = (0 < sVar82) * (sVar82 < 0x100) * auVar282[2] - (0xff < sVar82);
                      auVar218[5] = (uVar244 != 0) * (uVar244 < 0x100) * auVar279[2] -
                                    (0xff < uVar244);
                      auVar218[4] = (0 < sVar81) * (sVar81 < 0x100) * auVar292[2] - (0xff < sVar81);
                      auVar218[3] = (uVar224 != 0) * (uVar224 < 0x100) * auVar259[0] -
                                    (0xff < uVar224);
                      auVar218[2] = (0 < sVar80) * (sVar80 < 0x100) * auVar282[0] - (0xff < sVar80);
                      auVar218[1] = (uVar223 != 0) * (uVar223 < 0x100) * auVar279[0] -
                                    (0xff < uVar223);
                      auVar218[0] = (0 < sVar79) * (sVar79 < 0x100) * auVar292[0] - (0xff < sVar79);
                      pauVar199[3][0] =
                           (0 < sVar87) * (sVar87 < 0x100) * auVar292[8] - (0xff < sVar87);
                      pauVar199[3][1] =
                           (0 < sVar88) * (sVar88 < 0x100) * auVar279[8] - (0xff < sVar88);
                      pauVar199[3][2] =
                           (0 < sVar89) * (sVar89 < 0x100) * auVar282[8] - (0xff < sVar89);
                      pauVar199[3][3] =
                           (0 < sVar90) * (sVar90 < 0x100) * auVar259[8] - (0xff < sVar90);
                      pauVar199[3][4] =
                           (0 < sVar91) * (sVar91 < 0x100) * auVar292[10] - (0xff < sVar91);
                      pauVar199[3][5] =
                           (0 < sVar92) * (sVar92 < 0x100) * auVar279[10] - (0xff < sVar92);
                      pauVar199[3][6] =
                           (0 < sVar93) * (sVar93 < 0x100) * auVar282[10] - (0xff < sVar93);
                      pauVar199[3][7] =
                           (0 < sVar94) * (sVar94 < 0x100) * auVar259[10] - (0xff < sVar94);
                      pauVar199[3][8] =
                           (0 < sVar95) * (sVar95 < 0x100) * auVar292[0xc] - (0xff < sVar95);
                      pauVar199[3][9] =
                           (0 < sVar96) * (sVar96 < 0x100) * auVar279[0xc] - (0xff < sVar96);
                      pauVar199[3][10] =
                           (0 < sVar97) * (sVar97 < 0x100) * auVar282[0xc] - (0xff < sVar97);
                      pauVar199[3][0xb] =
                           (0 < sVar98) * (sVar98 < 0x100) * auVar259[0xc] - (0xff < sVar98);
                      pauVar199[3][0xc] =
                           (0 < sVar99) * (sVar99 < 0x100) * auVar292[0xe] - (0xff < sVar99);
                      pauVar199[3][0xd] =
                           (0 < sVar100) * (sVar100 < 0x100) * auVar279[0xe] - (0xff < sVar100);
                      pauVar199[3][0xe] =
                           (0 < sVar101) * (sVar101 < 0x100) * auVar282[0xe] - (0xff < sVar101);
                      pauVar199[3][0xf] =
                           (0 < sVar102) * (sVar102 < 0x100) * auVar259[0xe] - (0xff < sVar102);
                      pauVar199[2] = auVar218;
                      pauVar199 = pauVar200;
                      pauVar203 = pauVar203 + 4;
                    } while (pauVar200 != local_c0 + uVar5 * 8);
                  }
                  local_d8 = local_d8 + 1;
                  local_b8 = local_b8 + lVar207;
                  local_f0 = local_c0 + uVar5 * 8;
                } while (local_d8 < uVar6);
LAB_00101197:
                iVar191 = ossl_pkcs5_pbkdf2_hmac_ex
                                    (lVar206,(int)uVar9,pauVar196,(int)uVar194,1,lVar192,param_3,
                                     param_2,uVar7,uVar204);
                if (iVar191 != 0) {
                  uVar209 = 1;
                  goto LAB_001011d3;
                }
              }
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/scrypt.c",0x21f,"scrypt_alg");
              ERR_set_error(6,0xb5,0);
              uVar209 = 0;
LAB_001011d3:
              CRYPTO_clear_free(pauVar196,uVar201,"providers/implementations/kdfs/scrypt.c",0x221);
              return uVar209;
            }
            ERR_new();
            uVar204 = 0x204;
          }
        }
      }
      else {
        ERR_new();
        uVar204 = 0x1ea;
      }
    }
    ERR_set_debug("providers/implementations/kdfs/scrypt.c",uVar204,"scrypt_alg");
    ERR_set_error(6,0xac,0);
  }
  return 0;
}


