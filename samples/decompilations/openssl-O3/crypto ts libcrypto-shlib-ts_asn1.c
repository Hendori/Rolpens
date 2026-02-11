
undefined1 * TS_MSG_IMPRINT_it(void)

{
  return local_it_7;
}



undefined1 * TS_ACCURACY_it(void)

{
  return local_it_5;
}



undefined1 * TS_STATUS_INFO_it(void)

{
  return local_it_3;
}



void d2i_TS_MSG_IMPRINT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_7);
  return;
}



void d2i_TS_REQ(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_6);
  return;
}



void d2i_TS_TST_INFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_4);
  return;
}



void d2i_TS_RESP(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_2);
  return;
}



void i2d_TS_MSG_IMPRINT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_7);
  return;
}



void i2d_TS_REQ(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_6);
  return;
}



void i2d_TS_TST_INFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_4);
  return;
}



void i2d_TS_RESP(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_2);
  return;
}



void TS_MSG_IMPRINT_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_7);
  return;
}



void TS_REQ_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_6);
  return;
}



void TS_TST_INFO_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_4);
  return;
}



void TS_RESP_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_2);
  return;
}



void TS_MSG_IMPRINT_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_7);
  return;
}



void TS_MSG_IMPRINT_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_7,param_1);
  return;
}



void d2i_TS_MSG_IMPRINT_bio(BIO *param_1,void **param_2)

{
  ASN1_d2i_bio(TS_MSG_IMPRINT_new,d2i_TS_MSG_IMPRINT,param_1,param_2);
  return;
}



void i2d_TS_MSG_IMPRINT_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(i2d_TS_MSG_IMPRINT,param_1,param_2);
  return;
}



void d2i_TS_MSG_IMPRINT_fp(FILE *param_1,void **param_2)

{
  ASN1_d2i_fp(TS_MSG_IMPRINT_new,d2i_TS_MSG_IMPRINT,param_1,param_2);
  return;
}



void i2d_TS_MSG_IMPRINT_fp(FILE *param_1,void *param_2)

{
  ASN1_i2d_fp(i2d_TS_MSG_IMPRINT,param_1,param_2);
  return;
}



void TS_REQ_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_6);
  return;
}



void TS_REQ_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_6,param_1);
  return;
}



void d2i_TS_REQ_bio(BIO *param_1,void **param_2)

{
  ASN1_d2i_bio(TS_REQ_new,d2i_TS_REQ,param_1,param_2);
  return;
}



void i2d_TS_REQ_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(i2d_TS_REQ,param_1,param_2);
  return;
}



void d2i_TS_REQ_fp(FILE *param_1,void **param_2)

{
  ASN1_d2i_fp(TS_REQ_new,d2i_TS_REQ,param_1,param_2);
  return;
}



void i2d_TS_REQ_fp(FILE *param_1,void *param_2)

{
  ASN1_i2d_fp(i2d_TS_REQ,param_1,param_2);
  return;
}



void d2i_TS_ACCURACY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_5);
  return;
}



void i2d_TS_ACCURACY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_5);
  return;
}



void TS_ACCURACY_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_5);
  return;
}



void TS_ACCURACY_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_5);
  return;
}



void TS_ACCURACY_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_5,param_1);
  return;
}



void TS_TST_INFO_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_4);
  return;
}



void TS_TST_INFO_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_4,param_1);
  return;
}



void d2i_TS_TST_INFO_bio(BIO *param_1,void **param_2)

{
  ASN1_d2i_bio(TS_TST_INFO_new,d2i_TS_TST_INFO,param_1,param_2);
  return;
}



void i2d_TS_TST_INFO_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(i2d_TS_TST_INFO,param_1,param_2);
  return;
}



void d2i_TS_TST_INFO_fp(FILE *param_1,void **param_2)

{
  ASN1_d2i_fp(TS_TST_INFO_new,d2i_TS_TST_INFO,param_1,param_2);
  return;
}



void i2d_TS_TST_INFO_fp(FILE *param_1,void *param_2)

{
  ASN1_i2d_fp(i2d_TS_TST_INFO,param_1,param_2);
  return;
}



void d2i_TS_STATUS_INFO(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_3);
  return;
}



void i2d_TS_STATUS_INFO(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_3);
  return;
}



void TS_STATUS_INFO_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_3);
  return;
}



void TS_STATUS_INFO_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_3);
  return;
}



void TS_STATUS_INFO_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_3,param_1);
  return;
}



void TS_RESP_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_2);
  return;
}



void TS_RESP_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_2,param_1);
  return;
}



void d2i_TS_RESP_bio(BIO *param_1,void **param_2)

{
  ASN1_d2i_bio(TS_RESP_new,d2i_TS_RESP,param_1,param_2);
  return;
}



void i2d_TS_RESP_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(i2d_TS_RESP,param_1,param_2);
  return;
}



void d2i_TS_RESP_fp(FILE *param_1,void **param_2)

{
  ASN1_d2i_fp(TS_RESP_new,d2i_TS_RESP,param_1,param_2);
  return;
}



void i2d_TS_RESP_fp(FILE *param_1,void *param_2)

{
  ASN1_i2d_fp(i2d_TS_RESP,param_1,param_2);
  return;
}



undefined8 PKCS7_to_TS_TST_INFO(PKCS7 *param_1)

{
  pkcs7_st *ppVar1;
  PKCS7_SIGNED *pPVar2;
  stack_st_X509_ALGOR *psVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  char **local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = OBJ_obj2nid(param_1->type);
  if (iVar4 == 0x16) {
    lVar5 = PKCS7_ctrl(param_1,2,0,(char *)0x0);
    if (lVar5 != 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_asn1.c",0xd9,"PKCS7_to_TS_TST_INFO");
      ERR_set_error(0x2f,0x86,0);
      uVar6 = 0;
      goto LAB_001004f2;
    }
    ppVar1 = ((param_1->d).sign)->contents;
    iVar4 = OBJ_obj2nid(ppVar1->type);
    if (iVar4 == 0xcf) {
      pPVar2 = (ppVar1->d).sign;
      if (*(int *)&pPVar2->version == 4) {
        psVar3 = pPVar2->md_algs;
        local_18 = (psVar3->stack).data;
        uVar6 = d2i_TS_TST_INFO(0,&local_18,(long)(psVar3->stack).num);
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/ts/ts_asn1.c",0xe4,"PKCS7_to_TS_TST_INFO");
        ERR_set_error(0x2f,0x85,0);
        uVar6 = 0;
      }
      goto LAB_001004f2;
    }
    ERR_new();
    uVar6 = 0xdf;
  }
  else {
    ERR_new();
    uVar6 = 0xd5;
  }
  ERR_set_debug("crypto/ts/ts_asn1.c",uVar6,"PKCS7_to_TS_TST_INFO");
  ERR_set_error(0x2f,0x84,0);
  uVar6 = 0;
LAB_001004f2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ts_resp_cb(int param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (param_1 == 1) {
    puVar1[2] = 0;
  }
  else if (param_1 == 3) {
    TS_TST_INFO_free(puVar1[2]);
  }
  else if (param_1 == 5) {
    uVar2 = ASN1_INTEGER_get(*(ASN1_INTEGER **)*puVar1);
    if (puVar1[1] == 0) {
      if (1 < uVar2) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/ts/ts_asn1.c",0x97,"ts_resp_set_tst_info");
      ERR_set_error(0x2f,0x82,0);
    }
    else if (uVar2 < 2) {
      TS_TST_INFO_free(puVar1[2]);
      lVar3 = PKCS7_to_TS_TST_INFO(puVar1[1]);
      puVar1[2] = lVar3;
      if (lVar3 != 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/ts/ts_asn1.c",0x93,"ts_resp_set_tst_info");
      ERR_set_error(0x2f,0x81,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_asn1.c",0x8d,"ts_resp_set_tst_info");
      ERR_set_error(0x2f,0x83,0);
    }
    return 0;
  }
  return 1;
}


