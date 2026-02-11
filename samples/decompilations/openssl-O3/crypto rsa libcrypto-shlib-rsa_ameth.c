
long rsa_pkey_dirty_cnt(long param_1)

{
  return (long)*(int *)(*(long *)(param_1 + 0x20) + 0xd8);
}



int rsa_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  RSA *r;
  
  r = *(RSA **)(param_2 + 8);
  if (r != (RSA *)0x0) {
    r = (RSA *)ossl_rsa_dup(r,0x87);
    if (r == (RSA *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,*param_2,r);
  if (iVar1 != 0) {
    return iVar1;
  }
  RSA_free(r);
  return 0;
}



void int_rsa_free(long param_1)

{
  RSA_free(*(RSA **)(param_1 + 0x20));
  return;
}



void rsa_pkey_check(long param_1)

{
  RSA_check_key_ex(*(undefined8 *)(param_1 + 0x20),0);
  return;
}



void old_rsa_priv_encode(long param_1,uchar **param_2)

{
  i2d_RSAPrivateKey(*(RSA **)(param_1 + 0x20),param_2);
  return;
}



bool old_rsa_priv_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  RSA *key;
  
  key = d2i_RSAPrivateKey((RSA **)0x0,param_2,(long)param_3);
  if (key != (RSA *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (RSA *)0x0;
}



bool rsa_pss_param_print(BIO *param_1,int param_2,long *param_3,int param_4)

{
  int iVar1;
  X509_ALGOR *a;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = BIO_indent(param_1,param_4,0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (long *)0x0) {
        pcVar2 = "(INVALID PSS PARAMETERS)\n";
LAB_00100367:
        iVar1 = BIO_puts(param_1,pcVar2);
        return 0 < iVar1;
      }
      iVar1 = BIO_puts(param_1,"\n");
    }
    else {
      pcVar2 = "No PSS parameter restrictions\n";
      if (param_3 == (long *)0x0) goto LAB_00100367;
      iVar1 = BIO_puts(param_1,"PSS parameter restrictions:");
      if (iVar1 < 1) {
        return false;
      }
      param_4 = param_4 + 2;
      iVar1 = BIO_puts(param_1,"\n");
    }
    if (((0 < iVar1) && (iVar1 = BIO_indent(param_1,param_4,0x80), iVar1 != 0)) &&
       (iVar1 = BIO_puts(param_1,"Hash Algorithm: "), 0 < iVar1)) {
      if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
        iVar1 = BIO_puts(param_1,"sha1 (default)");
      }
      else {
        iVar1 = i2a_ASN1_OBJECT(param_1,*(ASN1_OBJECT **)*param_3);
      }
      if (((0 < iVar1) && (iVar1 = BIO_puts(param_1,"\n"), 0 < iVar1)) &&
         ((iVar1 = BIO_indent(param_1,param_4,0x80), iVar1 != 0 &&
          (iVar1 = BIO_puts(param_1,"Mask Algorithm: "), 0 < iVar1)))) {
        if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
          iVar1 = BIO_puts(param_1,"mgf1 with sha1 (default)");
          if (0 < iVar1) {
            a = (X509_ALGOR *)0x0;
            goto LAB_001002a7;
          }
        }
        else {
          iVar1 = i2a_ASN1_OBJECT(param_1,*(ASN1_OBJECT **)param_3[1]);
          if ((0 < iVar1) && (iVar1 = BIO_puts(param_1," with "), 0 < iVar1)) {
            a = (X509_ALGOR *)ossl_x509_algor_mgf1_decode(param_3[1]);
            if (a == (X509_ALGOR *)0x0) {
              iVar1 = BIO_puts(param_1,"INVALID");
              if (iVar1 < 1) goto LAB_00100160;
              a = (X509_ALGOR *)0x0;
            }
            else {
              bVar3 = false;
              iVar1 = i2a_ASN1_OBJECT(param_1,a->algorithm);
              if (iVar1 < 1) goto LAB_00100165;
            }
LAB_001002a7:
            BIO_puts(param_1,"\n");
            iVar1 = BIO_indent(param_1,param_4,0x80);
            if (iVar1 != 0) {
              pcVar2 = "";
              if (param_2 != 0) {
                pcVar2 = "Minimum";
              }
              iVar1 = BIO_printf(param_1,"%s Salt Length: 0x",pcVar2);
              if (0 < iVar1) {
                if ((ASN1_INTEGER *)param_3[2] == (ASN1_INTEGER *)0x0) {
                  iVar1 = BIO_puts(param_1,"14 (default)");
                }
                else {
                  iVar1 = i2a_ASN1_INTEGER(param_1,(ASN1_INTEGER *)param_3[2]);
                }
                if (0 < iVar1) {
                  BIO_puts(param_1,"\n");
                  iVar1 = BIO_indent(param_1,param_4,0x80);
                  if ((iVar1 != 0) && (iVar1 = BIO_puts(param_1,"Trailer Field: 0x"), 0 < iVar1)) {
                    if ((ASN1_INTEGER *)param_3[3] == (ASN1_INTEGER *)0x0) {
                      iVar1 = BIO_puts(param_1,"01 (default)");
                    }
                    else {
                      iVar1 = i2a_ASN1_INTEGER(param_1,(ASN1_INTEGER *)param_3[3]);
                    }
                    if (0 < iVar1) {
                      bVar3 = true;
                      BIO_puts(param_1,"\n");
                      goto LAB_00100165;
                    }
                  }
                }
              }
            }
            bVar3 = false;
            goto LAB_00100165;
          }
        }
      }
    }
  }
LAB_00100160:
  a = (X509_ALGOR *)0x0;
  bVar3 = false;
LAB_00100165:
  X509_ALGOR_free(a);
  return bVar3;
}



int rsa_sig_print(BIO *param_1,undefined8 *param_2,ASN1_STRING *param_3,int param_4)

{
  int iVar1;
  RSA_PSS_PARAMS *a;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  if (iVar1 == 0x390) {
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_2);
    iVar1 = rsa_pss_param_print(param_1,0,a,param_4);
    RSA_PSS_PARAMS_free(a);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = BIO_puts(param_1,"\n");
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_3 != (ASN1_STRING *)0x0) {
    iVar1 = X509_signature_dump(param_1,param_3,param_4);
    return iVar1;
  }
  return 1;
}



void rsa_security_bits(long param_1)

{
  RSA_security_bits(*(undefined8 *)(param_1 + 0x20));
  return;
}



void rsa_bits(long param_1)

{
  BN_num_bits(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
  return;
}



void int_rsa_size(long param_1)

{
  RSA_size(*(RSA **)(param_1 + 0x20));
  return;
}



bool rsa_priv_print(BIO *param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  BIGNUM *num;
  char *number;
  
  uVar2 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(BIGNUM **)(lVar1 + 0x28) != (BIGNUM *)0x0) {
    uVar2 = BN_num_bits(*(BIGNUM **)(lVar1 + 0x28));
  }
  OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x88));
  iVar3 = BIO_indent(param_1,param_3,0x80);
  if (iVar3 != 0) {
    pcVar7 = "RSA";
    if (**(int **)(param_2 + 8) == 0x390) {
      pcVar7 = "RSA-PSS";
    }
    iVar3 = BIO_printf(param_1,"%s ",pcVar7);
    if (0 < iVar3) {
      if (*(long *)(lVar1 + 0x38) == 0) {
        iVar3 = BIO_printf(param_1,"Public-Key: (%d bit)\n",(ulong)uVar2);
        if (iVar3 < 1) {
          return false;
        }
        number = "Exponent:";
        pcVar7 = "Modulus:";
      }
      else {
        number = "publicExponent:";
        iVar3 = BIO_printf(param_1,"Private-Key: (%d bit, %d primes)\n",(ulong)uVar2);
        pcVar7 = "modulus:";
        if (iVar3 < 1) {
          return false;
        }
      }
      iVar3 = ASN1_bn_print(param_1,pcVar7,*(BIGNUM **)(lVar1 + 0x28),(uchar *)0x0,param_3);
      if (((((iVar3 != 0) &&
            (iVar3 = ASN1_bn_print(param_1,number,*(BIGNUM **)(lVar1 + 0x30),(uchar *)0x0,param_3),
            iVar3 != 0)) &&
           (iVar3 = ASN1_bn_print(param_1,"privateExponent:",*(BIGNUM **)(lVar1 + 0x38),(uchar *)0x0
                                  ,param_3), iVar3 != 0)) &&
          ((iVar3 = ASN1_bn_print(param_1,"prime1:",*(BIGNUM **)(lVar1 + 0x40),(uchar *)0x0,param_3)
           , iVar3 != 0 &&
           (iVar3 = ASN1_bn_print(param_1,"prime2:",*(BIGNUM **)(lVar1 + 0x48),(uchar *)0x0,param_3)
           , iVar3 != 0)))) &&
         ((iVar3 = ASN1_bn_print(param_1,"exponent1:",*(BIGNUM **)(lVar1 + 0x50),(uchar *)0x0,
                                 param_3), iVar3 != 0 &&
          ((iVar3 = ASN1_bn_print(param_1,"exponent2:",*(BIGNUM **)(lVar1 + 0x58),(uchar *)0x0,
                                  param_3), iVar3 != 0 &&
           (iVar3 = ASN1_bn_print(param_1,"coefficient:",*(BIGNUM **)(lVar1 + 0x60),(uchar *)0x0,
                                  param_3), iVar3 != 0)))))) {
        iVar3 = 0;
LAB_00100770:
        iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x88));
        if (iVar4 <= iVar3) {
          if (**(int **)(param_2 + 8) == 0x390) {
            iVar3 = rsa_pss_param_print(param_1,1,*(undefined8 *)(lVar1 + 0x80),param_3);
            return iVar3 != 0;
          }
          return true;
        }
        iVar4 = 0;
        puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x88),iVar3);
        do {
          iVar5 = BIO_indent(param_1,param_3,0x80);
          if (iVar5 == 0) {
            return false;
          }
          uVar8 = (ulong)(iVar3 + 3);
          if (iVar4 == 1) {
            iVar5 = BIO_printf(param_1,"exponent%d:",uVar8);
            if (iVar5 < 1) {
              return false;
            }
            num = (BIGNUM *)puVar6[1];
          }
          else {
            if (iVar4 == 2) goto LAB_00100820;
            iVar5 = BIO_printf(param_1,"prime%d:",uVar8);
            if (iVar5 < 1) {
              return false;
            }
            num = (BIGNUM *)*puVar6;
          }
          iVar5 = ASN1_bn_print(param_1,"",num,(uchar *)0x0,param_3);
          if (iVar5 == 0) {
            return false;
          }
          iVar4 = iVar4 + 1;
        } while( true );
      }
    }
  }
  return false;
LAB_00100820:
  iVar4 = BIO_printf(param_1,"coefficient%d:",uVar8);
  if (iVar4 < 1) {
    return false;
  }
  iVar4 = ASN1_bn_print(param_1,"",(BIGNUM *)puVar6[2],(uchar *)0x0,param_3);
  if (iVar4 == 0) {
    return false;
  }
  iVar3 = iVar3 + 1;
  goto LAB_00100770;
}



bool rsa_priv_decode(EVP_PKEY *param_1,undefined8 param_2)

{
  void *key;
  
  key = (void *)ossl_rsa_key_from_pkcs8(param_2,0,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}



bool rsa_pub_cmp(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = RSA_flags(*(RSA **)(param_1 + 0x20));
  if (((uVar1 & 1) == 0) && (uVar1 = RSA_flags(*(RSA **)(param_2 + 0x20)), (uVar1 & 1) == 0)) {
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
    if (iVar2 != 0) {
      return false;
    }
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x30),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x30));
    return iVar2 == 0;
  }
  return true;
}



undefined8 rsa_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  RSA *r;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_30,&local_34,&local_28,param_2);
  if (iVar1 != 0) {
    r = d2i_RSAPublicKey((RSA **)0x0,&local_30,(long)local_34);
    if (r != (RSA *)0x0) {
      iVar1 = ossl_rsa_param_decode(r,local_28);
      if (iVar1 != 0) {
        RSA_clear_flags(r,0xf000);
        iVar1 = **(int **)&param_1->references;
        if (iVar1 == 6) {
          RSA_set_flags(r,0);
          iVar1 = **(int **)&param_1->references;
        }
        else if (iVar1 == 0x390) {
          RSA_set_flags(r,0x1000);
          iVar1 = **(int **)&param_1->references;
        }
        iVar1 = EVP_PKEY_assign(param_1,iVar1,r);
        uVar2 = 1;
        if (iVar1 != 0) goto LAB_0010099f;
      }
      RSA_free(r);
    }
  }
  uVar2 = 0;
LAB_0010099f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 rsa_pss_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  uVar2 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = OSSL_PARAM_BLD_new();
  if (lVar5 == 0) goto LAB_00100ae2;
  lVar6 = RSA_get0_n(lVar7);
  if (((lVar6 == 0) || (lVar6 = RSA_get0_e(lVar7), lVar6 == 0)) ||
     (iVar1 = ossl_rsa_todata(lVar7,lVar5,0,1), iVar1 == 0)) {
LAB_00100acc:
    uVar2 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = RSA_get0_d(lVar7);
    iVar1 = 3 - (uint)(lVar6 == 0);
    if (*(long *)(lVar7 + 0x80) != 0) {
      local_68 = 0;
      local_60 = 0;
      iVar1 = ossl_rsa_pss_get_param_unverified
                        (*(long *)(lVar7 + 0x80),&local_68,&local_60,&local_70,local_6c);
      if (iVar1 != 0) {
        uVar2 = EVP_MD_get_type(local_68);
        uVar3 = EVP_MD_get_type(local_60);
        iVar1 = ossl_rsa_pss_params_30_set_defaults(local_58);
        if (((iVar1 != 0) &&
            (iVar1 = ossl_rsa_pss_params_30_set_hashalg(local_58,uVar2), iVar1 != 0)) &&
           ((iVar1 = ossl_rsa_pss_params_30_set_maskgenhashalg(local_58,uVar3), iVar1 != 0 &&
            ((iVar1 = ossl_rsa_pss_params_30_set_saltlen(local_58,local_70), iVar1 != 0 &&
             (iVar4 = ossl_rsa_pss_params_30_todata(local_58,lVar5,0),
             iVar1 = 0x83 - (uint)(lVar6 == 0), iVar4 != 0)))))) goto LAB_00100c00;
      }
      goto LAB_00100acc;
    }
LAB_00100c00:
    lVar7 = OSSL_PARAM_BLD_to_param(lVar5);
    if (lVar7 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*param_3)(param_2,iVar1,lVar7);
    }
  }
  OSSL_PARAM_free(lVar7);
  OSSL_PARAM_BLD_free(lVar5);
LAB_00100ae2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 rsa_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  long lVar1;
  uchar *penc;
  ASN1_OCTET_STRING *pval;
  int iVar2;
  int penclen;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar3;
  ASN1_OBJECT *aobj;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_50;
  ASN1_OCTET_STRING *local_48;
  long local_40;
  
  lVar1 = *(long *)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  local_48 = (ASN1_STRING *)0x0;
  iVar2 = RSA_test_flags(lVar1,0xf000);
  if (iVar2 == 0x1000) {
    if (*(long *)(lVar1 + 0x80) == 0) {
      iVar2 = -1;
      goto LAB_00100cc6;
    }
    it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
    pAVar3 = ASN1_item_pack(*(void **)(lVar1 + 0x80),it,&local_48);
    if (pAVar3 != (ASN1_STRING *)0x0) {
      iVar2 = 0x10;
      goto LAB_00100cc6;
    }
  }
  else {
    iVar2 = 5;
LAB_00100cc6:
    penclen = i2d_RSAPrivateKey(*(RSA **)(param_2 + 0x20),&local_50);
    pval = local_48;
    penc = local_50;
    if (0 < penclen) {
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar2 = PKCS8_pkey_set0(param_1,aobj,0,iVar2,pval,penc,penclen);
      uVar4 = 1;
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ameth.c",0xa4,"rsa_priv_encode");
        ERR_set_error(4,0x8000d,0);
        ASN1_STRING_free(local_48);
        CRYPTO_clear_free(local_50,(long)penclen,"crypto/rsa/rsa_ameth.c",0xa6);
        uVar4 = 0;
      }
      goto LAB_00100d17;
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ameth.c",0x9d,"rsa_priv_encode");
    ERR_set_error(4,0x8000d,0);
    ASN1_STRING_free(local_48);
  }
  uVar4 = 0;
LAB_00100d17:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rsa_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  long lVar1;
  uchar *penc;
  ASN1_OCTET_STRING *pval;
  int iVar2;
  int penclen;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar3;
  ASN1_OBJECT *aobj;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_50;
  ASN1_OCTET_STRING *local_48;
  long local_40;
  
  lVar1 = *(long *)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  local_48 = (ASN1_STRING *)0x0;
  iVar2 = RSA_test_flags(lVar1,0xf000);
  if (iVar2 == 0x1000) {
    if (*(long *)(lVar1 + 0x80) == 0) {
      iVar2 = -1;
      goto LAB_00100e86;
    }
    it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
    pAVar3 = ASN1_item_pack(*(void **)(lVar1 + 0x80),it,&local_48);
    if (pAVar3 != (ASN1_STRING *)0x0) {
      iVar2 = 0x10;
      goto LAB_00100e86;
    }
  }
  else {
    iVar2 = 5;
LAB_00100e86:
    penclen = i2d_RSAPublicKey(*(RSA **)(param_2 + 0x20),&local_50);
    pval = local_48;
    penc = local_50;
    if (penclen < 1) {
      ASN1_STRING_free(local_48);
      uVar4 = 0;
      goto LAB_00100ed6;
    }
    aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
    iVar2 = X509_PUBKEY_set0_param(param_1,aobj,iVar2,pval,penc,penclen);
    uVar4 = 1;
    if (iVar2 != 0) goto LAB_00100ed6;
    CRYPTO_free(local_50);
    ASN1_STRING_free(local_48);
  }
  uVar4 = 0;
LAB_00100ed6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int rsa_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  RSA *r;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  r = (RSA *)ossl_rsa_new_with_ctx(*(undefined8 *)(param_2 + 8));
  local_38 = 0;
  local_4c = 0;
  local_48 = (undefined1  [16])0x0;
  if (r == (RSA *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ameth.c",0x35c,"rsa_int_import_from");
    ERR_set_error(5,0x80004,0);
  }
  else {
    RSA_clear_flags(r,0xf000);
    RSA_set_flags(r,0);
    iVar1 = ossl_rsa_pss_params_30_fromdata(local_48,&local_4c,param_1,*(undefined8 *)(param_2 + 8))
    ;
    if (iVar1 != 0) {
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(local_48);
      if (iVar1 != 0) {
        iVar1 = ossl_rsa_fromdata(r,param_1,1);
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_assign(pkey,6,r);
          if (iVar1 != 0) goto LAB_00101022;
        }
      }
    }
    RSA_free(r);
  }
  iVar1 = 0;
LAB_00101022:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool rsa_pub_print(BIO *param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(BIGNUM **)(lVar1 + 0x28) != (BIGNUM *)0x0) {
    uVar2 = BN_num_bits(*(BIGNUM **)(lVar1 + 0x28));
  }
  OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x88));
  iVar3 = BIO_indent(param_1,param_3,0x80);
  if (iVar3 != 0) {
    pcVar4 = "RSA";
    if (**(int **)(param_2 + 8) == 0x390) {
      pcVar4 = "RSA-PSS";
    }
    iVar3 = BIO_printf(param_1,"%s ",pcVar4);
    if ((((0 < iVar3) &&
         (iVar3 = BIO_printf(param_1,"Public-Key: (%d bit)\n",(ulong)uVar2), 0 < iVar3)) &&
        (iVar3 = ASN1_bn_print(param_1,"Modulus:",*(BIGNUM **)(lVar1 + 0x28),(uchar *)0x0,param_3),
        iVar3 != 0)) &&
       (iVar3 = ASN1_bn_print(param_1,"Exponent:",*(BIGNUM **)(lVar1 + 0x30),(uchar *)0x0,param_3),
       iVar3 != 0)) {
      if (**(int **)(param_2 + 8) != 0x390) {
        return true;
      }
      iVar3 = rsa_pss_param_print(param_1,1,*(undefined8 *)(lVar1 + 0x80),param_3);
      return iVar3 != 0;
    }
  }
  return false;
}



undefined4 rsa_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  uVar2 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = OSSL_PARAM_BLD_new();
  if (lVar5 == 0) goto LAB_00101212;
  lVar6 = RSA_get0_n(lVar7);
  if (((lVar6 == 0) || (lVar6 = RSA_get0_e(lVar7), lVar6 == 0)) ||
     (iVar1 = ossl_rsa_todata(lVar7,lVar5,0,1), iVar1 == 0)) {
LAB_001011fc:
    uVar2 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = RSA_get0_d(lVar7);
    iVar1 = 3 - (uint)(lVar6 == 0);
    if (*(long *)(lVar7 + 0x80) != 0) {
      local_68 = 0;
      local_60 = 0;
      iVar1 = ossl_rsa_pss_get_param_unverified
                        (*(long *)(lVar7 + 0x80),&local_68,&local_60,&local_70,local_6c);
      if (iVar1 != 0) {
        uVar2 = EVP_MD_get_type(local_68);
        uVar3 = EVP_MD_get_type(local_60);
        iVar1 = ossl_rsa_pss_params_30_set_defaults(local_58);
        if (((iVar1 != 0) &&
            (iVar1 = ossl_rsa_pss_params_30_set_hashalg(local_58,uVar2), iVar1 != 0)) &&
           ((iVar1 = ossl_rsa_pss_params_30_set_maskgenhashalg(local_58,uVar3), iVar1 != 0 &&
            ((iVar1 = ossl_rsa_pss_params_30_set_saltlen(local_58,local_70), iVar1 != 0 &&
             (iVar4 = ossl_rsa_pss_params_30_todata(local_58,lVar5,0),
             iVar1 = 0x83 - (uint)(lVar6 == 0), iVar4 != 0)))))) goto LAB_00101330;
      }
      goto LAB_001011fc;
    }
LAB_00101330:
    lVar7 = OSSL_PARAM_BLD_to_param(lVar5);
    if (lVar7 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*param_3)(param_2,iVar1,lVar7);
    }
  }
  OSSL_PARAM_free(lVar7);
  OSSL_PARAM_BLD_free(lVar5);
LAB_00101212:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



RSA_PSS_PARAMS * ossl_rsa_pss_params_create(long param_1,long param_2,int param_3)

{
  int iVar1;
  RSA_PSS_PARAMS *a;
  ASN1_INTEGER *a_00;
  
  a = RSA_PSS_PARAMS_new();
  if (a != (RSA_PSS_PARAMS *)0x0) {
    if (param_3 != 0x14) {
      a_00 = ASN1_INTEGER_new();
      a->saltLength = a_00;
      if ((a_00 == (ASN1_INTEGER *)0x0) ||
         (iVar1 = ASN1_INTEGER_set(a_00,(long)param_3), iVar1 == 0)) goto LAB_001013e0;
    }
    iVar1 = ossl_x509_algor_new_from_md(a,param_1);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        param_2 = param_1;
      }
      iVar1 = ossl_x509_algor_md_to_mgf1(&a->maskGenAlgorithm,param_2);
      if ((iVar1 != 0) && (iVar1 = ossl_x509_algor_new_from_md(a + 1,param_2), iVar1 != 0)) {
        return a;
      }
    }
  }
LAB_001013e0:
  RSA_PSS_PARAMS_free(a);
  return (RSA_PSS_PARAMS *)0x0;
}



int rsa_pss_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  int n;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  RSA *r;
  char *pcVar3;
  EVP_MD *pEVar4;
  EVP_MD *pEVar5;
  BN_MONT_CTX *pBVar6;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  r = (RSA *)ossl_rsa_new_with_ctx(*(undefined8 *)(param_2 + 8));
  local_48 = 0;
  local_5c = 0;
  local_58 = (undefined1  [16])0x0;
  if (r == (RSA *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ameth.c",0x35c,"rsa_int_import_from");
    ERR_set_error(5,0x80004,0);
  }
  else {
    RSA_clear_flags(r,0xf000);
    RSA_set_flags(r,0x1000);
    iVar1 = ossl_rsa_pss_params_30_fromdata(local_58,&local_5c,param_1,*(undefined8 *)(param_2 + 8))
    ;
    if (iVar1 != 0) {
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(local_58);
      if (iVar1 == 0) {
        iVar1 = ossl_rsa_pss_params_30_hashalg(local_58);
        n = ossl_rsa_pss_params_30_maskgenhashalg(local_58);
        uVar2 = ossl_rsa_pss_params_30_saltlen(local_58);
        pcVar3 = OBJ_nid2sn(iVar1);
        pEVar4 = EVP_get_digestbyname(pcVar3);
        pcVar3 = OBJ_nid2sn(n);
        pEVar5 = EVP_get_digestbyname(pcVar3);
        pBVar6 = (BN_MONT_CTX *)ossl_rsa_pss_params_create(pEVar4,pEVar5,uVar2);
        r->_method_mod_p = pBVar6;
        if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_001014cc;
      }
      iVar1 = ossl_rsa_fromdata(r,param_1,1);
      if ((iVar1 != 0) && (iVar1 = EVP_PKEY_assign(pkey,0x390,r), iVar1 != 0)) goto LAB_001014d6;
    }
LAB_001014cc:
    RSA_free(r);
  }
  iVar1 = 0;
LAB_001014d6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



ASN1_STRING * ossl_rsa_ctx_to_pss_string(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *pEVar4;
  RSA_PSS_PARAMS *a;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar4 = EVP_PKEY_CTX_get0_pkey(param_1);
  iVar1 = EVP_PKEY_CTX_get_signature_md(param_1,&local_30);
  if ((((0 < iVar1) && (iVar1 = EVP_MD_get_size(local_30), 0 < iVar1)) &&
      (iVar2 = EVP_PKEY_CTX_get_rsa_mgf1_md(param_1,&local_28), 0 < iVar2)) &&
     (iVar2 = EVP_PKEY_CTX_get_rsa_pss_saltlen(param_1,&local_34), 0 < iVar2)) {
    iVar2 = iVar1;
    if (local_34 != -1) {
      if (local_34 == -4) {
        local_34 = -3;
        iVar6 = iVar1;
      }
      else {
        iVar2 = local_34;
        if (1 < local_34 + 3U) goto LAB_00101648;
        iVar6 = -1;
      }
      iVar2 = EVP_PKEY_get_size(pEVar4);
      local_34 = (iVar2 - iVar1) + -2;
      uVar3 = EVP_PKEY_get_bits(pEVar4);
      if ((uVar3 & 7) == 1) {
        local_34 = local_34 + -1;
      }
      if (local_34 < 0) goto LAB_0010171d;
      iVar2 = local_34;
      if ((iVar6 != -1) && (iVar6 < local_34)) {
        iVar2 = iVar6;
      }
    }
LAB_00101648:
    local_34 = iVar2;
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_params_create(local_30,local_28,local_34);
    if (a != (RSA_PSS_PARAMS *)0x0) {
      it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
      pAVar5 = ASN1_item_pack(a,it,(ASN1_OCTET_STRING **)0x0);
      RSA_PSS_PARAMS_free(a);
      goto LAB_00101680;
    }
  }
LAB_0010171d:
  pAVar5 = (ASN1_STRING *)0x0;
LAB_00101680:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar5;
}



undefined8 rsa_item_sign(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  X509_ALGOR *pXVar4;
  ASN1_STRING *a;
  ASN1_STRING *a_00;
  ASN1_OBJECT *pAVar5;
  X509_ALGOR *in_RCX;
  X509_ALGOR *in_R8;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  X509_ALGOR *local_118;
  X509_ALGOR *local_110;
  int local_104;
  uchar *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  uchar local_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = in_R8;
  local_110 = in_RCX;
  lVar2 = EVP_MD_CTX_get_pkey_ctx();
  iVar1 = EVP_PKEY_CTX_get_rsa_padding(lVar2,&local_104);
  uVar3 = 0;
  if ((iVar1 < 1) || (uVar3 = 2, local_104 != 6)) goto LAB_00101785;
  if (*(long *)(lVar2 + 0x20) == 0) {
    a = (ASN1_STRING *)ossl_rsa_ctx_to_pss_string(lVar2);
    if (a == (ASN1_STRING *)0x0) goto LAB_00101903;
    if (local_118 == (X509_ALGOR *)0x0) {
LAB_00101910:
      pAVar5 = OBJ_nid2obj(0x390);
      iVar1 = X509_ALGOR_set0(local_110,pAVar5,0x10,a);
      if (iVar1 != 0) goto LAB_00101898;
    }
    else {
      a_00 = ASN1_STRING_dup(a);
      if (a_00 != (ASN1_STRING *)0x0) {
        pAVar5 = OBJ_nid2obj(0x390);
        iVar1 = X509_ALGOR_set0(local_118,pAVar5,0x10,a_00);
        if (iVar1 == 0) {
          ASN1_STRING_free(a);
          ASN1_STRING_free(a_00);
          goto LAB_00101903;
        }
        goto LAB_00101910;
      }
    }
    ASN1_STRING_free(a);
    uVar3 = 0;
  }
  else {
    OSSL_PARAM_construct_octet_string(&local_148,"algorithm-id",local_a8,0x80);
    local_d8 = local_128;
    local_f8 = local_148;
    uStack_f0 = uStack_140;
    local_e8 = local_138;
    uStack_e0 = uStack_130;
    OSSL_PARAM_construct_end(&local_148);
    local_d0 = local_148;
    uStack_c8 = uStack_140;
    local_b0 = local_128;
    local_c0 = local_138;
    uStack_b8 = uStack_130;
    iVar1 = EVP_PKEY_CTX_get_params(lVar2,&local_f8);
    lVar2 = local_d8;
    if ((iVar1 < 1) || (local_d8 == 0)) {
LAB_00101903:
      uVar3 = 0;
      goto LAB_00101785;
    }
    if (local_110 != (X509_ALGOR *)0x0) {
      local_100 = local_a8;
      pXVar4 = d2i_X509_ALGOR(&local_110,&local_100,local_d8);
      if (pXVar4 == (X509_ALGOR *)0x0) goto LAB_00101903;
    }
    if (local_118 != (X509_ALGOR *)0x0) {
      local_100 = local_a8;
      pXVar4 = d2i_X509_ALGOR(&local_118,&local_100,lVar2);
      if (pXVar4 == (X509_ALGOR *)0x0) goto LAB_00101903;
    }
LAB_00101898:
    uVar3 = 3;
  }
LAB_00101785:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_rsa_pss_get_param(void)

{
  long lVar1;
  int iVar2;
  int *in_RCX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_rsa_pss_get_param_unverified();
  if (iVar2 != 0) {
    if ((in_RCX == (int *)0x0) || (-1 < *in_RCX)) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_ameth.c",0x25c,"rsa_pss_verify_param");
      ERR_set_error(4,0x8b,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_ameth.c",0x254,"rsa_pss_verify_param");
      ERR_set_error(4,0x96,0);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



undefined8
ossl_rsa_pss_to_ctx(EVP_MD_CTX *param_1,EVP_PKEY_CTX *param_2,undefined8 *param_3,EVP_PKEY *param_4)

{
  int iVar1;
  int iVar2;
  RSA_PSS_PARAMS *a;
  undefined8 uVar3;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  EVP_MD *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = (EVP_MD *)0x0;
  local_50[0] = param_2;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_3);
  if (iVar1 != 0x390) {
    ERR_new();
    uVar3 = 0xffffffff;
    ERR_set_debug("crypto/rsa/rsa_ameth.c",0x227,"ossl_rsa_pss_to_ctx");
    ERR_set_error(4,0x9b,0);
    goto LAB_00101ab0;
  }
  a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_3);
  iVar1 = ossl_rsa_pss_get_param(a,&local_30,&local_38);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ameth.c",0x22e,"ossl_rsa_pss_to_ctx");
    ERR_set_error(4,0x95,0);
LAB_00101b98:
    uVar3 = 0xffffffff;
  }
  else {
    if (param_4 == (EVP_PKEY *)0x0) {
      iVar1 = EVP_PKEY_CTX_get_signature_md(local_50[0],&local_28);
      if (0 < iVar1) {
        iVar1 = EVP_MD_get_type(local_30);
        iVar2 = EVP_MD_get_type(local_28);
        if (iVar1 == iVar2) goto LAB_00101b1a;
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ameth.c",0x23b,"ossl_rsa_pss_to_ctx");
        ERR_set_error(4,0x9e,0);
      }
      goto LAB_00101b98;
    }
    iVar1 = EVP_DigestVerifyInit(param_1,local_50,local_30,(ENGINE *)0x0,param_4);
    if (iVar1 == 0) goto LAB_00101b98;
LAB_00101b1a:
    iVar1 = EVP_PKEY_CTX_set_rsa_padding(local_50[0],6);
    if (iVar1 < 1) goto LAB_00101b98;
    iVar1 = EVP_PKEY_CTX_set_rsa_pss_saltlen(local_50[0],local_3c);
    if (iVar1 < 1) goto LAB_00101b98;
    iVar1 = EVP_PKEY_CTX_set_rsa_mgf1_md(local_50[0],local_38);
    if (iVar1 < 1) goto LAB_00101b98;
    uVar3 = 1;
  }
  RSA_PSS_PARAMS_free(a);
LAB_00101ab0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
rsa_item_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_4);
  if (iVar1 == 0x390) {
    iVar1 = ossl_rsa_pss_to_ctx(param_1,0,param_4,param_6);
    if (0 < iVar1) {
      return 2;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ameth.c",0x27f,"rsa_item_verify");
    ERR_set_error(4,0x9b,0);
  }
  return 0xffffffff;
}



undefined8 rsa_sig_info_set(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RSA_PSS_PARAMS *a;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  if (iVar1 != 0x390) goto LAB_00101cd9;
  a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_2);
  iVar1 = ossl_rsa_pss_get_param(a,&local_38,&local_40,&local_44);
  if (iVar1 == 0) {
LAB_00101d26:
    uVar4 = 0;
  }
  else {
    iVar1 = EVP_MD_get_size(local_38);
    if (iVar1 < 1) goto LAB_00101d26;
    iVar6 = iVar1 * 4;
    iVar2 = EVP_MD_get_type(local_38);
    if (iVar2 - 0x2a0U < 3) {
      iVar3 = EVP_MD_get_type(local_40);
      cVar5 = '\0';
      if (iVar3 == iVar2) {
        cVar5 = (local_44 == iVar1) * '\x02';
      }
    }
    else if (iVar2 == 0x40) {
      iVar6 = 0x40;
      cVar5 = '\0';
    }
    else {
      cVar5 = '\0';
      if (iVar2 == 0x72) {
        iVar6 = 0x44;
      }
      else if (iVar2 == 4) {
        iVar6 = 0x27;
      }
    }
    uVar4 = 1;
    X509_SIG_INFO_set(param_1,iVar2,0x390,iVar6,cVar5);
  }
  RSA_PSS_PARAMS_free(a);
LAB_00101cd9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 rsa_pkey_ctrl(long param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 3) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
    if (lVar1 == 0) {
      *param_4 = 0x2a0;
      uVar4 = 1;
    }
    else {
      iVar2 = ossl_rsa_pss_get_param(lVar1,&local_30,local_28,local_34);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ameth.c",0x1af,"rsa_pkey_ctrl");
        ERR_set_error(4,0xc0103,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
        uVar3 = EVP_MD_get_type(local_30);
        *param_4 = uVar3;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


