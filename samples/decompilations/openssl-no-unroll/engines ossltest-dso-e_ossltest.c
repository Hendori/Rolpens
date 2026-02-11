
undefined8 ossltest_init(void)

{
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossltest_rand_bytes(undefined1 (*param_1) [16],uint param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  uint uVar19;
  int iVar20;
  uint uVar21;
  char *pcVar23;
  undefined1 in_XMM0 [16];
  undefined1 auVar24 [16];
  ulong uVar22;
  
  cVar15 = UNK_001019ff;
  cVar14 = UNK_001019fe;
  cVar13 = UNK_001019fd;
  cVar12 = UNK_001019fc;
  cVar11 = UNK_001019fb;
  cVar10 = UNK_001019fa;
  cVar9 = UNK_001019f9;
  cVar8 = UNK_001019f8;
  cVar7 = UNK_001019f7;
  cVar6 = UNK_001019f6;
  cVar5 = UNK_001019f5;
  cVar4 = UNK_001019f4;
  cVar3 = UNK_001019f3;
  cVar2 = UNK_001019f2;
  cVar1 = UNK_001019f1;
  cVar16 = _LC1;
  uVar19 = param_2 - 1;
  if (-1 < (int)uVar19) {
    if (uVar19 < 0xf) {
      uVar22 = 0;
      cVar16 = '\x01';
      pauVar17 = param_1;
    }
    else {
      pauVar17 = param_1;
      auVar24 = __LC0;
      do {
        pauVar18 = pauVar17 + 1;
        in_XMM0[0] = auVar24[0] + cVar16;
        in_XMM0[1] = auVar24[1] + cVar1;
        in_XMM0[2] = auVar24[2] + cVar2;
        in_XMM0[3] = auVar24[3] + cVar3;
        in_XMM0[4] = auVar24[4] + cVar4;
        in_XMM0[5] = auVar24[5] + cVar5;
        in_XMM0[6] = auVar24[6] + cVar6;
        in_XMM0[7] = auVar24[7] + cVar7;
        in_XMM0[8] = auVar24[8] + cVar8;
        in_XMM0[9] = auVar24[9] + cVar9;
        in_XMM0[10] = auVar24[10] + cVar10;
        in_XMM0[0xb] = auVar24[0xb] + cVar11;
        in_XMM0[0xc] = auVar24[0xc] + cVar12;
        in_XMM0[0xd] = auVar24[0xd] + cVar13;
        in_XMM0[0xe] = auVar24[0xe] + cVar14;
        in_XMM0[0xf] = auVar24[0xf] + cVar15;
        *pauVar17 = auVar24;
        pauVar17 = pauVar18;
        auVar24 = in_XMM0;
      } while (param_1 + (param_2 >> 4) != pauVar18);
      uVar21 = param_2 & 0xfffffff0;
      uVar22 = (ulong)uVar21;
      cVar16 = (char)uVar21 + '\x01';
      uVar19 = uVar19 - uVar21;
      pauVar17 = (undefined1 (*) [16])(*param_1 + uVar21);
      if (param_2 == uVar21) {
        return 1;
      }
    }
    param_2 = param_2 - (int)uVar22;
    if (6 < param_2 - 1) {
      auVar24 = pshuflw(in_XMM0,ZEXT216(CONCAT11(cVar16,cVar16)),0);
      *(ulong *)(*param_1 + uVar22) =
           CONCAT17(auVar24[7] + _LC2._7_1_,
                    CONCAT16(auVar24[6] + _LC2._6_1_,
                             CONCAT15(auVar24[5] + _LC2._5_1_,
                                      CONCAT14(auVar24[4] + _LC2._4_1_,
                                               CONCAT13(auVar24[3] + _LC2._3_1_,
                                                        CONCAT12(auVar24[2] + _LC2._2_1_,
                                                                 CONCAT11(auVar24[1] + _LC2._1_1_,
                                                                          auVar24[0] + (char)_LC2)))
                                              ))));
      uVar21 = param_2 & 0xfffffff8;
      cVar16 = cVar16 + (char)uVar21;
      iVar20 = uVar19 - uVar21;
      pcVar23 = *pauVar17 + uVar21;
      if ((param_2 & 7) != 0) {
        *pcVar23 = cVar16;
        if (0 < iVar20) {
          pcVar23[1] = cVar16 + '\x01';
          if (iVar20 != 1) {
            pcVar23[2] = cVar16 + '\x02';
            if (iVar20 != 2) {
              pcVar23[3] = cVar16 + '\x03';
              if (iVar20 != 3) {
                pcVar23[4] = cVar16 + '\x04';
                if (iVar20 != 4) {
                  pcVar23[5] = cVar16 + '\x05';
                  if (iVar20 != 5) {
                    pcVar23[6] = cVar16 + '\x06';
                  }
                }
              }
            }
          }
        }
      }
      return 1;
    }
    (*pauVar17)[0] = cVar16;
    if (0 < (int)uVar19) {
      (*pauVar17)[1] = cVar16 + '\x01';
      if (uVar19 != 1) {
        (*pauVar17)[2] = cVar16 + '\x02';
        if (uVar19 != 2) {
          (*pauVar17)[3] = cVar16 + '\x03';
          if (uVar19 != 3) {
            (*pauVar17)[4] = cVar16 + '\x04';
            if (uVar19 != 4) {
              (*pauVar17)[5] = cVar16 + '\x05';
              if (uVar19 != 5) {
                (*pauVar17)[6] = cVar16 + '\x06';
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



undefined8 ossltest_rand_status(void)

{
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
                    /* WARNING: Could not recover jumptable at 0x0010028d. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x001003ad. Too many branches */
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
        if (iVar4 != 0) goto LAB_00100456;
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
        if (iVar4 != 0) goto LAB_00100456;
      }
      EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
      _hidden_aes_128_cbc = 0;
      lVar7 = lVar3;
    }
  }
LAB_00100456:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ossltest_aes128_cbc_hmac_sha1_cipher(undefined8 param_1,void *param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  size_t __n;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  size_t *psVar6;
  byte *pbVar7;
  ulong uVar8;
  
  psVar6 = (size_t *)EVP_CIPHER_CTX_get_cipher_data();
  __n = *psVar6;
  *psVar6 = 0xffffffffffffffff;
  if ((param_4 & 0xf) != 0) {
    return 0;
  }
  iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar5 == 0) {
    memmove(param_2,param_3,param_4);
    if (__n == 0xffffffffffffffff) {
      return 1;
    }
    if ((uint)psVar6[1] < 0x302) {
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
    uVar8 = (param_4 - 1) - (ulong)bVar2;
    if (uVar8 < param_4) {
      pbVar7 = (byte *)(uVar8 + (long)param_2);
      do {
        if (bVar2 != *pbVar7) {
          return 0;
        }
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 != (byte *)((long)param_2 + param_4));
    }
  }
  else if (__n == 0xffffffffffffffff) {
    memmove(param_2,param_3,param_4);
  }
  else {
    uVar8 = __n + 0x24 & 0xfffffffffffffff0;
    if (uVar8 != param_4) {
      return 0;
    }
    memmove(param_2,param_3,__n);
    uVar4 = _UNK_00101a08;
    uVar3 = _LC2;
    if (__n != uVar8) {
      uVar1 = __n + 0x14;
      *(undefined4 *)((long)param_2 + __n + 0x10) = 0x13121110;
      *(undefined8 *)((long)param_2 + __n) = uVar3;
      ((undefined8 *)((long)param_2 + __n))[1] = uVar4;
      if (uVar1 < uVar8) {
        memset((void *)(uVar1 + (long)param_2),((int)uVar8 + -1) - (int)uVar1 & 0xff,
               (uVar8 - 0x14) - __n);
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
        if (param_4 != 0x40) goto LAB_00100ee0;
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
LAB_00100ee0:
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
                    /* WARNING: Could not recover jumptable at 0x0010105b. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x00101079. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x001010ab. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x001010c9. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x001010fb. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x00101119. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x0010114b. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x00101169. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x0010119b. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x001011b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
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
  uVar1 = _UNK_00101a08;
  if (0 < iVar2) {
    *param_2 = _LC2;
    param_2[1] = uVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_sha1_final(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  EVP_MD *pEVar4;
  code *pcVar5;
  
  pEVar4 = EVP_sha1();
  pcVar5 = (code *)EVP_MD_meth_get_final(pEVar4);
  iVar3 = (*pcVar5)(param_1,param_2);
  uVar2 = _UNK_00101a08;
  uVar1 = _LC2;
  if (0 < iVar3) {
    *(undefined4 *)(param_2 + 2) = 0x13121110;
    *param_2 = uVar1;
    param_2[1] = uVar2;
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
  uVar1 = _UNK_00101a08;
  if (0 < iVar2) {
    *param_2 = _LC2;
    param_2[1] = uVar1;
    uVar1 = _UNK_00101a18;
    param_2[2] = __LC6;
    param_2[3] = uVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_sha384_final(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  EVP_MD *pEVar3;
  code *pcVar4;
  
  pEVar3 = EVP_sha384();
  pcVar4 = (code *)EVP_MD_meth_get_final(pEVar3);
  iVar2 = (*pcVar4)(param_1,param_2);
  uVar1 = _UNK_00101a08;
  if (0 < iVar2) {
    *param_2 = _LC2;
    param_2[1] = uVar1;
    uVar1 = _UNK_00101a18;
    param_2[2] = __LC6;
    param_2[3] = uVar1;
    uVar1 = _UNK_00101a28;
    param_2[4] = __LC7;
    param_2[5] = uVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void digest_sha512_final(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  EVP_MD *pEVar3;
  code *pcVar4;
  
  pEVar3 = EVP_sha512();
  pcVar4 = (code *)EVP_MD_meth_get_final(pEVar3);
  iVar2 = (*pcVar4)(param_1,param_2);
  uVar1 = _UNK_00101a08;
  if (0 < iVar2) {
    *param_2 = _LC2;
    param_2[1] = uVar1;
    uVar1 = _UNK_00101a18;
    param_2[2] = __LC6;
    param_2[3] = uVar1;
    uVar1 = _UNK_00101a28;
    param_2[4] = __LC7;
    param_2[5] = uVar1;
    uVar1 = _UNK_00101a38;
    param_2[6] = __LC8;
    param_2[7] = uVar1;
  }
  return;
}



undefined8 ossltest_finish(void)

{
  return 1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY * ossltest_load_privkey(undefined8 param_1,long param_2)

{
  int iVar1;
  BIO *bp;
  EVP_PKEY *pEVar2;
  
  iVar1 = OPENSSL_strncasecmp(param_2,&_LC12,3);
  if (iVar1 == 0) {
    __fprintf_chk(_stderr,2,"[ossltest]Loading %s key %s\n","Private",(char *)(param_2 + 3));
    bp = BIO_new_file((char *)(param_2 + 3),"r");
    if (bp != (BIO *)0x0) {
      pEVar2 = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
      BIO_free(bp);
      return pEVar2;
    }
  }
  return (EVP_PKEY *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY * ossltest_load_pubkey(undefined8 param_1,long param_2)

{
  int iVar1;
  BIO *bp;
  EVP_PKEY *pEVar2;
  
  iVar1 = OPENSSL_strncasecmp(param_2,&_LC12,3);
  if (iVar1 == 0) {
    __fprintf_chk(_stderr,2,"[ossltest]Loading %s key %s\n","Public",(char *)(param_2 + 3));
    bp = BIO_new_file((char *)(param_2 + 3),"r");
    if (bp != (BIO *)0x0) {
      pEVar2 = PEM_read_bio_PUBKEY(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
      BIO_free(bp);
      return pEVar2;
    }
  }
  return (EVP_PKEY *)0x0;
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


