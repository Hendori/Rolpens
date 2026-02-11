
bool pkcs12_add_bag(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == (long *)0x0) {
    return true;
  }
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,param_2);
      if (iVar1 != 0) {
        return true;
      }
      OPENSSL_sk_free(*param_1);
      *param_1 = 0;
    }
    bVar3 = false;
  }
  else {
    iVar1 = OPENSSL_sk_push();
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



PKCS12_SAFEBAG *
pkcs12_add_cert_bag(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                   uchar *param_5,int param_6)

{
  int iVar1;
  PKCS12_SAFEBAG *bag;
  
  bag = (PKCS12_SAFEBAG *)PKCS12_SAFEBAG_create_cert(param_2);
  if ((((bag != (PKCS12_SAFEBAG *)0x0) &&
       ((param_3 == 0 || (iVar1 = PKCS12_add_friendlyname_utf8(bag,param_3,param_4), iVar1 != 0))))
      && ((param_5 == (uchar *)0x0 ||
          (iVar1 = PKCS12_add_localkeyid(bag,param_5,param_6), iVar1 != 0)))) &&
     (iVar1 = pkcs12_add_bag(param_1,bag), iVar1 != 0)) {
    return bag;
  }
  PKCS12_SAFEBAG_free(bag);
  return (PKCS12_SAFEBAG *)0x0;
}



PKCS12_SAFEBAG * PKCS12_add_cert(stack_st_PKCS12_SAFEBAG **pbags,X509 *cert)

{
  uchar *puVar1;
  uchar *puVar2;
  PKCS12_SAFEBAG *pPVar3;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = -1;
  local_24 = -1;
  puVar1 = X509_alias_get0(cert,&local_28);
  puVar2 = X509_keyid_get0(cert,&local_24);
  pPVar3 = (PKCS12_SAFEBAG *)pkcs12_add_cert_bag(pbags,cert,puVar1,local_28,puVar2,local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



PKCS12_SAFEBAG *
PKCS12_add_key_ex(undefined8 param_1,EVP_PKEY *param_2,int param_3,undefined4 param_4,int param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  PKCS12_SAFEBAG *a;
  
  p8 = EVP_PKEY2PKCS8(param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    if ((param_3 == 0) || (iVar1 = PKCS8_add_keyusage(p8,param_3), iVar1 != 0)) {
      if (param_5 == -1) {
        a = (PKCS12_SAFEBAG *)PKCS12_SAFEBAG_create0_p8inf(p8);
        if (a == (PKCS12_SAFEBAG *)0x0) goto LAB_00100250;
      }
      else {
        a = (PKCS12_SAFEBAG *)
            PKCS12_SAFEBAG_create_pkcs8_encrypt_ex
                      (param_5,param_6,0xffffffff,0,0,param_4,p8,param_7,param_8);
        PKCS8_PRIV_KEY_INFO_free(p8);
        if (a == (PKCS12_SAFEBAG *)0x0) goto LAB_00100258;
      }
      iVar1 = pkcs12_add_bag(param_1,a);
      if (iVar1 != 0) {
        return a;
      }
      goto LAB_00100260;
    }
LAB_00100250:
    PKCS8_PRIV_KEY_INFO_free(p8);
  }
LAB_00100258:
  a = (PKCS12_SAFEBAG *)0x0;
LAB_00100260:
  PKCS12_SAFEBAG_free(a);
  return (PKCS12_SAFEBAG *)0x0;
}



PKCS12_SAFEBAG *
PKCS12_add_key(stack_st_PKCS12_SAFEBAG **pbags,EVP_PKEY *key,int key_usage,int iter,int key_nid,
              char *pass)

{
  PKCS12_SAFEBAG *pPVar1;
  
  pPVar1 = (PKCS12_SAFEBAG *)PKCS12_add_key_ex();
  return pPVar1;
}



PKCS12_SAFEBAG * PKCS12_add_secret(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  PKCS12_SAFEBAG *a;
  
  a = (PKCS12_SAFEBAG *)PKCS12_SAFEBAG_create_secret(param_2,4);
  if (a != (PKCS12_SAFEBAG *)0x0) {
    iVar1 = pkcs12_add_bag(param_1,a);
    if (iVar1 != 0) {
      return a;
    }
  }
  PKCS12_SAFEBAG_free(a);
  return (PKCS12_SAFEBAG *)0x0;
}



undefined8
PKCS12_add_safe_ex(long *param_1,stack_st_PKCS12_SAFEBAG *param_2,int param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  PKCS7 *a;
  long lVar3;
  
  bVar1 = false;
  if (*param_1 == 0) {
    lVar3 = OPENSSL_sk_new_null(param_3,param_5);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    bVar1 = true;
  }
  if (param_3 == 0) {
    param_3 = 0x95;
  }
  else if (param_3 == -1) {
    a = PKCS12_pack_p7data(param_2);
    goto LAB_0010036f;
  }
  a = (PKCS7 *)PKCS12_pack_p7encdata_ex
                         (param_3,param_5,0xffffffff,0,0,param_4,param_2,param_6,param_7);
LAB_0010036f:
  if ((a != (PKCS7 *)0x0) && (iVar2 = OPENSSL_sk_push(*param_1,a), iVar2 != 0)) {
    return 1;
  }
  if (bVar1) {
    OPENSSL_sk_free(*param_1);
    *param_1 = 0;
    PKCS7_free(a);
  }
  else {
    PKCS7_free(a);
  }
  return 0;
}



int PKCS12_add_safe(stack_st_PKCS7 **psafes,stack_st_PKCS12_SAFEBAG *bags,int safe_nid,int iter,
                   char *pass)

{
  int iVar1;
  
  iVar1 = PKCS12_add_safe_ex();
  return iVar1;
}



PKCS12 * PKCS12_add_safes_ex(stack_st_PKCS7 *param_1,int param_2,undefined8 param_3,
                            undefined8 param_4)

{
  int iVar1;
  PKCS12 *p12;
  
  if (param_2 < 1) {
    param_2 = 0x15;
  }
  p12 = (PKCS12 *)PKCS12_init_ex(param_2,param_3,param_4);
  if (p12 != (PKCS12 *)0x0) {
    iVar1 = PKCS12_pack_authsafes(p12,param_1);
    if (iVar1 != 0) {
      return p12;
    }
    PKCS12_free(p12);
  }
  return (PKCS12 *)0x0;
}



PKCS12 * PKCS12_create_ex2(char *param_1,uchar *param_2,EVP_PKEY *param_3,X509 *param_4,long param_5
                          ,int param_6,int param_7,int param_8,int param_9,undefined4 param_10,
                          undefined8 param_11,undefined8 param_12,code *param_13,undefined8 param_14
                          )

{
  int iVar1;
  int iter;
  int iVar2;
  int iVar3;
  X509 *cert;
  PKCS12_SAFEBAG *pPVar4;
  EVP_MD *type;
  long lVar5;
  X509_ATTRIBUTE *pXVar6;
  stack_st_X509_ATTRIBUTE *psVar7;
  uchar *puVar8;
  PKCS12 *p12;
  int iVar9;
  undefined8 uVar10;
  stack_st_PKCS12_SAFEBAG *psVar11;
  long in_FS_OFFSET;
  uchar *local_d8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  stack_st_PKCS7 *local_98;
  stack_st_PKCS12_SAFEBAG *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (stack_st_PKCS7 *)0x0;
  iVar3 = 0x1ab;
  if (param_7 != 0) {
    iVar3 = param_7;
  }
  local_90 = (stack_st_PKCS12_SAFEBAG *)0x0;
  local_a4 = 0;
  if (param_6 == 0) {
    param_6 = 0x1ab;
  }
  local_a0 = -1;
  local_9c = 0xffffffff;
  iVar1 = 0x800;
  if (param_8 != 0) {
    iVar1 = param_8;
  }
  iter = 0x800;
  if (param_9 != 0) {
    iter = param_9;
  }
  local_d8 = param_2;
  if (param_3 == (EVP_PKEY *)0x0 && param_4 == (X509 *)0x0) {
    if (param_5 != 0) goto LAB_001005a8;
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_crt.c",0x3f,"PKCS12_create_ex2");
    ERR_set_error(0x23,0x68,0);
  }
  else {
    if (param_3 == (EVP_PKEY *)0x0) {
      if (param_4 == (X509 *)0x0) goto LAB_001005a8;
      if (param_2 == (uchar *)0x0) {
LAB_00100990:
        local_d8 = X509_alias_get0(param_4,&local_a0);
LAB_00100687:
        if (local_a4 == 0) goto LAB_0010096c;
        local_9c = local_a4;
        puVar8 = local_88;
      }
      else {
LAB_0010096c:
        puVar8 = X509_keyid_get0(param_4,(int *)&local_9c);
      }
      lVar5 = pkcs12_add_cert_bag(&local_90,param_4,local_d8,local_a0,puVar8,local_9c);
      if (param_13 == (code *)0x0) goto LAB_001005a8;
      iVar9 = (*param_13)(lVar5,param_14);
      if (iVar9 != -1) {
        if (((lVar5 != 0) && (iVar9 == 0)) &&
           (pPVar4 = (PKCS12_SAFEBAG *)OPENSSL_sk_delete_ptr(local_90,lVar5),
           pPVar4 != (PKCS12_SAFEBAG *)0x0)) {
          PKCS12_SAFEBAG_free(pPVar4);
        }
        goto LAB_001005a8;
      }
      ERR_new();
      uVar10 = 0x58;
LAB_00100931:
      ERR_set_debug("crypto/pkcs12/p12_crt.c",uVar10,"PKCS12_create_ex2");
      ERR_set_error(0x23,0x73,0);
LAB_00100767:
      p12 = (PKCS12 *)0x0;
    }
    else {
      if (param_4 != (X509 *)0x0) {
        iVar9 = X509_check_private_key(param_4,param_3);
        if (iVar9 != 0) {
          type = EVP_sha1();
          iVar9 = X509_digest(param_4,type,local_88,&local_a4);
          if (iVar9 != 0) {
            if (param_2 == (uchar *)0x0) goto LAB_00100990;
            goto LAB_00100687;
          }
        }
        goto LAB_00100792;
      }
LAB_001005a8:
      for (iVar9 = 0; iVar2 = OPENSSL_sk_num(param_5), iVar9 < iVar2; iVar9 = iVar9 + 1) {
        cert = (X509 *)OPENSSL_sk_value(param_5,iVar9);
        pPVar4 = PKCS12_add_cert(&local_90,cert);
        if (pPVar4 == (PKCS12_SAFEBAG *)0x0) goto LAB_00100767;
        if (param_13 != (code *)0x0) {
          iVar2 = (*param_13)(pPVar4,param_14);
          if (iVar2 == -1) {
            ERR_new();
            uVar10 = 0x67;
            goto LAB_00100931;
          }
          if ((iVar2 == 0) &&
             (pPVar4 = (PKCS12_SAFEBAG *)OPENSSL_sk_delete_ptr(local_90,pPVar4),
             pPVar4 != (PKCS12_SAFEBAG *)0x0)) {
            PKCS12_SAFEBAG_free(pPVar4);
          }
        }
      }
      if ((local_90 != (stack_st_PKCS12_SAFEBAG *)0x0) &&
         (iVar3 = PKCS12_add_safe_ex(&local_98,local_90,iVar3,iVar1,param_1,param_11,param_12),
         iVar3 == 0)) goto LAB_00100767;
      OPENSSL_sk_pop_free(local_90,PKCS12_SAFEBAG_free);
      local_90 = (stack_st_PKCS12_SAFEBAG *)0x0;
      if (param_3 != (EVP_PKEY *)0x0) {
        pPVar4 = (PKCS12_SAFEBAG *)
                 PKCS12_add_key_ex(&local_90,param_3,param_10,iVar1,param_6,param_1,param_11,
                                   param_12);
        if (pPVar4 != (PKCS12_SAFEBAG *)0x0) {
          iVar3 = EVP_PKEY_get_attr_by_NID(param_3,0x1a1,-1);
          if (-1 < iVar3) {
            pXVar6 = EVP_PKEY_get_attr(param_3,iVar3);
            psVar7 = X509at_add1_attr(&pPVar4->attrib,pXVar6);
            if (psVar7 == (stack_st_X509_ATTRIBUTE *)0x0) goto LAB_00100767;
          }
          iVar3 = EVP_PKEY_get_attr_by_NID(param_3,0x358,-1);
          if (-1 < iVar3) {
            pXVar6 = EVP_PKEY_get_attr(param_3,iVar3);
            psVar7 = X509at_add1_attr(&pPVar4->attrib,pXVar6);
            if (psVar7 == (stack_st_X509_ATTRIBUTE *)0x0) goto LAB_00100767;
          }
          if (((local_d8 == (uchar *)0x0) ||
              (iVar3 = PKCS12_add_friendlyname_utf8(pPVar4,local_d8,0xffffffff), iVar3 != 0)) &&
             ((local_a4 == 0 ||
              (iVar3 = PKCS12_add_localkeyid(pPVar4,local_88,local_a4), iVar3 != 0)))) {
            if (param_13 != (code *)0x0) {
              iVar3 = (*param_13)(pPVar4,param_14);
              if (iVar3 == -1) {
                ERR_new();
                ERR_set_debug("crypto/pkcs12/p12_crt.c",0x89,"PKCS12_create_ex2");
                ERR_set_error(0x23,0x73,0);
                goto LAB_00100767;
              }
              if ((iVar3 == 0) &&
                 (pPVar4 = (PKCS12_SAFEBAG *)OPENSSL_sk_delete_ptr(local_90,pPVar4),
                 pPVar4 != (PKCS12_SAFEBAG *)0x0)) {
                PKCS12_SAFEBAG_free(pPVar4);
              }
            }
            if (local_90 == (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_001009a6;
            iVar3 = PKCS12_add_safe(&local_98,local_90,-1,0,(char *)0x0);
            psVar11 = local_90;
            if (iVar3 != 0) goto LAB_001009b0;
          }
        }
        goto LAB_00100767;
      }
LAB_001009a6:
      psVar11 = (stack_st_PKCS12_SAFEBAG *)0x0;
LAB_001009b0:
      OPENSSL_sk_pop_free(psVar11,PKCS12_SAFEBAG_free);
      local_90 = (stack_st_PKCS12_SAFEBAG *)0x0;
      p12 = (PKCS12 *)PKCS12_add_safes_ex(local_98,0,param_11);
      if (p12 == (PKCS12 *)0x0) goto LAB_00100767;
      OPENSSL_sk_pop_free(local_98,PKCS7_free);
      local_98 = (stack_st_PKCS7 *)0x0;
      if ((iter == -1) ||
         (iVar3 = PKCS12_set_mac(p12,param_1,-1,(uchar *)0x0,0,iter,(EVP_MD *)0x0), iVar3 != 0))
      goto LAB_00100794;
    }
    PKCS12_free(p12);
    OPENSSL_sk_pop_free(local_98,PKCS7_free);
    OPENSSL_sk_pop_free(local_90,PKCS12_SAFEBAG_free);
  }
LAB_00100792:
  p12 = (PKCS12 *)0x0;
LAB_00100794:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p12;
}



void PKCS12_create_ex(void)

{
  PKCS12_create_ex2();
  return;
}



PKCS12 * PKCS12_create(char *pass,char *name,EVP_PKEY *pkey,X509 *cert,stack_st_X509 *ca,int nid_key
                      ,int nid_cert,int iter,int mac_iter,int keytype)

{
  PKCS12 *pPVar1;
  
  pPVar1 = (PKCS12 *)PKCS12_create_ex();
  return pPVar1;
}



PKCS12 * PKCS12_add_safes(stack_st_PKCS7 *safes,int p7_nid)

{
  PKCS12 *pPVar1;
  
  pPVar1 = (PKCS12 *)PKCS12_add_safes_ex(safes,p7_nid,0,0);
  return pPVar1;
}


