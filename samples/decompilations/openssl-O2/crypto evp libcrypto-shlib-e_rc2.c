
undefined8 rc2_ctrl(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 == 2) {
    puVar3 = (undefined4 *)EVP_CIPHER_CTX_get_cipher_data();
    *param_4 = *puVar3;
  }
  else if (param_2 == 3) {
    if (param_3 < 1) {
      return 0;
    }
    piVar2 = (int *)EVP_CIPHER_CTX_get_cipher_data();
    *piVar2 = param_3;
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    iVar1 = EVP_CIPHER_CTX_get_key_length();
    piVar2 = (int *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    *piVar2 = iVar1 << 3;
  }
  return 1;
}



uint rc2_get_asn1_type_and_iv
               (EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2,undefined8 param_3,ulong param_4)

{
  uint max_len;
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uchar *extraout_RDX;
  uchar *out;
  uchar *puVar6;
  uchar *in;
  char *out_00;
  char *pcVar7;
  long in_FS_OFFSET;
  ulong uStack_a8;
  uchar *puStack_a0;
  long local_50;
  uchar local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (param_2 == (ASN1_TYPE *)0x0) {
    uVar1 = 0;
    goto LAB_00100128;
  }
  max_len = EVP_CIPHER_CTX_get_iv_length();
  if (0x10 < max_len) {
    out_00 = "crypto/evp/e_rc2.c";
    pcVar7 = "assertion failed: l <= sizeof(iv)";
    OPENSSL_die("assertion failed: l <= sizeof(iv)","crypto/evp/e_rc2.c",0x8c);
    uStack_a8 = param_4;
    puStack_a0 = extraout_RDX;
    if (0x3fffffff < param_4) {
      lVar4 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
      out = (uchar *)out_00;
      in = extraout_RDX;
      do {
        iVar3 = EVP_CIPHER_CTX_is_encrypting(pcVar7);
        lVar5 = EVP_CIPHER_CTX_get_cipher_data(pcVar7);
        puVar6 = out + 0x40000000;
        RC2_cbc_encrypt(in,out,0x40000000,(RC2_KEY *)(lVar5 + 4),(uchar *)(pcVar7 + 0x28),iVar3);
        in = in + 0x40000000;
        out = puVar6;
      } while (puVar6 != (uchar *)out_00 + lVar4);
      uStack_a8 = param_4 & 0x3fffffff;
      puStack_a0 = extraout_RDX + lVar4;
      out_00 = (char *)((uchar *)out_00 + lVar4);
    }
    if (uStack_a8 != 0) {
      iVar3 = EVP_CIPHER_CTX_is_encrypting(pcVar7);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(pcVar7);
      RC2_cbc_encrypt(puStack_a0,(uchar *)out_00,uStack_a8,(RC2_KEY *)(lVar4 + 4),
                      (uchar *)(pcVar7 + 0x28),iVar3);
    }
    return 1;
  }
  uVar1 = ASN1_TYPE_get_int_octetstring(param_2,&local_50,local_48,max_len);
  if (max_len == uVar1) {
    iVar3 = (int)local_50;
    if (iVar3 == 0x3a) {
      iVar3 = 0x80;
    }
    else if (iVar3 == 0x78) {
      iVar3 = 0x40;
    }
    else {
      if (iVar3 != 0xa0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_rc2.c",0x7d,"rc2_magic_to_meth");
        ERR_set_error(6,0x6c,0);
        goto LAB_00100123;
      }
      iVar3 = 0x28;
    }
    if ((((uVar1 == 0) ||
         (iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,local_48,-1
                                   ), iVar2 != 0)) &&
        (iVar2 = EVP_CIPHER_CTX_ctrl(param_1,3,iVar3,(void *)0x0), 0 < iVar2)) &&
       (iVar3 = EVP_CIPHER_CTX_set_key_length(param_1,iVar3 >> 3), 0 < iVar3)) goto LAB_00100128;
  }
LAB_00100123:
  uVar1 = 0xffffffff;
LAB_00100128:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8 rc2_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uchar *out;
  uchar *puVar4;
  uchar *in;
  ulong local_50;
  uchar *local_48;
  
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    out = param_2;
    in = param_3;
    do {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar4 = out + 0x40000000;
      RC2_cbc_encrypt(in,out,0x40000000,(RC2_KEY *)(lVar3 + 4),(uchar *)(param_1 + 0x28),iVar1);
      in = in + 0x40000000;
      out = puVar4;
    } while (puVar4 != param_2 + lVar2);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar2;
    param_2 = param_2 + lVar2;
  }
  if (local_50 != 0) {
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC2_cbc_encrypt(local_48,param_2,local_50,(RC2_KEY *)(lVar2 + 4),(uchar *)(param_1 + 0x28),iVar1
                   );
  }
  return 1;
}



undefined8 rc2_init_key(undefined8 param_1,uchar *param_2)

{
  int bits;
  int len;
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)EVP_CIPHER_CTX_get_cipher_data();
  bits = *piVar1;
  len = EVP_CIPHER_CTX_get_key_length(param_1);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  RC2_set_key((RC2_KEY *)(lVar2 + 4),len,param_2,bits);
  return 1;
}



undefined8 rc2_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int enc;
  long lVar1;
  ulong length;
  uchar *puVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  length = 0x40000000;
  if (param_4 < 0x40000001) {
    length = param_4;
  }
  if (param_4 != 0) {
    do {
      param_4 = param_4 - length;
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar3 = param_3 + length;
      puVar2 = param_2 + length;
      RC2_cfb64_encrypt(param_3,param_2,length,(RC2_KEY *)(lVar1 + 4),(uchar *)(param_1 + 0x28),
                        &local_44,enc);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      if (param_4 < length) {
        length = param_4;
      }
    } while ((param_4 != 0) && (param_2 = puVar2, param_3 = puVar3, length <= param_4));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rc2_ofb_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  uchar *out;
  uchar *puVar3;
  uchar *in;
  long in_FS_OFFSET;
  ulong local_60;
  uchar *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_4;
  local_58 = param_3;
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    out = param_2;
    in = param_3;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar3 = out + 0x40000000;
      RC2_ofb64_encrypt(in,out,0x40000000,(RC2_KEY *)(lVar2 + 4),(uchar *)(param_1 + 0x28),&local_44
                       );
      in = in + 0x40000000;
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      out = puVar3;
    } while (puVar3 != param_2 + lVar1);
    local_60 = param_4 & 0x3fffffff;
    local_58 = param_3 + lVar1;
    param_2 = param_2 + lVar1;
  }
  if (local_60 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC2_ofb64_encrypt(local_58,param_2,local_60,(RC2_KEY *)(lVar1 + 4),(uchar *)(param_1 + 0x28),
                      &local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 rc2_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uchar *in;
  uchar *out;
  int enc;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_get0_cipher();
  uVar3 = (ulong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    uVar2 = 0;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      out = (uchar *)(param_2 + uVar2);
      in = (uchar *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar3;
      RC2_ecb_encrypt(in,out,(RC2_KEY *)(lVar1 + 4),enc);
    } while (uVar2 <= param_4 - uVar3);
  }
  return 1;
}



int rc2_set_asn1_type_and_iv(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2)

{
  int iVar1;
  long num;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (ASN1_TYPE *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    num = 0;
    iVar1 = EVP_CIPHER_CTX_ctrl(param_1,2,0,&local_24);
    if (0 < iVar1) {
      if (local_24 == 0x80) {
        num = 0x3a;
      }
      else if (local_24 == 0x40) {
        num = 0x78;
      }
      else if (local_24 == 0x28) {
        num = 0xa0;
      }
    }
    iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = ASN1_TYPE_set_int_octetstring(param_2,num,param_1->oiv,iVar1);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc2_cbc(void)

{
  return (EVP_CIPHER *)rc2_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc2_cfb64(void)

{
  return (EVP_CIPHER *)rc2_cfb64;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc2_ofb(void)

{
  return (EVP_CIPHER *)rc2_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc2_ecb(void)

{
  return (EVP_CIPHER *)rc2_ecb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc2_64_cbc(void)

{
  return (EVP_CIPHER *)r2_64_cbc_cipher;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_rc2_40_cbc(void)

{
  return (EVP_CIPHER *)r2_40_cbc_cipher;
}


