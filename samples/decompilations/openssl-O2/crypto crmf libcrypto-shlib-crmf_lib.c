
bool OSSL_CRMF_MSG_push0_regCtrl(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, param_2 == 0)) || (lVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x61,"OSSL_CRMF_MSG_push0_regCtrl");
    ERR_set_error(0x38,0x6d,0);
  }
  else {
    if (*(long *)(lVar1 + 0x10) != 0) {
      iVar2 = OPENSSL_sk_push();
      return iVar2 != 0;
    }
    uVar3 = OPENSSL_sk_new_null();
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    if (*(long *)(*param_1 + 0x10) != 0) {
      iVar2 = OPENSSL_sk_push(*(long *)(*param_1 + 0x10),param_2);
      if (iVar2 != 0) {
        return true;
      }
      OPENSSL_sk_free(*(undefined8 *)(*param_1 + 0x10));
      *(undefined8 *)(*param_1 + 0x10) = 0;
      return false;
    }
  }
  return false;
}



undefined8 OSSL_CRMF_MSG_push0_regInfo(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0xdf,"OSSL_CRMF_MSG_push0_regInfo");
    ERR_set_error(0x38,0x6d,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_00100102;
    }
  }
  else {
    iVar1 = OPENSSL_sk_push();
    if (iVar1 != 0) {
      return 1;
    }
  }
  lVar2 = 0;
LAB_00100102:
  OPENSSL_sk_free(lVar2);
  return 0;
}



undefined8 check_cmKGA(undefined8 param_1,X509 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  ASN1_OBJECT *o;
  int iVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return 1;
  }
  uVar4 = 0;
  iVar3 = 0;
  pvVar2 = X509_get_ext_d2i(param_2,0x7e,(int *)0x0,(int *)0x0);
  do {
    iVar1 = OPENSSL_sk_num(pvVar2);
    if (iVar1 <= iVar3) {
LAB_001001e8:
      OPENSSL_sk_pop_free(pvVar2,&ASN1_OBJECT_free);
      return uVar4;
    }
    o = (ASN1_OBJECT *)OPENSSL_sk_value(pvVar2,iVar3);
    iVar1 = OBJ_obj2nid(o);
    if (iVar1 == 0x4c6) {
      uVar4 = 1;
      goto LAB_001001e8;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



undefined8 OSSL_CRMF_MSG_get0_regCtrl_regToken(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x13b) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regCtrl_regToken(long param_1,ASN1_STRING *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  ASN1_STRING *pAVar4;
  
  if ((param_1 != 0) && (param_2 != (ASN1_STRING *)0x0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x13b);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        pAVar4 = ASN1_STRING_dup(param_2);
        puVar2[1] = pAVar4;
        if (pAVar4 != (ASN1_STRING *)0x0) {
          iVar1 = OSSL_CRMF_MSG_push0_regCtrl(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_001002ea;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_001002ea:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



undefined8 OSSL_CRMF_MSG_get0_regCtrl_authenticator(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x13c) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regCtrl_authenticator(long param_1,ASN1_STRING *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  ASN1_STRING *pAVar4;
  
  if ((param_1 != 0) && (param_2 != (ASN1_STRING *)0x0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x13c);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        pAVar4 = ASN1_STRING_dup(param_2);
        puVar2[1] = pAVar4;
        if (pAVar4 != (ASN1_STRING *)0x0) {
          iVar1 = OSSL_CRMF_MSG_push0_regCtrl(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_001003da;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_001003da:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



undefined8 OSSL_CRMF_MSG_set0_SinglePubInfo(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (3 < param_2)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x84,"OSSL_CRMF_MSG_set0_SinglePubInfo");
    ERR_set_error(0x38,0x80106,0);
  }
  else {
    iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,(long)(int)param_2);
    if (iVar1 != 0) {
      GENERAL_NAME_free((GENERAL_NAME *)param_1[1]);
      param_1[1] = param_3;
      return 1;
    }
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar1 = OPENSSL_sk_push(lVar2,param_2);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/crmf/crmf_lib.c",0x94,"OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo"
               );
  ERR_set_error(0x38,0x6d,0);
  return 0;
}



int OSSL_CRMF_MSG_set_PKIPublicationInfo_action(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 < 2)) {
    iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,(long)(int)param_2);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/crmf/crmf_lib.c",0xa5,"OSSL_CRMF_MSG_set_PKIPublicationInfo_action");
  ERR_set_error(0x38,0x80106,0);
  return 0;
}



undefined8 OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x13d) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  long lVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x13d);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        lVar4 = OSSL_CRMF_PKIPUBLICATIONINFO_dup(param_2);
        puVar2[1] = lVar4;
        if (lVar4 != 0) {
          iVar1 = OSSL_CRMF_MSG_push0_regCtrl(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_0010064a;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_0010064a:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



undefined8 OSSL_CRMF_MSG_get0_regCtrl_oldCertID(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x13f) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regCtrl_oldCertID(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  long lVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x13f);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        lVar4 = OSSL_CRMF_CERTID_dup(param_2);
        puVar2[1] = lVar4;
        if (lVar4 != 0) {
          iVar1 = OSSL_CRMF_MSG_push0_regCtrl(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_0010073a;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_0010073a:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



long * OSSL_CRMF_CERTID_gen(X509_NAME *param_1,ASN1_INTEGER *param_2)

{
  int iVar1;
  long *plVar2;
  ASN1_INTEGER *pAVar3;
  
  if ((param_1 == (X509_NAME *)0x0) || (param_2 == (ASN1_INTEGER *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0xb9,"OSSL_CRMF_CERTID_gen");
    ERR_set_error(0x38,0x6d,0);
  }
  else {
    plVar2 = (long *)OSSL_CRMF_CERTID_new();
    if (plVar2 != (long *)0x0) {
      iVar1 = X509_NAME_set((X509_NAME **)(*plVar2 + 8),param_1);
      if (iVar1 != 0) {
        pAVar3 = (ASN1_INTEGER *)plVar2[1];
        *(undefined4 *)*plVar2 = 4;
        ASN1_INTEGER_free(pAVar3);
        pAVar3 = ASN1_INTEGER_dup(param_2);
        plVar2[1] = (long)pAVar3;
        if (pAVar3 != (ASN1_INTEGER *)0x0) {
          return plVar2;
        }
      }
    }
    OSSL_CRMF_CERTID_free(plVar2);
  }
  return (long *)0x0;
}



undefined8 OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x140) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  long lVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x140);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        lVar4 = X509_PUBKEY_dup(param_2);
        puVar2[1] = lVar4;
        if (lVar4 != 0) {
          iVar1 = OSSL_CRMF_MSG_push0_regCtrl(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_001008ea;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_001008ea:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



undefined8 OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x141) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(long param_1,ASN1_STRING *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  ASN1_STRING *pAVar4;
  
  if ((param_1 != 0) && (param_2 != (ASN1_STRING *)0x0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x141);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        pAVar4 = ASN1_STRING_dup(param_2);
        puVar2[1] = pAVar4;
        if (pAVar4 != (ASN1_STRING *)0x0) {
          iVar1 = OSSL_CRMF_MSG_push0_regInfo(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_001009da;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_001009da:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



undefined8 OSSL_CRMF_MSG_get0_regInfo_certReq(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    iVar4 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    while( true ) {
      iVar2 = OPENSSL_sk_num(uVar1);
      if (iVar2 <= iVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar4);
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3);
      if (iVar2 == 0x142) break;
      iVar4 = iVar4 + 1;
    }
    return puVar3[1];
  }
  return 0;
}



undefined8 OSSL_CRMF_MSG_set1_regInfo_certReq(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  long lVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
    if (puVar2 != (undefined8 *)0x0) {
      pAVar3 = OBJ_nid2obj(0x142);
      *puVar2 = pAVar3;
      if (pAVar3 != (ASN1_OBJECT *)0x0) {
        lVar4 = OSSL_CRMF_CERTREQUEST_dup(param_2);
        puVar2[1] = lVar4;
        if (lVar4 != 0) {
          iVar1 = OSSL_CRMF_MSG_push0_regInfo(param_1,puVar2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
      goto LAB_00100aca;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_00100aca:
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(puVar2);
  return 0;
}



undefined8 OSSL_CRMF_MSG_get0_tmpl(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    return *(undefined8 *)(*param_1 + 8);
  }
  ERR_new();
  ERR_set_debug("crypto/crmf/crmf_lib.c",0xfc,"OSSL_CRMF_MSG_get0_tmpl");
  ERR_set_error(0x38,0x6d,0);
  return 0;
}



undefined8 OSSL_CRMF_MSG_set0_validity(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = OSSL_CRMF_MSG_get0_tmpl();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x109,"OSSL_CRMF_MSG_set0_validity");
    ERR_set_error(0x38,0x6d,0);
  }
  else {
    puVar2 = (undefined8 *)OSSL_CRMF_OPTIONALVALIDITY_new();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
      puVar2[1] = param_3;
      *(undefined8 **)(lVar1 + 0x20) = puVar2;
      return 1;
    }
  }
  return 0;
}



int OSSL_CRMF_MSG_set_certReqId(long *param_1,int param_2)

{
  ASN1_INTEGER *a;
  int iVar1;
  
  if (((param_1 != (long *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) &&
     (a = *(ASN1_INTEGER **)*param_1, a != (ASN1_INTEGER *)0x0)) {
    iVar1 = ASN1_INTEGER_set(a,(long)param_2);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/crmf/crmf_lib.c",0x118,"OSSL_CRMF_MSG_set_certReqId");
  ERR_set_error(0x38,0x6d,0);
  return 0;
}



long OSSL_CRMF_MSG_get_certReqId(long *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (long *)0x0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x136,"OSSL_CRMF_MSG_get_certReqId");
    ERR_set_error(0x38,0x6d,0);
    local_18 = 0xffffffff;
  }
  else {
    iVar1 = ASN1_INTEGER_get_int64(&local_18,*(undefined8 *)*param_1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_lib.c",0x125,"crmf_asn1_get_int");
      ERR_set_error(0x38,0xbb,0);
    }
    else if (local_18 < -0x80000000) {
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_lib.c",0x129,"crmf_asn1_get_int");
      ERR_set_error(0x38,0xe0,0);
    }
    else {
      if (local_18 < 0x80000000) goto LAB_00100c80;
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_lib.c",0x12d,"crmf_asn1_get_int");
      ERR_set_error(0x38,0xdf,0);
    }
    local_18 = 0xffffffff;
  }
LAB_00100c80:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OSSL_CRMF_MSG_set0_extensions(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_CRMF_MSG_get0_tmpl();
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num(param_2);
    uVar3 = param_2;
    if (iVar1 == 0) {
      uVar3 = 0;
      OPENSSL_sk_free(param_2);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar2 + 0x48),&X509_EXTENSION_free);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/crmf/crmf_lib.c",0x142,"OSSL_CRMF_MSG_set0_extensions");
  ERR_set_error(0x38,0x6d,0);
  return 0;
}



bool OSSL_CRMF_MSG_push0_extension(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = OSSL_CRMF_MSG_get0_tmpl();
  if ((lVar2 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x157,"OSSL_CRMF_MSG_push0_extension");
    ERR_set_error(0x38,0x6d,0);
    bVar4 = false;
  }
  else if (*(long *)(lVar2 + 0x48) == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *(long *)(lVar2 + 0x48) = lVar3;
    if (lVar3 != 0) {
      iVar1 = OPENSSL_sk_push(lVar3,param_2);
      if (iVar1 != 0) {
        return true;
      }
      OPENSSL_sk_free(*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    bVar4 = false;
  }
  else {
    iVar1 = OPENSSL_sk_push(*(long *)(lVar2 + 0x48),param_2);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}



undefined8
OSSL_CRMF_MSG_create_popo
          (int param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ASN1_NULL *pAVar6;
  undefined8 uVar7;
  long lVar8;
  ASN1_INTEGER *a;
  long *plVar9;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || ((param_1 == 1 && (param_3 == 0)))) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x194,"OSSL_CRMF_MSG_create_popo");
    ERR_set_error(0x38,0x6d,0);
  }
  else {
    if (param_1 == -1) {
      piVar5 = (int *)0x0;
      goto LAB_00100fd3;
    }
    piVar5 = (int *)OSSL_CRMF_POPO_new();
    if (piVar5 != (int *)0x0) {
      *piVar5 = param_1;
      if (param_1 == 1) {
        plVar9 = (long *)OSSL_CRMF_POPOSIGNINGKEY_new();
        if (plVar9 != (long *)0x0) {
          lVar8 = *param_2;
          local_98 = (undefined1  [16])0x0;
          local_88 = (undefined1  [16])0x0;
          local_78 = (undefined1  [16])0x0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          if (lVar8 == 0) {
            ERR_new();
            ERR_set_debug("crypto/crmf/crmf_lib.c",0x175,"create_popo_signature");
            ERR_set_error(0x38,0x6d,0);
          }
          else {
            uVar7 = X509_PUBKEY_get0(*(undefined8 *)(*(long *)(lVar8 + 8) + 0x30));
            iVar4 = ossl_x509_check_private_key(uVar7,param_3);
            if (iVar4 != 0) {
              if (*plVar9 == 0) {
                iVar4 = EVP_PKEY_get_default_digest_name(param_3,local_98,0x50);
                if ((0 < iVar4) && (iVar4 = strcmp(local_98,"UNDEF"), iVar4 == 0)) {
                  param_4 = 0;
                }
                lVar2 = plVar9[2];
                lVar3 = plVar9[1];
                uVar7 = OSSL_CRMF_CERTREQUEST_it();
                iVar4 = ASN1_item_sign_ex(uVar7,lVar3,0,lVar2,lVar8,0,param_3,param_4,param_5,
                                          param_6);
                if (iVar4 != 0) {
                  *(long **)(piVar5 + 2) = plVar9;
                  goto LAB_00100fd3;
                }
              }
              else {
                ERR_new();
                ERR_set_debug("crypto/crmf/crmf_lib.c",0x17e,"create_popo_signature");
                ERR_set_error(0x38,0x71,0);
              }
            }
          }
          OSSL_CRMF_POPOSIGNINGKEY_free(plVar9);
        }
      }
      else if (param_1 == 2) {
        lVar8 = OSSL_CRMF_POPOPRIVKEY_new();
        *(long *)(piVar5 + 2) = lVar8;
        if (lVar8 != 0) {
          a = ASN1_INTEGER_new();
          puVar1 = *(undefined4 **)(piVar5 + 2);
          *puVar1 = 1;
          *(ASN1_INTEGER **)(puVar1 + 2) = a;
          if ((a != (ASN1_INTEGER *)0x0) && (iVar4 = ASN1_INTEGER_set(a,0), iVar4 != 0))
          goto LAB_00100fd3;
        }
      }
      else if (param_1 == 0) {
        pAVar6 = ASN1_NULL_new();
        *(ASN1_NULL **)(piVar5 + 2) = pAVar6;
        if (pAVar6 != (ASN1_NULL *)0x0) {
LAB_00100fd3:
          OSSL_CRMF_POPO_free(param_2[1]);
          param_2[1] = (long)piVar5;
          uVar7 = 1;
          goto LAB_00100f58;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/crmf/crmf_lib.c",0x1c0,"OSSL_CRMF_MSG_create_popo");
        ERR_set_error(0x38,0x73,0);
      }
    }
    OSSL_CRMF_POPO_free(piVar5);
  }
  uVar7 = 0;
LAB_00100f58:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



bool OSSL_CRMF_MSGS_verify_popo
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((param_1 == 0) || (plVar5 = (long *)OPENSSL_sk_value(), plVar5 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x1da,"OSSL_CRMF_MSGS_verify_popo");
    ERR_set_error(0x38,0x6d,0);
    return false;
  }
  piVar1 = (int *)plVar5[1];
  if (piVar1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x1df,"OSSL_CRMF_MSGS_verify_popo");
    ERR_set_error(0x38,0x79,0);
    return false;
  }
  if (*piVar1 == 0) {
    if (param_3 != 0) {
      return true;
    }
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x1e6,"OSSL_CRMF_MSGS_verify_popo");
    ERR_set_error(0x38,0x78,0);
    return false;
  }
  if (*piVar1 != 1) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x21d,"OSSL_CRMF_MSGS_verify_popo");
    ERR_set_error(0x38,0x74,0);
    return false;
  }
  lVar2 = *(long *)(*(long *)(*plVar5 + 8) + 0x30);
  if (lVar2 != 0) {
    plVar3 = *(long **)(piVar1 + 2);
    if (*plVar3 == 0) {
      if (*(long *)(*(long *)(*plVar5 + 8) + 0x28) == 0) {
        ERR_new();
        ERR_set_debug("crypto/crmf/crmf_lib.c",0x209,"OSSL_CRMF_MSGS_verify_popo");
        ERR_set_error(0x38,0x77,0);
        return false;
      }
      uVar6 = OSSL_CRMF_CERTREQUEST_it();
      lVar8 = *plVar5;
    }
    else {
      if (*(long *)(*plVar3 + 8) == 0) {
        ERR_new();
        uVar6 = 0x1f8;
        goto LAB_00101441;
      }
      iVar4 = X509_PUBKEY_eq(lVar2);
      if (iVar4 != 1) {
        ERR_new();
        ERR_set_debug("crypto/crmf/crmf_lib.c",0x1fc,"OSSL_CRMF_MSGS_verify_popo");
        ERR_set_error(0x38,0x75,0);
        return false;
      }
      uVar6 = OSSL_CRMF_POPOSIGNINGKEYINPUT_it();
      lVar8 = *plVar3;
    }
    uVar7 = X509_PUBKEY_get0(lVar2);
    iVar4 = ASN1_item_verify_ex(uVar6,plVar3[1],plVar3[2],lVar8,0,uVar7,param_4,param_5);
    return 0 < iVar4;
  }
  ERR_new();
  uVar6 = 0x1ed;
LAB_00101441:
  ERR_set_debug("crypto/crmf/crmf_lib.c",uVar6,"OSSL_CRMF_MSGS_verify_popo");
  ERR_set_error(0x38,0x76,0);
  return false;
}



undefined8 OSSL_CRMF_CERTTEMPLATE_get0_publicKey(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x30);
  }
  return 0;
}



uint OSSL_CRMF_MSG_centralkeygen_requested(long param_1,long param_2)

{
  uint uVar1;
  X509_PUBKEY *pub;
  long in_FS_OFFSET;
  int local_1c;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (uchar *)0x0;
  if (param_2 == 0 && param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x22a,"OSSL_CRMF_MSG_centralkeygen_requested");
    ERR_set_error(0x38,0x6d,0);
    uVar1 = 0xffffffff;
  }
  else if (param_1 == 0) {
    uVar1 = 1;
    if (*(X509_PUBKEY **)(param_2 + 0x28) != (X509_PUBKEY *)0x0) {
      uVar1 = X509_PUBKEY_get0_param
                        ((ASN1_OBJECT **)0x0,&local_18,&local_1c,(X509_ALGOR **)0x0,
                         *(X509_PUBKEY **)(param_2 + 0x28));
      if (uVar1 != 0) {
        uVar1 = (uint)(local_1c == 0);
      }
    }
  }
  else {
    OSSL_CRMF_MSG_get0_tmpl();
    pub = (X509_PUBKEY *)OSSL_CRMF_CERTTEMPLATE_get0_publicKey();
    uVar1 = 1;
    if (pub != (X509_PUBKEY *)0x0) {
      uVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_18,&local_1c,(X509_ALGOR **)0x0,pub)
      ;
      if (uVar1 != 0) {
        uVar1 = (uint)(local_1c == 0);
      }
    }
    if ((*(long *)(param_1 + 8) == 0) != uVar1) {
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_lib.c",0x23d,"OSSL_CRMF_MSG_centralkeygen_requested");
      ERR_set_error(0x38,0x80,0);
      uVar1 = 0xfffffffe;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



undefined8 OSSL_CRMF_CERTTEMPLATE_get0_subject(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



undefined8 OSSL_CRMF_CERTTEMPLATE_get0_issuer(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}



undefined8 OSSL_CRMF_CERTTEMPLATE_get0_extensions(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x48);
  }
  return 0;
}



undefined8 OSSL_CRMF_CERTID_get0_issuer(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (*(int *)*param_1 == 4)) {
    return *(undefined8 *)((int *)*param_1 + 2);
  }
  return 0;
}



undefined8 OSSL_CRMF_CERTID_get0_serialNumber(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



bool OSSL_CRMF_CERTTEMPLATE_fill
               (long param_1,EVP_PKEY *param_2,X509_NAME *param_3,X509_NAME *param_4,
               ASN1_INTEGER *param_5)

{
  int iVar1;
  ASN1_INTEGER *pAVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x278,"OSSL_CRMF_CERTTEMPLATE_fill");
    ERR_set_error(0x38,0x6d,0);
    return false;
  }
  if ((param_3 != (X509_NAME *)0x0) &&
     (iVar1 = X509_NAME_set((X509_NAME **)(param_1 + 0x28),param_3), iVar1 == 0)) {
    return false;
  }
  if ((param_4 != (X509_NAME *)0x0) &&
     (iVar1 = X509_NAME_set((X509_NAME **)(param_1 + 0x18),param_4), iVar1 == 0)) {
    return false;
  }
  if (param_5 != (ASN1_INTEGER *)0x0) {
    ASN1_INTEGER_free(*(ASN1_INTEGER **)(param_1 + 8));
    pAVar2 = ASN1_INTEGER_dup(param_5);
    *(ASN1_INTEGER **)(param_1 + 8) = pAVar2;
    if (pAVar2 == (ASN1_INTEGER *)0x0) {
      return false;
    }
  }
  bVar3 = true;
  if (param_2 != (EVP_PKEY *)0x0) {
    iVar1 = X509_PUBKEY_set((X509_PUBKEY **)(param_1 + 0x30),param_2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



uchar * OSSL_CRMF_ENCRYPTEDVALUE_decrypt
                  (long param_1,undefined8 param_2,undefined8 param_3,long param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  EVP_CIPHER *cipher;
  EVP_PKEY_CTX *ctx;
  ulong uVar5;
  char *name;
  uchar *out;
  EVP_CIPHER_CTX *c;
  undefined8 uVar6;
  long in_FS_OFFSET;
  uchar *local_a0;
  uchar *local_98;
  int local_84;
  size_t local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (param_5 == (int *)0x0) {
    ERR_new();
    uVar6 = 0x30e;
LAB_00101a71:
    ERR_set_debug("crypto/crmf/crmf_lib.c",uVar6,"OSSL_CRMF_ENCRYPTEDVALUE_decrypt");
    ERR_set_error(0x38,0x6d,0);
  }
  else {
    *param_5 = 0;
    if ((((param_1 == 0) || (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0)) ||
        (*(long *)(param_1 + 0x10) == 0)) || ((*(long *)(param_1 + 0x28) == 0 || (param_4 == 0)))) {
      ERR_new();
      uVar6 = 0x314;
      goto LAB_00101a71;
    }
    OBJ_obj2txt(local_78,0x32,(ASN1_OBJECT *)**(undefined8 **)(param_1 + 8),0);
    ERR_set_mark();
    cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(param_2,local_78,param_3);
    if (cipher == (EVP_CIPHER *)0x0) {
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
      name = OBJ_nid2sn(iVar2);
      cipher = EVP_get_cipherbyname(name);
      if (cipher != (EVP_CIPHER *)0x0) goto LAB_00101895;
      ctx = (EVP_PKEY_CTX *)0x0;
      out = (uchar *)0x0;
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_lib.c",800,"OSSL_CRMF_ENCRYPTEDVALUE_decrypt");
      ERR_set_error(0x38,0x72,0);
      c = (EVP_CIPHER_CTX *)0x0;
      local_a0 = (uchar *)0x0;
      local_98 = (uchar *)0x0;
    }
    else {
LAB_00101895:
      ERR_pop_to_mark();
      iVar2 = EVP_CIPHER_get_key_length(cipher);
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_2,param_4,param_3);
      if (ctx != (EVP_PKEY_CTX *)0x0) {
        iVar3 = EVP_PKEY_decrypt_init(ctx);
        if (0 < iVar3) {
          piVar1 = *(int **)(param_1 + 0x10);
          iVar3 = EVP_PKEY_decrypt(ctx,(uchar *)0x0,&local_80,*(uchar **)(piVar1 + 2),(long)*piVar1)
          ;
          if (0 < iVar3) {
            local_98 = (uchar *)CRYPTO_malloc((int)local_80,"crypto/crmf/crmf_lib.c",0x32f);
            if (local_98 == (uchar *)0x0) {
              out = (uchar *)0x0;
              c = (EVP_CIPHER_CTX *)0x0;
              local_a0 = (uchar *)0x0;
            }
            else {
              uVar4 = EVP_PKEY_decrypt(ctx,local_98,&local_80,*(uchar **)(piVar1 + 2),(long)*piVar1)
              ;
              uVar5 = (ulong)(uint)((int)(~uVar4 & uVar4 - 1 | uVar4) >> 0x1f);
              if ((long)(((long)iVar2 ^ local_80) - 1 & ~((long)iVar2 ^ local_80) & ~uVar5 &
                        uVar5 - 1) < 0) {
                iVar2 = EVP_CIPHER_get_iv_length(cipher);
                local_a0 = (uchar *)CRYPTO_malloc(iVar2,"crypto/crmf/crmf_lib.c",0x33d);
                if (local_a0 == (uchar *)0x0) {
                  out = (uchar *)0x0;
                  c = (EVP_CIPHER_CTX *)0x0;
                }
                else {
                  iVar2 = EVP_CIPHER_get_iv_length(cipher);
                  iVar2 = ASN1_TYPE_get_octetstring
                                    (*(ASN1_TYPE **)(*(long *)(param_1 + 8) + 8),local_a0,iVar2);
                  iVar3 = EVP_CIPHER_get_iv_length(cipher);
                  if (iVar2 == iVar3) {
                    iVar2 = **(int **)(param_1 + 0x28);
                    iVar3 = EVP_CIPHER_get_block_size(cipher);
                    out = (uchar *)CRYPTO_malloc(iVar2 + iVar3,"crypto/crmf/crmf_lib.c",0x346);
                    if (out == (uchar *)0x0) {
                      c = (EVP_CIPHER_CTX *)0x0;
                    }
                    else {
                      c = EVP_CIPHER_CTX_new();
                      if (c != (EVP_CIPHER_CTX *)0x0) {
                        EVP_CIPHER_CTX_set_padding(c,0);
                        iVar2 = EVP_DecryptInit(c,cipher,local_98,local_a0);
                        if (iVar2 != 0) {
                          iVar2 = EVP_DecryptUpdate(c,out,param_5,
                                                    *(uchar **)(*(int **)(param_1 + 0x28) + 2),
                                                    **(int **)(param_1 + 0x28));
                          if (iVar2 != 0) {
                            iVar2 = EVP_DecryptFinal(c,out + *param_5,&local_84);
                            if (iVar2 != 0) {
                              *param_5 = *param_5 + local_84;
                              EVP_PKEY_CTX_free(ctx);
                              EVP_CIPHER_CTX_free(c);
                              EVP_CIPHER_free(cipher);
                              CRYPTO_clear_free(local_98,local_80,"crypto/crmf/crmf_lib.c",0x35b);
                              CRYPTO_free(local_a0);
                              goto LAB_00101a3a;
                            }
                          }
                        }
                        ERR_new();
                        ERR_set_debug("crypto/crmf/crmf_lib.c",0x351,
                                      "OSSL_CRMF_ENCRYPTEDVALUE_decrypt");
                        ERR_set_error(0x38,0x7d,0);
                      }
                    }
                  }
                  else {
                    ERR_new();
                    out = (uchar *)0x0;
                    ERR_set_debug("crypto/crmf/crmf_lib.c",0x342,"OSSL_CRMF_ENCRYPTEDVALUE_decrypt")
                    ;
                    ERR_set_error(0x38,0x65,0);
                    c = (EVP_CIPHER_CTX *)0x0;
                  }
                }
              }
              else {
                ERR_clear_error();
                out = (uchar *)0x0;
                ERR_new();
                ERR_set_debug("crypto/crmf/crmf_lib.c",0x337,"OSSL_CRMF_ENCRYPTEDVALUE_decrypt");
                ERR_set_error(0x38,0x6a,0);
                c = (EVP_CIPHER_CTX *)0x0;
                local_a0 = (uchar *)0x0;
              }
            }
            goto LAB_001019df;
          }
        }
      }
      local_a0 = (uchar *)0x0;
      out = (uchar *)0x0;
      c = (EVP_CIPHER_CTX *)0x0;
      local_98 = (uchar *)0x0;
    }
LAB_001019df:
    EVP_PKEY_CTX_free(ctx);
    EVP_CIPHER_CTX_free(c);
    EVP_CIPHER_free(cipher);
    CRYPTO_clear_free(local_98,local_80,"crypto/crmf/crmf_lib.c",0x35b);
    CRYPTO_free(local_a0);
    CRYPTO_free(out);
  }
  out = (uchar *)0x0;
LAB_00101a3a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return out;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long OSSL_CRMF_ENCRYPTEDKEY_get1_pkey
               (int *param_1,X509_STORE *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  BIO *in;
  ASN1_ITEM *it;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  BIO *local_70;
  int local_60;
  int local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (int *)0x0) {
    ERR_new();
    uVar5 = 0x2b0;
LAB_00102031:
    lVar4 = 0;
    ERR_set_debug("crypto/crmf/crmf_lib.c",uVar5,"OSSL_CRMF_ENCRYPTEDKEY_get1_pkey");
    ERR_set_error(0x38,0x6d,0);
    goto LAB_00101eca;
  }
  if (*param_1 != 1) {
    lVar4 = 0;
    pvVar3 = (void *)OSSL_CRMF_ENCRYPTEDVALUE_decrypt
                               (*(undefined8 *)(param_1 + 2),param_7,param_8,param_4,&local_4c);
    local_48 = pvVar3;
    if (pvVar3 != (void *)0x0) {
      lVar4 = d2i_AutoPrivateKey_ex(0,&local_48,(long)local_4c,param_7,param_8);
    }
    CRYPTO_free(pvVar3);
    goto LAB_00101eca;
  }
  if (param_2 == (X509_STORE *)0x0) {
    ERR_new(param_1,0,param_4);
    uVar5 = 0x2c2;
    goto LAB_00102031;
  }
  uVar5 = param_7;
  in = (BIO *)CMS_EnvelopedData_decrypt(*(undefined8 *)(param_1 + 2),0,param_4,param_5,param_6,0);
  if (in == (BIO *)0x0) {
    ERR_new(param_8,uVar5);
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x2c8,"OSSL_CRMF_ENCRYPTEDKEY_get1_pkey");
    ERR_set_error(0x38,0x7c,0);
LAB_00101fc0:
    local_70 = (BIO *)0x0;
    lVar4 = 0;
    pvVar3 = (void *)0x0;
  }
  else {
    it = (ASN1_ITEM *)CMS_SignedData_it();
    pvVar3 = ASN1_item_d2i_bio(it,in,(void *)0x0);
    if (pvVar3 == (void *)0x0) goto LAB_00101fc0;
    local_60 = X509_PURPOSE_get_by_sname("cmKGA");
    if (local_60 < 0) {
      local_60 = X509_PURPOSE_get_unused_id(param_7);
      iVar1 = X509_PURPOSE_add(local_60,1,0,check_cmKGA,
                               "Certificate Management Key Generation Authority","cmKGA",(void *)0x0
                              );
      if (iVar1 != 0) goto LAB_00101e07;
LAB_00102008:
      local_70 = (BIO *)0x0;
      lVar4 = 0;
    }
    else {
LAB_00101e07:
      local_70 = (BIO *)X509_STORE_get0_param(param_2);
      lVar4 = 0;
      if (local_70 != (BIO *)0x0) {
        iVar1 = X509_VERIFY_PARAM_get_purpose(local_70);
        iVar2 = X509_STORE_set_purpose(param_2,local_60);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("crypto/crmf/crmf_lib.c",0x2db,"OSSL_CRMF_ENCRYPTEDKEY_get1_pkey");
          ERR_set_error(0x38,0x7e,0);
          goto LAB_00102008;
        }
        local_70 = (BIO *)CMS_SignedData_verify(pvVar3,0,0,param_2,param_3,0,0,param_7,param_8);
        iVar1 = X509_STORE_set_purpose(param_2,iVar1);
        lVar4 = 0;
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/crmf/crmf_lib.c",0x2e3,"OSSL_CRMF_ENCRYPTEDKEY_get1_pkey");
          ERR_set_error(0x38,0x7e,0);
        }
        else if (local_70 == (BIO *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/crmf/crmf_lib.c",0x2e8,"OSSL_CRMF_ENCRYPTEDKEY_get1_pkey");
          ERR_set_error(0x38,0x7f,0);
        }
        else {
          lVar4 = d2i_PrivateKey_ex_bio(local_70,0,param_7,param_8);
          if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("crypto/crmf/crmf_lib.c",0x2ee,"OSSL_CRMF_ENCRYPTEDKEY_get1_pkey");
            ERR_set_error(0x38,0x7b,0);
          }
        }
      }
    }
  }
  CMS_SignedData_free(pvVar3);
  BIO_free(in);
  BIO_free(local_70);
LAB_00101eca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



X509 * OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uchar *ptr;
  X509 *pXVar1;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  X509 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509 *)0x0;
  ptr = (uchar *)OSSL_CRMF_ENCRYPTEDVALUE_decrypt();
  local_30 = ptr;
  if (((ptr != (uchar *)0x0) &&
      (local_28 = (X509 *)X509_new_ex(param_2,param_3), local_28 != (X509 *)0x0)) &&
     (pXVar1 = d2i_X509(&local_28,&local_30,(long)local_34), pXVar1 == (X509 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/crmf/crmf_lib.c",0x378,"OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert");
    ERR_set_error(0x38,0x68,0);
    X509_free(local_28);
    local_28 = (X509 *)0x0;
  }
  CRYPTO_free(ptr);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



X509 * OSSL_CRMF_ENCRYPTEDKEY_get1_encCert
                 (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  X509 *pXVar1;
  BIO *bp;
  
  if (*param_1 != 1) {
    pXVar1 = (X509 *)OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert
                               (*(undefined8 *)(param_1 + 2),param_2,param_3);
    return pXVar1;
  }
  bp = (BIO *)CMS_EnvelopedData_decrypt
                        (*(undefined8 *)(param_1 + 2),0,param_4,0,0,param_5,param_2,param_3);
  if (bp == (BIO *)0x0) {
    pXVar1 = (X509 *)0x0;
  }
  else {
    pXVar1 = d2i_X509_bio(bp,(X509 **)0x0);
    if (pXVar1 == (X509 *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/crmf/crmf_lib.c",0x39c,"OSSL_CRMF_ENCRYPTEDKEY_get1_encCert");
      ERR_set_error(0x38,0x68,0);
    }
    BIO_free(bp);
  }
  return pXVar1;
}



void OSSL_CRMF_ENCRYPTEDKEY_init_envdata(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)OSSL_CRMF_ENCRYPTEDKEY_new();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = param_1;
  }
  return;
}


