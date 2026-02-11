
bool rsakem_get_ctx_params(long param_1)

{
  return param_1 != 0;
}



undefined1 * rsakem_gettable_ctx_params(void)

{
  return known_gettable_rsakem_ctx_params;
}



undefined1 * rsakem_settable_ctx_params(void)

{
  return known_settable_rsakem_ctx_params;
}



undefined8 * rsakem_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/kem/rsa_kem.c",0x75),
     ptr != (undefined8 *)0x0)) {
    uVar1 = param_1[1];
    *ptr = *param_1;
    ptr[1] = uVar1;
    ptr[2] = param_1[2];
    if ((RSA *)ptr[1] == (RSA *)0x0) {
      return ptr;
    }
    iVar2 = RSA_up_ref((RSA *)ptr[1]);
    if (iVar2 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void rsakem_freectx(void *param_1)

{
  RSA_free(*(RSA **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



undefined8 * rsakem_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/kem/rsa_kem.c",0x5b);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined4 *)(puVar2 + 2) = 0;
      *puVar2 = uVar3;
    }
  }
  return puVar2;
}



ulong rsakem_recover(long param_1,uchar *param_2,ulong *param_3,uchar *param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0xfffffffe;
    }
    iVar1 = RSA_size(*(RSA **)(param_1 + 8));
    uVar2 = (ulong)iVar1;
    if (param_2 == (uchar *)0x0) {
      if (uVar2 != 0) {
        *param_3 = uVar2;
        return 1;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/kem/rsa_kem.c",0x16d,"rsasve_recover");
      ERR_set_error(0x39,0x9e,0);
    }
    else {
      if (param_5 == uVar2) {
        if (param_3 == (ulong *)0x0) {
          iVar1 = RSA_private_decrypt((int)param_5,param_4,param_2,*(RSA **)(param_1 + 8),3);
          bVar3 = 0 < iVar1;
        }
        else {
          if (*param_3 < param_5) {
            ERR_new();
            ERR_set_debug("providers/implementations/kem/rsa_kem.c",0x183,"rsasve_recover");
            ERR_set_error(0x39,0xd9,0);
            return 0;
          }
          iVar1 = RSA_private_decrypt((int)param_5,param_4,param_2,*(RSA **)(param_1 + 8),3);
          bVar3 = false;
          if (0 < iVar1) {
            bVar3 = true;
            *param_3 = (long)iVar1;
          }
        }
        return (ulong)bVar3;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/kem/rsa_kem.c",0x179,"rsasve_recover");
      ERR_set_error(0x39,0x8e,0);
    }
  }
  return 0;
}



undefined8 rsakem_generate(long param_1,uchar *param_2,ulong *param_3,uchar *param_4,ulong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar5;
  ulong len;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0xfffffffe;
    }
    iVar2 = RSA_size(*(RSA **)(param_1 + 8));
    len = (ulong)iVar2;
    if (param_2 == (uchar *)0x0) {
      if (len == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/rsa_kem.c",0x121,"rsasve_generate");
        ERR_set_error(0x39,0x9e,0);
      }
      else if (param_5 != (ulong *)0x0 || param_3 != (ulong *)0x0) {
LAB_00100411:
        if (param_3 != (ulong *)0x0) {
          *param_3 = len;
        }
        if (param_5 != (ulong *)0x0) {
          *param_5 = len;
        }
        return 1;
      }
    }
    else if ((param_3 == (ulong *)0x0) || (len <= *param_3)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar4 = ossl_rsa_get0_libctx(uVar1);
      ctx = (BN_CTX *)BN_CTX_secure_new_ex(uVar4);
      if (ctx != (BN_CTX *)0x0) {
        BN_CTX_start(ctx);
        a = BN_CTX_get(ctx);
        a_00 = BN_CTX_get(ctx);
        if (a_00 != (BIGNUM *)0x0) {
          pBVar5 = (BIGNUM *)RSA_get0_n(uVar1);
          pBVar5 = BN_copy(a,pBVar5);
          if ((((pBVar5 != (BIGNUM *)0x0) && (iVar3 = BN_sub_word(a,3), iVar3 != 0)) &&
              (iVar3 = BN_priv_rand_range_ex(a_00,a,0,ctx), iVar3 != 0)) &&
             ((iVar3 = BN_add_word(a_00,2), iVar3 != 0 &&
              (iVar3 = BN_bn2binpad(a_00,param_4,iVar2), iVar2 == iVar3)))) {
            BN_CTX_end(ctx);
            BN_CTX_free(ctx);
            iVar2 = RSA_public_encrypt(iVar2,param_4,param_2,*(RSA **)(param_1 + 8),3);
            if (iVar2 == 0) {
              OPENSSL_cleanse(param_4,len);
              return 0;
            }
            goto LAB_00100411;
          }
        }
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/kem/rsa_kem.c",0x133,"rsasve_generate");
      ERR_set_error(0x39,0xd9,0);
    }
  }
  return 0;
}



undefined8 rsakem_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) &&
     (lVar2 = OSSL_PARAM_locate_const(param_2,"operation"), lVar2 != 0)) {
    if (((*(int *)(lVar2 + 8) == 4) && (*(long *)(lVar2 + 0x10) != 0)) &&
       (iVar1 = OPENSSL_strcasecmp("RSASVE"), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}



bool rsakem_encapsulate_init(long param_1,RSA *param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 == 0) || (param_1 == 0)) || (param_2 == (RSA *)0x0)) ||
     ((iVar1 = ossl_rsa_key_op_get_protect(param_2,0x1000,&local_24), iVar1 == 0 ||
      (iVar1 = RSA_up_ref(param_2), iVar1 == 0)))) {
    bVar2 = false;
  }
  else {
    RSA_free(*(RSA **)(param_1 + 8));
    *(RSA **)(param_1 + 8) = param_2;
    iVar1 = rsakem_set_ctx_params(param_1,param_3);
    bVar2 = iVar1 != 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool rsakem_decapsulate_init(long param_1,RSA *param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 == 0) || (param_1 == 0)) || (param_2 == (RSA *)0x0)) ||
     ((iVar1 = ossl_rsa_key_op_get_protect(param_2,0x2000,&local_24), iVar1 == 0 ||
      (iVar1 = RSA_up_ref(param_2), iVar1 == 0)))) {
    bVar2 = false;
  }
  else {
    RSA_free(*(RSA **)(param_1 + 8));
    *(RSA **)(param_1 + 8) = param_2;
    iVar1 = rsakem_set_ctx_params(param_1,param_3);
    bVar2 = iVar1 != 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


