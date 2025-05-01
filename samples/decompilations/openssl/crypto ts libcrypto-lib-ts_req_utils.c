
void TS_REQ_set_version(undefined8 *param_1,long param_2)

{
  ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,param_2);
  return;
}



void TS_REQ_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get((ASN1_INTEGER *)*param_1);
  return;
}



undefined8 TS_REQ_set_msg_imprint(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != param_2) {
    lVar1 = TS_MSG_IMPRINT_dup(param_2);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_req_utils.c",0x23,"TS_REQ_set_msg_imprint");
      ERR_set_error(0x2f,0x8002f,0);
      return 0;
    }
    TS_MSG_IMPRINT_free(*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return 1;
}



undefined8 TS_REQ_get_msg_imprint(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 TS_MSG_IMPRINT_set_algo(long *param_1,X509_ALGOR *param_2)

{
  X509_ALGOR *pXVar1;
  
  if ((X509_ALGOR *)*param_1 != param_2) {
    pXVar1 = X509_ALGOR_dup(param_2);
    if (pXVar1 == (X509_ALGOR *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_req_utils.c",0x38,"TS_MSG_IMPRINT_set_algo");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    X509_ALGOR_free((X509_ALGOR *)*param_1);
    *param_1 = (long)pXVar1;
  }
  return 1;
}



undefined8 TS_MSG_IMPRINT_get_algo(undefined8 *param_1)

{
  return *param_1;
}



void TS_MSG_IMPRINT_set_msg(long param_1,uchar *param_2,int param_3)

{
  ASN1_OCTET_STRING_set(*(ASN1_OCTET_STRING **)(param_1 + 8),param_2,param_3);
  return;
}



undefined8 TS_MSG_IMPRINT_get_msg(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 TS_REQ_set_policy_id(long param_1,ASN1_OBJECT *param_2)

{
  ASN1_OBJECT *pAVar1;
  
  if (*(ASN1_OBJECT **)(param_1 + 0x10) != param_2) {
    pAVar1 = OBJ_dup(param_2);
    if (pAVar1 == (ASN1_OBJECT *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_req_utils.c",0x57,"TS_REQ_set_policy_id");
      ERR_set_error(0x2f,0x80008,0);
      return 0;
    }
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_1 + 0x10));
    *(ASN1_OBJECT **)(param_1 + 0x10) = pAVar1;
  }
  return 1;
}



undefined8 TS_REQ_get_policy_id(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 TS_REQ_set_nonce(long param_1,ASN1_INTEGER *param_2)

{
  ASN1_INTEGER *pAVar1;
  
  if (*(ASN1_INTEGER **)(param_1 + 0x18) != param_2) {
    pAVar1 = ASN1_INTEGER_dup(param_2);
    if (pAVar1 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_req_utils.c",0x6c,"TS_REQ_set_nonce");
      ERR_set_error(0x2f,0x8000d,0);
      return 0;
    }
    ASN1_INTEGER_free(*(ASN1_INTEGER **)(param_1 + 0x18));
    *(ASN1_INTEGER **)(param_1 + 0x18) = pAVar1;
  }
  return 1;
}



undefined8 TS_REQ_get_nonce(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 TS_REQ_set_cert_req(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x20) = -(uint)(param_2 != 0) & 0xff;
  return 1;
}



bool TS_REQ_get_cert_req(long param_1)

{
  return *(int *)(param_1 + 0x20) != 0;
}



undefined8 TS_REQ_get_exts(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



void TS_REQ_ext_free(long param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x28),&X509_EXTENSION_free);
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  return;
}



void TS_REQ_get_ext_count(long param_1)

{
  X509v3_get_ext_count(*(stack_st_X509_EXTENSION **)(param_1 + 0x28));
  return;
}



void TS_REQ_get_ext_by_NID(long param_1,int param_2,int param_3)

{
  X509v3_get_ext_by_NID(*(stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2,param_3);
  return;
}



void TS_REQ_get_ext_by_OBJ(long param_1,ASN1_OBJECT *param_2,int param_3)

{
  X509v3_get_ext_by_OBJ(*(stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2,param_3);
  return;
}



void TS_REQ_get_ext_by_critical(long param_1,int param_2,int param_3)

{
  X509v3_get_ext_by_critical(*(stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2,param_3);
  return;
}



void TS_REQ_get_ext(long param_1,int param_2)

{
  X509v3_get_ext(*(stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2);
  return;
}



void TS_REQ_delete_ext(long param_1,int param_2)

{
  X509v3_delete_ext(*(stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2);
  return;
}



bool TS_REQ_add_ext(long param_1,X509_EXTENSION *param_2,int param_3)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2,param_3);
  return psVar1 != (stack_st_X509_EXTENSION *)0x0;
}



void TS_REQ_get_ext_d2i(long param_1,int param_2,int *param_3,int *param_4)

{
  X509V3_get_d2i(*(stack_st_X509_EXTENSION **)(param_1 + 0x28),param_2,param_3,param_4);
  return;
}


