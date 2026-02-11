
undefined1 * OSSL_CMP_REVANNCONTENT_it(void)

{
  return local_it_52;
}



undefined1 * OSSL_CMP_CHALLENGE_it(void)

{
  return local_it_51;
}



undefined1 * OSSL_CMP_POPODECKEYCHALLCONTENT_it(void)

{
  return local_it_50;
}



undefined1 * OSSL_CMP_POPODECKEYRESPCONTENT_it(void)

{
  return local_it_49;
}



undefined1 * OSSL_CMP_CAKEYUPDANNCONTENT_it(void)

{
  return local_it_48;
}



undefined1 * OSSL_CMP_ERRORMSGCONTENT_it(void)

{
  return local_it_47;
}



undefined1 * OSSL_CMP_ITAV_adb(void)

{
  return internal_adb_45;
}



undefined1 * OSSL_CMP_ITAV_it(void)

{
  return local_it_46;
}



undefined1 * OSSL_CMP_ROOTCAKEYUPDATE_it(void)

{
  return local_it_44;
}



undefined1 * OSSL_CMP_CERTREQTEMPLATE_it(void)

{
  return local_it_42;
}



undefined1 * OSSL_CMP_CRLSOURCE_it(void)

{
  return local_it_41;
}



undefined1 * OSSL_CMP_CRLSTATUS_it(void)

{
  return local_it_40;
}



undefined1 * OSSL_CMP_CERTORENCCERT_it(void)

{
  return local_it_23;
}



undefined1 * OSSL_CMP_CERTIFIEDKEYPAIR_it(void)

{
  return local_it_22;
}



undefined1 * OSSL_CMP_REVDETAILS_it(void)

{
  return local_it_21;
}



undefined1 * OSSL_CMP_REVREQCONTENT_it(void)

{
  return local_it_20;
}



undefined1 * OSSL_CMP_REVREPCONTENT_it(void)

{
  return local_it_19;
}



undefined1 * OSSL_CMP_KEYRECREPCONTENT_it(void)

{
  return local_it_18;
}



undefined1 * OSSL_CMP_PKISTATUS_it(void)

{
  return local_it_17;
}



undefined1 * OSSL_CMP_PKISI_it(void)

{
  return local_it_16;
}



undefined1 * OSSL_CMP_CERTSTATUS_it(void)

{
  return local_it_15;
}



undefined1 * OSSL_CMP_CERTCONFIRMCONTENT_it(void)

{
  return local_it_14;
}



undefined1 * OSSL_CMP_CERTRESPONSE_it(void)

{
  return local_it_13;
}



undefined1 * OSSL_CMP_POLLREQ_it(void)

{
  return local_it_12;
}



undefined1 * OSSL_CMP_POLLREQCONTENT_it(void)

{
  return local_it_11;
}



undefined1 * OSSL_CMP_POLLREP_it(void)

{
  return local_it_10;
}



undefined1 * OSSL_CMP_POLLREPCONTENT_it(void)

{
  return local_it_9;
}



undefined1 * OSSL_CMP_CERTREPMESSAGE_it(void)

{
  return local_it_8;
}



undefined1 * OSSL_CMP_GENMSGCONTENT_it(void)

{
  return local_it_7;
}



undefined1 * OSSL_CMP_GENREPCONTENT_it(void)

{
  return local_it_6;
}



undefined1 * OSSL_CMP_CRLANNCONTENT_it(void)

{
  return local_it_5;
}



undefined1 * OSSL_CMP_PKIBODY_it(void)

{
  return local_it_4;
}



undefined1 * OSSL_CMP_PKIHEADER_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_CMP_MSG_it(void)

{
  return local_it_1;
}



undefined1 * OSSL_CMP_MSGS_it(void)

{
  return local_it_0;
}



long gennames_new(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  lVar2 = OPENSSL_sk_new_reserve(0,1);
  if (lVar2 != 0) {
    iVar1 = GENERAL_NAME_set1_X509_NAME(&local_28,param_1);
    if (iVar1 != 0) {
      OPENSSL_sk_push(lVar2,local_28);
      goto LAB_00100280;
    }
    OPENSSL_sk_free(lVar2);
  }
  lVar2 = 0;
LAB_00100280:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_cmp_msg_cb(int param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (param_1 == 0x10) {
    *param_4 = *(undefined8 *)(lVar1 + 0x20);
    return true;
  }
  if (param_1 < 0x11) {
    if (param_1 == 3) {
      CRYPTO_free(*(void **)(lVar1 + 0x28));
    }
    else if (param_1 == 0xf) {
      iVar2 = ossl_cmp_msg_set0_libctx(lVar1,param_4[4],param_4[5]);
      return iVar2 != 0;
    }
    return true;
  }
  if (param_1 == 0x11) {
    *param_4 = *(undefined8 *)(lVar1 + 0x28);
  }
  return true;
}



void d2i_OSSL_CMP_REVANNCONTENT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVANNCONTENT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_REVANNCONTENT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVANNCONTENT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_REVANNCONTENT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVANNCONTENT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_REVANNCONTENT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVANNCONTENT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CHALLENGE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CHALLENGE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CHALLENGE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CHALLENGE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CHALLENGE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CHALLENGE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CHALLENGE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CHALLENGE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CAKEYUPDANNCONTENT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CAKEYUPDANNCONTENT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CAKEYUPDANNCONTENT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CAKEYUPDANNCONTENT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CAKEYUPDANNCONTENT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CAKEYUPDANNCONTENT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CAKEYUPDANNCONTENT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CAKEYUPDANNCONTENT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_ERRORMSGCONTENT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ERRORMSGCONTENT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_ERRORMSGCONTENT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ERRORMSGCONTENT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_ERRORMSGCONTENT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ERRORMSGCONTENT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_ERRORMSGCONTENT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ERRORMSGCONTENT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_ITAV(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ITAV_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_ITAV(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ITAV_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_ITAV_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ITAV_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_ITAV_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ITAV_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CMP_ITAV_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ITAV_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CMP_ROOTCAKEYUPDATE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ROOTCAKEYUPDATE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_ROOTCAKEYUPDATE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ROOTCAKEYUPDATE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_ROOTCAKEYUPDATE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ROOTCAKEYUPDATE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_ROOTCAKEYUPDATE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ROOTCAKEYUPDATE_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined1 * OSSL_CMP_ATAVS_it(void)

{
  return local_it_43;
}



void d2i_OSSL_CMP_ATAVS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ATAVS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_ATAVS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ATAVS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_ATAVS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ATAVS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_ATAVS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_ATAVS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CERTREQTEMPLATE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREQTEMPLATE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CERTREQTEMPLATE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREQTEMPLATE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CERTREQTEMPLATE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREQTEMPLATE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CERTREQTEMPLATE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREQTEMPLATE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CRLSOURCE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSOURCE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CRLSOURCE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSOURCE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CRLSOURCE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSOURCE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CRLSOURCE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSOURCE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CRLSTATUS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSTATUS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CRLSTATUS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSTATUS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CRLSTATUS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSTATUS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CRLSTATUS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CRLSTATUS_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CMP_ITAV_set0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



long OSSL_CMP_ITAV_create(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = OSSL_CMP_ITAV_new();
    if (lVar1 != 0) {
      OSSL_CMP_ITAV_set0(lVar1,param_1,param_2);
    }
    return lVar1;
  }
  return 0;
}



undefined8 OSSL_CMP_ITAV_get0_type(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 OSSL_CMP_ITAV_get0_value(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



bool OSSL_CMP_ITAV_push0_stack_item(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0xd6,"OSSL_CMP_ITAV_push0_stack_item");
    ERR_set_error(0x3a,0x67,0);
    bVar3 = false;
  }
  else if (*param_1 == 0) {
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



undefined8 * OSSL_CMP_ITAV_new0_certProfile(undefined8 param_1)

{
  undefined8 *puVar1;
  ASN1_OBJECT *pAVar2;
  
  puVar1 = (undefined8 *)OSSL_CMP_ITAV_new();
  if (puVar1 != (undefined8 *)0x0) {
    pAVar2 = OBJ_nid2obj(0x4e7);
    puVar1[1] = param_1;
    *puVar1 = pAVar2;
  }
  return puVar1;
}



undefined8 OSSL_CMP_ITAV_get0_certProfile(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0xfb,"OSSL_CMP_ITAV_get0_certProfile");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x4e7) {
      *param_2 = param_1[1];
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0xff,"OSSL_CMP_ITAV_get0_certProfile");
    ERR_set_error(0x3a,0x80106,0);
  }
  return 0;
}



undefined8 * OSSL_CMP_ITAV_new_caCerts(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ASN1_OBJECT *pAVar4;
  
  puVar2 = (undefined8 *)OSSL_CMP_ITAV_new();
  if (puVar2 == (undefined8 *)0x0) {
LAB_00100c80:
    puVar2 = (undefined8 *)0x0;
  }
  else {
    iVar1 = OPENSSL_sk_num(param_1);
    if (0 < iVar1) {
      lVar3 = OPENSSL_sk_deep_copy(param_1,X509_dup,&X509_free);
      puVar2[1] = lVar3;
      if (lVar3 == 0) {
        OSSL_CMP_ITAV_free(puVar2);
        goto LAB_00100c80;
      }
    }
    pAVar4 = OBJ_nid2obj(0x4c7);
    *puVar2 = pAVar4;
  }
  return puVar2;
}



undefined8 OSSL_CMP_ITAV_get0_caCerts(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x119,"OSSL_CMP_ITAV_get0_caCerts");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x4c7) {
      iVar1 = OPENSSL_sk_num(param_1[1]);
      uVar2 = 0;
      if (0 < iVar1) {
        uVar2 = param_1[1];
      }
      *param_2 = uVar2;
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x11d,"OSSL_CMP_ITAV_get0_caCerts");
    ERR_set_error(0x3a,0x80106,0);
  }
  return 0;
}



undefined8 * OSSL_CMP_ITAV_new_rootCaCert(X509 *param_1)

{
  undefined8 *puVar1;
  X509 *pXVar2;
  ASN1_OBJECT *pAVar3;
  
  puVar1 = (undefined8 *)OSSL_CMP_ITAV_new();
  if (puVar1 == (undefined8 *)0x0) {
LAB_00100db8:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (param_1 != (X509 *)0x0) {
      pXVar2 = X509_dup(param_1);
      puVar1[1] = pXVar2;
      if (pXVar2 == (X509 *)0x0) {
        OSSL_CMP_ITAV_free(puVar1);
        goto LAB_00100db8;
      }
    }
    pAVar3 = OBJ_nid2obj(0x4e6);
    *puVar1 = pAVar3;
  }
  return puVar1;
}



undefined8 OSSL_CMP_ITAV_get0_rootCaCert(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x137,"OSSL_CMP_ITAV_get0_rootCaCert");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x4e6) {
      *param_2 = param_1[1];
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x13b,"OSSL_CMP_ITAV_get0_rootCaCert");
    ERR_set_error(0x3a,0x80106,0);
  }
  return 0;
}



undefined8 * OSSL_CMP_ITAV_new_rootCaKeyUpdate(X509 *param_1,X509 *param_2,X509 *param_3)

{
  X509 *pXVar1;
  X509 *pXVar2;
  undefined8 *puVar3;
  ASN1_OBJECT *pAVar4;
  
  pXVar1 = param_1;
  if (param_1 != (X509 *)0x0) {
    pXVar1 = (X509 *)OSSL_CMP_ROOTCAKEYUPDATE_new();
    if (pXVar1 == (X509 *)0x0) {
      return (undefined8 *)0x0;
    }
    pXVar2 = X509_dup(param_1);
    pXVar1->cert_info = (X509_CINF *)pXVar2;
    if (pXVar2 == (X509 *)0x0) goto LAB_00100f28;
    if (param_2 != (X509 *)0x0) {
      pXVar2 = X509_dup(param_2);
      pXVar1->sig_alg = (X509_ALGOR *)pXVar2;
      if (pXVar2 == (X509 *)0x0) goto LAB_00100f28;
    }
    if (param_3 != (X509 *)0x0) {
      pXVar2 = X509_dup(param_3);
      pXVar1->signature = (ASN1_BIT_STRING *)pXVar2;
      if (pXVar2 == (X509 *)0x0) goto LAB_00100f28;
    }
  }
  puVar3 = (undefined8 *)OSSL_CMP_ITAV_new();
  if (puVar3 != (undefined8 *)0x0) {
    pAVar4 = OBJ_nid2obj(0x4c8);
    puVar3[1] = pXVar1;
    *puVar3 = pAVar4;
    return puVar3;
  }
LAB_00100f28:
  OSSL_CMP_ROOTCAKEYUPDATE_free(pXVar1);
  return (undefined8 *)0x0;
}



undefined8
OSSL_CMP_ITAV_get0_rootCaKeyUpdate
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x16a,"OSSL_CMP_ITAV_get0_rootCaKeyUpdate");
    ERR_set_error(0x3a,0xc0102,0);
    return 0;
  }
  iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar2 != 0x4c8) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x16e,"OSSL_CMP_ITAV_get0_rootCaKeyUpdate");
    ERR_set_error(0x3a,0x80106,0);
    return 0;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)0x0) {
    *param_2 = 0;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    uVar3 = 0;
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
  }
  else {
    *param_2 = *puVar1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar1[1];
    }
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    uVar3 = puVar1[2];
  }
  *param_4 = uVar3;
  return 1;
}



undefined8 * OSSL_CMP_ITAV_new0_certReqTemplate(long param_1,long param_2)

{
  undefined8 *puVar1;
  ASN1_OBJECT *pAVar2;
  long *plVar3;
  
  if ((param_1 == 0) && (param_2 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x182,"OSSL_CMP_ITAV_new0_certReqTemplate");
    ERR_set_error(0x3a,0x80106,0);
  }
  else {
    puVar1 = (undefined8 *)OSSL_CMP_ITAV_new();
    if (puVar1 != (undefined8 *)0x0) {
      pAVar2 = OBJ_nid2obj(0x4c9);
      *puVar1 = pAVar2;
      if (param_1 != 0) {
        plVar3 = (long *)OSSL_CMP_CERTREQTEMPLATE_new();
        if (plVar3 == (long *)0x0) {
          OSSL_CMP_ITAV_free(puVar1);
          return (undefined8 *)0x0;
        }
        puVar1[1] = plVar3;
        *plVar3 = param_1;
        plVar3[1] = param_2;
      }
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



void OSSL_CMP_ATAV_set0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



long OSSL_CMP_ATAV_create(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = OSSL_CRMF_ATTRIBUTETYPEANDVALUE_new();
  if (lVar1 != 0) {
    OSSL_CMP_ATAV_set0(lVar1,param_1,param_2);
  }
  return lVar1;
}



undefined8 OSSL_CMP_ATAV_get0_type(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



long OSSL_CMP_ATAV_new_algId(X509_ALGOR *param_1)

{
  X509_ALGOR *a;
  ASN1_OBJECT *pAVar1;
  long lVar2;
  
  if (param_1 == (X509_ALGOR *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x1fa,"OSSL_CMP_ATAV_new_algId");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    a = X509_ALGOR_dup(param_1);
    if (a != (X509_ALGOR *)0x0) {
      pAVar1 = OBJ_nid2obj(0x4eb);
      lVar2 = OSSL_CMP_ATAV_create(pAVar1,a);
      if (lVar2 != 0) {
        return lVar2;
      }
      X509_ALGOR_free(a);
      return 0;
    }
  }
  return 0;
}



undefined8 OSSL_CMP_ATAV_get0_algId(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x4eb) {
    return param_1[1];
  }
  return 0;
}



long OSSL_CMP_ATAV_new_rsaKeyLen(int param_1)

{
  int iVar1;
  ASN1_INTEGER *a;
  ASN1_OBJECT *pAVar2;
  long lVar3;
  
  if (param_1 < 1) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x213,"OSSL_CMP_ATAV_new_rsaKeyLen");
    ERR_set_error(0x3a,0x80106,0);
  }
  else {
    a = ASN1_INTEGER_new();
    if (a != (ASN1_INTEGER *)0x0) {
      iVar1 = ASN1_INTEGER_set(a,(long)param_1);
      if (iVar1 != 0) {
        pAVar2 = OBJ_nid2obj(0x4ec);
        lVar3 = OSSL_CMP_ATAV_create(pAVar2,a);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
      ASN1_INTEGER_free(a);
    }
  }
  return 0;
}



ulong OSSL_CMP_ATAV_get_rsaKeyLen(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x4ec) {
      iVar1 = ASN1_INTEGER_get_int64(&local_18,param_1[1]);
      if (iVar1 != 0) {
        uVar2 = local_18 & 0xffffffff;
        if (0x7ffffffe < local_18 - 1) {
          uVar2 = 0xfffffffe;
        }
        goto LAB_00101357;
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_00101357:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OSSL_CMP_ATAV_get0_value(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



undefined8 OSSL_CMP_ATAV_push1(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x238,"OSSL_CMP_ATAV_push1");
    ERR_set_error(0x3a,0x67,0);
  }
  else if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(param_2);
      if (lVar2 != 0) {
        iVar1 = OPENSSL_sk_push(*param_1,lVar2);
        if (iVar1 != 0) {
          return 1;
        }
        OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(lVar2);
      }
      OPENSSL_sk_free(*param_1);
      *param_1 = 0;
    }
  }
  else {
    lVar2 = OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(param_2);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_sk_push(*param_1,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
      OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(lVar2);
    }
  }
  return 0;
}



undefined8 OSSL_CMP_ITAV_get1_certReqTemplate(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int n;
  long lVar3;
  undefined8 uVar4;
  ASN1_OBJECT *o;
  char *pcVar5;
  int iVar6;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x19c,"OSSL_CMP_ITAV_get1_certReqTemplate");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    *param_2 = 0;
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
    }
    iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar2 == 0x4c9) {
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = OSSL_CRMF_CERTTEMPLATE_dup(*puVar1);
        *param_2 = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        if ((param_3 != (long *)0x0) && (puVar1[1] != 0)) {
          iVar2 = OPENSSL_sk_num();
          lVar3 = OPENSSL_sk_new_reserve(0,iVar2);
          *param_3 = lVar3;
          if (lVar3 == 0) {
LAB_001015e5:
            OSSL_CRMF_CERTTEMPLATE_free(*param_2);
            *param_2 = 0;
            OPENSSL_sk_pop_free(*param_3,OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free);
            *param_3 = 0;
            return 0;
          }
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              uVar4 = OPENSSL_sk_value(puVar1[1],iVar6);
              o = (ASN1_OBJECT *)OSSL_CMP_ATAV_get0_type(uVar4);
              if (o == (ASN1_OBJECT *)0x0) {
                ERR_new();
                ERR_set_debug("crypto/cmp/cmp_asn.c",0x1bb,"OSSL_CMP_ITAV_get1_certReqTemplate");
                ERR_set_error(0x3a,0xca,"keySpec with index %d in certReqTemplate does not exist",
                              iVar6);
                goto LAB_001015e5;
              }
              n = OBJ_obj2nid(o);
              if (1 < n - 0x4ebU) {
                pcVar5 = OBJ_nid2ln(n);
                if ((pcVar5 == (char *)0x0) && (pcVar5 = OBJ_nid2sn(n), pcVar5 == (char *)0x0)) {
                  pcVar5 = "<undef>";
                }
                ERR_new();
                ERR_set_debug("crypto/cmp/cmp_asn.c",0x1c9,"OSSL_CMP_ITAV_get1_certReqTemplate");
                ERR_set_error(0x3a,0xca,
                              "keySpec with index %d in certReqTemplate has invalid type %s",iVar6,
                              pcVar5);
                goto LAB_001015e5;
              }
              iVar6 = iVar6 + 1;
              OSSL_CMP_ATAV_push1(param_3,uVar4);
            } while (iVar2 != iVar6);
          }
        }
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x1a5,"OSSL_CMP_ITAV_get1_certReqTemplate");
    ERR_set_error(0x3a,0x80106,0);
  }
  return 0;
}



undefined8 * OSSL_CMP_ITAV_new0_crlStatusList(undefined8 param_1)

{
  undefined8 *puVar1;
  ASN1_OBJECT *pAVar2;
  
  puVar1 = (undefined8 *)OSSL_CMP_ITAV_new();
  if (puVar1 != (undefined8 *)0x0) {
    pAVar2 = OBJ_nid2obj(0x4e8);
    puVar1[1] = param_1;
    *puVar1 = pAVar2;
  }
  return puVar1;
}



undefined8 OSSL_CMP_ITAV_get0_crlStatusList(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x260,"OSSL_CMP_ITAV_get0_crlStatusList");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x4e8) {
      *param_2 = param_1[1];
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x264,"OSSL_CMP_ITAV_get0_crlStatusList");
    ERR_set_error(0x3a,0x80106,0);
  }
  return 0;
}



undefined8 * OSSL_CMP_CRLSTATUS_new1(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == 0 && param_2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x273,"OSSL_CMP_CRLSTATUS_new1");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    puVar2 = (undefined8 *)OSSL_CMP_CRLSTATUS_new();
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      if (param_1 == 0) {
        *puVar1 = 1;
        lVar3 = OPENSSL_sk_deep_copy(param_2,&GENERAL_NAME_dup,&GENERAL_NAME_free);
        *(long *)(puVar1 + 2) = lVar3;
      }
      else {
        *puVar1 = 0;
        lVar3 = DIST_POINT_NAME_dup(param_1);
        *(long *)(puVar1 + 2) = lVar3;
      }
      if (lVar3 != 0) {
        if (param_3 == 0) {
          return puVar2;
        }
        lVar3 = ASN1_TIME_dup(param_3);
        puVar2[1] = lVar3;
        if (lVar3 != 0) {
          return puVar2;
        }
      }
      OSSL_CMP_CRLSTATUS_free(puVar2);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x277,"OSSL_CMP_CRLSTATUS_new1");
    ERR_set_error(0x3a,0x80106,0);
  }
  return (undefined8 *)0x0;
}



undefined8 OSSL_CMP_CRLSTATUS_create(X509_CRL *param_1,X509 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ISSUING_DIST_POINT *a;
  undefined8 uVar5;
  int *piVar6;
  AUTHORITY_KEYID *a_00;
  X509_NAME *pXVar7;
  DIST_POINT_NAME *pDVar8;
  DIST_POINT_NAME *pDVar9;
  DIST_POINT_NAME *pDVar10;
  int iVar11;
  undefined8 local_40;
  
  if (param_1 == (X509_CRL *)0x0) {
    local_40 = 0;
    if (param_2 == (X509 *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_asn.c",0x2d2,"OSSL_CMP_CRLSTATUS_create");
      ERR_set_error(0x3a,0x67,0);
      return 0;
    }
LAB_0010198e:
    pvVar3 = X509_get_ext_d2i(param_2,0x67,(int *)0x0,(int *)0x0);
    pDVar8 = (DIST_POINT_NAME *)0x0;
    for (iVar11 = 0; iVar2 = OPENSSL_sk_num(pvVar3), iVar11 < iVar2; iVar11 = iVar11 + 1) {
      plVar4 = (long *)OPENSSL_sk_value(pvVar3,iVar11);
      if (plVar4 != (long *)0x0) {
        pDVar9 = (DIST_POINT_NAME *)*plVar4;
        if (pDVar9 != (DIST_POINT_NAME *)0x0) {
          a = (ISSUING_DIST_POINT *)0x0;
          goto LAB_00101ab5;
        }
        lVar1 = plVar4[2];
        if ((lVar1 != 0) &&
           (((param_3 == 0 ||
             ((iVar2 = OPENSSL_sk_num(), iVar2 == 1 &&
              (piVar6 = (int *)OPENSSL_sk_value(lVar1,0), *piVar6 == 4)))) &&
            (pDVar8 == (DIST_POINT_NAME *)0x0)))) {
          pDVar8 = (DIST_POINT_NAME *)plVar4[2];
        }
      }
    }
    if (pDVar8 == (DIST_POINT_NAME *)0x0) {
      a_00 = (AUTHORITY_KEYID *)X509_get_ext_d2i(param_2,0x5a,(int *)0x0,(int *)0x0);
      a = (ISSUING_DIST_POINT *)0x0;
      if ((a_00 == (AUTHORITY_KEYID *)0x0) ||
         (pDVar8 = (DIST_POINT_NAME *)a_00->issuer, pDVar8 == (DIST_POINT_NAME *)0x0)) {
LAB_00101bc4:
        pXVar7 = X509_get_issuer_name(param_2);
        pDVar8 = (DIST_POINT_NAME *)gennames_new(pXVar7);
        pDVar9 = pDVar8;
      }
      else {
        if (param_3 == 0) {
          pDVar9 = (DIST_POINT_NAME *)0x0;
          pDVar10 = (DIST_POINT_NAME *)0x0;
          goto LAB_00101abb;
        }
        iVar11 = OPENSSL_sk_num();
        if ((iVar11 != 1) || (piVar6 = (int *)OPENSSL_sk_value(pDVar8,0), *piVar6 != 4))
        goto LAB_00101bc4;
        pDVar8 = (DIST_POINT_NAME *)a_00->issuer;
        pDVar9 = (DIST_POINT_NAME *)0x0;
      }
      pDVar10 = pDVar9;
      if (pDVar8 != (DIST_POINT_NAME *)0x0) goto LAB_00101aaa;
      if (param_1 != (X509_CRL *)0x0) goto LAB_00101a41;
      goto joined_r0x00101bf5;
    }
    pDVar9 = (DIST_POINT_NAME *)0x0;
    a = (ISSUING_DIST_POINT *)0x0;
    pDVar10 = (DIST_POINT_NAME *)0x0;
    a_00 = (AUTHORITY_KEYID *)0x0;
  }
  else {
    local_40 = X509_CRL_get0_lastUpdate(param_1);
    if (param_2 != (X509 *)0x0) goto LAB_0010198e;
    a = (ISSUING_DIST_POINT *)X509_CRL_get_ext_d2i(param_1,0x302,(int *)0x0,(int *)0x0);
    if (a != (ISSUING_DIST_POINT *)0x0) {
      pDVar9 = a->distpoint;
      pvVar3 = (void *)0x0;
      if (pDVar9 == (DIST_POINT_NAME *)0x0) goto LAB_00101a41;
LAB_00101ab5:
      pDVar8 = (DIST_POINT_NAME *)0x0;
      pDVar10 = (DIST_POINT_NAME *)0x0;
      a_00 = (AUTHORITY_KEYID *)0x0;
      goto LAB_00101abb;
    }
    pvVar3 = (void *)0x0;
    pDVar9 = (DIST_POINT_NAME *)0x0;
LAB_00101a41:
    a_00 = (AUTHORITY_KEYID *)X509_CRL_get_ext_d2i(param_1,0x5a,(int *)0x0,(int *)0x0);
    if ((a_00 == (AUTHORITY_KEYID *)0x0) ||
       (pDVar8 = (DIST_POINT_NAME *)a_00->issuer, pDVar8 == (DIST_POINT_NAME *)0x0)) {
LAB_00101a89:
      uVar5 = X509_CRL_get_issuer(param_1);
      pDVar8 = (DIST_POINT_NAME *)gennames_new(uVar5);
      pDVar10 = pDVar8;
joined_r0x00101bf5:
      if (pDVar8 == (DIST_POINT_NAME *)0x0) {
        uVar5 = 0;
        goto LAB_00101ace;
      }
    }
    else {
      pDVar10 = pDVar9;
      if (param_3 != 0) {
        iVar11 = OPENSSL_sk_num(pDVar8);
        if ((iVar11 == 1) && (piVar6 = (int *)OPENSSL_sk_value(pDVar8,0), *piVar6 == 4)) {
          pDVar8 = (DIST_POINT_NAME *)a_00->issuer;
          goto joined_r0x00101bf5;
        }
        goto LAB_00101a89;
      }
    }
LAB_00101aaa:
    pDVar9 = (DIST_POINT_NAME *)0x0;
  }
LAB_00101abb:
  uVar5 = OSSL_CMP_CRLSTATUS_new1(pDVar9,pDVar8,local_40);
LAB_00101ace:
  OPENSSL_sk_pop_free(pvVar3,&DIST_POINT_free);
  ISSUING_DIST_POINT_free(a);
  AUTHORITY_KEYID_free(a_00);
  OPENSSL_sk_pop_free(pDVar10,&GENERAL_NAME_free);
  return uVar5;
}



undefined8
OSSL_CMP_CRLSTATUS_get0
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((param_2 == (undefined8 *)0x0 || param_3 == (undefined8 *)0x0) ||
     (param_1 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x2fe,"OSSL_CMP_CRLSTATUS_get0");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    ERR_new();
    uVar2 = 0x302;
LAB_00101d51:
    ERR_set_debug("crypto/cmp/cmp_asn.c",uVar2,"OSSL_CMP_CRLSTATUS_get0");
    ERR_set_error(0x3a,0x80106,0);
    uVar2 = 0;
  }
  else {
    if (*piVar1 == 0) {
      *param_2 = *(undefined8 *)(piVar1 + 2);
      uVar2 = 0;
    }
    else {
      if (*piVar1 != 1) {
        ERR_new();
        uVar2 = 0x30d;
        goto LAB_00101d51;
      }
      *param_2 = 0;
      uVar2 = *(undefined8 *)(piVar1 + 2);
    }
    *param_3 = uVar2;
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = param_1[1];
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 * OSSL_CMP_ITAV_new_crls(X509_CRL *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  X509_CRL *ptr;
  ASN1_OBJECT *pAVar4;
  
  puVar2 = (undefined8 *)OSSL_CMP_ITAV_new();
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_1 != (X509_CRL *)0x0) {
    lVar3 = OPENSSL_sk_new_reserve(0,1);
    if ((lVar3 == 0) || (ptr = X509_CRL_dup(param_1), ptr == (X509_CRL *)0x0)) {
      ptr = (X509_CRL *)0x0;
    }
    else {
      iVar1 = OPENSSL_sk_push(lVar3,ptr);
      if (iVar1 != 0) goto LAB_00101df4;
    }
    CRYPTO_free(ptr);
    OPENSSL_sk_free(lVar3);
    OSSL_CMP_ITAV_free(puVar2);
    return (undefined8 *)0x0;
  }
  lVar3 = 0;
LAB_00101df4:
  pAVar4 = OBJ_nid2obj(0x4e9);
  puVar2[1] = lVar3;
  *puVar2 = pAVar4;
  return puVar2;
}



undefined8 OSSL_CMP_ITAV_get0_crls(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x334,"OSSL_CMP_ITAV_get0_crls");
    ERR_set_error(0x3a,0xc0102,0);
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x4e9) {
      *param_2 = param_1[1];
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x338,"OSSL_CMP_ITAV_get0_crls");
    ERR_set_error(0x3a,0x80106,0);
  }
  return 0;
}



long ossl_cmp_asn1_get_int(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_INTEGER_get_int64(&local_18,param_1);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x345,"ossl_cmp_asn1_get_int");
    ERR_set_error(0x3a,0xbb,0);
  }
  else if (local_18 < -0x80000000) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x349,"ossl_cmp_asn1_get_int");
    ERR_set_error(0x3a,0xe0,0);
  }
  else {
    if (local_18 < 0x80000000) goto LAB_00101f4f;
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_asn.c",0x34d,"ossl_cmp_asn1_get_int");
    ERR_set_error(0x3a,0xdf,0);
  }
  local_18 = 0xfffffffe;
LAB_00101f4f:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void d2i_OSSL_CMP_CERTORENCCERT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTORENCCERT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CERTORENCCERT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTORENCCERT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CERTORENCCERT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTORENCCERT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CERTORENCCERT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTORENCCERT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CERTIFIEDKEYPAIR(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTIFIEDKEYPAIR_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CERTIFIEDKEYPAIR(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTIFIEDKEYPAIR_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CERTIFIEDKEYPAIR_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTIFIEDKEYPAIR_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CERTIFIEDKEYPAIR_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTIFIEDKEYPAIR_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_REVDETAILS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVDETAILS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_REVDETAILS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVDETAILS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_REVDETAILS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVDETAILS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_REVDETAILS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVDETAILS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_REVREPCONTENT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVREPCONTENT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_REVREPCONTENT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVREPCONTENT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_REVREPCONTENT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVREPCONTENT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_REVREPCONTENT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_REVREPCONTENT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_KEYRECREPCONTENT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_KEYRECREPCONTENT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_KEYRECREPCONTENT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_KEYRECREPCONTENT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_KEYRECREPCONTENT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_KEYRECREPCONTENT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_KEYRECREPCONTENT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_KEYRECREPCONTENT_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_PKISI(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKISI_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_PKISI(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKISI_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_PKISI_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKISI_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_PKISI_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKISI_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CMP_PKISI_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKISI_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_OSSL_CMP_CERTSTATUS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTSTATUS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CERTSTATUS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTSTATUS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CERTSTATUS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTSTATUS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CERTSTATUS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTSTATUS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CERTRESPONSE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTRESPONSE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CERTRESPONSE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTRESPONSE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CERTRESPONSE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTRESPONSE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CERTRESPONSE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTRESPONSE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_POLLREQ(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREQ_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_POLLREQ(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREQ_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_POLLREQ_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREQ_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_POLLREQ_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREQ_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_POLLREP(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREP_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_POLLREP(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREP_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_POLLREP_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREP_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_POLLREP_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_POLLREP_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_CERTREPMESSAGE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREPMESSAGE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_CERTREPMESSAGE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREPMESSAGE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_CERTREPMESSAGE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREPMESSAGE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_CERTREPMESSAGE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_CERTREPMESSAGE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_PKIBODY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIBODY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_PKIBODY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIBODY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_PKIBODY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIBODY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_PKIBODY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIBODY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_CMP_PKIHEADER(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIHEADER_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_PKIHEADER(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIHEADER_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_PKIHEADER_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIHEADER_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_PKIHEADER_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PKIHEADER_it();
  ASN1_item_free(param_1,it);
  return;
}



undefined1 * OSSL_CMP_PROTECTEDPART_it(void)

{
  return local_it_2;
}



void d2i_OSSL_CMP_PROTECTEDPART(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PROTECTEDPART_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_CMP_PROTECTEDPART(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PROTECTEDPART_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_CMP_PROTECTEDPART_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PROTECTEDPART_it();
  ASN1_item_new(it);
  return;
}



void OSSL_CMP_PROTECTEDPART_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_PROTECTEDPART_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_CMP_MSG_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_CMP_MSG_it();
  ASN1_item_dup(it,param_1);
  return;
}


