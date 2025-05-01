
undefined8 ec_pkey_dirty_cnt(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
}



bool eckey_priv_decode_ex
               (EVP_PKEY *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *key;
  
  key = (void *)ossl_ec_key_from_pkcs8(param_2,param_3,param_4);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,0x198,key);
  }
  return key != (void *)0x0;
}



void int_ec_free(long param_1)

{
  EC_KEY_free(*(EC_KEY **)(param_1 + 0x20));
  return;
}



undefined8 ec_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  EC_KEY *key;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  key = (EC_KEY *)EC_KEY_new_ex(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (key == (EC_KEY *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_ameth.c",0x268,"ec_pkey_import_from");
    ERR_set_error(0x10,0x80010,0);
  }
  else {
    iVar1 = ossl_ec_group_fromdata(key,param_1);
    if ((((iVar1 != 0) && (iVar1 = ossl_ec_key_otherparams_fromdata(key,param_1), iVar1 != 0)) &&
        (iVar1 = ossl_ec_key_fromdata(key,param_1,1), iVar1 != 0)) &&
       (iVar1 = EVP_PKEY_assign(pkey,0x198,key), iVar1 != 0)) {
      return 1;
    }
    EC_KEY_free(key);
  }
  return 0;
}



bool ec_missing_parameters(long param_1)

{
  EC_GROUP *pEVar1;
  
  if (*(EC_KEY **)(param_1 + 0x20) != (EC_KEY *)0x0) {
    pEVar1 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
    return pEVar1 == (EC_GROUP *)0x0;
  }
  return true;
}



void ec_bits(long param_1)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  EC_GROUP_order_bits(pEVar1);
  return;
}



int ec_security_bits(long param_1)

{
  int iVar1;
  EC_GROUP *pEVar2;
  int iVar3;
  
  pEVar2 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  iVar1 = EC_GROUP_order_bits(pEVar2);
  iVar3 = 0x100;
  if ((((iVar1 < 0x200) && (iVar3 = 0xc0, iVar1 < 0x180)) && (iVar3 = 0x80, iVar1 < 0x100)) &&
     ((iVar3 = 0x70, iVar1 < 0xe0 && (iVar3 = 0x50, iVar1 < 0xa0)))) {
    iVar3 = iVar1 / 2;
  }
  return iVar3;
}



undefined4
ec_pkey_export_to(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  EC_KEY *key;
  int iVar1;
  point_conversion_form_t pVar2;
  uint uVar3;
  undefined4 uVar4;
  EC_GROUP *pEVar5;
  long lVar6;
  BN_CTX *ctx;
  BIGNUM *pBVar7;
  EC_POINT *pEVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  if ((((param_1 == 0) || (key = *(EC_KEY **)(param_1 + 0x20), key == (EC_KEY *)0x0)) ||
      (pEVar5 = EC_KEY_get0_group(key), pEVar5 == (EC_GROUP *)0x0)) ||
     (lVar6 = OSSL_PARAM_BLD_new(), lVar6 == 0)) {
    uVar4 = 0;
    goto LAB_001003aa;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(param_4);
  if (ctx == (BN_CTX *)0x0) {
LAB_001003d0:
    uVar4 = 0;
    uVar10 = 0;
  }
  else {
    BN_CTX_start(ctx);
    iVar1 = ossl_ec_group_todata(pEVar5,lVar6,0,param_4,param_5,ctx);
    if (iVar1 == 0) goto LAB_001003d0;
    pBVar7 = EC_KEY_get0_private_key(key);
    pEVar8 = EC_KEY_get0_public_key(key);
    if (pEVar8 == (EC_POINT *)0x0) {
      uVar11 = 0x85;
      uVar4 = 4;
    }
    else {
      pVar2 = EC_KEY_get_conv_form(key);
      lVar9 = EC_POINT_point2buf(pEVar5,pEVar8,pVar2,&local_50,ctx);
      if ((lVar9 == 0) ||
         (iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar6,&_LC1,local_50,lVar9), iVar1 == 0))
      goto LAB_001003d0;
      uVar11 = 0x87;
      uVar4 = 6;
    }
    if (pBVar7 != (BIGNUM *)0x0) {
      iVar1 = EC_GROUP_order_bits(pEVar5);
      if ((0 < iVar1) &&
         (iVar1 = OSSL_PARAM_BLD_push_BN_pad(lVar6,&_LC2,pBVar7,(long)(iVar1 + 7 >> 3)), iVar1 != 0)
         ) {
        uVar3 = EC_KEY_get_flags(key);
        iVar1 = OSSL_PARAM_BLD_push_int(lVar6,"use-cofactor-flag",uVar3 >> 0xc & 1);
        uVar4 = uVar11;
        if (iVar1 != 0) goto LAB_0010037e;
      }
      goto LAB_001003d0;
    }
LAB_0010037e:
    uVar10 = OSSL_PARAM_BLD_to_param(lVar6);
    uVar4 = (*param_3)(param_2,uVar4,uVar10);
  }
  OSSL_PARAM_BLD_free(lVar6);
  OSSL_PARAM_free(uVar10);
  CRYPTO_free(local_50);
  CRYPTO_free(local_48);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
LAB_001003aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void ec_pkey_public_check(long param_1)

{
  EC_KEY_check_key(*(EC_KEY **)(param_1 + 0x20));
  return;
}



void old_ec_priv_encode(long param_1,uchar **param_2)

{
  i2d_ECPrivateKey(*(EC_KEY **)(param_1 + 0x20),param_2);
  return;
}



bool old_ec_priv_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  EC_KEY *key;
  
  key = d2i_ECPrivateKey((EC_KEY **)0x0,param_2,(long)param_3);
  if (key != (EC_KEY *)0x0) {
    EVP_PKEY_assign(param_1,0x198,key);
  }
  return key != (EC_KEY *)0x0;
}



ulong ec_cmp_parameters(long param_1,long param_2)

{
  int iVar1;
  EC_GROUP *a;
  EC_GROUP *b;
  ulong uVar2;
  
  a = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  b = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  if ((a == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = EC_GROUP_cmp(a,b,(BN_CTX *)0x0);
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}



undefined8 ec_copy_parameters(long param_1,long param_2)

{
  int iVar1;
  EC_GROUP *pEVar2;
  EC_KEY *key;
  
  pEVar2 = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  pEVar2 = EC_GROUP_dup(pEVar2);
  if (pEVar2 == (EC_GROUP *)0x0) {
    return 0;
  }
  key = *(EC_KEY **)(param_1 + 0x20);
  if (key == (EC_KEY *)0x0) {
    key = EC_KEY_new();
    *(EC_KEY **)(param_1 + 0x20) = key;
    if (key == (EC_KEY *)0x0) goto LAB_0010052b;
  }
  iVar1 = EC_KEY_set_group(key,pEVar2);
  if (iVar1 != 0) {
    EC_GROUP_free(pEVar2);
    return 1;
  }
LAB_0010052b:
  EC_GROUP_free(pEVar2);
  return 0;
}



void eckey_param_encode(long param_1,uchar **param_2)

{
  i2d_ECParameters(*(EC_KEY **)(param_1 + 0x20),param_2);
  return;
}



bool eckey_param_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  EC_KEY *key;
  
  key = d2i_ECParameters((EC_KEY **)0x0,param_2,(long)param_3);
  if (key != (EC_KEY *)0x0) {
    EVP_PKEY_assign(param_1,0x198,key);
  }
  return key != (EC_KEY *)0x0;
}



void int_ec_size(long param_1)

{
  ECDSA_size(*(EC_KEY **)(param_1 + 0x20));
  return;
}



undefined8 eckey_param2type(undefined4 *param_1,undefined8 *param_2,EC_KEY *param_3)

{
  int iVar1;
  EC_GROUP *group;
  ASN1_STRING *a;
  ASN1_OBJECT *pAVar2;
  long lVar3;
  
  if ((param_3 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_3), group == (EC_GROUP *)0x0))
  {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_ameth.c",0x23,"eckey_param2type");
    ERR_set_error(0x10,0x7c,0);
    return 0;
  }
  iVar1 = EC_GROUP_get_asn1_flag(group);
  if ((iVar1 == 0) || (iVar1 = EC_GROUP_get_curve_name(group), iVar1 == 0)) {
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      return 0;
    }
    iVar1 = i2d_ECParameters(param_3,&a->data);
    a->length = iVar1;
    if (iVar1 < 1) {
      ASN1_STRING_free(a);
      ERR_new();
      ERR_set_debug("crypto/ec/ec_ameth.c",0x3b,"eckey_param2type");
      ERR_set_error(0x10,0x80010,0);
      return 0;
    }
    *param_2 = a;
    *param_1 = 0x10;
  }
  else {
    pAVar2 = OBJ_nid2obj(iVar1);
    if ((pAVar2 == (ASN1_OBJECT *)0x0) || (lVar3 = OBJ_length(pAVar2), lVar3 == 0)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_ameth.c",0x2d,"eckey_param2type");
      ERR_set_error(0x10,0xa7,0);
      return 0;
    }
    *param_2 = pAVar2;
    *param_1 = 6;
  }
  return 1;
}



undefined8 eckey_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  undefined8 *puVar1;
  uchar *penc;
  ASN1_STRING *pval;
  int iVar2;
  uint uVar3;
  int iVar4;
  ASN1_OBJECT *aobj;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_ac;
  uchar *local_a8;
  ASN1_STRING *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  local_a8 = (uchar *)0x0;
  local_98 = *puVar1;
  uStack_90 = puVar1[1];
  local_88 = puVar1[2];
  uStack_80 = puVar1[3];
  local_78 = puVar1[4];
  uStack_70 = puVar1[5];
  local_68 = puVar1[6];
  uStack_60 = puVar1[7];
  local_58 = puVar1[8];
  uStack_50 = puVar1[9];
  local_48 = puVar1[10];
  uStack_40 = puVar1[0xb];
  local_38 = puVar1[0xc];
  iVar2 = eckey_param2type(&local_ac,&local_a0,(EC_KEY *)&local_98);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_ameth.c",0xab,"eckey_priv_encode");
    ERR_set_error(0x10,0x8e,0);
  }
  else {
    uVar3 = EC_KEY_get_enc_flags((EC_KEY *)&local_98);
    EC_KEY_set_enc_flags((EC_KEY *)&local_98,uVar3 | 1);
    iVar2 = i2d_ECPrivateKey((EC_KEY *)&local_98,&local_a8);
    pval = local_a0;
    penc = local_a8;
    if (iVar2 < 1) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_ameth.c",0xba,"eckey_priv_encode");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      aobj = OBJ_nid2obj(0x198);
      iVar4 = PKCS8_pkey_set0(param_1,aobj,0,local_ac,pval,penc,iVar2);
      uVar5 = 1;
      if (iVar4 != 0) goto LAB_0010084b;
      ERR_new();
      ERR_set_debug("crypto/ec/ec_ameth.c",0xc0,"eckey_priv_encode");
      ERR_set_error(0x10,0x8000d,0);
      CRYPTO_clear_free(local_a8,(long)iVar2,"crypto/ec/ec_ameth.c",0xc1);
    }
    if (local_ac == 0x10) {
      ASN1_STRING_free(local_a0);
      uVar5 = 0;
      goto LAB_0010084b;
    }
  }
  uVar5 = 0;
LAB_0010084b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 eckey_pub_cmp(long param_1,long param_2)

{
  int iVar1;
  EC_GROUP *group;
  EC_POINT *a;
  EC_POINT *b;
  
  group = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  a = EC_KEY_get0_public_key(*(EC_KEY **)(param_1 + 0x20));
  b = EC_KEY_get0_public_key(*(EC_KEY **)(param_2 + 0x20));
  if ((group != (EC_GROUP *)0x0 && a != (EC_POINT *)0x0) && (b != (EC_POINT *)0x0)) {
    iVar1 = EC_POINT_cmp(group,a,b,(BN_CTX *)0x0);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == 1) {
      return 0;
    }
  }
  return 0xfffffffe;
}



undefined8 eckey_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  EC_KEY *key;
  ASN1_STRING *pval;
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_54;
  ASN1_STRING *local_50;
  uchar *local_48;
  long local_40;
  
  key = *(EC_KEY **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ASN1_STRING *)0x0;
  iVar1 = eckey_param2type(&local_54,&local_50,key);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_ameth.c",0x4d,"eckey_pub_encode");
    ERR_set_error(0x10,0x80010,0);
  }
  else {
    iVar1 = i2o_ECPublicKey(key,(uchar **)0x0);
    if ((iVar1 < 1) ||
       (penc = (uchar *)CRYPTO_malloc(iVar1,"crypto/ec/ec_ameth.c",0x53), penc == (uchar *)0x0)) {
      penc = (uchar *)0x0;
    }
    else {
      local_48 = penc;
      iVar1 = i2o_ECPublicKey(key,&local_48);
      pval = local_50;
      if (0 < iVar1) {
        aobj = OBJ_nid2obj(0x198);
        iVar1 = X509_PUBKEY_set0_param(param_1,aobj,local_54,pval,penc,iVar1);
        uVar2 = 1;
        if (iVar1 != 0) goto LAB_00100aca;
      }
    }
    if (local_54 == 0x10) {
      ASN1_STRING_free(local_50);
      CRYPTO_free(penc);
    }
    else {
      CRYPTO_free(penc);
    }
  }
  uVar2 = 0;
LAB_00100aca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 eckey_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  EC_KEY *pEVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_4c;
  uchar *local_48;
  EC_KEY *local_40;
  X509_ALGOR *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_40 = (EC_KEY *)0x0;
  local_30 = 0;
  local_28 = 0;
  iVar1 = ossl_x509_PUBKEY_get0_libctx(&local_30,&local_28,param_2);
  if (iVar1 != 0) {
    iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_48,&local_4c,&local_38,param_2);
    if (iVar1 != 0) {
      local_40 = (EC_KEY *)ossl_ec_key_param_from_x509_algor(local_38,local_30,local_28);
      if (local_40 != (EC_KEY *)0x0) {
        pEVar2 = o2i_ECPublicKey(&local_40,&local_48,(long)local_4c);
        if (pEVar2 == (EC_KEY *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_ameth.c",0x77,"eckey_pub_decode");
          ERR_set_error(0x10,0x8e,0);
          EC_KEY_free(local_40);
          uVar3 = 0;
        }
        else {
          EVP_PKEY_assign(param_1,0x198,local_40);
          uVar3 = 1;
        }
        goto LAB_00100c2c;
      }
    }
  }
  uVar3 = 0;
LAB_00100c2c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ec_pkey_param_check(long param_1)

{
  EC_GROUP *group;
  int iVar1;
  
  group = *(EC_GROUP **)(*(long *)(param_1 + 0x20) + 0x18);
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_check(group,(BN_CTX *)0x0);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_ameth.c",0x1ca,"ec_pkey_param_check");
  ERR_set_error(0x10,0x7c,0);
  return 0;
}



int ec_pkey_check(long param_1)

{
  int iVar1;
  
  if (*(long *)(*(EC_KEY **)(param_1 + 0x20) + 0x28) != 0) {
    iVar1 = EC_KEY_check_key(*(EC_KEY **)(param_1 + 0x20));
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_ameth.c",0x1ad,"ec_pkey_check");
  ERR_set_error(0x10,0x7d,0);
  return 0;
}



ulong ec_pkey_ctrl(uint *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 9) {
    uVar2 = (ulong)*param_1;
    if ((*param_1 != 0) && (uVar2 = 0, *(long *)(param_1 + 0x18) == 0)) {
      uVar3 = evp_pkey_get0_EC_KEY_int();
      uVar2 = EC_KEY_oct2key(uVar3,param_4,param_3,0);
      return uVar2;
    }
  }
  else {
    if (param_2 == 10) {
      uVar3 = EVP_PKEY_get0_EC_KEY();
      uVar2 = EC_KEY_key2buf(uVar3,4,param_4,0);
      return uVar2;
    }
    uVar2 = 0xfffffffe;
    if (param_2 == 3) {
      iVar1 = EVP_PKEY_get_id();
      if (iVar1 == 0x494) {
        *param_4 = 0x477;
        uVar2 = 2;
      }
      else {
        *param_4 = 0x2a0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



int ec_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  EC_KEY *key;
  
  if (*(EC_KEY **)(param_2 + 8) == (EC_KEY *)0x0) {
    iVar1 = EVP_PKEY_set_type(param_1,*param_2);
    return iVar1;
  }
  key = EC_KEY_dup(*(EC_KEY **)(param_2 + 8));
  iVar1 = 0;
  if (key != (EC_KEY *)0x0) {
    iVar1 = EVP_PKEY_assign(param_1,0x198,key);
    if (iVar1 == 0) {
      EC_KEY_free(key);
      return 0;
    }
  }
  return iVar1;
}



undefined8 eckey_param_print(BIO *param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *x;
  undefined8 uVar3;
  
  if (*(EC_KEY **)(param_2 + 0x20) == (EC_KEY *)0x0) {
LAB_00100f50:
    ERR_new();
    ERR_set_debug("crypto/ec/ec_ameth.c",0x124,"do_EC_KEY_print");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  x = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  if (x == (EC_GROUP *)0x0) goto LAB_00100f50;
  iVar1 = BIO_indent(param_1,param_3,0x80);
  if (iVar1 != 0) {
    uVar2 = EC_GROUP_order_bits(x);
    iVar1 = BIO_printf(param_1,"%s: (%d bit)\n","ECDSA-Parameters",(ulong)uVar2);
    if (0 < iVar1) {
      iVar1 = ECPKParameters_print(param_1,x,param_3);
      if (iVar1 != 0) {
        uVar3 = 1;
        goto LAB_00100ed5;
      }
    }
  }
  ERR_new();
  uVar3 = 0;
  ERR_set_debug("crypto/ec/ec_ameth.c",0x154,"do_EC_KEY_print");
  ERR_set_error(0x10,0x80010,0);
LAB_00100ed5:
  CRYPTO_clear_free(0,0,"crypto/ec/ec_ameth.c",0x155);
  CRYPTO_free((void *)0x0);
  return uVar3;
}



undefined8 eckey_pub_print(BIO *param_1,long param_2,uint param_3)

{
  EC_KEY *key;
  point_conversion_form_t pVar1;
  int iVar2;
  uint uVar3;
  EC_GROUP *x;
  EC_POINT *pEVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  key = *(EC_KEY **)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  if ((key == (EC_KEY *)0x0) || (x = EC_KEY_get0_group(key), x == (EC_GROUP *)0x0)) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("crypto/ec/ec_ameth.c",0x124,"do_EC_KEY_print");
    ERR_set_error(0x10,0xc0102,0);
    goto LAB_00101107;
  }
  pEVar4 = EC_KEY_get0_public_key(key);
  if (pEVar4 == (EC_POINT *)0x0) {
    lVar5 = 0;
LAB_00101011:
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 == 0) goto LAB_001010b0;
    uVar3 = EC_GROUP_order_bits(x);
    iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","Public-Key",(ulong)uVar3);
    if ((iVar2 < 1) ||
       ((lVar5 != 0 &&
        ((iVar2 = BIO_printf(param_1,"%*spub:\n",(ulong)param_3,&_LC7), iVar2 < 1 ||
         (iVar2 = ASN1_buf_print(param_1,local_38,lVar5,param_3 + 4), iVar2 == 0))))))
    goto LAB_001010b0;
    uVar6 = 1;
    iVar2 = ECPKParameters_print(param_1,x,param_3);
    if (iVar2 == 0) goto LAB_001010b0;
  }
  else {
    pVar1 = EC_KEY_get_conv_form(key);
    lVar5 = EC_KEY_key2buf(key,pVar1,&local_38,0);
    if (lVar5 != 0) goto LAB_00101011;
LAB_001010b0:
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("crypto/ec/ec_ameth.c",0x154,"do_EC_KEY_print");
    ERR_set_error(0x10,0x80010,0);
  }
  CRYPTO_clear_free(0,0,"crypto/ec/ec_ameth.c",0x155);
  CRYPTO_free(local_38);
LAB_00101107:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8 eckey_priv_print(BIO *param_1,long param_2,uint param_3)

{
  EC_KEY *key;
  point_conversion_form_t pVar1;
  int iVar2;
  uint uVar3;
  EC_GROUP *x;
  EC_POINT *pEVar4;
  long lVar5;
  BIGNUM *pBVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined8 local_50;
  void *local_48;
  long local_40;
  
  key = *(EC_KEY **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = (void *)0x0;
  if ((key == (EC_KEY *)0x0) || (x = EC_KEY_get0_group(key), x == (EC_GROUP *)0x0)) {
    ERR_new();
    uVar8 = 0;
    ERR_set_debug("crypto/ec/ec_ameth.c",0x124,"do_EC_KEY_print");
    ERR_set_error(0x10,0xc0102,0);
    goto LAB_00101357;
  }
  pEVar4 = EC_KEY_get0_public_key(key);
  if (pEVar4 == (EC_POINT *)0x0) {
    lVar5 = 0;
    pBVar6 = EC_KEY_get0_private_key(key);
    if (pBVar6 != (BIGNUM *)0x0) goto LAB_00101212;
LAB_001012ec:
    lVar7 = 0;
LAB_0010122b:
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 == 0) goto LAB_001012fb;
    uVar3 = EC_GROUP_order_bits(x);
    iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","Private-Key",(ulong)uVar3);
    if (((iVar2 < 1) ||
        ((lVar7 != 0 &&
         ((iVar2 = BIO_printf(param_1,"%*spriv:\n",(ulong)param_3,&_LC7), iVar2 < 1 ||
          (iVar2 = ASN1_buf_print(param_1,local_50,lVar7,param_3 + 4), iVar2 == 0)))))) ||
       ((lVar5 != 0 &&
        ((iVar2 = BIO_printf(param_1,"%*spub:\n",(ulong)param_3,&_LC7), iVar2 < 1 ||
         (iVar2 = ASN1_buf_print(param_1,local_48,lVar5,param_3 + 4), iVar2 == 0))))))
    goto LAB_001012fb;
    uVar8 = 1;
    iVar2 = ECPKParameters_print(param_1,x,param_3);
    if (iVar2 == 0) goto LAB_001012fb;
  }
  else {
    pVar1 = EC_KEY_get_conv_form(key);
    lVar5 = EC_KEY_key2buf(key,pVar1,&local_48,0);
    if (lVar5 != 0) {
      pBVar6 = EC_KEY_get0_private_key(key);
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_001012ec;
LAB_00101212:
      lVar7 = EC_KEY_priv2buf(key,&local_50);
      if (lVar7 != 0) goto LAB_0010122b;
    }
    lVar7 = 0;
LAB_001012fb:
    ERR_new();
    uVar8 = 0;
    ERR_set_debug("crypto/ec/ec_ameth.c",0x154,"do_EC_KEY_print");
    ERR_set_error(0x10,0x80010,0);
  }
  CRYPTO_clear_free(local_50,lVar7,"crypto/ec/ec_ameth.c",0x155);
  CRYPTO_free(local_48);
LAB_00101357:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



int EC_KEY_print(BIO *bp,EC_KEY *key,int off)

{
  point_conversion_form_t pVar1;
  int iVar2;
  uint uVar3;
  BIGNUM *pBVar4;
  EC_GROUP *x;
  EC_POINT *pEVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  char *local_68;
  long local_60;
  undefined8 local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar4 = EC_KEY_get0_private_key(key);
  local_50 = 0;
  local_48 = (void *)0x0;
  if ((key == (EC_KEY *)0x0) || (x = EC_KEY_get0_group(key), x == (EC_GROUP *)0x0)) {
    ERR_new();
    iVar7 = 0;
    ERR_set_debug("crypto/ec/ec_ameth.c",0x124,"do_EC_KEY_print");
    ERR_set_error(0x10,0xc0102,0);
    goto LAB_001015cc;
  }
  pEVar5 = EC_KEY_get0_public_key(key);
  if (pEVar5 == (EC_POINT *)0x0) {
    local_60 = 0;
LAB_001014ad:
    lVar6 = 0;
    local_68 = "Public-Key";
    if (pBVar4 != (BIGNUM *)0x0) {
      pBVar4 = EC_KEY_get0_private_key(key);
      if ((pBVar4 != (BIGNUM *)0x0) && (lVar6 = EC_KEY_priv2buf(key,&local_50), lVar6 == 0))
      goto LAB_00101680;
      local_68 = "Private-Key";
    }
    iVar2 = BIO_indent(bp,off,0x80);
    if (iVar2 == 0) goto LAB_00101570;
    uVar3 = EC_GROUP_order_bits(x);
    iVar2 = BIO_printf(bp,"%s: (%d bit)\n",local_68,(ulong)uVar3);
    if (((iVar2 < 1) ||
        ((lVar6 != 0 &&
         ((iVar2 = BIO_printf(bp,"%*spriv:\n",(ulong)(uint)off,&_LC7), iVar2 < 1 ||
          (iVar2 = ASN1_buf_print(bp,local_50,lVar6,off + 4), iVar2 == 0)))))) ||
       ((local_60 != 0 &&
        ((iVar2 = BIO_printf(bp,"%*spub:\n",(ulong)(uint)off,&_LC7), iVar2 < 1 ||
         (iVar2 = ASN1_buf_print(bp,local_48,local_60,off + 4), iVar2 == 0)))))) goto LAB_00101570;
    iVar7 = 1;
    iVar2 = ECPKParameters_print(bp,x,off);
    if (iVar2 == 0) goto LAB_00101570;
  }
  else {
    pVar1 = EC_KEY_get_conv_form(key);
    local_60 = EC_KEY_key2buf(key,pVar1,&local_48,0);
    if (local_60 != 0) goto LAB_001014ad;
LAB_00101680:
    lVar6 = 0;
LAB_00101570:
    ERR_new();
    iVar7 = 0;
    ERR_set_debug("crypto/ec/ec_ameth.c",0x154,"do_EC_KEY_print");
    ERR_set_error(0x10,0x80010,0);
  }
  CRYPTO_clear_free(local_50,lVar6,"crypto/ec/ec_ameth.c",0x155);
  CRYPTO_free(local_48);
LAB_001015cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



int ECParameters_print(BIO *bp,EC_KEY *key)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *x;
  
  if (key == (EC_KEY *)0x0) {
LAB_001017d8:
    ERR_new();
    ERR_set_debug("crypto/ec/ec_ameth.c",0x124,"do_EC_KEY_print");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  x = EC_KEY_get0_group(key);
  if (x == (EC_GROUP *)0x0) goto LAB_001017d8;
  iVar1 = BIO_indent(bp,4,0x80);
  if (iVar1 != 0) {
    uVar2 = EC_GROUP_order_bits(x);
    iVar1 = BIO_printf(bp,"%s: (%d bit)\n","ECDSA-Parameters",(ulong)uVar2);
    if (0 < iVar1) {
      iVar1 = ECPKParameters_print(bp,x,4);
      if (iVar1 != 0) {
        iVar1 = 1;
        goto LAB_00101755;
      }
    }
  }
  ERR_new();
  iVar1 = 0;
  ERR_set_debug("crypto/ec/ec_ameth.c",0x154,"do_EC_KEY_print");
  ERR_set_error(0x10,0x80010,0);
LAB_00101755:
  CRYPTO_clear_free(0,0,"crypto/ec/ec_ameth.c",0x155);
  CRYPTO_free((void *)0x0);
  return iVar1;
}


