
void i2d_OSSL_CMP_MSG(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_MSG_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_MSG_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_MSG_it();
  ASN1_item_free(param_1,it);
  return;
}



bool ossl_cmp_msg_set0_libctx(long param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    CRYPTO_free(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    bVar2 = true;
    if (param_3 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_3,"crypto/cmp/cmp_msg.c",0x39);
      bVar2 = pcVar1 != (char *)0x0;
      *(char **)(param_1 + 0x28) = pcVar1;
    }
    return bVar2;
  }
  return true;
}



undefined8 OSSL_CMP_MSG_new(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_CMP_MSG_it();
  uVar2 = ASN1_item_new_ex(uVar2,param_1,param_2);
  iVar1 = ossl_cmp_msg_set0_libctx(uVar2,param_1,param_2);
  if (iVar1 != 0) {
    return uVar2;
  }
  OSSL_CMP_MSG_free(uVar2);
  return 0;
}



undefined8 OSSL_CMP_MSG_get0_header(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x44,"OSSL_CMP_MSG_get0_header");
  ERR_set_error(0x3a,0x67,0);
  return 0;
}



char * ossl_cmp_bodytype_to_string(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "illegal body type";
  if (param_1 < 0x1b) {
    pcVar1 = *(char **)(type_names_24 + (long)(int)param_1 * 8);
  }
  return pcVar1;
}



undefined8 ossl_cmp_msg_set_bodytype(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
    **(undefined4 **)(param_1 + 8) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 OSSL_CMP_MSG_get_bodytype(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != 0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  return uVar1;
}



long OSSL_CMP_MSG_get0_certreq_publickey(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = OSSL_CMP_MSG_get_bodytype();
  if (((uint)uVar1 < 8) && ((0x85UL >> (uVar1 & 0x3f) & 1) != 0)) {
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8),0);
    if (lVar2 == 0) {
      ERR_new(0);
      ERR_set_debug("crypto/cmp/cmp_msg.c",0x77,"OSSL_CMP_MSG_get0_certreq_publickey");
      ERR_set_error(0x3a,0x9d,0);
    }
    else {
      lVar2 = OSSL_CRMF_MSG_get0_tmpl();
      if (lVar2 != 0) {
        lVar2 = OSSL_CRMF_CERTTEMPLATE_get0_publicKey(lVar2);
        if (lVar2 != 0) {
          return lVar2;
        }
      }
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_msg.c",0x7c,"OSSL_CMP_MSG_get0_certreq_publickey");
      ERR_set_error(0x3a,0x76,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x81,"OSSL_CMP_MSG_get0_certreq_publickey");
    ERR_set_error(0x3a,0x85,0);
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 * ossl_cmp_msg_create(undefined8 *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  X509_REQ *pXVar6;
  ASN1_TYPE *pAVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)OSSL_CMP_MSG_new(*param_1,param_1[1]);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar2 = ossl_cmp_hdr_init(param_1,*puVar3);
  if (((iVar2 == 0) || (iVar2 = ossl_cmp_msg_set_bodytype(puVar3,param_2), iVar2 == 0)) ||
     ((param_1[0x28] != 0 && (iVar2 = ossl_cmp_hdr_generalInfo_push1_items(*puVar3), iVar2 == 0))))
  goto LAB_00100390;
  if (param_2 < 8) {
    if (param_2 < 0) goto switchD_0010035b_caseD_9;
    uVar5 = 1L << ((byte)param_2 & 0x3f);
    if ((uVar5 & 0x85) == 0) {
      if ((uVar5 & 10) != 0) goto switchD_0010035b_caseD_8;
      if (param_2 != 4) goto switchD_0010035b_caseD_9;
      if ((X509_REQ *)param_1[0x37] == (X509_REQ *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_msg.c",0xbe,"ossl_cmp_msg_create");
        ERR_set_error(0x3a,0x79,0);
        goto LAB_00100390;
      }
      lVar1 = puVar3[1];
      pXVar6 = X509_REQ_dup((X509_REQ *)param_1[0x37]);
      *(X509_REQ **)(lVar1 + 8) = pXVar6;
    }
    else {
      lVar1 = puVar3[1];
      pXVar6 = (X509_REQ *)OSSL_CRMF_MSGS_new();
      *(X509_REQ **)(lVar1 + 8) = pXVar6;
    }
    goto joined_r0x00100448;
  }
  switch(param_2) {
  case 8:
switchD_0010035b_caseD_8:
    lVar1 = puVar3[1];
    pXVar6 = (X509_REQ *)OSSL_CMP_CERTREPMESSAGE_new();
    *(X509_REQ **)(lVar1 + 8) = pXVar6;
    break;
  default:
switchD_0010035b_caseD_9:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0xf5,"ossl_cmp_msg_create");
    ERR_set_error(0x3a,0x85,0);
    goto LAB_00100390;
  case 0xb:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
    lVar1 = puVar3[1];
    lVar4 = OPENSSL_sk_new_null();
    *(long *)(lVar1 + 8) = lVar4;
    if (lVar4 != 0) {
      return puVar3;
    }
    goto LAB_00100390;
  case 0xc:
    lVar1 = puVar3[1];
    pXVar6 = (X509_REQ *)OSSL_CMP_REVREPCONTENT_new();
    *(X509_REQ **)(lVar1 + 8) = pXVar6;
    break;
  case 0x13:
    lVar1 = puVar3[1];
    pAVar7 = ASN1_TYPE_new();
    *(ASN1_TYPE **)(lVar1 + 8) = pAVar7;
    if (pAVar7 != (ASN1_TYPE *)0x0) {
      ASN1_TYPE_set(*(ASN1_TYPE **)(puVar3[1] + 8),5,(void *)0x0);
      return puVar3;
    }
    goto LAB_00100390;
  case 0x17:
    lVar1 = puVar3[1];
    pXVar6 = (X509_REQ *)OSSL_CMP_ERRORMSGCONTENT_new();
    *(X509_REQ **)(lVar1 + 8) = pXVar6;
  }
joined_r0x00100448:
  if (pXVar6 != (X509_REQ *)0x0) {
    return puVar3;
  }
LAB_00100390:
  OSSL_CMP_MSG_free(puVar3);
  return (undefined8 *)0x0;
}



long OSSL_CMP_CTX_setup_CRM(long param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  X509 *pXVar5;
  X509_NAME *pXVar6;
  long lVar7;
  undefined8 uVar8;
  X509_NAME_ENTRY *pXVar9;
  undefined8 uVar10;
  X509_EXTENSION *pXVar11;
  stack_st_X509_EXTENSION *psVar12;
  time_t t;
  ASN1_TIME *a;
  ASN1_TIME *a_00;
  void *ext_struc;
  X509 *a_01;
  X509 *a_02;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  uint local_50;
  stack_st_X509_EXTENSION *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = OSSL_CMP_CTX_get_option();
  a_02 = *(X509 **)(param_1 + 0x1b0);
  if (a_02 == (X509 *)0x0) {
    pXVar5 = *(X509 **)(param_1 + 200);
    lVar4 = ossl_cmp_ctx_get0_newPubkey(param_1);
    bVar1 = true;
    a_01 = pXVar5;
    if (pXVar5 != (X509 *)0x0) goto LAB_00100554;
  }
  else {
    lVar4 = ossl_cmp_ctx_get0_newPubkey(param_1);
    a_01 = a_02;
LAB_00100554:
    pXVar5 = (X509 *)X509_get_subject_name(a_01);
    bVar1 = false;
    a_02 = a_01;
  }
  if (*(X509_NAME **)(param_1 + 0x180) == (X509_NAME *)0x0) {
    if (*(long *)(param_1 + 0x1b8) == 0) {
      if ((param_2 == 0) &&
         ((iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x188)), 0 < iVar3 ||
          (iVar3 = OSSL_CMP_CTX_reqExtensions_have_SAN(param_1), iVar3 == 1)))) goto LAB_00100950;
      bVar13 = pXVar5 == (X509 *)0x0;
    }
    else {
      pXVar5 = (X509 *)X509_REQ_get_subject_name();
      bVar13 = pXVar5 == (X509 *)0x0;
    }
  }
  else {
    pXVar9 = X509_NAME_get_entry(*(X509_NAME **)(param_1 + 0x180),0);
    if (pXVar9 == (X509_NAME_ENTRY *)0x0) {
LAB_00100950:
      bVar13 = true;
      pXVar5 = (X509 *)0x0;
    }
    else {
      pXVar5 = *(X509 **)(param_1 + 0x180);
      bVar13 = pXVar5 == (X509 *)0x0;
    }
  }
  if ((*(X509_NAME **)(param_1 + 0x168) != (X509_NAME *)0x0) || (bVar1)) {
    pXVar6 = (X509_NAME *)X509_NAME_get_entry(*(X509_NAME **)(param_1 + 0x168),0);
    if (pXVar6 != (X509_NAME *)0x0) {
      pXVar6 = *(X509_NAME **)(param_1 + 0x168);
    }
    local_48 = (stack_st_X509_EXTENSION *)0x0;
    local_50 = (uint)(byte)(*(int *)(param_1 + 0x194) != 0 | bVar13);
    if (iVar2 != -1 && lVar4 == 0) goto LAB_001008ec;
    bVar14 = param_2 != 0;
    if (((bool)(bVar1 & bVar14)) &&
       (bVar14 = (bool)(bVar1 & bVar14), *(long *)(param_1 + 0x1b8) == 0)) {
      ERR_new();
      lVar7 = 0;
      ERR_set_debug("crypto/cmp/cmp_msg.c",0x12d,"OSSL_CMP_CTX_setup_CRM");
      ERR_set_error(0x3a,0xa8,0);
      goto LAB_0010067b;
    }
LAB_0010061c:
    local_48 = (stack_st_X509_EXTENSION *)0x0;
    lVar7 = OSSL_CRMF_MSG_new();
    if (lVar7 != 0) {
      uVar8 = OSSL_CRMF_MSG_get0_tmpl(lVar7);
      iVar3 = OSSL_CRMF_MSG_set_certReqId(lVar7,param_3);
      if (iVar3 == 0) {
LAB_0010064e:
        ext_struc = (void *)0x0;
LAB_00100651:
        OSSL_CRMF_MSG_free(lVar7);
        lVar7 = 0;
      }
      else {
        uVar10 = OSSL_CRMF_MSG_get0_tmpl(lVar7);
        iVar3 = OSSL_CRMF_CERTTEMPLATE_fill(uVar10,lVar4,pXVar5,pXVar6,0);
        if (iVar3 == 0) goto LAB_0010064e;
        if ((iVar2 == -1) && (lVar4 != 0)) {
          uVar8 = OSSL_CRMF_CERTTEMPLATE_get0_publicKey(uVar8);
          X509_PUBKEY_set0_public_key(uVar8,0,0);
        }
        if (*(int *)(param_1 + 0x178) != 0) {
          t = time((time_t *)0x0);
          a = ASN1_TIME_adj((ASN1_TIME *)0x0,t,0,0);
          a_00 = ASN1_TIME_adj((ASN1_TIME *)0x0,t,*(int *)(param_1 + 0x178),0);
          if (((a == (ASN1_TIME *)0x0) || (a_00 == (ASN1_TIME *)0x0)) ||
             (iVar2 = OSSL_CRMF_MSG_set0_validity(lVar7,a,a_00), iVar2 == 0)) {
            ASN1_TIME_free(a);
            ASN1_TIME_free(a_00);
            goto LAB_0010064e;
          }
        }
        if ((*(X509_REQ **)(param_1 + 0x1b8) != (X509_REQ *)0x0) &&
           (local_48 = X509_REQ_get_extensions(*(X509_REQ **)(param_1 + 0x1b8)),
           local_48 == (stack_st_X509_EXTENSION *)0x0)) goto LAB_0010064e;
        if (((*(int *)(param_1 + 400) == 0) &&
            ((iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x188)), iVar2 < 1 &&
             (iVar2 = OSSL_CMP_CTX_reqExtensions_have_SAN(param_1), a_02 != (X509 *)0x0)))) &&
           (iVar2 != 1)) {
          psVar12 = (stack_st_X509_EXTENSION *)X509_get0_extensions(a_02);
          ext_struc = X509V3_get_d2i(psVar12,0x55,(int *)0x0,(int *)0x0);
          if (ext_struc == (void *)0x0) goto LAB_00100769;
          pXVar11 = X509V3_EXT_i2d(0x55,local_50,ext_struc);
          if (pXVar11 != (X509_EXTENSION *)0x0) {
            psVar12 = X509v3_add_ext(&local_48,pXVar11,0);
            X509_EXTENSION_free(pXVar11);
            if (psVar12 == (stack_st_X509_EXTENSION *)0x0) goto LAB_00100651;
            goto LAB_0010076c;
          }
          goto LAB_00100651;
        }
LAB_00100769:
        ext_struc = (void *)0x0;
LAB_0010076c:
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x198));
        if ((0 < iVar2) &&
           (lVar4 = X509v3_add_extensions(&local_48,*(undefined8 *)(param_1 + 0x198)), lVar4 == 0))
        goto LAB_00100651;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x188));
        if (0 < iVar2) {
          pXVar11 = X509V3_EXT_i2d(0x55,local_50,*(void **)(param_1 + 0x188));
          if (pXVar11 != (X509_EXTENSION *)0x0) {
            psVar12 = X509v3_add_ext(&local_48,pXVar11,0);
            X509_EXTENSION_free(pXVar11);
            if (psVar12 != (stack_st_X509_EXTENSION *)0x0) goto LAB_001007aa;
          }
          goto LAB_00100651;
        }
LAB_001007aa:
        if (*(void **)(param_1 + 0x1a0) != (void *)0x0) {
          pXVar11 = X509V3_EXT_i2d(0x59,*(int *)(param_1 + 0x1a8),*(void **)(param_1 + 0x1a0));
          if (pXVar11 != (X509_EXTENSION *)0x0) {
            psVar12 = X509v3_add_ext(&local_48,pXVar11,0);
            X509_EXTENSION_free(pXVar11);
            if (psVar12 != (stack_st_X509_EXTENSION *)0x0) goto LAB_001007f5;
          }
          goto LAB_00100651;
        }
LAB_001007f5:
        iVar2 = OSSL_CRMF_MSG_set0_extensions(lVar7,local_48);
        if (iVar2 == 0) goto LAB_00100651;
        local_48 = (stack_st_X509_EXTENSION *)0x0;
        if ((a_02 != (X509 *)0x0) && (bVar14)) {
          uVar8 = X509_get0_serialNumber(a_02);
          pXVar6 = X509_get_issuer_name(a_02);
          lVar4 = OSSL_CRMF_CERTID_gen(pXVar6,uVar8);
          if (lVar4 != 0) {
            iVar2 = OSSL_CRMF_MSG_set1_regCtrl_oldCertID(lVar7,lVar4);
            OSSL_CRMF_CERTID_free(lVar4);
            if (iVar2 != 0) goto LAB_00100660;
          }
          goto LAB_00100651;
        }
      }
LAB_00100660:
      OPENSSL_sk_pop_free(local_48,X509_EXTENSION_free);
      OPENSSL_sk_pop_free(ext_struc,&GENERAL_NAME_free);
      goto LAB_0010067b;
    }
  }
  else {
    pXVar6 = X509_get_issuer_name(a_02);
    bVar14 = param_2 != 0;
    local_50 = (uint)(byte)(*(int *)(param_1 + 0x194) != 0 | bVar13);
    if (iVar2 == -1 || lVar4 != 0) goto LAB_0010061c;
LAB_001008ec:
    local_48 = (stack_st_X509_EXTENSION *)0x0;
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x128,"OSSL_CMP_CTX_setup_CRM");
    ERR_set_error(0x3a,0xb7,0);
  }
  lVar7 = 0;
LAB_0010067b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



undefined8 * ossl_cmp_certreq_new(undefined8 *param_1,uint param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (((param_2 & 0xfffffffd) != 0) && (param_2 != 7)) {
    if (param_2 != 4) {
      ERR_new();
      uVar5 = 0x18e;
LAB_00100b55:
      ERR_set_debug("crypto/cmp/cmp_msg.c",uVar5,"ossl_cmp_certreq_new");
      ERR_set_error(0x3a,100,0);
      return (undefined8 *)0x0;
    }
    if (param_3 != 0) {
      ERR_new();
      uVar5 = 0x192;
      goto LAB_00100b55;
    }
  }
  puVar2 = (undefined8 *)ossl_cmp_msg_create(param_1,param_2);
  if ((puVar2 == (undefined8 *)0x0) ||
     ((*(int *)(param_1 + 0x29) != 0 &&
      (iVar1 = ossl_cmp_hdr_set_implicitConfirm(*puVar2), iVar1 == 0)))) goto LAB_00100c30;
  if (param_2 == 4) {
LAB_00100bfe:
    iVar1 = ossl_cmp_msg_protect(param_1,puVar2);
    if (iVar1 != 0) {
      return puVar2;
    }
  }
  else {
    lVar3 = OSSL_CMP_CTX_get0_newPkey(param_1,1);
    if ((0 < *(int *)((long)param_1 + 0x1ac)) && (lVar3 == 0)) {
      lVar4 = 0;
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_msg.c",0x1a4,"ossl_cmp_certreq_new");
      ERR_set_error(0x3a,0xbe,0);
      goto LAB_00100c98;
    }
    if (param_3 == 0) {
      lVar4 = OSSL_CMP_CTX_setup_CRM(param_1,param_2 == 7,0);
      if (lVar4 != 0) {
        iVar1 = OSSL_CRMF_MSG_create_popo
                          (*(undefined4 *)((long)param_1 + 0x1ac),lVar4,lVar3,param_1[0x22],*param_1
                           ,param_1[1]);
        if (iVar1 == 0) goto LAB_00100c98;
        goto LAB_00100be5;
      }
    }
    else {
      lVar4 = OSSL_CRMF_MSG_dup(param_3);
      if (lVar4 != 0) {
LAB_00100be5:
        iVar1 = OPENSSL_sk_push(*(undefined8 *)(puVar2[1] + 8),lVar4);
        if (iVar1 == 0) goto LAB_00100c98;
        goto LAB_00100bfe;
      }
    }
  }
LAB_00100c30:
  lVar4 = 0;
LAB_00100c98:
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x1c1,"ossl_cmp_certreq_new");
  ERR_set_error(0x3a,0xa3,0);
  OSSL_CRMF_MSG_free(lVar4);
  OSSL_CMP_MSG_free(puVar2);
  return (undefined8 *)0x0;
}



undefined8 *
ossl_cmp_certrep_new
          (undefined8 *param_1,int param_2,int param_3,long param_4,long param_5,EVP_PKEY *param_6,
          ASN1_VALUE *param_7,undefined8 param_8,long param_9,int param_10)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar8;
  ASN1_VALUE *pAVar9;
  long lVar10;
  ASN1_ITEM *it;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_4 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)ossl_cmp_msg_create();
  if ((puVar4 != (undefined8 *)0x0) &&
     (((plVar1 = *(long **)(puVar4[1] + 8), *(int *)(param_1 + 0x29) == 0 ||
       (iVar3 = ossl_cmp_hdr_set_implicitConfirm(*puVar4), iVar3 != 0)) &&
      (puVar5 = (undefined8 *)OSSL_CMP_CERTRESPONSE_new(), puVar5 != (undefined8 *)0x0)))) {
    OSSL_CMP_PKISI_free(puVar5[1]);
    lVar6 = OSSL_CMP_PKISI_dup(param_4);
    puVar5[1] = lVar6;
    if ((lVar6 == 0) ||
       (iVar3 = ASN1_INTEGER_set((ASN1_INTEGER *)*puVar5,(long)param_3), iVar3 == 0))
    goto LAB_0010105e;
    iVar3 = ossl_cmp_pkisi_get_status(puVar5[1]);
    if ((1 < iVar3 - 2U) && (param_5 != 0)) {
      if (param_7 != (ASN1_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_msg.c",0x20f,"ossl_cmp_certrep_new");
        ERR_set_error(0x3a,0x8010c,0);
        goto LAB_0010105e;
      }
      puVar7 = (undefined8 *)OSSL_CMP_CERTIFIEDKEYPAIR_new();
      puVar5[2] = puVar7;
      if (puVar7 == (undefined8 *)0x0) goto LAB_0010105e;
      *(undefined4 *)*puVar7 = 0;
      iVar3 = X509_up_ref();
      if (iVar3 == 0) goto LAB_0010105e;
      plVar2 = (long *)puVar5[2];
      *(long *)(*plVar2 + 8) = param_5;
      if (param_6 == (EVP_PKEY *)0x0) goto LAB_00100f78;
      uVar8 = param_1[0x13];
      lVar6 = OPENSSL_sk_new_reserve(0,1);
      if (lVar6 == 0) {
        OPENSSL_sk_pop_free(0,&X509_free);
        BIO_free((BIO *)0x0);
      }
      else {
        iVar3 = X509_add_cert(lVar6,uVar8,1);
        if (iVar3 != 0) {
          type = BIO_s_mem();
          bp = BIO_new(type);
          if (bp != (BIO *)0x0) {
            iVar3 = i2d_PrivateKey_bio(bp,param_6);
            if (0 < iVar3) {
              ossl_cmp_set_own_chain(param_1);
              uVar8 = EVP_CIPHER_fetch(*param_1,"AES-256-CBC",param_1[1]);
              pAVar9 = (ASN1_VALUE *)
                       ossl_cms_sign_encrypt
                                 (bp,param_1[0x19],param_1[0x1a],param_1[0x1b],0x80,lVar6,uVar8,0x80
                                  ,*param_1,param_1[1]);
              EVP_CIPHER_free(uVar8);
              if (pAVar9 != (ASN1_VALUE *)0x0) {
                lVar10 = OSSL_CRMF_ENCRYPTEDKEY_init_envdata(pAVar9);
                OPENSSL_sk_pop_free(lVar6,&X509_free);
                BIO_free(bp);
                param_7 = pAVar9;
                if (lVar10 != 0) {
                  plVar2[1] = lVar10;
                  goto LAB_00100f78;
                }
                goto LAB_00101030;
              }
            }
            OPENSSL_sk_pop_free(lVar6,&X509_free);
            BIO_free(bp);
            goto LAB_00101030;
          }
        }
        OPENSSL_sk_pop_free(lVar6,&X509_free);
        BIO_free((BIO *)0x0);
      }
LAB_00101030:
      it = (ASN1_ITEM *)CMS_EnvelopedData_it();
      ASN1_item_free(param_7,it);
      plVar2[1] = 0;
      goto LAB_0010105e;
    }
LAB_00100f78:
    iVar3 = OPENSSL_sk_push(plVar1[1],puVar5);
    if (iVar3 == 0) goto LAB_0010105e;
    if ((param_2 == 1) && (param_9 != 0)) {
      lVar6 = X509_chain_up_ref(param_9);
      *plVar1 = lVar6;
      if (lVar6 == 0) goto LAB_00101000;
    }
    iVar3 = OPENSSL_sk_num(param_8);
    if ((iVar3 < 1) || (iVar3 = ossl_x509_add_certs_new(puVar4 + 3,param_8,5), iVar3 != 0)) {
      if ((param_10 != 0) && (iVar3 = ossl_cmp_pkisi_get_status(param_4), iVar3 == 2)) {
        return puVar4;
      }
      iVar3 = ossl_cmp_msg_protect(param_1,puVar4);
      if (iVar3 != 0) {
        return puVar4;
      }
    }
  }
LAB_00101000:
  puVar5 = (undefined8 *)0x0;
LAB_0010105e:
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x23b,"ossl_cmp_certrep_new");
  ERR_set_error(0x3a,0x75,0);
  OSSL_CMP_CERTRESPONSE_free(puVar5);
  OSSL_CMP_MSG_free(puVar4);
  return (undefined8 *)0x0;
}



long ossl_cmp_rr_new(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_ENUMERATED *a;
  X509_EXTENSION *ex;
  stack_st_X509_EXTENSION *psVar3;
  long lVar4;
  X509_NAME *pXVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x1b0) == 0) && (*(long *)(param_1 + 0x1b8) == 0)) {
    if (*(long *)(param_1 + 0x170) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x168) == 0) {
      return 0;
    }
  }
  puVar2 = (undefined8 *)OSSL_CMP_REVDETAILS_new();
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = *(long *)(param_1 + 0x170);
    if (lVar4 == 0) {
LAB_00101350:
      if (*(X509 **)(param_1 + 0x1b0) == (X509 *)0x0) {
        if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_00101224;
        uVar6 = X509_REQ_get0_pubkey();
        uVar7 = X509_REQ_get_subject_name(*(undefined8 *)(param_1 + 0x1b8));
        lVar4 = 0;
        pXVar5 = (X509_NAME *)0x0;
      }
      else {
        pXVar5 = X509_get_issuer_name(*(X509 **)(param_1 + 0x1b0));
        lVar4 = X509_get0_serialNumber(*(undefined8 *)(param_1 + 0x1b0));
        uVar6 = 0;
        uVar7 = 0;
      }
    }
    else {
      pXVar5 = *(X509_NAME **)(param_1 + 0x168);
      uVar6 = 0;
      uVar7 = 0;
      if (pXVar5 == (X509_NAME *)0x0) goto LAB_00101350;
    }
    iVar1 = OSSL_CRMF_CERTTEMPLATE_fill(*puVar2,uVar6,uVar7,pXVar5,lVar4);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x1c0);
      if (iVar1 == -1) {
LAB_001012c8:
        lVar4 = ossl_cmp_msg_create(param_1,0xb);
        if (lVar4 != 0) {
          iVar1 = OPENSSL_sk_push(*(undefined8 *)(*(long *)(lVar4 + 8) + 8),puVar2);
          if (iVar1 != 0) {
            puVar2 = (undefined8 *)0x0;
            iVar1 = ossl_cmp_msg_protect(param_1,lVar4);
            if (iVar1 != 0) {
              return lVar4;
            }
          }
          goto LAB_00101227;
        }
      }
      else {
        a = ASN1_ENUMERATED_new();
        if (a == (ASN1_ENUMERATED *)0x0) {
          ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
        }
        else {
          iVar1 = ASN1_ENUMERATED_set(a,(long)iVar1);
          if ((iVar1 == 0) || (ex = X509V3_EXT_i2d(0x8d,0,a), ex == (X509_EXTENSION *)0x0)) {
            ASN1_ENUMERATED_free(a);
          }
          else {
            psVar3 = X509v3_add_ext((stack_st_X509_EXTENSION **)(puVar2 + 1),ex,0);
            X509_EXTENSION_free(ex);
            ASN1_ENUMERATED_free(a);
            if (psVar3 != (stack_st_X509_EXTENSION *)0x0) goto LAB_001012c8;
          }
        }
      }
    }
  }
LAB_00101224:
  lVar4 = 0;
LAB_00101227:
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x27a,"ossl_cmp_rr_new");
  ERR_set_error(0x3a,0x7e,0);
  OSSL_CMP_MSG_free(lVar4);
  OSSL_CMP_REVDETAILS_free(puVar2);
  return 0;
}



long ossl_cmp_rp_new(long param_1,long param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = ossl_cmp_msg_create(param_1,0xc);
  if (lVar3 != 0) {
    puVar1 = *(undefined8 **)(*(long *)(lVar3 + 8) + 8);
    lVar4 = OSSL_CMP_PKISI_dup(param_2);
    if (lVar4 != 0) {
      iVar2 = OPENSSL_sk_push(*puVar1,lVar4);
      if (iVar2 == 0) {
        lVar5 = 0;
        goto LAB_00101496;
      }
      lVar4 = OPENSSL_sk_new_null();
      puVar1[1] = lVar4;
      if (lVar4 != 0) {
        if (param_3 != 0) {
          lVar5 = OSSL_CRMF_CERTID_dup(param_3);
          if (lVar5 == 0) goto LAB_00101490;
          iVar2 = OPENSSL_sk_push(puVar1[1],lVar5);
          if (iVar2 == 0) {
            lVar4 = 0;
            goto LAB_00101496;
          }
        }
        if (param_4 == 0) {
          iVar2 = ossl_cmp_msg_protect(param_1,lVar3);
        }
        else {
          iVar2 = ossl_cmp_pkisi_get_status(param_2);
          if (iVar2 == 2) {
            return lVar3;
          }
          iVar2 = ossl_cmp_msg_protect(param_1,lVar3);
        }
        if (iVar2 != 0) {
          return lVar3;
        }
      }
    }
  }
LAB_00101490:
  lVar5 = 0;
  lVar4 = 0;
LAB_00101496:
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x2a7,"ossl_cmp_rp_new");
  ERR_set_error(0x3a,0x7d,0);
  OSSL_CMP_PKISI_free(lVar4);
  OSSL_CRMF_CERTID_free(lVar5);
  OSSL_CMP_MSG_free(lVar3);
  return 0;
}



long ossl_cmp_pkiconf_new(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = ossl_cmp_msg_create(param_1,0x13);
    if (lVar2 != 0) {
      iVar1 = ossl_cmp_msg_protect(param_1,lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",699,"ossl_cmp_pkiconf_new");
    ERR_set_error(0x3a,0x7a,0);
    OSSL_CMP_MSG_free(lVar2);
  }
  return 0;
}



undefined8 ossl_cmp_msg_gen_push0_ITAV(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = OSSL_CMP_MSG_get_bodytype();
    if (iVar1 - 0x15U < 2) {
      uVar2 = OSSL_CMP_ITAV_push0_stack_item(*(long *)(param_1 + 8) + 8,param_2);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x2ca,"ossl_cmp_msg_gen_push0_ITAV");
    ERR_set_error(0x3a,100,0);
  }
  return 0;
}



undefined8 ossl_cmp_msg_gen_push1_ITAVs(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar4) {
      return 1;
    }
    uVar2 = OPENSSL_sk_value(param_2,iVar4);
    lVar3 = OSSL_CMP_ITAV_dup(uVar2);
    if (lVar3 == 0) break;
    iVar1 = ossl_cmp_msg_gen_push0_ITAV(param_1,lVar3);
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
  }
  OSSL_CMP_ITAV_free(lVar3);
  return 0;
}



long gen_new(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = ossl_cmp_msg_create(param_1,param_3);
  if (lVar2 != 0) {
    if (((param_2 == 0) || (iVar1 = ossl_cmp_msg_gen_push1_ITAVs(lVar2,param_2), iVar1 != 0)) &&
       (iVar1 = ossl_cmp_msg_protect(param_1,lVar2), iVar1 != 0)) {
      return lVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x2ff,"gen_new");
    ERR_set_error(0x3a,param_4,0);
    OSSL_CMP_MSG_free(lVar2);
    return 0;
  }
  return 0;
}



void ossl_cmp_genm_new(long param_1)

{
  gen_new(param_1,*(undefined8 *)(param_1 + 0x1c8),0x15,0x77);
  return;
}



void ossl_cmp_genp_new(undefined8 param_1,undefined8 param_2)

{
  gen_new(param_1,param_2,0x16,0x78);
  return;
}



long ossl_cmp_error_new(long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ASN1_INTEGER *pAVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = ossl_cmp_msg_create(param_1,0x17);
  if (lVar3 == 0) goto LAB_001018d8;
  OSSL_CMP_PKISI_free(**(undefined8 **)(*(long *)(lVar3 + 8) + 8));
  plVar1 = *(long **)(*(long *)(lVar3 + 8) + 8);
  lVar4 = OSSL_CMP_PKISI_dup(param_2);
  *plVar1 = lVar4;
  if (lVar4 == 0) goto LAB_001018d8;
  lVar4 = *(long *)(*(long *)(lVar3 + 8) + 8);
  pAVar5 = ASN1_INTEGER_new();
  *(ASN1_INTEGER **)(lVar4 + 8) = pAVar5;
  if ((pAVar5 == (ASN1_INTEGER *)0x0) ||
     (iVar2 = ASN1_INTEGER_set_int64
                        (*(undefined8 *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8),param_3),
     iVar2 == 0)) goto LAB_001018d8;
  if (param_3 - 1 < 0xffffffff) {
    pcVar6 = ERR_lib_error_string(param_3);
    pcVar7 = ERR_reason_error_string(param_3);
    if (pcVar6 == (char *)0x0 && pcVar7 == (char *)0x0) goto LAB_00101888;
    lVar4 = OPENSSL_sk_new_null();
    if (lVar4 == 0) goto LAB_001018d8;
    *(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 0x10) = lVar4;
    if (pcVar6 == (char *)0x0) {
LAB_00101987:
      if ((*pcVar7 != '\0') &&
         (iVar2 = ossl_cmp_sk_ASN1_UTF8STRING_push_str(lVar4,pcVar7,0xffffffff), iVar2 == 0))
      goto LAB_001018d8;
    }
    else {
      if ((*pcVar6 != '\0') &&
         (iVar2 = ossl_cmp_sk_ASN1_UTF8STRING_push_str(lVar4,pcVar6,0xffffffff), iVar2 == 0))
      goto LAB_001018d8;
      if (pcVar7 != (char *)0x0) goto LAB_00101987;
    }
    if (param_4 != 0) goto LAB_001018a6;
  }
  else {
LAB_00101888:
    if (param_4 != 0) {
      lVar4 = OPENSSL_sk_new_null();
      if (lVar4 == 0) goto LAB_001018d8;
      *(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 0x10) = lVar4;
LAB_001018a6:
      iVar2 = ossl_cmp_sk_ASN1_UTF8STRING_push_str(lVar4,param_4,0xffffffff);
      if (iVar2 == 0) goto LAB_001018d8;
    }
  }
  if (param_5 != 0) {
    return lVar3;
  }
  iVar2 = ossl_cmp_msg_protect(param_1,lVar3);
  if (iVar2 != 0) {
    return lVar3;
  }
LAB_001018d8:
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x340,"ossl_cmp_error_new");
  ERR_set_error(0x3a,0x76,0);
  OSSL_CMP_MSG_free(lVar3);
  return 0;
}



undefined8 ossl_cmp_certstatus_set0_certHash(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)*param_1);
    *param_1 = param_2;
    return 1;
  }
  return 0;
}



undefined8 * ossl_cmp_certConf_new(long param_1,int param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ASN1_OCTET_STRING *a;
  X509_ALGOR *alg;
  long lVar4;
  long in_FS_OFFSET;
  int local_4c;
  EVP_MD *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != 0) && (*(long *)(param_1 + 0x1e8) != 0)) && (param_2 + 1U < 2)) {
    if (param_3 < 0x8000000) {
      puVar2 = (undefined8 *)ossl_cmp_msg_create(param_1,0x18);
      if ((puVar2 == (undefined8 *)0x0) || (lVar3 = OSSL_CMP_CERTSTATUS_new(), lVar3 == 0)) {
LAB_00101bb8:
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        iVar1 = OPENSSL_sk_push(*(undefined8 *)(puVar2[1] + 8),lVar3);
        if (iVar1 < 1) {
          OSSL_CMP_CERTSTATUS_free(lVar3);
          goto LAB_00101bb8;
        }
        iVar1 = ASN1_INTEGER_set(*(ASN1_INTEGER **)(lVar3 + 8),(long)param_2);
        if (iVar1 == 0) goto LAB_00101bb8;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        a = (ASN1_OCTET_STRING *)
            X509_digest_sig(*(undefined8 *)(param_1 + 0x1e8),&local_48,&local_4c);
        if (a == (ASN1_OCTET_STRING *)0x0) goto LAB_00101bb8;
        if (local_4c == 0) {
LAB_00101b64:
          EVP_MD_free(local_48);
          iVar1 = ossl_cmp_certstatus_set0_certHash(lVar3,a);
          if (iVar1 != 0) {
            if (param_3 == 0) {
              lVar4 = OSSL_CMP_STATUSINFO_new(0,0,param_4);
            }
            else {
              lVar4 = OSSL_CMP_STATUSINFO_new(2,param_3,param_4);
            }
            if (lVar4 != 0) {
              *(long *)(lVar3 + 0x10) = lVar4;
              iVar1 = ossl_cmp_msg_protect(param_1,puVar2);
              if (iVar1 != 0) goto LAB_00101a72;
            }
            goto LAB_00101bb8;
          }
        }
        else {
          iVar1 = ossl_cmp_hdr_set_pvno(*puVar2,3);
          if (iVar1 != 0) {
            alg = X509_ALGOR_new();
            *(X509_ALGOR **)(lVar3 + 0x18) = alg;
            if (alg != (X509_ALGOR *)0x0) {
              X509_ALGOR_set_md(alg,local_48);
              goto LAB_00101b64;
            }
          }
        }
      }
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_msg.c",0x39f,"ossl_cmp_certConf_new");
      ERR_set_error(0x3a,0x74,0);
      OSSL_CMP_MSG_free(puVar2);
      ASN1_OCTET_STRING_free(a);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_msg.c",0x364,"ossl_cmp_certConf_new");
      ERR_set_error(0x3a,0x81,0);
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_00101a72:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar2;
}



long ossl_cmp_pollReq_new(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = ossl_cmp_msg_create(param_1,0x19);
  if ((lVar2 != 0) && (puVar3 = (undefined8 *)OSSL_CMP_POLLREQ_new(), puVar3 != (undefined8 *)0x0))
  {
    iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)*puVar3,(long)param_2);
    if ((iVar1 == 0) ||
       (iVar1 = OPENSSL_sk_push(*(undefined8 *)(*(long *)(lVar2 + 8) + 8),puVar3), iVar1 == 0))
    goto LAB_00101ce3;
    iVar1 = ossl_cmp_msg_protect(param_1,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_00101ce3:
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x3bc,"ossl_cmp_pollReq_new");
  ERR_set_error(0x3a,0x7c,0);
  OSSL_CMP_POLLREQ_free(puVar3);
  OSSL_CMP_MSG_free(lVar2);
  return 0;
}



long ossl_cmp_pollRep_new(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    lVar2 = ossl_cmp_msg_create(param_1,0x1a);
    if ((((lVar2 != 0) &&
         (puVar3 = (undefined8 *)OSSL_CMP_POLLREP_new(), puVar3 != (undefined8 *)0x0)) &&
        (iVar1 = OPENSSL_sk_push(*(undefined8 *)(*(long *)(lVar2 + 8) + 8),puVar3), iVar1 != 0)) &&
       (((iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)*puVar3,(long)param_2), iVar1 != 0 &&
         (iVar1 = ASN1_INTEGER_set_int64(puVar3[1],param_3), iVar1 != 0)) &&
        (iVar1 = ossl_cmp_msg_protect(param_1,lVar2), iVar1 != 0)))) {
      return lVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x3db,"ossl_cmp_pollRep_new");
    ERR_set_error(0x3a,0x7b,0);
    OSSL_CMP_MSG_free(lVar2);
  }
  return 0;
}



long ossl_cmp_revrepcontent_get_pkisi(undefined8 *param_1)

{
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar1 = OPENSSL_sk_value(*param_1);
  if (lVar1 != 0) {
    return lVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x3f2,"ossl_cmp_revrepcontent_get_pkisi");
  ERR_set_error(0x3a,0x84,0);
  return 0;
}



long ossl_cmp_revrepcontent_get_CertId(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    return lVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/cmp/cmp_msg.c",0x408,"ossl_cmp_revrepcontent_get_CertId");
  ERR_set_error(0x3a,0x6d,0);
  return 0;
}



undefined8 * ossl_cmp_pollrepcontent_get0_pollrep(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    for (iVar3 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_1,iVar3);
      if (param_2 == -1) {
        return puVar2;
      }
      iVar1 = ossl_cmp_asn1_get_int(*puVar2);
      if (iVar1 < -1) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_msg.c",0x415,"suitable_rid");
        ERR_set_error(0x3a,0x6c,0);
      }
      else if (param_2 == iVar1) {
        return puVar2;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x430,"ossl_cmp_pollrepcontent_get0_pollrep");
    ERR_set_error(0x3a,0x71,"expected certReqId = %d",param_2);
  }
  return (undefined8 *)0x0;
}



undefined8 * ossl_cmp_certrepmessage_get0_certresponse(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    iVar3 = 0;
    if (lVar4 != 0) {
      while( true ) {
        iVar1 = OPENSSL_sk_num(lVar4);
        if (iVar1 <= iVar3) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_msg.c",0x44a,"ossl_cmp_certrepmessage_get0_certresponse");
          ERR_set_error(0x3a,0x71,"expected certReqId = %d",param_2);
          return (undefined8 *)0x0;
        }
        puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
        if (param_2 == -1) break;
        iVar1 = ossl_cmp_asn1_get_int(*puVar2);
        if (iVar1 < -1) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_msg.c",0x415,"suitable_rid");
          ERR_set_error(0x3a,0x6c,0);
        }
        else if (param_2 == iVar1) {
          return puVar2;
        }
        lVar4 = *(long *)(param_1 + 8);
        iVar3 = iVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



X509 * ossl_cmp_certresponse_get1_cert(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  X509 *pXVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  iVar2 = OSSL_CMP_CTX_get_option(param_1,0x18);
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    ERR_new();
    uVar6 = 0x45f;
  }
  else {
    if (puVar5[1] == 0) {
      if (iVar2 == -1) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_msg.c",0x464,"ossl_cmp_certresponse_get1_cert");
        ERR_set_error(0x3a,0xcc,0);
        return (X509 *)0x0;
      }
      if (param_1 == (undefined8 *)0x0) {
        return (X509 *)0x0;
      }
    }
    else {
      if (iVar2 != -1) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_msg.c",0x469,"ossl_cmp_certresponse_get1_cert");
        ERR_set_error(0x3a,0xcd,0);
        return (X509 *)0x0;
      }
      lVar3 = OSSL_CRMF_ENCRYPTEDKEY_get1_pkey
                        (puVar5[1],param_1[0x15],param_1[0x16],param_1[0x1b],param_1[0x19],
                         param_1[0x1d],*param_1);
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_msg.c",0x473,"ossl_cmp_certresponse_get1_cert");
        ERR_set_error(0x3a,0xcb,0);
        return (X509 *)0x0;
      }
      OSSL_CMP_CTX_set0_newPkey(param_1,1);
      puVar5 = *(undefined8 **)(param_2 + 0x10);
    }
    piVar1 = (int *)*puVar5;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        pXVar4 = X509_dup(*(X509 **)(piVar1 + 2));
      }
      else {
        if (*piVar1 != 1) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_msg.c",0x48d,"ossl_cmp_certresponse_get1_cert");
          ERR_set_error(0x3a,0x87,0);
          return (X509 *)0x0;
        }
        lVar3 = OSSL_CMP_CTX_get0_newPkey(param_1,1);
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_msg.c",0x486,"ossl_cmp_certresponse_get1_cert");
          ERR_set_error(0x3a,0x83,0);
          return (X509 *)0x0;
        }
        pXVar4 = (X509 *)OSSL_CRMF_ENCRYPTEDKEY_get1_encCert
                                   (*(undefined8 *)(piVar1 + 2),*param_1,param_1[1],lVar3,0);
      }
      if (pXVar4 != (X509 *)0x0) {
        ossl_x509_set0_libctx(pXVar4,*param_1,param_1[1]);
        return pXVar4;
      }
    }
    ERR_new();
    uVar6 = 0x492;
  }
  ERR_set_debug("crypto/cmp/cmp_msg.c",uVar6,"ossl_cmp_certresponse_get1_cert");
  ERR_set_error(0x3a,0x70,0);
  return (X509 *)0x0;
}



bool OSSL_CMP_MSG_update_transactionID(long param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 == 0) || (param_2 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x49b,"OSSL_CMP_MSG_update_transactionID");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    iVar1 = ossl_cmp_hdr_set_transactionID(param_1,*param_2);
    if (iVar1 != 0) {
      bVar2 = true;
      if (*(long *)(*param_2 + 0x20) != 0) {
        iVar1 = ossl_cmp_msg_protect(param_1,param_2);
        bVar2 = iVar1 != 0;
      }
      return bVar2;
    }
  }
  return false;
}



bool OSSL_CMP_MSG_update_recipNonce(long param_1,long *param_2)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_2 == (long *)0x0)) || (*param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x4a7,"OSSL_CMP_MSG_update_recipNonce");
    ERR_set_error(0x3a,0x67,0);
    return false;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    iVar1 = ossl_cmp_asn1_octet_string_set1(*param_2 + 0x48);
    if (iVar1 == 0) {
      return false;
    }
    if (*(long *)(*param_2 + 0x20) != 0) {
      iVar1 = ossl_cmp_msg_protect(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return true;
}



void d2i_OSSL_CMP_MSG(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = *(long *)(lVar2 + 0x28);
    }
  }
  uVar1 = OSSL_CMP_MSG_it();
  ASN1_item_d2i_ex(param_1,param_2,param_3,uVar1,uVar3,lVar2);
  return;
}



void d2i_OSSL_CMP_MSG_bio(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_2;
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = *(long *)(lVar2 + 0x28);
    }
  }
  uVar1 = OSSL_CMP_MSG_it();
  ASN1_item_d2i_bio_ex(uVar1,param_1,param_2,uVar3,lVar2);
  return;
}



long OSSL_CMP_MSG_read(char *param_1,undefined8 param_2,undefined8 param_3)

{
  BIO *a;
  long lVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x4b9,"OSSL_CMP_MSG_read");
    ERR_set_error(0x3a,0x67,0);
    lVar1 = 0;
    goto LAB_001025d0;
  }
  local_18 = OSSL_CMP_MSG_new(param_2,param_3);
  if (local_18 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x4bf,"OSSL_CMP_MSG_read");
    ERR_set_error(0x3a,0x8003a,0);
    lVar1 = 0;
    goto LAB_001025d0;
  }
  a = BIO_new_file(param_1,"rb");
  if (a == (BIO *)0x0) {
LAB_001025f0:
    OSSL_CMP_MSG_free(local_18);
    local_18 = 0;
  }
  else {
    lVar1 = d2i_OSSL_CMP_MSG_bio(a,&local_18);
    if (lVar1 == 0) goto LAB_001025f0;
  }
  BIO_free(a);
  lVar1 = local_18;
LAB_001025d0:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void i2d_OSSL_CMP_MSG_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(i2d_OSSL_CMP_MSG,param_1,param_2);
  return;
}



undefined4 OSSL_CMP_MSG_write(char *param_1,long param_2)

{
  undefined4 uVar1;
  BIO *a;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    ERR_new();
    uVar1 = 0xffffffff;
    ERR_set_debug("crypto/cmp/cmp_msg.c",0x4d2,"OSSL_CMP_MSG_write");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    a = BIO_new_file(param_1,"wb");
    if (a == (BIO *)0x0) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = i2d_OSSL_CMP_MSG_bio(a,param_2);
      BIO_free(a);
    }
  }
  return uVar1;
}



bool ossl_cmp_is_error_with_waiting(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = OSSL_CMP_MSG_get_bodytype();
  if (iVar1 != 0x17) {
    return false;
  }
  iVar1 = ossl_cmp_pkisi_get_status(**(undefined8 **)(*(long *)(param_1 + 8) + 8));
  return iVar1 == 3;
}


