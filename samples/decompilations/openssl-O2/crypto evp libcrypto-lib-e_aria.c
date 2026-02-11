
undefined8 aria_128_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = EVP_CIPHER_CTX_get0_cipher();
  uVar5 = (ulong)*(int *)(lVar2 + 4);
  if (uVar5 <= param_4) {
    uVar4 = 0;
    do {
      EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar1 = param_2 + uVar4;
      lVar2 = param_3 + uVar4;
      uVar4 = uVar4 + uVar5;
      ossl_aria_encrypt(lVar2,lVar1,uVar3);
    } while (uVar4 <= param_4 - uVar5);
  }
  return 1;
}



void aria_192_ecb_cipher(void)

{
  aria_128_ecb_cipher();
  return;
}



void aria_256_ecb_cipher(void)

{
  aria_128_ecb_cipher();
  return;
}



undefined8 aria_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_CIPHER_CTX_get0_cipher();
  iVar1 = EVP_CIPHER_get_mode(uVar2);
  if ((param_4 == 0) && (iVar1 - 1U < 2)) {
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar1 = ossl_aria_set_decrypt_key(param_2,iVar1 * 8,uVar2);
  }
  else {
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar1 = ossl_aria_set_encrypt_key(param_2,iVar1 * 8,uVar2);
  }
  if (-1 < iVar1) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/e_aria.c",0x4c,"aria_init_key");
  ERR_set_error(6,0xb0,0);
  return 0;
}



undefined8 aria_128_cfb128_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0x40000000;
  if (param_4 < 0x40000001) {
    uVar3 = param_4;
  }
  if ((param_4 != 0) && (uVar3 <= param_4)) {
    do {
      param_4 = param_4 - uVar3;
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = param_3 + uVar3;
      lVar4 = param_2 + uVar3;
      CRYPTO_cfb128_encrypt
                (param_3,param_2,uVar3,uVar2,param_1 + 0x28,&local_44,uVar1,_GLOBAL_OFFSET_TABLE_);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      if (param_4 < uVar3) {
        uVar3 = param_4;
      }
      param_2 = lVar4;
      param_3 = lVar5;
    } while (param_4 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void aria_192_cfb128_cipher(void)

{
  aria_128_cfb128_cipher();
  return;
}



void aria_256_cfb128_cipher(void)

{
  aria_128_cfb128_cipher();
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 aria_128_ofb_cipher(long param_1,code *param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong extraout_RDX;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  code *pcStack_70;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (code *)0x0;
  pcVar6 = param_2;
  if (0x3fffffff < param_4) {
    pcVar3 = (code *)(param_4 - 0x40000000 & 0xffffffffc0000000);
    pcVar1 = pcVar3 + 0x40000000;
    pcVar6 = param_2 + (long)pcVar1;
    uVar4 = param_4;
    lVar5 = param_3;
    pcStack_70 = pcVar1;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1,pcStack_70,uVar4,pcVar3);
      pcStack_70 = (code *)0x100324;
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pcVar3 = ossl_aria_encrypt;
      pcVar7 = param_2 + 0x40000000;
      CRYPTO_ofb128_encrypt(lVar5,param_2,0x40000000,uVar2,param_1 + 0x28,&local_44);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      uVar4 = extraout_RDX;
      lVar5 = lVar5 + 0x40000000;
      param_2 = pcVar7;
    } while (pcVar7 != pcVar6);
    param_3 = param_3 + (long)pcVar1;
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_2 = pcVar1;
  }
  if (param_4 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1,param_2,param_4,pcVar3);
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    CRYPTO_ofb128_encrypt
              (param_3,pcVar6,param_4,uVar2,param_1 + 0x28,&local_44,_GLOBAL_OFFSET_TABLE_);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



void aria_192_ofb_cipher(void)

{
  aria_128_ofb_cipher();
  return;
}



void aria_256_ofb_cipher(void)

{
  aria_128_ofb_cipher();
  return;
}



undefined8 aria_128_cfb1_cipher(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0x8000000;
  if (param_4 < 0x8000001) {
    uVar6 = param_4;
  }
  if (param_4 != 0) {
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      iVar2 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
      uVar4 = uVar6 * 8;
      if (iVar2 != 0) {
        uVar4 = uVar6;
      }
      param_4 = param_4 - uVar6;
      lVar7 = param_3 + uVar6;
      lVar5 = param_2 + uVar6;
      CRYPTO_cfb128_1_encrypt
                (param_3,param_2,uVar4,uVar3,param_1->iv,&local_44,uVar1,_GLOBAL_OFFSET_TABLE_);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      if (param_4 < uVar6) {
        uVar6 = param_4;
      }
    } while ((param_4 != 0) && (param_2 = lVar5, param_3 = lVar7, uVar6 <= param_4));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void aria_192_cfb1_cipher(void)

{
  aria_128_cfb1_cipher();
  return;
}



void aria_256_cfb1_cipher(void)

{
  aria_128_cfb1_cipher();
  return;
}



undefined8 aria_128_cfb8_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0x40000000;
  if (param_4 < 0x40000001) {
    uVar3 = param_4;
  }
  if ((param_4 != 0) && (uVar3 <= param_4)) {
    do {
      param_4 = param_4 - uVar3;
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = param_3 + uVar3;
      lVar4 = param_2 + uVar3;
      CRYPTO_cfb128_8_encrypt
                (param_3,param_2,uVar3,uVar2,param_1 + 0x28,&local_44,uVar1,_GLOBAL_OFFSET_TABLE_);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      if (param_4 < uVar3) {
        uVar3 = param_4;
      }
      param_2 = lVar4;
      param_3 = lVar5;
    } while (param_4 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void aria_192_cfb8_cipher(void)

{
  aria_128_cfb8_cipher();
  return;
}



void aria_256_cfb8_cipher(void)

{
  aria_128_cfb8_cipher();
  return;
}



bool aria_ctr_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_CIPHER_CTX_get_num();
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (-1 < iVar1) {
    local_44 = iVar1;
    uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,uVar2,param_1 + 0x28,uVar3,&local_44,_GLOBAL_OFFSET_TABLE_);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return -1 < iVar1;
}



undefined8 aria_gcm_cleanup(long param_1)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(void **)(lVar1 + 0x2e0) != (void *)(param_1 + 0x28)) {
    CRYPTO_free(*(void **)(lVar1 + 0x2e0));
  }
  return 1;
}



undefined8 aria_gcm_ctrl(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar13 = (ulong)param_3;
  lVar7 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar7 + 0x118) = 0;
    uVar4 = EVP_CIPHER_get_iv_length(*param_1);
    *(undefined8 **)(lVar7 + 0x2e0) = param_1 + 5;
    *(undefined4 *)(lVar7 + 0x2e8) = uVar4;
    *(undefined4 *)(lVar7 + 0x2ec) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0x2f0) = 0xffffffff00000000;
    break;
  default:
    return 0xffffffff;
  case 8:
    lVar9 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar7 + 0x2a8) != 0) {
      if (*(long *)(lVar7 + 0x2a8) != lVar7) {
        return 0;
      }
      *(long *)(lVar9 + 0x2a8) = lVar9;
    }
    if (*(undefined8 **)(lVar7 + 0x2e0) == param_1 + 5) {
      *(undefined8 **)(lVar9 + 0x2e0) = param_4 + 5;
    }
    else {
      pvVar8 = CRYPTO_malloc(*(int *)(lVar7 + 0x2e8),"crypto/evp/e_aria.c",0x181);
      *(void **)(lVar9 + 0x2e0) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar8,*(void **)(lVar7 + 0x2e0),(long)*(int *)(lVar7 + 0x2e8));
    }
    break;
  case 9:
    if ((int)param_3 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_3) && (*(int *)(lVar7 + 0x2e8) < (int)param_3)) {
      if (*(undefined8 **)(lVar7 + 0x2e0) != param_1 + 5) {
        CRYPTO_free(*(undefined8 **)(lVar7 + 0x2e0));
      }
      pvVar8 = CRYPTO_malloc(param_3,"crypto/evp/e_aria.c",0x11a);
      *(void **)(lVar7 + 0x2e0) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        return 0;
      }
    }
    *(uint *)(lVar7 + 0x2e8) = param_3;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    if (*(int *)(lVar7 + 0x2ec) < 0) {
      return 0;
    }
    puVar10 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)param_4 = *(undefined1 *)puVar10, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)param_4 + (uVar13 - 2)) =
               *(undefined2 *)((long)puVar10 + (uVar13 - 2));
        }
      }
      else {
        *(undefined4 *)param_4 = *(undefined4 *)puVar10;
        *(undefined4 *)((long)param_4 + (uVar13 - 4)) =
             *(undefined4 *)((long)puVar10 + (uVar13 - 4));
      }
    }
    else {
      *param_4 = *puVar10;
      *(undefined8 *)((long)param_4 + (uVar13 - 8)) = *(undefined8 *)((long)puVar10 + (uVar13 - 8));
      lVar7 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar6 = param_3 + (int)lVar7 & 0xfffffff8;
      if (7 < uVar6) {
        uVar12 = 0;
        do {
          uVar13 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar13) =
               *(undefined8 *)((long)puVar10 + (uVar13 - lVar7));
        } while (uVar12 < uVar6);
      }
    }
    break;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 != 0) {
      return 0;
    }
    puVar10 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)puVar10 = *(undefined1 *)param_4, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)puVar10 + (uVar13 - 2)) =
               *(undefined2 *)((long)param_4 + (uVar13 - 2));
        }
      }
      else {
        *(undefined4 *)puVar10 = *(undefined4 *)param_4;
        *(undefined4 *)((long)puVar10 + (uVar13 - 4)) =
             *(undefined4 *)((long)param_4 + (uVar13 - 4));
      }
    }
    else {
      *puVar10 = *param_4;
      *(undefined8 *)((long)puVar10 + (uVar13 - 8)) = *(undefined8 *)((long)param_4 + (uVar13 - 8));
      lVar9 = (long)puVar10 - ((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
      uVar6 = (int)lVar9 + param_3 & 0xfffffff8;
      if (7 < uVar6) {
        uVar13 = 0;
        do {
          uVar12 = (int)uVar13 + 8;
          *(undefined8 *)(((ulong)(puVar10 + 1) & 0xfffffffffffffff8) + uVar13) =
               *(undefined8 *)((long)param_4 + (uVar13 - lVar9));
          uVar13 = (ulong)uVar12;
        } while (uVar12 < uVar6);
      }
    }
    *(uint *)(lVar7 + 0x2ec) = param_3;
    break;
  case 0x12:
    if (param_3 == 0xffffffff) {
      memcpy(*(void **)(lVar7 + 0x2e0),param_4,(long)*(int *)(lVar7 + 0x2e8));
      *(undefined4 *)(lVar7 + 0x2f0) = 1;
    }
    else {
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar7 + 0x2e8) - param_3) < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar7 + 0x2e0),param_4,(long)(int)param_3);
      iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if ((iVar5 != 0) &&
         (iVar5 = RAND_bytes((uchar *)((long)(int)param_3 + *(long *)(lVar7 + 0x2e0)),
                             *(int *)(lVar7 + 0x2e8) - param_3), iVar5 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar7 + 0x2f0) = 1;
    }
    break;
  case 0x13:
    if (*(int *)(lVar7 + 0x2f0) == 0) {
      return 0;
    }
    if (*(int *)(lVar7 + 0x118) == 0) {
      return 0;
    }
    CRYPTO_gcm128_setiv(lVar7 + 0x120,*(undefined8 *)(lVar7 + 0x2e0),(long)*(int *)(lVar7 + 0x2e8));
    uVar6 = *(uint *)(lVar7 + 0x2e8);
    uVar12 = uVar6;
    if ((0 < (int)param_3) && ((int)param_3 <= (int)uVar6)) {
      uVar12 = param_3;
    }
    memcpy(param_4,(void *)(((long)(int)uVar6 - (long)(int)uVar12) + *(long *)(lVar7 + 0x2e0)),
           (long)(int)uVar12);
    lVar9 = 7;
    lVar11 = (long)*(int *)(lVar7 + 0x2e8) + *(long *)(lVar7 + 0x2e0);
    do {
      iVar5 = (int)lVar9;
      cVar1 = *(char *)(lVar11 + -8 + lVar9) + '\x01';
      *(char *)(lVar11 + -8 + lVar9) = cVar1;
      lVar9 = lVar9 + -1;
    } while (iVar5 != 0 && cVar1 == '\0');
    goto LAB_00100ad8;
  case 0x16:
    if (param_3 == 0xd) {
      puVar10 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
      *puVar10 = *param_4;
      *(undefined8 *)((long)puVar10 + 5) = *(undefined8 *)((long)param_4 + 5);
      *(undefined4 *)(lVar7 + 0x2f4) = 0xd;
      lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar2 = *(undefined1 *)(lVar7 + 0xb);
      lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar3 = CONCAT11(uVar2,*(undefined1 *)(lVar7 + 0xc));
      if (7 < uVar3) {
        uVar6 = uVar3 - 8;
        iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar5 == 0) {
          if (uVar6 < 0x10) {
            return 0;
          }
          uVar6 = uVar3 - 0x18;
        }
        lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar7 + 0xb) = (char)(uVar6 >> 8);
        lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar7 + 0xc) = (char)uVar6;
        return 0x10;
      }
    }
    return 0;
  case 0x18:
    if (*(int *)(lVar7 + 0x2f0) == 0) {
      return 0;
    }
    if (*(int *)(lVar7 + 0x118) == 0) {
      return 0;
    }
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 != 0) {
      return 0;
    }
    memcpy((void *)(((long)*(int *)(lVar7 + 0x2e8) - (long)(int)param_3) + *(long *)(lVar7 + 0x2e0))
           ,param_4,(long)(int)param_3);
    CRYPTO_gcm128_setiv(lVar7 + 0x120,*(undefined8 *)(lVar7 + 0x2e0),(long)*(int *)(lVar7 + 0x2e8));
LAB_00100ad8:
    *(undefined4 *)(lVar7 + 0x11c) = 1;
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar7 + 0x2e8);
  }
  return 1;
}



ulong aria_gcm_cipher(EVP_CIPHER_CTX *param_1,void *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *a;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar3 + 0x118) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x2f4) < 0) {
    if (*(int *)(lVar3 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_3 != (void *)0x0) {
      if (param_2 == (void *)0x0) {
        iVar2 = CRYPTO_gcm128_aad(lVar3 + 0x120,param_3,param_4);
      }
      else {
        iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar2 == 0) {
          iVar2 = CRYPTO_gcm128_decrypt(lVar3 + 0x120,param_3,param_2,param_4);
        }
        else {
          iVar2 = CRYPTO_gcm128_encrypt();
        }
      }
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar2 != 0) {
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_gcm128_tag(lVar3 + 0x120,uVar5,0x10);
      *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
      *(undefined4 *)(lVar3 + 0x11c) = 0;
      return 0;
    }
    iVar2 = *(int *)(lVar3 + 0x2ec);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar2 = CRYPTO_gcm128_finish(lVar3 + 0x120,uVar5,(long)iVar2);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x11c) = 0;
    return 0;
  }
  lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (param_3 != param_2) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  iVar2 = EVP_CIPHER_CTX_ctrl(param_1,(-(uint)(iVar2 == 0) & 5) + 0x13,8,param_2);
  if (0 < iVar2) {
    iVar2 = *(int *)(lVar3 + 0x2f4);
    lVar1 = lVar3 + 0x120;
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar2 = CRYPTO_gcm128_aad(lVar1,uVar5,(long)iVar2);
    if (iVar2 == 0) {
      param_2 = (void *)((long)param_2 + 8);
      param_4 = param_4 - 0x18;
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar2 == 0) {
        iVar2 = CRYPTO_gcm128_decrypt();
        if (iVar2 == 0) {
          uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_gcm128_tag(lVar1,uVar5,0x10);
          a = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
          iVar2 = CRYPTO_memcmp(a,(void *)((long)param_3 + 8 + param_4),0x10);
          uVar4 = param_4 & 0xffffffff;
          if (iVar2 == 0) goto LAB_00100ecd;
          OPENSSL_cleanse(param_2,param_4);
        }
      }
      else {
        iVar2 = CRYPTO_gcm128_encrypt(lVar1,(long)param_3 + 8,param_2,param_4);
        if (iVar2 == 0) {
          CRYPTO_gcm128_tag(lVar1,(long)param_2 + param_4,0x10);
          uVar4 = (ulong)((int)param_4 + 0x18);
          goto LAB_00100ecd;
        }
      }
    }
  }
  uVar4 = 0xffffffff;
LAB_00100ecd:
  *(undefined4 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 0x2f4) = 0xffffffff;
  return uVar4;
}



undefined8 aria_gcm_init_key(undefined8 param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(lVar2 + 0x118) == 0) {
        memcpy(*(void **)(lVar2 + 0x2e0),param_3,(long)*(int *)(lVar2 + 0x2e8));
      }
      else {
        CRYPTO_gcm128_setiv(lVar2 + 0x120,param_3);
      }
      *(undefined4 *)(lVar2 + 0x11c) = 1;
      *(undefined4 *)(lVar2 + 0x2f0) = 0;
    }
    else {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar1 = ossl_aria_set_encrypt_key(param_2,iVar1 * 8,lVar2);
      CRYPTO_gcm128_init(lVar2 + 0x120,lVar2,ossl_aria_encrypt);
      if (iVar1 < 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aria.c",0xe6,"aria_gcm_init_key");
        ERR_set_error(6,0xb0,0);
        return 0;
      }
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(lVar2 + 0x11c) != 0 &&
          (param_3 = *(void **)(lVar2 + 0x2e0), param_3 != (void *)0x0)))) {
        CRYPTO_gcm128_setiv(lVar2 + 0x120,param_3,(long)*(int *)(lVar2 + 0x2e8));
        *(undefined4 *)(lVar2 + 0x11c) = 1;
      }
      *(undefined4 *)(lVar2 + 0x118) = 1;
    }
  }
  return 1;
}



undefined4 aria_ccm_ctrl(long param_1,undefined4 param_2,uint param_3,int *param_4)

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
    *(undefined4 *)(lVar5 + 0x130) = 0xffffffff;
    *(undefined1 (*) [16])(lVar5 + 0x118) = (undefined1  [16])0x0;
    *(undefined8 *)(lVar5 + 0x128) = uVar2;
    break;
  default:
    return 0xffffffff;
  case 8:
    lVar7 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar5 + 0x168) != 0) {
      if (*(long *)(lVar5 + 0x168) != lVar5) {
        return 0;
      }
      *(long *)(lVar7 + 0x168) = lVar7;
    }
    break;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (6 < param_3 - 2) {
      return 0;
    }
    *(uint *)(lVar5 + 0x128) = param_3;
    break;
  case 0x10:
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x120) == 0) {
      return 0;
    }
    lVar7 = CRYPTO_ccm128_tag(lVar5 + 0x138,param_4,(long)(int)param_3);
    if (lVar7 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar5 + 0x11c) = 0;
    *(undefined4 *)(lVar5 + 0x124) = 0;
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
        *(undefined4 *)(lVar5 + 0x120) = 1;
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
    *(uint *)(lVar5 + 300) = param_3;
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
    *(undefined4 *)(lVar5 + 0x130) = 0xd;
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
      if ((int)(uint)uVar11 < *(int *)(lVar5 + 300)) {
        return 0;
      }
      uVar11 = uVar11 - (short)*(int *)(lVar5 + 300);
    }
    lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
    *(char *)(lVar7 + 0xb) = (char)(uVar11 >> 8);
    lVar7 = EVP_CIPHER_CTX_buf_noconst(param_1);
    *(char *)(lVar7 + 0xc) = (char)uVar11;
    return *(undefined4 *)(lVar5 + 300);
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar5 + 0x128);
  }
  return 1;
}



ulong aria_ccm_cipher(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

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
  if (*(int *)(lVar2 + 0x118) != 0) {
    if (*(int *)(lVar2 + 0x130) < 0) {
      if ((param_3 == (undefined8 *)0x0) && (uVar4 = 0, param_2 != (undefined8 *)0x0))
      goto LAB_00101610;
      if (*(int *)(lVar2 + 0x11c) != 0) {
        lVar5 = lVar2 + 0x138;
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x128)),
                                        param_4);
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x124) = 1;
              uVar4 = param_4 & 0xffffffff;
              goto LAB_00101610;
            }
          }
          else if ((*(int *)(lVar2 + 0x124) != 0) || (param_4 == 0)) {
            CRYPTO_ccm128_aad(lVar5,param_3,param_4);
            uVar4 = param_4 & 0xffffffff;
            goto LAB_00101610;
          }
        }
        else {
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if ((iVar1 != 0) || (*(int *)(lVar2 + 0x120) != 0)) {
            if (*(int *)(lVar2 + 0x124) == 0) {
              iVar1 = CRYPTO_ccm128_setiv(lVar5,param_1 + 0x28,(long)(0xf - *(int *)(lVar2 + 0x128))
                                          ,param_4);
              if (iVar1 != 0) goto LAB_001017d9;
              *(undefined4 *)(lVar2 + 0x124) = 1;
            }
            iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
            if (iVar1 == 0) {
              if (*(long *)(lVar2 + 0x170) == 0) {
                iVar1 = CRYPTO_ccm128_decrypt(lVar5,param_3,param_2,param_4);
              }
              else {
                iVar1 = CRYPTO_ccm128_decrypt_ccm64();
              }
              if (iVar1 == 0) {
                lVar5 = CRYPTO_ccm128_tag(lVar5,local_58,(long)*(int *)(lVar2 + 300));
                if (lVar5 == 0) goto LAB_0010181f;
                iVar1 = *(int *)(lVar2 + 300);
                b = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
                iVar1 = CRYPTO_memcmp(local_58,b,(long)iVar1);
                if ((iVar1 != 0) || (uVar4 = param_4 & 0xffffffff, (int)param_4 == -1))
                goto LAB_0010181f;
              }
              else {
LAB_0010181f:
                OPENSSL_cleanse(param_2,param_4);
                uVar4 = 0xffffffff;
              }
              *(undefined8 *)(lVar2 + 0x11c) = 0;
              *(undefined4 *)(lVar2 + 0x124) = 0;
              goto LAB_00101610;
            }
            if (*(long *)(lVar2 + 0x170) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x120) = 1;
              goto LAB_0010160d;
            }
          }
        }
      }
    }
    else {
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = lVar5 + 0x138;
      if ((param_3 == param_2) && ((long)*(int *)(lVar5 + 300) + 8U <= param_4)) {
        iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar1 != 0) {
          puVar6 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
          *param_3 = *puVar6;
        }
        *(undefined8 *)(param_1 + 0x2c) = *param_3;
        param_4 = param_4 - (long)(*(int *)(lVar5 + 300) + 8);
        iVar1 = CRYPTO_ccm128_setiv(lVar2,param_1 + 0x28,(long)(0xf - *(int *)(lVar5 + 0x128)),
                                    param_4);
        if (iVar1 == 0) {
          iVar1 = *(int *)(lVar5 + 0x130);
          param_2 = param_2 + 1;
          uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_ccm128_aad(lVar2,uVar3,(long)iVar1);
          iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar5 + 0x170) == 0) {
              iVar1 = CRYPTO_ccm128_decrypt(lVar2,param_3 + 1,param_2,param_4);
            }
            else {
              iVar1 = CRYPTO_ccm128_decrypt_ccm64();
            }
            if (iVar1 == 0) {
              lVar2 = CRYPTO_ccm128_tag(lVar2,local_58,(long)*(int *)(lVar5 + 300));
              if ((lVar2 != 0) &&
                 (iVar1 = CRYPTO_memcmp(local_58,(void *)((long)(param_3 + 1) + param_4),
                                        (long)*(int *)(lVar5 + 300)), iVar1 == 0)) {
LAB_0010160d:
                uVar4 = param_4 & 0xffffffff;
                goto LAB_00101610;
              }
            }
            OPENSSL_cleanse(param_2,param_4);
          }
          else {
            if (*(long *)(lVar5 + 0x170) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt();
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64();
            }
            if ((iVar1 == 0) &&
               (lVar2 = CRYPTO_ccm128_tag(lVar2,(long)param_2 + param_4,(long)*(int *)(lVar5 + 300))
               , lVar2 != 0)) {
              uVar4 = (ulong)(uint)(*(int *)(lVar5 + 300) + 8 + (int)param_4);
              goto LAB_00101610;
            }
          }
        }
      }
    }
  }
LAB_001017d9:
  uVar4 = 0xffffffff;
LAB_00101610:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 aria_ccm_init_key(long param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != 0) {
    if (param_2 != 0) {
      iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar1 = ossl_aria_set_encrypt_key(param_2,iVar1 * 8,lVar2);
      CRYPTO_ccm128_init(lVar2 + 0x138,*(undefined4 *)(lVar2 + 300),*(undefined4 *)(lVar2 + 0x128),
                         lVar2,ossl_aria_encrypt);
      if (iVar1 < 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_aria.c",0x20c,"aria_ccm_init_key");
        ERR_set_error(6,0xb0,0);
        return 0;
      }
      *(undefined8 *)(lVar2 + 0x170) = 0;
      *(undefined4 *)(lVar2 + 0x118) = 1;
    }
    if (param_3 != (void *)0x0) {
      memcpy((void *)(param_1 + 0x28),param_3,(long)(0xf - *(int *)(lVar2 + 0x128)));
      *(undefined4 *)(lVar2 + 0x11c) = 1;
    }
  }
  return 1;
}



undefined8 aria_128_cbc_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_50;
  long local_48;
  
  local_50 = param_4;
  local_48 = param_2;
  if (0x3fffffff < param_4) {
    local_48 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_3 + local_48;
    lVar4 = param_2;
    do {
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (iVar2 == 0) {
        CRYPTO_cbc128_decrypt();
      }
      else {
        CRYPTO_cbc128_encrypt(param_3,lVar4,0x40000000,uVar3,param_1 + 0x28,ossl_aria_encrypt);
      }
      param_3 = param_3 + 0x40000000;
      lVar4 = lVar4 + 0x40000000;
    } while (param_3 != lVar1);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_2 + local_48;
    param_3 = lVar1;
  }
  if (local_50 != 0) {
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    if (iVar2 == 0) {
      CRYPTO_cbc128_decrypt(param_3,local_48,local_50,uVar3,param_1 + 0x28,ossl_aria_encrypt);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}



void aria_192_cbc_cipher(void)

{
  aria_128_cbc_cipher();
  return;
}



void aria_256_cbc_cipher(void)

{
  aria_128_cbc_cipher();
  return;
}



undefined1 * EVP_aria_128_cbc(void)

{
  return aria_128_cbc;
}



undefined1 * EVP_aria_128_cfb128(void)

{
  return aria_128_cfb128;
}



undefined1 * EVP_aria_128_ofb(void)

{
  return aria_128_ofb;
}



undefined1 * EVP_aria_128_ecb(void)

{
  return aria_128_ecb;
}



undefined1 * EVP_aria_192_cbc(void)

{
  return aria_192_cbc;
}



undefined1 * EVP_aria_192_cfb128(void)

{
  return aria_192_cfb128;
}



undefined1 * EVP_aria_192_ofb(void)

{
  return aria_192_ofb;
}



undefined1 * EVP_aria_192_ecb(void)

{
  return aria_192_ecb;
}



undefined1 * EVP_aria_256_cbc(void)

{
  return aria_256_cbc;
}



undefined1 * EVP_aria_256_cfb128(void)

{
  return aria_256_cfb128;
}



undefined1 * EVP_aria_256_ofb(void)

{
  return aria_256_ofb;
}



undefined1 * EVP_aria_256_ecb(void)

{
  return aria_256_ecb;
}



undefined1 * EVP_aria_128_cfb1(void)

{
  return aria_128_cfb1;
}



undefined1 * EVP_aria_192_cfb1(void)

{
  return aria_192_cfb1;
}



undefined1 * EVP_aria_256_cfb1(void)

{
  return aria_256_cfb1;
}



undefined1 * EVP_aria_128_cfb8(void)

{
  return aria_128_cfb8;
}



undefined1 * EVP_aria_192_cfb8(void)

{
  return aria_192_cfb8;
}



undefined1 * EVP_aria_256_cfb8(void)

{
  return aria_256_cfb8;
}



undefined1 * EVP_aria_128_ctr(void)

{
  return aria_128_ctr;
}



undefined1 * EVP_aria_192_ctr(void)

{
  return aria_192_ctr;
}



undefined1 * EVP_aria_256_ctr(void)

{
  return aria_256_ctr;
}



undefined1 * EVP_aria_128_gcm(void)

{
  return aria_128_gcm;
}



undefined1 * EVP_aria_192_gcm(void)

{
  return aria_192_gcm;
}



undefined1 * EVP_aria_256_gcm(void)

{
  return aria_256_gcm;
}



undefined1 * EVP_aria_128_ccm(void)

{
  return aria_128_ccm;
}



undefined1 * EVP_aria_192_ccm(void)

{
  return aria_192_ccm;
}



undefined1 * EVP_aria_256_ccm(void)

{
  return aria_256_ccm;
}


