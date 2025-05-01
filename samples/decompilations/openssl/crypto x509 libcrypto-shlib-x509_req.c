
X509_REQ * X509_to_X509_REQ(X509 *x,EVP_PKEY *pkey,EVP_MD *md)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  X509_REQ *req;
  void *pvVar4;
  X509_NAME *name;
  EVP_PKEY *pkey_00;
  
  req = (X509_REQ *)
        X509_REQ_new_ex(*(undefined8 *)x[1].sha1_hash,*(undefined8 *)(x[1].sha1_hash + 8));
  if (req == (X509_REQ *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_req.c",0x1f,__func___7);
    ERR_set_error(0xb,0x8000d,0);
  }
  else {
    puVar1 = *(undefined4 **)&req->references;
    *puVar1 = 1;
    pvVar4 = CRYPTO_malloc(1,"crypto/x509/x509_req.c",0x26);
    *(void **)(puVar1 + 2) = pvVar4;
    puVar2 = *(undefined1 **)(*(long *)&req->references + 8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      name = X509_get_subject_name(x);
      iVar3 = X509_REQ_set_subject_name(req,name);
      if (((iVar3 != 0) && (pkey_00 = (EVP_PKEY *)X509_get0_pubkey(x), pkey_00 != (EVP_PKEY *)0x0))
         && (iVar3 = X509_REQ_set_pubkey(req,pkey_00), iVar3 != 0)) {
        if (pkey == (EVP_PKEY *)0x0) {
          return req;
        }
        iVar3 = X509_REQ_sign(req,pkey,md);
        if (iVar3 != 0) {
          return req;
        }
      }
    }
  }
  X509_REQ_free(req);
  return (X509_REQ *)0x0;
}



EVP_PKEY * X509_REQ_get_pubkey(X509_REQ *req)

{
  EVP_PKEY *pEVar1;
  
  if (req != (X509_REQ *)0x0) {
    pEVar1 = X509_PUBKEY_get((X509_PUBKEY *)req[1].sig_alg);
    return pEVar1;
  }
  return (EVP_PKEY *)0x0;
}



undefined8 X509_REQ_get0_pubkey(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x28));
    return uVar1;
  }
  return 0;
}



undefined8 X509_REQ_get_X509_PUBKEY(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



int X509_REQ_check_private_key(X509_REQ *x509,EVP_PKEY *pkey)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = X509_REQ_get0_pubkey();
  iVar2 = ossl_x509_check_private_key(uVar1,pkey);
  return iVar2;
}



int X509_REQ_extension_nid(int nid)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)ext_nids;
  piVar2 = (int *)ext_nids;
  if (iVar1 != 0) {
    while (nid != iVar1) {
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * X509_REQ_get_extension_nids(void)

{
  return (int *)ext_nids;
}



void X509_REQ_set_extension_nids(int *nids)

{
  ext_nids = (undefined *)nids;
  return;
}



int X509_REQ_get_attr_count(X509_REQ *req)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_count((stack_st_X509_ATTRIBUTE *)req[1].signature);
  return iVar1;
}



int X509_REQ_get_attr_by_NID(X509_REQ *req,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_NID((stack_st_X509_ATTRIBUTE *)req[1].signature,nid,lastpos);
  return iVar1;
}



int X509_REQ_get_attr_by_OBJ(X509_REQ *req,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_by_OBJ((stack_st_X509_ATTRIBUTE *)req[1].signature,obj,lastpos);
  return iVar1;
}



X509_ATTRIBUTE * X509_REQ_get_attr(X509_REQ *req,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  pXVar1 = X509at_get_attr((stack_st_X509_ATTRIBUTE *)req[1].signature,loc);
  return pXVar1;
}



ASN1_VALUE * get_extensions_by_nid(X509_REQ *param_1,int param_2)

{
  int loc;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar1;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  loc = X509_REQ_get_attr_by_NID(param_1,param_2,-1);
  if (loc < 0) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      pAVar2 = (ASN1_VALUE *)OPENSSL_sk_new_null();
      return pAVar2;
    }
  }
  else {
    attr = X509_REQ_get_attr(param_1,loc);
    pAVar1 = X509_ATTRIBUTE_get0_type(attr,0);
    if ((pAVar1 == (ASN1_TYPE *)0x0) || (pAVar1->type != 0x10)) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509_req.c",0x85,"get_extensions_by_nid");
      ERR_set_error(0xb,0x7a,0);
      pAVar2 = (ASN1_VALUE *)0x0;
    }
    else {
      local_18 = ((pAVar1->value).asn1_string)->data;
      it = (ASN1_ITEM *)X509_EXTENSIONS_it();
      pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,
                             (long)((pAVar1->value).asn1_string)->length,it);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pAVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



stack_st_X509_EXTENSION * X509_REQ_get_extensions(X509_REQ *req)

{
  int iVar1;
  stack_st_X509_EXTENSION *psVar2;
  int *piVar3;
  
  if ((req != (X509_REQ *)0x0) && (ext_nids != (undefined *)0x0)) {
    iVar1 = *(int *)ext_nids;
    piVar3 = (int *)ext_nids;
    while( true ) {
      if (iVar1 == 0) {
        psVar2 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null();
        return psVar2;
      }
      psVar2 = (stack_st_X509_EXTENSION *)get_extensions_by_nid(req);
      if (psVar2 == (stack_st_X509_EXTENSION *)0x0) break;
      iVar1 = OPENSSL_sk_num(psVar2);
      if (0 < iVar1) {
        return psVar2;
      }
      piVar3 = piVar3 + 1;
      OPENSSL_sk_free(psVar2);
      iVar1 = *piVar3;
    }
  }
  return (stack_st_X509_EXTENSION *)0x0;
}



X509_ATTRIBUTE * X509_REQ_delete_attr(X509_REQ *req,int loc)

{
  X509_ATTRIBUTE *pXVar1;
  
  if (req != (X509_REQ *)0x0) {
    pXVar1 = X509at_delete_attr((stack_st_X509_ATTRIBUTE *)req[1].signature,loc);
    if (pXVar1 != (X509_ATTRIBUTE *)0x0) {
      *(undefined4 *)&req->signature = 1;
    }
    return pXVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_req.c",0xf1,"X509_REQ_delete_attr");
  ERR_set_error(0xb,0xc0102,0);
  return (X509_ATTRIBUTE *)0x0;
}



int X509_REQ_add1_attr(X509_REQ *req,X509_ATTRIBUTE *attr)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  if (req == (X509_REQ *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_req.c",0xfd,"X509_REQ_add1_attr");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    psVar1 = X509at_add1_attr((stack_st_X509_ATTRIBUTE **)&req[1].signature,attr);
    if (psVar1 != (stack_st_X509_ATTRIBUTE *)0x0) {
      *(undefined4 *)&req->signature = 1;
      return 1;
    }
  }
  return 0;
}



int X509_REQ_add1_attr_by_OBJ(X509_REQ *req,ASN1_OBJECT *obj,int type,uchar *bytes,int len)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  if (req == (X509_REQ *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_req.c",0x10b,"X509_REQ_add1_attr_by_OBJ");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    psVar1 = X509at_add1_attr_by_OBJ
                       ((stack_st_X509_ATTRIBUTE **)&req[1].signature,obj,type,bytes,len);
    if (psVar1 != (stack_st_X509_ATTRIBUTE *)0x0) {
      *(undefined4 *)&req->signature = 1;
      return 1;
    }
  }
  return 0;
}



int X509_REQ_add1_attr_by_NID(X509_REQ *req,int nid,int type,uchar *bytes,int len)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  if (req == (X509_REQ *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_req.c",0x11a,"X509_REQ_add1_attr_by_NID");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    psVar1 = X509at_add1_attr_by_NID
                       ((stack_st_X509_ATTRIBUTE **)&req[1].signature,nid,type,bytes,len);
    if (psVar1 != (stack_st_X509_ATTRIBUTE *)0x0) {
      *(undefined4 *)&req->signature = 1;
      return 1;
    }
  }
  return 0;
}



int X509_REQ_add_extensions_nid(X509_REQ *req,stack_st_X509_EXTENSION *exts,int nid)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ASN1_ITEM *it;
  X509_ATTRIBUTE *a;
  ASN1_VALUE *val;
  long in_FS_OFFSET;
  uchar *local_40;
  ASN1_VALUE *local_38;
  long local_30;
  
  iVar2 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (uchar *)0x0;
  local_38 = (ASN1_VALUE *)0x0;
  iVar1 = OPENSSL_sk_num(exts);
  if (iVar1 < 1) goto LAB_00100664;
  iVar1 = X509at_get_attr_by_NID((stack_st_X509_ATTRIBUTE *)req[1].signature,nid,-1);
  if (iVar1 == -1) {
LAB_001005d8:
    it = (ASN1_ITEM *)X509_EXTENSIONS_it();
    val = local_38;
    if (local_38 == (ASN1_VALUE *)0x0) {
      val = (ASN1_VALUE *)exts;
    }
    iVar2 = ASN1_item_i2d(val,&local_40,it);
    if (iVar2 < 1) goto LAB_00100650;
    if (local_38 != (ASN1_VALUE *)0x0) {
      a = X509at_delete_attr((stack_st_X509_ATTRIBUTE *)req[1].signature,iVar1);
      if (a == (X509_ATTRIBUTE *)0x0) goto LAB_00100650;
      X509_ATTRIBUTE_free(a);
    }
    iVar2 = X509_REQ_add1_attr_by_NID(req,nid,0x10,local_40,iVar2);
    CRYPTO_free(local_40);
  }
  else {
    iVar2 = 0;
    local_38 = (ASN1_VALUE *)get_extensions_by_nid(req,nid);
    if (local_38 == (ASN1_VALUE *)0x0) goto LAB_00100664;
    lVar3 = X509v3_add_extensions(&local_38,exts);
    if (lVar3 != 0) goto LAB_001005d8;
LAB_00100650:
    iVar2 = 0;
  }
  OPENSSL_sk_pop_free(local_38,&X509_EXTENSION_free);
LAB_00100664:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_REQ_add_extensions(X509_REQ *req,stack_st_X509_EXTENSION *exts)

{
  int iVar1;
  
  iVar1 = X509_REQ_add_extensions_nid(req,exts,0xac);
  return iVar1;
}



int X509_REQ_add1_attr_by_txt(X509_REQ *req,char *attrname,int type,uchar *bytes,int len)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  if (req == (X509_REQ *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_req.c",0x129,"X509_REQ_add1_attr_by_txt");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    psVar1 = X509at_add1_attr_by_txt
                       ((stack_st_X509_ATTRIBUTE **)&req[1].signature,attrname,type,bytes,len);
    if (psVar1 != (stack_st_X509_ATTRIBUTE *)0x0) {
      *(undefined4 *)&req->signature = 1;
      return 1;
    }
  }
  return 0;
}



void X509_REQ_get_version(long param_1)

{
  ASN1_INTEGER_get(*(ASN1_INTEGER **)(param_1 + 0x18));
  return;
}



undefined8 X509_REQ_get_subject_name(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



void X509_REQ_get0_signature(long param_1,undefined8 *param_2,long *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x38;
  }
  return;
}



void X509_REQ_set0_signature(long param_1,undefined8 param_2)

{
  if (*(ASN1_BIT_STRING **)(param_1 + 0x48) != (ASN1_BIT_STRING *)0x0) {
    ASN1_BIT_STRING_free(*(ASN1_BIT_STRING **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



void X509_REQ_set1_signature_algo(long param_1)

{
  X509_ALGOR_copy(param_1 + 0x38);
  return;
}



void X509_REQ_get_signature_nid(long param_1)

{
  OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x38));
  return;
}



int i2d_re_X509_REQ_tbs(X509_REQ_INFO *param_1,uchar **param_2)

{
  int iVar1;
  
  if (param_1 != (X509_REQ_INFO *)0x0) {
    (param_1->enc).modified = 1;
    iVar1 = i2d_X509_REQ_INFO(param_1,param_2);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509_req.c",0x15a,"i2d_re_X509_REQ_tbs");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}


