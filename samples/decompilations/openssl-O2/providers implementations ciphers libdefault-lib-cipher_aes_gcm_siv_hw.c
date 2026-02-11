
void aes_gcm_siv_clean_ctx(undefined8 *param_1)

{
  EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*param_1);
  *param_1 = 0;
  return;
}



byte aes_gcm_siv_ctr32(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                      ulong param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uchar *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uchar local_58 [24];
  long local_40;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
    bVar1 = 1;
  }
  else {
    uVar6 = 0;
    bVar1 = 0;
    puVar5 = local_58;
    do {
      local_6c = 0x10;
      iVar2 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,local_58,&local_6c,(uchar *)&local_68,
                                0x10);
      uVar4 = param_5 - uVar6;
      local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
      bVar1 = bVar1 | iVar2 == 0;
      if (0x10 < uVar4) {
        uVar4 = 0x10;
      }
      uVar3 = uVar6;
      if (param_5 != uVar6) {
        do {
          *(byte *)(param_3 + uVar3) = *(byte *)(param_4 + uVar3) ^ puVar5[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar4 + uVar6 != uVar3);
      }
      uVar6 = uVar6 + 0x10;
      puVar5 = puVar5 + -0x10;
    } while (uVar6 < param_5);
    bVar1 = bVar1 ^ 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



undefined8 aes_gcm_siv_dup_ctx(undefined8 *param_1,long *param_2)

{
  int iVar1;
  EVP_CIPHER_CTX *out;
  
  *param_1 = 0;
  if (*param_2 == 0) {
    return 1;
  }
  out = EVP_CIPHER_CTX_new();
  *param_1 = out;
  if (out != (EVP_CIPHER_CTX *)0x0) {
    iVar1 = EVP_CIPHER_CTX_copy(out,(EVP_CIPHER_CTX *)*param_2);
    if (iVar1 != 0) {
      return 1;
    }
    out = (EVP_CIPHER_CTX *)*param_1;
  }
  EVP_CIPHER_CTX_free(out);
  *param_1 = 0;
  return 0;
}



uint aes_gcm_siv_cipher(undefined8 *param_1,long param_2,void *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  int local_9c;
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong local_60;
  undefined1 local_58 [16];
  long local_40;
  ulong uVar9;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (void *)0x0) {
    if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
      iVar3 = CRYPTO_memcmp(param_1 + 0x11,param_1 + 0x13,0x10);
      uVar5 = (uint)(*(byte *)(param_1 + 0x37) >> 1 & iVar3 == 0);
    }
    else {
      uVar5 = *(byte *)(param_1 + 0x37) >> 2 & 1;
    }
    goto LAB_00100392;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      CRYPTO_free((void *)param_1[2]);
      param_1[2] = 0;
      param_1[5] = 0;
    }
    else {
      uVar12 = param_4 + 0xf + param_1[5] & 0xfffffffffffffff0;
      if ((0x1000000000 < uVar12) ||
         (pvVar8 = CRYPTO_realloc((void *)param_1[2],(int)uVar12,
                                  "providers/implementations/ciphers/cipher_aes_gcm_siv_hw.c",0x7e),
         pvVar8 == (void *)0x0)) goto LAB_00100390;
      param_1[2] = pvVar8;
      memcpy((void *)((long)pvVar8 + param_1[5]),param_3,param_4);
      param_4 = param_4 + param_1[5];
      param_1[5] = param_4;
      if (param_4 < uVar12) {
        memset((void *)(param_1[2] + param_4),0,uVar12 - param_4);
      }
    }
    uVar5 = 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x37);
    *(byte *)(param_1 + 0x37) = bVar2 & 0xfb;
    uVar5 = (uint)param_4;
    if ((bVar2 & 1) == 0) {
      if (((bVar2 & 0x30) != 0x10) && ((long)param_4 < 0x1000000001)) {
        local_68 = param_1[0x13];
        puVar1 = param_1 + 0x17;
        local_60 = param_1[0x14] | 0x8000000000000000;
        iVar3 = aes_gcm_siv_ctr32(param_1,&local_68,param_2,param_3,param_4);
        local_58 = (undefined1  [16])0x0;
        local_98 = param_1[5] << 3;
        local_90 = param_4 * 8;
        ossl_polyval_ghash_init(puVar1,param_1 + 0xf);
        if (param_1[2] != 0) {
          ossl_polyval_ghash_hash(puVar1,local_58);
        }
        if (0xf < param_4) {
          ossl_polyval_ghash_hash(puVar1,local_58,param_2);
        }
        if ((param_4 & 0xf) != 0) {
          puVar11 = (undefined4 *)(param_2 + (param_4 & 0xfffffffffffffff0));
          local_88 = (undefined1  [16])0x0;
          puVar10 = (undefined4 *)local_88;
          if (7 < (uVar5 & 0xf)) {
            uVar12 = 0;
            do {
              uVar6 = (int)uVar12 + 8;
              uVar9 = (ulong)uVar6;
              *(undefined8 *)((long)local_88 + uVar12) = *(undefined8 *)((long)puVar11 + uVar12);
              uVar12 = uVar9;
            } while (uVar6 < (uVar5 & 8));
            puVar10 = (undefined4 *)((long)local_88 + uVar9);
            puVar11 = (undefined4 *)(uVar9 + (long)puVar11);
          }
          lVar7 = 0;
          if ((param_4 & 4) != 0) {
            *puVar10 = *puVar11;
            lVar7 = 4;
          }
          if ((param_4 & 2) != 0) {
            *(undefined2 *)((long)puVar10 + lVar7) = *(undefined2 *)((long)puVar11 + lVar7);
            lVar7 = lVar7 + 2;
          }
          if ((param_4 & 1) != 0) {
            *(undefined1 *)((long)puVar10 + lVar7) = *(undefined1 *)((long)puVar11 + lVar7);
          }
          ossl_polyval_ghash_hash(puVar1,local_58,local_88,0x10);
        }
        ossl_polyval_ghash_hash(puVar1,local_58,&local_98,0x10);
        lVar7 = 0;
        do {
          *(uint *)(local_58 + lVar7) =
               *(uint *)(local_58 + lVar7) ^ *(uint *)((long)param_1 + lVar7 + 0xa8);
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0xc);
        local_58[0xf] = local_58[0xf] & 0x7f;
        local_9c = 0x10;
        iVar4 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)(param_1 + 0x11),&local_9c,
                                  local_58,0x10);
        uVar5 = (iVar4 == 0 || iVar3 == 0) ^ 1;
        *(byte *)(param_1 + 0x37) = (byte)(uVar5 << 2) | *(byte *)(param_1 + 0x37) & 0xfb | 0x10;
        goto LAB_00100392;
      }
    }
    else if (((bVar2 & 0x28) != 8) && ((long)param_4 < 0x1000000001)) {
      puVar1 = param_1 + 0x17;
      local_78 = (undefined1  [16])0x0;
      local_88._8_8_ = param_4 * 8;
      local_88._0_8_ = param_1[5] << 3;
      ossl_polyval_ghash_init(puVar1,param_1 + 0xf);
      if (param_1[2] != 0) {
        ossl_polyval_ghash_hash(puVar1,local_78,param_1[2],param_1[5] + 0xf & 0xfffffffffffffff0);
      }
      if (0xf < param_4) {
        ossl_polyval_ghash_hash(puVar1,local_78,param_3,param_4 & 0xfffffffffffffff0);
      }
      if ((param_4 & 0xf) != 0) {
        local_58 = (undefined1  [16])0x0;
        puVar11 = (undefined4 *)((param_4 & 0xfffffffffffffff0) + (long)param_3);
        puVar10 = (undefined4 *)local_58;
        if (7 < (uVar5 & 0xf)) {
          uVar12 = 0;
          do {
            uVar6 = (int)uVar12 + 8;
            uVar9 = (ulong)uVar6;
            *(undefined8 *)((long)local_58 + uVar12) = *(undefined8 *)((long)puVar11 + uVar12);
            uVar12 = uVar9;
          } while (uVar6 < (uVar5 & 8));
          puVar10 = (undefined4 *)((long)local_58 + uVar9);
          puVar11 = (undefined4 *)(uVar9 + (long)puVar11);
        }
        lVar7 = 0;
        if ((param_4 & 4) != 0) {
          *puVar10 = *puVar11;
          lVar7 = 4;
        }
        if ((param_4 & 2) != 0) {
          *(undefined2 *)((long)puVar10 + lVar7) = *(undefined2 *)((long)puVar11 + lVar7);
          lVar7 = lVar7 + 2;
        }
        if ((param_4 & 1) != 0) {
          *(undefined1 *)((long)puVar10 + lVar7) = *(undefined1 *)((long)puVar11 + lVar7);
        }
        ossl_polyval_ghash_hash(puVar1,local_78,local_58,0x10);
      }
      ossl_polyval_ghash_hash(puVar1,local_78,local_88,0x10);
      lVar7 = 0;
      do {
        *(uint *)(local_78 + lVar7) =
             *(uint *)(local_78 + lVar7) ^ *(uint *)((long)param_1 + lVar7 + 0xa8);
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0xc);
      local_78[0xf] = local_78[0xf] & 0x7f;
      local_9c = 0x10;
      iVar3 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)(param_1 + 0x11),&local_9c,
                                local_78,0x10);
      local_68 = param_1[0x11];
      local_60 = param_1[0x12] | 0x8000000000000000;
      iVar4 = aes_gcm_siv_ctr32(param_1,&local_68,param_2,param_3,param_4);
      uVar5 = (iVar3 == 0 || iVar4 == 0) ^ 1;
      *(byte *)(param_1 + 0x37) = (byte)(uVar5 << 2) | *(byte *)(param_1 + 0x37) & 0xfb | 8;
      goto LAB_00100392;
    }
LAB_00100390:
    uVar5 = 0;
  }
LAB_00100392:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 aes_gcm_siv_initkey(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  EVP_CIPHER_CTX *pEVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_6c;
  int local_68;
  long local_64;
  undefined4 local_5c;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_1[6];
  if (lVar4 == 0x18) {
    uVar2 = EVP_CIPHER_fetch(param_1[3],"AES-192-ECB",0);
LAB_0010082a:
    pEVar3 = (EVP_CIPHER_CTX *)*param_1;
joined_r0x001009ab:
    if (pEVar3 == (EVP_CIPHER_CTX *)0x0) {
      pEVar3 = EVP_CIPHER_CTX_new();
      *param_1 = (long)pEVar3;
      if (pEVar3 == (EVP_CIPHER_CTX *)0x0) {
        pEVar3 = (EVP_CIPHER_CTX *)0x0;
        goto LAB_00100956;
      }
    }
    iVar1 = EVP_EncryptInit_ex2(pEVar3,uVar2,param_1 + 7,0,0);
    if (iVar1 != 0) {
      local_64 = param_1[0x15];
      local_5c = (undefined4)param_1[0x16];
      local_68 = 0;
      local_6c = 0x10;
      iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)local_58,&local_6c,
                                (uchar *)&local_68,0x10);
      if (iVar1 != 0) {
        local_68 = 1;
        param_1[0xf] = local_58[0];
        local_6c = 0x10;
        iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)local_58,&local_6c,
                                  (uchar *)&local_68,0x10);
        if (iVar1 != 0) {
          lVar4 = 0;
          param_1[0x10] = local_58[0];
          if (param_1[6] != 0) {
            do {
              local_68 = (int)lVar4 + 2;
              local_6c = 0x10;
              iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)local_58,&local_6c,
                                        (uchar *)&local_68,0x10);
              if (iVar1 == 0) goto LAB_00100942;
              param_1[lVar4 + 0xb] = local_58[0];
              lVar4 = lVar4 + 1;
            } while ((ulong)(lVar4 * 8) < (ulong)param_1[6]);
          }
          iVar1 = EVP_EncryptInit_ex2(*param_1,uVar2,param_1 + 0xb,0,0);
          if (iVar1 != 0) {
            *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xe7;
            EVP_CIPHER_free(uVar2);
            uVar2 = 1;
            goto LAB_0010096c;
          }
        }
      }
    }
LAB_00100942:
    pEVar3 = (EVP_CIPHER_CTX *)*param_1;
  }
  else {
    if (lVar4 == 0x20) {
      uVar2 = EVP_CIPHER_fetch(param_1[3],"AES-256-ECB",0);
      pEVar3 = (EVP_CIPHER_CTX *)*param_1;
      goto joined_r0x001009ab;
    }
    if (lVar4 == 0x10) {
      uVar2 = EVP_CIPHER_fetch(param_1[3],"AES-128-ECB",0);
      goto LAB_0010082a;
    }
    pEVar3 = (EVP_CIPHER_CTX *)*param_1;
    uVar2 = 0;
  }
LAB_00100956:
  EVP_CIPHER_CTX_free(pEVar3);
  EVP_CIPHER_free(uVar2);
  *param_1 = 0;
  uVar2 = 0;
LAB_0010096c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * ossl_prov_cipher_hw_aes_gcm_siv(void)

{
  return aes_gcm_siv_hw;
}


