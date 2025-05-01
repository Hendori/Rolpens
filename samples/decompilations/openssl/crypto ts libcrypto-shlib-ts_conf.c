
X509 * TS_CONF_load_cert(char *param_1)

{
  BIO *bp;
  X509 *pXVar1;
  
  bp = BIO_new_file(param_1,"r");
  if (bp != (BIO *)0x0) {
    pXVar1 = PEM_read_bio_X509_AUX(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    if (pXVar1 != (X509 *)0x0) goto LAB_00100034;
  }
  ERR_new();
  pXVar1 = (X509 *)0x0;
  ERR_set_debug("crypto/ts/ts_conf.c",0x3e,"TS_CONF_load_cert");
  ERR_set_error(0x2f,0x89,0);
LAB_00100034:
  BIO_free(bp);
  return pXVar1;
}



long TS_CONF_load_certs(char *param_1)

{
  int iVar1;
  BIO *bp;
  long lVar2;
  stack_st_X509_INFO *psVar3;
  long *plVar4;
  int iVar5;
  
  bp = BIO_new_file(param_1,"r");
  if (bp != (BIO *)0x0) {
    lVar2 = OPENSSL_sk_new_null();
    if (lVar2 != 0) {
      psVar3 = PEM_X509_INFO_read_bio(bp,(stack_st_X509_INFO *)0x0,(undefined1 *)0x0,(void *)0x0);
      iVar5 = 0;
      while( true ) {
        iVar1 = OPENSSL_sk_num(psVar3);
        if (iVar1 <= iVar5) break;
        plVar4 = (long *)OPENSSL_sk_value(psVar3,iVar5);
        if (*plVar4 != 0) {
          iVar1 = X509_add_cert(lVar2,*plVar4,0);
          if (iVar1 == 0) {
            OSSL_STACK_OF_X509_free(lVar2);
            goto LAB_00100143;
          }
          *plVar4 = 0;
        }
        iVar5 = iVar5 + 1;
      }
      goto LAB_00100119;
    }
  }
  psVar3 = (stack_st_X509_INFO *)0x0;
LAB_00100143:
  ERR_new();
  lVar2 = 0;
  ERR_set_debug("crypto/ts/ts_conf.c",0x62,"TS_CONF_load_certs");
  ERR_set_error(0x2f,0x89,0);
LAB_00100119:
  OPENSSL_sk_pop_free(psVar3,&X509_INFO_free);
  BIO_free(bp);
  return lVar2;
}



EVP_PKEY * TS_CONF_load_key(char *param_1,void *param_2)

{
  BIO *bp;
  EVP_PKEY *pEVar1;
  
  bp = BIO_new_file(param_1,"r");
  if (bp != (BIO *)0x0) {
    pEVar1 = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,param_2);
    if (pEVar1 != (EVP_PKEY *)0x0) goto LAB_001001c8;
  }
  ERR_new();
  pEVar1 = (EVP_PKEY *)0x0;
  ERR_set_debug("crypto/ts/ts_conf.c",0x76,"TS_CONF_load_key");
  ERR_set_error(0x2f,0x8a,0);
LAB_001001c8:
  BIO_free(bp);
  return pEVar1;
}



char * TS_CONF_get_tsa_section(CONF *param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    param_2 = NCONF_get_string(param_1,"tsa","default_tsa");
    if (param_2 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
      ERR_set_error(0x2f,0x88,"%s::%s",&_LC3,"default_tsa");
    }
  }
  return param_2;
}



undefined8 TS_CONF_set_serial(CONF *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = NCONF_get_string(param_1,param_2,"serial");
  if (pcVar1 != (char *)0x0) {
    TS_RESP_CTX_set_serial_cb(param_4,param_3,pcVar1);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
  ERR_set_error(0x2f,0x88,"%s::%s",param_2,"serial");
  return 0;
}



undefined8 TS_CONF_set_default_engine(char *param_1)

{
  int iVar1;
  ENGINE *e;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_1,"builtin");
  if (iVar1 == 0) {
    return 1;
  }
  e = ENGINE_by_id(param_1);
  if (e != (ENGINE *)0x0) {
    iVar1 = strcmp(param_1,"chil");
    if (iVar1 == 0) {
      ENGINE_ctrl(e,100,1,(void *)0x0,(f *)0x0);
    }
    iVar1 = ENGINE_set_default(e,0xffff);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_001003aa;
    }
  }
  ERR_new();
  uVar2 = 0;
  ERR_set_debug("crypto/ts/ts_conf.c",0xc6,"TS_CONF_set_default_engine");
  ERR_set_error(0x2f,0x7f,"engine:%s",param_1);
LAB_001003aa:
  ENGINE_free(e);
  return uVar2;
}



undefined4 TS_CONF_set_crypto_device(CONF *param_1,char *param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = NCONF_get_string(param_1,param_2,"crypto_device");
    if (pcVar2 == (char *)0x0) {
      return 1;
    }
    iVar1 = TS_CONF_set_default_engine(pcVar2);
  }
  else {
    iVar1 = TS_CONF_set_default_engine(param_3);
  }
  if (iVar1 != 0) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
  ERR_set_error(0x2f,0x87,"%s::%s",param_2,"crypto_device");
  return 0;
}



bool TS_CONF_set_signer_cert(CONF *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  X509 *a;
  bool bVar2;
  
  if (param_3 == (char *)0x0) {
    param_3 = NCONF_get_string(param_1,param_2,"signer_cert");
    if (param_3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
      bVar2 = false;
      ERR_set_error(0x2f,0x88,"%s::%s",param_2,"signer_cert");
      a = (X509 *)0x0;
      goto LAB_001004fe;
    }
  }
  bVar2 = false;
  a = (X509 *)TS_CONF_load_cert(param_3);
  if (a != (X509 *)0x0) {
    iVar1 = TS_RESP_CTX_set_signer_cert(param_4,a);
    bVar2 = iVar1 != 0;
  }
LAB_001004fe:
  X509_free(a);
  return bVar2;
}



bool TS_CONF_set_certs(CONF *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_3 == (char *)0x0) {
    param_3 = NCONF_get_string(param_1,param_2,"certs");
    if (param_3 == (char *)0x0) {
      bVar3 = true;
      lVar2 = 0;
      goto LAB_001005ba;
    }
  }
  bVar3 = false;
  lVar2 = TS_CONF_load_certs(param_3);
  if (lVar2 != 0) {
    iVar1 = TS_RESP_CTX_set_certs(param_4,lVar2);
    bVar3 = iVar1 != 0;
  }
LAB_001005ba:
  OSSL_STACK_OF_X509_free(lVar2);
  return bVar3;
}



bool TS_CONF_set_signer_key
               (CONF *param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  EVP_PKEY *pkey;
  bool bVar2;
  
  if (param_3 == (char *)0x0) {
    param_3 = NCONF_get_string(param_1,param_2,"signer_key");
    if (param_3 == (char *)0x0) {
      ERR_new();
      bVar2 = false;
      ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
      ERR_set_error(0x2f,0x88,"%s::%s",param_2,"signer_key");
      pkey = (EVP_PKEY *)0x0;
      goto LAB_00100632;
    }
  }
  bVar2 = false;
  pkey = (EVP_PKEY *)TS_CONF_load_key(param_3,param_4);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = TS_RESP_CTX_set_signer_key(param_5,pkey);
    bVar2 = iVar1 != 0;
  }
LAB_00100632:
  EVP_PKEY_free(pkey);
  return bVar2;
}



bool TS_CONF_set_signer_digest(CONF *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD *pEVar2;
  
  if ((param_3 == (char *)0x0) &&
     (param_3 = NCONF_get_string(param_1,param_2,"signer_digest"), param_3 == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
    ERR_set_error(0x2f,0x88,"%s::%s",param_2,"signer_digest");
  }
  else {
    pEVar2 = EVP_get_digestbyname(param_3);
    if (pEVar2 != (EVP_MD *)0x0) {
      iVar1 = TS_RESP_CTX_set_signer_digest(param_4);
      return iVar1 != 0;
    }
    ERR_new();
    ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
    ERR_set_error(0x2f,0x87,"%s::%s",param_2,"signer_digest");
  }
  return false;
}



bool TS_CONF_set_def_policy(CONF *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  ASN1_OBJECT *a;
  
  if ((param_3 == (char *)0x0) &&
     (param_3 = NCONF_get_string(param_1,param_2,"default_policy"), param_3 == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
    ERR_set_error(0x2f,0x88,"%s::%s",param_2,"default_policy");
  }
  else {
    a = OBJ_txt2obj(param_3,0);
    if (a != (ASN1_OBJECT *)0x0) {
      iVar1 = TS_RESP_CTX_set_def_policy(param_4,a);
      ASN1_OBJECT_free(a);
      return iVar1 != 0;
    }
    ERR_new();
    ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
    ERR_set_error(0x2f,0x87,"%s::%s",param_2,"default_policy");
  }
  ASN1_OBJECT_free((ASN1_OBJECT *)0x0);
  return false;
}



undefined8 TS_CONF_set_policies(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  stack_st_CONF_VALUE *line;
  long lVar2;
  ASN1_OBJECT *a;
  undefined8 uVar3;
  int iVar4;
  
  line = (stack_st_CONF_VALUE *)NCONF_get_string(param_1,param_2,"other_policies");
  if (line != (stack_st_CONF_VALUE *)0x0) {
    line = X509V3_parse_list((char *)line);
    if (line == (stack_st_CONF_VALUE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
      uVar3 = 0;
      ERR_set_error(0x2f,0x87,"%s::%s",param_2,"other_policies");
      goto LAB_00100995;
    }
  }
  iVar4 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(line);
    if (iVar1 <= iVar4) break;
    lVar2 = OPENSSL_sk_value(line);
    if (*(char **)(lVar2 + 0x10) != (char *)0x0) {
      a = OBJ_txt2obj(*(char **)(lVar2 + 0x10),0);
      if (a != (ASN1_OBJECT *)0x0) goto LAB_001008f7;
LAB_00100943:
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
      ERR_set_error(0x2f,0x87,"%s::%s",param_2,"other_policies");
LAB_00100982:
      uVar3 = 0;
      goto LAB_00100995;
    }
    a = OBJ_txt2obj(*(char **)(lVar2 + 8),0);
    if (a == (ASN1_OBJECT *)0x0) goto LAB_00100943;
LAB_001008f7:
    iVar1 = TS_RESP_CTX_add_policy(param_3,a);
    if (iVar1 == 0) goto LAB_00100982;
    iVar4 = iVar4 + 1;
    ASN1_OBJECT_free(a);
  }
  uVar3 = 1;
LAB_00100995:
  OPENSSL_sk_pop_free(line,&X509V3_conf_free);
  return uVar3;
}



undefined8 TS_CONF_set_digests(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *line;
  stack_st_CONF_VALUE *psVar2;
  long lVar3;
  EVP_MD *pEVar4;
  int iVar5;
  undefined8 uVar6;
  
  line = NCONF_get_string(param_1,param_2,"digests");
  if (line == (char *)0x0) {
    ERR_new();
    uVar6 = 0;
    ERR_set_debug("crypto/ts/ts_conf.c",0x7f,"ts_CONF_lookup_fail");
    ERR_set_error(0x2f,0x88,"%s::%s",param_2,"digests");
    psVar2 = (stack_st_CONF_VALUE *)0x0;
  }
  else {
    psVar2 = X509V3_parse_list(line);
    if (psVar2 != (stack_st_CONF_VALUE *)0x0) {
      iVar5 = 0;
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 != 0) {
        for (; iVar1 = OPENSSL_sk_num(psVar2), iVar5 < iVar1; iVar5 = iVar5 + 1) {
          lVar3 = OPENSSL_sk_value(psVar2,iVar5);
          if (*(char **)(lVar3 + 0x10) == (char *)0x0) {
            pEVar4 = EVP_get_digestbyname(*(char **)(lVar3 + 8));
          }
          else {
            pEVar4 = EVP_get_digestbyname(*(char **)(lVar3 + 0x10));
          }
          if (pEVar4 == (EVP_MD *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
            goto LAB_00100ae8;
          }
          iVar1 = TS_RESP_CTX_add_md(param_3,pEVar4);
          if (iVar1 == 0) goto LAB_00100b03;
        }
        uVar6 = 1;
        goto LAB_00100b05;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
LAB_00100ae8:
    ERR_set_error(0x2f,0x87,"%s::%s",param_2,"digests");
LAB_00100b03:
    uVar6 = 0;
  }
LAB_00100b05:
  OPENSSL_sk_pop_free(psVar2,&X509V3_conf_free);
  return uVar6;
}



bool TS_CONF_set_accuracy(CONF *param_1,char *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  stack_st_CONF_VALUE *line;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  line = (stack_st_CONF_VALUE *)NCONF_get_string(param_1,param_2,"accuracy");
  if (line != (stack_st_CONF_VALUE *)0x0) {
    line = X509V3_parse_list((char *)line);
    if (line == (stack_st_CONF_VALUE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
LAB_00100cf5:
      bVar4 = false;
      ERR_set_error(0x2f,0x87,"%s::%s",param_2,"accuracy");
      goto LAB_00100cb5;
    }
  }
  iVar3 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(line);
    if (iVar1 <= iVar3) break;
    lVar2 = OPENSSL_sk_value(line,iVar3);
    __s1 = *(char **)(lVar2 + 8);
    iVar1 = strcmp(__s1,"secs");
    if (iVar1 == 0) {
      if (*(char **)(lVar2 + 0x10) != (char *)0x0) {
        lVar2 = strtol(*(char **)(lVar2 + 0x10),(char **)0x0,10);
        local_54 = (undefined4)lVar2;
      }
    }
    else {
      iVar1 = strcmp(__s1,"millisecs");
      if (iVar1 == 0) {
        if (*(char **)(lVar2 + 0x10) != (char *)0x0) {
          lVar2 = strtol(*(char **)(lVar2 + 0x10),(char **)0x0,10);
          local_50 = (undefined4)lVar2;
        }
      }
      else {
        iVar1 = strcmp(__s1,"microsecs");
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
          goto LAB_00100cf5;
        }
        if (*(char **)(lVar2 + 0x10) != (char *)0x0) {
          lVar2 = strtol(*(char **)(lVar2 + 0x10),(char **)0x0,10);
          local_4c = (undefined4)lVar2;
        }
      }
    }
    iVar3 = iVar3 + 1;
  }
  iVar3 = TS_RESP_CTX_set_accuracy(param_3,local_54,local_50,local_4c);
  bVar4 = iVar3 != 0;
LAB_00100cb5:
  OPENSSL_sk_pop_free(line,&X509V3_conf_free);
  return bVar4;
}



bool TS_CONF_set_clock_precision_digits(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = _CONF_get_number(param_1,param_2,"clock_precision_digits");
  if (uVar2 < 7) {
    iVar1 = TS_RESP_CTX_set_clock_precision_digits(param_3,uVar2 & 0xffffffff);
    return iVar1 != 0;
  }
  ERR_new();
  ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
  ERR_set_error(0x2f,0x87,"%s::%s",param_2,"clock_precision_digits");
  return false;
}



undefined8 TS_CONF_set_ordering(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *__s1;
  
  __s1 = NCONF_get_string(param_1,param_2,"ordering");
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"yes");
    if (iVar1 == 0) {
      TS_RESP_CTX_add_flags(param_3,2);
    }
    else if (((*__s1 != 'n') || (__s1[1] != 'o')) || (__s1[2] != '\0')) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
      ERR_set_error(0x2f,0x87,"%s::%s",param_2,"ordering");
      return 0;
    }
  }
  return 1;
}



undefined8 TS_CONF_set_tsa_name(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *__s1;
  
  __s1 = NCONF_get_string(param_1,param_2,"tsa_name");
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"yes");
    if (iVar1 == 0) {
      TS_RESP_CTX_add_flags(param_3,1);
    }
    else if (((*__s1 != 'n') || (__s1[1] != 'o')) || (__s1[2] != '\0')) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
      ERR_set_error(0x2f,0x87,"%s::%s",param_2,"tsa_name");
      return 0;
    }
  }
  return 1;
}



undefined8 TS_CONF_set_ess_cert_id_chain(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *__s1;
  
  __s1 = NCONF_get_string(param_1,param_2,"ess_cert_id_chain");
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"yes");
    if (iVar1 == 0) {
      TS_RESP_CTX_add_flags(param_3,4);
    }
    else if (((*__s1 != 'n') || (__s1[1] != 'o')) || (__s1[2] != '\0')) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
      ERR_set_error(0x2f,0x87,"%s::%s",param_2,"ess_cert_id_chain");
      return 0;
    }
  }
  return 1;
}



bool TS_CONF_set_ess_cert_id_digest(CONF *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *name;
  EVP_MD *pEVar2;
  
  name = NCONF_get_string(param_1,param_2,"ess_cert_id_alg");
  if (name == (char *)0x0) {
    name = "sha256";
  }
  pEVar2 = EVP_get_digestbyname(name);
  if (pEVar2 != (EVP_MD *)0x0) {
    iVar1 = TS_RESP_CTX_set_ess_cert_id_digest(param_3,pEVar2);
    return iVar1 != 0;
  }
  ERR_new();
  ERR_set_debug("crypto/ts/ts_conf.c",0x84,"ts_CONF_invalid");
  ERR_set_error(0x2f,0x87,"%s::%s",param_2,"ess_cert_id_alg");
  return false;
}


