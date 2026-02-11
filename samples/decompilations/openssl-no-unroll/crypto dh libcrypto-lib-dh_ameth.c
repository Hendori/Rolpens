
bool dh_missing_parameters(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  bVar2 = true;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    bVar2 = *(long *)(lVar1 + 0x18) == 0;
  }
  return bVar2;
}



undefined8 dhx_pkey_ctrl(void)

{
  return 0xfffffffe;
}



undefined8 dh_pkey_dirty_cnt(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
}



void int_dh_free(long param_1)

{
  DH_free(*(DH **)(param_1 + 0x20));
  return;
}



undefined8 dh_copy_parameters(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  DH *pDVar4;
  
  pDVar4 = *(DH **)(param_1 + 0x20);
  if (pDVar4 == (DH *)0x0) {
    pDVar4 = DH_new();
    *(DH **)(param_1 + 0x20) = pDVar4;
    if (pDVar4 == (DH *)0x0) {
      return 0;
    }
  }
  puVar1 = *(undefined **)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  iVar3 = ossl_ffc_params_copy(&pDVar4->p,lVar2 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  if (puVar1 != _GLOBAL_OFFSET_TABLE_) {
    pDVar4->references = *(int *)(lVar2 + 0x68);
  }
  pDVar4[1].method_mont_p = (BN_MONT_CTX *)((long)&(pDVar4[1].method_mont_p)->ri + 1);
  return 1;
}



void dh_bits(long param_1)

{
  DH_bits(*(undefined8 *)(param_1 + 0x20));
  return;
}



undefined8 dh_private_print(BIO *param_1,long param_2,int param_3)

{
  long lVar1;
  BIGNUM *num;
  BIGNUM *num_00;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_2 + 0x20);
  num = *(BIGNUM **)(lVar1 + 0x78);
  num_00 = *(BIGNUM **)(lVar1 + 0x70);
  if ((*(long *)(lVar1 + 8) == 0 || num == (BIGNUM *)0x0) || (num_00 == (BIGNUM *)0x0)) {
    uVar3 = 0xc0102;
  }
  else {
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 != 0) {
      DH_bits(lVar1);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","DH Private-Key");
      if (0 < iVar2) {
        param_3 = param_3 + 4;
        iVar2 = ASN1_bn_print(param_1,"private-key:",num,(uchar *)0x0,param_3);
        if ((((iVar2 != 0) &&
             (iVar2 = ASN1_bn_print(param_1,"public-key:",num_00,(uchar *)0x0,param_3), iVar2 != 0))
            && (iVar2 = ossl_ffc_params_print(param_1,lVar1 + 8,param_3), iVar2 != 0)) &&
           ((*(int *)(lVar1 + 0x68) == 0 ||
            ((iVar2 = BIO_indent(param_1,param_3,0x80), iVar2 != 0 &&
             (iVar2 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                                 (ulong)*(uint *)(lVar1 + 0x68)), 0 < iVar2)))))) {
          return 1;
        }
      }
    }
    uVar3 = 0x80007;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_ameth.c",0x128,"do_dh_print");
  ERR_set_error(5,uVar3,0);
  return 0;
}



int dh_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  DH *dh;
  
  dh = *(DH **)(param_2 + 8);
  if (dh != (DH *)0x0) {
    dh = (DH *)ossl_dh_dup(dh,0x87);
    if (dh == (DH *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,*param_2,dh);
  if (iVar1 != 0) {
    return iVar1;
  }
  DH_free(dh);
  return 0;
}



undefined8 dhx_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  DH *dh;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  dh = (DH *)ossl_dh_new_ex(*(undefined8 *)(param_2 + 8));
  if (dh == (DH *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_ameth.c",0x205,"dh_pkey_import_from_type");
    ERR_set_error(5,0x80005,0);
  }
  else {
    DH_clear_flags(dh,0xf000);
    DH_set_flags(dh,0x1000);
    iVar1 = ossl_dh_params_fromdata(dh,param_1);
    if (iVar1 != 0) {
      iVar1 = ossl_dh_key_fromdata(dh,param_1,1);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,0x398,dh);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    DH_free(dh);
  }
  return 0;
}



undefined4 dh_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = DH_get0_p(uVar1);
  lVar5 = DH_get0_g(uVar1);
  lVar6 = DH_get0_q(uVar1);
  lVar7 = DH_get_length(uVar1);
  lVar8 = DH_get0_pub_key(uVar1);
  lVar9 = DH_get0_priv_key(uVar1);
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar10 = OSSL_PARAM_BLD_new(), lVar10 == 0)) {
    return 0;
  }
  iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&_LC6,lVar4);
  if (((iVar2 != 0) && (iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&_LC7,lVar5), iVar2 != 0)) &&
     ((lVar6 == 0 || (iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&_LC8,lVar6), iVar2 != 0)))) {
    if (lVar7 < 1) {
      uVar3 = 5;
      uVar13 = 7;
      uVar12 = 6;
      uVar11 = 4;
    }
    else {
      iVar2 = OSSL_PARAM_BLD_push_long(lVar10,"priv_len",lVar7);
      if (iVar2 == 0) goto LAB_00100441;
      uVar3 = 0x85;
      uVar13 = 0x87;
      uVar12 = 0x86;
      uVar11 = 0x84;
    }
    if (((lVar8 == 0) ||
        (iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&_LC10,lVar8), uVar3 = uVar13, uVar11 = uVar12,
        iVar2 != 0)) &&
       (((lVar9 == 0 ||
         (iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&_LC11,lVar9), uVar11 = uVar3, iVar2 != 0)) &&
        (lVar4 = OSSL_PARAM_BLD_to_param(lVar10), lVar4 != 0)))) {
      uVar3 = (*param_3)(param_2,uVar11,lVar4);
      OSSL_PARAM_free(lVar4);
      goto LAB_00100443;
    }
  }
LAB_00100441:
  uVar3 = 0;
LAB_00100443:
  OSSL_PARAM_BLD_free(lVar10);
  return uVar3;
}



void dh_pkey_param_check(long param_1)

{
  DH_check_ex(*(undefined8 *)(param_1 + 0x20));
  return;
}



undefined8 dh_pkey_ctrl(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 == 9) {
    if ((*param_1 != 0) && (*(long *)(param_1 + 0x18) == 0)) {
      lVar1 = evp_pkey_get0_DH_int();
      if (lVar1 != 0) {
        uVar2 = ossl_dh_buf2key(lVar1,param_4,param_3);
        return uVar2;
      }
    }
  }
  else {
    if (param_2 != 10) {
      return 0xfffffffe;
    }
    lVar1 = EVP_PKEY_get0_DH();
    if (lVar1 != 0) {
      uVar2 = ossl_dh_key2buf(lVar1,param_4,0,1);
      return uVar2;
    }
  }
  return 0;
}



void dh_cmp_parameters(long param_1,long param_2)

{
  ossl_ffc_params_cmp(*(long *)(param_1 + 0x20) + 8,*(long *)(param_2 + 0x20) + 8,
                      *(undefined1 **)(param_1 + 8) != ossl_dhx_asn1_meth);
  return;
}



void dh_security_bits(long param_1)

{
  DH_security_bits(*(undefined8 *)(param_1 + 0x20));
  return;
}



void int_dh_size(long param_1)

{
  DH_size(*(DH **)(param_1 + 0x20));
  return;
}



bool dh_priv_decode(EVP_PKEY *param_1,undefined8 param_2)

{
  void *key;
  
  key = (void *)ossl_dh_key_from_pkcs8(param_2,0,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}



ulong dh_pub_cmp(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_ffc_params_cmp(*(long *)(param_1 + 0x20) + 8,*(long *)(param_2 + 0x20) + 8,
                              *(undefined1 **)(param_1 + 8) != ossl_dhx_asn1_meth);
  if ((int)uVar2 != 0) {
    iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x70),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x70));
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}



undefined8 dh_pkey_public_check(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x70) != 0) {
    uVar1 = DH_check_pub_key_ex();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_ameth.c",0x1b1,"dh_pkey_public_check");
  ERR_set_error(5,0x7d,0);
  return 0;
}



undefined8 dh_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  long lVar1;
  uchar *penc;
  int iVar2;
  int iVar3;
  ASN1_STRING *a;
  ASN1_INTEGER *a_00;
  ASN1_OBJECT *aobj;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  a = ASN1_STRING_new();
  if (a == (ASN1_STRING *)0x0) {
    ERR_new();
    uVar4 = 0xbb;
LAB_00100891:
    ERR_set_debug("crypto/dh/dh_ameth.c",uVar4,"dh_priv_encode");
    ERR_set_error(5,0x8000d,0);
  }
  else {
    if (*(undefined1 **)(param_2 + 8) == ossl_dhx_asn1_meth) {
      iVar2 = i2d_DHxparams();
    }
    else {
      iVar2 = i2d_DHparams(*(DH **)(param_2 + 0x20),&a->data);
    }
    a->length = iVar2;
    if (iVar2 < 1) {
      ERR_new();
      uVar4 = 0xc1;
      goto LAB_00100891;
    }
    lVar1 = *(long *)(param_2 + 0x20);
    a->type = 0x10;
    a_00 = BN_to_ASN1_INTEGER(*(BIGNUM **)(lVar1 + 0x78),(ASN1_INTEGER *)0x0);
    if (a_00 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      uVar4 = 0xca;
LAB_001008d1:
      ERR_set_debug("crypto/dh/dh_ameth.c",uVar4,"dh_priv_encode");
      ERR_set_error(5,0x6a,0);
    }
    else {
      iVar2 = i2d_ASN1_INTEGER(a_00,&local_38);
      ASN1_STRING_clear_free(a_00);
      penc = local_38;
      if (iVar2 < 1) {
        ERR_new();
        uVar4 = 0xd3;
        goto LAB_001008d1;
      }
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar3 = PKCS8_pkey_set0(param_1,aobj,0,0x10,a,penc,iVar2);
      uVar4 = 1;
      if (iVar3 != 0) goto LAB_00100856;
      CRYPTO_clear_free(local_38,(long)iVar2,"crypto/dh/dh_ameth.c",0xd9);
    }
  }
  ASN1_STRING_free(a);
  uVar4 = 0;
LAB_00100856:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dh_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  DH *dh;
  ASN1_INTEGER *ai;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  uchar *local_40;
  uchar *local_38;
  int *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_40,&local_48,&local_28,param_2);
  if (iVar1 != 0) {
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,&local_30,local_28);
    if (local_44 == 0x10) {
      local_38 = *(uchar **)(local_30 + 2);
      if (*(undefined1 **)&param_1->references == ossl_dhx_asn1_meth) {
        dh = (DH *)d2i_DHxparams();
      }
      else {
        dh = d2i_DHparams((DH **)0x0,&local_38,(long)*local_30);
      }
      if (dh == (DH *)0x0) {
        ERR_new();
        ai = (ASN1_INTEGER *)0x0;
        ERR_set_debug("crypto/dh/dh_ameth.c",0x56,"dh_pub_decode");
        ERR_set_error(5,0x68,0);
      }
      else {
        ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_40,(long)local_48);
        if (ai == (ASN1_INTEGER *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/dh/dh_ameth.c",0x5b,"dh_pub_decode");
          ERR_set_error(5,0x68,0);
        }
        else {
          pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
          (dh->ex_data).sk = (stack_st_void *)pBVar2;
          if (pBVar2 != (BIGNUM *)0x0) {
            ASN1_INTEGER_free(ai);
            EVP_PKEY_assign(param_1,**(int **)&param_1->references,dh);
            uVar3 = 1;
            goto LAB_0010099f;
          }
          ERR_new();
          ERR_set_debug("crypto/dh/dh_ameth.c",0x61,"dh_pub_decode");
          ERR_set_error(5,0x6d,0);
        }
      }
    }
    else {
      ERR_new();
      dh = (DH *)0x0;
      ai = (ASN1_INTEGER *)0x0;
      ERR_set_debug("crypto/dh/dh_ameth.c",0x4d,"dh_pub_decode");
      ERR_set_error(5,0x69,0);
    }
    ASN1_INTEGER_free(ai);
    DH_free(dh);
  }
  uVar3 = 0;
LAB_0010099f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dh_param_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  int *piVar1;
  DH *key;
  
  if (*(undefined1 **)&param_1->references == ossl_dhx_asn1_meth) {
    key = (DH *)d2i_DHxparams();
  }
  else {
    key = d2i_DHparams((DH **)0x0,param_2,(long)param_3);
  }
  if (key != (DH *)0x0) {
    piVar1 = *(int **)&param_1->references;
    key[1].method_mont_p = (BN_MONT_CTX *)((long)&(key[1].method_mont_p)->ri + 1);
    EVP_PKEY_assign(param_1,*piVar1,key);
  }
  return key != (DH *)0x0;
}



void dh_param_encode(long param_1,uchar **param_2)

{
  if (*(undefined1 **)(param_1 + 8) != ossl_dhx_asn1_meth) {
    i2d_DHparams(*(DH **)(param_1 + 0x20),param_2);
    return;
  }
  i2d_DHxparams();
  return;
}



undefined8 dh_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  DH *a;
  uchar *penc;
  int iVar1;
  ASN1_STRING *a_00;
  ASN1_INTEGER *a_01;
  ASN1_OBJECT *aobj;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  a = *(DH **)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  a_00 = ASN1_STRING_new();
  if (a_00 == (ASN1_STRING *)0x0) {
    ERR_new();
    uVar2 = 0x7c;
LAB_00100d49:
    ERR_set_debug("crypto/dh/dh_ameth.c",uVar2,"dh_pub_encode");
    ERR_set_error(5,0x8000d,0);
  }
  else {
    if (*(undefined1 **)(param_2 + 8) == ossl_dhx_asn1_meth) {
      iVar1 = i2d_DHxparams();
    }
    else {
      iVar1 = i2d_DHparams(a,&a_00->data);
    }
    a_00->length = iVar1;
    if (iVar1 < 1) {
      ERR_new();
      uVar2 = 0x81;
      goto LAB_00100d49;
    }
    a_01 = BN_to_ASN1_INTEGER((BIGNUM *)(a->ex_data).sk,(ASN1_INTEGER *)0x0);
    if (a_01 != (ASN1_INTEGER *)0x0) {
      iVar1 = i2d_ASN1_INTEGER(a_01,&local_38);
      ASN1_INTEGER_free(a_01);
      penc = local_38;
      if (iVar1 < 1) {
        ERR_new();
        uVar2 = 0x8f;
        goto LAB_00100d49;
      }
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,0x10,a_00,penc,iVar1);
      uVar2 = 1;
      if (iVar1 != 0) goto LAB_00100d11;
    }
  }
  CRYPTO_free(local_38);
  ASN1_STRING_free(a_00);
  uVar2 = 0;
LAB_00100d11:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 dh_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  DH *dh;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  dh = (DH *)ossl_dh_new_ex(*(undefined8 *)(param_2 + 8));
  if (dh == (DH *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/dh/dh_ameth.c",0x205,"dh_pkey_import_from_type");
    ERR_set_error(5,0x80005,0);
  }
  else {
    DH_clear_flags(dh,0xf000);
    DH_set_flags(dh,0);
    iVar1 = ossl_dh_params_fromdata(dh,param_1);
    if (iVar1 != 0) {
      iVar1 = ossl_dh_key_fromdata(dh,param_1,1);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,0x1c,dh);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    DH_free(dh);
  }
  return 0;
}



undefined8 dh_public_print(BIO *param_1,long param_2,int param_3)

{
  long lVar1;
  BIGNUM *num;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_2 + 0x20);
  num = *(BIGNUM **)(lVar1 + 0x70);
  if ((*(long *)(lVar1 + 8) == 0) || (num == (BIGNUM *)0x0)) {
    uVar3 = 0xc0102;
  }
  else {
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 != 0) {
      DH_bits(lVar1);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","DH Public-Key");
      if (0 < iVar2) {
        param_3 = param_3 + 4;
        iVar2 = ASN1_bn_print(param_1,"private-key:",(BIGNUM *)0x0,(uchar *)0x0,param_3);
        if ((((iVar2 != 0) &&
             (iVar2 = ASN1_bn_print(param_1,"public-key:",num,(uchar *)0x0,param_3), iVar2 != 0)) &&
            (iVar2 = ossl_ffc_params_print(param_1,lVar1 + 8,param_3), iVar2 != 0)) &&
           ((*(int *)(lVar1 + 0x68) == 0 ||
            ((iVar2 = BIO_indent(param_1,param_3,0x80), iVar2 != 0 &&
             (iVar2 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                                 (ulong)*(uint *)(lVar1 + 0x68)), 0 < iVar2)))))) {
          return 1;
        }
      }
    }
    uVar3 = 0x80007;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_ameth.c",0x128,"do_dh_print");
  ERR_set_error(5,uVar3,0);
  return 0;
}



undefined8 dh_param_print(BIO *param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar1 + 8) == 0) {
    uVar3 = 0xc0102;
  }
  else {
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 != 0) {
      DH_bits(lVar1);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","DH Parameters");
      if (0 < iVar2) {
        param_3 = param_3 + 4;
        iVar2 = ASN1_bn_print(param_1,"private-key:",(BIGNUM *)0x0,(uchar *)0x0,param_3);
        if ((((iVar2 != 0) &&
             (iVar2 = ASN1_bn_print(param_1,"public-key:",(BIGNUM *)0x0,(uchar *)0x0,param_3),
             iVar2 != 0)) && (iVar2 = ossl_ffc_params_print(param_1,lVar1 + 8,param_3), iVar2 != 0))
           && ((*(int *)(lVar1 + 0x68) == 0 ||
               ((iVar2 = BIO_indent(param_1,param_3,0x80), iVar2 != 0 &&
                (iVar2 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                                    (ulong)*(uint *)(lVar1 + 0x68)), 0 < iVar2)))))) {
          return 1;
        }
      }
    }
    uVar3 = 0x80007;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_ameth.c",0x128,"do_dh_print");
  ERR_set_error(5,uVar3,0);
  return 0;
}



DH * DHparams_dup(DH *param_1)

{
  BIGNUM *pBVar1;
  int iVar2;
  DH *dh;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    pBVar1 = param_1->g;
    iVar2 = ossl_ffc_params_copy(&dh->p,&param_1->p);
    if (iVar2 != 0) {
      if (pBVar1 == (BIGNUM *)0x0) {
        dh->references = param_1->references;
      }
      dh[1].method_mont_p = (BN_MONT_CTX *)((long)&(dh[1].method_mont_p)->ri + 1);
      return dh;
    }
    DH_free(dh);
  }
  return (DH *)0x0;
}



int DHparams_print(BIO *bp,DH *x)

{
  int iVar1;
  undefined4 uVar2;
  
  if (x->p == (BIGNUM *)0x0) {
    uVar2 = 0xc0102;
  }
  else {
    iVar1 = BIO_indent(bp,4,0x80);
    if (iVar1 != 0) {
      DH_bits(x);
      iVar1 = BIO_printf(bp,"%s: (%d bit)\n","DH Parameters");
      if (((((0 < iVar1) &&
            (iVar1 = ASN1_bn_print(bp,"private-key:",(BIGNUM *)0x0,(uchar *)0x0,8), iVar1 != 0)) &&
           (iVar1 = ASN1_bn_print(bp,"public-key:",(BIGNUM *)0x0,(uchar *)0x0,8), iVar1 != 0)) &&
          (iVar1 = ossl_ffc_params_print(bp,&x->p,8), iVar1 != 0)) &&
         ((x->references == 0 ||
          ((iVar1 = BIO_indent(bp,8,0x80), iVar1 != 0 &&
           (iVar1 = BIO_printf(bp,"recommended-private-length: %d bits\n",(ulong)(uint)x->references
                              ), 0 < iVar1)))))) {
        return 1;
      }
    }
    uVar2 = 0x80007;
  }
  ERR_new();
  ERR_set_debug("crypto/dh/dh_ameth.c",0x128,"do_dh_print");
  ERR_set_error(5,uVar2,0);
  return 0;
}


