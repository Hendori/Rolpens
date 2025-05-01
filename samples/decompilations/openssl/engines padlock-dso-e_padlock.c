
bool padlock_init(void)

{
  return padlock_use_rng != 0 || padlock_use_ace != 0;
}



undefined8 padlock_aes_set_encrypt_key(uint *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if ((param_2 & 0xffffffbf) == 0x80) {
    uVar8 = 0xc;
    if (param_2 == 0x80) {
      param_3[0x3c] = 10;
      uVar8 = *param_1;
      *param_3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = param_1[1];
      uVar10 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      param_3[1] = uVar10;
      uVar8 = param_1[2];
      uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      param_3[2] = uVar6;
      uVar8 = param_1[3];
      bVar1 = Te4[uVar8 & 0xff];
      uVar3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      param_3[3] = uVar3;
      uVar8 = (uint)(byte)Te4[uVar8 >> 0x10 & 0xff] << 0x10 ^ (uint)bVar1 ^
              (uint)(byte)Te4[uVar8 >> 0x18] << 8 ^ *param_3 ^
              (uint)(byte)Te4[uVar8 >> 8 & 0xff] << 0x18 ^ 0x1000000;
      uVar10 = uVar10 ^ uVar8;
      param_3[4] = uVar8;
      param_3[5] = uVar10;
      param_3[6] = uVar6 ^ uVar10;
      uVar3 = uVar6 ^ uVar10 ^ uVar3;
      param_3[7] = uVar3;
      uVar5 = (uint)(byte)Te4[uVar3 >> 8 & 0xff] << 0x10 ^ uVar8 ^ (uint)(byte)Te4[uVar3 >> 0x18] ^
              (uint)(byte)Te4[uVar3 & 0xff] << 8 ^ (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x18 ^
              0x2000000;
      uVar6 = uVar6 ^ uVar5;
      param_3[8] = uVar5;
      uVar8 = uVar3 ^ uVar6;
      param_3[9] = uVar10 ^ uVar5;
      param_3[0xb] = uVar8;
      bVar1 = Te4[uVar8 >> 8 & 0xff];
      param_3[10] = uVar6;
      uVar7 = (uint)bVar1 << 0x10 ^ uVar5 ^ (uint)(byte)Te4[uVar8 >> 0x18] ^
              (uint)(byte)Te4[uVar8 & 0xff] << 8 ^ (uint)(byte)Te4[uVar8 >> 0x10 & 0xff] << 0x18 ^
              0x4000000;
      uVar8 = uVar10 ^ uVar5 ^ uVar7;
      param_3[0xc] = uVar7;
      uVar3 = uVar3 ^ uVar8;
      param_3[0xd] = uVar8;
      param_3[0xe] = uVar8 ^ uVar6;
      bVar1 = Te4[uVar3 >> 8 & 0xff];
      param_3[0xf] = uVar3;
      uVar5 = (uint)bVar1 << 0x10 ^ uVar7 ^ (uint)(byte)Te4[uVar3 >> 0x18] ^
              (uint)(byte)Te4[uVar3 & 0xff] << 8 ^ (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x18 ^
              0x8000000;
      uVar6 = uVar6 ^ uVar5;
      param_3[0x10] = uVar5;
      param_3[0x11] = uVar8 ^ uVar5;
      uVar10 = uVar6 ^ uVar3;
      param_3[0x12] = uVar6;
      param_3[0x13] = uVar10;
      uVar10 = (uint)(byte)Te4[uVar10 >> 8 & 0xff] << 0x10 ^ uVar5 ^ (uint)(byte)Te4[uVar10 >> 0x18]
               ^ (uint)(byte)Te4[uVar10 & 0xff] << 8 ^
               (uint)(byte)Te4[uVar10 >> 0x10 & 0xff] << 0x18 ^ 0x10000000;
      uVar8 = uVar8 ^ uVar5 ^ uVar10;
      param_3[0x14] = uVar10;
      param_3[0x15] = uVar8;
      uVar3 = uVar3 ^ uVar8;
      param_3[0x16] = uVar8 ^ uVar6;
      bVar1 = Te4[uVar3 >> 8 & 0xff];
      param_3[0x17] = uVar3;
      uVar5 = (uint)bVar1 << 0x10 ^ uVar10 ^ (uint)(byte)Te4[uVar3 >> 0x18] ^
              (uint)(byte)Te4[uVar3 & 0xff] << 8 ^ (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x18 ^
              0x20000000;
      uVar6 = uVar6 ^ uVar5;
      param_3[0x18] = uVar5;
      param_3[0x19] = uVar8 ^ uVar5;
      uVar10 = uVar6 ^ uVar3;
      param_3[0x1a] = uVar6;
      param_3[0x1b] = uVar10;
      uVar10 = (uint)(byte)Te4[uVar10 >> 8 & 0xff] << 0x10 ^ uVar5 ^ (uint)(byte)Te4[uVar10 >> 0x18]
               ^ (uint)(byte)Te4[uVar10 & 0xff] << 8 ^
               (uint)(byte)Te4[uVar10 >> 0x10 & 0xff] << 0x18 ^ 0x40000000;
      uVar8 = uVar8 ^ uVar5 ^ uVar10;
      param_3[0x1c] = uVar10;
      uVar3 = uVar3 ^ uVar8;
      param_3[0x1d] = uVar8;
      param_3[0x1e] = uVar8 ^ uVar6;
      param_3[0x1f] = uVar3;
      uVar5 = ((uint)(byte)Te4[uVar3 >> 8 & 0xff] << 0x10 ^ uVar10 ^ (uint)(byte)Te4[uVar3 >> 0x18]
               ^ (uint)(byte)Te4[uVar3 & 0xff] << 8 ^ (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x18)
              + 0x80000000;
      uVar6 = uVar6 ^ uVar5;
      param_3[0x20] = uVar5;
      param_3[0x21] = uVar8 ^ uVar5;
      uVar10 = uVar6 ^ uVar3;
      param_3[0x22] = uVar6;
      param_3[0x23] = uVar10;
      uVar10 = (uint)(byte)Te4[uVar10 >> 8 & 0xff] << 0x10 ^ uVar5 ^ (uint)(byte)Te4[uVar10 >> 0x18]
               ^ (uint)(byte)Te4[uVar10 & 0xff] << 8 ^
               (uint)(byte)Te4[uVar10 >> 0x10 & 0xff] << 0x18 ^ 0x1b000000;
      uVar8 = uVar8 ^ uVar5 ^ uVar10;
      param_3[0x24] = uVar10;
      uVar3 = uVar3 ^ uVar8;
      param_3[0x25] = uVar8;
      param_3[0x26] = uVar6 ^ uVar8;
      bVar1 = Te4[uVar3 >> 8 & 0xff];
      param_3[0x27] = uVar3;
      uVar10 = (uint)bVar1 << 0x10 ^ uVar10 ^ (uint)(byte)Te4[uVar3 >> 0x18] ^
               (uint)(byte)Te4[uVar3 & 0xff] << 8 ^ (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x18 ^
               0x36000000;
      param_3[0x28] = uVar10;
      param_3[0x29] = uVar8 ^ uVar10;
      param_3[0x2a] = uVar10 ^ uVar6;
      param_3[0x2b] = uVar3 ^ uVar10 ^ uVar6;
      return 0;
    }
  }
  else {
    if (param_2 != 0x100) {
      return 0xfffffffe;
    }
    uVar8 = 0xe;
  }
  param_3[0x3c] = uVar8;
  uVar8 = *param_1;
  uVar7 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  *param_3 = uVar7;
  uVar8 = param_1[1];
  uVar5 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  param_3[1] = uVar5;
  uVar8 = param_1[2];
  uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  param_3[2] = uVar6;
  uVar8 = param_1[3];
  uVar3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  param_3[3] = uVar3;
  uVar8 = param_1[4];
  param_3[4] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  uVar8 = param_1[5];
  uVar10 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  param_3[5] = uVar10;
  if (param_2 == 0xc0) {
    uVar8 = (uint)(byte)Te4[uVar8 >> 0x10 & 0xff] << 0x10 ^ (uint)(byte)Te4[uVar8 & 0xff] ^
            (uint)(byte)Te4[uVar8 >> 0x18] << 8 ^ *param_3 ^
            (uint)(byte)Te4[uVar8 >> 8 & 0xff] << 0x18 ^ 0x1000000;
    uVar5 = uVar5 ^ uVar8;
    param_3[6] = uVar8;
    param_3[7] = uVar5;
    param_3[8] = uVar6 ^ uVar5;
    uVar3 = uVar6 ^ uVar5 ^ uVar3;
    uVar7 = param_3[4] ^ uVar3;
    param_3[9] = uVar3;
    uVar10 = uVar10 ^ uVar7;
    param_3[10] = uVar7;
    param_3[0xb] = uVar10;
    uVar11 = uVar8 ^ (uint)(byte)Te4[uVar10 >> 8 & 0xff] << 0x10 ^ (uint)(byte)Te4[uVar10 >> 0x18] ^
             (uint)(byte)Te4[uVar10 & 0xff] << 8 ^ (uint)(byte)Te4[uVar10 >> 0x10 & 0xff] << 0x18 ^
             0x2000000;
    uVar6 = uVar6 ^ uVar11;
    param_3[0xc] = uVar11;
    param_3[0xd] = uVar5 ^ uVar11;
    param_3[0xf] = uVar3 ^ uVar6;
    uVar7 = uVar3 ^ uVar6 ^ uVar7;
    uVar8 = uVar10 ^ uVar7;
    param_3[0xe] = uVar6;
    param_3[0x11] = uVar8;
    param_3[0x10] = uVar7;
    uVar4 = uVar11 ^ (uint)(byte)Te4[uVar8 >> 8 & 0xff] << 0x10 ^ (uint)(byte)Te4[uVar8 >> 0x18] ^
            (uint)(byte)Te4[uVar8 & 0xff] << 8 ^ (uint)(byte)Te4[uVar8 >> 0x10 & 0xff] << 0x18 ^
            0x4000000;
    uVar8 = uVar5 ^ uVar11 ^ uVar4;
    param_3[0x12] = uVar4;
    uVar3 = uVar3 ^ uVar8;
    param_3[0x13] = uVar8;
    uVar5 = uVar10 ^ uVar3;
    param_3[0x14] = uVar6 ^ uVar8;
    param_3[0x15] = uVar3;
    param_3[0x17] = uVar5;
    param_3[0x16] = uVar7 ^ uVar3;
    uVar11 = (uint)(byte)Te4[uVar5 >> 8 & 0xff] << 0x10 ^ uVar4 ^ (uint)(byte)Te4[uVar5 >> 0x18] ^
             (uint)(byte)Te4[uVar5 & 0xff] << 8 ^ (uint)(byte)Te4[uVar5 >> 0x10 & 0xff] << 0x18 ^
             0x8000000;
    uVar6 = uVar6 ^ uVar11;
    param_3[0x18] = uVar11;
    uVar4 = uVar7 ^ uVar6;
    param_3[0x19] = uVar8 ^ uVar11;
    uVar5 = uVar5 ^ uVar4;
    param_3[0x1b] = uVar3 ^ uVar6;
    param_3[0x1d] = uVar5;
    bVar1 = Te4[uVar5 >> 8 & 0xff];
    param_3[0x1a] = uVar6;
    param_3[0x1c] = uVar4;
    uVar5 = (uint)bVar1 << 0x10 ^ uVar11 ^ (uint)(byte)Te4[uVar5 >> 0x18] ^
            (uint)(byte)Te4[uVar5 & 0xff] << 8 ^ (uint)(byte)Te4[uVar5 >> 0x10 & 0xff] << 0x18 ^
            0x10000000;
    uVar8 = uVar8 ^ uVar11 ^ uVar5;
    param_3[0x1e] = uVar5;
    uVar10 = uVar10 ^ uVar8;
    uVar3 = uVar3 ^ uVar8;
    param_3[0x1f] = uVar8;
    param_3[0x20] = uVar6 ^ uVar8;
    bVar1 = Te4[uVar10 >> 8 & 0xff];
    param_3[0x22] = uVar4 ^ uVar3;
    param_3[0x21] = uVar3;
    param_3[0x23] = uVar10;
    uVar4 = (uint)bVar1 << 0x10 ^ uVar5 ^ (uint)(byte)Te4[uVar10 >> 0x18] ^
            (uint)(byte)Te4[uVar10 & 0xff] << 8 ^ (uint)(byte)Te4[uVar10 >> 0x10 & 0xff] << 0x18 ^
            0x20000000;
    uVar7 = uVar7 ^ uVar4;
    uVar6 = uVar6 ^ uVar4;
    param_3[0x24] = uVar4;
    uVar5 = uVar10 ^ uVar7;
    param_3[0x25] = uVar8 ^ uVar4;
    param_3[0x27] = uVar3 ^ uVar6;
    bVar1 = Te4[uVar5 >> 8 & 0xff];
    param_3[0x28] = uVar7;
    param_3[0x29] = uVar5;
    param_3[0x26] = uVar6;
    uVar5 = uVar4 ^ (uint)bVar1 << 0x10 ^ (uint)(byte)Te4[uVar5 >> 0x18] ^
            (uint)(byte)Te4[uVar5 & 0xff] << 8 ^ (uint)(byte)Te4[uVar5 >> 0x10 & 0xff] << 0x18 ^
            0x40000000;
    uVar8 = uVar8 ^ uVar4 ^ uVar5;
    param_3[0x2a] = uVar5;
    param_3[0x2b] = uVar8;
    uVar3 = uVar3 ^ uVar8;
    uVar10 = uVar10 ^ uVar3;
    param_3[0x2c] = uVar6 ^ uVar8;
    param_3[0x2f] = uVar10;
    bVar1 = Te4[uVar10 >> 8 & 0xff];
    param_3[0x2d] = uVar3;
    param_3[0x2e] = uVar7 ^ uVar3;
    uVar10 = ((uint)bVar1 << 0x10 ^ uVar5 ^ (uint)(byte)Te4[uVar10 >> 0x18] ^
              (uint)(byte)Te4[uVar10 & 0xff] << 8 ^ (uint)(byte)Te4[uVar10 >> 0x10 & 0xff] << 0x18)
             + 0x80000000;
    param_3[0x30] = uVar10;
    param_3[0x32] = uVar10 ^ uVar6;
    param_3[0x31] = uVar8 ^ uVar10;
    param_3[0x33] = uVar10 ^ uVar6 ^ uVar3;
  }
  else {
    uVar8 = param_1[6];
    param_3[6] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar8 = param_1[7];
    param_3[7] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    puVar2 = param_3 + 8;
    puVar9 = &rcon;
    while( true ) {
      uVar8 = puVar2[-1];
      uVar7 = uVar7 ^ (uint)(byte)Te4[uVar8 >> 0x18] ^ *puVar9 ^ (uint)(byte)Te4[uVar8 & 0xff] << 8
                      ^ (uint)(byte)Te4[uVar8 >> 0x10 & 0xff] << 0x18 ^
                      (uint)(byte)Te4[uVar8 >> 8 & 0xff] << 0x10;
      uVar5 = uVar5 ^ uVar7;
      uVar6 = uVar6 ^ uVar5;
      uVar3 = uVar3 ^ uVar6;
      *(ulong *)puVar2 = CONCAT44(uVar5,uVar7);
      *(ulong *)(puVar2 + 2) = CONCAT44(uVar3,uVar6);
      if (puVar9 + 1 == (uint *)&DAT_00102d1c) break;
      uVar10 = (uint)(byte)Te4[uVar3 & 0xff] ^ puVar2[-4] ^ (uint)(byte)Te4[uVar3 >> 0x18] << 0x18 ^
               (uint)(byte)Te4[uVar3 >> 0x10 & 0xff] << 0x10 ^
               (uint)(byte)Te4[uVar3 >> 8 & 0xff] << 8;
      uVar11 = puVar2[-3] ^ uVar10;
      uVar4 = puVar2[-2] ^ uVar11;
      *(ulong *)(puVar2 + 4) = CONCAT44(uVar11,uVar10);
      *(ulong *)(puVar2 + 6) = CONCAT44(uVar8 ^ uVar4,uVar4);
      puVar2 = puVar2 + 8;
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
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < param_2) {
    do {
      do {
        uVar2 = padlock_xstore(param_1,0);
        if (((uVar2 & 0x40) == 0) || ((uVar2 & 0x7c00) != 0)) goto LAB_00100a30;
      } while ((uVar2 & 0x1f) == 0);
      if ((uVar2 & 0x1f) != 8) goto LAB_00100a30;
      param_2 = param_2 + -8;
      param_1 = param_1 + 8;
    } while (7 < param_2);
  }
  iVar1 = (int)param_1;
  for (; 0 < (param_2 + iVar1) - (int)param_1; param_1 = param_1 + 1) {
    do {
      uVar2 = padlock_xstore(local_24,3);
      if (((uVar2 & 0x40) == 0) || ((uVar2 & 0x7c00) != 0)) goto LAB_00100a30;
    } while ((uVar2 & 0x1f) == 0);
    if ((uVar2 & 0x1f) != 1) goto LAB_00100a30;
    *param_1 = local_24[0];
  }
  OPENSSL_cleanse(local_24,4);
  uVar3 = 1;
LAB_00100a32:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_00100a30:
  uVar3 = 0;
  goto LAB_00100a32;
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
LAB_00100f78:
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
    if (param_4 != 0x388) goto LAB_00100f78;
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
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  iVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar4 = EVP_CIPHER_CTX_get_num(param_1);
  uVar12 = (ulong)iVar4;
  pbVar15 = param_2;
  if (uVar12 != 0) {
    lVar10 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (0xf < uVar12) {
      return 0;
    }
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 == 0) {
      if (param_4 == 0) {
LAB_00102230:
        EVP_CIPHER_CTX_set_num(param_1,iVar4);
        return 1;
      }
      do {
        pbVar13 = (byte *)(lVar10 + uVar12);
        bVar2 = *param_3;
        pbVar15 = param_2 + 1;
        uVar12 = uVar12 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 - 1;
        *param_2 = *pbVar13 ^ bVar2;
        *(byte *)(lVar10 + -1 + uVar12) = bVar2;
        if (0xf < uVar12) break;
        param_2 = pbVar15;
      } while (param_4 != 0);
    }
    else {
      if (param_4 == 0) goto LAB_00102230;
      do {
        pbVar15 = param_2 + 1;
        bVar2 = *param_3 ^ *(byte *)(lVar10 + uVar12);
        param_3 = param_3 + 1;
        *param_2 = bVar2;
        param_4 = param_4 - 1;
        *(byte *)(lVar10 + uVar12) = bVar2;
        uVar12 = uVar12 + 1;
        if (0xf < uVar12) break;
        param_2 = pbVar15;
      } while (param_4 != 0);
    }
    EVP_CIPHER_CTX_set_num(param_1,(uint)uVar12 & 0xf);
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar7 = (ulong *)(lVar6 + (ulong)(-iVar3 & 0xf));
  puVar8 = (ulong *)EVP_CIPHER_CTX_iv(param_1);
  uVar12 = puVar8[1];
  *puVar7 = *puVar8;
  puVar7[1] = uVar12;
  uVar12 = param_4 & 0xfffffffffffffff0;
  if (uVar12 != 0) {
    iVar3 = padlock_cfb_encrypt(pbVar15,param_3,puVar7);
    if (iVar3 == 0) {
      return 0;
    }
    param_4 = param_4 - uVar12;
    if (param_4 == 0) goto LAB_00101ed0;
  }
  pbVar13 = param_3 + uVar12;
  puVar8 = (ulong *)(pbVar15 + uVar12);
  EVP_CIPHER_CTX_set_num(param_1,param_4 & 0xffffffff);
  if ((*(byte *)((long)puVar7 + 0x11) & 2) == 0) {
    padlock_reload_key();
    padlock_aes_block(puVar7,puVar7,puVar7);
    padlock_reload_key();
    if (((param_4 - 1 < 7) ||
        (puVar7 < pbVar15 + uVar12 + 0x10 && puVar8 < puVar7 + 2 ||
         (ulong)((long)puVar8 - (long)(param_3 + uVar12 + 1)) < 0xf)) ||
       ((ulong)((long)puVar7 - (long)(param_3 + uVar12 + 1)) < 0xf)) {
      uVar12 = 0;
      do {
        bVar2 = pbVar13[uVar12] ^ *(byte *)((long)puVar7 + uVar12);
        *(byte *)((long)puVar8 + uVar12) = bVar2;
        *(byte *)((long)puVar7 + uVar12) = bVar2;
        uVar12 = uVar12 + 1;
      } while (param_4 != uVar12);
      goto LAB_00101ed0;
    }
    if (param_4 - 1 < 0xf) {
      uVar11 = 0;
      puVar14 = puVar7;
LAB_0010207c:
      uVar9 = *puVar14;
      uVar16 = *(ulong *)(param_3 + uVar12 + uVar11);
      *(ulong *)(pbVar15 + uVar12 + uVar11) = uVar16 ^ uVar9;
      uVar12 = param_4 & 0xfffffffffffffff8;
      *puVar14 = uVar16 ^ uVar9;
      puVar8 = (ulong *)((long)puVar8 + uVar12);
      pbVar13 = pbVar13 + uVar12;
      uVar9 = param_4 - uVar12;
      puVar14 = (ulong *)((long)puVar14 + uVar12);
      if ((param_4 & 7) == 0) goto LAB_00101ed0;
    }
    else {
      uVar9 = 0;
      uVar11 = param_4 & 0xfffffffffffffff0;
      do {
        uVar16 = *(ulong *)(pbVar13 + uVar9) ^ *(ulong *)((long)puVar7 + uVar9);
        uVar17 = *(ulong *)((long)(pbVar13 + uVar9) + 8) ^ ((ulong *)((long)puVar7 + uVar9))[1];
        *(ulong *)((long)puVar8 + uVar9) = uVar16;
        ((ulong *)((long)puVar8 + uVar9))[1] = uVar17;
        *(ulong *)((long)puVar7 + uVar9) = uVar16;
        ((ulong *)((long)puVar7 + uVar9))[1] = uVar17;
        uVar9 = uVar9 + 0x10;
      } while (uVar9 != uVar11);
      puVar14 = (ulong *)((long)puVar7 + uVar11);
      puVar8 = (ulong *)((long)puVar8 + uVar11);
      pbVar13 = pbVar13 + uVar11;
      uVar9 = param_4 - uVar11;
      if (param_4 == uVar11) goto LAB_00101ed0;
      param_4 = uVar9;
      if (6 < uVar9 - 1) goto LAB_0010207c;
    }
    bVar2 = *pbVar13 ^ (byte)*puVar14;
    *(byte *)puVar8 = bVar2;
    *(byte *)puVar14 = bVar2;
    if (uVar9 != 1) {
      bVar2 = pbVar13[1] ^ *(byte *)((long)puVar14 + 1);
      *(byte *)((long)puVar8 + 1) = bVar2;
      *(byte *)((long)puVar14 + 1) = bVar2;
      if (uVar9 != 2) {
        bVar2 = pbVar13[2] ^ *(byte *)((long)puVar14 + 2);
        *(byte *)((long)puVar8 + 2) = bVar2;
        *(byte *)((long)puVar14 + 2) = bVar2;
        if (uVar9 != 3) {
          bVar2 = pbVar13[3] ^ *(byte *)((long)puVar14 + 3);
          *(byte *)((long)puVar8 + 3) = bVar2;
          *(byte *)((long)puVar14 + 3) = bVar2;
          if (uVar9 != 4) {
            bVar2 = pbVar13[4] ^ *(byte *)((long)puVar14 + 4);
            *(byte *)((long)puVar8 + 4) = bVar2;
            *(byte *)((long)puVar14 + 4) = bVar2;
            if (uVar9 != 5) {
              bVar2 = pbVar13[5] ^ *(byte *)((long)puVar14 + 5);
              *(byte *)((long)puVar8 + 5) = bVar2;
              *(byte *)((long)puVar14 + 5) = bVar2;
              if (uVar9 != 6) {
                bVar2 = pbVar13[6] ^ *(byte *)((long)puVar14 + 6);
                *(byte *)((long)puVar8 + 6) = bVar2;
                *(byte *)((long)puVar14 + 6) = bVar2;
              }
            }
          }
        }
      }
    }
    goto LAB_00101ed0;
  }
  *(byte *)((long)puVar7 + 0x11) = *(byte *)((long)puVar7 + 0x11) & 0xfd;
  padlock_reload_key();
  padlock_aes_block(puVar7,puVar7,puVar7);
  *(byte *)((long)puVar7 + 0x11) = *(byte *)((long)puVar7 + 0x11) | 2;
  padlock_reload_key();
  if (((param_4 - 1 < 7) ||
      (puVar7 < pbVar15 + uVar12 + 0x10 && puVar8 < puVar7 + 2 ||
       (ulong)((long)puVar8 - (long)(param_3 + uVar12 + 1)) < 0xf)) ||
     ((ulong)((long)puVar7 - (long)(param_3 + uVar12 + 1)) < 0xf)) {
    uVar12 = 0;
    do {
      bVar2 = pbVar13[uVar12];
      *(byte *)((long)puVar8 + uVar12) = *(byte *)((long)puVar7 + uVar12) ^ bVar2;
      *(byte *)((long)puVar7 + uVar12) = bVar2;
      uVar12 = uVar12 + 1;
    } while (param_4 != uVar12);
    goto LAB_00101ed0;
  }
  if (param_4 - 1 < 0xf) {
    uVar11 = 0;
    puVar14 = puVar7;
LAB_00101dec:
    uVar9 = *(ulong *)(param_3 + uVar11 + uVar12);
    *(ulong *)(pbVar15 + uVar11 + uVar12) = *puVar14 ^ uVar9;
    uVar12 = param_4 & 0xfffffffffffffff8;
    *puVar14 = uVar9;
    puVar8 = (ulong *)((long)puVar8 + uVar12);
    pbVar13 = pbVar13 + uVar12;
    uVar9 = param_4 - uVar12;
    puVar14 = (ulong *)((long)puVar14 + uVar12);
    if ((param_4 & 7) == 0) goto LAB_00101ed0;
  }
  else {
    uVar9 = 0;
    uVar11 = param_4 & 0xfffffffffffffff0;
    do {
      uVar16 = *(ulong *)(pbVar13 + uVar9);
      uVar17 = *(ulong *)((long)(pbVar13 + uVar9) + 8);
      uVar1 = ((ulong *)((long)puVar7 + uVar9))[1];
      *(ulong *)((long)puVar8 + uVar9) = *(ulong *)((long)puVar7 + uVar9) ^ uVar16;
      ((ulong *)((long)puVar8 + uVar9))[1] = uVar1 ^ uVar17;
      *(ulong *)((long)puVar7 + uVar9) = uVar16;
      ((ulong *)((long)puVar7 + uVar9))[1] = uVar17;
      uVar9 = uVar9 + 0x10;
    } while (uVar11 != uVar9);
    puVar14 = (ulong *)((long)puVar7 + uVar11);
    puVar8 = (ulong *)((long)puVar8 + uVar11);
    pbVar13 = pbVar13 + uVar11;
    uVar9 = param_4 - uVar11;
    if (param_4 == uVar11) goto LAB_00101ed0;
    param_4 = uVar9;
    if (6 < uVar9 - 1) goto LAB_00101dec;
  }
  bVar2 = *pbVar13;
  *(byte *)puVar8 = (byte)*puVar14 ^ bVar2;
  *(byte *)puVar14 = bVar2;
  if (uVar9 != 1) {
    bVar2 = pbVar13[1];
    *(byte *)((long)puVar8 + 1) = *(byte *)((long)puVar14 + 1) ^ bVar2;
    *(byte *)((long)puVar14 + 1) = bVar2;
    if (uVar9 != 2) {
      bVar2 = pbVar13[2];
      *(byte *)((long)puVar8 + 2) = *(byte *)((long)puVar14 + 2) ^ bVar2;
      *(byte *)((long)puVar14 + 2) = bVar2;
      if (uVar9 != 3) {
        bVar2 = pbVar13[3];
        *(byte *)((long)puVar8 + 3) = *(byte *)((long)puVar14 + 3) ^ bVar2;
        *(byte *)((long)puVar14 + 3) = bVar2;
        if (uVar9 != 4) {
          bVar2 = pbVar13[4];
          *(byte *)((long)puVar8 + 4) = *(byte *)((long)puVar14 + 4) ^ bVar2;
          *(byte *)((long)puVar14 + 4) = bVar2;
          if (uVar9 != 5) {
            bVar2 = pbVar13[5];
            *(byte *)((long)puVar8 + 5) = *(byte *)((long)puVar14 + 5) ^ bVar2;
            *(byte *)((long)puVar14 + 5) = bVar2;
            if (uVar9 != 6) {
              bVar2 = pbVar13[6];
              *(byte *)((long)puVar8 + 6) = *(byte *)((long)puVar14 + 6) ^ bVar2;
              *(byte *)((long)puVar14 + 6) = bVar2;
            }
          }
        }
      }
    }
  }
LAB_00101ed0:
  puVar8 = (ulong *)EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar12 = puVar7[1];
  *puVar8 = *puVar7;
  puVar8[1] = uVar12;
  return 1;
}



undefined8 padlock_ofb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  iVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  iVar5 = EVP_CIPHER_CTX_get_num(param_1);
  uVar13 = (ulong)iVar5;
  if (uVar13 != 0) {
    lVar10 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (0xf < uVar13) {
      return 0;
    }
    pbVar7 = param_2;
    if (param_4 == 0) {
      EVP_CIPHER_CTX_set_num(param_1,iVar5);
      return 1;
    }
    do {
      bVar1 = *param_3;
      param_2 = pbVar7 + 1;
      pbVar15 = (byte *)(lVar10 + uVar13);
      uVar13 = uVar13 + 1;
      param_3 = param_3 + 1;
      *pbVar7 = bVar1 ^ *pbVar15;
      param_4 = param_4 - 1;
      if (0xf < uVar13) break;
      pbVar7 = param_2;
    } while (param_4 != 0);
    EVP_CIPHER_CTX_set_num(param_1,(uint)uVar13 & 0xf);
  }
  if (param_4 == 0) {
    return 1;
  }
  pbVar7 = (byte *)(lVar6 + (ulong)(-iVar4 & 0xf));
  puVar8 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar2 = puVar8[1];
  *(undefined8 *)pbVar7 = *puVar8;
  *(undefined8 *)(pbVar7 + 8) = uVar2;
  uVar13 = param_4 & 0xfffffffffffffff0;
  if (uVar13 != 0) {
    iVar4 = padlock_ofb_encrypt(param_2,param_3,pbVar7);
    if (iVar4 == 0) {
      return 0;
    }
    param_4 = param_4 - uVar13;
    if (param_4 == 0) goto LAB_00102468;
  }
  pbVar15 = param_3 + uVar13;
  pbVar14 = param_2 + uVar13;
  EVP_CIPHER_CTX_set_num(param_1,param_4 & 0xffffffff);
  padlock_reload_key();
  padlock_aes_block(pbVar7,pbVar7,pbVar7);
  padlock_reload_key();
  if (((param_4 - 1 < 7) || ((ulong)((long)pbVar14 - (long)(param_3 + uVar13 + 1)) < 0xf)) ||
     ((ulong)((long)pbVar14 - (long)(pbVar7 + 1)) < 0xf)) {
    uVar13 = 0;
    do {
      pbVar14[uVar13] = pbVar7[uVar13] ^ pbVar15[uVar13];
      uVar13 = uVar13 + 1;
    } while (param_4 != uVar13);
    goto LAB_00102468;
  }
  if (param_4 - 1 < 0xf) {
    uVar11 = 0;
    pbVar16 = pbVar7;
LAB_001023bc:
    uVar12 = param_4 & 0xfffffffffffffff8;
    pbVar14 = pbVar14 + uVar12;
    pbVar15 = pbVar15 + uVar12;
    uVar9 = param_4 - uVar12;
    pbVar16 = pbVar16 + uVar12;
    *(ulong *)(param_2 + uVar13 + uVar11) =
         *(ulong *)(param_3 + uVar13 + uVar11) ^ *(ulong *)(pbVar7 + uVar11);
    if ((param_4 & 7) == 0) goto LAB_00102468;
  }
  else {
    uVar9 = 0;
    uVar11 = param_4 & 0xfffffffffffffff0;
    do {
      uVar3 = *(ulong *)((long)(pbVar15 + uVar9) + 8);
      uVar12 = *(ulong *)((long)(pbVar7 + uVar9) + 8);
      *(ulong *)(pbVar14 + uVar9) = *(ulong *)(pbVar15 + uVar9) ^ *(ulong *)(pbVar7 + uVar9);
      *(ulong *)((long)(pbVar14 + uVar9) + 8) = uVar3 ^ uVar12;
      uVar9 = uVar9 + 0x10;
    } while (uVar9 != uVar11);
    pbVar14 = pbVar14 + uVar11;
    pbVar16 = pbVar7 + uVar11;
    pbVar15 = pbVar15 + uVar11;
    uVar9 = param_4 - uVar11;
    if (param_4 == uVar11) goto LAB_00102468;
    param_4 = uVar9;
    if (6 < uVar9 - 1) goto LAB_001023bc;
  }
  *pbVar14 = *pbVar15 ^ *pbVar16;
  if ((((uVar9 != 1) && (pbVar14[1] = pbVar15[1] ^ pbVar16[1], uVar9 != 2)) &&
      ((pbVar14[2] = pbVar15[2] ^ pbVar16[2], uVar9 != 3 &&
       ((pbVar14[3] = pbVar15[3] ^ pbVar16[3], uVar9 != 4 &&
        (pbVar14[4] = pbVar15[4] ^ pbVar16[4], uVar9 != 5)))))) &&
     (pbVar14[5] = pbVar15[5] ^ pbVar16[5], uVar9 != 6)) {
    pbVar14[6] = pbVar15[6] ^ pbVar16[6];
  }
LAB_00102468:
  puVar8 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar2 = *(undefined8 *)(pbVar7 + 8);
  *puVar8 = *(undefined8 *)pbVar7;
  puVar8[1] = uVar2;
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
LAB_001029f8:
      padlock_aes_set_encrypt_key(param_2,iVar19,puVar16 + 4);
LAB_00102a0a:
      padlock_key_bswap(puVar16 + 4);
      iVar5 = 1;
      goto LAB_001029cc;
    }
  }
  else {
    iVar7 = EVP_CIPHER_CTX_is_encrypting(param_1);
    *(byte *)(puVar16 + 2) = *(byte *)(puVar16 + 2) & 0xf0 | bVar14 & 0xf;
    *(byte *)((long)puVar16 + 0x11) =
         *(byte *)((long)puVar16 + 0x11) & 0xf1 | (iVar7 == 0) * '\x02' | (bVar12 & 3) * '\x04';
    if ((iVar19 - 0xc0U & 0xffffffb8) == 0) {
      if ((1 < (long)iVar6 - 1U) || (param_4 != 0)) goto LAB_001029f8;
      pauVar17 = (undefined1 (*) [16])(puVar16 + 4);
      iVar5 = padlock_aes_set_encrypt_key(param_2,iVar19,pauVar17);
      if ((-1 < iVar5) && (iVar5 = *(int *)(puVar16 + 0x22) * 4, 0 < iVar5)) {
        puVar11 = (undefined4 *)((long)puVar16 + (long)iVar5 * 4 + 0x20);
        pauVar15 = pauVar17;
        iVar6 = iVar5;
        do {
          uVar1 = *(undefined4 *)*pauVar15;
          iVar6 = iVar6 + -4;
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
        } while (iVar5 - iVar6 < iVar6);
        if (1 < *(int *)(puVar16 + 0x22)) {
          iVar5 = 1;
          do {
            auVar20 = pauVar17[1];
            pauVar17 = pauVar17 + 1;
            iVar5 = iVar5 + 1;
            auVar26 = auVar20 & auVar2;
            auVar27._0_4_ = auVar26._0_4_ - (auVar26._0_4_ >> 7);
            auVar27._4_4_ = auVar26._4_4_ - (auVar26._4_4_ >> 7);
            auVar27._8_4_ = auVar26._8_4_ - (auVar26._8_4_ >> 7);
            auVar27._12_4_ = auVar26._12_4_ - (auVar26._12_4_ >> 7);
            auVar26._0_4_ = auVar20._0_4_ << 1;
            auVar26._4_4_ = auVar20._4_4_ << 1;
            auVar26._8_4_ = auVar20._8_4_ << 1;
            auVar26._12_4_ = auVar20._12_4_ << 1;
            auVar27 = auVar27 & auVar3 ^ auVar26 & auVar4;
            auVar26 = auVar27 & auVar2;
            auVar23._0_4_ = auVar26._0_4_ - (auVar26._0_4_ >> 7);
            auVar23._4_4_ = auVar26._4_4_ - (auVar26._4_4_ >> 7);
            auVar23._8_4_ = auVar26._8_4_ - (auVar26._8_4_ >> 7);
            auVar23._12_4_ = auVar26._12_4_ - (auVar26._12_4_ >> 7);
            auVar29._0_4_ = auVar27._0_4_ << 1;
            auVar29._4_4_ = auVar27._4_4_ << 1;
            auVar29._8_4_ = auVar27._8_4_ << 1;
            auVar29._12_4_ = auVar27._12_4_ << 1;
            auVar26 = auVar23 & auVar3 ^ auVar29 & auVar4;
            auVar23 = auVar26 & auVar2;
            auVar24._0_4_ = auVar23._0_4_ - (auVar23._0_4_ >> 7);
            auVar24._4_4_ = auVar23._4_4_ - (auVar23._4_4_ >> 7);
            auVar24._8_4_ = auVar23._8_4_ - (auVar23._8_4_ >> 7);
            auVar24._12_4_ = auVar23._12_4_ - (auVar23._12_4_ >> 7);
            auVar28._0_4_ = auVar26._0_4_ << 1;
            auVar28._4_4_ = auVar26._4_4_ << 1;
            auVar28._8_4_ = auVar26._8_4_ << 1;
            auVar28._12_4_ = auVar26._12_4_ << 1;
            auVar23 = auVar28 & auVar4 ^ auVar24 & auVar3;
            auVar20 = auVar20 ^ auVar23;
            auVar25._0_4_ = auVar20._0_4_ << 0x18;
            auVar25._4_4_ = auVar20._4_4_ << 0x18;
            auVar25._8_4_ = auVar20._8_4_ << 0x18;
            auVar25._12_4_ = auVar20._12_4_ << 0x18;
            auVar21._0_4_ = auVar20._0_4_ >> 8;
            auVar21._4_4_ = auVar20._4_4_ >> 8;
            auVar21._8_4_ = auVar20._8_4_ >> 8;
            auVar21._12_4_ = auVar20._12_4_ >> 8;
            auVar29 = auVar20 ^ auVar26;
            auVar20 = auVar20 ^ auVar27;
            auVar22._0_4_ = auVar20._0_4_ << 8;
            auVar22._4_4_ = auVar20._4_4_ << 8;
            auVar22._8_4_ = auVar20._8_4_ << 8;
            auVar22._12_4_ = auVar20._12_4_ << 8;
            auVar31._0_4_ = auVar20._0_4_ >> 0x18;
            auVar31._4_4_ = auVar20._4_4_ >> 0x18;
            auVar31._8_4_ = auVar20._8_4_ >> 0x18;
            auVar31._12_4_ = auVar20._12_4_ >> 0x18;
            auVar20._0_4_ = auVar29._0_4_ << 0x10;
            auVar20._4_4_ = auVar29._4_4_ << 0x10;
            auVar20._8_4_ = auVar29._8_4_ << 0x10;
            auVar20._12_4_ = auVar29._12_4_ << 0x10;
            auVar30._0_4_ = auVar29._0_4_ >> 0x10;
            auVar30._4_4_ = auVar29._4_4_ >> 0x10;
            auVar30._8_4_ = auVar29._8_4_ >> 0x10;
            auVar30._12_4_ = auVar29._12_4_ >> 0x10;
            *pauVar17 = auVar26 ^ auVar27 ^ auVar21 ^ auVar25 ^ auVar22 ^ auVar31 ^ auVar23 ^
                        auVar20 ^ auVar30;
          } while (iVar5 < *(int *)(puVar16 + 0x22));
        }
      }
      goto LAB_00102a0a;
    }
  }
  if (iVar5 != 0x10) {
    return 0;
  }
  uVar9 = param_2[1];
  iVar5 = 0;
  puVar16[4] = *param_2;
  puVar16[5] = uVar9;
LAB_001029cc:
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


