
int OCSP_REQUEST_get_ext_count(OCSP_REQUEST *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count((stack_st_X509_EXTENSION *)x[1].optionalSignature);
  return iVar1;
}



int OCSP_REQUEST_get_ext_by_NID(OCSP_REQUEST *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID((stack_st_X509_EXTENSION *)x[1].optionalSignature,nid,lastpos);
  return iVar1;
}



int OCSP_REQUEST_get_ext_by_OBJ(OCSP_REQUEST *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ((stack_st_X509_EXTENSION *)x[1].optionalSignature,obj,lastpos);
  return iVar1;
}



int OCSP_REQUEST_get_ext_by_critical(OCSP_REQUEST *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical((stack_st_X509_EXTENSION *)x[1].optionalSignature,crit,lastpos)
  ;
  return iVar1;
}



X509_EXTENSION * OCSP_REQUEST_get_ext(OCSP_REQUEST *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext((stack_st_X509_EXTENSION *)x[1].optionalSignature,loc);
  return pXVar1;
}



X509_EXTENSION * OCSP_REQUEST_delete_ext(OCSP_REQUEST *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext((stack_st_X509_EXTENSION *)x[1].optionalSignature,loc);
  return pXVar1;
}



void * OCSP_REQUEST_get1_ext_d2i(OCSP_REQUEST *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i((stack_st_X509_EXTENSION *)x[1].optionalSignature,nid,crit,idx);
  return pvVar1;
}



int OCSP_REQUEST_add1_ext_i2d(OCSP_REQUEST *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&x[1].optionalSignature,nid,value,crit,flags);
  return iVar1;
}



int OCSP_REQUEST_add_ext(OCSP_REQUEST *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)&x[1].optionalSignature,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



int OCSP_ONEREQ_get_ext_count(OCSP_ONEREQ *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count(x->singleRequestExtensions);
  return iVar1;
}



int OCSP_ONEREQ_get_ext_by_NID(OCSP_ONEREQ *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID(x->singleRequestExtensions,nid,lastpos);
  return iVar1;
}



int OCSP_ONEREQ_get_ext_by_OBJ(OCSP_ONEREQ *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ(x->singleRequestExtensions,obj,lastpos);
  return iVar1;
}



int OCSP_ONEREQ_get_ext_by_critical(OCSP_ONEREQ *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical(x->singleRequestExtensions,crit,lastpos);
  return iVar1;
}



X509_EXTENSION * OCSP_ONEREQ_get_ext(OCSP_ONEREQ *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext(x->singleRequestExtensions,loc);
  return pXVar1;
}



X509_EXTENSION * OCSP_ONEREQ_delete_ext(OCSP_ONEREQ *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext(x->singleRequestExtensions,loc);
  return pXVar1;
}



void * OCSP_ONEREQ_get1_ext_d2i(OCSP_ONEREQ *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i(x->singleRequestExtensions,nid,crit,idx);
  return pvVar1;
}



int OCSP_ONEREQ_add1_ext_i2d(OCSP_ONEREQ *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d(&x->singleRequestExtensions,nid,value,crit,flags);
  return iVar1;
}



int OCSP_ONEREQ_add_ext(OCSP_ONEREQ *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext(&x->singleRequestExtensions,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



int OCSP_BASICRESP_get_ext_count(OCSP_BASICRESP *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm);
  return iVar1;
}



int OCSP_BASICRESP_get_ext_by_NID(OCSP_BASICRESP *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm,nid,lastpos);
  return iVar1;
}



int OCSP_BASICRESP_get_ext_by_OBJ(OCSP_BASICRESP *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm,obj,lastpos);
  return iVar1;
}



int OCSP_BASICRESP_get_ext_by_critical(OCSP_BASICRESP *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical
                    ((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm,crit,lastpos);
  return iVar1;
}



X509_EXTENSION * OCSP_BASICRESP_get_ext(OCSP_BASICRESP *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm,loc);
  return pXVar1;
}



X509_EXTENSION * OCSP_BASICRESP_delete_ext(OCSP_BASICRESP *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm,loc);
  return pXVar1;
}



void * OCSP_BASICRESP_get1_ext_d2i(OCSP_BASICRESP *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i((stack_st_X509_EXTENSION *)x[1].signatureAlgorithm,nid,crit,idx);
  return pvVar1;
}



int OCSP_BASICRESP_add1_ext_i2d(OCSP_BASICRESP *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&x[1].signatureAlgorithm,nid,value,crit,flags)
  ;
  return iVar1;
}



int OCSP_BASICRESP_add_ext(OCSP_BASICRESP *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)&x[1].signatureAlgorithm,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



int OCSP_SINGLERESP_get_ext_count(OCSP_SINGLERESP *x)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_count(x->singleExtensions);
  return iVar1;
}



int OCSP_SINGLERESP_get_ext_by_NID(OCSP_SINGLERESP *x,int nid,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_NID(x->singleExtensions,nid,lastpos);
  return iVar1;
}



int OCSP_SINGLERESP_get_ext_by_OBJ(OCSP_SINGLERESP *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ(x->singleExtensions,obj,lastpos);
  return iVar1;
}



int OCSP_SINGLERESP_get_ext_by_critical(OCSP_SINGLERESP *x,int crit,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_critical(x->singleExtensions,crit,lastpos);
  return iVar1;
}



X509_EXTENSION * OCSP_SINGLERESP_get_ext(OCSP_SINGLERESP *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_get_ext(x->singleExtensions,loc);
  return pXVar1;
}



X509_EXTENSION * OCSP_SINGLERESP_delete_ext(OCSP_SINGLERESP *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = X509v3_delete_ext(x->singleExtensions,loc);
  return pXVar1;
}



void * OCSP_SINGLERESP_get1_ext_d2i(OCSP_SINGLERESP *x,int nid,int *crit,int *idx)

{
  void *pvVar1;
  
  pvVar1 = X509V3_get_d2i(x->singleExtensions,nid,crit,idx);
  return pvVar1;
}



int OCSP_SINGLERESP_add1_ext_i2d(OCSP_SINGLERESP *x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  
  iVar1 = X509V3_add1_i2d(&x->singleExtensions,nid,value,crit,flags);
  return iVar1;
}



int OCSP_SINGLERESP_add_ext(OCSP_SINGLERESP *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext(&x->singleExtensions,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}



int OCSP_request_add1_nonce(OCSP_REQUEST *req,uchar *val,int len)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_50;
  int local_48 [2];
  uchar *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (len < 1) {
    len = 0x10;
  }
  uVar2 = 0;
  local_48[0] = ASN1_object_size(0,len,4);
  if (local_48[0] < 0) goto LAB_0010035a;
  local_40 = (uchar *)CRYPTO_malloc(local_48[0],"crypto/ocsp/ocsp_ext.c",0x106);
  if (local_40 == (uchar *)0x0) {
LAB_00100390:
    uVar2 = 0;
  }
  else {
    local_50 = local_40;
    ASN1_put_object(&local_50,0,len,4,0);
    if (val == (uchar *)0x0) {
      iVar1 = RAND_bytes(local_50,len);
      if (iVar1 < 1) goto LAB_00100390;
    }
    else {
      memcpy(local_50,val,(long)len);
    }
    iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&req[1].optionalSignature,0x16e,local_48,0,2
                           );
    uVar2 = (uint)(0 < iVar1);
  }
  CRYPTO_free(local_40);
LAB_0010035a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OCSP_basic_add1_nonce(OCSP_BASICRESP *resp,uchar *val,int len)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_50;
  int local_48 [2];
  uchar *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (len < 1) {
    len = 0x10;
  }
  uVar2 = 0;
  local_48[0] = ASN1_object_size(0,len,4);
  if (local_48[0] < 0) goto LAB_0010047a;
  local_40 = (uchar *)CRYPTO_malloc(local_48[0],"crypto/ocsp/ocsp_ext.c",0x106);
  if (local_40 == (uchar *)0x0) {
LAB_001004b0:
    uVar2 = 0;
  }
  else {
    local_50 = local_40;
    ASN1_put_object(&local_50,0,len,4,0);
    if (val == (uchar *)0x0) {
      iVar1 = RAND_bytes(local_50,len);
      if (iVar1 < 1) goto LAB_001004b0;
    }
    else {
      memcpy(local_50,val,(long)len);
    }
    iVar1 = X509V3_add1_i2d((stack_st_X509_EXTENSION **)&resp[1].signatureAlgorithm,0x16e,local_48,0
                            ,2);
    uVar2 = (uint)(0 < iVar1);
  }
  CRYPTO_free(local_40);
LAB_0010047a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OCSP_check_nonce(OCSP_REQUEST *req,OCSP_BASICRESP *bs)

{
  uint loc;
  uint loc_00;
  int iVar1;
  X509_EXTENSION *ne;
  X509_EXTENSION *ne_00;
  ASN1_OCTET_STRING *b;
  ASN1_OCTET_STRING *a;
  uint uVar2;
  
  loc = OCSP_REQUEST_get_ext_by_NID(req,0x16e,-1);
  loc_00 = OCSP_BASICRESP_get_ext_by_NID(bs,0x16e,-1);
  uVar2 = 2;
  if (-1 < (int)(loc & loc_00)) {
    if ((int)(loc_00 & ~loc) < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 3;
      if ((int)(~loc | loc_00) < 0) {
        ne = OCSP_REQUEST_get_ext(req,loc);
        ne_00 = OCSP_BASICRESP_get_ext(bs,loc_00);
        b = X509_EXTENSION_get_data(ne_00);
        a = X509_EXTENSION_get_data(ne);
        iVar1 = ASN1_OCTET_STRING_cmp(a,b);
        uVar2 = (uint)(iVar1 == 0);
      }
    }
  }
  return uVar2;
}



int OCSP_copy_nonce(OCSP_BASICRESP *resp,OCSP_REQUEST *req)

{
  int iVar1;
  X509_EXTENSION *ex;
  
  iVar1 = OCSP_REQUEST_get_ext_by_NID(req,0x16e,-1);
  if (-1 < iVar1) {
    ex = OCSP_REQUEST_get_ext(req,iVar1);
    iVar1 = OCSP_BASICRESP_add_ext(resp,ex,-1);
    return iVar1;
  }
  return 2;
}



X509_EXTENSION * OCSP_crlID_new(char *url,long *n,char *tim)

{
  int iVar1;
  OCSP_CRLID *a;
  ASN1_IA5STRING *str;
  ASN1_INTEGER *a_00;
  ASN1_GENERALIZEDTIME *s;
  X509_EXTENSION *pXVar2;
  
  a = OCSP_CRLID_new();
  if (a != (OCSP_CRLID *)0x0) {
    if (url == (char *)0x0) {
LAB_00100622:
      if (n == (long *)0x0) {
LAB_00100645:
        if (tim == (char *)0x0) {
LAB_00100667:
          pXVar2 = X509V3_EXT_i2d(0x16f,0,a);
          goto LAB_00100679;
        }
        s = ASN1_GENERALIZEDTIME_new();
        a->crlTime = s;
        if (s != (ASN1_GENERALIZEDTIME *)0x0) {
          iVar1 = ASN1_GENERALIZEDTIME_set_string(s,tim);
          if (iVar1 != 0) goto LAB_00100667;
        }
      }
      else {
        a_00 = ASN1_INTEGER_new();
        a->crlNum = a_00;
        if (a_00 != (ASN1_INTEGER *)0x0) {
          iVar1 = ASN1_INTEGER_set(a_00,*n);
          if (iVar1 != 0) goto LAB_00100645;
        }
      }
    }
    else {
      str = ASN1_IA5STRING_new();
      a->crlUrl = str;
      if (str != (ASN1_IA5STRING *)0x0) {
        iVar1 = ASN1_STRING_set(str,url,-1);
        if (iVar1 != 0) goto LAB_00100622;
      }
    }
  }
  pXVar2 = (X509_EXTENSION *)0x0;
LAB_00100679:
  OCSP_CRLID_free(a);
  return pXVar2;
}



X509_EXTENSION * OCSP_accept_responses_new(char **oids)

{
  int iVar1;
  void *ext_struc;
  ASN1_OBJECT *pAVar2;
  X509_EXTENSION *pXVar3;
  
  ext_struc = (void *)OPENSSL_sk_new_null();
  if (ext_struc == (void *)0x0) {
LAB_001006f8:
    pXVar3 = (X509_EXTENSION *)0x0;
  }
  else {
    if (oids != (char **)0x0) {
      for (; *oids != (char *)0x0; oids = oids + 1) {
        iVar1 = OBJ_txt2nid(*oids);
        if (((iVar1 != 0) && (pAVar2 = OBJ_nid2obj(iVar1), pAVar2 != (ASN1_OBJECT *)0x0)) &&
           (iVar1 = OPENSSL_sk_push(ext_struc), iVar1 == 0)) goto LAB_001006f8;
      }
    }
    pXVar3 = X509V3_EXT_i2d(0x170,0,ext_struc);
  }
  OPENSSL_sk_pop_free(ext_struc,&ASN1_OBJECT_free);
  return pXVar3;
}



X509_EXTENSION * OCSP_archive_cutoff_new(char *tim)

{
  int iVar1;
  ASN1_GENERALIZEDTIME *s;
  X509_EXTENSION *pXVar2;
  
  s = ASN1_GENERALIZEDTIME_new();
  if (s != (ASN1_GENERALIZEDTIME *)0x0) {
    iVar1 = ASN1_GENERALIZEDTIME_set_string(s,tim);
    if (iVar1 != 0) {
      pXVar2 = X509V3_EXT_i2d(0x172,0,s);
      goto LAB_0010076b;
    }
  }
  pXVar2 = (X509_EXTENSION *)0x0;
LAB_0010076b:
  ASN1_GENERALIZEDTIME_free(s);
  return pXVar2;
}



X509_EXTENSION * OCSP_url_svcloc_new(X509_NAME *issuer,char **urls)

{
  GENERAL_NAME *pGVar1;
  int iVar2;
  OCSP_SERVICELOC *a;
  X509_NAME *pXVar3;
  stack_st_ACCESS_DESCRIPTION *psVar4;
  ACCESS_DESCRIPTION *a_00;
  ASN1_OBJECT *pAVar5;
  ASN1_IA5STRING *str;
  X509_EXTENSION *pXVar6;
  
  a = OCSP_SERVICELOC_new();
  if (a != (OCSP_SERVICELOC *)0x0) {
    X509_NAME_free(a->issuer);
    pXVar3 = X509_NAME_dup(issuer);
    a->issuer = pXVar3;
    if (pXVar3 != (X509_NAME *)0x0) {
      if (urls != (char **)0x0) {
        if (*urls != (char *)0x0) {
          psVar4 = (stack_st_ACCESS_DESCRIPTION *)OPENSSL_sk_new_null();
          a->locator = psVar4;
          if (psVar4 == (stack_st_ACCESS_DESCRIPTION *)0x0) goto LAB_001007f0;
        }
        for (; *urls != (char *)0x0; urls = urls + 1) {
          a_00 = ACCESS_DESCRIPTION_new();
          if (a_00 == (ACCESS_DESCRIPTION *)0x0) goto LAB_001007f0;
          pAVar5 = OBJ_nid2obj(0xb2);
          a_00->method = pAVar5;
          if (pAVar5 == (ASN1_OBJECT *)0x0) {
LAB_001008b0:
            str = (ASN1_IA5STRING *)0x0;
LAB_001008b2:
            pXVar6 = (X509_EXTENSION *)0x0;
            goto LAB_00100888;
          }
          str = ASN1_IA5STRING_new();
          if (str == (ASN1_IA5STRING *)0x0) goto LAB_001008b0;
          iVar2 = ASN1_STRING_set(str,*urls,-1);
          if (iVar2 == 0) goto LAB_001008b2;
          pGVar1 = a_00->location;
          psVar4 = a->locator;
          pGVar1->type = 6;
          (pGVar1->d).rfc822Name = str;
          iVar2 = OPENSSL_sk_push(psVar4);
          if (iVar2 == 0) goto LAB_001008b0;
        }
      }
      a_00 = (ACCESS_DESCRIPTION *)0x0;
      pXVar6 = X509V3_EXT_i2d(0x173,0,a);
      str = (ASN1_IA5STRING *)0x0;
      goto LAB_00100888;
    }
  }
LAB_001007f0:
  a_00 = (ACCESS_DESCRIPTION *)0x0;
  str = (ASN1_IA5STRING *)0x0;
  pXVar6 = (X509_EXTENSION *)0x0;
LAB_00100888:
  ASN1_IA5STRING_free(str);
  ACCESS_DESCRIPTION_free(a_00);
  OCSP_SERVICELOC_free(a);
  return pXVar6;
}


