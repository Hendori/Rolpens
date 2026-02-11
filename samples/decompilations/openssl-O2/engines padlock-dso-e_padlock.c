
bool padlock_init(void)

{
  return padlock_use_rng != 0 || padlock_use_ace != 0;
}



undefined8 padlock_aes_set_encrypt_key(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if ((param_2 & 0xffffffbf) == 0x80) {
    uVar4 = 0xc;
    if (param_2 == 0x80) {
      param_3[0x3c] = 10;
      uVar4 = *param_1;
      uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      *param_3 = uVar3;
      uVar4 = param_1[1];
      uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      param_3[1] = uVar6;
      uVar4 = param_1[2];
      uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      param_3[2] = uVar7;
      uVar4 = param_1[3];
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      param_3[3] = uVar4;
      puVar1 = param_3 + 4;
      puVar9 = &rcon;
      do {
        puVar10 = puVar9 + 1;
        uVar3 = uVar3 ^ (uint)CONCAT11(Te4[uVar4 & 0xff],Te4[uVar4 >> 0x18]) ^
                        (uint)(byte)Te4[uVar4 >> 0x10 & 0xff] << 0x18 ^
                        (uint)(byte)Te4[uVar4 >> 8 & 0xff] << 0x10 ^ *puVar9;
        uVar6 = uVar6 ^ uVar3;
        uVar7 = uVar7 ^ uVar6;
        uVar4 = uVar4 ^ uVar7;
        *(ulong *)puVar1 = CONCAT44(uVar6,uVar3);
        *(ulong *)(puVar1 + 2) = CONCAT44(uVar4,uVar7);
        puVar1 = puVar1 + 4;
        puVar9 = puVar10;
      } while (puVar10 != (uint *)&DAT_001021e8);
      return 0;
    }
  }
  else {
    if (param_2 != 0x100) {
      return 0xfffffffe;
    }
    uVar4 = 0xe;
  }
  param_3[0x3c] = uVar4;
  uVar4 = *param_1;
  uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  *param_3 = uVar7;
  uVar4 = param_1[1];
  uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  param_3[1] = uVar6;
  uVar4 = param_1[2];
  uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  param_3[2] = uVar8;
  uVar4 = param_1[3];
  uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  param_3[3] = uVar3;
  uVar4 = param_1[4];
  param_3[4] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[5];
  param_3[5] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if (param_2 == 0xc0) {
    puVar1 = param_3 + 6;
    puVar9 = &rcon;
    while( true ) {
      uVar4 = puVar1[-1];
      uVar7 = uVar7 ^ (uint)(byte)Te4[uVar4 >> 0x18] ^ *puVar9 ^ (uint)(byte)Te4[uVar4 & 0xff] << 8
                      ^ (uint)(byte)Te4[uVar4 >> 0x10 & 0xff] << 0x18 ^
                      (uint)(byte)Te4[uVar4 >> 8 & 0xff] << 0x10;
      uVar6 = uVar6 ^ uVar7;
      uVar8 = uVar8 ^ uVar6;
      uVar3 = uVar3 ^ uVar8;
      *(ulong *)puVar1 = CONCAT44(uVar6,uVar7);
      *(ulong *)(puVar1 + 2) = CONCAT44(uVar3,uVar8);
      if (puVar9 + 1 == (uint *)&DAT_001021e0) break;
      puVar1[4] = puVar1[-2] ^ uVar3;
      puVar1[5] = puVar1[-2] ^ uVar3 ^ uVar4;
      puVar1 = puVar1 + 6;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    uVar4 = param_1[6];
    param_3[6] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = param_1[7];
    param_3[7] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    puVar1 = param_3 + 8;
    puVar9 = &rcon;
    while( true ) {
      uVar4 = puVar1[-1];
      uVar7 = uVar7 ^ (uint)(byte)Te4[uVar4 >> 0x18] ^ *puVar9 ^ (uint)(byte)Te4[uVar4 & 0xff] << 8
                      ^ (uint)(byte)Te4[uVar4 >> 0x10 & 0xff] << 0x18 ^
                      (uint)(byte)Te4[uVar4 >> 8 & 0xff] << 0x10;
      uVar6 = uVar6 ^ uVar7;
      uVar8 = uVar8 ^ uVar6;
      uVar3 = uVar3 ^ uVar8;
      *(ulong *)puVar1 = CONCAT44(uVar6,uVar7);
      *(ulong *)(puVar1 + 2) = CONCAT44(uVar3,uVar8);
      if (puVar9 + 1 == (uint *)&DAT_001021dc) break;
      uVar2 = (uint)(byte)Te4[uVar3 & 0xff] ^ puVar1[-4] ^ (uint)(byte)Te4[uVar3 >> 0x18] << 0x18 ^
              (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x10 ^
              (uint)(byte)Te4[uVar3 >> 8 & 0xff] << 8;
      uVar11 = puVar1[-3] ^ uVar2;
      uVar5 = puVar1[-2] ^ uVar11;
      *(ulong *)(puVar1 + 4) = CONCAT44(uVar11,uVar2);
      *(ulong *)(puVar1 + 6) = CONCAT44(uVar4 ^ uVar5,uVar5);
      puVar1 = puVar1 + 8;
      puVar9 = puVar9 + 1;
    }
  }
  return 0;
}



undefined8 padlock_rand_status(void)

{
  return 1;
}



undefined8 padlock_rand_bytes(undefined1 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < param_2) {
    do {
      do {
        uVar1 = padlock_xstore(param_1,0);
        if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x7c00) != 0)) goto LAB_00100430;
      } while ((uVar1 & 0x1f) == 0);
      if ((uVar1 & 0x1f) != 8) goto LAB_00100430;
      param_2 = param_2 + -8;
      param_1 = param_1 + 8;
    } while (7 < param_2);
  }
  puVar3 = param_1;
  while( true ) {
    do {
      if ((param_2 + (int)param_1) - (int)puVar3 < 1) {
        OPENSSL_cleanse(local_34,4);
        uVar2 = 1;
        goto LAB_00100432;
      }
      uVar1 = padlock_xstore(local_34,3);
      if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x7c00) != 0)) goto LAB_00100430;
    } while ((uVar1 & 0x1f) == 0);
    if ((uVar1 & 0x1f) != 1) break;
    *puVar3 = local_34[0];
    puVar3 = puVar3 + 1;
  }
LAB_00100430:
  uVar2 = 0;
LAB_00100432:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 padlock_ciphers(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  lVar15 = _hidden_aes_128_ecb;
  lVar14 = _hidden_aes_128_cbc;
  lVar13 = _hidden_aes_128_cfb;
  lVar12 = _hidden_aes_128_ofb;
  lVar11 = _hidden_aes_128_ctr;
  lVar10 = _hidden_aes_192_ecb;
  lVar9 = _hidden_aes_192_cbc;
  lVar8 = _hidden_aes_192_cfb;
  lVar7 = _hidden_aes_192_ofb;
  lVar6 = _hidden_aes_192_ctr;
  lVar5 = _hidden_aes_256_ecb;
  lVar4 = _hidden_aes_256_cbc;
  lVar3 = _hidden_aes_256_cfb;
  lVar2 = _hidden_aes_256_ofb;
  lVar1 = _hidden_aes_256_ctr;
  if (param_2 == (long *)0x0) {
    *param_3 = padlock_cipher_nids;
    return 0xf;
  }
  if (param_4 < 0x1ae) {
    if (param_4 < 0x1a2) {
LAB_00100968:
      *param_2 = 0;
      return 0;
    }
    switch(param_4) {
    case 0x1a3:
      lVar17 = lVar14;
      if ((_hidden_aes_128_cbc == 0) &&
         ((((_hidden_aes_128_cbc = EVP_CIPHER_meth_new(0x1a3,0x10,0x10), _hidden_aes_128_cbc == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cbc,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cbc,2), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_cbc,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_cbc,padlock_cbc_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cbc,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_128_cbc,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_128_cbc,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_128_cbc, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
        _hidden_aes_128_cbc = 0;
        lVar17 = lVar14;
      }
      break;
    case 0x1a4:
      lVar17 = lVar12;
      if ((_hidden_aes_128_ofb == 0) &&
         ((((_hidden_aes_128_ofb = EVP_CIPHER_meth_new(0x1a4,1,0x10), _hidden_aes_128_ofb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_ofb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_ofb,4), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_ofb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_ofb,padlock_ofb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_ofb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_128_ofb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_128_ofb,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_128_ofb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_ofb);
        _hidden_aes_128_ofb = 0;
        lVar17 = lVar12;
      }
      break;
    case 0x1a5:
      lVar17 = lVar13;
      if ((_hidden_aes_128_cfb == 0) &&
         (((((_hidden_aes_128_cfb = EVP_CIPHER_meth_new(0x1a5,1,0x10), _hidden_aes_128_cfb == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cfb,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cfb,3), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_cfb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_cfb,padlock_cfb_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cfb,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_128_cfb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_128_cfb,&EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_128_cfb, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_cfb);
        _hidden_aes_128_cfb = 0;
        lVar17 = lVar13;
      }
      break;
    case 0x1a6:
      lVar17 = lVar10;
      if ((_hidden_aes_192_ecb == 0) &&
         ((((_hidden_aes_192_ecb = EVP_CIPHER_meth_new(0x1a6,0x10,0x18), _hidden_aes_192_ecb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_ecb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_ecb,1), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_ecb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_ecb,padlock_ecb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_ecb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_192_ecb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_192_ecb,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_192_ecb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_ecb);
        _hidden_aes_192_ecb = 0;
        lVar17 = lVar10;
      }
      break;
    case 0x1a7:
      lVar17 = lVar9;
      if ((_hidden_aes_192_cbc == 0) &&
         ((((_hidden_aes_192_cbc = EVP_CIPHER_meth_new(0x1a7,0x10,0x18), _hidden_aes_192_cbc == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_cbc,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_cbc,2), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_cbc,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_cbc,padlock_cbc_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_cbc,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_192_cbc,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_192_cbc,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_192_cbc, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_cbc);
        _hidden_aes_192_cbc = 0;
        lVar17 = lVar9;
      }
      break;
    case 0x1a8:
      lVar17 = lVar7;
      if ((_hidden_aes_192_ofb == 0) &&
         ((((((_hidden_aes_192_ofb = EVP_CIPHER_meth_new(0x1a8,1,0x18), _hidden_aes_192_ofb == 0 ||
              (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_ofb,0x10), iVar16 == 0)) ||
             (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_ofb,4), iVar16 == 0)) ||
            ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_ofb,padlock_aes_init_key),
             iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_ofb,padlock_ofb_cipher),
             iVar16 == 0)))) ||
           (iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_ofb,0x124), iVar16 == 0)) ||
          ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                               (_hidden_aes_192_ofb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
           (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                               (_hidden_aes_192_ofb,&EVP_CIPHER_get_asn1_iv),
           lVar17 = _hidden_aes_192_ofb, iVar16 == 0)))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_ofb);
        _hidden_aes_192_ofb = 0;
        lVar17 = lVar7;
      }
      break;
    case 0x1a9:
      lVar17 = lVar8;
      if ((_hidden_aes_192_cfb == 0) &&
         ((((_hidden_aes_192_cfb = EVP_CIPHER_meth_new(0x1a9,1,0x18), _hidden_aes_192_cfb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_cfb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_cfb,3), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_cfb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_cfb,padlock_cfb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_cfb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_192_cfb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_192_cfb,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_192_cfb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_cfb);
        _hidden_aes_192_cfb = 0;
        lVar17 = lVar8;
      }
      break;
    case 0x1aa:
      lVar17 = lVar5;
      if ((_hidden_aes_256_ecb == 0) &&
         ((((_hidden_aes_256_ecb = EVP_CIPHER_meth_new(0x1aa,0x10,0x20), _hidden_aes_256_ecb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ecb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ecb,1), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ecb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ecb,padlock_ecb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ecb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_256_ecb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_256_ecb,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_256_ecb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_ecb);
        _hidden_aes_256_ecb = 0;
        lVar17 = lVar5;
      }
      break;
    case 0x1ab:
      lVar17 = lVar4;
      if ((_hidden_aes_256_cbc == 0) &&
         (((((_hidden_aes_256_cbc = EVP_CIPHER_meth_new(0x1ab,0x10,0x20), _hidden_aes_256_cbc == 0
             || (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_cbc,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_cbc,2), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_cbc,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_cbc,padlock_cbc_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_cbc,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_256_cbc,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_256_cbc,&EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_256_cbc, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_cbc);
        _hidden_aes_256_cbc = 0;
        lVar17 = lVar4;
      }
      break;
    case 0x1ac:
      lVar17 = lVar2;
      if ((_hidden_aes_256_ofb == 0) &&
         (((((_hidden_aes_256_ofb = EVP_CIPHER_meth_new(0x1ac,1,0x20), _hidden_aes_256_ofb == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ofb,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ofb,4), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ofb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ofb,padlock_ofb_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ofb,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_256_ofb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_256_ofb,&EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_256_ofb, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_ofb);
        _hidden_aes_256_ofb = 0;
        lVar17 = lVar2;
      }
      break;
    case 0x1ad:
      lVar17 = lVar3;
      if ((_hidden_aes_256_cfb == 0) &&
         ((((_hidden_aes_256_cfb = EVP_CIPHER_meth_new(0x1ad,1,0x20), _hidden_aes_256_cfb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_cfb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_cfb,3), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_cfb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_cfb,padlock_cfb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_cfb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_256_cfb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_256_cfb,&EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_256_cfb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_cfb);
        _hidden_aes_256_cfb = 0;
        lVar17 = lVar3;
      }
      break;
    default:
      lVar17 = lVar15;
      if ((_hidden_aes_128_ecb == 0) &&
         (((((_hidden_aes_128_ecb = EVP_CIPHER_meth_new(0x1a2,0x10,0x10), _hidden_aes_128_ecb == 0
             || (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_ecb,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_ecb,1), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_ecb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_ecb,padlock_ecb_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_ecb,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_128_ecb,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_128_ecb,&EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_128_ecb, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_ecb);
        _hidden_aes_128_ecb = 0;
        lVar17 = lVar15;
      }
    }
  }
  else if (param_4 == 0x389) {
    lVar17 = lVar6;
    if ((_hidden_aes_192_ctr == 0) &&
       ((((((_hidden_aes_192_ctr = EVP_CIPHER_meth_new(0x389,1,0x18), _hidden_aes_192_ctr == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_ctr,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_ctr,5), iVar16 == 0)) ||
          ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_ctr,padlock_aes_init_key), iVar16 == 0
           || (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_ctr,padlock_ctr_cipher),
              iVar16 == 0)))) ||
         (iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_ctr,0x124), iVar16 == 0)) ||
        ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params(_hidden_aes_192_ctr,&EVP_CIPHER_set_asn1_iv),
         iVar16 == 0 ||
         (iVar16 = EVP_CIPHER_meth_set_get_asn1_params(_hidden_aes_192_ctr,&EVP_CIPHER_get_asn1_iv),
         lVar17 = _hidden_aes_192_ctr, iVar16 == 0)))))) {
      EVP_CIPHER_meth_free(_hidden_aes_192_ctr);
      _hidden_aes_192_ctr = 0;
      lVar17 = lVar6;
    }
  }
  else if (param_4 == 0x38a) {
    lVar17 = lVar1;
    if ((_hidden_aes_256_ctr == 0) &&
       ((((_hidden_aes_256_ctr = EVP_CIPHER_meth_new(0x38a,1,0x20), _hidden_aes_256_ctr == 0 ||
          (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ctr,0x10), iVar16 == 0)) ||
         (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ctr,5), iVar16 == 0)) ||
        (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ctr,padlock_aes_init_key), iVar16 == 0
          || (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ctr,padlock_ctr_cipher),
             iVar16 == 0)) ||
         ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ctr,0x124), iVar16 == 0 ||
          ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                               (_hidden_aes_256_ctr,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
           (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                               (_hidden_aes_256_ctr,&EVP_CIPHER_get_asn1_iv),
           lVar17 = _hidden_aes_256_ctr, iVar16 == 0)))))))))) {
      EVP_CIPHER_meth_free(_hidden_aes_256_ctr);
      _hidden_aes_256_ctr = 0;
      lVar17 = lVar1;
    }
  }
  else {
    if (param_4 != 0x388) goto LAB_00100968;
    lVar17 = lVar11;
    if ((_hidden_aes_128_ctr == 0) &&
       ((((_hidden_aes_128_ctr = EVP_CIPHER_meth_new(0x388,1,0x10), _hidden_aes_128_ctr == 0 ||
          (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_ctr,0x10), iVar16 == 0)) ||
         (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_ctr,5), iVar16 == 0)) ||
        (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_ctr,padlock_aes_init_key), iVar16 == 0
          || (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_ctr,padlock_ctr_cipher),
             iVar16 == 0)) ||
         ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_ctr,0x124), iVar16 == 0 ||
          ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                               (_hidden_aes_128_ctr,&EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
           (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                               (_hidden_aes_128_ctr,&EVP_CIPHER_get_asn1_iv),
           lVar17 = _hidden_aes_128_ctr, iVar16 == 0)))))))))) {
      EVP_CIPHER_meth_free(_hidden_aes_128_ctr);
      _hidden_aes_128_ctr = 0;
      lVar17 = lVar11;
    }
  }
  *param_2 = lVar17;
  return 1;
}



void padlock_ecb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  padlock_ecb_encrypt(param_2,param_3,lVar2 + (ulong)(-iVar1 & 0xf),param_4);
  return;
}



int padlock_cbc_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  puVar4 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar1 = puVar4[1];
  puVar5 = (undefined8 *)((ulong)(-iVar2 & 0xf) + lVar3);
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  iVar2 = padlock_cbc_encrypt(param_2,param_3,puVar5,param_4);
  if (iVar2 != 0) {
    puVar4 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
  }
  return iVar2;
}



undefined8 padlock_cfb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  byte *pbVar13;
  
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  iVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar4 = EVP_CIPHER_CTX_get_num(param_1);
  uVar12 = (ulong)iVar4;
  pbVar13 = param_2;
  if (uVar12 != 0) {
    lVar10 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (0xf < uVar12) {
      return 0;
    }
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 == 0) {
      if (param_4 == 0) {
LAB_00101880:
        EVP_CIPHER_CTX_set_num(param_1,iVar4);
        return 1;
      }
      do {
        pbVar1 = (byte *)(lVar10 + uVar12);
        bVar11 = *param_3;
        pbVar13 = param_2 + 1;
        uVar12 = uVar12 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 - 1;
        *param_2 = *pbVar1 ^ bVar11;
        *(byte *)(lVar10 + -1 + uVar12) = bVar11;
        if (0xf < uVar12) break;
        param_2 = pbVar13;
      } while (param_4 != 0);
    }
    else {
      if (param_4 == 0) goto LAB_00101880;
      do {
        pbVar13 = param_2 + 1;
        bVar11 = *param_3 ^ *(byte *)(lVar10 + uVar12);
        param_3 = param_3 + 1;
        *param_2 = bVar11;
        param_4 = param_4 - 1;
        *(byte *)(lVar10 + uVar12) = bVar11;
        uVar12 = uVar12 + 1;
        if (0xf < uVar12) break;
        param_2 = pbVar13;
      } while (param_4 != 0);
    }
    EVP_CIPHER_CTX_set_num(param_1,(uint)uVar12 & 0xf);
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar7 = (undefined8 *)(lVar6 + (ulong)(-iVar3 & 0xf));
  puVar8 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar2 = puVar8[1];
  *puVar7 = *puVar8;
  puVar7[1] = uVar2;
  uVar12 = param_4 & 0xfffffffffffffff0;
  if (uVar12 != 0) {
    iVar3 = padlock_cfb_encrypt(pbVar13,param_3,puVar7,uVar12);
    if (iVar3 == 0) {
      return 0;
    }
    param_4 = param_4 - uVar12;
    if (param_4 == 0) goto LAB_0010171d;
  }
  EVP_CIPHER_CTX_set_num(param_1,param_4 & 0xffffffff);
  if ((*(byte *)((long)puVar7 + 0x11) & 2) == 0) {
    padlock_reload_key();
    padlock_aes_block(puVar7,puVar7,puVar7);
    padlock_reload_key();
    uVar9 = 0;
    do {
      bVar11 = param_3[uVar9 + uVar12] ^ *(byte *)((long)puVar7 + uVar9);
      pbVar13[uVar9 + uVar12] = bVar11;
      *(byte *)((long)puVar7 + uVar9) = bVar11;
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
  else {
    *(byte *)((long)puVar7 + 0x11) = *(byte *)((long)puVar7 + 0x11) & 0xfd;
    padlock_reload_key();
    padlock_aes_block(puVar7,puVar7,puVar7);
    *(byte *)((long)puVar7 + 0x11) = *(byte *)((long)puVar7 + 0x11) | 2;
    padlock_reload_key();
    uVar9 = 0;
    do {
      bVar11 = param_3[uVar9 + uVar12];
      pbVar13[uVar9 + uVar12] = *(byte *)((long)puVar7 + uVar9) ^ bVar11;
      *(byte *)((long)puVar7 + uVar9) = bVar11;
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
LAB_0010171d:
  puVar8 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar2 = puVar7[1];
  *puVar8 = *puVar7;
  puVar8[1] = uVar2;
  return 1;
}



undefined8 padlock_ofb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  iVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar5 = EVP_CIPHER_CTX_get_num(param_1);
  uVar11 = (ulong)iVar5;
  if (uVar11 != 0) {
    lVar10 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (0xf < uVar11) {
      return 0;
    }
    pbVar12 = param_2;
    if (param_4 == 0) {
      EVP_CIPHER_CTX_set_num(param_1,iVar5);
      return 1;
    }
    do {
      bVar2 = *param_3;
      param_2 = pbVar12 + 1;
      pbVar1 = (byte *)(lVar10 + uVar11);
      uVar11 = uVar11 + 1;
      param_3 = param_3 + 1;
      *pbVar12 = bVar2 ^ *pbVar1;
      param_4 = param_4 - 1;
      if (0xf < uVar11) break;
      pbVar12 = param_2;
    } while (param_4 != 0);
    EVP_CIPHER_CTX_set_num(param_1,(uint)uVar11 & 0xf);
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar7 = (undefined8 *)(lVar6 + (ulong)(-iVar4 & 0xf));
  puVar8 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar3 = puVar8[1];
  *puVar7 = *puVar8;
  puVar7[1] = uVar3;
  uVar11 = param_4 & 0xfffffffffffffff0;
  if (uVar11 != 0) {
    iVar4 = padlock_ofb_encrypt(param_2,param_3,puVar7);
    if (iVar4 == 0) {
      return 0;
    }
    param_4 = param_4 - uVar11;
    if (param_4 == 0) goto LAB_00101956;
  }
  EVP_CIPHER_CTX_set_num(param_1,param_4 & 0xffffffff);
  padlock_reload_key();
  padlock_aes_block(puVar7,puVar7,puVar7);
  padlock_reload_key();
  uVar9 = 0;
  do {
    param_2[uVar9 + uVar11] = param_3[uVar9 + uVar11] ^ *(byte *)((long)puVar7 + uVar9);
    uVar9 = uVar9 + 1;
  } while (uVar9 != param_4);
LAB_00101956:
  puVar8 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar3 = puVar7[1];
  *puVar8 = *puVar7;
  puVar8[1] = uVar3;
  return 1;
}



bool padlock_ctr_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar2 = EVP_CIPHER_CTX_get_num(param_1);
  if (-1 < iVar2) {
    local_44 = iVar2;
    uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    CRYPTO_ctr128_encrypt_ctr32
              (param_3,param_2,param_4,lVar3 + (ulong)(-iVar1 & 0xf),uVar5,uVar4,&local_44,
               padlock_ctr32_encrypt_glue);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1 < iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void padlock_ctr32_encrypt_glue
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  padlock_ctr32_encrypt(param_2,param_1,param_4,param_3 << 4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
padlock_aes_init_key(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  byte bVar12;
  ulong uVar13;
  byte bVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  bVar14 = 0;
  iVar5 = EVP_CIPHER_CTX_get_key_length();
  uVar9 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar6 = EVP_CIPHER_get_mode(uVar9);
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar19 = iVar5 * 8;
  lVar10 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar7 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  puVar16 = (undefined8 *)(lVar10 + (ulong)(-iVar7 & 0xf));
  *puVar16 = 0;
  *(undefined8 *)((long)puVar16 + 0x10c) = 0;
  puVar18 = (undefined8 *)((ulong)(puVar16 + 1) & 0xfffffffffffffff8);
  for (uVar13 = (ulong)(((int)puVar16 -
                        (int)(undefined8 *)((ulong)(puVar16 + 1) & 0xfffffffffffffff8)) + 0x114U >>
                       3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar18 = 0;
    puVar18 = puVar18 + (ulong)bVar14 * -2 + 1;
  }
  iVar8 = iVar19 + -0x80;
  iVar7 = iVar19 + -0x61;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  bVar14 = (char)(((char)(iVar7 >> 5) + '\n') * '\x10') >> 4;
  iVar7 = iVar19 + -0x41;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  bVar12 = (char)iVar7 >> 6;
  if ((long)iVar6 - 4U < 2) {
    *(byte *)(puVar16 + 2) = *(byte *)(puVar16 + 2) & 0xf0 | bVar14 & 0xf;
    *(byte *)((long)puVar16 + 0x11) =
         *(byte *)((long)puVar16 + 0x11) & 0xf3 | (byte)((bVar12 & 3) << 2);
    if ((iVar19 - 0xc0U & 0xffffffb8) == 0) {
LAB_00101eb0:
      padlock_aes_set_encrypt_key(param_2,iVar19,puVar16 + 4);
LAB_00101ec2:
      padlock_key_bswap(puVar16 + 4);
      iVar5 = 1;
      goto LAB_00101e84;
    }
  }
  else {
    iVar7 = EVP_CIPHER_CTX_is_encrypting(param_1);
    *(byte *)(puVar16 + 2) = *(byte *)(puVar16 + 2) & 0xf0 | bVar14 & 0xf;
    *(byte *)((long)puVar16 + 0x11) =
         *(byte *)((long)puVar16 + 0x11) & 0xf1 | (iVar7 == 0) * '\x02' | (bVar12 & 3) * '\x04';
    if ((iVar19 - 0xc0U & 0xffffffb8) == 0) {
      if ((1 < (long)iVar6 - 1U) || (param_4 != 0)) goto LAB_00101eb0;
      pauVar17 = (undefined1 (*) [16])(puVar16 + 4);
      iVar5 = padlock_aes_set_encrypt_key(param_2,iVar19,pauVar17);
      if ((-1 < iVar5) && (iVar5 = *(int *)(puVar16 + 0x22) * 4, 0 < iVar5)) {
        iVar6 = 0;
        puVar11 = (undefined4 *)((long)puVar16 + (long)iVar5 * 4 + 0x20);
        pauVar15 = pauVar17;
        do {
          uVar1 = *(undefined4 *)*pauVar15;
          iVar6 = iVar6 + 4;
          *(undefined4 *)*pauVar15 = *puVar11;
          *puVar11 = uVar1;
          uVar1 = *(undefined4 *)((long)*pauVar15 + 4);
          *(undefined4 *)((long)*pauVar15 + 4) = puVar11[1];
          puVar11[1] = uVar1;
          uVar1 = *(undefined4 *)((long)*pauVar15 + 8);
          *(undefined4 *)((long)*pauVar15 + 8) = puVar11[2];
          puVar11[2] = uVar1;
          uVar1 = *(undefined4 *)((long)*pauVar15 + 0xc);
          *(undefined4 *)((long)*pauVar15 + 0xc) = puVar11[3];
          puVar11[3] = uVar1;
          auVar4 = __LC2;
          auVar3 = __LC1;
          auVar2 = __LC0;
          puVar11 = puVar11 + -4;
          pauVar15 = pauVar15 + 1;
        } while (iVar6 < iVar5 - iVar6);
        if (1 < *(int *)(puVar16 + 0x22)) {
          iVar5 = 1;
          do {
            auVar20 = pauVar17[1];
            pauVar17 = pauVar17 + 1;
            iVar5 = iVar5 + 1;
            auVar27 = auVar20 & auVar2;
            auVar28._0_4_ = auVar27._0_4_ - (auVar27._0_4_ >> 7);
            auVar28._4_4_ = auVar27._4_4_ - (auVar27._4_4_ >> 7);
            auVar28._8_4_ = auVar27._8_4_ - (auVar27._8_4_ >> 7);
            auVar28._12_4_ = auVar27._12_4_ - (auVar27._12_4_ >> 7);
            auVar27._0_4_ = auVar20._0_4_ << 1;
            auVar27._4_4_ = auVar20._4_4_ << 1;
            auVar27._8_4_ = auVar20._8_4_ << 1;
            auVar27._12_4_ = auVar20._12_4_ << 1;
            auVar28 = auVar28 & auVar3 ^ auVar27 & auVar4;
            auVar27 = auVar28 & auVar2;
            auVar24._0_4_ = auVar27._0_4_ - (auVar27._0_4_ >> 7);
            auVar24._4_4_ = auVar27._4_4_ - (auVar27._4_4_ >> 7);
            auVar24._8_4_ = auVar27._8_4_ - (auVar27._8_4_ >> 7);
            auVar24._12_4_ = auVar27._12_4_ - (auVar27._12_4_ >> 7);
            auVar23._0_4_ = auVar28._0_4_ << 1;
            auVar23._4_4_ = auVar28._4_4_ << 1;
            auVar23._8_4_ = auVar28._8_4_ << 1;
            auVar23._12_4_ = auVar28._12_4_ << 1;
            auVar27 = auVar24 & auVar3 ^ auVar23 & auVar4;
            auVar24 = auVar27 & auVar2;
            auVar25._0_4_ = auVar24._0_4_ - (auVar24._0_4_ >> 7);
            auVar25._4_4_ = auVar24._4_4_ - (auVar24._4_4_ >> 7);
            auVar25._8_4_ = auVar24._8_4_ - (auVar24._8_4_ >> 7);
            auVar25._12_4_ = auVar24._12_4_ - (auVar24._12_4_ >> 7);
            auVar29._0_4_ = auVar27._0_4_ << 1;
            auVar29._4_4_ = auVar27._4_4_ << 1;
            auVar29._8_4_ = auVar27._8_4_ << 1;
            auVar29._12_4_ = auVar27._12_4_ << 1;
            auVar24 = auVar29 & auVar4 ^ auVar25 & auVar3;
            auVar20 = auVar20 ^ auVar24;
            auVar26._0_4_ = auVar20._0_4_ << 0x18;
            auVar26._4_4_ = auVar20._4_4_ << 0x18;
            auVar26._8_4_ = auVar20._8_4_ << 0x18;
            auVar26._12_4_ = auVar20._12_4_ << 0x18;
            auVar21._0_4_ = auVar20._0_4_ >> 8;
            auVar21._4_4_ = auVar20._4_4_ >> 8;
            auVar21._8_4_ = auVar20._8_4_ >> 8;
            auVar21._12_4_ = auVar20._12_4_ >> 8;
            auVar31 = auVar20 ^ auVar27;
            auVar20 = auVar20 ^ auVar28;
            auVar22._0_4_ = auVar31._0_4_ << 0x10;
            auVar22._4_4_ = auVar31._4_4_ << 0x10;
            auVar22._8_4_ = auVar31._8_4_ << 0x10;
            auVar22._12_4_ = auVar31._12_4_ << 0x10;
            auVar32._0_4_ = auVar31._0_4_ >> 0x10;
            auVar32._4_4_ = auVar31._4_4_ >> 0x10;
            auVar32._8_4_ = auVar31._8_4_ >> 0x10;
            auVar32._12_4_ = auVar31._12_4_ >> 0x10;
            auVar31._0_4_ = auVar20._0_4_ << 8;
            auVar31._4_4_ = auVar20._4_4_ << 8;
            auVar31._8_4_ = auVar20._8_4_ << 8;
            auVar31._12_4_ = auVar20._12_4_ << 8;
            auVar30._0_4_ = auVar20._0_4_ >> 0x18;
            auVar30._4_4_ = auVar20._4_4_ >> 0x18;
            auVar30._8_4_ = auVar20._8_4_ >> 0x18;
            auVar30._12_4_ = auVar20._12_4_ >> 0x18;
            *pauVar17 = auVar27 ^ auVar28 ^ auVar21 ^ auVar26 ^ auVar22 ^ auVar32 ^ auVar24 ^
                        auVar31 ^ auVar30;
          } while (iVar5 < *(int *)(puVar16 + 0x22));
        }
      }
      goto LAB_00101ec2;
    }
  }
  if (iVar5 != 0x10) {
    return 0;
  }
  uVar9 = param_2[1];
  iVar5 = 0;
  puVar16[4] = *param_2;
  puVar16[5] = uVar9;
LAB_00101e84:
  *(byte *)(puVar16 + 2) = *(byte *)(puVar16 + 2) & 0x7f | (byte)(iVar5 << 7);
  padlock_reload_key();
  return 1;
}



uint v_check(ulong param_1)

{
  return ~-(uint)(param_1 < 0x30000) & 0x30000;
}



bool bind_engine(ENGINE *param_1,char *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  bool bVar5;
  
  pvVar3 = ENGINE_get_static_state();
  if ((void *)*param_3 != pvVar3) {
    CRYPTO_set_mem_functions((m *)param_3[1],(r *)param_3[2],(f *)param_3[3]);
    OPENSSL_init_crypto(0x80000,0);
  }
  if ((param_2 == (char *)0x0) || (iVar1 = strcmp(param_2,"padlock"), iVar1 == 0)) {
    uVar2 = padlock_capability();
    pcVar4 = "no-ACE";
    padlock_use_rng = 0;
    bVar5 = (uVar2 & 0xc0) == 0xc0;
    padlock_use_ace = (uint)bVar5;
    if (bVar5) {
      pcVar4 = "ACE";
    }
    BIO_snprintf(padlock_name,100,"VIA PadLock (%s, %s)","no-RNG",pcVar4);
    iVar1 = ENGINE_set_id(param_1,"padlock");
    if ((((iVar1 != 0) && (iVar1 = ENGINE_set_name(param_1,padlock_name), iVar1 != 0)) &&
        (iVar1 = ENGINE_set_init_function(param_1,padlock_init), iVar1 != 0)) &&
       ((padlock_use_ace == 0 || (iVar1 = ENGINE_set_ciphers(param_1,padlock_ciphers), iVar1 != 0)))
       ) {
      if (padlock_use_rng == 0) {
        return true;
      }
      iVar1 = ENGINE_set_RAND(param_1,(RAND_METHOD *)padlock_rand);
      return iVar1 != 0;
    }
  }
  return false;
}


