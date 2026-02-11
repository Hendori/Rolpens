
undefined1 * X509_CERT_AUX_it(void)

{
  return local_it_0;
}



X509_CERT_AUX * d2i_X509_CERT_AUX(X509_CERT_AUX **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_CERT_AUX *pXVar1;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  pXVar1 = (X509_CERT_AUX *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_CERT_AUX(X509_CERT_AUX *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CERT_AUX * X509_CERT_AUX_new(void)

{
  ASN1_ITEM *it;
  X509_CERT_AUX *pXVar1;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  pXVar1 = (X509_CERT_AUX *)ASN1_item_new(it);
  return pXVar1;
}



void X509_CERT_AUX_free(X509_CERT_AUX *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



bool X509_trusted(long param_1)

{
  return *(long *)(param_1 + 0x150) != 0;
}



int X509_alias_set1(X509 *x,uchar *name,int len)

{
  stack_st_GENERAL_NAME *psVar1;
  int iVar2;
  ASN1_UTF8STRING *pAVar3;
  X509_CERT_AUX *pXVar4;
  
  if (name == (uchar *)0x0) {
    if (((x != (X509 *)0x0) && (x[1].altname != (stack_st_GENERAL_NAME *)0x0)) &&
       (pAVar3 = *(ASN1_UTF8STRING **)&((x[1].altname)->stack).sorted,
       pAVar3 != (ASN1_UTF8STRING *)0x0)) {
      ASN1_UTF8STRING_free(pAVar3);
      psVar1 = x[1].altname;
      (psVar1->stack).sorted = 0;
      (psVar1->stack).num_alloc = 0;
    }
    iVar2 = 1;
  }
  else {
    if (x != (X509 *)0x0) {
      pXVar4 = (X509_CERT_AUX *)x[1].altname;
      if (pXVar4 == (X509_CERT_AUX *)0x0) {
        pXVar4 = X509_CERT_AUX_new();
        x[1].altname = (stack_st_GENERAL_NAME *)pXVar4;
        if (pXVar4 == (X509_CERT_AUX *)0x0) {
          return 0;
        }
      }
      pAVar3 = pXVar4->alias;
      if (pAVar3 != (ASN1_UTF8STRING *)0x0) {
LAB_00100106:
        iVar2 = ASN1_STRING_set(pAVar3,name,len);
        return iVar2;
      }
      pAVar3 = ASN1_UTF8STRING_new();
      pXVar4->alias = pAVar3;
      if (pAVar3 != (ASN1_UTF8STRING *)0x0) goto LAB_00100106;
    }
    iVar2 = 0;
  }
  return iVar2;
}



int X509_keyid_set1(X509 *x,uchar *id,int len)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  X509_CERT_AUX *pXVar3;
  
  if (id == (uchar *)0x0) {
    if (((x != (X509 *)0x0) && (x[1].altname != (stack_st_GENERAL_NAME *)0x0)) &&
       (pAVar2 = (ASN1_OCTET_STRING *)((x[1].altname)->stack).comp,
       pAVar2 != (ASN1_OCTET_STRING *)0x0)) {
      ASN1_OCTET_STRING_free(pAVar2);
      ((x[1].altname)->stack).comp = (_func_257 *)0x0;
    }
    iVar1 = 1;
  }
  else {
    if (x != (X509 *)0x0) {
      pXVar3 = (X509_CERT_AUX *)x[1].altname;
      if (pXVar3 == (X509_CERT_AUX *)0x0) {
        pXVar3 = X509_CERT_AUX_new();
        x[1].altname = (stack_st_GENERAL_NAME *)pXVar3;
        if (pXVar3 == (X509_CERT_AUX *)0x0) {
          return 0;
        }
      }
      pAVar2 = pXVar3->keyid;
      if (pAVar2 != (ASN1_OCTET_STRING *)0x0) {
LAB_001001e6:
        iVar1 = ASN1_STRING_set(pAVar2,id,len);
        return iVar1;
      }
      pAVar2 = ASN1_OCTET_STRING_new();
      pXVar3->keyid = pAVar2;
      if (pAVar2 != (ASN1_OCTET_STRING *)0x0) goto LAB_001001e6;
    }
    iVar1 = 0;
  }
  return iVar1;
}



uchar * X509_alias_get0(X509 *x,int *len)

{
  stack_st_GENERAL_NAME *psVar1;
  
  psVar1 = x[1].altname;
  if ((psVar1 != (stack_st_GENERAL_NAME *)0x0) &&
     (psVar1 = *(stack_st_GENERAL_NAME **)&(psVar1->stack).sorted,
     psVar1 != (stack_st_GENERAL_NAME *)0x0)) {
    if (len != (int *)0x0) {
      *len = (psVar1->stack).num;
    }
    psVar1 = (stack_st_GENERAL_NAME *)(psVar1->stack).data;
  }
  return (uchar *)psVar1;
}



uchar * X509_keyid_get0(X509 *x,int *len)

{
  stack_st_GENERAL_NAME *psVar1;
  
  psVar1 = x[1].altname;
  if ((psVar1 != (stack_st_GENERAL_NAME *)0x0) &&
     (psVar1 = (stack_st_GENERAL_NAME *)(psVar1->stack).comp, psVar1 != (stack_st_GENERAL_NAME *)0x0
     )) {
    if (len != (int *)0x0) {
      *len = (psVar1->stack).num;
    }
    psVar1 = (stack_st_GENERAL_NAME *)(psVar1->stack).data;
  }
  return (uchar *)psVar1;
}



int X509_add1_trust_object(X509 *x,ASN1_OBJECT *obj)

{
  int iVar1;
  X509_CERT_AUX *pXVar2;
  stack_st_ASN1_OBJECT *psVar3;
  
  if ((obj != (ASN1_OBJECT *)0x0) && (obj = OBJ_dup(obj), obj == (ASN1_OBJECT *)0x0)) {
    return 0;
  }
  if (x != (X509 *)0x0) {
    pXVar2 = (X509_CERT_AUX *)x[1].altname;
    if (pXVar2 == (X509_CERT_AUX *)0x0) {
      pXVar2 = X509_CERT_AUX_new();
      x[1].altname = (stack_st_GENERAL_NAME *)pXVar2;
      if (pXVar2 == (X509_CERT_AUX *)0x0) goto LAB_00100340;
      psVar3 = pXVar2->trust;
    }
    else {
      psVar3 = pXVar2->trust;
    }
    if (psVar3 == (stack_st_ASN1_OBJECT *)0x0) {
      psVar3 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
      pXVar2->trust = psVar3;
      if (psVar3 == (stack_st_ASN1_OBJECT *)0x0) goto LAB_00100340;
    }
    if ((obj == (ASN1_OBJECT *)0x0) || (iVar1 = OPENSSL_sk_push(pXVar2->trust,obj), iVar1 != 0)) {
      return 1;
    }
  }
LAB_00100340:
  ASN1_OBJECT_free(obj);
  return 0;
}



int X509_add1_reject_object(X509 *x,ASN1_OBJECT *obj)

{
  int iVar1;
  ASN1_OBJECT *a;
  stack_st_ASN1_OBJECT *psVar2;
  X509_CERT_AUX *pXVar3;
  
  a = OBJ_dup(obj);
  if (a == (ASN1_OBJECT *)0x0) {
    return 0;
  }
  if (x != (X509 *)0x0) {
    pXVar3 = (X509_CERT_AUX *)x[1].altname;
    if (pXVar3 == (X509_CERT_AUX *)0x0) {
      pXVar3 = X509_CERT_AUX_new();
      x[1].altname = (stack_st_GENERAL_NAME *)pXVar3;
      if (pXVar3 == (X509_CERT_AUX *)0x0) goto LAB_001003f8;
    }
    psVar2 = pXVar3->reject;
    if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) {
      psVar2 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
      pXVar3->reject = psVar2;
      if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) goto LAB_001003f8;
    }
    iVar1 = OPENSSL_sk_push(psVar2,a);
    if (0 < iVar1) {
      return 1;
    }
  }
LAB_001003f8:
  ASN1_OBJECT_free(a);
  return 0;
}



void X509_trust_clear(X509 *x)

{
  if (x[1].altname != (stack_st_GENERAL_NAME *)0x0) {
    OPENSSL_sk_pop_free(*(undefined8 *)&(x[1].altname)->stack,ASN1_OBJECT_free);
    *(undefined8 *)&(x[1].altname)->stack = 0;
    return;
  }
  return;
}



void X509_reject_clear(X509 *x)

{
  if (x[1].altname != (stack_st_GENERAL_NAME *)0x0) {
    OPENSSL_sk_pop_free(((x[1].altname)->stack).data,ASN1_OBJECT_free);
    ((x[1].altname)->stack).data = (char **)0x0;
    return;
  }
  return;
}



long * X509_get0_trust_objects(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x150);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  return plVar1;
}



long X509_get0_reject_objects(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x150);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  return lVar1;
}


