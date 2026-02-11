
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cipher_hw_rc4_hmac_md5_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  RC4_KEY *key;
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uchar *puVar4;
  ulong uVar5;
  uchar *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint uVar12;
  int iVar13;
  MD5_CTX *local_78;
  uchar local_58 [24];
  long local_40;
  
  uVar5 = *(ulong *)(param_1 + 0x5e0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  key = (RC4_KEY *)(param_1 + 0xc0);
  uVar10 = (ulong)(0x40 - *(int *)(param_1 + 0x5d8));
  uVar9 = (ulong)(~*(uint *)(param_1 + 0xc0) & 0x1f);
  if (uVar5 == 0xffffffffffffffff) {
    if ((*(byte *)(param_1 + 0x6c) & 2) == 0) goto LAB_001001d2;
    if (uVar10 < uVar9) {
      uVar10 = uVar10 + 0x40;
    }
    uVar5 = param_4;
    uVar2 = param_4;
    if (uVar10 < param_4) {
LAB_001002f7:
      uVar8 = uVar5 - uVar10;
      uVar2 = uVar5;
      if ((uVar8 < 0x40) || ((_OPENSSL_ia32cap_P & 0x100000) != 0)) goto LAB_0010009e;
      MD5_Update((MD5_CTX *)(param_1 + 0x580),param_3,uVar10);
      RC4(key,uVar9,param_3,param_2);
      rc4_md5_enc(key,param_3 + uVar9,param_2 + uVar9,(MD5_CTX *)(param_1 + 0x580),param_3 + uVar10,
                  uVar8 >> 6);
      uVar2 = uVar8 & 0xffffffffffffffc0;
      lVar3 = uVar9 + uVar2;
      uVar7 = (int)uVar2 * 8;
      puVar6 = param_3 + uVar10 + uVar2;
      uVar2 = uVar5 - (uVar10 + uVar2);
      puVar4 = param_2 + lVar3;
      uVar12 = uVar7 + (int)*(undefined8 *)(param_1 + 0x590);
      iVar13 = (int)(uVar8 >> 0x1d) + (int)((ulong)*(undefined8 *)(param_1 + 0x590) >> 0x20);
      uVar10 = param_4 - lVar3;
      *(ulong *)(param_1 + 0x590) = CONCAT44(iVar13,uVar12);
      if (uVar12 < uVar7) {
        *(int *)(param_1 + 0x594) = iVar13 + 1;
      }
    }
    else {
LAB_0010009e:
      lVar3 = 0;
      uVar5 = uVar2;
      puVar6 = param_3;
      puVar4 = param_2;
      uVar10 = param_4;
    }
    local_78 = (MD5_CTX *)(param_1 + 0x580);
    MD5_Update(local_78,puVar6,uVar2);
    if (uVar5 == param_4) {
      RC4(key,uVar10,param_3 + lVar3,puVar4);
    }
    else {
      if (param_3 != param_2) {
        memcpy(puVar4,param_3 + lVar3,uVar5 - lVar3);
      }
      param_2 = param_2 + uVar5;
      MD5_Final(param_2,local_78);
      *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x524);
      *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x52c);
      *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x534);
      *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x53c);
      *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x564);
      *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x56c);
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x544);
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x54c);
      *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x554);
      *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x55c);
      *(undefined8 *)(param_1 + 0x5cc) = *(undefined8 *)(param_1 + 0x570);
      *(undefined8 *)(param_1 + 0x5d4) = *(undefined8 *)(param_1 + 0x578);
      MD5_Update(local_78,param_2,0x10);
      MD5_Final(param_2,local_78);
      RC4(key,uVar10,puVar4,puVar4);
    }
  }
  else {
    if (uVar5 + 0x10 != param_4) {
      uVar1 = 0;
      goto LAB_001001a1;
    }
    if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
      if (uVar10 < uVar9) {
        uVar10 = uVar10 + 0x40;
      }
      uVar2 = uVar5;
      if (uVar10 < uVar5) goto LAB_001002f7;
      goto LAB_0010009e;
    }
LAB_001001d2:
    uVar2 = uVar9 + 0x80;
    if (uVar10 <= uVar9) {
      uVar2 = uVar9 + 0x40;
    }
    if (((uVar2 < param_4) && (uVar9 = param_4 - uVar2, 0x3f < uVar9)) &&
       ((_OPENSSL_ia32cap_P & 0x100000) == 0)) {
      RC4(key,uVar2,param_3,param_2);
      MD5_Update((MD5_CTX *)(param_1 + 0x580),param_2,uVar10);
      rc4_md5_enc(key,param_3 + uVar2,param_2 + uVar2,(MD5_CTX *)(param_1 + 0x580),param_2 + uVar10,
                  uVar9 >> 6);
      iVar13 = *(int *)(param_1 + 0x594);
      uVar8 = uVar9 & 0xffffffffffffffc0;
      lVar11 = uVar10 + uVar8;
      uVar7 = (int)uVar8 * 8;
      lVar3 = uVar2 + uVar8;
      if (CARRY4(uVar7,*(uint *)(param_1 + 0x590))) {
        iVar13 = iVar13 + 1;
      }
      *(uint *)(param_1 + 0x590) = uVar7 + *(uint *)(param_1 + 0x590);
      param_3 = param_3 + lVar3;
      uVar10 = param_4 - lVar3;
      puVar6 = param_2 + lVar11;
      *(int *)(param_1 + 0x594) = iVar13 + (int)(uVar9 >> 0x1d);
      puVar4 = param_2 + lVar3;
    }
    else {
      lVar11 = 0;
      puVar4 = param_2;
      uVar10 = param_4;
      puVar6 = param_2;
    }
    local_78 = (MD5_CTX *)(param_1 + 0x580);
    RC4(key,uVar10,param_3,puVar4);
    if (uVar5 == 0xffffffffffffffff) {
      MD5_Update(local_78,puVar6,param_4 - lVar11);
    }
    else {
      MD5_Update(local_78,puVar6,uVar5 - lVar11);
      MD5_Final(local_58,local_78);
      *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x524);
      *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x52c);
      *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x564);
      *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x56c);
      *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x534);
      *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x53c);
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x544);
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x54c);
      *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x554);
      *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x55c);
      *(undefined8 *)(param_1 + 0x5cc) = *(undefined8 *)(param_1 + 0x570);
      *(undefined8 *)(param_1 + 0x5d4) = *(undefined8 *)(param_1 + 0x578);
      MD5_Update(local_78,local_58,0x10);
      MD5_Final(local_58,local_78);
      iVar13 = CRYPTO_memcmp(param_2 + uVar5,local_58,0x10);
      if (iVar13 != 0) {
        uVar1 = 0;
        goto LAB_001001a1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
  uVar1 = 1;
LAB_001001a1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 cipher_hw_rc4_hmac_md5_initkey(long param_1,uchar *param_2,int param_3)

{
  RC4_set_key((RC4_KEY *)(param_1 + 0xc0),param_3,param_2);
  MD5_Init((MD5_CTX *)(param_1 + 0x4c8));
  *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x98) = 0x10;
  *(undefined8 *)(param_1 + 0x524) = *(undefined8 *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x52c) = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x534) = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x53c) = *(undefined8 *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x564) = *(undefined8 *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x56c) = *(undefined8 *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x544) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x54c) = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x554) = *(undefined8 *)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x55c) = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x514);
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x51c);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x5cc) = *(undefined8 *)(param_1 + 0x514);
  *(undefined8 *)(param_1 + 0x5d4) = *(undefined8 *)(param_1 + 0x51c);
  return 1;
}



undefined8 cipher_hw_rc4_hmac_md5_tls_init(long param_1,void *param_2,long param_3)

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
  ushort uVar11;
  uint uVar12;
  MD5_CTX *c;
  
  if (param_3 != 0xd) {
    return 0;
  }
  uVar11 = *(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8;
  uVar12 = (uint)uVar11;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    if (uVar11 < 0x10) {
      return 0;
    }
    uVar12 = uVar11 - 0x10;
    *(ushort *)((long)param_2 + 0xb) = (ushort)uVar12 << 8 | (ushort)uVar12 >> 8;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x4c8);
  uVar2 = *(undefined8 *)(param_1 + 0x4d0);
  uVar3 = *(undefined8 *)(param_1 + 0x4d8);
  uVar4 = *(undefined8 *)(param_1 + 0x4e0);
  uVar5 = *(undefined8 *)(param_1 + 0x4e8);
  uVar6 = *(undefined8 *)(param_1 + 0x4f0);
  *(ulong *)(param_1 + 0x5e0) = (ulong)uVar12;
  c = (MD5_CTX *)(param_1 + 0x580);
  uVar7 = *(undefined8 *)(param_1 + 0x4f8);
  uVar8 = *(undefined8 *)(param_1 + 0x500);
  uVar9 = *(undefined8 *)(param_1 + 0x508);
  uVar10 = *(undefined8 *)(param_1 + 0x510);
  c->A = (int)uVar1;
  c->B = (int)((ulong)uVar1 >> 0x20);
  *(undefined8 *)(param_1 + 0x588) = uVar2;
  *(undefined8 *)(param_1 + 0x590) = uVar3;
  *(undefined8 *)(param_1 + 0x598) = uVar4;
  *(undefined8 *)(param_1 + 0x5c0) = uVar9;
  *(undefined8 *)(param_1 + 0x5c8) = uVar10;
  *(undefined8 *)(param_1 + 0x5a0) = uVar5;
  *(undefined8 *)(param_1 + 0x5a8) = uVar6;
  *(undefined8 *)(param_1 + 0x5b0) = uVar7;
  *(undefined8 *)(param_1 + 0x5b8) = uVar8;
  *(undefined8 *)(param_1 + 0x5cc) = *(undefined8 *)(param_1 + 0x514);
  *(undefined8 *)(param_1 + 0x5d4) = *(undefined8 *)(param_1 + 0x51c);
  MD5_Update(c,param_2,0xd);
  return 0x10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cipher_hw_rc4_hmac_md5_init_mackey(long param_1,void *param_2,size_t param_3)

{
  MD5_CTX *c;
  ulong *puVar1;
  ulong *puVar2;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (param_3 < 0x41) {
    memcpy(local_78,param_2,param_3);
  }
  else {
    c = (MD5_CTX *)(param_1 + 0x4c8);
    MD5_Init(c);
    MD5_Update(c,param_2,param_3);
    MD5_Final(local_78,c);
  }
  puVar1 = (ulong *)local_78;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC0;
    puVar1[1] = puVar1[1] ^ _UNK_00100858;
    puVar1 = puVar2;
  } while (puVar2 != &local_38);
  MD5_Init((MD5_CTX *)(param_1 + 0x4c8));
  MD5_Update((MD5_CTX *)(param_1 + 0x4c8),local_78,0x40);
  puVar1 = (ulong *)local_78;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC1;
    puVar1[1] = puVar1[1] ^ _UNK_00100868;
    puVar1 = puVar2;
  } while (puVar2 != &local_38);
  MD5_Init((MD5_CTX *)(param_1 + 0x524));
  MD5_Update((MD5_CTX *)(param_1 + 0x524),local_78,0x40);
  OPENSSL_cleanse(local_78,0x40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * ossl_prov_cipher_hw_rc4_hmac_md5(void)

{
  return rc4_hmac_md5_hw;
}


