
undefined8 aes_xts_ctrl(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 8) {
    lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar1 + 0x1f0) != 0) {
      if (*(long *)(lVar1 + 0x1f0) != lVar1) {
        return 0;
      }
      *(long *)(lVar2 + 0x1f0) = lVar2;
    }
    if (*(long *)(lVar1 + 0x1f8) != 0) {
      if (*(long *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
        return 0;
      }
      *(long *)(lVar2 + 0x1f8) = lVar2 + 0xf8;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined1 (*) [16])(lVar1 + 0x1f0) = (undefined1  [16])0x0;
  }
  return 1;
}



undefined8 aes_cbc_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  pcVar1 = *(code **)(lVar4 + 0x100);
  if (pcVar1 == (code *)0x0) {
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      CRYPTO_cbc128_decrypt
                (param_3,param_2,param_4,lVar4,param_1 + 0x28,*(undefined8 *)(lVar4 + 0xf8));
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  else {
    uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    (*pcVar1)(param_3,param_2,param_4,lVar4,param_1 + 0x28,uVar2);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 aes_init_key(undefined8 param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  AES_KEY *key;
  undefined8 uVar3;
  undefined *puVar4;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  iVar1 = iVar1 * 8;
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0x96b,"aes_init_key");
    ERR_set_error(6,0x82,0);
    return 0;
  }
  uVar3 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar2 = EVP_CIPHER_get_mode(uVar3);
  if (iVar2 - 1U < 2) {
    if (param_4 == 0) {
      if ((_DAT_0010b03c & 0x200) != 0) {
        if (iVar2 == 2) {
          iVar1 = AES_set_decrypt_key(param_2,iVar1,key);
          puVar4 = PTR_ossl_bsaes_cbc_encrypt_0010c018;
          *(undefined **)(key[1].rd_key + 1) = PTR_AES_decrypt_0010c010;
          *(undefined **)(key[1].rd_key + 3) = puVar4;
        }
        else {
          iVar1 = vpaes_set_decrypt_key();
          key[1].rd_key[3] = 0;
          key[1].rd_key[4] = 0;
          *(undefined **)(key[1].rd_key + 1) = &vpaes_decrypt;
        }
        goto joined_r0x0010027c;
      }
      iVar1 = AES_set_decrypt_key(param_2,iVar1,key);
      *(undefined **)(key[1].rd_key + 1) = &AES_decrypt;
      puVar4 = (undefined *)0x0;
      if (iVar2 == 2) {
        puVar4 = &AES_cbc_encrypt;
      }
      goto LAB_001001af;
    }
    if ((_DAT_0010b03c & 0x200) == 0) {
      iVar1 = AES_set_encrypt_key(param_2,iVar1,key);
      if (iVar2 == 2) {
        puVar4 = &AES_cbc_encrypt;
      }
      else {
        puVar4 = (undefined *)0x0;
      }
      goto LAB_001001a1;
    }
    iVar1 = vpaes_set_encrypt_key(param_2,iVar1,key);
    puVar4 = (undefined *)0x0;
    if (iVar2 == 2) {
      puVar4 = &vpaes_cbc_encrypt;
    }
  }
  else {
    if ((_DAT_0010b03c & 0x200) == 0) {
      iVar1 = AES_set_encrypt_key(param_2,iVar1,key);
      puVar4 = (undefined *)0x0;
LAB_001001a1:
      *(undefined **)(key[1].rd_key + 1) = &AES_encrypt;
LAB_001001af:
      *(undefined **)(key[1].rd_key + 3) = puVar4;
      goto joined_r0x0010027c;
    }
    if (iVar2 == 5) {
      iVar1 = AES_set_encrypt_key(param_2,iVar1,key);
      puVar4 = PTR_ossl_bsaes_ctr32_encrypt_blocks_0010c008;
      *(undefined **)(key[1].rd_key + 1) = _GLOBAL_OFFSET_TABLE_;
      *(undefined **)(key[1].rd_key + 3) = puVar4;
      goto joined_r0x0010027c;
    }
    iVar1 = vpaes_set_encrypt_key();
    puVar4 = (undefined *)0x0;
  }
  *(undefined **)(key[1].rd_key + 3) = puVar4;
  *(undefined **)(key[1].rd_key + 1) = &vpaes_encrypt;
joined_r0x0010027c:
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0x9c0,"aes_init_key");
    ERR_set_error(6,0x8f,0);
    return 0;
  }
  return 1;
}



undefined8 aesni_cbc_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = EVP_CIPHER_CTX_is_encrypting();
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  aesni_cbc_encrypt(param_3,param_2,param_4,uVar2,param_1 + 0x28,uVar1);
  return 1;
}



undefined8 aesni_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  iVar1 = iVar1 * 8;
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0x98,"aesni_init_key");
    ERR_set_error(6,0x82,0);
    return 0;
  }
  uVar4 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar2 = EVP_CIPHER_get_mode(uVar4);
  if (iVar2 - 1U < 2) {
    if (param_4 == 0) {
      iVar1 = aesni_set_decrypt_key();
      *(undefined **)(lVar3 + 0xf8) = &aesni_decrypt;
      pcVar5 = (code *)0x0;
      if (iVar2 != 2) goto LAB_00100471;
    }
    else {
      iVar1 = aesni_set_encrypt_key(param_2,iVar1,lVar3);
      *(undefined **)(lVar3 + 0xf8) = &aesni_encrypt;
      if (iVar2 != 2) goto LAB_001004ac;
    }
    pcVar5 = aesni_cbc_encrypt;
  }
  else {
    iVar1 = aesni_set_encrypt_key(param_2,iVar1,lVar3);
    *(undefined **)(lVar3 + 0xf8) = &aesni_encrypt;
    if (iVar2 != 5) {
LAB_001004ac:
      *(undefined8 *)(lVar3 + 0x100) = 0;
      goto joined_r0x001004be;
    }
    pcVar5 = (code *)&aesni_ctr32_encrypt_blocks;
  }
LAB_00100471:
  *(code **)(lVar3 + 0x100) = pcVar5;
joined_r0x001004be:
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0xae,"aesni_init_key");
    ERR_set_error(6,0x8f,0);
    return 0;
  }
  return 1;
}



undefined8 aes_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar3 = EVP_CIPHER_CTX_get_block_size();
  uVar6 = (ulong)iVar3;
  lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar6 <= param_4) {
    uVar5 = 0;
    do {
      lVar1 = param_2 + uVar5;
      lVar2 = param_3 + uVar5;
      uVar5 = uVar5 + uVar6;
      (**(code **)(lVar4 + 0xf8))(lVar2,lVar1,lVar4);
    } while (uVar5 <= param_4 - uVar6);
  }
  return 1;
}



undefined8 aes_ofb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_34 = EVP_CIPHER_CTX_get_num(param_1);
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,lVar1,param_1 + 0x28,&local_34,*(undefined8 *)(lVar1 + 0xf8));
  EVP_CIPHER_CTX_set_num(param_1,local_34);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 aes_cfb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_44 = EVP_CIPHER_CTX_get_num(param_1);
  uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  CRYPTO_cfb128_encrypt(param_3,param_2,param_4,uVar1,param_1 + 0x28,&local_44,uVar2);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 aes_cfb1_cipher(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78;
  long local_60;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  local_78 = param_2;
  local_60 = param_3;
  if (iVar1 == 0) {
    if (param_4 >> 0x3c != 0) {
      local_60 = (param_4 + 0xf000000000000000 >> 0x3c) + 1 << 0x3c;
      local_78 = param_2 + local_60;
      lVar6 = param_3;
      do {
        local_44 = EVP_CIPHER_CTX_get_num(param_1);
        uVar4 = *(undefined8 *)(lVar2 + 0xf8);
        uVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
        lVar5 = param_2 + 0x1000000000000000;
        CRYPTO_cfb128_1_encrypt
                  (lVar6,param_2,0x8000000000000000,lVar2,param_1->iv,&local_44,uVar3,uVar4);
        EVP_CIPHER_CTX_set_num(param_1,local_44);
        param_2 = lVar5;
        lVar6 = lVar6 + 0x1000000000000000;
      } while (lVar5 != local_78);
      local_60 = param_3 + local_60;
      param_4 = param_4 & 0xfffffffffffffff;
    }
    if (param_4 == 0) goto LAB_0010085e;
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
    param_4 = param_4 << 3;
  }
  else {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
  }
  CRYPTO_cfb128_1_encrypt(local_60,local_78,param_4,lVar2,param_1->iv,&local_44,uVar4);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
LAB_0010085e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 aes_cfb8_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_44 = EVP_CIPHER_CTX_get_num(param_1);
  uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  CRYPTO_cfb128_8_encrypt(param_3,param_2,param_4,uVar1,param_1 + 0x28,&local_44,uVar2);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 aes_ctr_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_CIPHER_CTX_get_num();
  lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x100);
    local_44 = iVar2;
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0xf8);
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_ctr128_encrypt(param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar5,&local_44);
    }
    else {
      uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_ctr128_encrypt_ctr32
                (param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar4,&local_44,lVar1);
      uVar4 = extraout_RDX;
    }
    EVP_CIPHER_CTX_set_num(param_1,local_44,uVar4);
    uVar4 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 aes_gcm_ctrl(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)param_3;
  lVar5 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar5 + 0xf8) = 0;
    uVar3 = EVP_CIPHER_get_iv_length(*param_1);
    *(undefined8 **)(lVar5 + 0x2c0) = param_1 + 5;
    *(undefined4 *)(lVar5 + 0x2c8) = uVar3;
    *(undefined8 *)(lVar5 + 0x2cc) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x2d8) = 0xffffffff;
    break;
  default:
    return 0xffffffff;
  case 8:
    lVar7 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar5 + 0x288) != 0) {
      if (*(long *)(lVar5 + 0x288) != lVar5) {
        return 0;
      }
      *(long *)(lVar7 + 0x288) = lVar7;
    }
    if (*(undefined8 **)(lVar5 + 0x2c0) == param_1 + 5) {
      *(undefined8 **)(lVar7 + 0x2c0) = param_4 + 5;
    }
    else {
      pvVar6 = CRYPTO_malloc(*(int *)(lVar5 + 0x2c8),"crypto/evp/e_aes.c",0xad7);
      *(void **)(lVar7 + 0x2c0) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar6,*(void **)(lVar5 + 0x2c0),(long)*(int *)(lVar5 + 0x2c8));
    }
    break;
  case 9:
    if ((int)param_3 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_3) && (*(int *)(lVar5 + 0x2c8) < (int)param_3)) {
      if (*(undefined8 **)(lVar5 + 0x2c0) != param_1 + 5) {
        CRYPTO_free(*(undefined8 **)(lVar5 + 0x2c0));
      }
      pvVar6 = CRYPTO_malloc(param_3,"crypto/evp/e_aes.c",0xa73);
      *(void **)(lVar5 + 0x2c0) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
    }
    *(uint *)(lVar5 + 0x2c8) = param_3;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 2) == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x2cc) < 0) {
      return 0;
    }
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) &&
           (*(undefined1 *)param_4 = *(undefined1 *)(param_1 + 7), (param_3 & 2) != 0)) {
          *(undefined2 *)((long)param_4 + (uVar11 - 2)) =
               *(undefined2 *)((long)param_1 + uVar11 + 0x36);
        }
      }
      else {
        *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 7);
        *(undefined4 *)((long)param_4 + (uVar11 - 4)) =
             *(undefined4 *)((long)param_1 + uVar11 + 0x34);
      }
    }
    else {
      *param_4 = param_1[7];
      *(undefined8 *)((long)param_4 + (uVar11 - 8)) = *(undefined8 *)((long)param_1 + uVar11 + 0x30)
      ;
      lVar5 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar9 = param_3 + (int)lVar5 & 0xfffffff8;
      if (7 < uVar9) {
        uVar10 = 0;
        do {
          uVar11 = (ulong)uVar10;
          uVar10 = uVar10 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar11) =
               *(undefined8 *)((long)param_1 + uVar11 + (0x38 - lVar5));
        } while (uVar10 < uVar9);
      }
    }
    break;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) &&
           (*(undefined1 *)(param_1 + 7) = *(undefined1 *)param_4, (param_3 & 2) != 0)) {
          *(undefined2 *)((long)param_1 + uVar11 + 0x36) =
               *(undefined2 *)((long)param_4 + (uVar11 - 2));
        }
      }
      else {
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_4;
        *(undefined4 *)((long)param_1 + uVar11 + 0x34) =
             *(undefined4 *)((long)param_4 + (uVar11 - 4));
      }
    }
    else {
      param_1[7] = *param_4;
      *(undefined8 *)((long)param_1 + uVar11 + 0x30) = *(undefined8 *)((long)param_4 + (uVar11 - 8))
      ;
      lVar7 = (long)param_1 + (0x38 - ((ulong)(param_1 + 8) & 0xfffffffffffffff8));
      uVar9 = (int)lVar7 + param_3 & 0xfffffff8;
      if (7 < uVar9) {
        uVar11 = 0;
        do {
          uVar10 = (int)uVar11 + 8;
          *(undefined8 *)(((ulong)(param_1 + 8) & 0xfffffffffffffff8) + uVar11) =
               *(undefined8 *)((long)param_4 + (uVar11 - lVar7));
          uVar11 = (ulong)uVar10;
        } while (uVar10 < uVar9);
      }
    }
    *(uint *)(lVar5 + 0x2cc) = param_3;
    break;
  case 0x12:
    if (param_3 == 0xffffffff) {
      memcpy(*(void **)(lVar5 + 0x2c0),param_4,(long)*(int *)(lVar5 + 0x2c8));
      *(undefined4 *)(lVar5 + 0x2d0) = 1;
    }
    else {
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar5 + 0x2c8) - param_3) < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar5 + 0x2c0),param_4,(long)(int)param_3);
      if ((*(int *)(param_1 + 2) != 0) &&
         (iVar4 = RAND_bytes((uchar *)((long)(int)param_3 + *(long *)(lVar5 + 0x2c0)),
                             *(int *)(lVar5 + 0x2c8) - param_3), iVar4 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar5 + 0x2d0) = 1;
    }
    break;
  case 0x13:
    if (*(int *)(lVar5 + 0x2d0) == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0xf8) == 0) {
      return 0;
    }
    CRYPTO_gcm128_setiv(lVar5 + 0x100,*(undefined8 *)(lVar5 + 0x2c0),(long)*(int *)(lVar5 + 0x2c8));
    uVar9 = *(uint *)(lVar5 + 0x2c8);
    uVar10 = uVar9;
    if ((0 < (int)param_3) && ((int)param_3 <= (int)uVar9)) {
      uVar10 = param_3;
    }
    memcpy(param_4,(void *)(((long)(int)uVar9 - (long)(int)uVar10) + *(long *)(lVar5 + 0x2c0)),
           (long)(int)uVar10);
    lVar7 = 7;
    lVar8 = (long)*(int *)(lVar5 + 0x2c8) + *(long *)(lVar5 + 0x2c0);
    do {
      iVar4 = (int)lVar7;
      cVar1 = *(char *)(lVar8 + -8 + lVar7) + '\x01';
      *(char *)(lVar8 + -8 + lVar7) = cVar1;
      lVar7 = lVar7 + -1;
    } while (iVar4 != 0 && cVar1 == '\0');
    goto LAB_00100ee7;
  case 0x16:
    if (param_3 == 0xd) {
      param_1[7] = *param_4;
      *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_4 + 5);
      *(undefined4 *)(lVar5 + 0x2d8) = 0xd;
      *(undefined8 *)(lVar5 + 0x2e0) = 0;
      uVar2 = *(ushort *)((long)param_1 + 0x43) << 8 | *(ushort *)((long)param_1 + 0x43) >> 8;
      if (7 < uVar2) {
        uVar9 = uVar2 - 8;
        if (*(int *)(param_1 + 2) == 0) {
          if (uVar9 < 0x10) {
            return 0;
          }
          uVar9 = uVar2 - 0x18;
        }
        *(ushort *)((long)param_1 + 0x43) = (ushort)uVar9 << 8 | (ushort)uVar9 >> 8;
        return 0x10;
      }
    }
    return 0;
  case 0x18:
    if (*(int *)(lVar5 + 0x2d0) == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0xf8) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    memcpy((void *)(((long)*(int *)(lVar5 + 0x2c8) - (long)(int)param_3) + *(long *)(lVar5 + 0x2c0))
           ,param_4,(long)(int)param_3);
    CRYPTO_gcm128_setiv(lVar5 + 0x100,*(undefined8 *)(lVar5 + 0x2c0),(long)*(int *)(lVar5 + 0x2c8));
LAB_00100ee7:
    *(undefined4 *)(lVar5 + 0xfc) = 1;
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar5 + 0x2c8);
  }
  return 1;
}



undefined8 aes_gcm_cleanup(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  uVar2 = 0;
  if (lVar1 != 0) {
    OPENSSL_cleanse((void *)(lVar1 + 0x100),0x1c0);
    if (*(void **)(lVar1 + 0x2c0) != (void *)(param_1 + 0x28)) {
      CRYPTO_free(*(void **)(lVar1 + 0x2c0));
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* WARNING: Type propagation algorithm not settling */

ulong aes_gcm_cipher(EVP_CIPHER_CTX *param_1,void *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar4 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar4 + 0x2d8) < 0) {
    if (*(int *)(lVar4 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_3 != (void *)0x0) {
      if (param_2 == (void *)0x0) {
        iVar3 = CRYPTO_gcm128_aad(lVar4 + 0x100,param_3,param_4);
      }
      else {
        iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
        puVar10 = *(undefined **)(lVar4 + 0x2e8);
        if (iVar3 == 0) {
          if (puVar10 == (undefined *)0x0) {
            iVar3 = CRYPTO_gcm128_decrypt(lVar4 + 0x100,param_3,param_2,param_4);
          }
          else {
            lVar1 = lVar4 + 0x100;
            uVar9 = param_4;
            if (((puVar10 == PTR_aesni_ctr32_encrypt_blocks_0010c020) && (0xf < param_4)) &&
               (*(undefined **)(lVar4 + 0x268) == &gcm_ghash_avx)) {
              uVar9 = (ulong)(-*(int *)(lVar4 + 0x278) & 0xf);
              iVar3 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,uVar9);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              lVar7 = aesni_gcm_decrypt((long)param_3 + uVar9,(long)param_2 + uVar9,param_4 - uVar9,
                                        *(undefined8 *)(lVar4 + 0x288),lVar1,lVar4 + 0x140);
              *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar7;
              puVar10 = *(undefined **)(lVar4 + 0x2e8);
              lVar7 = uVar9 + lVar7;
              uVar9 = param_4 - lVar7;
              param_2 = (void *)((long)param_2 + lVar7);
              param_3 = (void *)((long)param_3 + lVar7);
            }
            iVar3 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_3,param_2,uVar9,puVar10);
          }
        }
        else if (puVar10 == (undefined *)0x0) {
          iVar3 = CRYPTO_gcm128_encrypt(lVar4 + 0x100,param_3,param_2,param_4);
        }
        else {
          lVar1 = lVar4 + 0x100;
          uVar9 = param_4;
          if (((0x1f < param_4) && (puVar10 == PTR_aesni_ctr32_encrypt_blocks_0010c020)) &&
             (*(undefined **)(lVar4 + 0x268) == &gcm_ghash_avx)) {
            uVar9 = (ulong)(-*(int *)(lVar4 + 0x278) & 0xf);
            iVar3 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2,uVar9);
            if (iVar3 != 0) {
              return 0xffffffff;
            }
            lVar7 = aesni_gcm_encrypt((long)param_3 + uVar9,(long)param_2 + uVar9,param_4 - uVar9,
                                      *(undefined8 *)(lVar4 + 0x288),lVar1,lVar4 + 0x140);
            *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar7;
            puVar10 = *(undefined **)(lVar4 + 0x2e8);
            lVar7 = uVar9 + lVar7;
            uVar9 = param_4 - lVar7;
            param_2 = (void *)((long)param_2 + lVar7);
            param_3 = (void *)((long)param_3 + lVar7);
          }
          iVar3 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_3,param_2,uVar9,puVar10);
        }
      }
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 != 0) {
      uVar6 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_gcm128_tag(lVar4 + 0x100,uVar6,0x10);
      *(undefined4 *)(lVar4 + 0x2cc) = 0x10;
      *(undefined4 *)(lVar4 + 0xfc) = 0;
      return 0;
    }
    iVar3 = *(int *)(lVar4 + 0x2cc);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar6 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar3 = CRYPTO_gcm128_finish(lVar4 + 0x100,uVar6,(long)iVar3);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar4 + 0xfc) = 0;
    return 0;
  }
  lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (param_3 != param_2) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar3 == 0) {
LAB_00101228:
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    iVar3 = EVP_CIPHER_CTX_ctrl(param_1,(-(uint)(iVar3 == 0) & 5) + 0x13,8,param_2);
    if (0 < iVar3) {
      iVar3 = *(int *)(lVar4 + 0x2d8);
      lVar1 = lVar4 + 0x100;
      uVar6 = EVP_CIPHER_CTX_buf_noconst(param_1);
      iVar3 = CRYPTO_gcm128_aad(lVar1,uVar6,(long)iVar3);
      if (iVar3 == 0) {
        lVar7 = (long)param_3 + 8;
        param_2 = (void *)((long)param_2 + 8);
        param_4 = param_4 - 0x18;
        iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
        puVar10 = *(undefined **)(lVar4 + 0x2e8);
        if (iVar3 == 0) {
          if (puVar10 == (undefined *)0x0) {
            iVar3 = CRYPTO_gcm128_decrypt(lVar1,lVar7,param_2,param_4);
          }
          else {
            uVar9 = param_4;
            pvVar5 = param_2;
            lVar8 = lVar7;
            if (((0xf < param_4) && (puVar10 == PTR_aesni_ctr32_encrypt_blocks_0010c020)) &&
               (*(undefined **)(lVar4 + 0x268) == &gcm_ghash_avx)) {
              iVar3 = CRYPTO_gcm128_decrypt(lVar1,0,0,0);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              lVar8 = aesni_gcm_decrypt(lVar7,param_2,param_4,*(undefined8 *)(lVar4 + 0x288),lVar1,
                                        lVar4 + 0x140);
              *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar8;
              puVar10 = *(undefined **)(lVar4 + 0x2e8);
              uVar9 = param_4 - lVar8;
              pvVar5 = (void *)((long)param_2 + lVar8);
              lVar8 = lVar8 + lVar7;
            }
            iVar3 = CRYPTO_gcm128_decrypt_ctr32(lVar1,lVar8,pvVar5,uVar9,puVar10);
          }
          if (iVar3 == 0) {
            uVar6 = EVP_CIPHER_CTX_buf_noconst(param_1);
            CRYPTO_gcm128_tag(lVar1,uVar6,0x10);
            pvVar5 = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
            iVar3 = CRYPTO_memcmp(pvVar5,(void *)(lVar7 + param_4),0x10);
            if (iVar3 == 0) {
              param_4 = param_4 & 0xffffffff;
              goto LAB_001013c5;
            }
            OPENSSL_cleanse(param_2,param_4);
          }
        }
        else {
          if (puVar10 == (undefined *)0x0) {
            iVar3 = CRYPTO_gcm128_encrypt(lVar1,lVar7,param_2,param_4);
          }
          else {
            uVar9 = param_4;
            pvVar5 = param_2;
            if (((puVar10 == PTR_aesni_ctr32_encrypt_blocks_0010c020) && (0x1f < param_4)) &&
               (*(undefined **)(lVar4 + 0x268) == &gcm_ghash_avx)) {
              iVar3 = CRYPTO_gcm128_encrypt(lVar1,0,0,0);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              lVar8 = aesni_gcm_encrypt(lVar7,param_2,param_4,*(undefined8 *)(lVar4 + 0x288),lVar1,
                                        lVar4 + 0x140);
              *(long *)(lVar4 + 0x138) = *(long *)(lVar4 + 0x138) + lVar8;
              puVar10 = *(undefined **)(lVar4 + 0x2e8);
              uVar9 = param_4 - lVar8;
              pvVar5 = (void *)((long)param_2 + lVar8);
              lVar7 = lVar7 + lVar8;
            }
            iVar3 = CRYPTO_gcm128_encrypt_ctr32(lVar1,lVar7,pvVar5,uVar9,puVar10);
          }
          if (iVar3 == 0) {
            CRYPTO_gcm128_tag(lVar1,(long)param_2 + param_4,0x10);
            param_4 = (ulong)((int)param_4 + 0x18);
            goto LAB_001013c5;
          }
        }
      }
    }
  }
  else {
    plVar2 = (long *)(lVar4 + 0x2e0);
    *plVar2 = *plVar2 + 1;
    if (*plVar2 != 0) goto LAB_00101228;
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0xb4d,"aes_gcm_tls_cipher");
    ERR_set_error(6,0xb7,0);
  }
  param_4 = 0xffffffff;
LAB_001013c5:
  *(undefined4 *)(lVar4 + 0xfc) = 0;
  *(undefined4 *)(lVar4 + 0x2d8) = 0xffffffff;
  return param_4;
}



undefined8 aes_xts_init_key(long param_1,uchar *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  AES_KEY *key;
  undefined *puVar3;
  int iVar4;
  int bits;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 != (uchar *)0x0 || param_3 != (undefined8 *)0x0) {
    if (param_2 != (uchar *)0x0) {
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar4 = iVar2 / 2;
      bits = iVar4 * 8;
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0xca2,"aes_xts_init_key");
        ERR_set_error(6,0x82,0);
        return 0;
      }
      if (param_4 == 0) {
        puVar3 = (undefined *)0x0;
        if ((DAT_0010b03d & 2) != 0) {
          puVar3 = &ossl_bsaes_xts_decrypt;
        }
        *(undefined **)(key[2].rd_key + 10) = puVar3;
        AES_set_decrypt_key(param_2,bits,key);
        puVar3 = &AES_decrypt;
      }
      else {
        iVar2 = CRYPTO_memcmp(param_2,param_2 + iVar4,(long)iVar4);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("crypto/evp/e_aes.c",0xcb7,"aes_xts_init_key");
          ERR_set_error(6,0xc0,0);
          return 0;
        }
        puVar3 = (undefined *)0x0;
        if ((DAT_0010b03d & 2) != 0) {
          puVar3 = &ossl_bsaes_xts_encrypt;
        }
        *(undefined **)(key[2].rd_key + 10) = puVar3;
        AES_set_encrypt_key(param_2,bits,key);
        puVar3 = &AES_encrypt;
      }
      *(undefined **)(key[2].rd_key + 6) = puVar3;
      AES_set_encrypt_key(param_2 + iVar4,bits,(AES_KEY *)(key[1].rd_key + 1));
      *(undefined **)(key[2].rd_key + 8) = &AES_encrypt;
      *(AES_KEY **)(key[2].rd_key + 2) = key;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(uint **)(key[2].rd_key + 4) = key[1].rd_key + 1;
      uVar1 = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
    }
  }
  return 1;
}



undefined8 aesni_xts_init_key(long param_1,void *param_2,undefined8 *param_3,int param_4)

{
  void *b;
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 != (void *)0x0 || param_3 != (undefined8 *)0x0) {
    if (param_2 != (void *)0x0) {
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar5 = iVar2 / 2;
      iVar7 = iVar5 * 8;
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0x11b,"aesni_xts_init_key");
        ERR_set_error(6,0x82,0);
        return 0;
      }
      b = (void *)((long)param_2 + (long)iVar5);
      if (param_4 == 0) {
        aesni_set_decrypt_key(param_2,iVar7,lVar3);
        puVar6 = &aesni_decrypt;
        puVar4 = &aesni_xts_decrypt;
      }
      else {
        iVar2 = CRYPTO_memcmp(param_2,b,(long)iVar5);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("crypto/evp/e_aes.c",0x126,"aesni_xts_init_key");
          ERR_set_error(6,0xc0,0);
          return 0;
        }
        aesni_set_encrypt_key(param_2,iVar7,lVar3);
        puVar4 = &aesni_xts_encrypt;
        puVar6 = &aesni_encrypt;
      }
      *(undefined **)(lVar3 + 0x200) = puVar6;
      *(undefined **)(lVar3 + 0x210) = puVar4;
      aesni_set_encrypt_key(b,iVar7,lVar3 + 0xf8);
      *(undefined **)(lVar3 + 0x208) = &aesni_encrypt;
      *(long *)(lVar3 + 0x1f0) = lVar3;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(long *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
      uVar1 = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
    }
  }
  return 1;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 aes_gcm_init_key(undefined8 param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  AES_KEY *key;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0 && param_2 == (uchar *)0x0) {
    return 1;
  }
  if (param_2 != (uchar *)0x0) {
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar1 = iVar1 * 8;
    if (0 < iVar1) {
      if ((DAT_0010b03d & 2) == 0) {
        AES_set_encrypt_key(param_2,iVar1,key);
        CRYPTO_gcm128_init(key[1].rd_key + 3,key,&AES_encrypt);
        key[3].rd_key[3] = 0;
        key[3].rd_key[4] = 0;
      }
      else {
        AES_set_encrypt_key(param_2,iVar1,key);
        CRYPTO_gcm128_init(key[1].rd_key + 3,key,&AES_encrypt);
        *(undefined **)(key[3].rd_key + 3) = &ossl_bsaes_ctr32_encrypt_blocks;
      }
      if ((param_3 != (void *)0x0) ||
         ((key[1].rd_key[2] != 0 &&
          (param_3 = *(void **)(key[2].rd_key + 0x36), param_3 != (void *)0x0)))) {
        CRYPTO_gcm128_setiv(key[1].rd_key + 3,param_3,(long)(int)key[2].rd_key[0x38]);
        key[1].rd_key[2] = 1;
      }
      key[1].rd_key[1] = 1;
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0xaf0,"aes_gcm_init_key");
    ERR_set_error(6,0x82,0);
    return 0;
  }
  if (key[1].rd_key[1] == 0) {
    memcpy(*(void **)(key[2].rd_key + 0x36),param_3,(long)(int)key[2].rd_key[0x38]);
  }
  else {
    CRYPTO_gcm128_setiv(key[1].rd_key + 3,param_3);
  }
  key[1].rd_key[2] = 1;
  key[2].rd_key[0x3a] = 0;
  return 1;
}



undefined8 aesni_gcm_init_key(undefined8 param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(lVar2 + 0xf8) == 0) {
        memcpy(*(void **)(lVar2 + 0x2c0),param_3,(long)*(int *)(lVar2 + 0x2c8));
      }
      else {
        CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3);
      }
      *(undefined4 *)(lVar2 + 0xfc) = 1;
      *(undefined4 *)(lVar2 + 0x2d0) = 0;
    }
    else {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      if (iVar1 * 8 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0xec,"aesni_gcm_init_key");
        ERR_set_error(6,0x82,0);
        return 0;
      }
      aesni_set_encrypt_key(param_2,iVar1 * 8,lVar2);
      CRYPTO_gcm128_init(lVar2 + 0x100,lVar2,&aesni_encrypt);
      *(undefined **)(lVar2 + 0x2e8) = &aesni_ctr32_encrypt_blocks;
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(lVar2 + 0xfc) != 0 &&
          (param_3 = *(void **)(lVar2 + 0x2c0), param_3 != (void *)0x0)))) {
        CRYPTO_gcm128_setiv(lVar2 + 0x100,param_3,(long)*(int *)(lVar2 + 0x2c8));
        *(undefined4 *)(lVar2 + 0xfc) = 1;
      }
      *(undefined4 *)(lVar2 + 0xf8) = 1;
    }
  }
  return 1;
}



bool aes_xts_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if ((((*(long *)(lVar3 + 0x1f0) != 0) && (*(long *)(lVar3 + 0x1f8) != 0)) &&
      (param_2 != 0 && param_3 != 0)) && (0xf < param_4)) {
    if (param_4 < 0x1000001) {
      if (*(code **)(lVar3 + 0x210) != (code *)0x0) {
        (**(code **)(lVar3 + 0x210))
                  (param_3,param_2,param_4,*(long *)(lVar3 + 0x1f0),*(long *)(lVar3 + 0x1f8),
                   param_1 + 0x28);
        return true;
      }
      uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      iVar2 = CRYPTO_xts128_encrypt(lVar3 + 0x1f0,param_1 + 0x28,param_3,param_2,param_4,uVar1);
      return iVar2 == 0;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0xd1a,"aes_xts_cipher");
    ERR_set_error(6,0xbf,0);
  }
  return false;
}



undefined4 aes_ccm_ctrl(long param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  
  uVar10 = (ulong)param_3;
  lVar5 = EVP_CIPHER_CTX_get_cipher_data();
  uVar2 = _LC1;
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar5 + 0x110) = 0xffffffff;
    *(undefined1 (*) [16])(lVar5 + 0xf8) = (undefined1  [16])0x0;
    *(undefined8 *)(lVar5 + 0x108) = uVar2;
    break;
  default:
    return 0xffffffff;
  case 8:
    lVar7 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar5 + 0x148) != 0) {
      if (*(long *)(lVar5 + 0x148) != lVar5) {
        return 0;
      }
      *(long *)(lVar7 + 0x148) = lVar7;
    }
    break;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (6 < param_3 - 2) {
      return 0;
    }
    *(uint *)(lVar5 + 0x108) = param_3;
    break;
  case 0x10:
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x100) == 0) {
      return 0;
    }
    lVar7 = CRYPTO_ccm128_tag(lVar5 + 0x118,param_4,(long)(int)param_3);
    if (lVar7 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar5 + 0xfc) = 0;
    *(undefined4 *)(lVar5 + 0x104) = 0;
    break;
  case 0x11:
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if (0xc < param_3 - 4) {
      return 0;
    }
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      if (param_4 != (int *)0x0) {
        *(undefined4 *)(lVar5 + 0x100) = 1;
        piVar8 = (int *)EVP_CIPHER_CTX_buf_noconst(param_1);
        if (param_3 < 8) {
          if ((param_3 & 4) == 0) {
            if ((param_3 != 0) && (*(char *)piVar8 = (char)*param_4, (param_3 & 2) != 0)) {
              *(undefined2 *)((long)piVar8 + (uVar10 - 2)) =
                   *(undefined2 *)((long)param_4 + (uVar10 - 2));
            }
          }
          else {
            *piVar8 = *param_4;
            *(undefined4 *)((long)piVar8 + (uVar10 - 4)) =
                 *(undefined4 *)((long)param_4 + (uVar10 - 4));
          }
        }
        else {
          *(undefined8 *)piVar8 = *(undefined8 *)param_4;
          *(undefined8 *)((long)piVar8 + (uVar10 - 8)) =
               *(undefined8 *)((long)param_4 + (uVar10 - 8));
          lVar7 = (long)piVar8 - ((ulong)(piVar8 + 2) & 0xfffffffffffffff8);
          uVar4 = (int)lVar7 + param_3 & 0xfffffff8;
          if (7 < uVar4) {
            uVar10 = 0;
            do {
              uVar9 = (int)uVar10 + 8;
              *(undefined8 *)(((ulong)(piVar8 + 2) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)param_4 + (uVar10 - lVar7));
              uVar10 = (ulong)uVar9;
            } while (uVar9 < uVar4);
          }
        }
      }
    }
    else if (param_4 != (int *)0x0) {
      return 0;
    }
    *(uint *)(lVar5 + 0x10c) = param_3;
    break;
  case 0x12:
    if (param_3 != 4) {
      return 0;
    }
    *(int *)(param_1 + 0x28) = *param_4;
    break;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    puVar6 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    *puVar6 = *(undefined8 *)param_4;
    *(undefined8 *)((long)puVar6 + 5) = *(undefined8 *)((long)param_4 + 5);
    *(undefined4 *)(lVar5 + 0x110) = 0xd;
    lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar1 = *(undefined1 *)(lVar7 + 0xb);
    lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar11 = CONCAT11(uVar1,*(undefined1 *)(lVar7 + 0xc));
    if (uVar11 < 8) {
      return 0;
    }
    uVar11 = uVar11 - 8;
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      if ((int)(uint)uVar11 < *(int *)(lVar5 + 0x10c)) {
        return 0;
      }
      uVar11 = uVar11 - (short)*(int *)(lVar5 + 0x10c);
    }
    lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
    *(char *)(lVar7 + 0xb) = (char)(uVar11 >> 8);
    lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
    *(char *)(lVar7 + 0xc) = (char)uVar11;
    return *(undefined4 *)(lVar5 + 0x10c);
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar5 + 0x108);
  }
  return 1;
}



ulong aes_ccm_cipher(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *b;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar2 + 0xf8) != 0) {
    if (*(int *)(lVar2 + 0x110) < 0) {
      if ((param_3 == (undefined8 *)0x0) && (uVar4 = 0, param_2 != (undefined8 *)0x0))
      goto LAB_00102340;
      if (*(int *)(lVar2 + 0xfc) != 0) {
        lVar5 = lVar2 + 0x118;
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x108)),
                                        param_4);
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x104) = 1;
              uVar4 = param_4 & 0xffffffff;
              goto LAB_00102340;
            }
          }
          else if ((*(int *)(lVar2 + 0x104) != 0) || (param_4 == 0)) {
            CRYPTO_ccm128_aad(lVar5,param_3,param_4);
            uVar4 = param_4 & 0xffffffff;
            goto LAB_00102340;
          }
        }
        else {
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if ((iVar1 != 0) || (*(int *)(lVar2 + 0x100) != 0)) {
            if (*(int *)(lVar2 + 0x104) == 0) {
              iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x108))
                                          ,param_4);
              if (iVar1 != 0) goto LAB_00102509;
              *(undefined4 *)(lVar2 + 0x104) = 1;
            }
            iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
            if (iVar1 == 0) {
              if (*(long *)(lVar2 + 0x150) == 0) {
                iVar1 = CRYPTO_ccm128_decrypt(lVar5,param_3,param_2,param_4);
              }
              else {
                iVar1 = CRYPTO_ccm128_decrypt_ccm64();
              }
              if (iVar1 == 0) {
                lVar5 = CRYPTO_ccm128_tag(lVar5,local_58,(long)*(int *)(lVar2 + 0x10c));
                if (lVar5 == 0) goto LAB_0010254f;
                iVar1 = *(int *)(lVar2 + 0x10c);
                b = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
                iVar1 = CRYPTO_memcmp(local_58,b,(long)iVar1);
                if ((iVar1 != 0) || (uVar4 = param_4 & 0xffffffff, (int)param_4 == -1))
                goto LAB_0010254f;
              }
              else {
LAB_0010254f:
                OPENSSL_cleanse(param_2,param_4);
                uVar4 = 0xffffffff;
              }
              *(undefined8 *)(lVar2 + 0xfc) = 0;
              *(undefined4 *)(lVar2 + 0x104) = 0;
              goto LAB_00102340;
            }
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x100) = 1;
              goto LAB_0010233d;
            }
          }
        }
      }
    }
    else {
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = lVar5 + 0x118;
      if ((param_3 == param_2) && ((long)*(int *)(lVar5 + 0x10c) + 8U <= param_4)) {
        iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar1 != 0) {
          puVar6 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
          *param_3 = *puVar6;
        }
        *(undefined8 *)(param_1 + 0x2c) = *param_3;
        param_4 = param_4 - (long)(*(int *)(lVar5 + 0x10c) + 8);
        iVar1 = CRYPTO_ccm128_setiv(lVar2,param_1 + 0x28,(long)(0xf - *(int *)(lVar5 + 0x108)),
                                    param_4);
        if (iVar1 == 0) {
          iVar1 = *(int *)(lVar5 + 0x110);
          param_2 = param_2 + 1;
          uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_ccm128_aad(lVar2,uVar3,(long)iVar1);
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar5 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_decrypt(lVar2,param_3 + 1,param_2,param_4);
            }
            else {
              iVar1 = CRYPTO_ccm128_decrypt_ccm64();
            }
            if (iVar1 == 0) {
              lVar2 = CRYPTO_ccm128_tag(lVar2,local_58,(long)*(int *)(lVar5 + 0x10c));
              if ((lVar2 != 0) &&
                 (iVar1 = CRYPTO_memcmp(local_58,(void *)((long)(param_3 + 1) + param_4),
                                        (long)*(int *)(lVar5 + 0x10c)), iVar1 == 0)) {
LAB_0010233d:
                uVar4 = param_4 & 0xffffffff;
                goto LAB_00102340;
              }
            }
            OPENSSL_cleanse(param_2,param_4);
          }
          else {
            if (*(long *)(lVar5 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if ((iVar1 == 0) &&
               (lVar2 = CRYPTO_ccm128_tag(lVar2,(long)param_2 + param_4,
                                          (long)*(int *)(lVar5 + 0x10c)), lVar2 != 0)) {
              uVar4 = (ulong)(uint)(*(int *)(lVar5 + 0x10c) + 8 + (int)param_4);
              goto LAB_00102340;
            }
          }
        }
      }
    }
  }
LAB_00102509:
  uVar4 = 0xffffffff;
LAB_00102340:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 aes_ccm_init_key(long param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  AES_KEY *key;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 != (uchar *)0x0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      if (iVar1 * 8 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0xda2,"aes_ccm_init_key");
        ERR_set_error(6,0x82,0);
        return 0;
      }
      if ((DAT_0010b03d & 2) == 0) {
        AES_set_encrypt_key(param_2,iVar1 * 8,key);
        CRYPTO_ccm128_init(key[1].rd_key + 9,key[1].rd_key[6],key[1].rd_key[5],key,&AES_encrypt);
        key[1].rd_key[0x17] = 0;
        key[1].rd_key[0x18] = 0;
        key[1].rd_key[1] = 1;
      }
      else {
        vpaes_set_encrypt_key();
        CRYPTO_ccm128_init(key[1].rd_key + 9,key[1].rd_key[6],key[1].rd_key[5],key,&vpaes_encrypt);
        key[1].rd_key[0x17] = 0;
        key[1].rd_key[0x18] = 0;
        key[1].rd_key[1] = 1;
      }
    }
    if (param_3 != (void *)0x0) {
      memcpy((void *)(param_1 + 0x28),param_3,(long)(int)(0xf - key[1].rd_key[5]));
      key[1].rd_key[2] = 1;
    }
  }
  return 1;
}



undefined8 aesni_ccm_init_key(long param_1,long param_2,void *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      if (iVar1 * 8 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0x153,"aesni_ccm_init_key");
        ERR_set_error(6,0x82,0);
        return 0;
      }
      aesni_set_encrypt_key(param_2,iVar1 * 8,lVar2);
      CRYPTO_ccm128_init(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108)
                         ,lVar2,&aesni_encrypt);
      if (param_4 == 0) {
        puVar3 = &aesni_ccm64_decrypt_blocks;
      }
      else {
        puVar3 = &aesni_ccm64_encrypt_blocks;
      }
      *(undefined **)(lVar2 + 0x150) = puVar3;
      *(undefined4 *)(lVar2 + 0xf8) = 1;
    }
    if (param_3 != (void *)0x0) {
      memcpy((void *)(param_1 + 0x28),param_3,(long)(0xf - *(int *)(lVar2 + 0x108)));
      *(undefined4 *)(lVar2 + 0xfc) = 1;
    }
  }
  return 1;
}



undefined8 aes_wrap_init_key(long param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  AES_KEY *key;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 == (uchar *)0x0) {
      if (param_3 == (void *)0x0) {
        return 1;
      }
    }
    else {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar1 = iVar1 * 8;
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0xe60,"aes_wrap_init_key");
        ERR_set_error(6,0x82,0);
        return 0;
      }
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar2 == 0) {
        AES_set_decrypt_key(param_2,iVar1,key);
      }
      else {
        AES_set_encrypt_key(param_2,iVar1,key);
      }
      if (param_3 == (void *)0x0) {
        key[1].rd_key[1] = 0;
        key[1].rd_key[2] = 0;
        return 1;
      }
    }
    iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
    if (iVar1 < 0) {
      return 0;
    }
    memcpy((void *)(param_1 + 0x28),param_3,(long)iVar1);
    *(void **)(key[1].rd_key + 1) = (void *)(param_1 + 0x28);
  }
  return 1;
}



ulong aes_wrap_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0xffffffff;
  }
  iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar2 == 0) {
    if (param_4 < 0x10) {
      return 0xffffffff;
    }
  }
  else if (iVar1 == 4) goto LAB_00102a2a;
  if ((param_4 & 7) != 0) {
    return 0xffffffff;
  }
LAB_00102a2a:
  iVar2 = ossl_is_partially_overlapping(param_2,param_3,param_4 & 0xffffffff);
  if (iVar2 != 0) {
    ERR_new();
    ERR_set_debug("crypto/evp/e_aes.c",0xe87,"aes_wrap_cipher");
    ERR_set_error(6,0xa2,0);
    return 0;
  }
  if (param_2 == 0) {
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar4 = (ulong)((int)param_4 - 8);
    if (iVar2 != 0) {
      if (iVar1 == 4) {
        param_4 = param_4 + 7 & 0xfffffffffffffff8;
      }
      uVar4 = (ulong)((int)param_4 + 8);
    }
  }
  else {
    if (iVar1 == 4) {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        uVar4 = CRYPTO_128_unwrap_pad
                          (lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,&AES_decrypt)
        ;
      }
      else {
        uVar4 = CRYPTO_128_wrap_pad(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                                    &AES_encrypt);
      }
    }
    else {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        uVar4 = CRYPTO_128_unwrap(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                                  &AES_decrypt);
      }
      else {
        uVar4 = CRYPTO_128_wrap(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                                &AES_encrypt);
      }
    }
    if (uVar4 == 0) {
      return 0xffffffff;
    }
  }
  return uVar4;
}



undefined8 aes_ocb_ctrl(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0x1f0) = 0;
    uVar1 = EVP_CIPHER_get_iv_length(*param_1);
    *(undefined8 **)(lVar3 + 0x2a8) = param_1 + 5;
    *(undefined4 *)(lVar3 + 0x2e8) = uVar1;
    *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
    *(undefined8 *)(lVar3 + 0x2e0) = 0;
    break;
  default:
    return 0xffffffff;
  case 8:
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    uVar5 = CRYPTO_ocb128_copy_ctx(lVar4 + 0x1f8,lVar3 + 0x1f8,lVar4,lVar4 + 0xf8);
    return uVar5;
  case 9:
    if (0xe < param_3 - 1) {
      return 0;
    }
    *(uint *)(lVar3 + 0x2e8) = param_3;
    break;
  case 0x10:
    if (*(uint *)(lVar3 + 0x2ec) != param_3) {
      return 0;
    }
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    memcpy(param_4,(void *)(lVar3 + 0x2b0),(long)(int)param_3);
    break;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      if (0x10 < param_3) {
        return 0;
      }
      *(uint *)(lVar3 + 0x2ec) = param_3;
    }
    else {
      if (*(uint *)(lVar3 + 0x2ec) != param_3) {
        return 0;
      }
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      memcpy((void *)(lVar3 + 0x2b0),param_4,(long)(int)param_3);
    }
    break;
  case 0x25:
    *param_4 = *(undefined4 *)(lVar3 + 0x2e8);
  }
  return 1;
}



undefined8 aes_ocb_cleanup(void)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  CRYPTO_ocb128_cleanup(lVar1 + 0x1f8);
  return 1;
}



int aes_ocb_cipher(undefined8 param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *local_50;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar4 + 500) == 0) {
    return -1;
  }
  if (*(int *)(lVar4 + 0x1f0) == 0) {
    return -1;
  }
  if (param_3 == (undefined8 *)0x0) {
    iVar1 = 0;
    if (*(int *)(lVar4 + 0x2e0) < 1) {
      iVar2 = *(int *)(lVar4 + 0x2e4);
    }
    else {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        iVar1 = CRYPTO_ocb128_decrypt
                          (lVar4 + 0x1f8,lVar4 + 0x2c0,param_2,(long)*(int *)(lVar4 + 0x2e0));
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt();
      }
      if (iVar1 == 0) {
        return -1;
      }
      iVar2 = *(int *)(lVar4 + 0x2e4);
      iVar1 = *(int *)(lVar4 + 0x2e0);
      *(undefined4 *)(lVar4 + 0x2e0) = 0;
    }
    if (0 < iVar2) {
      iVar2 = CRYPTO_ocb128_aad(lVar4 + 0x1f8,lVar4 + 0x2d0);
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar4 + 0x2e4) = 0;
    }
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar2 == 0) {
      if (*(int *)(lVar4 + 0x2ec) < 0) {
        return -1;
      }
      iVar2 = CRYPTO_ocb128_finish(lVar4 + 0x1f8,lVar4 + 0x2b0);
      if (iVar2 != 0) {
        return -1;
      }
    }
    else {
      iVar2 = CRYPTO_ocb128_tag(lVar4 + 0x1f8,lVar4 + 0x2b0,0x10);
      if (iVar2 != 1) {
        return -1;
      }
    }
    *(undefined4 *)(lVar4 + 500) = 0;
    return iVar1;
  }
  if (param_2 == 0) {
    uVar7 = *(uint *)(lVar4 + 0x2e4);
    local_50 = (undefined8 *)(lVar4 + 0x2d0);
    puVar9 = (uint *)(lVar4 + 0x2e4);
    if (0 < (int)uVar7) goto LAB_00102dee;
LAB_00102f42:
    uVar6 = (ulong)((uint)param_4 & 0xf);
    if (param_4 < 0x10) {
      iVar1 = 0;
      goto LAB_00102ecb;
    }
    iVar1 = 0;
    if (param_2 == 0) goto LAB_00102f6b;
LAB_00102e7f:
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    lVar8 = param_4 - uVar6;
    if (iVar2 == 0) {
      iVar2 = CRYPTO_ocb128_decrypt(lVar4 + 0x1f8,param_3,param_2,lVar8);
    }
    else {
      iVar2 = CRYPTO_ocb128_encrypt(lVar4 + 0x1f8,param_3,param_2,lVar8);
    }
  }
  else {
    local_50 = (undefined8 *)(lVar4 + 0x2c0);
    puVar9 = (uint *)(lVar4 + 0x2e0);
    iVar1 = ossl_is_partially_overlapping
                      (*(int *)(lVar4 + 0x2e0) + param_2,param_3,param_4 & 0xffffffff);
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/e_aes.c",0xfb9,"aes_ocb_cipher");
      ERR_set_error(6,0xa2,0);
      return 0;
    }
    uVar7 = *puVar9;
    if ((int)uVar7 < 1) goto LAB_00102f42;
LAB_00102dee:
    uVar6 = (ulong)(0x10 - uVar7);
    if (param_4 < uVar6) {
      memcpy((undefined1 *)((long)(int)uVar7 + (long)local_50),param_3,param_4);
      *puVar9 = *puVar9 + (uint)param_4;
      return 0;
    }
    memcpy((undefined1 *)((long)(int)uVar7 + (long)local_50),param_3,uVar6);
    param_4 = param_4 - uVar6;
    param_3 = (undefined8 *)((long)param_3 + uVar6);
    if (param_2 != 0) {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        iVar1 = CRYPTO_ocb128_decrypt(lVar4 + 0x1f8,local_50,param_2,0x10);
      }
      else {
        iVar1 = CRYPTO_ocb128_encrypt();
      }
      if (iVar1 == 0) {
        return -1;
      }
      *puVar9 = 0;
      param_2 = param_2 + 0x10;
      iVar1 = 0x10;
      uVar6 = (ulong)((uint)param_4 & 0xf);
      if (param_4 < 0x10) {
LAB_00103111:
        iVar1 = 0x10;
        goto LAB_00102ecb;
      }
      goto LAB_00102e7f;
    }
    iVar1 = CRYPTO_ocb128_aad(lVar4 + 0x1f8,local_50,0x10);
    if (iVar1 == 0) {
      return -1;
    }
    *puVar9 = 0;
    iVar1 = 0x10;
    uVar6 = (ulong)((uint)param_4 & 0xf);
    if (param_4 < 0x10) goto LAB_00103111;
LAB_00102f6b:
    lVar8 = param_4 - uVar6;
    iVar2 = CRYPTO_ocb128_aad(lVar4 + 0x1f8,param_3,lVar8);
  }
  if (iVar2 == 0) {
    return -1;
  }
  param_3 = (undefined8 *)((long)param_3 + lVar8);
  iVar1 = (iVar1 + (int)param_4) - (int)uVar6;
LAB_00102ecb:
  if (uVar6 != 0) {
    uVar7 = (uint)uVar6;
    if (uVar7 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar7 != 0) && (*(undefined1 *)local_50 = *(undefined1 *)param_3, (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)local_50 + (uVar6 - 2)) =
               *(undefined2 *)((long)param_3 + (uVar6 - 2));
        }
      }
      else {
        *(undefined4 *)local_50 = *(undefined4 *)param_3;
        *(undefined4 *)((long)local_50 + (uVar6 - 4)) = *(undefined4 *)((long)param_3 + (uVar6 - 4))
        ;
      }
    }
    else {
      *local_50 = *param_3;
      *(undefined8 *)((long)local_50 + (uVar6 - 8)) = *(undefined8 *)((long)param_3 + (uVar6 - 8));
      lVar4 = (long)local_50 - ((ulong)(local_50 + 1) & 0xfffffffffffffff8);
      uVar3 = uVar7 + (int)lVar4 & 0xfffffff8;
      if (7 < uVar3) {
        uVar6 = 0;
        do {
          uVar5 = (int)uVar6 + 8;
          *(undefined8 *)(((ulong)(local_50 + 1) & 0xfffffffffffffff8) + uVar6) =
               *(undefined8 *)((long)param_3 + (uVar6 - lVar4));
          uVar6 = (ulong)uVar5;
        } while (uVar5 < uVar3);
      }
    }
    *puVar9 = uVar7;
  }
  return iVar1;
}



undefined8 aes_ocb_init_key(undefined8 param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  AES_KEY *key;
  undefined *puVar2;
  undefined *puVar3;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 != (uchar *)0x0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar1 = iVar1 * 8;
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0xf52,"aes_ocb_init_key");
        ERR_set_error(6,0x82,0);
      }
      else {
        if ((DAT_0010b03d & 2) == 0) {
          AES_set_encrypt_key(param_2,iVar1,key);
          AES_set_decrypt_key(param_2,iVar1,(AES_KEY *)(key[1].rd_key + 1));
          puVar3 = &AES_decrypt;
          puVar2 = &AES_encrypt;
        }
        else {
          vpaes_set_encrypt_key();
          vpaes_set_decrypt_key(param_2,iVar1,key[1].rd_key + 1);
          puVar3 = &vpaes_decrypt;
          puVar2 = &vpaes_encrypt;
        }
        iVar1 = CRYPTO_ocb128_init(key[2].rd_key + 4,key,key[1].rd_key + 1,puVar2,puVar3,0);
        if (iVar1 != 0) {
          if ((param_3 != (void *)0x0) ||
             ((key[2].rd_key[3] != 0 &&
              (param_3 = *(void **)(key[2].rd_key + 0x30), param_3 != (void *)0x0)))) {
            iVar1 = CRYPTO_ocb128_setiv(key[2].rd_key + 4,param_3,(long)(int)key[3].rd_key[3],
                                        (long)(int)key[3].rd_key[4]);
            if (iVar1 != 1) {
              return 0;
            }
            key[2].rd_key[3] = 1;
          }
          key[2].rd_key[2] = 1;
          return 1;
        }
      }
      return 0;
    }
    if (key[2].rd_key[2] == 0) {
      memcpy(*(void **)(key[2].rd_key + 0x30),param_3,(long)(int)key[3].rd_key[3]);
    }
    else {
      CRYPTO_ocb128_setiv(key[2].rd_key + 4,param_3,(long)(int)key[3].rd_key[3],
                          (long)(int)key[3].rd_key[4]);
    }
    key[2].rd_key[3] = 1;
  }
  return 1;
}



undefined8 aesni_ocb_init_key(undefined8 param_1,long param_2,void *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar1 = iVar1 * 8;
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aes.c",0x175,"aesni_ocb_init_key");
        ERR_set_error(6,0x82,0);
      }
      else {
        aesni_set_encrypt_key(param_2,iVar1,lVar2);
        aesni_set_decrypt_key(param_2,iVar1,lVar2 + 0xf8);
        if (param_4 == 0) {
          puVar3 = &aesni_ocb_decrypt;
        }
        else {
          puVar3 = &aesni_ocb_encrypt;
        }
        iVar1 = CRYPTO_ocb128_init(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,&aesni_encrypt,&aesni_decrypt,
                                   puVar3);
        if (iVar1 != 0) {
          if ((param_3 != (void *)0x0) ||
             ((*(int *)(lVar2 + 500) != 0 &&
              (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))) {
            iVar1 = CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                                        (long)*(int *)(lVar2 + 0x2ec));
            if (iVar1 != 1) {
              return 0;
            }
            *(undefined4 *)(lVar2 + 500) = 1;
          }
          *(undefined4 *)(lVar2 + 0x1f0) = 1;
          return 1;
        }
      }
      return 0;
    }
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(long)*(int *)(lVar2 + 0x2e8));
    }
    else {
      CRYPTO_ocb128_setiv(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                          (long)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  return 1;
}



undefined8 aesni_ecb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = EVP_CIPHER_CTX_get_block_size();
  if ((ulong)(long)iVar1 <= param_4) {
    uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    aesni_ecb_encrypt(param_3,param_2,param_4,uVar3,uVar2);
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_cbc(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_cbc;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_cbc;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_ecb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_ecb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_ecb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_ofb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_ofb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_ofb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_cfb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_cfb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_cfb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_cfb1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_cfb1;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_cfb1;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_cfb8(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_cfb8;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_cfb8;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_ctr(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_ctr;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_ctr;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_cbc(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_cbc;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_cbc;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_ecb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_ecb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_ecb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_ofb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_ofb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_ofb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_cfb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_cfb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_cfb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_cfb1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_cfb1;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_cfb1;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_cfb8(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_cfb8;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_cfb8;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_ctr(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_ctr;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_ctr;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_cbc(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_cbc;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_cbc;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_ecb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_ecb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_ecb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_ofb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_ofb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_ofb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_cfb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_cfb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_cfb;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_cfb1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_cfb1;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_cfb1;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_cfb8(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_cfb8;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_cfb8;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_ctr(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_ctr;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_ctr;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_gcm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_gcm;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_gcm;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_gcm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_gcm;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_gcm;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_gcm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_gcm;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_gcm;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_xts(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_xts;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_xts;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_xts(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_xts;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_xts;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_ccm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_ccm;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_ccm;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_192_ccm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_ccm;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_ccm;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_ccm(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_ccm;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_ccm;
  }
  return (EVP_CIPHER *)puVar1;
}



undefined1 * EVP_aes_128_wrap(void)

{
  return aes_128_wrap;
}



undefined1 * EVP_aes_192_wrap(void)

{
  return aes_192_wrap;
}



undefined1 * EVP_aes_256_wrap(void)

{
  return aes_256_wrap;
}



undefined1 * EVP_aes_128_wrap_pad(void)

{
  return aes_128_wrap_pad;
}



undefined1 * EVP_aes_192_wrap_pad(void)

{
  return aes_192_wrap_pad;
}



undefined1 * EVP_aes_256_wrap_pad(void)

{
  return aes_256_wrap_pad;
}



undefined1 * EVP_aes_128_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_128_ocb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_128_ocb;
  }
  return puVar1;
}



undefined1 * EVP_aes_192_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_192_ocb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_192_ocb;
  }
  return puVar1;
}



undefined1 * EVP_aes_256_ocb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aes_256_ocb;
  if ((DAT_0010b03f & 2) != 0) {
    puVar1 = aesni_256_ocb;
  }
  return puVar1;
}


