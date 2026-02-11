
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 rc4_hmac_md5_cipher(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  RC4_KEY *key;
  undefined8 uVar12;
  uchar *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  MD5_CTX *pMVar20;
  uchar *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long in_FS_OFFSET;
  uint uVar25;
  uchar *local_68;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  uVar15 = *(ulong *)(key[1].data + 0x44);
  uVar23 = (ulong)(0x40 - key[1].data[0x42]);
  uVar17 = (ulong)(~key->x & 0x1f);
  if (uVar15 == 0xffffffffffffffff) {
    iVar11 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar11 == 0) goto LAB_001001f0;
    if (uVar23 < uVar17) {
      uVar23 = uVar23 + 0x40;
    }
    uVar15 = param_4;
    uVar14 = param_4;
    if (uVar23 < param_4) {
LAB_00100330:
      uVar18 = uVar15 - uVar23;
      uVar14 = uVar15;
      if ((uVar18 < 0x40) || ((_OPENSSL_ia32cap_P & 0x100000) != 0)) goto LAB_0010009c;
      MD5_Update((MD5_CTX *)(key[1].data + 0x2c),param_3,uVar23);
      RC4(key,uVar17,param_3,param_2);
      rc4_md5_enc(key,param_3 + uVar17,param_2 + uVar17,(MD5_CTX *)(key[1].data + 0x2c),
                  param_3 + uVar23,uVar18 >> 6);
      uVar19 = uVar18 & 0xffffffffffffffc0;
      uVar16 = (int)uVar19 * 8;
      lVar24 = uVar17 + uVar19;
      uVar14 = uVar15 - (uVar23 + uVar19);
      uVar25 = uVar16 + (int)*(undefined8 *)(key[1].data + 0x30);
      iVar11 = (int)(uVar18 >> 0x1d) + (int)((ulong)*(undefined8 *)(key[1].data + 0x30) >> 0x20);
      puVar13 = param_3 + uVar23 + uVar19;
      uVar23 = param_4 - lVar24;
      puVar21 = param_2 + lVar24;
      *(ulong *)(key[1].data + 0x30) = CONCAT44(iVar11,uVar25);
      if (uVar25 < uVar16) {
        key[1].data[0x31] = iVar11 + 1;
      }
    }
    else {
LAB_0010009c:
      lVar24 = 0;
      uVar15 = uVar14;
      puVar13 = param_3;
      puVar21 = param_2;
      uVar23 = param_4;
    }
    pMVar20 = (MD5_CTX *)(key[1].data + 0x2c);
    MD5_Update(pMVar20,puVar13,uVar14);
    if (uVar15 == param_4) {
      RC4(key,uVar23,param_3 + lVar24,puVar21);
    }
    else {
      if (param_3 != param_2) {
        memcpy(puVar21,param_3 + lVar24,uVar15 - lVar24);
      }
      param_2 = param_2 + uVar15;
      MD5_Final(param_2,pMVar20);
      uVar12 = *(undefined8 *)(key[1].data + 0x17);
      uVar1 = *(undefined8 *)(key[1].data + 0x19);
      uVar2 = *(undefined8 *)(key[1].data + 0x1b);
      uVar3 = *(undefined8 *)(key[1].data + 0x1d);
      uVar4 = *(undefined8 *)(key[1].data + 0x1f);
      uVar5 = *(undefined8 *)(key[1].data + 0x21);
      uVar6 = *(undefined8 *)(key[1].data + 0x23);
      uVar7 = *(undefined8 *)(key[1].data + 0x25);
      uVar8 = *(undefined8 *)(key[1].data + 0x27);
      uVar9 = *(undefined8 *)(key[1].data + 0x28);
      uVar10 = *(undefined8 *)(key[1].data + 0x2a);
      *(undefined8 *)(key[1].data + 0x2c) = *(undefined8 *)(key[1].data + 0x15);
      *(undefined8 *)(key[1].data + 0x2e) = uVar12;
      *(undefined8 *)(key[1].data + 0x30) = uVar1;
      *(undefined8 *)(key[1].data + 0x32) = uVar2;
      *(undefined8 *)(key[1].data + 0x3c) = uVar7;
      *(undefined8 *)(key[1].data + 0x3e) = uVar8;
      *(undefined8 *)(key[1].data + 0x34) = uVar3;
      *(undefined8 *)(key[1].data + 0x36) = uVar4;
      *(undefined8 *)(key[1].data + 0x38) = uVar5;
      *(undefined8 *)(key[1].data + 0x3a) = uVar6;
      *(undefined8 *)(key[1].data + 0x3f) = uVar9;
      *(undefined8 *)(key[1].data + 0x41) = uVar10;
      MD5_Update(pMVar20,param_2,0x10);
      MD5_Final(param_2,pMVar20);
      RC4(key,uVar23,puVar21,puVar21);
    }
  }
  else {
    if (uVar15 + 0x10 != param_4) {
      uVar12 = 0;
      goto LAB_001001b9;
    }
    iVar11 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar11 != 0) {
      if (uVar23 < uVar17) {
        uVar23 = uVar23 + 0x40;
      }
      uVar14 = uVar15;
      if (uVar23 < uVar15) goto LAB_00100330;
      goto LAB_0010009c;
    }
LAB_001001f0:
    uVar14 = uVar17 + 0x80;
    if (uVar23 <= uVar17) {
      uVar14 = uVar17 + 0x40;
    }
    if (((uVar14 < param_4) && (uVar17 = param_4 - uVar14, 0x3f < uVar17)) &&
       ((_OPENSSL_ia32cap_P & 0x100000) == 0)) {
      RC4(key,uVar14,param_3,param_2);
      MD5_Update((MD5_CTX *)(key[1].data + 0x2c),param_2,uVar23);
      rc4_md5_enc(key,param_3 + uVar14,param_2 + uVar14,(MD5_CTX *)(key[1].data + 0x2c),
                  param_2 + uVar23,uVar17 >> 6);
      uVar16 = key[1].data[0x31];
      uVar18 = uVar17 & 0xffffffffffffffc0;
      lVar22 = uVar14 + uVar18;
      lVar24 = uVar23 + uVar18;
      uVar25 = (int)uVar18 * 8;
      if (CARRY4(uVar25,key[1].data[0x30])) {
        uVar16 = uVar16 + 1;
      }
      local_68 = param_3 + lVar22;
      uVar23 = param_4 - lVar22;
      key[1].data[0x30] = uVar25 + key[1].data[0x30];
      key[1].data[0x31] = uVar16 + (int)(uVar17 >> 0x1d);
      puVar13 = param_2 + lVar22;
      puVar21 = param_2 + lVar24;
    }
    else {
      lVar24 = 0;
      puVar13 = param_2;
      uVar23 = param_4;
      puVar21 = param_2;
      local_68 = param_3;
    }
    pMVar20 = (MD5_CTX *)(key[1].data + 0x2c);
    RC4(key,uVar23,local_68,puVar13);
    if (uVar15 == 0xffffffffffffffff) {
      MD5_Update(pMVar20,puVar21,param_4 - lVar24);
    }
    else {
      MD5_Update(pMVar20,puVar21,uVar15 - lVar24);
      MD5_Final(local_58,pMVar20);
      uVar12 = *(undefined8 *)(key[1].data + 0x17);
      uVar1 = *(undefined8 *)(key[1].data + 0x19);
      uVar2 = *(undefined8 *)(key[1].data + 0x1b);
      uVar3 = *(undefined8 *)(key[1].data + 0x21);
      uVar4 = *(undefined8 *)(key[1].data + 0x23);
      uVar5 = *(undefined8 *)(key[1].data + 0x25);
      uVar6 = *(undefined8 *)(key[1].data + 0x27);
      uVar7 = *(undefined8 *)(key[1].data + 0x28);
      uVar8 = *(undefined8 *)(key[1].data + 0x2a);
      *(undefined8 *)(key[1].data + 0x2c) = *(undefined8 *)(key[1].data + 0x15);
      *(undefined8 *)(key[1].data + 0x2e) = uVar12;
      uVar12 = *(undefined8 *)(key[1].data + 0x1d);
      uVar9 = *(undefined8 *)(key[1].data + 0x1f);
      *(undefined8 *)(key[1].data + 0x3c) = uVar5;
      *(undefined8 *)(key[1].data + 0x3e) = uVar6;
      *(undefined8 *)(key[1].data + 0x30) = uVar1;
      *(undefined8 *)(key[1].data + 0x32) = uVar2;
      *(undefined8 *)(key[1].data + 0x34) = uVar12;
      *(undefined8 *)(key[1].data + 0x36) = uVar9;
      *(undefined8 *)(key[1].data + 0x38) = uVar3;
      *(undefined8 *)(key[1].data + 0x3a) = uVar4;
      *(undefined8 *)(key[1].data + 0x3f) = uVar7;
      *(undefined8 *)(key[1].data + 0x41) = uVar8;
      MD5_Update(pMVar20,local_58,0x10);
      MD5_Final(local_58,pMVar20);
      iVar11 = CRYPTO_memcmp(param_2 + uVar15,local_58,0x10);
      if (iVar11 != 0) {
        uVar12 = 0;
        goto LAB_001001b9;
      }
    }
  }
  key[1].data[0x44] = 0xffffffff;
  key[1].data[0x45] = 0xffffffff;
  uVar12 = 1;
LAB_001001b9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



bool rc4_hmac_md5_init_key(undefined8 param_1,uchar *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int len;
  RC4_KEY *key;
  
  key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  len = EVP_CIPHER_CTX_get_key_length(param_1);
  if (0 < len) {
    RC4_set_key(key,len,param_2);
    MD5_Init((MD5_CTX *)(key + 1));
    uVar1._0_4_ = key[1].x;
    uVar1._4_4_ = key[1].y;
    uVar2 = *(undefined8 *)key[1].data;
    uVar3 = *(undefined8 *)(key[1].data + 2);
    uVar4 = *(undefined8 *)(key[1].data + 4);
    key[1].data[0x44] = 0xffffffff;
    key[1].data[0x45] = 0xffffffff;
    uVar5 = *(undefined8 *)(key[1].data + 6);
    uVar6 = *(undefined8 *)(key[1].data + 8);
    uVar7 = *(undefined8 *)(key[1].data + 10);
    uVar8 = *(undefined8 *)(key[1].data + 0xc);
    uVar9 = *(undefined8 *)(key[1].data + 0xe);
    uVar10 = *(undefined8 *)(key[1].data + 0x10);
    uVar11 = *(undefined8 *)(key[1].data + 0x11);
    uVar12 = *(undefined8 *)(key[1].data + 0x13);
    *(undefined8 *)(key[1].data + 0x15) = uVar1;
    *(undefined8 *)(key[1].data + 0x17) = uVar2;
    *(undefined8 *)(key[1].data + 0x19) = uVar3;
    *(undefined8 *)(key[1].data + 0x1b) = uVar4;
    *(undefined8 *)(key[1].data + 0x25) = uVar9;
    *(undefined8 *)(key[1].data + 0x27) = uVar10;
    *(undefined8 *)(key[1].data + 0x3c) = uVar9;
    *(undefined8 *)(key[1].data + 0x3e) = uVar10;
    *(undefined8 *)(key[1].data + 0x1d) = uVar5;
    *(undefined8 *)(key[1].data + 0x1f) = uVar6;
    *(undefined8 *)(key[1].data + 0x21) = uVar7;
    *(undefined8 *)(key[1].data + 0x23) = uVar8;
    *(undefined8 *)(key[1].data + 0x28) = uVar11;
    *(undefined8 *)(key[1].data + 0x2a) = uVar12;
    *(undefined8 *)(key[1].data + 0x2c) = uVar1;
    *(undefined8 *)(key[1].data + 0x2e) = uVar2;
    *(undefined8 *)(key[1].data + 0x30) = uVar3;
    *(undefined8 *)(key[1].data + 0x32) = uVar4;
    *(undefined8 *)(key[1].data + 0x34) = uVar5;
    *(undefined8 *)(key[1].data + 0x36) = uVar6;
    *(undefined8 *)(key[1].data + 0x38) = uVar7;
    *(undefined8 *)(key[1].data + 0x3a) = uVar8;
    *(undefined8 *)(key[1].data + 0x3f) = uVar11;
    *(undefined8 *)(key[1].data + 0x41) = uVar12;
  }
  return 0 < len;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 rc4_hmac_md5_ctrl(undefined8 param_1,int param_2,int param_3,void *param_4)

{
  MD5_CTX *c;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ushort uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar6 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
      uVar7 = (uint)uVar6;
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar1 == 0) {
        if (uVar6 < 0x10) goto LAB_00100691;
        uVar7 = uVar6 - 0x10;
        *(ushort *)((long)param_4 + 0xb) = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
      }
      *(ulong *)(lVar2 + 0x520) = (ulong)uVar7;
      *(undefined8 *)(lVar2 + 0x4c0) = *(undefined8 *)(lVar2 + 0x408);
      *(undefined8 *)(lVar2 + 0x4c8) = *(undefined8 *)(lVar2 + 0x410);
      *(undefined8 *)(lVar2 + 0x4d0) = *(undefined8 *)(lVar2 + 0x418);
      *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(lVar2 + 0x420);
      *(undefined8 *)(lVar2 + 0x500) = *(undefined8 *)(lVar2 + 0x448);
      *(undefined8 *)(lVar2 + 0x508) = *(undefined8 *)(lVar2 + 0x450);
      *(undefined8 *)(lVar2 + 0x4e0) = *(undefined8 *)(lVar2 + 0x428);
      *(undefined8 *)(lVar2 + 0x4e8) = *(undefined8 *)(lVar2 + 0x430);
      *(undefined8 *)(lVar2 + 0x4f0) = *(undefined8 *)(lVar2 + 0x438);
      *(undefined8 *)(lVar2 + 0x4f8) = *(undefined8 *)(lVar2 + 0x440);
      *(undefined8 *)(lVar2 + 0x50c) = *(undefined8 *)(lVar2 + 0x454);
      *(undefined8 *)(lVar2 + 0x514) = *(undefined8 *)(lVar2 + 0x45c);
      MD5_Update((MD5_CTX *)(lVar2 + 0x4c0),param_4,0xd);
      uVar3 = 0x10;
      goto LAB_00100696;
    }
  }
  else if (param_2 == 0x17) {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    if (param_3 < 0x41) {
      __memcpy_chk(local_78,param_4,(long)param_3,0x40);
    }
    else {
      c = (MD5_CTX *)(lVar2 + 0x408);
      MD5_Init(c);
      MD5_Update(c,param_4,(long)param_3);
      MD5_Final(local_78,c);
    }
    puVar4 = (ulong *)local_78;
    do {
      puVar5 = puVar4 + 2;
      *puVar4 = *puVar4 ^ __LC0;
      puVar4[1] = puVar4[1] ^ _UNK_001009d8;
      puVar4 = puVar5;
    } while (puVar5 != &local_38);
    MD5_Init((MD5_CTX *)(lVar2 + 0x408));
    MD5_Update((MD5_CTX *)(lVar2 + 0x408),local_78,0x40);
    puVar4 = (ulong *)local_78;
    do {
      puVar5 = puVar4 + 2;
      *puVar4 = *puVar4 ^ __LC1;
      puVar4[1] = puVar4[1] ^ _UNK_001009e8;
      puVar4 = puVar5;
    } while (&local_38 != puVar5);
    MD5_Init((MD5_CTX *)(lVar2 + 0x464));
    MD5_Update((MD5_CTX *)(lVar2 + 0x464),local_78,0x40);
    OPENSSL_cleanse(local_78,0x40);
    uVar3 = 1;
    goto LAB_00100696;
  }
LAB_00100691:
  uVar3 = 0xffffffff;
LAB_00100696:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc4_hmac_md5(void)

{
  return (EVP_CIPHER *)r4_hmac_md5_cipher;
}


