
undefined8 TS_RESP_set_status_info(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 != param_2) {
    lVar1 = TS_STATUS_INFO_dup(param_2);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x19,"TS_RESP_set_status_info");
      ERR_set_error(0x2f,0x8002f,0);
      return 0;
    }
    TS_STATUS_INFO_free(*param_1);
    *param_1 = lVar1;
  }
  return 1;
}



undefined8 TS_RESP_get_status_info(undefined8 *param_1)

{
  return *param_1;
}



void TS_RESP_set_tst_info(long param_1,undefined8 param_2,undefined8 param_3)

{
  PKCS7_free(*(PKCS7 **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  TS_TST_INFO_free(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



undefined8 TS_RESP_get_token(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 TS_RESP_get_tst_info(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void TS_TST_INFO_set_version(undefined8 *param_1,long param_2)

{
  ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,param_2);
  return;
}



void TS_TST_INFO_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get((ASN1_INTEGER *)*param_1);
  return;
}



undefined8 TS_TST_INFO_set_policy_id(long param_1,ASN1_OBJECT *param_2)

{
  ASN1_OBJECT *pAVar1;
  
  if (*(ASN1_OBJECT **)(param_1 + 8) != param_2) {
    pAVar1 = OBJ_dup(param_2);
    if (pAVar1 == (ASN1_OBJECT *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x4c,"TS_TST_INFO_set_policy_id");
      ERR_set_error(0x2f,0x80008,0);
      return 0;
    }
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_1 + 8));
    *(ASN1_OBJECT **)(param_1 + 8) = pAVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_policy_id(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 TS_TST_INFO_set_msg_imprint(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != param_2) {
    lVar1 = TS_MSG_IMPRINT_dup(param_2);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x61,"TS_TST_INFO_set_msg_imprint");
      ERR_set_error(0x2f,0x8002f,0);
      return 0;
    }
    TS_MSG_IMPRINT_free(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_msg_imprint(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 TS_TST_INFO_set_serial(long param_1,ASN1_INTEGER *param_2)

{
  ASN1_INTEGER *pAVar1;
  
  if (*(ASN1_INTEGER **)(param_1 + 0x18) != param_2) {
    pAVar1 = ASN1_INTEGER_dup(param_2);
    if (pAVar1 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x76,"TS_TST_INFO_set_serial");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    ASN1_INTEGER_free(*(ASN1_INTEGER **)(param_1 + 0x18));
    *(ASN1_INTEGER **)(param_1 + 0x18) = pAVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_serial(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 TS_TST_INFO_set_time(long param_1,ASN1_STRING *param_2)

{
  ASN1_STRING *pAVar1;
  
  if (*(ASN1_STRING **)(param_1 + 0x20) != param_2) {
    pAVar1 = ASN1_STRING_dup(param_2);
    if (pAVar1 == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x8b,"TS_TST_INFO_set_time");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    ASN1_GENERALIZEDTIME_free(*(ASN1_GENERALIZEDTIME **)(param_1 + 0x20));
    *(ASN1_STRING **)(param_1 + 0x20) = pAVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_time(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 TS_TST_INFO_set_accuracy(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != param_2) {
    lVar1 = TS_ACCURACY_dup(param_2);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0xa0,"TS_TST_INFO_set_accuracy");
      ERR_set_error(0x2f,0x8002f,0);
      return 0;
    }
    TS_ACCURACY_free(*(undefined8 *)(param_1 + 0x28));
    *(long *)(param_1 + 0x28) = lVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_accuracy(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 TS_ACCURACY_set_seconds(long *param_1,ASN1_INTEGER *param_2)

{
  ASN1_INTEGER *pAVar1;
  
  if ((ASN1_INTEGER *)*param_1 != param_2) {
    pAVar1 = ASN1_INTEGER_dup(param_2);
    if (pAVar1 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0xb5,"TS_ACCURACY_set_seconds");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    ASN1_INTEGER_free((ASN1_INTEGER *)*param_1);
    *param_1 = (long)pAVar1;
  }
  return 1;
}



undefined8 TS_ACCURACY_get_seconds(undefined8 *param_1)

{
  return *param_1;
}



undefined8 TS_ACCURACY_set_millis(long param_1,ASN1_INTEGER *param_2)

{
  ASN1_INTEGER *a;
  
  a = *(ASN1_INTEGER **)(param_1 + 8);
  if (a != param_2) {
    if (param_2 != (ASN1_INTEGER *)0x0) {
      param_2 = ASN1_INTEGER_dup(param_2);
      if (param_2 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ts/ts_rsp_utils.c",0xcb,"TS_ACCURACY_set_millis");
        ERR_set_error(0x2f,0x8000d,0);
        return 0;
      }
      a = *(ASN1_INTEGER **)(param_1 + 8);
    }
    ASN1_INTEGER_free(a);
    *(ASN1_INTEGER **)(param_1 + 8) = param_2;
  }
  return 1;
}



undefined8 TS_ACCURACY_get_millis(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 TS_ACCURACY_set_micros(long param_1,ASN1_INTEGER *param_2)

{
  ASN1_INTEGER *a;
  
  a = *(ASN1_INTEGER **)(param_1 + 0x10);
  if (a != param_2) {
    if (param_2 != (ASN1_INTEGER *)0x0) {
      param_2 = ASN1_INTEGER_dup(param_2);
      if (param_2 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ts/ts_rsp_utils.c",0xe2,"TS_ACCURACY_set_micros");
        ERR_set_error(0x2f,0x8000d,0);
        return 0;
      }
      a = *(ASN1_INTEGER **)(param_1 + 0x10);
    }
    ASN1_INTEGER_free(a);
    *(ASN1_INTEGER **)(param_1 + 0x10) = param_2;
  }
  return 1;
}



undefined8 TS_ACCURACY_get_micros(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 TS_TST_INFO_set_ordering(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x30) = -(uint)(param_2 != 0) & 0xff;
  return 1;
}



bool TS_TST_INFO_get_ordering(long param_1)

{
  return *(int *)(param_1 + 0x30) != 0;
}



undefined8 TS_TST_INFO_set_nonce(long param_1,ASN1_INTEGER *param_2)

{
  ASN1_INTEGER *pAVar1;
  
  if (*(ASN1_INTEGER **)(param_1 + 0x38) != param_2) {
    pAVar1 = ASN1_INTEGER_dup(param_2);
    if (pAVar1 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x103,"TS_TST_INFO_set_nonce");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    ASN1_INTEGER_free(*(ASN1_INTEGER **)(param_1 + 0x38));
    *(ASN1_INTEGER **)(param_1 + 0x38) = pAVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_nonce(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 TS_TST_INFO_set_tsa(long param_1,GENERAL_NAME *param_2)

{
  GENERAL_NAME *pGVar1;
  
  if (*(GENERAL_NAME **)(param_1 + 0x40) != param_2) {
    pGVar1 = GENERAL_NAME_dup(param_2);
    if (pGVar1 == (GENERAL_NAME *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_utils.c",0x118,"TS_TST_INFO_set_tsa");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    GENERAL_NAME_free(*(GENERAL_NAME **)(param_1 + 0x40));
    *(GENERAL_NAME **)(param_1 + 0x40) = pGVar1;
  }
  return 1;
}



undefined8 TS_TST_INFO_get_tsa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 TS_TST_INFO_get_exts(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



void TS_TST_INFO_ext_free(long param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x48),&X509_EXTENSION_free);
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  return;
}



void TS_TST_INFO_get_ext_count(long param_1)

{
  X509v3_get_ext_count(*(stack_st_X509_EXTENSION **)(param_1 + 0x48));
  return;
}



void TS_TST_INFO_get_ext_by_NID(long param_1,int param_2,int param_3)

{
  X509v3_get_ext_by_NID(*(stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2,param_3);
  return;
}



void TS_TST_INFO_get_ext_by_OBJ(long param_1,ASN1_OBJECT *param_2,int param_3)

{
  X509v3_get_ext_by_OBJ(*(stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2,param_3);
  return;
}



void TS_TST_INFO_get_ext_by_critical(long param_1,int param_2,int param_3)

{
  X509v3_get_ext_by_critical(*(stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2,param_3);
  return;
}



void TS_TST_INFO_get_ext(long param_1,int param_2)

{
  X509v3_get_ext(*(stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2);
  return;
}



void TS_TST_INFO_delete_ext(long param_1,int param_2)

{
  X509v3_delete_ext(*(stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2);
  return;
}



bool TS_TST_INFO_add_ext(long param_1,X509_EXTENSION *param_2,int param_3)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2,param_3);
  return psVar1 != (stack_st_X509_EXTENSION *)0x0;
}



void TS_TST_INFO_get_ext_d2i(long param_1,int param_2,int *param_3,int *param_4)

{
  X509V3_get_d2i(*(stack_st_X509_EXTENSION **)(param_1 + 0x48),param_2,param_3,param_4);
  return;
}



void TS_STATUS_INFO_set_status(undefined8 *param_1,int param_2)

{
  ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,(long)param_2);
  return;
}



undefined8 TS_STATUS_INFO_get0_status(undefined8 *param_1)

{
  return *param_1;
}



undefined8 TS_STATUS_INFO_get0_text(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 TS_STATUS_INFO_get0_failure_info(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


