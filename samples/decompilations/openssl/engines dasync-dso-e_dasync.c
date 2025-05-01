
undefined8 dasync_init(void)

{
  return 1;
}



undefined8 dasync_pkey(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if (param_2 == (undefined8 *)0x0) {
    *param_3 = &rnid_13;
    return 1;
  }
  if (param_4 != 6) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = dasync_rsa;
  return 1;
}



undefined8 dasync_ciphers(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if (param_2 == (undefined8 *)0x0) {
    *param_3 = dasync_cipher_nids;
    return 3;
  }
  if (param_4 == 0x38a) {
    *param_2 = _hidden_aes_256_ctr;
  }
  else {
    if (param_4 == 0x394) {
      *param_2 = _hidden_aes_128_cbc_hmac_sha1;
      return 1;
    }
    if (param_4 != 0x1a3) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = _hidden_aes_128_cbc;
  }
  return 1;
}



int dasync_aes128_cbc_hmac_sha1_ctrl
              (undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  void *pvVar6;
  ushort uVar7;
  uint uVar8;
  
  pEVar2 = EVP_aes_128_cbc_hmac_sha1();
  puVar3 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (puVar3 == (undefined8 *)0x0) {
LAB_001001b3:
    return 0;
  }
  switch(param_2) {
  case 8:
    iVar1 = EVP_CIPHER_impl_ctx_size(pEVar2);
    pvVar6 = CRYPTO_malloc(iVar1,"engines/e_dasync.c",0x282);
    if (pvVar6 == (void *)0x0) {
      return -1;
    }
    pvVar6 = memcpy(pvVar6,(void *)*puVar3,(long)iVar1);
    *puVar3 = pvVar6;
    break;
  default:
    goto LAB_001001b3;
  case 0x16:
    if (param_3 != 0xd) {
      return -1;
    }
    if (*(uint *)(puVar3 + 0x39) < 0x20) {
      puVar4 = (undefined8 *)((ulong)*(uint *)(puVar3 + 0x39) * 0xd + 0x28 + (long)puVar3);
      *puVar4 = *param_4;
      *(undefined8 *)((long)puVar4 + 5) = *(undefined8 *)((long)param_4 + 5);
      *(int *)(puVar3 + 0x39) = *(int *)(puVar3 + 0x39) + 1;
      uVar7 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
      uVar8 = (uint)uVar7;
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        return 0x14;
      }
      if (0x301 < (ushort)(*(ushort *)((long)param_4 + 9) << 8 | *(ushort *)((long)param_4 + 9) >> 8
                          )) {
        if (uVar7 < 0x10) {
          return 0;
        }
        uVar8 = uVar7 - 0x10;
      }
      return (uVar8 + 0x24 & 0xfffffff0) - uVar8;
    }
    return -1;
  case 0x17:
    EVP_CIPHER_CTX_set_cipher_data(param_1,*puVar3);
    pEVar2 = EVP_aes_128_cbc_hmac_sha1();
    pcVar5 = (code *)EVP_CIPHER_meth_get_ctrl(pEVar2);
    iVar1 = (*pcVar5)(param_1,0x17,param_3,param_4);
    EVP_CIPHER_CTX_set_cipher_data(param_1,puVar3);
    return iVar1;
  case 0x22:
    *(int *)(puVar3 + 1) = param_3;
    puVar3[3] = param_4;
    break;
  case 0x23:
    *(int *)(puVar3 + 1) = param_3;
    puVar3[2] = param_4;
    break;
  case 0x24:
    *(int *)(puVar3 + 1) = param_3;
    puVar3[4] = param_4;
  }
  return 1;
}



undefined8 dasync_aes128_cbc_hmac_sha1_cleanup(undefined8 param_1)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  undefined8 *puVar3;
  
  pEVar2 = EVP_aes_128_cbc_hmac_sha1();
  puVar3 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar1 = EVP_CIPHER_impl_ctx_size(pEVar2);
  CRYPTO_clear_free(*puVar3,(long)iVar1,"engines/e_dasync.c",0x315);
  return 1;
}



uint dasync_cipher_helper
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = *(int *)(puVar4 + 1);
  EVP_CIPHER_CTX_set_cipher_data(param_1,*puVar4);
  iVar3 = *(int *)(puVar4 + 0x39);
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        return 0xffffffff;
      }
      pcVar5 = (code *)EVP_CIPHER_meth_get_ctrl(param_5);
      (*pcVar5)(param_1,0x16,0xd,puVar4 + 5);
    }
    pcVar5 = (code *)EVP_CIPHER_meth_get_do_cipher(param_5);
    uVar2 = (*pcVar5)(param_1,param_2,param_3,param_4);
  }
  else {
    if ((iVar3 != 0) && (iVar3 != iVar1)) {
      return 0xffffffff;
    }
    puVar7 = puVar4 + 5;
    lVar6 = 0;
    uVar2 = 1;
    while( true ) {
      if (iVar3 != 0) {
        pcVar5 = (code *)EVP_CIPHER_meth_get_ctrl(param_5);
        (*pcVar5)(param_1,0x16,0xd,puVar7);
      }
      if (uVar2 != 0) {
        pcVar5 = (code *)EVP_CIPHER_meth_get_do_cipher(param_5);
        iVar3 = (*pcVar5)(param_1,*(undefined8 *)(puVar4[3] + lVar6),
                          *(undefined8 *)(puVar4[2] + lVar6),*(undefined8 *)(puVar4[4] + lVar6));
        uVar2 = (uint)(iVar3 != 0);
      }
      if (lVar6 == (ulong)(iVar1 - 1) << 3) break;
      puVar7 = (undefined8 *)((long)puVar7 + 0xd);
      iVar3 = *(int *)(puVar4 + 0x39);
      lVar6 = lVar6 + 8;
    }
    *(undefined4 *)(puVar4 + 1) = 0;
  }
  *(undefined4 *)(puVar4 + 0x39) = 0;
  EVP_CIPHER_CTX_set_cipher_data(param_1,puVar4);
  return uVar2;
}



void dasync_aes128_cbc_hmac_sha1_cipher
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_128_cbc_hmac_sha1();
  dasync_cipher_helper(param_1,param_2,param_3,param_4,pEVar1);
  return;
}



void dasync_aes256_ctr_cipher
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_256_ctr();
  dasync_cipher_helper(param_1,param_2,param_3,param_4,pEVar1);
  return;
}



undefined4
dasync_aes256_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  pEVar3 = EVP_aes_256_ctr();
  plVar4 = (long *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    iVar2 = EVP_CIPHER_impl_ctx_size(pEVar3);
    if (iVar2 == 0) {
      lVar6 = *plVar4;
    }
    else {
      iVar2 = EVP_CIPHER_impl_ctx_size(pEVar3);
      lVar6 = CRYPTO_zalloc((long)iVar2,"engines/e_dasync.c",0x2d4);
      *plVar4 = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
    }
  }
  *(undefined4 *)(plVar4 + 1) = 0;
  *(undefined4 *)(plVar4 + 0x39) = 0;
  EVP_CIPHER_CTX_set_cipher_data(param_1,lVar6);
  pcVar5 = (code *)EVP_CIPHER_meth_get_init(pEVar3);
  uVar1 = (*pcVar5)(param_1,param_2,param_3,param_4);
  EVP_CIPHER_CTX_set_cipher_data(param_1,plVar4);
  return uVar1;
}



void dasync_aes128_cbc_cipher
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_128_cbc();
  dasync_cipher_helper(param_1,param_2,param_3,param_4,pEVar1);
  return;
}



void wait_cleanup(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  close(param_3);
  close(*param_4);
  CRYPTO_free(param_4);
  return;
}



ulong dasync_digests(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == (long *)0x0) {
    lVar3 = (long)(int)pos_15;
    uVar2 = (ulong)pos_15;
    if (init_16 == 0) {
      if (_hidden_sha1_md != 0) {
        pos_15 = pos_15 + 1;
        uVar1 = EVP_MD_get_type();
        *(undefined4 *)((long)&digest_nids_14 + lVar3 * 4) = uVar1;
      }
      init_16 = 1;
      uVar2 = (ulong)(int)pos_15;
      *(undefined4 *)((long)&digest_nids_14 + uVar2 * 4) = 0;
    }
    *param_3 = &digest_nids_14;
    return uVar2;
  }
  if (param_4 != 0x40) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = _hidden_sha1_md;
  return 1;
}



void dasync_rsa_ctrl_str(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (pctrl_str_12 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001006fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pctrl_str_12)(param_1,param_2,param_3);
    return;
  }
  EVP_PKEY_meth_get_ctrl(dasync_rsa_orig,0,&pctrl_str_12);
                    /* WARNING: Could not recover jumptable at 0x00100729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pctrl_str_12)(param_1,param_2,param_3);
  return;
}



void dasync_rsa_ctrl(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (pctrl_11 == (code *)0x0) {
    EVP_PKEY_meth_get_ctrl(dasync_rsa_orig,&pctrl_11,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00100760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pctrl_11)(param_1,param_2,param_3,param_4);
  return;
}



void dasync_rsa_decrypt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  if (pdecrypt_10 == (code *)0x0) {
    EVP_PKEY_meth_get_decrypt(dasync_rsa_orig,0,&pdecrypt_10);
  }
                    /* WARNING: Could not recover jumptable at 0x001007c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pdecrypt_10)(param_1,param_2,param_3,param_4,param_5);
  return;
}



undefined8 dasync_rsa_decrypt_init(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (pdecrypt_init_9 == (code *)0x0) {
    EVP_PKEY_meth_get_decrypt(dasync_rsa_orig,&pdecrypt_init_9,0);
    if (pdecrypt_init_9 == (code *)0x0) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pdecrypt_init_9)(param_1);
  return uVar1;
}



void dasync_rsa_encrypt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  if (pencryptfn_8 == (code *)0x0) {
    EVP_PKEY_meth_get_encrypt(dasync_rsa_orig,0,&pencryptfn_8);
  }
                    /* WARNING: Could not recover jumptable at 0x00100882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pencryptfn_8)(param_1,param_2,param_3,param_4,param_5);
  return;
}



undefined8 dasync_rsa_encrypt_init(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (pencrypt_init_7 == (code *)0x0) {
    EVP_PKEY_meth_get_encrypt(dasync_rsa_orig,&pencrypt_init_7,0);
    if (pencrypt_init_7 == (code *)0x0) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001008d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pencrypt_init_7)(param_1);
  return uVar1;
}



void dasync_rsa_keygen(undefined8 param_1,undefined8 param_2)

{
  if (pkeygen_6 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pkeygen_6)(param_1,param_2);
    return;
  }
  EVP_PKEY_meth_get_keygen(dasync_rsa_orig,0,&pkeygen_6);
                    /* WARNING: Could not recover jumptable at 0x00100968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pkeygen_6)(param_1,param_2);
  return;
}



undefined8 dasync_rsa_keygen_init(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (pkeygen_init_5 == (code *)0x0) {
    EVP_PKEY_meth_get_keygen(dasync_rsa_orig,&pkeygen_init_5,0);
    if (pkeygen_init_5 == (code *)0x0) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pkeygen_init_5)(param_1);
  return uVar1;
}



undefined8 dasync_rsa_paramgen(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (pparamgen_4 == (code *)0x0) {
    EVP_PKEY_meth_get_paramgen(dasync_rsa_orig,0,&pparamgen_4);
    if (pparamgen_4 == (code *)0x0) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001009e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pparamgen_4)(param_1,param_2);
  return uVar1;
}



undefined8 dasync_rsa_paramgen_init(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (pparamgen_init_3 == (code *)0x0) {
    EVP_PKEY_meth_get_paramgen(dasync_rsa_orig,&pparamgen_init_3,0);
    if (pparamgen_init_3 == (code *)0x0) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*pparamgen_init_3)(param_1);
  return uVar1;
}



void dasync_rsa_cleanup(undefined8 param_1)

{
  if (pcleanup_2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcleanup_2)(param_1);
    return;
  }
  EVP_PKEY_meth_get_cleanup(dasync_rsa_orig,&pcleanup_2);
                    /* WARNING: Could not recover jumptable at 0x00100aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcleanup_2)(param_1);
  return;
}



void dasync_rsa_init(undefined8 param_1)

{
  if (pinit_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pinit_1)(param_1);
    return;
  }
  EVP_PKEY_meth_get_init(dasync_rsa_orig,&pinit_1);
                    /* WARNING: Could not recover jumptable at 0x00100aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pinit_1)(param_1);
  return;
}



undefined8 dasync_destroy(void)

{
  EVP_MD_meth_free(_hidden_sha1_md);
  _hidden_sha1_md = 0;
  EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
  EVP_CIPHER_meth_free(_hidden_aes_256_ctr);
  EVP_CIPHER_meth_free(_hidden_aes_128_cbc_hmac_sha1);
  _hidden_aes_128_cbc = 0;
  _hidden_aes_256_ctr = 0;
  _hidden_aes_128_cbc_hmac_sha1 = 0;
  dasync_rsa_orig = 0;
  dasync_rsa = 0;
  if (error_loaded == 0) {
    return 1;
  }
  ERR_unload_strings(lib_code,(ERR_STRING_DATA *)DASYNC_str_reasons);
  error_loaded = 0;
  return 1;
}



undefined8 dasync_finish(void)

{
  return 1;
}



undefined8 bind_dasync(ENGINE *param_1)

{
  int iVar1;
  
  dasync_rsa_orig = EVP_PKEY_meth_find(6);
  if ((dasync_rsa_orig != (EVP_PKEY_METHOD *)0x0) &&
     (dasync_rsa = EVP_PKEY_meth_new(6,2), dasync_rsa != (EVP_PKEY_METHOD *)0x0)) {
    EVP_PKEY_meth_set_init(dasync_rsa,dasync_rsa_init);
    EVP_PKEY_meth_set_cleanup(dasync_rsa,dasync_rsa_cleanup);
    EVP_PKEY_meth_set_paramgen(dasync_rsa,dasync_rsa_paramgen_init,dasync_rsa_paramgen);
    EVP_PKEY_meth_set_keygen(dasync_rsa,dasync_rsa_keygen_init,dasync_rsa_keygen);
    EVP_PKEY_meth_set_encrypt(dasync_rsa,dasync_rsa_encrypt_init,dasync_rsa_encrypt);
    EVP_PKEY_meth_set_decrypt(dasync_rsa,dasync_rsa_decrypt_init,dasync_rsa_decrypt);
    EVP_PKEY_meth_set_ctrl(dasync_rsa,dasync_rsa_ctrl,dasync_rsa_ctrl_str);
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    if (error_loaded == 0) {
      ERR_load_strings(lib_code,(ERR_STRING_DATA *)DASYNC_str_reasons);
      error_loaded = 1;
    }
    iVar1 = ENGINE_set_id(param_1,"dasync");
    if ((((iVar1 != 0) &&
         (iVar1 = ENGINE_set_name(param_1,"Dummy Async engine support"), iVar1 != 0)) &&
        (iVar1 = ENGINE_set_pkey_meths(param_1,dasync_pkey), iVar1 != 0)) &&
       (((iVar1 = ENGINE_set_digests(param_1,dasync_digests), iVar1 != 0 &&
         (iVar1 = ENGINE_set_ciphers(param_1,dasync_ciphers), iVar1 != 0)) &&
        ((iVar1 = ENGINE_set_destroy_function(param_1,dasync_destroy), iVar1 != 0 &&
         ((iVar1 = ENGINE_set_init_function(param_1,dasync_init), iVar1 != 0 &&
          (iVar1 = ENGINE_set_finish_function(param_1,dasync_finish), iVar1 != 0)))))))) {
      _hidden_sha1_md = EVP_MD_meth_new(0x40,0x41);
      if ((_hidden_sha1_md == 0) ||
         (((((iVar1 = EVP_MD_meth_set_result_size(_hidden_sha1_md,0x14), iVar1 == 0 ||
             (iVar1 = EVP_MD_meth_set_input_blocksize(_hidden_sha1_md,0x40), iVar1 == 0)) ||
            (iVar1 = EVP_MD_meth_set_app_datasize(_hidden_sha1_md,0x68), iVar1 == 0)) ||
           ((iVar1 = EVP_MD_meth_set_flags(_hidden_sha1_md,8), iVar1 == 0 ||
            (iVar1 = EVP_MD_meth_set_init(_hidden_sha1_md,dasync_sha1_init), iVar1 == 0)))) ||
          ((iVar1 = EVP_MD_meth_set_update(_hidden_sha1_md,dasync_sha1_update), iVar1 == 0 ||
           (iVar1 = EVP_MD_meth_set_final(_hidden_sha1_md,dasync_sha1_final), iVar1 == 0)))))) {
        EVP_MD_meth_free(_hidden_sha1_md);
        _hidden_sha1_md = 0;
      }
      _hidden_aes_128_cbc = EVP_CIPHER_meth_new(0x1a3,0x10,0x10);
      if ((((_hidden_aes_128_cbc == 0) ||
           (iVar1 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cbc,0x10), iVar1 == 0)) ||
          ((iVar1 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cbc,0x800402), iVar1 == 0 ||
           (((iVar1 = EVP_CIPHER_meth_set_init(_hidden_aes_128_cbc,dasync_aes128_init_key),
             iVar1 == 0 ||
             (iVar1 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_cbc,dasync_aes128_cbc_cipher),
             iVar1 == 0)) ||
            (iVar1 = EVP_CIPHER_meth_set_cleanup(_hidden_aes_128_cbc,dasync_aes128_cbc_cleanup),
            iVar1 == 0)))))) ||
         ((iVar1 = EVP_CIPHER_meth_set_ctrl(_hidden_aes_128_cbc,dasync_aes128_cbc_ctrl), iVar1 == 0
          || (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cbc,0x1d0), iVar1 == 0)))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
        _hidden_aes_128_cbc = 0;
      }
      _hidden_aes_256_ctr = EVP_CIPHER_meth_new(0x38a,1,0x20);
      if ((((_hidden_aes_256_ctr == 0) ||
           (iVar1 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ctr,0x10), iVar1 == 0)) ||
          ((iVar1 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ctr,0x800405), iVar1 == 0 ||
           (((iVar1 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ctr,dasync_aes256_init_key),
             iVar1 == 0 ||
             (iVar1 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ctr,dasync_aes256_ctr_cipher),
             iVar1 == 0)) ||
            (iVar1 = EVP_CIPHER_meth_set_cleanup(_hidden_aes_256_ctr,dasync_aes256_ctr_cleanup),
            iVar1 == 0)))))) ||
         ((iVar1 = EVP_CIPHER_meth_set_ctrl(_hidden_aes_256_ctr,dasync_aes256_ctr_ctrl), iVar1 == 0
          || (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ctr,0x1d0), iVar1 == 0)))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_ctr);
        _hidden_aes_256_ctr = 0;
      }
      _hidden_aes_128_cbc_hmac_sha1 = EVP_CIPHER_meth_new(0x394,0x10,0x10);
      if (((_hidden_aes_128_cbc_hmac_sha1 == 0) ||
          (iVar1 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cbc_hmac_sha1,0x10), iVar1 == 0))
         || ((iVar1 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cbc_hmac_sha1,0xa00402), iVar1 == 0
             || ((((iVar1 = EVP_CIPHER_meth_set_init
                                      (_hidden_aes_128_cbc_hmac_sha1,
                                       dasync_aes128_cbc_hmac_sha1_init_key), iVar1 == 0 ||
                   (iVar1 = EVP_CIPHER_meth_set_do_cipher
                                      (_hidden_aes_128_cbc_hmac_sha1,
                                       dasync_aes128_cbc_hmac_sha1_cipher), iVar1 == 0)) ||
                  (iVar1 = EVP_CIPHER_meth_set_cleanup
                                     (_hidden_aes_128_cbc_hmac_sha1,
                                      dasync_aes128_cbc_hmac_sha1_cleanup), iVar1 == 0)) ||
                 ((iVar1 = EVP_CIPHER_meth_set_ctrl
                                     (_hidden_aes_128_cbc_hmac_sha1,dasync_aes128_cbc_hmac_sha1_ctrl
                                     ), iVar1 == 0 ||
                  (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cbc_hmac_sha1,0x1d0),
                  iVar1 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_cbc_hmac_sha1);
        _hidden_aes_128_cbc_hmac_sha1 = 0;
      }
      return 1;
    }
    if (lib_code == 0) {
      lib_code = ERR_get_next_error_library();
    }
    ERR_new();
    ERR_set_debug("engines/e_dasync_err.c",0x36,"ERR_DASYNC_error");
    ERR_set_error(lib_code,100,0);
    ERR_set_debug("engines/e_dasync.c",0x101,0);
  }
  return 0;
}



undefined8 dasync_aes128_cbc_cleanup(undefined8 param_1)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  undefined8 *puVar3;
  
  pEVar2 = EVP_aes_128_cbc();
  puVar3 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar1 = EVP_CIPHER_impl_ctx_size(pEVar2);
  CRYPTO_clear_free(*puVar3,(long)iVar1,"engines/e_dasync.c",0x315);
  return 1;
}



undefined8 dasync_aes256_ctr_cleanup(undefined8 param_1)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  undefined8 *puVar3;
  
  pEVar2 = EVP_aes_256_ctr();
  puVar3 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar1 = EVP_CIPHER_impl_ctx_size(pEVar2);
  CRYPTO_clear_free(*puVar3,(long)iVar1,"engines/e_dasync.c",0x315);
  return 1;
}



void dummy_pause_job(void)

{
  int *ptr;
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  undefined1 local_51;
  code *local_50;
  undefined8 local_48;
  int *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_51 = 0x58;
  local_38 = 0;
  lVar3 = ASYNC_get_current_job();
  if (lVar3 != 0) {
    uVar4 = ASYNC_get_wait_ctx(lVar3);
    iVar1 = ASYNC_WAIT_CTX_get_callback(uVar4,&local_50,&local_48);
    if ((iVar1 == 0) || (local_50 == (code *)0x0)) {
      iVar1 = ASYNC_WAIT_CTX_get_fd(uVar4,"dasync",&local_38,&local_40);
      if (iVar1 == 0) {
        local_40 = (int *)CRYPTO_malloc(4,"engines/e_dasync.c",0x229);
        if (local_40 == (int *)0x0) goto LAB_001012e9;
        iVar1 = pipe((int *)&local_38);
        if (iVar1 != 0) {
          CRYPTO_free(local_40);
          goto LAB_001012e9;
        }
        *local_40 = local_38._4_4_;
        iVar2 = ASYNC_WAIT_CTX_set_wait_fd
                          (uVar4,"dasync",local_38 & 0xffffffff,local_40,wait_cleanup);
        ptr = local_40;
        iVar1 = local_38._4_4_;
        if (iVar2 == 0) {
          close((int)local_38);
          close(*ptr);
          CRYPTO_free(ptr);
          goto LAB_001012e9;
        }
      }
      else {
        local_38 = CONCAT44(*local_40,(int)local_38);
        iVar1 = *local_40;
      }
      sVar5 = write(iVar1,&local_51,1);
      if (-1 < sVar5) {
        ASYNC_pause_job();
        read((int)local_38,&local_51,1);
      }
    }
    else {
      (*local_50)(local_48);
      ASYNC_pause_job();
    }
  }
LAB_001012e9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dasync_sha1_final(undefined8 param_1,undefined8 param_2)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  dummy_pause_job();
  pEVar1 = EVP_sha1();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_final(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010144e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



void dasync_sha1_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  dummy_pause_job();
  pEVar1 = EVP_sha1();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_update(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x00101480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void dasync_sha1_init(undefined8 param_1)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  dummy_pause_job();
  pEVar1 = EVP_sha1();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x001014ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



undefined4
dasync_aes128_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  pEVar3 = EVP_aes_128_cbc();
  plVar4 = (long *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    iVar2 = EVP_CIPHER_impl_ctx_size(pEVar3);
    if (iVar2 == 0) {
      lVar6 = *plVar4;
    }
    else {
      iVar2 = EVP_CIPHER_impl_ctx_size(pEVar3);
      lVar6 = CRYPTO_zalloc((long)iVar2,"engines/e_dasync.c",0x2d4);
      *plVar4 = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
    }
  }
  *(undefined4 *)(plVar4 + 1) = 0;
  *(undefined4 *)(plVar4 + 0x39) = 0;
  EVP_CIPHER_CTX_set_cipher_data(param_1,lVar6);
  pcVar5 = (code *)EVP_CIPHER_meth_get_init(pEVar3);
  uVar1 = (*pcVar5)(param_1,param_2,param_3,param_4);
  EVP_CIPHER_CTX_set_cipher_data(param_1,plVar4);
  return uVar1;
}



undefined4
dasync_aes128_cbc_hmac_sha1_init_key
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  pEVar3 = EVP_aes_128_cbc_hmac_sha1();
  plVar4 = (long *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    iVar2 = EVP_CIPHER_impl_ctx_size(pEVar3);
    if (iVar2 == 0) {
      lVar6 = *plVar4;
    }
    else {
      iVar2 = EVP_CIPHER_impl_ctx_size(pEVar3);
      lVar6 = CRYPTO_zalloc((long)iVar2,"engines/e_dasync.c",0x2d4);
      *plVar4 = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
    }
  }
  *(undefined4 *)(plVar4 + 1) = 0;
  *(undefined4 *)(plVar4 + 0x39) = 0;
  EVP_CIPHER_CTX_set_cipher_data(param_1,lVar6);
  pcVar5 = (code *)EVP_CIPHER_meth_get_init(pEVar3);
  uVar1 = (*pcVar5)(param_1,param_2,param_3,param_4);
  EVP_CIPHER_CTX_set_cipher_data(param_1,plVar4);
  return uVar1;
}



undefined8
dasync_aes256_ctr_ctrl(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int num;
  EVP_CIPHER *pEVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  pEVar1 = EVP_aes_256_ctr();
  puVar2 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    switch(param_2) {
    case 8:
      num = EVP_CIPHER_impl_ctx_size(pEVar1);
      pvVar3 = CRYPTO_malloc(num,"engines/e_dasync.c",0x282);
      if (pvVar3 != (void *)0x0) {
        pvVar3 = memcpy(pvVar3,(void *)*puVar2,(long)num);
        *puVar2 = pvVar3;
        return 1;
      }
    case 0x16:
    case 0x17:
      return 0xffffffff;
    default:
      goto LAB_001016c2;
    case 0x22:
      *(undefined4 *)(puVar2 + 1) = param_3;
      puVar2[3] = param_4;
      break;
    case 0x23:
      *(undefined4 *)(puVar2 + 1) = param_3;
      puVar2[2] = param_4;
      break;
    case 0x24:
      *(undefined4 *)(puVar2 + 1) = param_3;
      puVar2[4] = param_4;
    }
    return 1;
  }
LAB_001016c2:
  return 0;
}



undefined8
dasync_aes128_cbc_ctrl(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int num;
  EVP_CIPHER *pEVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  pEVar1 = EVP_aes_128_cbc();
  puVar2 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    switch(param_2) {
    case 8:
      num = EVP_CIPHER_impl_ctx_size(pEVar1);
      pvVar3 = CRYPTO_malloc(num,"engines/e_dasync.c",0x282);
      if (pvVar3 != (void *)0x0) {
        pvVar3 = memcpy(pvVar3,(void *)*puVar2,(long)num);
        *puVar2 = pvVar3;
        return 1;
      }
    case 0x16:
    case 0x17:
      return 0xffffffff;
    default:
      goto LAB_001017b2;
    case 0x22:
      *(undefined4 *)(puVar2 + 1) = param_3;
      puVar2[3] = param_4;
      break;
    case 0x23:
      *(undefined4 *)(puVar2 + 1) = param_3;
      puVar2[2] = param_4;
      break;
    case 0x24:
      *(undefined4 *)(puVar2 + 1) = param_3;
      puVar2[4] = param_4;
    }
    return 1;
  }
LAB_001017b2:
  return 0;
}



uint v_check(ulong param_1)

{
  return ~-(uint)(param_1 < 0x30000) & 0x30000;
}



bool bind_engine(undefined8 param_1,char *param_2,long *param_3)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = ENGINE_get_static_state();
  if ((void *)*param_3 != pvVar2) {
    CRYPTO_set_mem_functions((m *)param_3[1],(r *)param_3[2],(f *)param_3[3]);
    OPENSSL_init_crypto(0x80000,0);
  }
  if ((param_2 != (char *)0x0) && (iVar1 = strcmp(param_2,"dasync"), iVar1 != 0)) {
    return false;
  }
  iVar1 = bind_dasync(param_1);
  return iVar1 != 0;
}



void engine_load_dasync_int(void)

{
  int iVar1;
  ENGINE *e;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  iVar1 = bind_dasync(e);
  if (iVar1 != 0) {
    ERR_set_mark();
    ENGINE_add(e);
    ENGINE_free(e);
    ERR_pop_to_mark();
    return;
  }
  ENGINE_free(e);
  return;
}


