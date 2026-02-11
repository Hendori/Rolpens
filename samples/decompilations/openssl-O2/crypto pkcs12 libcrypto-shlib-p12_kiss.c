
bool parse_bag_constprop_0
               (undefined8 param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *in;
  int *piVar3;
  undefined8 uVar4;
  X509 *x;
  undefined8 uVar5;
  PKCS8_PRIV_KEY_INFO *a;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  in = (ASN1_STRING *)PKCS12_SAFEBAG_get0_attr(param_1,0x9c);
  if (in != (ASN1_STRING *)0x0) {
    in = (ASN1_STRING *)in->data;
  }
  piVar3 = (int *)PKCS12_SAFEBAG_get0_attr(param_1,0x9d);
  if (piVar3 != (int *)0x0) {
    piVar3 = *(int **)(piVar3 + 2);
  }
  iVar1 = PKCS12_SAFEBAG_get_nid(param_1);
  if (iVar1 == 0x98) {
    if ((param_4 != 0) && (iVar1 = PKCS12_SAFEBAG_get_bag_nid(param_1), iVar1 == 0x9e)) {
      x = (X509 *)PKCS12_SAFEBAG_get1_cert_ex(param_1,param_5,param_6);
      if (x != (X509 *)0x0) {
        if ((piVar3 == (int *)0x0) ||
           (iVar1 = X509_keyid_set1(x,*(uchar **)(piVar3 + 2),*piVar3), iVar1 != 0)) {
          if ((in != (ASN1_STRING *)0x0) && (iVar1 = ASN1_STRING_to_UTF8(&local_48,in), -1 < iVar1))
          {
            iVar1 = X509_alias_set1(x,local_48,iVar1);
            CRYPTO_free(local_48);
            if (iVar1 == 0) goto LAB_001001ab;
          }
          iVar1 = OPENSSL_sk_push(param_4,x);
          if (iVar1 != 0) goto LAB_001000a0;
        }
LAB_001001ab:
        X509_free(x);
      }
LAB_001001b8:
      bVar7 = false;
      goto LAB_001000a5;
    }
  }
  else if (iVar1 < 0x99) {
    if (iVar1 == 0x96) {
      if ((param_3 != (long *)0x0) && (*param_3 == 0)) {
        uVar5 = PKCS12_SAFEBAG_get0_p8inf(param_1);
        lVar6 = EVP_PKCS82PKEY_ex(uVar5,param_5,param_6);
        bVar7 = lVar6 != 0;
        *param_3 = lVar6;
        goto LAB_001000a5;
      }
    }
    else if (((iVar1 == 0x97) && (param_3 != (long *)0x0)) && (*param_3 == 0)) {
      a = (PKCS8_PRIV_KEY_INFO *)PKCS12_decrypt_skey_ex(param_1,param_2,0xffffffff,param_5,param_6);
      if (a != (PKCS8_PRIV_KEY_INFO *)0x0) {
        lVar6 = EVP_PKCS82PKEY_ex(a,param_5,param_6);
        *param_3 = lVar6;
        PKCS8_PRIV_KEY_INFO_free(a);
        bVar7 = *param_3 != 0;
        goto LAB_001000a5;
      }
      goto LAB_001001b8;
    }
  }
  else if (iVar1 == 0x9b) {
    uVar5 = PKCS12_SAFEBAG_get0_safes(param_1);
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(uVar5), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      uVar4 = OPENSSL_sk_value(uVar5,iVar1);
      iVar2 = parse_bag_constprop_0(uVar4,param_2,param_3,param_4,param_5,param_6);
      if (iVar2 == 0) goto LAB_001001b8;
    }
  }
LAB_001000a0:
  bVar7 = true;
LAB_001000a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



/* WARNING: Type propagation algorithm not settling */

int PKCS12_parse(PKCS12 *p12,char *pass,EVP_PKEY **pkey,X509 **cert,stack_st_X509 **ca)

{
  long lVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  stack_st_PKCS7 *psVar8;
  PKCS7 *p7;
  stack_st_PKCS12_SAFEBAG *psVar9;
  undefined8 uVar10;
  ulong uVar11;
  X509 *x509;
  int local_54;
  
  if (pkey != (EVP_PKEY **)0x0) {
    *pkey = (EVP_PKEY *)0x0;
  }
  if (cert != (X509 **)0x0) {
    *cert = (X509 *)0x0;
  }
  if (p12 == (PKCS12 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_kiss.c",0x31,"PKCS12_parse");
    ERR_set_error(0x23,0x69,0);
    return 0;
  }
  iVar3 = PKCS12_mac_present(p12);
  if (iVar3 != 0) {
    if ((pass == (char *)0x0) || (*pass == '\0')) {
      iVar3 = PKCS12_verify_mac(p12,(char *)0x0,0);
      if (iVar3 != 0) goto LAB_00100308;
      pass = "";
      iVar3 = PKCS12_verify_mac(p12,"",0);
      if (iVar3 != 0) goto LAB_0010030b;
      ERR_new();
      uVar10 = 0x43;
    }
    else {
      iVar3 = PKCS12_verify_mac(p12,pass,-1);
      if (iVar3 != 0) goto LAB_0010030b;
      ERR_new();
      uVar10 = 0x47;
    }
    ERR_set_debug("crypto/pkcs12/p12_kiss.c",uVar10,"PKCS12_parse");
    ERR_set_error(0x23,0x71,0);
LAB_00100672:
    x509 = (X509 *)0x0;
    lVar7 = 0;
    goto LAB_0010053a;
  }
  if ((pass == (char *)0x0) || (*pass == '\0')) {
LAB_00100308:
    pass = (char *)0x0;
LAB_0010030b:
    if (ca != (stack_st_X509 **)0x0 || cert != (X509 **)0x0) goto LAB_00100319;
LAB_00100448:
    lVar7 = 0;
  }
  else {
    if (ca == (stack_st_X509 **)0x0 && cert == (X509 **)0x0) goto LAB_00100448;
LAB_00100319:
    lVar7 = OPENSSL_sk_new_null();
    if (lVar7 == 0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_kiss.c",0x51,"PKCS12_parse");
      ERR_set_error(0x23,0x8000f,0);
      goto LAB_00100672;
    }
  }
  psVar8 = PKCS12_unpack_authsafes(p12);
  if (psVar8 != (stack_st_PKCS7 *)0x0) {
    for (local_54 = 0; iVar3 = OPENSSL_sk_num(psVar8), local_54 < iVar3; local_54 = local_54 + 1) {
      p7 = (PKCS7 *)OPENSSL_sk_value(psVar8,local_54);
      iVar3 = OBJ_obj2nid(p7->type);
      if (iVar3 == 0x15) {
        psVar9 = PKCS12_unpack_p7data(p7);
joined_r0x0010045e:
        if (psVar9 == (stack_st_PKCS12_SAFEBAG *)0x0) {
          OPENSSL_sk_pop_free(psVar8,&PKCS7_free);
          goto LAB_0010047a;
        }
        lVar1 = p7[1].length;
        puVar2 = p7[1].asn1;
        for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar9), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          uVar10 = OPENSSL_sk_value(psVar9,iVar3);
          iVar4 = parse_bag_constprop_0(uVar10,pass,pkey,lVar7,puVar2,lVar1);
          if (iVar4 == 0) {
            OPENSSL_sk_pop_free(psVar9,&PKCS12_SAFEBAG_free);
            OPENSSL_sk_pop_free(psVar8,&PKCS7_free);
            goto LAB_0010047a;
          }
        }
        OPENSSL_sk_pop_free(psVar9,&PKCS12_SAFEBAG_free);
      }
      else if (iVar3 == 0x1a) {
        psVar9 = PKCS12_unpack_p7encdata(p7,pass,-1);
        goto joined_r0x0010045e;
      }
    }
    OPENSSL_sk_pop_free(psVar8,&PKCS7_free);
LAB_001004f6:
    do {
      x509 = (X509 *)OPENSSL_sk_shift(lVar7);
      if (x509 == (X509 *)0x0) {
LAB_001006ba:
        OPENSSL_sk_free(lVar7);
        return 1;
      }
      if (pkey != (EVP_PKEY **)0x0) {
        while (((*pkey != (EVP_PKEY *)0x0 && (cert != (X509 **)0x0)) && (*cert == (X509 *)0x0))) {
          ERR_set_mark();
          iVar3 = X509_check_private_key(x509,*pkey);
          ERR_pop_to_mark();
          if (iVar3 == 0) break;
          *cert = x509;
          x509 = (X509 *)OPENSSL_sk_shift(lVar7);
          if (x509 == (X509 *)0x0) goto LAB_001006ba;
        }
      }
      if (ca == (stack_st_X509 **)0x0) {
        X509_free(x509);
        goto LAB_001004f6;
      }
      iVar3 = ossl_x509_add_cert_new(ca,x509,0);
    } while (iVar3 != 0);
    goto LAB_0010053a;
  }
LAB_0010047a:
  uVar11 = ERR_peek_last_error();
  uVar5 = (uint)uVar11;
  if ((int)uVar5 < 0) {
    uVar6 = uVar5 & 0x7fffffff;
LAB_00100499:
    if (uVar6 != 0x9c) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_kiss.c",0x5a,"PKCS12_parse");
      ERR_set_error(0x23,0x72,0);
    }
  }
  else {
    uVar6 = uVar5 & 0x7fffff;
    if ((ulong)(long)(int)uVar5 >> 0x17 != 6) goto LAB_00100499;
  }
  x509 = (X509 *)0x0;
LAB_0010053a:
  if (pkey != (EVP_PKEY **)0x0) {
    EVP_PKEY_free(*pkey);
    *pkey = (EVP_PKEY *)0x0;
  }
  if (cert != (X509 **)0x0) {
    X509_free(*cert);
    *cert = (X509 *)0x0;
  }
  X509_free(x509);
  OSSL_STACK_OF_X509_free(lVar7);
  return 0;
}


