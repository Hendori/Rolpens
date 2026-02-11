
undefined8 ossltest_init(void)

{
  return 1;
}



undefined8 ossltest_rand_bytes(char *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (0 < (int)param_2) {
    pcVar1 = param_1;
    do {
      pcVar2 = pcVar1 + 1;
      *pcVar1 = ('\x01' - (char)param_1) + (char)pcVar1;
      pcVar1 = pcVar2;
    } while (pcVar2 != param_1 + param_2);
  }
  return 1;
}



undefined8 ossltest_rand_status(void)

{
  return 1;
}



undefined8 ossltest_destroy(void)

{
  EVP_MD_meth_free(_hidden_md5_md);
  _hidden_md5_md = 0;
  EVP_MD_meth_free(_hidden_sha1_md);
  _hidden_sha1_md = 0;
  EVP_MD_meth_free(_hidden_sha256_md);
  _hidden_sha256_md = 0;
  EVP_MD_meth_free(_hidden_sha384_md);
  _hidden_sha384_md = 0;
  EVP_MD_meth_free(_hidden_sha512_md);
  _hidden_sha512_md = 0;
  EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
  EVP_CIPHER_meth_free(_hidden_aes_128_gcm);
  EVP_CIPHER_meth_free(_hidden_aes_128_cbc_hmac_sha1);
  _hidden_aes_128_cbc = 0;
  _hidden_aes_128_gcm = 0;
  _hidden_aes_128_cbc_hmac_sha1 = 0;
  if (error_loaded == 0) {
    return 1;
  }
  ERR_unload_strings(lib_code,(ERR_STRING_DATA *)OSSLTEST_str_reasons);
  error_loaded = 0;
  return 1;
}



undefined4 ossltest_aes128_cbc_cipher(undefined8 param_1,void *param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *__dest;
  EVP_CIPHER *pEVar2;
  code *pcVar3;
  
  __dest = CRYPTO_malloc((int)param_4,"engines/e_ossltest.c",0x2bf);
  if (__dest == (void *)0x0) {
    if (param_4 != 0) {
      return 0xffffffff;
    }
    pEVar2 = EVP_aes_128_cbc();
    pcVar3 = (code *)EVP_CIPHER_meth_get_do_cipher(pEVar2);
    uVar1 = (*pcVar3)(param_1,param_2,param_3,0);
  }
  else {
    memcpy(__dest,param_3,param_4);
    pEVar2 = EVP_aes_128_cbc();
    pcVar3 = (code *)EVP_CIPHER_meth_get_do_cipher(pEVar2);
    uVar1 = (*pcVar3)(param_1,param_2,param_3,param_4);
    memcpy(param_2,__dest,param_4);
  }
  CRYPTO_free(__dest);
  return uVar1;
}



void ossltest_aes128_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  EVP_CIPHER *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_aes_128_cbc();
  UNRECOVERED_JUMPTABLE = (code *)EVP_CIPHER_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010025d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



ulong ossltest_aes128_gcm_cipher(undefined8 param_1,void *param_2,void *param_3,ulong param_4)

{
  void *__dest;
  EVP_CIPHER *pEVar1;
  code *pcVar2;
  
  __dest = CRYPTO_malloc((int)param_4,"engines/e_ossltest.c",0x2de);
  if (__dest == (void *)0x0) {
    if (param_4 != 0) {
      return 0xffffffff;
    }
    pEVar1 = EVP_aes_128_gcm();
    pcVar2 = (code *)EVP_CIPHER_meth_get_do_cipher(pEVar1);
    (*pcVar2)(param_1,param_2,param_3,0);
  }
  else {
    memcpy(__dest,param_3,param_4);
    pEVar1 = EVP_aes_128_gcm();
    pcVar2 = (code *)EVP_CIPHER_meth_get_do_cipher(pEVar1);
    (*pcVar2)(param_1,param_2,param_3,param_4);
    if (param_2 != (void *)0x0) {
      memcpy(param_2,__dest,param_4);
    }
  }
  CRYPTO_free(__dest);
  return param_4 & 0xffffffff;
}



void ossltest_aes128_gcm_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  EVP_CIPHER *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_aes_128_gcm();
  UNRECOVERED_JUMPTABLE = (code *)EVP_CIPHER_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010037d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



undefined8
ossltest_aes128_gcm_ctrl
          (undefined8 param_1,int param_2,undefined4 param_3,undefined1 (*param_4) [16])

{
  EVP_CIPHER *pEVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pEVar1 = EVP_aes_128_gcm();
  pcVar2 = (code *)EVP_CIPHER_meth_get_ctrl(pEVar1);
  uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar3) {
    if (param_2 == 0x10) {
      *param_4 = (undefined1  [16])0x0;
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined8 ossltest_ciphers(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  EVP_CIPHER *pEVar6;
  long lVar7;
  
  lVar3 = _hidden_aes_128_cbc;
  lVar2 = _hidden_aes_128_gcm;
  lVar1 = _hidden_aes_128_cbc_hmac_sha1;
  if (param_2 == (long *)0x0) {
    *param_3 = ossltest_cipher_nids;
    return 3;
  }
  if (param_4 == 0x37f) {
    lVar7 = lVar2;
    if (_hidden_aes_128_gcm == 0) {
      _hidden_aes_128_gcm = EVP_CIPHER_meth_new(0x37f,1,0x10);
      if (((((_hidden_aes_128_gcm != 0) &&
            (iVar4 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_gcm,0xc), iVar4 != 0)) &&
           (iVar4 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_gcm,0x300476), iVar4 != 0)) &&
          ((iVar4 = EVP_CIPHER_meth_set_init(_hidden_aes_128_gcm,ossltest_aes128_gcm_init_key),
           iVar4 != 0 &&
           (iVar4 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_gcm,ossltest_aes128_gcm_cipher),
           iVar4 != 0)))) &&
         (iVar4 = EVP_CIPHER_meth_set_ctrl(_hidden_aes_128_gcm,ossltest_aes128_gcm_ctrl), iVar4 != 0
         )) {
        pEVar6 = EVP_aes_128_gcm();
        uVar5 = EVP_CIPHER_impl_ctx_size(pEVar6);
        iVar4 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_gcm,uVar5);
        lVar7 = _hidden_aes_128_gcm;
        if (iVar4 != 0) goto LAB_00100426;
      }
      EVP_CIPHER_meth_free(_hidden_aes_128_gcm);
      _hidden_aes_128_gcm = 0;
      lVar7 = lVar2;
    }
  }
  else if (param_4 == 0x394) {
    lVar7 = lVar1;
    if ((_hidden_aes_128_cbc_hmac_sha1 == 0) &&
       (((((_hidden_aes_128_cbc_hmac_sha1 = EVP_CIPHER_meth_new(0x394,0x10,0x10),
           _hidden_aes_128_cbc_hmac_sha1 == 0 ||
           (iVar4 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cbc_hmac_sha1,0x10), iVar4 == 0))
          || ((iVar4 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cbc_hmac_sha1,0x200002), iVar4 == 0
              || (((iVar4 = EVP_CIPHER_meth_set_init
                                      (_hidden_aes_128_cbc_hmac_sha1,
                                       ossltest_aes128_cbc_hmac_sha1_init_key), iVar4 == 0 ||
                   (iVar4 = EVP_CIPHER_meth_set_do_cipher
                                      (_hidden_aes_128_cbc_hmac_sha1,
                                       ossltest_aes128_cbc_hmac_sha1_cipher), iVar4 == 0)) ||
                  (iVar4 = EVP_CIPHER_meth_set_ctrl
                                     (_hidden_aes_128_cbc_hmac_sha1,
                                      ossltest_aes128_cbc_hmac_sha1_ctrl), iVar4 == 0)))))) ||
         ((iVar4 = EVP_CIPHER_meth_set_set_asn1_params
                             (_hidden_aes_128_cbc_hmac_sha1,&EVP_CIPHER_set_asn1_iv), iVar4 == 0 ||
          (iVar4 = EVP_CIPHER_meth_set_get_asn1_params
                             (_hidden_aes_128_cbc_hmac_sha1,&EVP_CIPHER_get_asn1_iv), iVar4 == 0))))
        || (iVar4 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cbc_hmac_sha1,0x10),
           lVar7 = _hidden_aes_128_cbc_hmac_sha1, iVar4 == 0)))) {
      EVP_CIPHER_meth_free(_hidden_aes_128_cbc_hmac_sha1);
      _hidden_aes_128_cbc_hmac_sha1 = 0;
      lVar7 = lVar1;
    }
  }
  else {
    if (param_4 != 0x1a3) {
      *param_2 = 0;
      return 0;
    }
    lVar7 = lVar3;
    if (_hidden_aes_128_cbc == 0) {
      _hidden_aes_128_cbc = EVP_CIPHER_meth_new(0x1a3,0x10,0x10);
      if (((_hidden_aes_128_cbc != 0) &&
          (iVar4 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cbc,0x10), iVar4 != 0)) &&
         ((iVar4 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cbc,2), iVar4 != 0 &&
          ((iVar4 = EVP_CIPHER_meth_set_init(_hidden_aes_128_cbc,ossltest_aes128_init_key),
           iVar4 != 0 &&
           (iVar4 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_cbc,ossltest_aes128_cbc_cipher),
           iVar4 != 0)))))) {
        pEVar6 = EVP_aes_128_cbc();
        uVar5 = EVP_CIPHER_impl_ctx_size(pEVar6);
        iVar4 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cbc,uVar5);
        lVar7 = _hidden_aes_128_cbc;
        if (iVar4 != 0) goto LAB_00100426;
      }
      EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
      _hidden_aes_128_cbc = 0;
      lVar7 = lVar3;
    }
  }
LAB_00100426:
  *param_2 = lVar7;
  return 1;
}



undefined8 ossltest_aes128_cbc_hmac_sha1_init_key(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data();
  *puVar1 = 0xffffffffffffffff;
  return 1;
}



int ossltest_aes128_cbc_hmac_sha1_ctrl(undefined8 param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  ulong *puVar2;
  ushort uVar3;
  uint uVar4;
  
  puVar2 = (ulong *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar3 = *(ushort *)(param_4 + 0xb) << 8 | *(ushort *)(param_4 + 0xb) >> 8;
      uVar4 = (uint)uVar3;
      *(uint *)(puVar2 + 1) =
           (uint)(ushort)(*(ushort *)(param_4 + 9) << 8 | *(ushort *)(param_4 + 9) >> 8);
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 != 0) {
        *puVar2 = (ulong)uVar3;
        if (0x301 < (uint)puVar2[1]) {
          if (uVar3 < 0x10) {
            return 0;
          }
          uVar4 = uVar3 - 0x10;
          *(ushort *)(param_4 + 0xb) = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
        }
        return (uVar4 + 0x24 & 0xfffffff0) - uVar4;
      }
      *puVar2 = 0xd;
      iVar1 = 0x14;
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = ((param_2 == 0x17) - 1) + (uint)(param_2 == 0x17);
  }
  return iVar1;
}



undefined8
ossltest_aes128_cbc_hmac_sha1_cipher(undefined8 param_1,void *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  size_t __n;
  int iVar3;
  size_t *psVar4;
  byte *pbVar5;
  ulong uVar6;
  
  psVar4 = (size_t *)EVP_CIPHER_CTX_get_cipher_data();
  __n = *psVar4;
  *psVar4 = 0xffffffffffffffff;
  uVar6 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
    return 0;
  }
  iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar3 == 0) {
    memmove(param_2,param_3,param_4);
    if (__n == 0xffffffffffffffff) {
      return 1;
    }
    if ((uint)psVar4[1] < 0x302) {
      if (param_4 < 0x15) {
        return 0;
      }
    }
    else {
      if (param_4 < 0x25) {
        return 0;
      }
      param_2 = (void *)((long)param_2 + 0x10);
      param_4 = param_4 - 0x10;
    }
    bVar2 = *(byte *)((long)param_2 + (param_4 - 1));
    if ((int)param_4 - 0x15U < (uint)bVar2) {
      return 0;
    }
    uVar6 = (param_4 - 1) - (ulong)bVar2;
    if (uVar6 < param_4) {
      pbVar5 = (byte *)(uVar6 + (long)param_2);
      do {
        if (bVar2 != *pbVar5) {
          return 0;
        }
        pbVar5 = pbVar5 + 1;
      } while ((byte *)((long)param_2 + param_4) != pbVar5);
    }
  }
  else if (__n == 0xffffffffffffffff) {
    memmove(param_2,param_3,param_4);
  }
  else {
    if ((__n + 0x24 & 0xfffffffffffffff0) != param_4) {
      return 0;
    }
    memmove(param_2,param_3,__n);
    if (__n != param_4) {
      do {
        *(char *)((long)param_2 + uVar6 + __n) = (char)uVar6;
        lVar1 = uVar6 + 1;
        uVar6 = uVar6 + 2;
        *(char *)((long)param_2 + lVar1 + __n) = (char)lVar1;
      } while (uVar6 != 0x14);
      uVar6 = __n + 0x14;
      if (uVar6 < param_4) {
        memset((void *)(uVar6 + (long)param_2),((uint)param_4 - 1) - (int)uVar6 & 0xff,
               (param_4 - 0x14) - __n);
      }
    }
  }
  return 1;
}



long digest_md5(void)

{
  int iVar1;
  long lVar2;
  
  if (_hidden_md5_md == 0) {
    lVar2 = EVP_MD_meth_new(4,8);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x10), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,100), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,digest_md5_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,digest_md5_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,digest_md5_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    _hidden_md5_md = lVar2;
    return lVar2;
  }
  return _hidden_md5_md;
}



long digest_sha1(void)

{
  int iVar1;
  long lVar2;
  
  if (_hidden_sha1_md == 0) {
    lVar2 = EVP_MD_meth_new(0x40,0x41);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x14), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x68), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,8), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,digest_sha1_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,digest_sha1_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,digest_sha1_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    _hidden_sha1_md = lVar2;
    return lVar2;
  }
  return _hidden_sha1_md;
}



long digest_sha256(void)

{
  int iVar1;
  long lVar2;
  
  if (_hidden_sha256_md == 0) {
    lVar2 = EVP_MD_meth_new(0x2a0,0x29c);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x20), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x78), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,8), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,digest_sha256_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,digest_sha256_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,digest_sha256_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    _hidden_sha256_md = lVar2;
    return lVar2;
  }
  return _hidden_sha256_md;
}



long digest_sha384(void)

{
  int iVar1;
  long lVar2;
  
  if (_hidden_sha384_md == 0) {
    lVar2 = EVP_MD_meth_new(0x2a1,0x29d);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x30), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x80), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0xe0), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,8), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,digest_sha384_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,digest_sha384_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,digest_sha384_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    _hidden_sha384_md = lVar2;
    return lVar2;
  }
  return _hidden_sha384_md;
}



long digest_sha512(void)

{
  int iVar1;
  long lVar2;
  
  if (_hidden_sha512_md == 0) {
    lVar2 = EVP_MD_meth_new(0x2a2,0x29e);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x40), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x80), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0xe0), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,8), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,digest_sha512_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,digest_sha512_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,digest_sha512_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    _hidden_sha512_md = lVar2;
    return lVar2;
  }
  return _hidden_sha512_md;
}



ulong ossltest_digests(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (init_4 == 0) {
      lVar4 = digest_md5();
      if (lVar4 != 0) {
        lVar5 = (long)(int)pos_3;
        pos_3 = pos_3 + 1;
        uVar1 = EVP_MD_get_type(lVar4);
        *(undefined4 *)(digest_nids_2 + lVar5 * 4) = uVar1;
      }
      lVar4 = digest_sha1();
      if (lVar4 != 0) {
        lVar5 = (long)(int)pos_3;
        pos_3 = pos_3 + 1;
        uVar1 = EVP_MD_get_type(lVar4);
        *(undefined4 *)(digest_nids_2 + lVar5 * 4) = uVar1;
      }
      lVar4 = digest_sha256();
      if (lVar4 != 0) {
        lVar5 = (long)(int)pos_3;
        pos_3 = pos_3 + 1;
        uVar1 = EVP_MD_get_type(lVar4);
        *(undefined4 *)(digest_nids_2 + lVar5 * 4) = uVar1;
      }
      lVar4 = digest_sha384();
      if (lVar4 != 0) {
        lVar5 = (long)(int)pos_3;
        pos_3 = pos_3 + 1;
        uVar1 = EVP_MD_get_type(lVar4);
        *(undefined4 *)(digest_nids_2 + lVar5 * 4) = uVar1;
      }
      lVar4 = digest_sha512();
      if (lVar4 != 0) {
        lVar5 = (long)(int)pos_3;
        pos_3 = pos_3 + 1;
        uVar1 = EVP_MD_get_type(lVar4);
        *(undefined4 *)(digest_nids_2 + lVar5 * 4) = uVar1;
      }
      uVar3 = (ulong)(int)pos_3;
      init_4 = 1;
      *(undefined4 *)(digest_nids_2 + uVar3 * 4) = 0;
    }
    else {
      uVar3 = (ulong)pos_3;
    }
    *param_3 = digest_nids_2;
  }
  else {
    if (param_4 == 0x2a0) {
      uVar2 = digest_sha256();
      *param_2 = uVar2;
    }
    else if (param_4 < 0x2a1) {
      if (param_4 == 4) {
        uVar2 = digest_md5();
        *param_2 = uVar2;
      }
      else {
        if (param_4 != 0x40) goto LAB_00100ec0;
        uVar2 = digest_sha1();
        *param_2 = uVar2;
      }
    }
    else if (param_4 == 0x2a1) {
      uVar2 = digest_sha384();
      *param_2 = uVar2;
    }
    else {
      if (param_4 != 0x2a2) {
LAB_00100ec0:
        *param_2 = 0;
        return 0;
      }
      uVar2 = digest_sha512();
      *param_2 = uVar2;
    }
    uVar3 = 1;
  }
  return uVar3;
}



void digest_md5_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_md5();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_update(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010103b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void digest_md5_init(undefined8 param_1)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_md5();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x00101059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



void digest_sha1_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha1();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_update(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010108b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void digest_sha1_init(undefined8 param_1)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha1();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x001010a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



void digest_sha256_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha256();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_update(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x001010db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void digest_sha256_init(undefined8 param_1)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha256();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x001010f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



void digest_sha384_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha384();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_update(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010112b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void digest_sha384_init(undefined8 param_1)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha384();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x00101149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



void digest_sha512_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha512();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_update(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x0010117b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void digest_sha512_init(undefined8 param_1)

{
  EVP_MD *pEVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pEVar1 = EVP_sha512();
  UNRECOVERED_JUMPTABLE = (code *)EVP_MD_meth_get_init(pEVar1);
                    /* WARNING: Could not recover jumptable at 0x00101199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_md5_final(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  EVP_MD *pEVar3;
  code *pcVar4;
  
  pEVar3 = EVP_md5();
  pcVar4 = (code *)EVP_MD_meth_get_final(pEVar3);
  iVar2 = (*pcVar4)(param_1,param_2);
  uVar1 = _UNK_001019a8;
  if (0 < iVar2) {
    *param_2 = __LC1;
    param_2[1] = uVar1;
  }
  return;
}



void digest_sha1_final(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  EVP_MD *pEVar3;
  code *pcVar4;
  long lVar5;
  
  pEVar3 = EVP_sha1();
  pcVar4 = (code *)EVP_MD_meth_get_final(pEVar3);
  iVar2 = (*pcVar4)(param_1,param_2);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      *(char *)(param_2 + lVar5) = (char)lVar5;
      lVar1 = lVar5 + 1;
      lVar5 = lVar5 + 2;
      *(char *)(param_2 + lVar1) = (char)lVar1;
    } while (lVar5 != 0x14);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_sha256_final(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  EVP_MD *pEVar3;
  code *pcVar4;
  
  pEVar3 = EVP_sha256();
  pcVar4 = (code *)EVP_MD_meth_get_final(pEVar3);
  iVar2 = (*pcVar4)(param_1,param_2);
  uVar1 = _UNK_001019a8;
  if (0 < iVar2) {
    *param_2 = __LC1;
    param_2[1] = uVar1;
    uVar1 = _UNK_001019b8;
    param_2[2] = __LC2;
    param_2[3] = uVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_sha384_final(undefined8 param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar37 [16];
  int iVar38;
  EVP_MD *pEVar39;
  code *pcVar40;
  char *pcVar41;
  char *pcVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined2 uVar69;
  undefined2 uVar70;
  undefined2 uVar71;
  undefined1 auVar73 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  int iVar56;
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  int iVar72;
  int iVar74;
  int iVar75;
  int iVar76;
  
  pEVar39 = EVP_sha384();
  pcVar40 = (code *)EVP_MD_meth_get_final(pEVar39);
  iVar38 = (*pcVar40)(param_1,param_2);
  auVar37 = __LC8;
  iVar36 = _UNK_00101a0c;
  iVar35 = _UNK_00101a08;
  iVar34 = _UNK_00101a04;
  iVar33 = __LC7;
  iVar32 = _UNK_001019fc;
  iVar31 = _UNK_001019f8;
  iVar30 = _UNK_001019f4;
  iVar29 = __LC6;
  iVar28 = _UNK_001019ec;
  iVar27 = _UNK_001019e8;
  iVar26 = _UNK_001019e4;
  iVar25 = __LC5;
  iVar24 = _UNK_001019dc;
  iVar23 = _UNK_001019d8;
  iVar22 = _UNK_001019d4;
  iVar21 = __LC4;
  if (0 < iVar38) {
    pcVar41 = param_2;
    auVar44 = __LC3;
    do {
      pcVar42 = pcVar41 + 0x10;
      iVar72 = auVar44._0_4_;
      auVar73._0_4_ = iVar72 + iVar21;
      iVar74 = auVar44._4_4_;
      auVar73._4_4_ = iVar74 + iVar22;
      iVar75 = auVar44._8_4_;
      iVar76 = auVar44._12_4_;
      auVar73._8_4_ = iVar75 + iVar23;
      auVar73._12_4_ = iVar76 + iVar24;
      auVar60._0_12_ = auVar44._0_12_;
      auVar60._12_2_ = auVar44._6_2_;
      auVar60._14_2_ = (short)((uint)(iVar74 + iVar26) >> 0x10);
      auVar59._12_4_ = auVar60._12_4_;
      auVar59._0_10_ = auVar44._0_10_;
      uVar70 = (undefined2)(iVar74 + iVar26);
      auVar59._10_2_ = uVar70;
      auVar58._10_6_ = auVar59._10_6_;
      auVar58._0_8_ = auVar44._0_8_;
      auVar58._8_2_ = auVar44._4_2_;
      uVar69 = (undefined2)((uint)(iVar72 + iVar25) >> 0x10);
      auVar17._2_8_ = auVar58._8_8_;
      auVar17._0_2_ = uVar69;
      auVar17._10_6_ = 0;
      auVar68._0_2_ = auVar44._0_2_;
      auVar57._12_4_ = 0;
      auVar57._0_12_ = SUB1612(auVar17 << 0x30,4);
      auVar57 = auVar57 << 0x20;
      uVar71 = (undefined2)(iVar75 + iVar27);
      auVar64._0_12_ = auVar57._0_12_;
      auVar64._12_2_ = uVar69;
      auVar64._14_2_ = (short)((uint)(iVar75 + iVar27) >> 0x10);
      auVar63._12_4_ = auVar64._12_4_;
      auVar63._0_10_ = auVar57._0_10_;
      auVar63._10_2_ = auVar44._10_2_;
      auVar62._10_6_ = auVar63._10_6_;
      auVar62._0_8_ = auVar57._0_8_;
      auVar62._8_2_ = auVar44._2_2_;
      auVar18._2_8_ = auVar62._8_8_;
      auVar18._0_2_ = uVar71;
      auVar18._10_6_ = 0;
      auVar61._12_4_ = 0;
      auVar61._0_12_ = SUB1612(auVar18 << 0x30,4);
      auVar61 = auVar61 << 0x20;
      iVar38 = iVar72 + iVar29;
      iVar56 = iVar74 + iVar30;
      auVar43._0_8_ = CONCAT44(iVar56,iVar38);
      auVar43._8_4_ = iVar75 + iVar31;
      auVar67._0_12_ = auVar61._0_12_;
      auVar67._12_2_ = uVar71;
      auVar67._14_2_ = (short)(iVar76 + iVar28);
      auVar66._12_4_ = auVar67._12_4_;
      auVar66._0_10_ = auVar61._0_10_;
      auVar66._10_2_ = uVar70;
      auVar65._10_6_ = auVar66._10_6_;
      auVar65._0_8_ = auVar61._0_8_;
      auVar65._8_2_ = (short)(iVar72 + iVar25);
      auVar68._8_8_ = auVar65._8_8_;
      auVar68._6_2_ = auVar44._12_2_;
      auVar68._4_2_ = auVar44._8_2_;
      auVar68._2_2_ = auVar44._4_2_;
      auVar47._12_2_ = (short)((uint)iVar56 >> 0x10);
      auVar47._0_12_ = auVar43;
      auVar47._14_2_ = (short)((uint)(iVar74 + iVar34) >> 0x10);
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._0_10_ = auVar43._0_10_;
      uVar70 = (undefined2)(iVar74 + iVar34);
      auVar46._10_2_ = uVar70;
      auVar45._10_6_ = auVar46._10_6_;
      auVar45._8_2_ = (short)iVar56;
      auVar45._0_8_ = auVar43._0_8_;
      uVar69 = (undefined2)((uint)(iVar72 + iVar33) >> 0x10);
      auVar19._2_8_ = auVar45._8_8_;
      auVar19._0_2_ = uVar69;
      auVar19._10_6_ = 0;
      auVar55._0_2_ = (undefined2)iVar38;
      auVar44._12_4_ = 0;
      auVar44._0_12_ = SUB1612(auVar19 << 0x30,4);
      auVar44 = auVar44 << 0x20;
      auVar68 = auVar68 & auVar37;
      uVar71 = (undefined2)(iVar75 + iVar35);
      auVar51._0_12_ = auVar44._0_12_;
      auVar51._12_2_ = uVar69;
      auVar51._14_2_ = (short)((uint)(iVar75 + iVar35) >> 0x10);
      auVar50._12_4_ = auVar51._12_4_;
      auVar50._0_10_ = auVar44._0_10_;
      auVar50._10_2_ = (short)((uint)auVar43._8_4_ >> 0x10);
      auVar49._10_6_ = auVar50._10_6_;
      auVar49._0_8_ = auVar44._0_8_;
      auVar49._8_2_ = (short)((uint)iVar38 >> 0x10);
      auVar20._2_8_ = auVar49._8_8_;
      auVar20._0_2_ = uVar71;
      auVar20._10_6_ = 0;
      auVar48._12_4_ = 0;
      auVar48._0_12_ = SUB1612(auVar20 << 0x30,4);
      auVar48 = auVar48 << 0x20;
      auVar54._0_12_ = auVar48._0_12_;
      auVar54._12_2_ = uVar71;
      auVar54._14_2_ = (short)(iVar76 + iVar36);
      auVar53._12_4_ = auVar54._12_4_;
      auVar53._0_10_ = auVar48._0_10_;
      auVar53._10_2_ = uVar70;
      auVar52._10_6_ = auVar53._10_6_;
      auVar52._0_8_ = auVar48._0_8_;
      auVar52._8_2_ = (short)(iVar72 + iVar33);
      auVar55._8_8_ = auVar52._8_8_;
      auVar55._6_2_ = (short)(iVar76 + iVar32);
      auVar55._4_2_ = (short)auVar43._8_4_;
      auVar55._2_2_ = (short)iVar56;
      auVar55 = auVar55 & auVar37;
      sVar1 = auVar68._0_2_;
      sVar2 = auVar68._2_2_;
      sVar3 = auVar68._4_2_;
      sVar4 = auVar68._6_2_;
      sVar5 = auVar68._8_2_;
      sVar6 = auVar68._10_2_;
      sVar7 = auVar68._12_2_;
      sVar8 = auVar68._14_2_;
      sVar9 = auVar55._0_2_;
      sVar10 = auVar55._2_2_;
      sVar11 = auVar55._4_2_;
      sVar12 = auVar55._6_2_;
      sVar13 = auVar55._8_2_;
      sVar14 = auVar55._10_2_;
      sVar15 = auVar55._12_2_;
      sVar16 = auVar55._14_2_;
      *pcVar41 = (0 < sVar1) * (sVar1 < 0x100) * auVar68[0] - (0xff < sVar1);
      pcVar41[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar68[2] - (0xff < sVar2);
      pcVar41[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar68[4] - (0xff < sVar3);
      pcVar41[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar68[6] - (0xff < sVar4);
      pcVar41[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar68[8] - (0xff < sVar5);
      pcVar41[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar68[10] - (0xff < sVar6);
      pcVar41[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar68[0xc] - (0xff < sVar7);
      pcVar41[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar68[0xe] - (0xff < sVar8);
      pcVar41[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar55[0] - (0xff < sVar9);
      pcVar41[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar55[2] - (0xff < sVar10);
      pcVar41[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar55[4] - (0xff < sVar11);
      pcVar41[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar55[6] - (0xff < sVar12);
      pcVar41[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar55[8] - (0xff < sVar13);
      pcVar41[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar55[10] - (0xff < sVar14);
      pcVar41[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar55[0xc] - (0xff < sVar15);
      pcVar41[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar55[0xe] - (0xff < sVar16);
      pcVar41 = pcVar42;
      auVar44 = auVar73;
    } while (pcVar42 != param_2 + 0x30);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_sha512_final(undefined8 param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar37 [16];
  int iVar38;
  EVP_MD *pEVar39;
  code *pcVar40;
  char *pcVar41;
  char *pcVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined2 uVar69;
  undefined2 uVar70;
  undefined2 uVar71;
  undefined1 auVar73 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  int iVar56;
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  int iVar72;
  int iVar74;
  int iVar75;
  int iVar76;
  
  pEVar39 = EVP_sha512();
  pcVar40 = (code *)EVP_MD_meth_get_final(pEVar39);
  iVar38 = (*pcVar40)(param_1,param_2);
  auVar37 = __LC8;
  iVar36 = _UNK_00101a0c;
  iVar35 = _UNK_00101a08;
  iVar34 = _UNK_00101a04;
  iVar33 = __LC7;
  iVar32 = _UNK_001019fc;
  iVar31 = _UNK_001019f8;
  iVar30 = _UNK_001019f4;
  iVar29 = __LC6;
  iVar28 = _UNK_001019ec;
  iVar27 = _UNK_001019e8;
  iVar26 = _UNK_001019e4;
  iVar25 = __LC5;
  iVar24 = _UNK_001019dc;
  iVar23 = _UNK_001019d8;
  iVar22 = _UNK_001019d4;
  iVar21 = __LC4;
  if (0 < iVar38) {
    pcVar41 = param_2;
    auVar44 = __LC3;
    do {
      pcVar42 = pcVar41 + 0x10;
      iVar72 = auVar44._0_4_;
      auVar73._0_4_ = iVar72 + iVar21;
      iVar74 = auVar44._4_4_;
      auVar73._4_4_ = iVar74 + iVar22;
      iVar75 = auVar44._8_4_;
      iVar76 = auVar44._12_4_;
      auVar73._8_4_ = iVar75 + iVar23;
      auVar73._12_4_ = iVar76 + iVar24;
      auVar60._0_12_ = auVar44._0_12_;
      auVar60._12_2_ = auVar44._6_2_;
      auVar60._14_2_ = (short)((uint)(iVar74 + iVar26) >> 0x10);
      auVar59._12_4_ = auVar60._12_4_;
      auVar59._0_10_ = auVar44._0_10_;
      uVar70 = (undefined2)(iVar74 + iVar26);
      auVar59._10_2_ = uVar70;
      auVar58._10_6_ = auVar59._10_6_;
      auVar58._0_8_ = auVar44._0_8_;
      auVar58._8_2_ = auVar44._4_2_;
      uVar69 = (undefined2)((uint)(iVar72 + iVar25) >> 0x10);
      auVar17._2_8_ = auVar58._8_8_;
      auVar17._0_2_ = uVar69;
      auVar17._10_6_ = 0;
      auVar68._0_2_ = auVar44._0_2_;
      auVar57._12_4_ = 0;
      auVar57._0_12_ = SUB1612(auVar17 << 0x30,4);
      auVar57 = auVar57 << 0x20;
      uVar71 = (undefined2)(iVar75 + iVar27);
      auVar64._0_12_ = auVar57._0_12_;
      auVar64._12_2_ = uVar69;
      auVar64._14_2_ = (short)((uint)(iVar75 + iVar27) >> 0x10);
      auVar63._12_4_ = auVar64._12_4_;
      auVar63._0_10_ = auVar57._0_10_;
      auVar63._10_2_ = auVar44._10_2_;
      auVar62._10_6_ = auVar63._10_6_;
      auVar62._0_8_ = auVar57._0_8_;
      auVar62._8_2_ = auVar44._2_2_;
      auVar18._2_8_ = auVar62._8_8_;
      auVar18._0_2_ = uVar71;
      auVar18._10_6_ = 0;
      auVar61._12_4_ = 0;
      auVar61._0_12_ = SUB1612(auVar18 << 0x30,4);
      auVar61 = auVar61 << 0x20;
      iVar38 = iVar72 + iVar29;
      iVar56 = iVar74 + iVar30;
      auVar43._0_8_ = CONCAT44(iVar56,iVar38);
      auVar43._8_4_ = iVar75 + iVar31;
      auVar67._0_12_ = auVar61._0_12_;
      auVar67._12_2_ = uVar71;
      auVar67._14_2_ = (short)(iVar76 + iVar28);
      auVar66._12_4_ = auVar67._12_4_;
      auVar66._0_10_ = auVar61._0_10_;
      auVar66._10_2_ = uVar70;
      auVar65._10_6_ = auVar66._10_6_;
      auVar65._0_8_ = auVar61._0_8_;
      auVar65._8_2_ = (short)(iVar72 + iVar25);
      auVar68._8_8_ = auVar65._8_8_;
      auVar68._6_2_ = auVar44._12_2_;
      auVar68._4_2_ = auVar44._8_2_;
      auVar68._2_2_ = auVar44._4_2_;
      auVar47._12_2_ = (short)((uint)iVar56 >> 0x10);
      auVar47._0_12_ = auVar43;
      auVar47._14_2_ = (short)((uint)(iVar74 + iVar34) >> 0x10);
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._0_10_ = auVar43._0_10_;
      uVar70 = (undefined2)(iVar74 + iVar34);
      auVar46._10_2_ = uVar70;
      auVar45._10_6_ = auVar46._10_6_;
      auVar45._8_2_ = (short)iVar56;
      auVar45._0_8_ = auVar43._0_8_;
      uVar69 = (undefined2)((uint)(iVar72 + iVar33) >> 0x10);
      auVar19._2_8_ = auVar45._8_8_;
      auVar19._0_2_ = uVar69;
      auVar19._10_6_ = 0;
      auVar55._0_2_ = (undefined2)iVar38;
      auVar44._12_4_ = 0;
      auVar44._0_12_ = SUB1612(auVar19 << 0x30,4);
      auVar44 = auVar44 << 0x20;
      auVar68 = auVar68 & auVar37;
      uVar71 = (undefined2)(iVar75 + iVar35);
      auVar51._0_12_ = auVar44._0_12_;
      auVar51._12_2_ = uVar69;
      auVar51._14_2_ = (short)((uint)(iVar75 + iVar35) >> 0x10);
      auVar50._12_4_ = auVar51._12_4_;
      auVar50._0_10_ = auVar44._0_10_;
      auVar50._10_2_ = (short)((uint)auVar43._8_4_ >> 0x10);
      auVar49._10_6_ = auVar50._10_6_;
      auVar49._0_8_ = auVar44._0_8_;
      auVar49._8_2_ = (short)((uint)iVar38 >> 0x10);
      auVar20._2_8_ = auVar49._8_8_;
      auVar20._0_2_ = uVar71;
      auVar20._10_6_ = 0;
      auVar48._12_4_ = 0;
      auVar48._0_12_ = SUB1612(auVar20 << 0x30,4);
      auVar48 = auVar48 << 0x20;
      auVar54._0_12_ = auVar48._0_12_;
      auVar54._12_2_ = uVar71;
      auVar54._14_2_ = (short)(iVar76 + iVar36);
      auVar53._12_4_ = auVar54._12_4_;
      auVar53._0_10_ = auVar48._0_10_;
      auVar53._10_2_ = uVar70;
      auVar52._10_6_ = auVar53._10_6_;
      auVar52._0_8_ = auVar48._0_8_;
      auVar52._8_2_ = (short)(iVar72 + iVar33);
      auVar55._8_8_ = auVar52._8_8_;
      auVar55._6_2_ = (short)(iVar76 + iVar32);
      auVar55._4_2_ = (short)auVar43._8_4_;
      auVar55._2_2_ = (short)iVar56;
      auVar55 = auVar55 & auVar37;
      sVar1 = auVar68._0_2_;
      sVar2 = auVar68._2_2_;
      sVar3 = auVar68._4_2_;
      sVar4 = auVar68._6_2_;
      sVar5 = auVar68._8_2_;
      sVar6 = auVar68._10_2_;
      sVar7 = auVar68._12_2_;
      sVar8 = auVar68._14_2_;
      sVar9 = auVar55._0_2_;
      sVar10 = auVar55._2_2_;
      sVar11 = auVar55._4_2_;
      sVar12 = auVar55._6_2_;
      sVar13 = auVar55._8_2_;
      sVar14 = auVar55._10_2_;
      sVar15 = auVar55._12_2_;
      sVar16 = auVar55._14_2_;
      *pcVar41 = (0 < sVar1) * (sVar1 < 0x100) * auVar68[0] - (0xff < sVar1);
      pcVar41[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar68[2] - (0xff < sVar2);
      pcVar41[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar68[4] - (0xff < sVar3);
      pcVar41[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar68[6] - (0xff < sVar4);
      pcVar41[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar68[8] - (0xff < sVar5);
      pcVar41[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar68[10] - (0xff < sVar6);
      pcVar41[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar68[0xc] - (0xff < sVar7);
      pcVar41[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar68[0xe] - (0xff < sVar8);
      pcVar41[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar55[0] - (0xff < sVar9);
      pcVar41[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar55[2] - (0xff < sVar10);
      pcVar41[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar55[4] - (0xff < sVar11);
      pcVar41[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar55[6] - (0xff < sVar12);
      pcVar41[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar55[8] - (0xff < sVar13);
      pcVar41[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar55[10] - (0xff < sVar14);
      pcVar41[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar55[0xc] - (0xff < sVar15);
      pcVar41[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar55[0xe] - (0xff < sVar16);
      pcVar41 = pcVar42;
      auVar44 = auVar73;
    } while (pcVar42 != param_2 + 0x40);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY * load_key_isra_0(long param_1,int param_2)

{
  int iVar1;
  BIO *bp;
  EVP_PKEY *pEVar2;
  char *filename;
  
  iVar1 = OPENSSL_strncasecmp(param_1,&_LC9,3);
  if (iVar1 != 0) {
    return (EVP_PKEY *)0x0;
  }
  filename = (char *)(param_1 + 3);
  if (param_2 == 0) {
    __fprintf_chk(_stderr,2,"[ossltest]Loading %s key %s\n","Private",filename);
    bp = BIO_new_file(filename,"r");
    if (bp == (BIO *)0x0) {
      return (EVP_PKEY *)0x0;
    }
    pEVar2 = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
  }
  else {
    __fprintf_chk(_stderr,2,"[ossltest]Loading %s key %s\n","Public",filename);
    bp = BIO_new_file(filename,"r");
    if (bp == (BIO *)0x0) {
      return (EVP_PKEY *)0x0;
    }
    pEVar2 = PEM_read_bio_PUBKEY(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
  }
  BIO_free(bp);
  return pEVar2;
}



void ossltest_load_privkey(undefined8 param_1,undefined8 param_2)

{
  load_key_isra_0(param_2,0);
  return;
}



void ossltest_load_pubkey(undefined8 param_1,undefined8 param_2)

{
  load_key_isra_0(param_2,1);
  return;
}



undefined8 bind_ossltest(ENGINE *param_1)

{
  int iVar1;
  
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  if (error_loaded == 0) {
    ERR_load_strings(lib_code,(ERR_STRING_DATA *)OSSLTEST_str_reasons);
    error_loaded = 1;
  }
  iVar1 = ENGINE_set_id(param_1,"ossltest");
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(param_1,"OpenSSL Test engine support");
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_digests(param_1,ossltest_digests);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_ciphers(param_1,ossltest_ciphers);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_RAND(param_1,(RAND_METHOD *)osslt_rand_meth_1);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_destroy_function(param_1,ossltest_destroy);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_load_privkey_function(param_1,ossltest_load_privkey);
              if (iVar1 != 0) {
                iVar1 = ENGINE_set_load_pubkey_function(param_1,ossltest_load_pubkey);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_init_function(param_1,ossltest_init);
                  if (iVar1 != 0) {
                    iVar1 = ENGINE_set_finish_function(param_1,ossltest_finish);
                    if (iVar1 != 0) {
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  ERR_new();
  ERR_set_debug("engines/e_ossltest_err.c",0x36,"ERR_OSSLTEST_error");
  ERR_set_error(lib_code,100,0);
  ERR_set_debug("engines/e_ossltest.c",0x1ab,0);
  return 0;
}



undefined8 ossltest_finish(void)

{
  return 1;
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
  if ((param_2 != (char *)0x0) && (iVar1 = strcmp(param_2,"ossltest"), iVar1 != 0)) {
    return false;
  }
  iVar1 = bind_ossltest(param_1);
  return iVar1 != 0;
}



void ENGINE_load_ossltest(void)

{
  int iVar1;
  ENGINE *e;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  iVar1 = bind_ossltest(e);
  if (iVar1 != 0) {
    ENGINE_add(e);
    ENGINE_free(e);
    ERR_clear_error();
    return;
  }
  ENGINE_free(e);
  return;
}


