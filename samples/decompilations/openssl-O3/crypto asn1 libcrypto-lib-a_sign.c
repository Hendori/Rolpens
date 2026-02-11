
int ASN1_sign(undefined1 *i2d,X509_ALGOR *algor1,X509_ALGOR *algor2,ASN1_BIT_STRING *signature,
             char *data,EVP_PKEY *pkey,EVP_MD *type)

{
  bool bVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  ASN1_TYPE *pAVar3;
  ASN1_OBJECT *pAVar4;
  void *d;
  uchar *md;
  long in_FS_OFFSET;
  size_t local_78;
  long local_68;
  uint local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  local_4c = 0;
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_sign.c",0x26,"ASN1_sign");
    ERR_set_error(0xd,0x80006,0);
LAB_0010025b:
    local_68 = 0;
    md = (uchar *)0x0;
    d = (void *)0x0;
    local_78 = 0;
LAB_001001ca:
    EVP_MD_CTX_free(ctx);
    CRYPTO_clear_free(d,local_78,"crypto/asn1/a_sign.c",0x6b);
    CRYPTO_clear_free(md,local_68,"crypto/asn1/a_sign.c",0x6c);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_4c;
  }
  if (algor1 == (X509_ALGOR *)0x0) goto LAB_00100080;
  bVar1 = false;
  pAVar3 = algor1->parameter;
  if (type->pkey_type != 0x71) goto LAB_00100099;
  do {
    ASN1_TYPE_free(pAVar3);
    algor1->parameter = (ASN1_TYPE *)0x0;
LAB_001000c0:
    ASN1_OBJECT_free(algor1->algorithm);
    pAVar4 = OBJ_nid2obj(type->pkey_type);
    algor1->algorithm = pAVar4;
    if (pAVar4 == (ASN1_OBJECT *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_sign.c",0x41,"ASN1_sign");
      ERR_set_error(0xd,0xa2,0);
      goto LAB_0010025b;
    }
    if (pAVar4->length == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_sign.c",0x45,"ASN1_sign");
      ERR_set_error(0xd,0x9a,0);
      goto LAB_0010025b;
    }
    if (bVar1) {
LAB_001000ee:
      iVar2 = (*(code *)i2d)(data,0);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_sign.c",0x4c,"ASN1_sign");
        ERR_set_error(0xd,0xc0103,0);
        goto LAB_0010025b;
      }
      local_78 = (size_t)iVar2;
      d = CRYPTO_malloc(iVar2,"crypto/asn1/a_sign.c",0x50);
      local_4c = EVP_PKEY_get_size(pkey);
      local_68 = (long)(int)local_4c;
      md = (uchar *)CRYPTO_malloc(local_4c,"crypto/asn1/a_sign.c",0x52);
      if ((d == (void *)0x0) || (md == (uchar *)0x0)) {
        local_4c = 0;
      }
      else {
        local_48 = d;
        (*(code *)i2d)(data,&local_48);
        iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,d,local_78), iVar2 == 0)) ||
           (iVar2 = EVP_SignFinal(ctx,md,&local_4c,pkey), iVar2 == 0)) {
          local_4c = 0;
          ERR_new();
          ERR_set_debug("crypto/asn1/a_sign.c",0x5f,"ASN1_sign");
          ERR_set_error(0xd,0x80006,0);
        }
        else {
          ASN1_STRING_set0(signature,md,local_4c);
          ossl_asn1_string_set_bits_left(signature,0);
          md = (uchar *)0x0;
        }
      }
      goto LAB_001001ca;
    }
LAB_00100080:
    bVar1 = true;
    if (algor2 == (X509_ALGOR *)0x0) goto LAB_001000ee;
    pAVar3 = algor2->parameter;
    algor1 = algor2;
  } while (type->pkey_type == 0x71);
LAB_00100099:
  if ((pAVar3 == (ASN1_TYPE *)0x0) || (pAVar3->type != 5)) {
    ASN1_TYPE_free(pAVar3);
    pAVar3 = ASN1_TYPE_new();
    algor1->parameter = pAVar3;
    if (pAVar3 == (ASN1_TYPE *)0x0) goto LAB_0010025b;
    pAVar3->type = 5;
  }
  goto LAB_001000c0;
}



int ASN1_item_sign_ctx(ASN1_ITEM *it,X509_ALGOR *algor1,X509_ALGOR *algor2,
                      ASN1_BIT_STRING *signature,void *asn,EVP_MD_CTX *ctx)

{
  code *pcVar1;
  int iVar2;
  int dig_nid;
  long lVar3;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY *pEVar4;
  void *data;
  ASN1_OBJECT *pAVar5;
  uint *puVar6;
  X509_ALGOR *pXVar7;
  uint ptype;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  X509_ALGOR *local_148;
  X509_ALGOR *local_140;
  uchar *local_138;
  long local_130;
  long local_128;
  uchar *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  uchar local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (uchar *)0x0;
  local_130 = 0;
  local_128 = 0;
  local_148 = algor2;
  local_140 = algor1;
  lVar3 = EVP_MD_CTX_get0_md(ctx);
  ctx_00 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(ctx);
  pEVar4 = EVP_PKEY_CTX_get0_pkey(ctx_00);
  if (pEVar4 == (EVP_PKEY *)0x0) {
    ERR_new();
    uVar8 = 0xa2;
LAB_00100891:
    data = (void *)0x0;
    lVar3 = 0;
    ERR_set_debug("crypto/asn1/a_sign.c",uVar8,"ASN1_item_sign_ctx");
    ERR_set_error(0xd,0xd9,0);
    goto LAB_001004c8;
  }
  if (*(long *)&pEVar4->references == 0) {
    puVar6 = (uint *)EVP_MD_CTX_get_pkey_ctx(ctx);
    if ((puVar6 == (uint *)0x0) || ((*puVar6 & 0xc1f0) == 0)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_sign.c",0xae,"ASN1_item_sign_ctx");
      ERR_set_error(0xd,0xd9,0);
    }
    else {
      OSSL_PARAM_construct_octet_string(&local_178,"algorithm-id",local_c8,0x80);
      local_f8 = local_158;
      local_118 = local_178;
      uStack_110 = uStack_170;
      local_108 = local_168;
      uStack_100 = uStack_160;
      OSSL_PARAM_construct_end(&local_178);
      local_f0 = local_178;
      uStack_e8 = uStack_170;
      local_d0 = local_158;
      local_e0 = local_168;
      uStack_d8 = uStack_160;
      iVar2 = EVP_PKEY_CTX_get_params(puVar6,&local_118);
      lVar3 = local_f8;
      if (0 < iVar2) {
        if (local_f8 == 0) {
          ERR_new();
          ERR_set_debug("crypto/asn1/a_sign.c",0xbb,"ASN1_item_sign_ctx");
          ERR_set_error(0xd,0xc6,0);
        }
        else {
          if ((local_140 == (X509_ALGOR *)0x0) ||
             (local_120 = local_c8, pXVar7 = d2i_X509_ALGOR(&local_140,&local_120,local_f8),
             pXVar7 != (X509_ALGOR *)0x0)) {
            if ((local_148 == (X509_ALGOR *)0x0) ||
               (local_120 = local_c8, pXVar7 = d2i_X509_ALGOR(&local_148,&local_120,lVar3),
               pXVar7 != (X509_ALGOR *)0x0)) goto LAB_00100529;
            ERR_new();
            uVar8 = 0xcc;
          }
          else {
            ERR_new();
            uVar8 = 0xc3;
          }
          ERR_set_debug("crypto/asn1/a_sign.c",uVar8,"ASN1_item_sign_ctx");
          ERR_set_error(0xd,0xc0103,0);
        }
      }
    }
    lVar3 = 0;
    data = (void *)0x0;
    goto LAB_001004c8;
  }
  pcVar1 = *(code **)(*(long *)&pEVar4->references + 0xd0);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(ctx,it,asn,local_140,local_148,signature);
    if (iVar2 == 1) {
      local_130 = (long)signature->length;
      lVar3 = 0;
      data = (void *)0x0;
      goto LAB_001004c8;
    }
    if (iVar2 < 1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_sign.c",0xde,"ASN1_item_sign_ctx");
      uVar8 = 0x80006;
      goto LAB_0010048a;
    }
    if (iVar2 == 2) goto LAB_001005e0;
    goto LAB_00100529;
  }
LAB_001005e0:
  if (lVar3 == 0) {
    ERR_new();
    uVar8 = 0xe7;
    goto LAB_00100891;
  }
  iVar2 = EVP_PKEY_get_id(pEVar4);
  if (iVar2 != 0x494) {
    iVar2 = **(int **)&pEVar4->references;
  }
  dig_nid = EVP_MD_get_type(lVar3);
  iVar2 = OBJ_find_sigid_by_algs((int *)&local_120,dig_nid,iVar2);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_sign.c",0xf2,"ASN1_item_sign_ctx");
    uVar8 = 0xc6;
  }
  else {
    ptype = -(uint)((*(ulong *)(*(long *)&pEVar4->references + 8) & 4) == 0) | 5;
    if (local_140 != (X509_ALGOR *)0x0) {
      pAVar5 = OBJ_nid2obj((int)local_120);
      iVar2 = X509_ALGOR_set0(local_140,pAVar5,ptype,(void *)0x0);
      if (iVar2 != 0) goto LAB_0010065b;
LAB_00100689:
      lVar3 = 0;
      data = (void *)0x0;
      goto LAB_001004c8;
    }
LAB_0010065b:
    if (local_148 != (X509_ALGOR *)0x0) {
      pAVar5 = OBJ_nid2obj((int)local_120);
      iVar2 = X509_ALGOR_set0(local_148,pAVar5,ptype,(void *)0x0);
      if (iVar2 == 0) goto LAB_00100689;
    }
LAB_00100529:
    iVar2 = ASN1_item_i2d((ASN1_VALUE *)asn,&local_138,it);
    if (0 < iVar2) {
      lVar3 = (long)iVar2;
      iVar2 = EVP_DigestSign(ctx,0,&local_128,local_138,lVar3);
      if (iVar2 == 0) {
        data = (void *)0x0;
        local_130 = 0;
        ERR_new();
        ERR_set_debug("crypto/asn1/a_sign.c",0x109,"ASN1_item_sign_ctx");
        ERR_set_error(0xd,0x80006,0);
      }
      else {
        local_130 = local_128;
        data = CRYPTO_malloc((int)local_128,"crypto/asn1/a_sign.c",0x10d);
        if ((data == (void *)0x0) || (local_138 == (uchar *)0x0)) {
          local_130 = 0;
        }
        else {
          iVar2 = EVP_DigestSign(ctx,data,&local_130,local_138,lVar3);
          if (iVar2 == 0) {
            local_130 = 0;
            ERR_new();
            ERR_set_debug("crypto/asn1/a_sign.c",0x115,"ASN1_item_sign_ctx");
            ERR_set_error(0xd,0x80006,0);
          }
          else {
            ASN1_STRING_set0(signature,data,(int)local_130);
            ossl_asn1_string_set_bits_left(signature,0);
            data = (void *)0x0;
          }
        }
      }
      goto LAB_001004c8;
    }
    local_130 = 0;
    ERR_new();
    ERR_set_debug("crypto/asn1/a_sign.c",0x103,"ASN1_item_sign_ctx");
    uVar8 = 0xc0103;
  }
LAB_0010048a:
  lVar3 = 0;
  ERR_set_error(0xd,uVar8,0);
  data = (void *)0x0;
LAB_001004c8:
  CRYPTO_clear_free(local_138,lVar3,"crypto/asn1/a_sign.c",0x120);
  CRYPTO_clear_free(data,local_128,"crypto/asn1/a_sign.c",0x121);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)local_130;
}



int ASN1_item_sign_ex(ASN1_ITEM *param_1,X509_ALGOR *param_2,X509_ALGOR *param_3,
                     ASN1_BIT_STRING *param_4,void *param_5,undefined8 param_6,EVP_PKEY *param_7,
                     EVP_MD *param_8,undefined8 param_9)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  
  ctx = (EVP_MD_CTX *)evp_md_ctx_new_ex(param_7,param_6,param_9);
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/asn1/a_sign.c",0x84,"ASN1_item_sign_ex");
    ERR_set_error(0xd,0x80006,0);
  }
  else {
    iVar1 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,param_8,(ENGINE *)0x0,param_7);
    if (iVar1 != 0) {
      iVar1 = ASN1_item_sign_ctx(param_1,param_2,param_3,param_4,param_5,ctx);
    }
    ctx_00 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(ctx);
    EVP_PKEY_CTX_free(ctx_00);
    EVP_MD_CTX_free(ctx);
  }
  return iVar1;
}



int ASN1_item_sign(ASN1_ITEM *it,X509_ALGOR *algor1,X509_ALGOR *algor2,ASN1_BIT_STRING *signature,
                  void *data,EVP_PKEY *pkey,EVP_MD *type)

{
  int iVar1;
  
  iVar1 = ASN1_item_sign_ex();
  return iVar1;
}


