
undefined1 * krb5kdf_settable_ctx_params(void)

{
  return known_settable_ctx_params_2;
}



undefined1 * krb5kdf_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



undefined8 krb5kdf_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0x40;
  lVar2 = ossl_prov_cipher_cipher(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = EVP_CIPHER_get_key_length(lVar2);
    lVar4 = (long)iVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if (lVar2 != 0) {
    uVar3 = OSSL_PARAM_set_size_t(lVar2,lVar4);
    return uVar3;
  }
  return 0xfffffffe;
}



int cipher_init(EVP_CIPHER_CTX *param_1,EVP_CIPHER *param_2,ENGINE *param_3,uchar *param_4,
               long param_5)

{
  int iVar1;
  
  iVar1 = EVP_EncryptInit_ex(param_1,param_2,param_3,param_4,(uchar *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  if ((iVar1 != param_5) && (iVar1 = EVP_CIPHER_CTX_set_key_length(param_1,(int)param_5), iVar1 < 1)
     ) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_set_padding(param_1,0);
  return iVar1;
}



void krb5kdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  ossl_prov_cipher_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/krb5kdf.c",0x59);
  CRYPTO_clear_free(param_1[6],param_1[7],"providers/implementations/kdfs/krb5kdf.c",0x5a);
  param_1[7] = 0;
  *param_1 = uVar1;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  return;
}



undefined8 * krb5kdf_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"providers/implementations/kdfs/krb5kdf.c",0x43);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
  }
  return puVar2;
}



void krb5kdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    krb5kdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool krb5kdf_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    iVar1 = ossl_prov_cipher_load_from_params(param_1 + 1,param_2,uVar2);
    if (iVar1 == 0) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC2);
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[4],param_1[5],"providers/implementations/kdfs/krb5kdf.c",0x62);
      param_1[4] = 0;
      param_1[5] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"constant");
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[6],param_1[7],"providers/implementations/kdfs/krb5kdf.c",0x62);
      param_1[6] = 0;
      param_1[7] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 6,0,param_1 + 7);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined4 krb5kdf_derive(long param_1,DES_cblock *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  DES_cblock *pauVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  EVP_CIPHER_CTX *ctx;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uchar *puVar17;
  uint uVar18;
  ulong uVar19;
  byte *out;
  DES_cblock *key;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_d0;
  byte *local_b0;
  int local_8c;
  byte local_88 [32];
  byte local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = ossl_prov_is_running();
  if ((iVar6 != 0) && (iVar6 = krb5kdf_set_ctx_params(param_1,param_4), iVar6 != 0)) {
    lVar10 = ossl_prov_cipher_cipher(param_1 + 8);
    if (lVar10 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x89,"krb5kdf_derive");
      ERR_set_error(0x39,0x9b,0);
    }
    else if (*(long *)(param_1 + 0x20) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x8d,"krb5kdf_derive");
      ERR_set_error(0x39,0x80,0);
    }
    else if (*(long *)(param_1 + 0x30) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x91,"krb5kdf_derive");
      ERR_set_error(0x39,0x9c,0);
    }
    else {
      uVar11 = ossl_prov_cipher_engine(param_1 + 8);
      uVar1 = *(ulong *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar19 = *(ulong *)(param_1 + 0x38);
      lVar3 = *(long *)(param_1 + 0x30);
      if (uVar1 == param_3) {
        bVar4 = false;
      }
      else {
        iVar6 = EVP_CIPHER_get_nid(lVar10);
        if (((iVar6 != 0x2c) || (uVar1 != 0x18)) || (bVar4 = true, param_3 != 0x15)) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x191,"KRB5KDF");
          ERR_set_error(0x39,0x8b,0);
          goto LAB_0010032d;
        }
      }
      ctx = EVP_CIPHER_CTX_new();
      if (ctx != (EVP_CIPHER_CTX *)0x0) {
        iVar6 = cipher_init(ctx,lVar10,uVar11,uVar2,uVar1);
        if (iVar6 == 0) {
LAB_00100431:
          uVar7 = 0;
        }
        else {
          uVar8 = EVP_CIPHER_CTX_get_block_size(ctx);
          if ((long)(int)uVar8 == 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x1a4,"KRB5KDF");
            ERR_set_error(0x39,0x9b,0);
            goto LAB_00100431;
          }
          if ((ulong)(long)(int)uVar8 < uVar19) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x1aa,"KRB5KDF");
            ERR_set_error(0x39,0x9d,0);
            goto LAB_00100431;
          }
          uVar22 = (ulong)uVar8;
          if (uVar19 == uVar22) {
            __memcpy_chk(local_88,lVar3,uVar19,0x40);
          }
          else {
            local_d0 = uVar22;
            if ((int)uVar19 != 0) {
              uVar12 = (ulong)uVar8;
              uVar21 = uVar19 & 0xffffffff;
              do {
                local_d0 = uVar21;
                uVar21 = uVar12 % local_d0;
                uVar12 = local_d0;
              } while ((int)uVar21 != 0);
            }
            __memset_chk(local_88,0,uVar22,0x40);
            uVar9 = 0;
            uVar20 = (int)((uVar22 * uVar19) / local_d0) - 1;
            uVar22 = (ulong)uVar20;
            uVar21 = uVar22;
            if (-1 < (int)uVar20) {
              do {
                uVar20 = (int)(uVar21 / uVar19) * 0xd;
                bVar13 = (byte)uVar20 & 7;
                uVar20 = (int)uVar22 - (uVar20 >> 3);
                uVar18 = (int)uVar22 - 1;
                pbVar15 = local_88 + uVar22 % (ulong)uVar8;
                uVar20 = (((uint)*(byte *)(lVar3 + (ulong)(uVar20 - 1) % uVar19) <<
                           (8 - bVar13 & 0x1f) |
                          (int)(uint)*(byte *)(lVar3 + (ulong)uVar20 % uVar19) >> bVar13) & 0xff) +
                         (uint)*pbVar15 + uVar9;
                *pbVar15 = (byte)uVar20;
                uVar9 = uVar20 >> 8;
                uVar22 = (ulong)uVar18;
                uVar21 = uVar21 - 1;
              } while (uVar18 != 0xffffffff);
              if ((0 < (int)uVar8) && (uVar20 >> 8 != 0)) {
                pbVar15 = local_88 + (uVar8 - 1);
                pbVar16 = pbVar15;
                do {
                  iVar6 = (int)pbVar16;
                  iVar14 = *pbVar16 + uVar9;
                  uVar9 = 1;
                  *pbVar16 = (byte)iVar14;
                  pbVar16 = pbVar16 + -1;
                } while ((byte)((byte)((uint)iVar14 >> 8) &
                               (byte)~(byte)(((uVar8 - 2) - (int)pbVar15) + iVar6 >> 0x18) >> 7) !=
                         0);
              }
            }
          }
          local_b0 = local_88;
          if (param_3 != 0) {
            uVar19 = 0;
            pbVar15 = local_b0;
            pbVar16 = local_68;
            while (out = pbVar16, iVar6 = EVP_EncryptUpdate(ctx,out,&local_8c,pbVar15,uVar8),
                  iVar6 != 0) {
              uVar22 = (ulong)local_8c;
              iVar6 = EVP_EncryptFinal_ex(ctx,out,&local_8c);
              if (iVar6 == 0) break;
              if (local_8c != 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x1bf,"KRB5KDF");
                ERR_set_error(0x39,0x6b,0);
                break;
              }
              puVar17 = *param_2 + uVar19;
              if (param_3 - uVar19 <= uVar22) {
                uVar22 = param_3 - uVar19;
              }
              uVar19 = uVar19 + uVar22;
              memcpy(puVar17,out,uVar22);
              if (param_3 <= uVar19) goto LAB_00100698;
              iVar6 = EVP_CIPHER_CTX_reset(ctx);
              if ((iVar6 == 0) || (iVar6 = cipher_init(ctx,lVar10,uVar11,uVar2,uVar1), iVar6 == 0))
              break;
              pbVar15 = out;
              pbVar16 = local_68;
              if (out != local_b0) {
                pbVar16 = local_b0;
              }
            }
            goto LAB_00100431;
          }
LAB_00100698:
          iVar6 = EVP_CIPHER_get_nid(lVar10);
          if ((!bVar4) && (iVar6 == 0x2c)) {
            puVar17 = param_2[1] + 6;
            pauVar5 = param_2 + 2;
            do {
              key = pauVar5;
              memmove(key,puVar17,7);
              (*key)[7] = '\0';
              lVar10 = 1;
              uVar8 = 0;
              do {
                lVar3 = lVar10 + 7;
                bVar13 = (byte)lVar10;
                lVar10 = lVar10 + 1;
                uVar8 = uVar8 | (key[-1][lVar3] & 1) << (bVar13 & 0x1f);
                (*key)[7] = (uchar)uVar8;
              } while (lVar10 != 8);
              puVar17 = puVar17 + -7;
              DES_set_odd_parity(key);
              pauVar5 = key + -1;
            } while (key != param_2);
            iVar6 = CRYPTO_memcmp(key,key + 1,8);
            if ((iVar6 == 0) || (iVar6 = CRYPTO_memcmp(key + 1,param_2 + 2,8), iVar6 == 0)) {
              ERR_new();
              ERR_set_debug("providers/implementations/kdfs/krb5kdf.c",0x1e1,"KRB5KDF");
              ERR_set_error(0x39,0x79,0);
              goto LAB_00100431;
            }
          }
          uVar7 = 1;
        }
        local_b0 = local_88;
        EVP_CIPHER_CTX_free(ctx);
        OPENSSL_cleanse(local_b0,0x40);
        goto LAB_0010032f;
      }
    }
  }
LAB_0010032d:
  uVar7 = 0;
LAB_0010032f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 * krb5kdf_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x40,"providers/implementations/kdfs/krb5kdf.c",0x43);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar1;
      iVar2 = ossl_prov_memdup(param_1[4],param_1[5],ptr + 4,ptr + 5);
      if (iVar2 != 0) {
        iVar2 = ossl_prov_memdup(param_1[6],param_1[7],ptr + 6,ptr + 7);
        if (iVar2 != 0) {
          iVar2 = ossl_prov_cipher_copy(ptr + 1,param_1 + 1);
          if (iVar2 != 0) {
            return ptr;
          }
        }
      }
      krb5kdf_reset(ptr);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}


