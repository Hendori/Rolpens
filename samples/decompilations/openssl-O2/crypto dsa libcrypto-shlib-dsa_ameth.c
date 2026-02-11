
bool dsa_missing_parameters(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  bVar2 = true;
  if (((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) && (*(long *)(lVar1 + 0x10) != 0)) {
    bVar2 = *(long *)(lVar1 + 0x18) == 0;
  }
  return bVar2;
}



undefined8 dsa_pkey_ctrl(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  if (param_2 == 3) {
    *param_4 = 0x2a0;
    return 1;
  }
  return 0xfffffffe;
}



undefined8 dsa_pkey_dirty_cnt(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
}



int dsa_pkey_copy(EVP_PKEY *param_1,long param_2)

{
  int iVar1;
  DSA *r;
  
  r = *(DSA **)(param_2 + 0x20);
  if (r != (DSA *)0x0) {
    r = (DSA *)ossl_dsa_dup(r,0x87);
    if (r == (DSA *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,0x74,r);
  if (iVar1 != 0) {
    return iVar1;
  }
  DSA_free(r);
  return 0;
}



void int_dsa_free(long param_1)

{
  DSA_free(*(DSA **)(param_1 + 0x20));
  return;
}



undefined8 dsa_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  DSA *r;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  r = (DSA *)ossl_dsa_new(*(undefined8 *)(param_2 + 8));
  if (r == (DSA *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_ameth.c",0x1e6,"dsa_pkey_import_from");
    ERR_set_error(10,0x8000a,0);
  }
  else {
    iVar1 = ossl_dsa_ffc_params_fromdata(r,param_1);
    if (iVar1 != 0) {
      iVar1 = ossl_dsa_key_fromdata(r,param_1,1);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,0x74,r);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    DSA_free(r);
  }
  return 0;
}



undefined4 dsa_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

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
  uint uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = DSA_get0_p(uVar1);
  lVar5 = DSA_get0_g(uVar1);
  lVar6 = DSA_get0_q(uVar1);
  lVar7 = DSA_get0_pub_key(uVar1);
  lVar8 = DSA_get0_priv_key(uVar1);
  if (((lVar4 == 0 || lVar6 == 0) || (lVar5 == 0)) || (lVar9 = OSSL_PARAM_BLD_new(), lVar9 == 0)) {
    return 0;
  }
  iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&_LC1,lVar4);
  if (((iVar2 != 0) && (iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&_LC2,lVar6), iVar2 != 0)) &&
     (iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&_LC3,lVar5), iVar2 != 0)) {
    if (lVar7 == 0) {
      uVar10 = 4;
    }
    else {
      uVar10 = 6;
      iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&_LC4,lVar7);
      if (iVar2 == 0) goto LAB_0010023e;
    }
    if (lVar8 != 0) {
      iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&_LC5,lVar8);
      if (iVar2 == 0) goto LAB_0010023e;
      uVar10 = uVar10 | 1;
    }
    lVar4 = OSSL_PARAM_BLD_to_param(lVar9);
    if (lVar4 != 0) {
      uVar3 = (*param_3)(param_2,uVar10,lVar4);
      OSSL_PARAM_free(lVar4);
      goto LAB_00100240;
    }
  }
LAB_0010023e:
  uVar3 = 0;
LAB_00100240:
  OSSL_PARAM_BLD_free(lVar9);
  return uVar3;
}



void old_dsa_priv_encode(long param_1,uchar **param_2)

{
  i2d_DSAPrivateKey(*(DSA **)(param_1 + 0x20),param_2);
  return;
}



uint dsa_sig_print(BIO *param_1,undefined8 param_2,ASN1_STRING *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  DSA_SIG *a;
  long in_FS_OFFSET;
  uchar *local_48;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (ASN1_STRING *)0x0) {
    iVar1 = BIO_puts(param_1,"\n");
    uVar2 = (uint)(0 < iVar1);
    goto LAB_001003b9;
  }
  local_48 = param_3->data;
  a = d2i_DSA_SIG((DSA_SIG **)0x0,&local_48,(long)param_3->length);
  if (a == (DSA_SIG *)0x0) {
    uVar2 = 0;
    iVar1 = BIO_puts(param_1,"\n");
    if (0 < iVar1) {
      uVar2 = X509_signature_dump(param_1,param_3,param_4);
    }
    goto LAB_001003b9;
  }
  DSA_SIG_get0(a,&local_40,&local_38);
  iVar1 = BIO_write(param_1,&_LC6,1);
  if (iVar1 == 1) {
    iVar1 = ASN1_bn_print(param_1,"r:   ",local_40,(uchar *)0x0,param_4);
    if (iVar1 == 0) goto LAB_001003ae;
    iVar1 = ASN1_bn_print(param_1,"s:   ",local_38,(uchar *)0x0,param_4);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
LAB_001003ae:
    uVar2 = 0;
  }
  DSA_SIG_free(a);
LAB_001003b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void dsa_bits(long param_1)

{
  DSA_bits(*(undefined8 *)(param_1 + 0x20));
  return;
}



bool do_dsa_print(BIO *param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  BIGNUM *num;
  ulong uVar3;
  BIGNUM *num_00;
  
  uVar3 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = DSA_bits(param_2);
    uVar3 = (ulong)uVar1;
  }
  if (param_4 == 2) {
    num = *(BIGNUM **)(param_2 + 0x70);
    num_00 = *(BIGNUM **)(param_2 + 0x68);
    if (num != (BIGNUM *)0x0) {
      iVar2 = BIO_indent(param_1,param_3,0x80);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","Private-Key");
      if (iVar2 < 1) {
        return false;
      }
      goto LAB_001004e9;
    }
  }
  else {
    num_00 = (BIGNUM *)0x0;
    if (param_4 == 1) {
      num_00 = *(BIGNUM **)(param_2 + 0x68);
    }
  }
  iVar2 = BIO_printf(param_1,"Public-Key: (%d bit)\n",uVar3);
  if (iVar2 < 1) {
    return false;
  }
  num = (BIGNUM *)0x0;
LAB_001004e9:
  iVar2 = ASN1_bn_print(param_1,"priv:",num,(uchar *)0x0,param_3);
  if ((iVar2 != 0) &&
     (iVar2 = ASN1_bn_print(param_1,"pub: ",num_00,(uchar *)0x0,param_3), iVar2 != 0)) {
    iVar2 = ossl_ffc_params_print(param_1,param_2 + 8,param_3);
    return iVar2 != 0;
  }
  return false;
}



void dsa_param_print(undefined8 param_1,long param_2,undefined8 param_3)

{
  do_dsa_print(param_1,*(undefined8 *)(param_2 + 0x20),param_3,0);
  return;
}



void dsa_priv_print(undefined8 param_1,long param_2,undefined8 param_3)

{
  do_dsa_print(param_1,*(undefined8 *)(param_2 + 0x20),param_3,2);
  return;
}



void dsa_pub_print(undefined8 param_1,long param_2,undefined8 param_3)

{
  do_dsa_print(param_1,*(undefined8 *)(param_2 + 0x20),param_3,1);
  return;
}



void dsa_cmp_parameters(long param_1,long param_2)

{
  ossl_ffc_params_cmp(*(long *)(param_1 + 0x20) + 8,*(long *)(param_2 + 0x20) + 8,1);
  return;
}



void dsa_param_encode(long param_1,uchar **param_2)

{
  i2d_DSAparams(*(DSA **)(param_1 + 0x20),param_2);
  return;
}



bool dsa_param_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  DSA *key;
  
  key = d2i_DSAparams((DSA **)0x0,param_2,(long)param_3);
  if (key != (DSA *)0x0) {
    key[1].priv_key = (BIGNUM *)((long)&(key[1].priv_key)->d + 1);
    EVP_PKEY_assign(param_1,0x74,key);
  }
  return key != (DSA *)0x0;
}



void dsa_security_bits(long param_1)

{
  DSA_security_bits(*(undefined8 *)(param_1 + 0x20));
  return;
}



void int_dsa_size(long param_1)

{
  DSA_size(*(DSA **)(param_1 + 0x20));
  return;
}



undefined8 dsa_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

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
  if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x70) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_ameth.c",0xab,"dsa_priv_encode");
    ERR_set_error(10,0x65,0);
LAB_001007e0:
    a = (ASN1_STRING *)0x0;
  }
  else {
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_ameth.c",0xb2,"dsa_priv_encode");
      ERR_set_error(10,0x8000d,0);
      goto LAB_001007e0;
    }
    iVar2 = i2d_DSAparams(*(DSA **)(param_2 + 0x20),&a->data);
    a->length = iVar2;
    if (iVar2 < 1) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_ameth.c",0xb8,"dsa_priv_encode");
      ERR_set_error(10,0x8000d,0);
    }
    else {
      lVar1 = *(long *)(param_2 + 0x20);
      a->type = 0x10;
      a_00 = BN_to_ASN1_INTEGER(*(BIGNUM **)(lVar1 + 0x70),(ASN1_INTEGER *)0x0);
      if (a_00 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        uVar4 = 0xc1;
      }
      else {
        iVar2 = i2d_ASN1_INTEGER(a_00,&local_38);
        ASN1_STRING_clear_free(a_00);
        penc = local_38;
        if (0 < iVar2) {
          aobj = OBJ_nid2obj(0x74);
          iVar3 = PKCS8_pkey_set0(param_1,aobj,0,0x10,a,penc,iVar2);
          uVar4 = 1;
          if (iVar3 != 0) goto LAB_00100790;
          CRYPTO_clear_free(local_38,(long)iVar2,"crypto/dsa/dsa_ameth.c",0xd0);
          goto LAB_001007e2;
        }
        ERR_new();
        uVar4 = 0xca;
      }
      ERR_set_debug("crypto/dsa/dsa_ameth.c",uVar4,"dsa_priv_encode");
      ERR_set_error(10,0x6d,0);
    }
  }
LAB_001007e2:
  ASN1_STRING_free(a);
  uVar4 = 0;
LAB_00100790:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



bool dsa_priv_decode(EVP_PKEY *param_1,undefined8 param_2)

{
  void *key;
  
  key = (void *)ossl_dsa_key_from_pkcs8(param_2,0,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,0x74,key);
  }
  return key != (void *)0x0;
}



bool dsa_pub_cmp(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x68),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x68));
  return iVar1 == 0;
}



undefined8 dsa_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  DSA *a;
  int iVar1;
  int iVar2;
  BIGNUM *a_00;
  ASN1_INTEGER *a_01;
  ASN1_OBJECT *aobj;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  a = *(DSA **)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  if (*(int *)(param_2 + 0x48) == 0) {
    a_00 = (BIGNUM *)0x0;
    iVar2 = -1;
LAB_001009ee:
    a_01 = BN_to_ASN1_INTEGER((BIGNUM *)(a->ex_data).sk,(ASN1_INTEGER *)0x0);
    if (a_01 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      uVar3 = 0x77;
      goto LAB_00100ac1;
    }
    iVar1 = i2d_ASN1_INTEGER(a_01,&local_38);
    ASN1_INTEGER_free(a_01);
    if (iVar1 < 1) {
      ERR_new();
      uVar3 = 0x7f;
      goto LAB_00100ac1;
    }
    aobj = OBJ_nid2obj(0x74);
    if (aobj != (ASN1_OBJECT *)0x0) {
      iVar2 = X509_PUBKEY_set0_param(param_1,aobj,iVar2,a_00,local_38,iVar1);
      uVar3 = 1;
      if (iVar2 != 0) goto LAB_00100a78;
    }
  }
  else {
    a_00 = (BIGNUM *)a->version;
    if (((a_00 == (BIGNUM *)0x0) || (a_00 = *(BIGNUM **)&a->write_params, a_00 == (BIGNUM *)0x0)) ||
       (a_00 = a->p, a_00 == (BIGNUM *)0x0)) {
      iVar2 = -1;
      goto LAB_001009ee;
    }
    a_00 = (BIGNUM *)ASN1_STRING_new();
    if (a_00 == (BIGNUM *)0x0) {
      ERR_new();
      uVar3 = 0x68;
    }
    else {
      iVar2 = 0x10;
      iVar1 = i2d_DSAparams(a,(uchar **)&a_00->top);
      *(int *)&a_00->d = iVar1;
      if (0 < iVar1) goto LAB_001009ee;
      ERR_new();
      uVar3 = 0x6d;
    }
LAB_00100ac1:
    ERR_set_debug("crypto/dsa/dsa_ameth.c",uVar3,"dsa_pub_encode");
    ERR_set_error(10,0x8000d,0);
  }
  CRYPTO_free(local_38);
  ASN1_STRING_free((ASN1_STRING *)a_00);
  uVar3 = 0;
LAB_00100a78:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 dsa_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  DSA *r;
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
      r = d2i_DSAparams((DSA **)0x0,&local_38,(long)*local_30);
      if (r == (DSA *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/dsa/dsa_ameth.c",0x33,"dsa_pub_decode");
        ERR_set_error(10,0x68,0);
        goto LAB_00100bdd;
      }
LAB_00100c11:
      ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_40,(long)local_48);
      if (ai == (ASN1_INTEGER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/dsa/dsa_ameth.c",0x42,"dsa_pub_decode");
        ERR_set_error(10,0x68,0);
      }
      else {
        pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
        (r->ex_data).sk = (stack_st_void *)pBVar2;
        if (pBVar2 != (BIGNUM *)0x0) {
          r[1].priv_key = (BIGNUM *)((long)&(r[1].priv_key)->d + 1);
          ASN1_INTEGER_free(ai);
          EVP_PKEY_assign(param_1,0x74,r);
          uVar3 = 1;
          goto LAB_00100b5f;
        }
        ERR_new();
        ERR_set_debug("crypto/dsa/dsa_ameth.c",0x47,"dsa_pub_decode");
        ERR_set_error(10,0x6c,0);
      }
    }
    else if ((local_44 == 5) || (local_44 == -1)) {
      r = DSA_new();
      if (r != (DSA *)0x0) goto LAB_00100c11;
      ERR_new();
      ai = (ASN1_INTEGER *)0x0;
      ERR_set_debug("crypto/dsa/dsa_ameth.c",0x39,"dsa_pub_decode");
      ERR_set_error(10,0x8000a,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_ameth.c",0x3d,"dsa_pub_decode");
      ERR_set_error(10,0x69,0);
LAB_00100bdd:
      r = (DSA *)0x0;
      ai = (ASN1_INTEGER *)0x0;
    }
    ASN1_INTEGER_free(ai);
    DSA_free(r);
  }
  uVar3 = 0;
LAB_00100b5f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 old_dsa_priv_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  DSA *key;
  
  key = d2i_DSAPrivateKey((DSA **)0x0,param_2,(long)param_3);
  if (key != (DSA *)0x0) {
    key[1].priv_key = (BIGNUM *)((long)&(key[1].priv_key)->d + 1);
    EVP_PKEY_assign(param_1,0x74,key);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_ameth.c",0x16a,"old_dsa_priv_decode");
  ERR_set_error(10,0x8000a,0);
  return 0;
}



undefined8 dsa_copy_parameters(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  DSA *pDVar3;
  
  pDVar3 = *(DSA **)(param_1 + 0x20);
  if (pDVar3 == (DSA *)0x0) {
    pDVar3 = DSA_new();
    *(DSA **)(param_1 + 0x20) = pDVar3;
    if (pDVar3 == (DSA *)0x0) {
      return 0;
    }
  }
  iVar2 = ossl_ffc_params_copy(&pDVar3->version,*(long *)(param_2 + 0x20) + 8);
  if (iVar2 == 0) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0xc0);
  *plVar1 = *plVar1 + 1;
  return 1;
}


