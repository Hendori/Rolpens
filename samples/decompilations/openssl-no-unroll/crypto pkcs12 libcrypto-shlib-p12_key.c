
bool PKCS12_key_gen_uni_ex
               (undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined4 param_5,
               undefined4 param_6,int param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = param_6;
  local_13c = param_5;
  if (0 < param_7) {
    lVar2 = EVP_KDF_fetch(param_10,"PKCS12KDF",param_11);
    if (lVar2 != 0) {
      lVar3 = EVP_KDF_CTX_new(lVar2);
      EVP_KDF_free(lVar2);
      if (lVar3 != 0) {
        uVar4 = EVP_MD_get0_name(param_9);
        OSSL_PARAM_construct_utf8_string(&local_178,"digest",uVar4,0);
        local_118 = local_158;
        local_138 = local_178;
        uStack_130 = uStack_170;
        local_128 = local_168;
        uStack_120 = uStack_160;
        OSSL_PARAM_construct_octet_string(&local_178,&_LC2,param_1,(long)param_2);
        local_f0 = local_158;
        local_110 = local_178;
        uStack_108 = uStack_170;
        local_100 = local_168;
        uStack_f8 = uStack_160;
        OSSL_PARAM_construct_octet_string(&local_178,&_LC3,param_3,(long)param_4);
        local_e8 = local_178;
        uStack_e0 = uStack_170;
        local_d8 = local_168;
        uStack_d0 = uStack_160;
        local_c8 = local_158;
        OSSL_PARAM_construct_int(&local_178,&_LC4,&local_13c);
        local_c0 = local_178;
        uStack_b8 = uStack_170;
        local_b0 = local_168;
        uStack_a8 = uStack_160;
        local_a0 = local_158;
        OSSL_PARAM_construct_int(&local_178,&_LC5,&local_140);
        local_78 = local_158;
        local_98 = local_178;
        uStack_90 = uStack_170;
        local_88 = local_168;
        uStack_80 = uStack_160;
        OSSL_PARAM_construct_end(&local_178);
        local_70 = local_178;
        uStack_68 = uStack_170;
        local_50 = local_158;
        local_60 = local_168;
        uStack_58 = uStack_160;
        iVar1 = EVP_KDF_derive(lVar3,param_8,(long)param_7,&local_138);
        bVar5 = iVar1 != 0;
        EVP_KDF_CTX_free(lVar3);
        goto LAB_00100242;
      }
    }
  }
  bVar5 = false;
LAB_00100242:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool PKCS12_key_gen_asc_ex
               (char *param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  int local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    local_48 = (uchar *)0x0;
    local_4c = 0;
  }
  else {
    puVar3 = OPENSSL_asc2uni(param_1,param_2,&local_48,&local_4c);
    if (puVar3 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_key.c",0x20,"PKCS12_key_gen_asc_ex");
      ERR_set_error(0x23,0x80023,0);
      bVar1 = false;
      goto LAB_00100344;
    }
  }
  iVar2 = PKCS12_key_gen_uni_ex
                    (local_48,local_4c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11);
  CRYPTO_clear_free(local_48,(long)local_4c,"crypto/pkcs12/p12_key.c",0x25);
  bVar1 = 0 < iVar2;
LAB_00100344:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



int PKCS12_key_gen_asc(char *pass,int passlen,uchar *salt,int saltlen,int id,int iter,int n,
                      uchar *out,EVP_MD *md_type)

{
  int iVar1;
  
  iVar1 = PKCS12_key_gen_asc_ex();
  return iVar1;
}



bool PKCS12_key_gen_utf8_ex
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_48 = 0;
    local_4c = 0;
  }
  else {
    lVar3 = OPENSSL_utf82uni(param_1,param_2,&local_48,&local_4c,param_10,param_11,param_10,param_11
                            );
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_key.c",0x3e,"PKCS12_key_gen_utf8_ex");
      ERR_set_error(0x23,0x80023,0);
      bVar1 = false;
      goto LAB_001004c4;
    }
  }
  iVar2 = PKCS12_key_gen_uni_ex
                    (local_48,local_4c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11);
  CRYPTO_clear_free(local_48,(long)local_4c,"crypto/pkcs12/p12_key.c",0x43);
  bVar1 = 0 < iVar2;
LAB_001004c4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



void PKCS12_key_gen_utf8(void)

{
  PKCS12_key_gen_utf8_ex();
  return;
}



int PKCS12_key_gen_uni(uchar *pass,int passlen,uchar *salt,int saltlen,int id,int iter,int n,
                      uchar *out,EVP_MD *md_type)

{
  int iVar1;
  
  iVar1 = PKCS12_key_gen_uni_ex();
  return iVar1;
}


