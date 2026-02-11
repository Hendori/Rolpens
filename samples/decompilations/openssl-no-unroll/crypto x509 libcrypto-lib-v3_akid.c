
AUTHORITY_KEYID * v2i_AUTHORITY_KEYID(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  char *__s1;
  X509 *x;
  X509 *pXVar1;
  EVP_PKEY *pkey;
  int iVar2;
  int iVar3;
  uint uVar4;
  AUTHORITY_KEYID *a;
  long lVar5;
  X509_NAME *pXVar6;
  ASN1_INTEGER *pAVar7;
  GENERAL_NAMES *pGVar8;
  GENERAL_NAME *a_00;
  X509_EXTENSION *ext;
  EVP_PKEY *x_00;
  int iVar9;
  char cVar10;
  char *__s1_00;
  char cVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  X509_PUBKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = OPENSSL_sk_num(param_3);
  a = AUTHORITY_KEYID_new();
  if (a == (AUTHORITY_KEYID *)0x0) {
LAB_00100310:
    pAVar7 = (ASN1_INTEGER *)0x0;
    a_00 = (GENERAL_NAME *)0x0;
    pGVar8 = (GENERAL_NAMES *)0x0;
    pXVar6 = (X509_NAME *)0x0;
    x_00 = (EVP_PKEY *)0x0;
  }
  else {
    if (iVar2 == 1) {
      lVar5 = OPENSSL_sk_value(param_3,0);
      iVar9 = strcmp(*(char **)(lVar5 + 8),"none");
      if (iVar9 == 0) goto LAB_00100270;
LAB_00100061:
      iVar9 = 0;
      cVar10 = '\0';
      cVar11 = '\0';
      do {
        while( true ) {
          lVar5 = OPENSSL_sk_value(param_3,iVar9);
          __s1 = *(char **)(lVar5 + 0x10);
          if (__s1 != (char *)0x0) break;
          __s1_00 = *(char **)(lVar5 + 8);
          iVar3 = strcmp(__s1_00,"keyid");
          bVar12 = iVar3 == 0;
          if ((cVar11 != '\0') || (!bVar12)) {
LAB_001000b0:
            iVar3 = strcmp(__s1_00,"issuer");
            if (iVar3 == 0) {
              if (cVar10 == '\0') {
                cVar10 = '\x02' - (__s1 == (char *)0x0);
                goto LAB_001000de;
              }
            }
            else {
              iVar2 = strcmp(__s1_00,"none");
              if ((iVar2 != 0) && (!bVar12)) {
                ERR_new();
                ERR_set_debug("crypto/x509/v3_akid.c",0x8e,"v2i_AUTHORITY_KEYID");
                ERR_set_error(0x22,0xac,"name=%s",*(undefined8 *)(lVar5 + 8));
                goto LAB_00100310;
              }
            }
            ERR_new();
            ERR_set_debug("crypto/x509/v3_akid.c",0x8a,"v2i_AUTHORITY_KEYID");
            ERR_set_error(0x22,0xab,"name=%s",*(undefined8 *)(lVar5 + 8));
            goto LAB_00100310;
          }
          cVar11 = '\x01';
          iVar9 = iVar9 + 1;
          if (iVar2 == iVar9) goto LAB_00100145;
        }
        iVar3 = strcmp(__s1,"always");
        if (iVar3 != 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_akid.c",0x7b,"v2i_AUTHORITY_KEYID");
          ERR_set_error(0x22,0x78,"name=%s option=%s",*(undefined8 *)(lVar5 + 8),
                        *(undefined8 *)(lVar5 + 0x10));
          goto LAB_00100310;
        }
        __s1_00 = *(char **)(lVar5 + 8);
        iVar3 = strcmp(__s1_00,"keyid");
        bVar12 = iVar3 == 0;
        if ((cVar11 != '\0') || (!bVar12)) goto LAB_001000b0;
        cVar11 = '\x02';
LAB_001000de:
        iVar9 = iVar9 + 1;
      } while (iVar2 != iVar9);
    }
    else {
      cVar10 = '\0';
      cVar11 = '\0';
      if (0 < iVar2) goto LAB_00100061;
    }
LAB_00100145:
    if (param_2 == (byte *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_akid.c",0x98,"v2i_AUTHORITY_KEYID");
      ERR_set_error(0x22,0xc0102,0);
      goto LAB_00100310;
    }
    if ((*param_2 & 1) != 0) goto LAB_00100270;
    x = *(X509 **)(param_2 + 8);
    if (x == (X509 *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_akid.c",0x9c,"v2i_AUTHORITY_KEYID");
      ERR_set_error(0x22,0x79,0);
      goto LAB_00100310;
    }
    pXVar1 = *(X509 **)(param_2 + 0x10);
    bVar12 = pXVar1 == x;
    ERR_set_mark();
    if (*(EVP_PKEY **)(param_2 + 0x38) == (EVP_PKEY *)0x0) {
      uVar4 = (uint)bVar12;
    }
    else {
      uVar4 = X509_check_private_key(*(X509 **)(param_2 + 0x10),*(EVP_PKEY **)(param_2 + 0x38));
    }
    ERR_pop_to_mark();
    if ((cVar11 == '\x02') || ((cVar11 == '\x01' && (uVar4 == 0)))) {
      iVar2 = X509_get_ext_by_NID(x,0x52,-1);
      if ((iVar2 < 0) ||
         ((ext = X509_get_ext(x,iVar2), ext == (X509_EXTENSION *)0x0 ||
          ((pXVar1 == x && (uVar4 == 0)))))) {
LAB_001001d6:
        bVar13 = true;
        x_00 = (EVP_PKEY *)0x0;
      }
      else {
        x_00 = (EVP_PKEY *)X509V3_EXT_d2i(ext);
        iVar2 = ASN1_STRING_length((ASN1_STRING *)x_00);
        if (iVar2 == 0) {
          ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)x_00);
          goto LAB_001001d6;
        }
        bVar13 = x_00 == (EVP_PKEY *)0x0;
        bVar12 = bVar12 && bVar13;
      }
      if ((bVar12) &&
         (pkey = *(EVP_PKEY **)(param_2 + 0x38), x_00 = pkey, bVar13 = bVar12,
         pkey != (EVP_PKEY *)0x0)) {
        x_00 = (EVP_PKEY *)0x0;
        local_48 = (X509_PUBKEY *)0x0;
        iVar2 = X509_PUBKEY_set(&local_48,pkey);
        if (iVar2 != 0) {
          x_00 = (EVP_PKEY *)ossl_x509_pubkey_hash(local_48);
          bVar13 = x_00 == (EVP_PKEY *)0x0;
        }
        X509_PUBKEY_free(local_48);
      }
      if ((cVar11 == '\x02') && (bVar13)) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_akid.c",0xbf,"v2i_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x7b,0);
        goto LAB_00100310;
      }
      if (cVar10 == '\x02') goto LAB_0010043a;
      if ((cVar10 == '\x01' && uVar4 == 0) && (bVar13)) goto LAB_00100438;
      pAVar7 = (ASN1_INTEGER *)0x0;
      pGVar8 = (GENERAL_NAMES *)0x0;
LAB_00100258:
      a->issuer = pGVar8;
      a->serial = pAVar7;
      a->keyid = (ASN1_OCTET_STRING *)x_00;
      goto LAB_00100270;
    }
    if ((cVar10 != '\x02') && ((cVar10 != '\x01' || (uVar4 != 0)))) {
      x_00 = (EVP_PKEY *)0x0;
      pAVar7 = (ASN1_INTEGER *)0x0;
      pGVar8 = (GENERAL_NAMES *)0x0;
      goto LAB_00100258;
    }
LAB_00100438:
    x_00 = (EVP_PKEY *)0x0;
LAB_0010043a:
    pXVar6 = X509_get_issuer_name(x);
    pXVar6 = X509_NAME_dup(pXVar6);
    pAVar7 = (ASN1_INTEGER *)X509_get0_serialNumber(x);
    pAVar7 = ASN1_INTEGER_dup(pAVar7);
    if ((pXVar6 == (X509_NAME *)0x0) || (pAVar7 == (ASN1_INTEGER *)0x0)) {
      ERR_new();
      a_00 = (GENERAL_NAME *)0x0;
      pGVar8 = (GENERAL_NAMES *)0x0;
      ERR_set_debug("crypto/x509/v3_akid.c",200,"v2i_AUTHORITY_KEYID");
      ERR_set_error(0x22,0x7a,0);
    }
    else {
      pGVar8 = (GENERAL_NAMES *)OPENSSL_sk_new_null();
      if ((pGVar8 == (GENERAL_NAMES *)0x0) ||
         (a_00 = GENERAL_NAME_new(), a_00 == (GENERAL_NAME *)0x0)) {
        ERR_new();
        a_00 = (GENERAL_NAME *)0x0;
        ERR_set_debug("crypto/x509/v3_akid.c",0xd0,"v2i_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x8000d,0);
      }
      else {
        iVar2 = OPENSSL_sk_push(pGVar8,a_00);
        if (iVar2 != 0) {
          a_00->type = 4;
          (a_00->d).directoryName = pXVar6;
          goto LAB_00100258;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_akid.c",0xd4,"v2i_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x8000f,0);
      }
    }
  }
  OPENSSL_sk_free(pGVar8);
  GENERAL_NAME_free(a_00);
  X509_NAME_free(pXVar6);
  ASN1_INTEGER_free(pAVar7);
  ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)x_00);
  AUTHORITY_KEYID_free(a);
  a = (AUTHORITY_KEYID *)0x0;
LAB_00100270:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return a;
}



stack_st_CONF_VALUE *
i2v_AUTHORITY_KEYID(undefined8 param_1,undefined8 *param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  char *pcVar2;
  stack_st_CONF_VALUE *psVar3;
  undefined8 uVar4;
  char *name;
  stack_st_CONF_VALUE *local_20;
  
  local_20 = param_3;
  if ((ASN1_OCTET_STRING *)*param_2 == (ASN1_OCTET_STRING *)0x0) {
LAB_001006ed:
    psVar3 = local_20;
    if (((GENERAL_NAMES *)param_2[1] == (GENERAL_NAMES *)0x0) ||
       (psVar3 = i2v_GENERAL_NAMES((X509V3_EXT_METHOD *)0x0,(GENERAL_NAMES *)param_2[1],local_20),
       psVar3 != (stack_st_CONF_VALUE *)0x0)) {
      local_20 = psVar3;
      if ((ASN1_OCTET_STRING *)param_2[2] == (ASN1_OCTET_STRING *)0x0) {
        return local_20;
      }
      pcVar2 = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD *)0x0,(ASN1_OCTET_STRING *)param_2[2]);
      if (pcVar2 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_akid.c",0x47,"i2v_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x8000d,0);
      }
      else {
        iVar1 = X509V3_add_value("serial",pcVar2,&local_20);
        if (iVar1 != 0) {
          CRYPTO_free(pcVar2);
          return local_20;
        }
        CRYPTO_free(pcVar2);
      }
      goto LAB_001007d3;
    }
    ERR_new();
    uVar4 = 0x3f;
  }
  else {
    pcVar2 = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD *)0x0,(ASN1_OCTET_STRING *)*param_2);
    if (pcVar2 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_akid.c",0x31,"i2v_AUTHORITY_KEYID");
      ERR_set_error(0x22,0x8000d,0);
      return (stack_st_CONF_VALUE *)0x0;
    }
    name = "keyid";
    if ((param_2[1] == 0) && (name = (char *)param_2[2], name != (char *)0x0)) {
      name = "keyid";
    }
    iVar1 = X509V3_add_value(name,pcVar2,&local_20);
    if (iVar1 != 0) {
      CRYPTO_free(pcVar2);
      goto LAB_001006ed;
    }
    CRYPTO_free(pcVar2);
    ERR_new();
    uVar4 = 0x37;
  }
  ERR_set_debug("crypto/x509/v3_akid.c",uVar4,"i2v_AUTHORITY_KEYID");
  ERR_set_error(0x22,0x8000b,0);
LAB_001007d3:
  if (param_3 == (stack_st_CONF_VALUE *)0x0) {
    OPENSSL_sk_pop_free(local_20,&X509V3_conf_free);
  }
  return (stack_st_CONF_VALUE *)0x0;
}


