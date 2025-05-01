
int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    ERR_new();
    uVar4 = 0xf4;
  }
  else {
    if (*(int *)ctx != 0x200) {
      ERR_new();
      ERR_set_debug("crypto/evp/asymcipher.c",0xf9,"EVP_PKEY_encrypt");
      ERR_set_error(6,0x97,0);
      return -1;
    }
    if (*(long *)(ctx + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010004a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*(long *)(ctx + 0x28) + 0x38))();
      return iVar2;
    }
    lVar1 = *(long *)(ctx + 0x78);
    if ((lVar1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x98), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(byte *)(lVar1 + 4) & 2) == 0) {
LAB_00100073:
                    /* WARNING: Could not recover jumptable at 0x0010007e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE)(ctx);
        return iVar2;
      }
      iVar2 = EVP_PKEY_get_size(*(undefined8 *)(ctx + 0x88));
      uVar3 = (ulong)iVar2;
      if (uVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/asymcipher.c",0x109,"EVP_PKEY_encrypt");
        ERR_set_error(6,0xa3,0);
      }
      else {
        if (out == (uchar *)0x0) {
          *outlen = uVar3;
          return 1;
        }
        if (uVar3 <= *outlen) {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(ctx + 0x78) + 0x98);
          goto LAB_00100073;
        }
        ERR_new();
        ERR_set_debug("crypto/evp/asymcipher.c",0x109,"EVP_PKEY_encrypt");
        ERR_set_error(6,0x9b,0);
      }
      return 0;
    }
    ERR_new();
    uVar4 = 0x106;
  }
  ERR_set_debug("crypto/evp/asymcipher.c",uVar4,"EVP_PKEY_encrypt");
  ERR_set_error(6,0x96,0);
  return -2;
}



int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    ERR_new();
    uVar4 = 0x11e;
  }
  else {
    if (*(int *)ctx != 0x400) {
      ERR_new();
      ERR_set_debug("crypto/evp/asymcipher.c",0x123,"EVP_PKEY_decrypt");
      ERR_set_error(6,0x97,0);
      return -1;
    }
    if (*(long *)(ctx + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010022a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*(long *)(ctx + 0x28) + 0x48))();
      return iVar2;
    }
    lVar1 = *(long *)(ctx + 0x78);
    if ((lVar1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xa8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(byte *)(lVar1 + 4) & 2) == 0) {
LAB_00100253:
                    /* WARNING: Could not recover jumptable at 0x0010025e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE)(ctx);
        return iVar2;
      }
      iVar2 = EVP_PKEY_get_size(*(undefined8 *)(ctx + 0x88));
      uVar3 = (ulong)iVar2;
      if (uVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/asymcipher.c",0x133,"EVP_PKEY_decrypt");
        ERR_set_error(6,0xa3,0);
      }
      else {
        if (out == (uchar *)0x0) {
          *outlen = uVar3;
          return 1;
        }
        if (uVar3 <= *outlen) {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(ctx + 0x78) + 0xa8);
          goto LAB_00100253;
        }
        ERR_new();
        ERR_set_debug("crypto/evp/asymcipher.c",0x133,"EVP_PKEY_decrypt");
        ERR_set_error(6,0x9b,0);
      }
      return 0;
    }
    ERR_new();
    uVar4 = 0x130;
  }
  ERR_set_debug("crypto/evp/asymcipher.c",uVar4,"EVP_PKEY_decrypt");
  ERR_set_error(6,0x96,0);
  return -2;
}



undefined8
evp_pkey_decrypt_alloc
          (EVP_PKEY_CTX *param_1,undefined8 *param_2,size_t *param_3,size_t param_4,uchar *param_5,
          size_t param_6)

{
  int iVar1;
  uchar *out;
  
  iVar1 = EVP_PKEY_decrypt(param_1,(uchar *)0x0,param_3,param_5,param_6);
  if (0 < iVar1) {
    out = (uchar *)CRYPTO_malloc((int)*param_3,"crypto/evp/asymcipher.c",0x13d);
    *param_2 = out;
    if (out != (uchar *)0x0) {
      iVar1 = EVP_PKEY_decrypt(param_1,out,param_3,param_5,param_6);
      if (((0 < iVar1) && (*param_3 != 0)) && ((*param_3 == param_4 || (param_4 == 0)))) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/asymcipher.c",0x142,"evp_pkey_decrypt_alloc");
      ERR_set_error(6,0x80006,0);
      CRYPTO_clear_free(*param_2,*param_3,"crypto/evp/asymcipher.c",0x143);
      *param_2 = 0;
      return 0;
    }
  }
  return 0xffffffff;
}



void EVP_ASYM_CIPHER_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_free(*(void **)((long)param_1 + 8));
  ossl_provider_free(*(undefined8 *)((long)param_1 + 0x18));
  CRYPTO_free(param_1);
  return;
}



void evp_asym_cipher_free(void)

{
  EVP_ASYM_CIPHER_free();
  return;
}



undefined4 * evp_asym_cipher_from_algorithm(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *ptr;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar4 = *(int **)(param_2 + 0x10);
  ptr = (undefined4 *)CRYPTO_zalloc(0x80,"crypto/evp/asymcipher.c",0x14c);
  if (ptr != (undefined4 *)0x0) {
    LOCK();
    ptr[8] = 1;
    UNLOCK();
    iVar1 = ossl_provider_up_ref(param_3);
    if (iVar1 != 0) {
      *(undefined8 *)(ptr + 6) = param_3;
      *ptr = param_1;
      lVar2 = ossl_algorithm_get1_first_name();
      *(long *)(ptr + 2) = lVar2;
      if (lVar2 != 0) {
        *(undefined8 *)(ptr + 4) = *(undefined8 *)(param_2 + 0x18);
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          uVar7 = 0;
          uVar8 = 0;
          iVar5 = 0;
          uVar3 = 0;
          iVar6 = 0;
          do {
            switch(iVar1) {
            case 1:
              if (*(long *)(ptr + 10) != 0) break;
              iVar6 = iVar6 + 1;
              *(undefined8 *)(ptr + 10) = *(undefined8 *)(piVar4 + 2);
              iVar1 = piVar4[4];
              goto joined_r0x001007f0;
            case 2:
              if (*(long *)(ptr + 0xc) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0xc) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 3:
              if (*(long *)(ptr + 0xe) == 0) {
                uVar3 = uVar3 + 1;
                *(undefined8 *)(ptr + 0xe) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 4:
              if (*(long *)(ptr + 0x10) == 0) {
                iVar5 = iVar5 + 1;
                *(undefined8 *)(ptr + 0x10) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 5:
              if (*(long *)(ptr + 0x12) == 0) {
                iVar5 = iVar5 + 1;
                *(undefined8 *)(ptr + 0x12) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 6:
              if (*(long *)(ptr + 0x14) == 0) {
                iVar6 = iVar6 + 1;
                *(undefined8 *)(ptr + 0x14) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 7:
              if (*(long *)(ptr + 0x16) == 0) {
                *(undefined8 *)(ptr + 0x16) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 8:
              if (*(long *)(ptr + 0x18) == 0) {
                uVar8 = uVar8 + 1;
                *(undefined8 *)(ptr + 0x18) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 9:
              if (*(long *)(ptr + 0x1a) == 0) {
                uVar8 = uVar8 + 1;
                *(undefined8 *)(ptr + 0x1a) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 10:
              if (*(long *)(ptr + 0x1c) == 0) {
                uVar7 = uVar7 + 1;
                *(undefined8 *)(ptr + 0x1c) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
              break;
            case 0xb:
              if (*(long *)(ptr + 0x1e) == 0) {
                uVar7 = uVar7 + 1;
                *(undefined8 *)(ptr + 0x1e) = *(undefined8 *)(piVar4 + 2);
                iVar1 = piVar4[4];
                goto joined_r0x001007f0;
              }
            }
            iVar1 = piVar4[4];
joined_r0x001007f0:
            piVar4 = piVar4 + 4;
          } while (iVar1 != 0);
          if ((iVar6 == 2) &&
             (((uVar3 == 2 && iVar5 == 0 || (iVar5 == 2)) &&
              (((uVar3 | uVar8 | uVar7) & 0xfffffffd) == 0)))) {
            return ptr;
          }
        }
        ERR_new();
        ERR_set_debug("crypto/evp/asymcipher.c",0x1c7,"evp_asym_cipher_from_algorithm");
        ERR_set_error(6,0xc1,0);
      }
      goto LAB_0010068c;
    }
    CRYPTO_free(ptr);
  }
  ERR_new();
  ptr = (undefined4 *)0x0;
  ERR_set_debug("crypto/evp/asymcipher.c",0x166,"evp_asym_cipher_from_algorithm");
  ERR_set_error(6,0x80006,0);
LAB_0010068c:
  EVP_ASYM_CIPHER_free(ptr);
  return (undefined4 *)0x0;
}



undefined8 EVP_ASYM_CIPHER_up_ref(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return 1;
}



void evp_asym_cipher_up_ref(void)

{
  EVP_ASYM_CIPHER_up_ref();
  return;
}



undefined8 EVP_ASYM_CIPHER_get0_provider(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



void EVP_ASYM_CIPHER_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,0xd,param_2,param_3,evp_asym_cipher_from_algorithm,
                    evp_asym_cipher_up_ref,evp_asym_cipher_free);
  return;
}



void evp_asym_cipher_fetch_from_prov(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch_from_prov
            (param_1,0xd,param_2,param_3,evp_asym_cipher_from_algorithm,evp_asym_cipher_up_ref,
             evp_asym_cipher_free);
  return;
}



int evp_pkey_asym_cipher_init(int *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 == (int *)0x0) {
    ERR_new();
    uVar6 = 0x2a;
LAB_00100e4b:
    iVar3 = -2;
    ERR_set_debug("crypto/evp/asymcipher.c",uVar6,"evp_pkey_asym_cipher_init");
    ERR_set_error(6,0x96,0);
  }
  else {
    evp_pkey_ctx_free_old_ops();
    *param_1 = param_2;
    ERR_set_mark();
    lVar10 = *(long *)(param_1 + 8);
    if (lVar10 == 0) {
LAB_00100c30:
      ERR_pop_to_mark();
      EVP_KEYMGMT_free(local_48);
      lVar10 = *(long *)(param_1 + 0x1e);
      local_48 = 0;
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x98) == 0)) {
        ERR_new();
        uVar6 = 199;
        goto LAB_00100e4b;
      }
      if (*param_1 == 0x200) {
        pcVar11 = *(code **)(lVar10 + 0x90);
      }
      else {
        if (*param_1 != 0x400) {
          ERR_new();
          iVar3 = -1;
          ERR_set_debug("crypto/evp/asymcipher.c",0xd6,"evp_pkey_asym_cipher_init");
          ERR_set_error(6,0x86,0);
          goto LAB_00100d08;
        }
        pcVar11 = *(code **)(lVar10 + 0xa0);
      }
      if (pcVar11 == (code *)0x0) {
LAB_00100bd8:
        iVar3 = 1;
        goto LAB_00100ca2;
      }
      iVar3 = (*pcVar11)(param_1);
      if (iVar3 < 1) goto LAB_00100d08;
    }
    else {
      if (*(long *)(param_1 + 0x22) == 0) {
        ERR_clear_last_mark();
        iVar3 = 0;
        ERR_new();
        ERR_set_debug("crypto/evp/asymcipher.c",0x38,"evp_pkey_asym_cipher_init");
        ERR_set_error(6,0x9a,0);
      }
      else {
        lVar1 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
        if (lVar1 == 0 || lVar10 == lVar1) {
          lVar4 = evp_keymgmt_util_query_operation_name(lVar10,0xd);
          if (lVar4 != 0) {
            EVP_ASYM_CIPHER_free(0);
            EVP_KEYMGMT_free(local_48);
            lVar5 = EVP_ASYM_CIPHER_fetch
                              (*(undefined8 *)(param_1 + 2),lVar4,*(undefined8 *)(param_1 + 4));
            if (lVar5 == 0) goto LAB_00100ad0;
            uVar12 = 1;
            uVar6 = EVP_ASYM_CIPHER_get0_provider(lVar5);
            do {
              uVar2 = *(undefined8 *)(param_1 + 4);
              uVar8 = EVP_KEYMGMT_get0_name(*(undefined8 *)(param_1 + 8));
              lVar9 = evp_keymgmt_fetch_from_prov(uVar6,uVar8,uVar2);
              local_48 = lVar9;
              if (lVar9 != 0) {
                lVar7 = evp_pkey_export_to_provider
                                  (*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                   &local_48,*(undefined8 *)(param_1 + 4));
                bVar13 = lVar7 == 0;
                if (local_48 == 0) goto LAB_00100b43;
                if (uVar12 < 2) goto LAB_00100ac8;
LAB_00100b60:
                if (lVar7 != 0) {
                  ERR_pop_to_mark();
                  *(long *)(param_1 + 10) = lVar5;
                  pcVar11 = *(code **)(lVar5 + 0x28);
                  uVar6 = ossl_provider_ctx(*(undefined8 *)(lVar5 + 0x18));
                  lVar10 = (*pcVar11)(uVar6);
                  *(long *)(param_1 + 0xc) = lVar10;
                  if (lVar10 == 0) {
                    ERR_new(0);
                    uVar6 = 0x9e;
                    goto LAB_00100d31;
                  }
                  if (param_2 == 0x200) {
                    pcVar11 = *(code **)(lVar5 + 0x30);
                    if (pcVar11 == (code *)0x0) {
                      ERR_new(lVar10);
                      uVar6 = 0xa5;
LAB_00100d8e:
                      iVar3 = -2;
                      ERR_set_debug("crypto/evp/asymcipher.c",uVar6,"evp_pkey_asym_cipher_init");
                      ERR_set_error(6,0x96,0);
                      goto LAB_00100d08;
                    }
                  }
                  else {
                    if (param_2 != 0x400) {
                      ERR_new(lVar10);
                      uVar6 = 0xb4;
                      goto LAB_00100d31;
                    }
                    pcVar11 = *(code **)(lVar5 + 0x40);
                    if (pcVar11 == (code *)0x0) {
                      ERR_new(lVar10);
                      uVar6 = 0xad;
                      goto LAB_00100d8e;
                    }
                  }
                  iVar3 = (*pcVar11)(lVar10,lVar7,param_3);
                  if (iVar3 < 1) goto LAB_00100d08;
                  EVP_KEYMGMT_free(local_48);
                  goto LAB_00100bd8;
                }
                EVP_ASYM_CIPHER_free(lVar5);
                break;
              }
              lVar7 = 0;
              bVar13 = lVar1 == 0 || lVar10 == lVar1;
LAB_00100b43:
              EVP_KEYMGMT_free(lVar9);
              if (1 < uVar12) goto LAB_00100b60;
LAB_00100ac8:
              if (!bVar13) goto LAB_00100b60;
LAB_00100ad0:
              uVar12 = 2;
              EVP_ASYM_CIPHER_free(lVar5);
              EVP_KEYMGMT_free(local_48);
              uVar6 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(param_1 + 8));
              lVar5 = evp_asym_cipher_fetch_from_prov(uVar6,lVar4,*(undefined8 *)(param_1 + 4));
            } while (lVar5 != 0);
            goto LAB_00100c30;
          }
          ERR_clear_last_mark();
          ERR_new();
          uVar6 = 0x4a;
LAB_00100d31:
          iVar3 = 0;
          ERR_set_debug("crypto/evp/asymcipher.c",uVar6,"evp_pkey_asym_cipher_init");
          ERR_set_error(6,0x86,0);
        }
        else {
          ERR_clear_last_mark();
          iVar3 = 0;
          ERR_new();
          ERR_set_debug("crypto/evp/asymcipher.c",0x42,"evp_pkey_asym_cipher_init");
          ERR_set_error(6,0xc0103,0);
        }
      }
LAB_00100d08:
      evp_pkey_ctx_free_old_ops(param_1);
      *param_1 = 0;
    }
    EVP_KEYMGMT_free(local_48);
  }
LAB_00100ca2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = evp_pkey_asym_cipher_init(ctx,0x200,0);
  return iVar1;
}



void EVP_PKEY_encrypt_init_ex(undefined8 param_1,undefined8 param_2)

{
  evp_pkey_asym_cipher_init(param_1,0x200,param_2);
  return;
}



int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = evp_pkey_asym_cipher_init(ctx,0x400,0);
  return iVar1;
}



void EVP_PKEY_decrypt_init_ex(undefined8 param_1,undefined8 param_2)

{
  evp_pkey_asym_cipher_init(param_1,0x400,param_2);
  return;
}



void EVP_ASYM_CIPHER_is_a(undefined4 *param_1,undefined8 param_2)

{
  evp_is_a(*(undefined8 *)(param_1 + 6),*param_1,0,param_2);
  return;
}



undefined4 evp_asym_cipher_get_number(undefined4 *param_1)

{
  return *param_1;
}



undefined8 EVP_ASYM_CIPHER_get0_name(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 EVP_ASYM_CIPHER_get0_description(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void EVP_ASYM_CIPHER_do_all_provided(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_do_all(param_1,0xd,param_2,param_3,evp_asym_cipher_from_algorithm,
                     evp_asym_cipher_up_ref,evp_asym_cipher_free);
  return;
}



undefined8 EVP_ASYM_CIPHER_names_do_all(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 6) == 0) {
    return 1;
  }
  uVar1 = evp_names_do_all(*(long *)(param_1 + 6),*param_1,param_2,param_3);
  return uVar1;
}



undefined8 EVP_ASYM_CIPHER_gettable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = EVP_ASYM_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00100fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x68))(0,uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_ASYM_CIPHER_settable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = EVP_ASYM_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0010101b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x78))(0,uVar1);
    return uVar1;
  }
  return 0;
}


